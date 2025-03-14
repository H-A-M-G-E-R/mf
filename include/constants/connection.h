#ifndef CONNECTION_CONSTANTS_H
#define CONNECTION_CONSTANTS_H

enum Area {
    AREA_MAIN_DECK,
    AREA_SECTOR_1,
    AREA_SECTOR_2,
    AREA_SECTOR_3,
    AREA_SECTOR_4,
    AREA_SECTOR_5,
    AREA_SECTOR_6,

    AREA_NORMAL_END,

    AREA_DEBUG_1 = AREA_NORMAL_END,
    AREA_DEBUG_2,
    AREA_DEBUG_3,

    AREA_END,
};

enum NavigationRoom {
    NAV_ROOM_MAIN_DECK_ROOM_0,
    NAV_ROOM_MAIN_DECK_ROOM_16,
    NAV_ROOM_MAIN_DECK_ROOM_9,
    NAV_ROOM_MAIN_DECK_ROOM_32,
    NAV_ROOM_SECTOR_1_ROOM_2,
    NAV_ROOM_SECTOR_2_ROOM_2,
    NAV_ROOM_SECTOR_3_ROOM_2,
    NAV_ROOM_SECTOR_4_ROOM_2,
    NAV_ROOM_SECTOR_5_ROOM_2,
    NAV_ROOM_SECTOR_6_ROOM_2,
    NAV_ROOM_MAIN_DECK_ROOM_56,
    NAV_ROOM_MAIN_DECK_ROOM_66,

    NAV_ROOM_END
};

enum DoorType {
    DOOR_TYPE_NONE,
    DOOR_TYPE_AREA_CONNECTION,
    DOOR_TYPE_NO_HATCH,
    DOOR_TYPE_OPEN_HATCH,
    DOOR_TYPE_HATCH_CAN_LOCK,

    DOOR_TYPE_END,

    DOOR_TYPE_NO_FLAGS = 0xF,

    DOOR_TYPE_EXISTS = (1 << 4),
    DOOR_TYPE_LOAD_EVENT_BASED_ROOM = (1 << 5),
    DOOR_TYPE_DISPLAY_LOCATION_NAME = (1 << 6),
};

enum MainDeckDoors {
    MAIN_DECK_DOOR_0,
    MAIN_DECK_DOOR_1,
    MAIN_DECK_DOOR_2,
    MAIN_DECK_DOOR_3,
    MAIN_DECK_DOOR_4,
    MAIN_DECK_DOOR_5,
    MAIN_DECK_DOOR_6,
    MAIN_DECK_DOOR_7,
    MAIN_DECK_DOOR_8,
    MAIN_DECK_DOOR_9,
    MAIN_DECK_DOOR_10,
    MAIN_DECK_DOOR_11,
    MAIN_DECK_DOOR_12,
    MAIN_DECK_DOOR_13,
    MAIN_DECK_DOOR_14,
    MAIN_DECK_DOOR_15,
    MAIN_DECK_DOOR_16,
    MAIN_DECK_DOOR_17,
    MAIN_DECK_DOOR_18,
    MAIN_DECK_DOOR_19,
    MAIN_DECK_DOOR_20,
    MAIN_DECK_DOOR_21,
    MAIN_DECK_DOOR_22,
    MAIN_DECK_DOOR_23,
    MAIN_DECK_DOOR_24,
    MAIN_DECK_DOOR_25,
    MAIN_DECK_DOOR_26,
    MAIN_DECK_DOOR_27,
    MAIN_DECK_DOOR_28,
    MAIN_DECK_DOOR_29,
    MAIN_DECK_DOOR_30,
    MAIN_DECK_DOOR_31,
    MAIN_DECK_DOOR_32,
    MAIN_DECK_DOOR_33,
    MAIN_DECK_DOOR_34,
    MAIN_DECK_DOOR_35,
    MAIN_DECK_DOOR_36,
    MAIN_DECK_DOOR_37,
    MAIN_DECK_DOOR_38,
    MAIN_DECK_DOOR_39,
    MAIN_DECK_DOOR_40,
    MAIN_DECK_DOOR_41,
    MAIN_DECK_DOOR_42,
    MAIN_DECK_DOOR_43,
    MAIN_DECK_DOOR_44,
    MAIN_DECK_DOOR_45,
    MAIN_DECK_DOOR_46,
    MAIN_DECK_DOOR_47,
    MAIN_DECK_DOOR_48,
    MAIN_DECK_DOOR_49,
    MAIN_DECK_DOOR_50,
    MAIN_DECK_DOOR_51,
    MAIN_DECK_DOOR_52,
    MAIN_DECK_DOOR_53,
    MAIN_DECK_DOOR_54,
    MAIN_DECK_DOOR_55,
    MAIN_DECK_DOOR_56,
    MAIN_DECK_DOOR_57,
    MAIN_DECK_DOOR_58,
    MAIN_DECK_DOOR_59,
    MAIN_DECK_DOOR_60,
    MAIN_DECK_DOOR_61,
    MAIN_DECK_DOOR_62,
    MAIN_DECK_DOOR_63,
    MAIN_DECK_DOOR_64,
    MAIN_DECK_DOOR_65,
    MAIN_DECK_DOOR_66,
    MAIN_DECK_DOOR_67,
    MAIN_DECK_DOOR_68,
    MAIN_DECK_DOOR_69,
    MAIN_DECK_DOOR_70,
    MAIN_DECK_DOOR_71,
    MAIN_DECK_DOOR_72,
    MAIN_DECK_DOOR_73,
    MAIN_DECK_DOOR_74,
    MAIN_DECK_DOOR_75,
    MAIN_DECK_DOOR_76,
    MAIN_DECK_DOOR_77,
    MAIN_DECK_DOOR_78,
    MAIN_DECK_DOOR_79,
    MAIN_DECK_DOOR_80,
    MAIN_DECK_DOOR_81,
    MAIN_DECK_DOOR_82,
    MAIN_DECK_DOOR_83,
    MAIN_DECK_DOOR_84,
    MAIN_DECK_DOOR_85,
    MAIN_DECK_DOOR_86,
    MAIN_DECK_DOOR_87,
    MAIN_DECK_DOOR_88,
    MAIN_DECK_DOOR_89,
    MAIN_DECK_DOOR_90,
    MAIN_DECK_DOOR_91,
    MAIN_DECK_DOOR_92,
    MAIN_DECK_DOOR_93,
    MAIN_DECK_DOOR_94,
    MAIN_DECK_DOOR_95,
    MAIN_DECK_DOOR_96,
    MAIN_DECK_DOOR_97,
    MAIN_DECK_DOOR_98,
    MAIN_DECK_DOOR_99,
    MAIN_DECK_DOOR_100,
    MAIN_DECK_DOOR_101,
    MAIN_DECK_DOOR_102,
    MAIN_DECK_DOOR_103,
    MAIN_DECK_DOOR_104,
    MAIN_DECK_DOOR_105,
    MAIN_DECK_DOOR_106,
    MAIN_DECK_DOOR_107,
    MAIN_DECK_DOOR_108,
    MAIN_DECK_DOOR_109,
    MAIN_DECK_DOOR_110,
    MAIN_DECK_DOOR_111,
    MAIN_DECK_DOOR_112,
    MAIN_DECK_DOOR_113,
    MAIN_DECK_DOOR_114,
    MAIN_DECK_DOOR_115,
    MAIN_DECK_DOOR_116,
    MAIN_DECK_DOOR_117,
    MAIN_DECK_DOOR_118,
    MAIN_DECK_DOOR_119,
    MAIN_DECK_DOOR_120,
    MAIN_DECK_DOOR_121,
    MAIN_DECK_DOOR_122,
    MAIN_DECK_DOOR_123,
    MAIN_DECK_DOOR_124,
    MAIN_DECK_DOOR_125,
    MAIN_DECK_DOOR_126,
    MAIN_DECK_DOOR_127,
    MAIN_DECK_DOOR_128,
    MAIN_DECK_DOOR_129,
    MAIN_DECK_DOOR_130,
    MAIN_DECK_DOOR_131,
    MAIN_DECK_DOOR_132,
    MAIN_DECK_DOOR_133,
    MAIN_DECK_DOOR_134,
    MAIN_DECK_DOOR_135,
    MAIN_DECK_DOOR_136,
    MAIN_DECK_DOOR_137,
    MAIN_DECK_DOOR_138,
    MAIN_DECK_DOOR_139,
    MAIN_DECK_DOOR_140,
    MAIN_DECK_DOOR_141,
    MAIN_DECK_DOOR_142,
    MAIN_DECK_DOOR_143,
    MAIN_DECK_DOOR_144,
    MAIN_DECK_DOOR_145,
    MAIN_DECK_DOOR_146,
    MAIN_DECK_DOOR_147,
    MAIN_DECK_DOOR_148,
    MAIN_DECK_DOOR_149,
    MAIN_DECK_DOOR_150,
    MAIN_DECK_DOOR_151,
    MAIN_DECK_DOOR_152,
    MAIN_DECK_DOOR_153,
    MAIN_DECK_DOOR_154,
    MAIN_DECK_DOOR_155,
    MAIN_DECK_DOOR_156,
    MAIN_DECK_DOOR_157,
    MAIN_DECK_DOOR_158,
    MAIN_DECK_DOOR_159,
    MAIN_DECK_DOOR_160,
    MAIN_DECK_DOOR_161,
    MAIN_DECK_DOOR_162,
    MAIN_DECK_DOOR_163,
    MAIN_DECK_DOOR_164,
    MAIN_DECK_DOOR_165,
    MAIN_DECK_DOOR_166,
    MAIN_DECK_DOOR_167,
    MAIN_DECK_DOOR_168,
    MAIN_DECK_DOOR_169,
    MAIN_DECK_DOOR_170,
    MAIN_DECK_DOOR_171,
    MAIN_DECK_DOOR_172,
    MAIN_DECK_DOOR_173,
    MAIN_DECK_DOOR_174,
    MAIN_DECK_DOOR_175,
    MAIN_DECK_DOOR_176,
    MAIN_DECK_DOOR_177,
    MAIN_DECK_DOOR_178,
    MAIN_DECK_DOOR_179,
    MAIN_DECK_DOOR_180,
    MAIN_DECK_DOOR_181,
    MAIN_DECK_DOOR_182,
    MAIN_DECK_DOOR_183,
    MAIN_DECK_DOOR_184,
    MAIN_DECK_DOOR_185,
    MAIN_DECK_DOOR_186,
    MAIN_DECK_DOOR_187,
    MAIN_DECK_DOOR_188,
    MAIN_DECK_DOOR_189,
    MAIN_DECK_DOOR_190,
    MAIN_DECK_DOOR_191,
    MAIN_DECK_DOOR_192,
    MAIN_DECK_DOOR_193,
    MAIN_DECK_DOOR_194,
    MAIN_DECK_DOOR_195,
    MAIN_DECK_DOOR_196,
    MAIN_DECK_DOOR_197,
    MAIN_DECK_DOOR_198,
    MAIN_DECK_DOOR_199,
    MAIN_DECK_DOOR_200,
    MAIN_DECK_DOOR_201,
    MAIN_DECK_DOOR_202,
    MAIN_DECK_DOOR_203,
    MAIN_DECK_DOOR_204,
};

enum Sector1Doors {
    SECTOR_1_DOOR_0,
    SECTOR_1_DOOR_1,
    SECTOR_1_DOOR_2,
    SECTOR_1_DOOR_3,
    SECTOR_1_DOOR_4,
    SECTOR_1_DOOR_5,
    SECTOR_1_DOOR_6,
    SECTOR_1_DOOR_7,
    SECTOR_1_DOOR_8,
    SECTOR_1_DOOR_9,
    SECTOR_1_DOOR_10,
    SECTOR_1_DOOR_11,
    SECTOR_1_DOOR_12,
    SECTOR_1_DOOR_13,
    SECTOR_1_DOOR_14,
    SECTOR_1_DOOR_15,
    SECTOR_1_DOOR_16,
    SECTOR_1_DOOR_17,
    SECTOR_1_DOOR_18,
    SECTOR_1_DOOR_19,
    SECTOR_1_DOOR_20,
    SECTOR_1_DOOR_21,
    SECTOR_1_DOOR_22,
    SECTOR_1_DOOR_23,
    SECTOR_1_DOOR_24,
    SECTOR_1_DOOR_25,
    SECTOR_1_DOOR_26,
    SECTOR_1_DOOR_27,
    SECTOR_1_DOOR_28,
    SECTOR_1_DOOR_29,
    SECTOR_1_DOOR_30,
    SECTOR_1_DOOR_31,
    SECTOR_1_DOOR_32,
    SECTOR_1_DOOR_33,
    SECTOR_1_DOOR_34,
    SECTOR_1_DOOR_35,
    SECTOR_1_DOOR_36,
    SECTOR_1_DOOR_37,
    SECTOR_1_DOOR_38,
    SECTOR_1_DOOR_39,
    SECTOR_1_DOOR_40,
    SECTOR_1_DOOR_41,
    SECTOR_1_DOOR_42,
    SECTOR_1_DOOR_43,
    SECTOR_1_DOOR_44,
    SECTOR_1_DOOR_45,
    SECTOR_1_DOOR_46,
    SECTOR_1_DOOR_47,
    SECTOR_1_DOOR_48,
    SECTOR_1_DOOR_49,
    SECTOR_1_DOOR_50,
    SECTOR_1_DOOR_51,
    SECTOR_1_DOOR_52,
    SECTOR_1_DOOR_53,
    SECTOR_1_DOOR_54,
    SECTOR_1_DOOR_55,
    SECTOR_1_DOOR_56,
    SECTOR_1_DOOR_57,
    SECTOR_1_DOOR_58,
    SECTOR_1_DOOR_59,
    SECTOR_1_DOOR_60,
    SECTOR_1_DOOR_61,
    SECTOR_1_DOOR_62,
    SECTOR_1_DOOR_63,
    SECTOR_1_DOOR_64,
    SECTOR_1_DOOR_65,
    SECTOR_1_DOOR_66,
    SECTOR_1_DOOR_67,
    SECTOR_1_DOOR_68,
    SECTOR_1_DOOR_69,
    SECTOR_1_DOOR_70,
    SECTOR_1_DOOR_71,
    SECTOR_1_DOOR_72,
    SECTOR_1_DOOR_73,
    SECTOR_1_DOOR_74,
    SECTOR_1_DOOR_75,
    SECTOR_1_DOOR_76,
    SECTOR_1_DOOR_77,
    SECTOR_1_DOOR_78,
    SECTOR_1_DOOR_79,
    SECTOR_1_DOOR_80,
    SECTOR_1_DOOR_81,
    SECTOR_1_DOOR_82,
    SECTOR_1_DOOR_83,
    SECTOR_1_DOOR_84,
    SECTOR_1_DOOR_85,
    SECTOR_1_DOOR_86,
    SECTOR_1_DOOR_87,
    SECTOR_1_DOOR_88,
    SECTOR_1_DOOR_89,
    SECTOR_1_DOOR_90,
    SECTOR_1_DOOR_91,
    SECTOR_1_DOOR_92,
    SECTOR_1_DOOR_93,
    SECTOR_1_DOOR_94,
    SECTOR_1_DOOR_95,
    SECTOR_1_DOOR_96,
    SECTOR_1_DOOR_97,
    SECTOR_1_DOOR_98,
    SECTOR_1_DOOR_99,
    SECTOR_1_DOOR_100,
    SECTOR_1_DOOR_101,
    SECTOR_1_DOOR_102,
    SECTOR_1_DOOR_103,
    SECTOR_1_DOOR_104,
    SECTOR_1_DOOR_105,
    SECTOR_1_DOOR_106,
    SECTOR_1_DOOR_107,
    SECTOR_1_DOOR_108,
    SECTOR_1_DOOR_109,
    SECTOR_1_DOOR_110,
    SECTOR_1_DOOR_111,
    SECTOR_1_DOOR_112,
    SECTOR_1_DOOR_113,
    SECTOR_1_DOOR_114,
};

enum Sector2Doors {
    SECTOR_2_DOOR_0,
    SECTOR_2_DOOR_1,
    SECTOR_2_DOOR_2,
    SECTOR_2_DOOR_3,
    SECTOR_2_DOOR_4,
    SECTOR_2_DOOR_5,
    SECTOR_2_DOOR_6,
    SECTOR_2_DOOR_7,
    SECTOR_2_DOOR_8,
    SECTOR_2_DOOR_9,
    SECTOR_2_DOOR_10,
    SECTOR_2_DOOR_11,
    SECTOR_2_DOOR_12,
    SECTOR_2_DOOR_13,
    SECTOR_2_DOOR_14,
    SECTOR_2_DOOR_15,
    SECTOR_2_DOOR_16,
    SECTOR_2_DOOR_17,
    SECTOR_2_DOOR_18,
    SECTOR_2_DOOR_19,
    SECTOR_2_DOOR_20,
    SECTOR_2_DOOR_21,
    SECTOR_2_DOOR_22,
    SECTOR_2_DOOR_23,
    SECTOR_2_DOOR_24,
    SECTOR_2_DOOR_25,
    SECTOR_2_DOOR_26,
    SECTOR_2_DOOR_27,
    SECTOR_2_DOOR_28,
    SECTOR_2_DOOR_29,
    SECTOR_2_DOOR_30,
    SECTOR_2_DOOR_31,
    SECTOR_2_DOOR_32,
    SECTOR_2_DOOR_33,
    SECTOR_2_DOOR_34,
    SECTOR_2_DOOR_35,
    SECTOR_2_DOOR_36,
    SECTOR_2_DOOR_37,
    SECTOR_2_DOOR_38,
    SECTOR_2_DOOR_39,
    SECTOR_2_DOOR_40,
    SECTOR_2_DOOR_41,
    SECTOR_2_DOOR_42,
    SECTOR_2_DOOR_43,
    SECTOR_2_DOOR_44,
    SECTOR_2_DOOR_45,
    SECTOR_2_DOOR_46,
    SECTOR_2_DOOR_47,
    SECTOR_2_DOOR_48,
    SECTOR_2_DOOR_49,
    SECTOR_2_DOOR_50,
    SECTOR_2_DOOR_51,
    SECTOR_2_DOOR_52,
    SECTOR_2_DOOR_53,
    SECTOR_2_DOOR_54,
    SECTOR_2_DOOR_55,
    SECTOR_2_DOOR_56,
    SECTOR_2_DOOR_57,
    SECTOR_2_DOOR_58,
    SECTOR_2_DOOR_59,
    SECTOR_2_DOOR_60,
    SECTOR_2_DOOR_61,
    SECTOR_2_DOOR_62,
    SECTOR_2_DOOR_63,
    SECTOR_2_DOOR_64,
    SECTOR_2_DOOR_65,
    SECTOR_2_DOOR_66,
    SECTOR_2_DOOR_67,
    SECTOR_2_DOOR_68,
    SECTOR_2_DOOR_69,
    SECTOR_2_DOOR_70,
    SECTOR_2_DOOR_71,
    SECTOR_2_DOOR_72,
    SECTOR_2_DOOR_73,
    SECTOR_2_DOOR_74,
    SECTOR_2_DOOR_75,
    SECTOR_2_DOOR_76,
    SECTOR_2_DOOR_77,
    SECTOR_2_DOOR_78,
    SECTOR_2_DOOR_79,
    SECTOR_2_DOOR_80,
    SECTOR_2_DOOR_81,
    SECTOR_2_DOOR_82,
    SECTOR_2_DOOR_83,
    SECTOR_2_DOOR_84,
    SECTOR_2_DOOR_85,
    SECTOR_2_DOOR_86,
    SECTOR_2_DOOR_87,
    SECTOR_2_DOOR_88,
    SECTOR_2_DOOR_89,
    SECTOR_2_DOOR_90,
    SECTOR_2_DOOR_91,
    SECTOR_2_DOOR_92,
    SECTOR_2_DOOR_93,
    SECTOR_2_DOOR_94,
    SECTOR_2_DOOR_95,
    SECTOR_2_DOOR_96,
    SECTOR_2_DOOR_97,
    SECTOR_2_DOOR_98,
    SECTOR_2_DOOR_99,
    SECTOR_2_DOOR_100,
    SECTOR_2_DOOR_101,
    SECTOR_2_DOOR_102,
    SECTOR_2_DOOR_103,
    SECTOR_2_DOOR_104,
    SECTOR_2_DOOR_105,
    SECTOR_2_DOOR_106,
    SECTOR_2_DOOR_107,
    SECTOR_2_DOOR_108,
    SECTOR_2_DOOR_109,
    SECTOR_2_DOOR_110,
    SECTOR_2_DOOR_111,
    SECTOR_2_DOOR_112,
    SECTOR_2_DOOR_113,
    SECTOR_2_DOOR_114,
    SECTOR_2_DOOR_115,
    SECTOR_2_DOOR_116,
    SECTOR_2_DOOR_117,
    SECTOR_2_DOOR_118,
    SECTOR_2_DOOR_119,
    SECTOR_2_DOOR_120,
    SECTOR_2_DOOR_121,
    SECTOR_2_DOOR_122,
    SECTOR_2_DOOR_123,
    SECTOR_2_DOOR_124,
    SECTOR_2_DOOR_125,
    SECTOR_2_DOOR_126,
    SECTOR_2_DOOR_127,
    SECTOR_2_DOOR_128,
    SECTOR_2_DOOR_129,
    SECTOR_2_DOOR_130,
    SECTOR_2_DOOR_131,
    SECTOR_2_DOOR_132,
    SECTOR_2_DOOR_133,
    SECTOR_2_DOOR_134,
    SECTOR_2_DOOR_135,
    SECTOR_2_DOOR_136,
    SECTOR_2_DOOR_137,
    SECTOR_2_DOOR_138,
    SECTOR_2_DOOR_139,
    SECTOR_2_DOOR_140,
    SECTOR_2_DOOR_141,
    SECTOR_2_DOOR_142,
    SECTOR_2_DOOR_143,
    SECTOR_2_DOOR_144,
    SECTOR_2_DOOR_145,
};

enum Sector3Doors {
    SECTOR_3_DOOR_0,
    SECTOR_3_DOOR_1,
    SECTOR_3_DOOR_2,
    SECTOR_3_DOOR_3,
    SECTOR_3_DOOR_4,
    SECTOR_3_DOOR_5,
    SECTOR_3_DOOR_6,
    SECTOR_3_DOOR_7,
    SECTOR_3_DOOR_8,
    SECTOR_3_DOOR_9,
    SECTOR_3_DOOR_10,
    SECTOR_3_DOOR_11,
    SECTOR_3_DOOR_12,
    SECTOR_3_DOOR_13,
    SECTOR_3_DOOR_14,
    SECTOR_3_DOOR_15,
    SECTOR_3_DOOR_16,
    SECTOR_3_DOOR_17,
    SECTOR_3_DOOR_18,
    SECTOR_3_DOOR_19,
    SECTOR_3_DOOR_20,
    SECTOR_3_DOOR_21,
    SECTOR_3_DOOR_22,
    SECTOR_3_DOOR_23,
    SECTOR_3_DOOR_24,
    SECTOR_3_DOOR_25,
    SECTOR_3_DOOR_26,
    SECTOR_3_DOOR_27,
    SECTOR_3_DOOR_28,
    SECTOR_3_DOOR_29,
    SECTOR_3_DOOR_30,
    SECTOR_3_DOOR_31,
    SECTOR_3_DOOR_32,
    SECTOR_3_DOOR_33,
    SECTOR_3_DOOR_34,
    SECTOR_3_DOOR_35,
    SECTOR_3_DOOR_36,
    SECTOR_3_DOOR_37,
    SECTOR_3_DOOR_38,
    SECTOR_3_DOOR_39,
    SECTOR_3_DOOR_40,
    SECTOR_3_DOOR_41,
    SECTOR_3_DOOR_42,
    SECTOR_3_DOOR_43,
    SECTOR_3_DOOR_44,
    SECTOR_3_DOOR_45,
    SECTOR_3_DOOR_46,
    SECTOR_3_DOOR_47,
    SECTOR_3_DOOR_48,
    SECTOR_3_DOOR_49,
    SECTOR_3_DOOR_50,
    SECTOR_3_DOOR_51,
    SECTOR_3_DOOR_52,
    SECTOR_3_DOOR_53,
    SECTOR_3_DOOR_54,
    SECTOR_3_DOOR_55,
    SECTOR_3_DOOR_56,
    SECTOR_3_DOOR_57,
    SECTOR_3_DOOR_58,
    SECTOR_3_DOOR_59,
    SECTOR_3_DOOR_60,
    SECTOR_3_DOOR_61,
    SECTOR_3_DOOR_62,
    SECTOR_3_DOOR_63,
    SECTOR_3_DOOR_64,
    SECTOR_3_DOOR_65,
    SECTOR_3_DOOR_66,
    SECTOR_3_DOOR_67,
    SECTOR_3_DOOR_68,
    SECTOR_3_DOOR_69,
    SECTOR_3_DOOR_70,
    SECTOR_3_DOOR_71,
    SECTOR_3_DOOR_72,
    SECTOR_3_DOOR_73,
    SECTOR_3_DOOR_74,
    SECTOR_3_DOOR_75,
    SECTOR_3_DOOR_76,
    SECTOR_3_DOOR_77,
    SECTOR_3_DOOR_78,
    SECTOR_3_DOOR_79,
    SECTOR_3_DOOR_80,
    SECTOR_3_DOOR_81,
    SECTOR_3_DOOR_82,
    SECTOR_3_DOOR_83,
    SECTOR_3_DOOR_84,
    SECTOR_3_DOOR_85,
    SECTOR_3_DOOR_86,
    SECTOR_3_DOOR_87,
    SECTOR_3_DOOR_88,
    SECTOR_3_DOOR_89,
};

enum Sector5Doors {
    SECTOR_5_DOOR_0,
    SECTOR_5_DOOR_1,
    SECTOR_5_DOOR_2,
    SECTOR_5_DOOR_3,
    SECTOR_5_DOOR_4,
    SECTOR_5_DOOR_5,
    SECTOR_5_DOOR_6,
    SECTOR_5_DOOR_7,
    SECTOR_5_DOOR_8,
    SECTOR_5_DOOR_9,
    SECTOR_5_DOOR_10,
    SECTOR_5_DOOR_11,
    SECTOR_5_DOOR_12,
    SECTOR_5_DOOR_13,
    SECTOR_5_DOOR_14,
    SECTOR_5_DOOR_15,
    SECTOR_5_DOOR_16,
    SECTOR_5_DOOR_17,
    SECTOR_5_DOOR_18,
    SECTOR_5_DOOR_19,
    SECTOR_5_DOOR_20,
    SECTOR_5_DOOR_21,
    SECTOR_5_DOOR_22,
    SECTOR_5_DOOR_23,
    SECTOR_5_DOOR_24,
    SECTOR_5_DOOR_25,
    SECTOR_5_DOOR_26,
    SECTOR_5_DOOR_27,
    SECTOR_5_DOOR_28,
    SECTOR_5_DOOR_29,
    SECTOR_5_DOOR_30,
    SECTOR_5_DOOR_31,
    SECTOR_5_DOOR_32,
    SECTOR_5_DOOR_33,
    SECTOR_5_DOOR_34,
    SECTOR_5_DOOR_35,
    SECTOR_5_DOOR_36,
    SECTOR_5_DOOR_37,
    SECTOR_5_DOOR_38,
    SECTOR_5_DOOR_39,
    SECTOR_5_DOOR_40,
    SECTOR_5_DOOR_41,
    SECTOR_5_DOOR_42,
    SECTOR_5_DOOR_43,
    SECTOR_5_DOOR_44,
    SECTOR_5_DOOR_45,
    SECTOR_5_DOOR_46,
    SECTOR_5_DOOR_47,
    SECTOR_5_DOOR_48,
    SECTOR_5_DOOR_49,
    SECTOR_5_DOOR_50,
    SECTOR_5_DOOR_51,
    SECTOR_5_DOOR_52,
    SECTOR_5_DOOR_53,
    SECTOR_5_DOOR_54,
    SECTOR_5_DOOR_55,
    SECTOR_5_DOOR_56,
    SECTOR_5_DOOR_57,
    SECTOR_5_DOOR_58,
    SECTOR_5_DOOR_59,
    SECTOR_5_DOOR_60,
    SECTOR_5_DOOR_61,
    SECTOR_5_DOOR_62,
    SECTOR_5_DOOR_63,
    SECTOR_5_DOOR_64,
    SECTOR_5_DOOR_65,
    SECTOR_5_DOOR_66,
    SECTOR_5_DOOR_67,
    SECTOR_5_DOOR_68,
    SECTOR_5_DOOR_69,
    SECTOR_5_DOOR_70,
    SECTOR_5_DOOR_71,
    SECTOR_5_DOOR_72,
    SECTOR_5_DOOR_73,
    SECTOR_5_DOOR_74,
    SECTOR_5_DOOR_75,
    SECTOR_5_DOOR_76,
    SECTOR_5_DOOR_77,
    SECTOR_5_DOOR_78,
    SECTOR_5_DOOR_79,
    SECTOR_5_DOOR_80,
    SECTOR_5_DOOR_81,
    SECTOR_5_DOOR_82,
    SECTOR_5_DOOR_83,
    SECTOR_5_DOOR_84,
    SECTOR_5_DOOR_85,
    SECTOR_5_DOOR_86,
    SECTOR_5_DOOR_87,
    SECTOR_5_DOOR_88,
    SECTOR_5_DOOR_89,
    SECTOR_5_DOOR_90,
    SECTOR_5_DOOR_91,
    SECTOR_5_DOOR_92,
    SECTOR_5_DOOR_93,
    SECTOR_5_DOOR_94,
    SECTOR_5_DOOR_95,
    SECTOR_5_DOOR_96,
    SECTOR_5_DOOR_97,
    SECTOR_5_DOOR_98,
    SECTOR_5_DOOR_99,
    SECTOR_5_DOOR_100,
    SECTOR_5_DOOR_101,
    SECTOR_5_DOOR_102,
    SECTOR_5_DOOR_103,
    SECTOR_5_DOOR_104,
    SECTOR_5_DOOR_105,
    SECTOR_5_DOOR_106,
    SECTOR_5_DOOR_107,
    SECTOR_5_DOOR_108,
    SECTOR_5_DOOR_109,
    SECTOR_5_DOOR_110,
    SECTOR_5_DOOR_111,
    SECTOR_5_DOOR_112,
    SECTOR_5_DOOR_113,
    SECTOR_5_DOOR_114,
    SECTOR_5_DOOR_115,
    SECTOR_5_DOOR_116,
    SECTOR_5_DOOR_117,
    SECTOR_5_DOOR_118,
    SECTOR_5_DOOR_119,
    SECTOR_5_DOOR_120,
    SECTOR_5_DOOR_121,
    SECTOR_5_DOOR_122,
    SECTOR_5_DOOR_123,
};

enum Sector4Doors {
    SECTOR_4_DOOR_0,
    SECTOR_4_DOOR_1,
    SECTOR_4_DOOR_2,
    SECTOR_4_DOOR_3,
    SECTOR_4_DOOR_4,
    SECTOR_4_DOOR_5,
    SECTOR_4_DOOR_6,
    SECTOR_4_DOOR_7,
    SECTOR_4_DOOR_8,
    SECTOR_4_DOOR_9,
    SECTOR_4_DOOR_10,
    SECTOR_4_DOOR_11,
    SECTOR_4_DOOR_12,
    SECTOR_4_DOOR_13,
    SECTOR_4_DOOR_14,
    SECTOR_4_DOOR_15,
    SECTOR_4_DOOR_16,
    SECTOR_4_DOOR_17,
    SECTOR_4_DOOR_18,
    SECTOR_4_DOOR_19,
    SECTOR_4_DOOR_20,
    SECTOR_4_DOOR_21,
    SECTOR_4_DOOR_22,
    SECTOR_4_DOOR_23,
    SECTOR_4_DOOR_24,
    SECTOR_4_DOOR_25,
    SECTOR_4_DOOR_26,
    SECTOR_4_DOOR_27,
    SECTOR_4_DOOR_28,
    SECTOR_4_DOOR_29,
    SECTOR_4_DOOR_30,
    SECTOR_4_DOOR_31,
    SECTOR_4_DOOR_32,
    SECTOR_4_DOOR_33,
    SECTOR_4_DOOR_34,
    SECTOR_4_DOOR_35,
    SECTOR_4_DOOR_36,
    SECTOR_4_DOOR_37,
    SECTOR_4_DOOR_38,
    SECTOR_4_DOOR_39,
    SECTOR_4_DOOR_40,
    SECTOR_4_DOOR_41,
    SECTOR_4_DOOR_42,
    SECTOR_4_DOOR_43,
    SECTOR_4_DOOR_44,
    SECTOR_4_DOOR_45,
    SECTOR_4_DOOR_46,
    SECTOR_4_DOOR_47,
    SECTOR_4_DOOR_48,
    SECTOR_4_DOOR_49,
    SECTOR_4_DOOR_50,
    SECTOR_4_DOOR_51,
    SECTOR_4_DOOR_52,
    SECTOR_4_DOOR_53,
    SECTOR_4_DOOR_54,
    SECTOR_4_DOOR_55,
    SECTOR_4_DOOR_56,
    SECTOR_4_DOOR_57,
    SECTOR_4_DOOR_58,
    SECTOR_4_DOOR_59,
    SECTOR_4_DOOR_60,
    SECTOR_4_DOOR_61,
    SECTOR_4_DOOR_62,
    SECTOR_4_DOOR_63,
    SECTOR_4_DOOR_64,
    SECTOR_4_DOOR_65,
    SECTOR_4_DOOR_66,
    SECTOR_4_DOOR_67,
    SECTOR_4_DOOR_68,
    SECTOR_4_DOOR_69,
    SECTOR_4_DOOR_70,
    SECTOR_4_DOOR_71,
    SECTOR_4_DOOR_72,
    SECTOR_4_DOOR_73,
    SECTOR_4_DOOR_74,
    SECTOR_4_DOOR_75,
    SECTOR_4_DOOR_76,
    SECTOR_4_DOOR_77,
    SECTOR_4_DOOR_78,
    SECTOR_4_DOOR_79,
    SECTOR_4_DOOR_80,
    SECTOR_4_DOOR_81,
    SECTOR_4_DOOR_82,
    SECTOR_4_DOOR_83,
    SECTOR_4_DOOR_84,
    SECTOR_4_DOOR_85,
    SECTOR_4_DOOR_86,
    SECTOR_4_DOOR_87,
    SECTOR_4_DOOR_88,
    SECTOR_4_DOOR_89,
    SECTOR_4_DOOR_90,
    SECTOR_4_DOOR_91,
    SECTOR_4_DOOR_92,
    SECTOR_4_DOOR_93,
    SECTOR_4_DOOR_94,
    SECTOR_4_DOOR_95,
    SECTOR_4_DOOR_96,
    SECTOR_4_DOOR_97,
    SECTOR_4_DOOR_98,
    SECTOR_4_DOOR_99,
    SECTOR_4_DOOR_100,
    SECTOR_4_DOOR_101,
    SECTOR_4_DOOR_102,
    SECTOR_4_DOOR_103,
    SECTOR_4_DOOR_104,
    SECTOR_4_DOOR_105,
    SECTOR_4_DOOR_106,
    SECTOR_4_DOOR_107,
    SECTOR_4_DOOR_108,
    SECTOR_4_DOOR_109,
    SECTOR_4_DOOR_110,
    SECTOR_4_DOOR_111,
    SECTOR_4_DOOR_112,
    SECTOR_4_DOOR_113,
    SECTOR_4_DOOR_114,
    SECTOR_4_DOOR_115,
    SECTOR_4_DOOR_116,
    SECTOR_4_DOOR_117,
};

enum Sector6Doors {
    SECTOR_6_DOOR_0,
    SECTOR_6_DOOR_1,
    SECTOR_6_DOOR_2,
    SECTOR_6_DOOR_3,
    SECTOR_6_DOOR_4,
    SECTOR_6_DOOR_5,
    SECTOR_6_DOOR_6,
    SECTOR_6_DOOR_7,
    SECTOR_6_DOOR_8,
    SECTOR_6_DOOR_9,
    SECTOR_6_DOOR_10,
    SECTOR_6_DOOR_11,
    SECTOR_6_DOOR_12,
    SECTOR_6_DOOR_13,
    SECTOR_6_DOOR_14,
    SECTOR_6_DOOR_15,
    SECTOR_6_DOOR_16,
    SECTOR_6_DOOR_17,
    SECTOR_6_DOOR_18,
    SECTOR_6_DOOR_19,
    SECTOR_6_DOOR_20,
    SECTOR_6_DOOR_21,
    SECTOR_6_DOOR_22,
    SECTOR_6_DOOR_23,
    SECTOR_6_DOOR_24,
    SECTOR_6_DOOR_25,
    SECTOR_6_DOOR_26,
    SECTOR_6_DOOR_27,
    SECTOR_6_DOOR_28,
    SECTOR_6_DOOR_29,
    SECTOR_6_DOOR_30,
    SECTOR_6_DOOR_31,
    SECTOR_6_DOOR_32,
    SECTOR_6_DOOR_33,
    SECTOR_6_DOOR_34,
    SECTOR_6_DOOR_35,
    SECTOR_6_DOOR_36,
    SECTOR_6_DOOR_37,
    SECTOR_6_DOOR_38,
    SECTOR_6_DOOR_39,
    SECTOR_6_DOOR_40,
    SECTOR_6_DOOR_41,
    SECTOR_6_DOOR_42,
    SECTOR_6_DOOR_43,
    SECTOR_6_DOOR_44,
    SECTOR_6_DOOR_45,
    SECTOR_6_DOOR_46,
    SECTOR_6_DOOR_47,
    SECTOR_6_DOOR_48,
    SECTOR_6_DOOR_49,
    SECTOR_6_DOOR_50,
    SECTOR_6_DOOR_51,
    SECTOR_6_DOOR_52,
    SECTOR_6_DOOR_53,
    SECTOR_6_DOOR_54,
    SECTOR_6_DOOR_55,
    SECTOR_6_DOOR_56,
    SECTOR_6_DOOR_57,
    SECTOR_6_DOOR_58,
    SECTOR_6_DOOR_59,
    SECTOR_6_DOOR_60,
    SECTOR_6_DOOR_61,
    SECTOR_6_DOOR_62,
    SECTOR_6_DOOR_63,
    SECTOR_6_DOOR_64,
    SECTOR_6_DOOR_65,
    SECTOR_6_DOOR_66,
    SECTOR_6_DOOR_67,
    SECTOR_6_DOOR_68,
    SECTOR_6_DOOR_69,
    SECTOR_6_DOOR_70,
    SECTOR_6_DOOR_71,
    SECTOR_6_DOOR_72,
    SECTOR_6_DOOR_73,
    SECTOR_6_DOOR_74,
    SECTOR_6_DOOR_75,
    SECTOR_6_DOOR_76,
    SECTOR_6_DOOR_77,
    SECTOR_6_DOOR_78,
    SECTOR_6_DOOR_79,
    SECTOR_6_DOOR_80,
    SECTOR_6_DOOR_81,
    SECTOR_6_DOOR_82,
    SECTOR_6_DOOR_83,
    SECTOR_6_DOOR_84,
    SECTOR_6_DOOR_85,
    SECTOR_6_DOOR_86,
    SECTOR_6_DOOR_87,
    SECTOR_6_DOOR_88,
    SECTOR_6_DOOR_89,
    SECTOR_6_DOOR_90,
    SECTOR_6_DOOR_91,
    SECTOR_6_DOOR_92,
};

enum Debug1Doors {
    DEBUG_1_DOOR_0,
    DEBUG_1_DOOR_1,
    DEBUG_1_DOOR_2,
    DEBUG_1_DOOR_3,
    DEBUG_1_DOOR_4,
    DEBUG_1_DOOR_5,
    DEBUG_1_DOOR_6,
    DEBUG_1_DOOR_7,
    DEBUG_1_DOOR_8,
    DEBUG_1_DOOR_9,
    DEBUG_1_DOOR_10,
};

enum Debug2Doors {
    DEBUG_2_DOOR_0,
    DEBUG_2_DOOR_1,
    DEBUG_2_DOOR_2,
    DEBUG_2_DOOR_3,
    DEBUG_2_DOOR_4,
    DEBUG_2_DOOR_5,
    DEBUG_2_DOOR_6,
    DEBUG_2_DOOR_7,
    DEBUG_2_DOOR_8,
    DEBUG_2_DOOR_9,
    DEBUG_2_DOOR_10,
};

enum Debug3Doors {
    DEBUG_3_DOOR_0,
    DEBUG_3_DOOR_1,
    DEBUG_3_DOOR_2,
    DEBUG_3_DOOR_3,
    DEBUG_3_DOOR_4,
    DEBUG_3_DOOR_5,
    DEBUG_3_DOOR_6,
    DEBUG_3_DOOR_7,
    DEBUG_3_DOOR_8,
    DEBUG_3_DOOR_9,
    DEBUG_3_DOOR_10,
};

#endif /* CONNECTION_CONSTANTS_H */
