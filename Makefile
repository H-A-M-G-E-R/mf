# Disable built-in rules
.SUFFIXES:

TARGET = mf_us.gba
BASEROM = mf_us_baserom.gba
SHA1FILE = mf.sha1
ELF = $(TARGET:.gba=.elf)
MAP = $(TARGET:.gba=.map)
DUMPS = $(BASEROM:.gba=.dump) $(TARGET:.gba=.dump)

# ROM header
GAME_TITLE = METROID4USA
GAME_CODE = AMTE
MAKER_CODE = 01
GAME_REVISION = 00

# Binaries
CPP = cpp
TOOLCHAIN ?= arm-none-eabi-
AS = $(TOOLCHAIN)as
LD = $(TOOLCHAIN)ld
OBJCOPY = $(TOOLCHAIN)objcopy
OBJDUMP = $(TOOLCHAIN)objdump

CC = agbcc

DIFF = diff -u
HOSTCC = cc
MKDIR = mkdir -p
RM = rm -f
SHA1SUM = sha1sum
TAIL = tail

# Tools
GBAFIX = tools/gbafix/gbafix
PYTHON = python3
EXTRACTOR = tools/extractor.py
PREPROC = tools/preproc/preproc

# Flags
ASFLAGS = -mcpu=arm7tdmi
CFLAGS = -Werror -O2 -mthumb-interwork -fhex-asm
CPPFLAGS = -nostdinc -Iinclude/
PREPROCFLAGS = charmap.txt

# Objects
CSRC = $(wildcard src/**.c) $(wildcard src/**/**.c) $(wildcard src/**/**/**.c)
.PRECIOUS: $(CSRC:.c=.s)
ASMSRC = $(CSRC:.c=.s) $(wildcard asm/*.s)
OBJ = $(ASMSRC:.s=.o) 

# Enable verbose output
ifeq ($(V),1)
	Q =
	MSG = @:
else
	Q = @
	MSG = @echo " "
endif

.PHONY: all
all: $(TARGET)

.PHONY: check
check: all
	$(MSG) SHA1SUM $(SHA1FILE)
	$Q$(SHA1SUM) -c $(SHA1FILE)

.PHONY: dump
dump: $(DUMPS)

.PHONY: diff
diff: $(DUMPS)
	$(MSG) DIFF $^
	$Q$(DIFF) $^

.PHONY: extract
extract:
	$(MSG) Extracting
	$Q python3 tools/extractor.py -r $(REGION)

.PHONY: clean
clean:
	$(MSG) RM roms
# Delete every gba file that doesn't end with baserom
	$Qfind -type f -name "*.gba" -a ! -name "*baserom.gba" -delete
	$(MSG) RM elf
	$Q$(RM) *.elf
	$(MSG) RM map
	$Q$(RM) *.map

	$(MSG) RM \*.dump
	$Q$(RM) $(DUMPS)
	$(MSG) RM \*.o
	$Q$(RM) $(OBJ)
	$(MSG) RM data/*.s
	$(MSG) RM src/\*\*/\*.s
	$Q$(RM) $(CSRC:.c=.s)
	$(MSG) RM $(GBAFIX)
	$Q$(RM) $(GBAFIX)
ifeq ($(DATA),1)
	$(MSG) RM data/
	$Q$(RM) -r data
endif
	$(MSG) RM linker.ld.pp
	$Q$(RM) linker.ld.pp

.PHONY: help
help:
	@echo 'Targets:'
	@echo '  all: build the ROM'
	@echo '  check: checksum the ROM'
	@echo '  dump: dump the ROMs'
	@echo '  diff: compare the ROM with the original'
	@echo '  clean: remove the ROM and intermediate files'
	@echo '  help: show this message'
	@echo ''
	@echo 'Flags:'
	@echo '  V=1: enable verbose output'

$(TARGET): $(ELF) $(GBAFIX)
	$(MSG) OBJCOPY $@
	$Q$(OBJCOPY) -O binary --gap-fill 0xff --pad-to 0x08800000 $< $@
	$(MSG) GBAFIX $@
	$Q$(GBAFIX) $@ -t$(GAME_TITLE) -c$(GAME_CODE) -m$(MAKER_CODE) -r$(GAME_REVISION)

$(ELF) $(MAP): $(OBJ) linker.ld
	$(MSG) LD $@
	$Q$(LD) $(LDFLAGS) -n -T linker.ld -Map=$(MAP) -o $@

%.dump: %.gba
	$(MSG) OBJDUMP $@
	$Q$(OBJDUMP) -D -bbinary -marm7tdmi -Mforce-thumb  $< | $(TAIL) -n+3 >$@
#--stop-address 0x8c71c
%.o: %.s
	$(MSG) AS $@
	$Q$(AS) $(ASFLAGS) $< -o $@

%.s: %.c
	$(MSG) CC $@
	$Q$(PREPROC) $< $(PREPROCFLAGS) | $(CPP) $(CPPFLAGS) | $(CC) -o $@ $(CFLAGS) && printf '\t.align 2, 0 @ dont insert nops\n' >> $@

src/sram/%.s: CFLAGS = -O1 -mthumb-interwork -fhex-asm
src/sram/%.s: src/sram/%.c

src/libgcc/%.s: CFLAGS = -O2 -fhex-asm
src/libgcc/%.s: src/libgcc/%.c

src/sprites_AI/%.s: CFLAGS = -O2 -mthumb-interwork -fhex-asm
src/sprites_AI/%.s: src/sram/%.c

tools/%: tools/%.c
	$(MSG) HOSTCC $@
	$Q$(HOSTCC) $< $(HOSTCFLAGS) $(HOSTCPPFLAGS) -o $@
