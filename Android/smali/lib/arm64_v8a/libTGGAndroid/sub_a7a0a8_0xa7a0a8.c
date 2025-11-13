// 函数: sub_a7a0a8
// 地址: 0xa7a0a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x1658050, 0, 0x9600)
int128_t v0 = data_71b150
data_1658068 = 0x400000022
data_1658070 = 0xffffffff
data_16580a8 = "candlestick_maker"
data_16580b0 = 0x1e
data_16580b8 = TEXTURE_CARD_GEN_GUILDS_CANDLESTICK_MAKER
data_16580c0 = SOUND_SOUND_CARDS_FX_LANDPLAY_CANDLESTICK_MAKER
data_1658058 = v0
data_16580e0 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("g_Candlestick_Maker")

if (x0 == 0)
    (*data_16580e0)(&data_16580e0, "g_Candlestick_Maker")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16580e0
    *UI2StateDeclI_counter = x10_1 + 1
    data_16580e8 = x11_1
else
    (*data_16580e0)(&data_16580e0, *(x0 + 0x10))

data_16580f8 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("g_Candlestick_Maker")
int128_t v1
int128_t v2
int128_t v3

if (x0_1 == 0)
    v1, v2, v3 = (*data_16580f8)(&data_16580f8, "g_Candlestick_Maker")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16580f8
    *UI2StateDeclI_counter = x10_3 + 1
    data_1658100 = x11_2
else
    v1, v2, v3 = (*data_16580f8)(&data_16580f8, *(x0_1 + 0x10))

v1 = data_71c310
data_1658118 = 4
data_1658120 = CandlestickMaker
v2 = data_7e4508
v3 = data_7e4518
data_1658110 = 0x200000a00
data_16587d0 = v1
data_16587e0 = 0x14
int128_t var_d0
__builtin_memcpy(&var_d0, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x20\x01\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
data_16587e8 = v2
data_16587f8 = v3
int128_t var_f0
__builtin_memset(&var_f0, 0, 0x20)
__builtin_memset(&data_1658808, 0, 0x20)
data_1658828 = "stonemason"
data_1658830 = 0x25
data_1658838 = TEXTURE_CARD_GEN_GUILDS_STONE_MASON
data_1658840 = SOUND_SOUND_CARDS_FX_LANDPLAY_STONEMASON
data_1658860 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("g_Stonemason")

if (x0_2 == 0)
    (*data_1658860)(&data_1658860, "g_Stonemason")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1658860
    *UI2StateDeclI_counter = x10_5 + 1
    data_1658868 = x11_3
else
    (*data_1658860)(&data_1658860, *(x0_2 + 0x10))

data_1658878 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("g_Stonemason")

if (x0_3 == 0)
    (*data_1658878)(&data_1658878, "g_Stonemason")
    uint32_t x10_7 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1658878
    *UI2StateDeclI_counter = x10_7 + 1
    data_1658880 = x11_4
else
    (*data_1658878)(&data_1658878, *(x0_3 + 0x10))

int128_t v2_1 = data_71c110
data_1658968 = 0
data_1658968.d = 1
data_1658eb0 = 1
__builtin_memset(&data_16588b8, 0, 0xb0)
data_16588b0 = 0x600000006
data_1658f50 = v2_1
data_1658898 = 4
data_16588a0 = Stonemason
data_16588b8:4.d = 0
data_16588c8 = Stonemason_OnBuy
data_1658958 = 0
data_1658f60 = 0
data_1658890 = 0x2000200000a01
data_1658f64 = 0
int128_t var_130
__builtin_memset(&var_130, 0, 0x20)
__builtin_memset(&data_1658f88, 0, 0x20)
int128_t var_110
__builtin_memcpy(&var_110, 
    "\x80\x20\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_1658f68, 
    "\x00\x20\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x80\x20\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1658fa8 = "doctor"
data_1658fb0 = 0x25
data_1658fb8 = TEXTURE_CARD_GEN_GUILDS_DOCTOR
data_1658fc0 = SOUND_SOUND_CARDS_FX_LANDPLAY_DOCTOR
data_1658fe0 = _vtable_for_UI2StateDecl + 0x10
void* x0_4 = UI2StateDeclTryLookup("g_Doctor")

if (x0_4 == 0)
    (*data_1658fe0)(&data_1658fe0, "g_Doctor")
    uint32_t x10_9 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1658fe0
    *UI2StateDeclI_counter = x10_9 + 1
    data_1658fe8 = x11_5
else
    (*data_1658fe0)(&data_1658fe0, *(x0_4 + 0x10))

data_1658ff8 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("g_Doctor")

if (x0_5 == 0)
    (*data_1658ff8)(&data_1658ff8, "g_Doctor")
    uint32_t x10_11 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1658ff8
    *UI2StateDeclI_counter = x10_11 + 1
    data_1659000 = x11_6
else
    (*data_1658ff8)(&data_1658ff8, *(x0_5 + 0x10))

int128_t v2_2 = data_71d210
data_16590e8 = 0
data_16590e8.d = 1
data_1659630 = 1
__builtin_memset(&data_1659038, 0, 0xb0)
data_1659030 = 0x600000006
data_16596d0 = v2_2
data_1659018 = 4
data_1659020 = Doctor
data_1659038:4.d = 0
data_1659048 = Doctor_OnBuy
data_16590d8 = 0
data_16596e0 = 0
data_1659010 = 0x2000300000a02
data_16596e4 = 0
int128_t var_170
__builtin_memset(&var_170, 0, 0x20)
__builtin_memset(&data_1659708, 0, 0x20)
int128_t var_150
__builtin_memcpy(&var_150, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_16596e8, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1659728 = "masterpiece"
data_1659730 = 0x1e
data_1659738 = TEXTURE_CARD_GEN_GUILDS_MASTERPIECE
data_1659740 = SOUND_SOUND_CARDS_FX_LANDPLAY_MASTERPIECE
data_1659760 = _vtable_for_UI2StateDecl + 0x10
void* x0_6 = UI2StateDeclTryLookup("g_Masterpiece")

if (x0_6 == 0)
    (*data_1659760)(&data_1659760, "g_Masterpiece")
    uint32_t x10_13 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1659760
    *UI2StateDeclI_counter = x10_13 + 1
    data_1659768 = x11_7
else
    (*data_1659760)(&data_1659760, *(x0_6 + 0x10))

data_1659778 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("g_Masterpiece")

if (x0_7 == 0)
    (*data_1659778)(&data_1659778, "g_Masterpiece")
    uint32_t x10_15 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1659778
    *UI2StateDeclI_counter = x10_15 + 1
    data_1659780 = x11_8
else
    (*data_1659778)(&data_1659778, *(x0_7 + 0x10))

data_1659868 = 0
data_1659868.d = 1
data_1659db0 = 1
__builtin_memset(&data_16597b8, 0, 0xb0)
int128_t v2_3 = data_71c2d0
data_1659798 = 2
data_16597a0 = Masterpiece
data_16597b0 = 0x600000006
data_16597b8:4.d = 0
data_16597c8 = Masterpiece_OnBuy
data_1659858 = 0
data_1659790 = 0x2000300000a03
__builtin_memcpy(&data_1659e50, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"12\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1659e70 = 0xffffffff
data_1659ea8 = "advisor"
data_1659eb0 = 2
data_1659eb8 = TEXTURE_CARD_GEN_GUILDS_ADVISOR
data_1659ec0 = SOUND_SOUND_CARDS_FX_LANDPLAY_ADVISOR
data_1659ee0 = _vtable_for_UI2StateDecl + 0x10
void* x0_8 = UI2StateDeclTryLookup("g_Advisor")

if (x0_8 == 0)
    (*data_1659ee0)(&data_1659ee0, "g_Advisor")
    uint32_t x10_17 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1659ee0
    *UI2StateDeclI_counter = x10_17 + 1
    data_1659ee8 = x11_9
else
    (*data_1659ee0)(&data_1659ee0, *(x0_8 + 0x10))

data_1659ef8 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("g_Advisor")
int128_t v1_1
int128_t v2_4

if (x0_9 == 0)
    v1_1, v2_4 = (*data_1659ef8)(&data_1659ef8, "g_Advisor")
    uint32_t x10_19 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1659ef8
    *UI2StateDeclI_counter = x10_19 + 1
    data_1659f00 = x11_10
else
    v1_1, v2_4 = (*data_1659ef8)(&data_1659ef8, *(x0_9 + 0x10))

data_1659f18 = 4
data_1659f20 = Advisor
data_165a5d0 = v2_3
v1_1 = data_7e44c8
v2_4 = data_7e44d8
data_1659f10 = 0x400000a04
data_165a5e0 = 0xd
data_165a5e8 = v1_1
data_165a628 = "plaza"
data_165a5f8 = v2_4
__builtin_memset(&data_165a608, 0, 0x20)
data_165a630 = 0x37
data_165a638 = TEXTURE_CARD_GEN_GUILDS_PLAZA
data_165a660 = _vtable_for_UI2StateDecl + 0x10
data_165a640 = SOUND_SOUND_CARDS_FX_LANDPLAY_PLAZA
void* x0_10 = UI2StateDeclTryLookup("g_Plaza")

if (x0_10 == 0)
    (*data_165a660)(&data_165a660, "g_Plaza")
    uint32_t x10_22 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165a660
    *UI2StateDeclI_counter = x10_22 + 1
    data_165a668 = x11_11
else
    (*data_165a660)(&data_165a660, *(x0_10 + 0x10))

data_165a678 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("g_Plaza")

if (x0_11 == 0)
    (*data_165a678)(&data_165a678, "g_Plaza")
    uint32_t x10_24 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165a678
    *UI2StateDeclI_counter = x10_24 + 1
    data_165a680 = x11_12
else
    (*data_165a678)(&data_165a678, *(x0_11 + 0x10))

int128_t v0_1
v0_1.q = 0x400000a05
data_165a690 = 0x400000a05
v0_1 = data_71c0e0
data_165a698 = 4
data_165a6a0 = Plaza
data_165ad60 = 0
data_165ad50 = v0_1
data_165ad68 = 0x812000
data_165ad64 = 0
data_165ad70 = 0xffffffff
data_165ada8 = "taxman"
data_165adb0 = 0x1b
data_165adb8 = TEXTURE_CARD_GEN_GUILDS_TAX_MAN
data_165ade0 = _vtable_for_UI2StateDecl + 0x10
data_165adc0 = SOUND_SOUND_CARDS_FX_LANDPLAY_TAXMAN
void* x0_12 = UI2StateDeclTryLookup("g_Taxman")

if (x0_12 == 0)
    (*data_165ade0)(&data_165ade0, "g_Taxman")
    uint32_t x10_27 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165ade0
    *UI2StateDeclI_counter = x10_27 + 1
    data_165ade8 = x11_13
else
    (*data_165ade0)(&data_165ade0, *(x0_12 + 0x10))

data_165adf8 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("g_Taxman")

if (x0_13 == 0)
    (*data_165adf8)(&data_165adf8, "g_Taxman")
    uint32_t x10_29 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165adf8
    *UI2StateDeclI_counter = x10_29 + 1
    data_165ae00 = x11_14
else
    (*data_165adf8)(&data_165adf8, *(x0_13 + 0x10))

data_165ae10 = 0x400000a06
data_165ae18 = 0x24
data_165ae20 = Taxman
__builtin_memcpy(&data_165b4d0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x10\x0a\x00\x00\x18\x00\x00\x00\x0c\x00\x00\x00\x"
"0a\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_165b4f0 = 0xffffffff
data_165b528 = "herald"
data_165b530 = 0x1b
data_165b538 = TEXTURE_CARD_GEN_GUILDS_HERALD
data_165b540 = SOUND_SOUND_CARDS_FX_LANDPLAY_HERALD
data_165b560 = _vtable_for_UI2StateDecl + 0x10
void* x0_14 = UI2StateDeclTryLookup("g_Herald")

if (x0_14 == 0)
    (*data_165b560)(&data_165b560, "g_Herald")
    uint32_t x10_31 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165b560
    *UI2StateDeclI_counter = x10_31 + 1
    data_165b568 = x11_15
else
    (*data_165b560)(&data_165b560, *(x0_14 + 0x10))

data_165b578 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("g_Herald")

if (x0_15 == 0)
    (*data_165b578)(&data_165b578, "g_Herald")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165b578
    *UI2StateDeclI_counter = x10_33 + 1
    data_165b580 = x11_16
else
    (*data_165b578)(&data_165b578, *(x0_15 + 0x10))

int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
__builtin_memset(&data_165b5b8, 0, 0xb0)
data_165b598 = 4
data_165b5a0 = Herald
data_165b668 = 0
data_165b668.d = 1
data_165bbb0 = 1
data_165b5b0 = 0x600000006
data_165b5b8:4.d = 0
data_165b5c8 = Herald_OnBuy
data_165b658 = 0
__builtin_memcpy(&data_165bc50, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x0d\x00\x00\x00\x"
"0a\x00\x00\x00\x04\x00\x00\x00", 
    0x20)
data_165b590 = 0x2000400000a07
data_165bc70 = 0xffffffff
data_165bca8 = "baker"
data_165bcb0 = 0x26
data_165bcb8 = TEXTURE_CARD_GEN_GUILDS_BAKER
data_165bce0 = _vtable_for_UI2StateDecl + 0x10
data_165bcc0 = SOUND_SOUND_CARDS_FX_LANDPLAY_BAKER
void* x0_16 = UI2StateDeclTryLookup("g_Baker")

if (x0_16 == 0)
    (*data_165bce0)(&data_165bce0, "g_Baker")
    uint32_t x10_36 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165bce0
    *UI2StateDeclI_counter = x10_36 + 1
    data_165bce8 = x11_17
else
    (*data_165bce0)(&data_165bce0, *(x0_16 + 0x10))

data_165bcf8 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("g_Baker")

if (x0_17 == 0)
    (*data_165bcf8)(&data_165bcf8, "g_Baker")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165bcf8
    *UI2StateDeclI_counter = x10_38 + 1
    data_165bd00 = x11_18
else
    (*data_165bcf8)(&data_165bcf8, *(x0_17 + 0x10))

__builtin_memset(&data_165bd30, 0, 0xc0)
data_165bd18 = 4
data_165bd20 = Baker
data_165bd30 = 1
data_165bd40 = Baker_Setup
__builtin_memcpy(&data_165c3d0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x0d\x00\x00\x00\x"
"00\x20\x01\x00\x04\x00\x00\x00", 
    0x20)
data_165bd10 = 0x500000a08
data_165c3f0 = 0xffffffff
data_165c428 = "butcher"
data_165c430 = 0x26
data_165c438 = TEXTURE_CARD_GEN_GUILDS_BUTCHER
data_165c460 = _vtable_for_UI2StateDecl + 0x10
data_165c440 = SOUND_SOUND_CARDS_FX_LANDPLAY_BUTCHER
void* x0_18 = UI2StateDeclTryLookup("g22_Butcher")

if (x0_18 == 0)
    (*data_165c460)(&data_165c460, "g22_Butcher")
    uint32_t x10_41 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165c460
    *UI2StateDeclI_counter = x10_41 + 1
    data_165c468 = x11_19
else
    (*data_165c460)(&data_165c460, *(x0_18 + 0x10))

data_165c478 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("g_Butcher")

if (x0_19 == 0)
    (*data_165c478)(&data_165c478, "g_Butcher")
    uint32_t x10_43 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165c478
    *UI2StateDeclI_counter = x10_43 + 1
    data_165c480 = x11_20
else
    (*data_165c478)(&data_165c478, *(x0_19 + 0x10))

data_165c490 = 0x500000a09
data_165c498 = 4
data_165c4a0 = Butcher
__builtin_memcpy(&data_165cb50, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_165cb70 = 0xffffffff
data_165cba8 = "journeyman"
data_165cbb0 = 0x23
data_165cbb8 = TEXTURE_CARD_GEN_GUILDS_JOURNEYMAN
data_165cbe0 = _vtable_for_UI2StateDecl + 0x10
data_165cbc0 = SOUND_SOUND_CARDS_FX_LANDPLAY_JOURNEYMAN
void* x0_20 = UI2StateDeclTryLookup("g_Journeyman")

if (x0_20 == 0)
    (*data_165cbe0)(&data_165cbe0, "g_Journeyman")
    uint32_t x10_46 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165cbe0
    *UI2StateDeclI_counter = x10_46 + 1
    data_165cbe8 = x11_21
else
    (*data_165cbe0)(&data_165cbe0, *(x0_20 + 0x10))

data_165cbf8 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("g_Journeyman")

if (x0_21 == 0)
    (*data_165cbf8)(&data_165cbf8, "g_Journeyman")
    uint32_t x10_48 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165cbf8
    *UI2StateDeclI_counter = x10_48 + 1
    data_165cc00 = x11_22
else
    (*data_165cbf8)(&data_165cbf8, *(x0_21 + 0x10))

data_165cc18 = 4
data_165cc20 = Journeyman
__builtin_memcpy(&data_165d2d0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x04\x00\x00\x00", 
    0x20)
data_165cc10 = 0x500000a0a
data_165d2f0 = 0xffffffff
data_165d328 = "merchant_guild"
data_165d330 = 0xe
data_165d338 = TEXTURE_CARD_GEN_GUILDS_MERCHANT_GUILD
data_165d360 = _vtable_for_UI2StateDecl + 0x10
data_165d340 = SOUND_SOUND_CARDS_FX_LANDPLAY_MERCHANT_GUILD
void* x0_22 = UI2StateDeclTryLookup("g_Merchant_Guild")

if (x0_22 == 0)
    (*data_165d360)(&data_165d360, "g_Merchant_Guild")
    uint32_t x10_51 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165d360
    *UI2StateDeclI_counter = x10_51 + 1
    data_165d368 = x11_23
else
    (*data_165d360)(&data_165d360, *(x0_22 + 0x10))

data_165d378 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("g_Merchant_Guild")

if (x0_23 == 0)
    (*data_165d378)(&data_165d378, "g_Merchant_Guild")
    uint32_t x10_53 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165d378
    *UI2StateDeclI_counter = x10_53 + 1
    data_165d380 = x11_24
else
    (*data_165d378)(&data_165d378, *(x0_23 + 0x10))

data_165da50 = v2_3
data_165d390 = 0x500000a0b
data_165d398 = 4
data_165d3a0 = MerchantGuild
data_113d910
data_165d9b0 = 1
data_165d9f0 = data_113d8d0
__builtin_memset(&data_165da00, 0, 0x50)
data_165da60 = 0x600000008
data_165da68 = 0x21010000
data_165da70 = 0xffffffff
data_165daa8 = "soothsayer"
data_165dab0 = 2
data_165dab8 = TEXTURE_CARD_GEN_GUILDS_SOOTHSAYER
data_165dae0 = _vtable_for_UI2StateDecl + 0x10
data_165dac0 = SOUND_SOUND_CARDS_FX_LANDPLAY_SOOTHSAYER
void* x0_24 = UI2StateDeclTryLookup("g_Soothsayer")

if (x0_24 == 0)
    (*data_165dae0)(&data_165dae0, "g_Soothsayer")
    uint32_t x10_56 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165dae0
    *UI2StateDeclI_counter = x10_56 + 1
    data_165dae8 = x11_25
else
    (*data_165dae0)(&data_165dae0, *(x0_24 + 0x10))

data_165daf8 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("g_Soothsayer")

if (x0_25 == 0)
    (*data_165daf8)(&data_165daf8, "g_Soothsayer")
    uint32_t x10_58 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165daf8
    *UI2StateDeclI_counter = x10_58 + 1
    data_165db00 = x11_26
else
    (*data_165daf8)(&data_165daf8, *(x0_25 + 0x10))

int128_t v0_4
v0_4.q = 0x500000a0c
data_165db10 = 0x500000a0c
data_113d970
data_165e170 = data_113d930
v0_4 = data_71a6a0
__builtin_memset(&data_165e180, 0, 0x50)
int128_t var_b0_1 = v0_4
__builtin_memcpy(&data_165e1d0, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
v0_4 = var_f0
data_165db18 = 0x24
data_165db20 = Soothsayer
data_165e218 = v0_4
data_165e228 = "stonemason"
int128_t var_e0
data_165e208 = var_e0
data_165e1f8 = var_d0
int128_t var_c0
data_165e1e8 = var_c0
data_165e230 = 0x25
data_165e238 = TEXTURE_CARD_GEN_GUILDS_STONE_MASON
data_165e260 = _vtable_for_UI2StateDecl + 0x10
data_165e240 = SOUND_SOUND_CARDS_FX_LANDPLAY_STONEMASON
void* x0_26 = UI2StateDeclTryLookup("g22_Stonemason")

if (x0_26 == 0)
    (*data_165e260)(&data_165e260, "g22_Stonemason")
    uint32_t x10_61 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165e260
    *UI2StateDeclI_counter = x10_61 + 1
    data_165e268 = x11_27
else
    (*data_165e260)(&data_165e260, *(x0_26 + 0x10))

data_165e278 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("g_Stonemason")

if (x0_27 == 0)
    (*data_165e278)(&data_165e278, "g_Stonemason")
    uint32_t x10_63 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165e278
    *UI2StateDeclI_counter = x10_63 + 1
    data_165e280 = x11_28
else
    (*data_165e278)(&data_165e278, *(x0_27 + 0x10))

data_165e290 = 0x2000200000a01
data_165e298 = 4
int128_t v0_5
v0_5.q = 0
v0_5:8.q = 0
__builtin_memset(&data_165e2b0, 0, 0x40)
data_165e2a0 = Stonemason
__builtin_memset(&data_165e2f0, 0, 0x80)
v0_5.q = 0x100000400
data_165e2b0 = 0x14
data_165e360:4 = 0x100000400
v0_5 = data_71ad20
data_165e8b0 = 1
int128_t var_c0_1 = v0_5
data_165e950 = v0_5
v0_5 = var_130
data_165e2c0:8 = Stonemason_OnBuy
data_165e960 = 0
data_165e998 = v0_5
data_165e964 = 0
int128_t var_120
data_165e988 = var_120
v0_5 = var_110
data_165e9a8 = "doctor"
data_165e978 = v0_5
int128_t var_100
data_165e968 = var_100
data_165e9b0 = 0x25
data_165e9b8 = TEXTURE_CARD_GEN_GUILDS_DOCTOR
data_165e9e0 = _vtable_for_UI2StateDecl + 0x10
data_165e9c0 = SOUND_SOUND_CARDS_FX_LANDPLAY_DOCTOR
void* x0_28 = UI2StateDeclTryLookup("g22_Doctor")

if (x0_28 == 0)
    (*data_165e9e0)(&data_165e9e0, "g22_Doctor")
    uint32_t x10_65 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165e9e0
    *UI2StateDeclI_counter = x10_65 + 1
    data_165e9e8 = x11_29
else
    (*data_165e9e0)(&data_165e9e0, *(x0_28 + 0x10))

data_165e9f8 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("g_Doctor")

if (x0_29 == 0)
    (*data_165e9f8)(&data_165e9f8, "g_Doctor")
    uint32_t x10_67 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165e9f8
    *UI2StateDeclI_counter = x10_67 + 1
    data_165ea00 = x11_30
else
    (*data_165e9f8)(&data_165e9f8, *(x0_29 + 0x10))

data_165ea10 = 0x2000300000a02
data_165ea18 = 4
int128_t v0_6
v0_6.q = 0
v0_6:8.q = 0
__builtin_memset(&data_165ea30, 0, 0x20)
data_165ea20 = Doctor
data_165ea30 = 0x14
__builtin_memset(&data_165ea50, 0, 0xa0)
data_165f0d0 = var_c0_1
v0_6 = var_170
data_165f030 = 1
data_165ea40:8 = Doctor_OnBuy
data_165f0e0 = 0
data_165eae0:4 = 0x100000000
data_165f118 = v0_6
int128_t var_160
data_165f108 = var_160
v0_6 = var_150
data_165f0e4 = 0
data_165f128 = "masterpiece"
data_165f0f8 = v0_6
int128_t var_140
data_165f0e8 = var_140
data_165f130 = 0x1e
data_165f138 = TEXTURE_CARD_GEN_GUILDS_MASTERPIECE
data_165f140 = SOUND_SOUND_CARDS_FX_LANDPLAY_MASTERPIECE
data_165f160 = _vtable_for_UI2StateDecl + 0x10
void* x0_30 = UI2StateDeclTryLookup("g22_Masterpiece")

if (x0_30 == 0)
    (*data_165f160)(&data_165f160, "g22_Masterpiece")
    uint32_t x10_69 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165f160
    *UI2StateDeclI_counter = x10_69 + 1
    data_165f168 = x11_31
else
    (*data_165f160)(&data_165f160, *(x0_30 + 0x10))

data_165f178 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("g_Masterpiece")

if (x0_31 == 0)
    (*data_165f178)(&data_165f178, "g_Masterpiece")
    uint32_t x10_71 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165f178
    *UI2StateDeclI_counter = x10_71 + 1
    data_165f180 = x11_32
else
    (*data_165f178)(&data_165f178, *(x0_31 + 0x10))

data_165f190 = 0x2000300000a03
data_165f198 = 2
int128_t v0_7
v0_7.q = 0
v0_7:8.q = 0
__builtin_memset(&data_165f1b0, 0, 0xc0)
data_165f1a0 = Masterpiece
data_165f1b0 = 0x14
data_165f7b0 = 1
data_165f1c0:8 = Masterpiece_OnBuy
data_165f260:4 = 0x100000000
__builtin_memcpy(&data_165f850, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x0c\x00\x00\x00\x"
"0a\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_165f870 = 0xffffffff
data_165f8a8 = "herald"
data_165f8b0 = 0x1b
data_165f8b8 = TEXTURE_CARD_GEN_GUILDS_HERALD
data_165f8c0 = SOUND_SOUND_CARDS_FX_LANDPLAY_HERALD
data_165f8e0 = _vtable_for_UI2StateDecl + 0x10
void* x0_32 = UI2StateDeclTryLookup("g22_Herald")

if (x0_32 == 0)
    (*data_165f8e0)(&data_165f8e0, "g22_Herald")
    uint32_t x10_73 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165f8e0
    *UI2StateDeclI_counter = x10_73 + 1
    data_165f8e8 = x11_33
else
    (*data_165f8e0)(&data_165f8e0, *(x0_32 + 0x10))

data_165f8f8 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("g_Herald")

if (x0_33 == 0)
    (*data_165f8f8)(&data_165f8f8, "g_Herald")
    uint32_t x10_75 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_165f8f8
    *UI2StateDeclI_counter = x10_75 + 1
    data_165f900 = x11_34
else
    (*data_165f8f8)(&data_165f8f8, *(x0_33 + 0x10))

__builtin_memset(&data_165f930, 0, 0x20)
data_165f930 = 0x14
int128_t v1_6 = data_71b510
__builtin_memset(&data_165f950, 0, 0xa0)
data_165f918 = 4
data_165f920 = Herald
data_165ff30 = 1
data_165f940:8 = Herald_OnBuy
data_165f910 = 0x2000400000a07
data_165f9e0:4 = 0x100000000
__builtin_memcpy(&data_165ffd0, 
    "\x02\x00\x00\x00\x15\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1660028 = "infirmary"
data_1660030 = 8
data_1660038 = TEXTURE_CARD_GEN_GUILDS_GUILD2E_INFIRMARY
data_1660040 = SOUND_SOUND_CARDS_GUILDS2E_FX_LANDPLAY_INFIRMARY
data_1660060 = _vtable_for_UI2StateDecl + 0x10
void* x0_34 = UI2StateDeclTryLookup("g2_Infirmary")

if (x0_34 == 0)
    (*data_1660060)(&data_1660060, "g2_Infirmary")
    uint32_t x10_77 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1660060
    *UI2StateDeclI_counter = x10_77 + 1
    data_1660068 = x11_35
else
    (*data_1660060)(&data_1660060, *(x0_34 + 0x10))

data_1660078 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("g2_Infirmary")

if (x0_35 == 0)
    (*data_1660078)(&data_1660078, "g2_Infirmary")
    uint32_t x10_79 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1660078
    *UI2StateDeclI_counter = x10_79 + 1
    data_1660080 = x11_36
else
    (*data_1660078)(&data_1660078, *(x0_35 + 0x10))

__builtin_memset(&data_16600b0, 0, 0xc0)
data_1660098 = 4
data_16600a0 = Infirmary
data_16600c0:8 = Infirmary_Overpay
data_1660090 = 0x2000300000a11
data_16600b0 = 0x14
data_16606b0 = 1
data_1660160:4 = 0x100000000
__builtin_memcpy(&data_1660750, 
    "\x02\x00\x00\x00\x15\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16607a8 = "farrier"
data_16607b0 = 8
data_16607b8 = TEXTURE_CARD_GEN_GUILDS_GUILD2E_FARRIER
data_16607e0 = _vtable_for_UI2StateDecl + 0x10
data_16607c0 = SOUND_SOUND_CARDS_GUILDS2E_FX_LANDPLAY_FARRIER
void* x0_36 = UI2StateDeclTryLookup("g2_Farrier")

if (x0_36 == 0)
    (*data_16607e0)(&data_16607e0, "g2_Farrier")
    uint32_t x10_82 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16607e0
    *UI2StateDeclI_counter = x10_82 + 1
    data_16607e8 = x11_37
else
    (*data_16607e0)(&data_16607e0, *(x0_36 + 0x10))

data_16607f8 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("g2_Farrier")

if (x0_37 == 0)
    (*data_16607f8)(&data_16607f8, "g2_Farrier")
    uint32_t x10_84 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16607f8
    *UI2StateDeclI_counter = x10_84 + 1
    data_1660800 = x11_38
else
    (*data_16607f8)(&data_16607f8, *(x0_37 + 0x10))

data_1660818 = 4
data_1660820 = Farrier
__builtin_memset(&data_1660830, 0, 0x20)
data_1660830 = 0x14
data_1660840:8 = Farrier_Overpay
__builtin_memset(&data_1660850, 0, 0xa0)
data_1660ed0 = v1_6
data_1660810 = 0x2000200000a12
data_16608e0:4 = 0x100000000
__builtin_memset(&data_1660e50, 0, 0x20)
__builtin_memcpy(&data_1660e30, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4b\x00\x00\x00\x00\x00\x00\x00\x"
"5d\xa1\x75\x00\x00\x00\x00\x00", 
    0x20)
data_1660ee0 = 0x90000000a
data_1660ee8 = 0x100000000
data_1660f28 = "footpad"
data_1660f30 = 0x1b
data_1660f38 = TEXTURE_CARD_GEN_GUILDS_GUILD2E_FOOTPAD
data_1660f60 = _vtable_for_UI2StateDecl + 0x10
data_1660f40 = SOUND_SOUND_CARDS_GUILDS2E_FX_LANDPLAY_FOOTPAD
void* x0_38 = UI2StateDeclTryLookup("g2_Footpad")

if (x0_38 == 0)
    (*data_1660f60)(&data_1660f60, "g2_Footpad")
    uint32_t x10_87 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1660f60
    *UI2StateDeclI_counter = x10_87 + 1
    data_1660f68 = x11_39
else
    (*data_1660f60)(&data_1660f60, *(x0_38 + 0x10))

data_1660f78 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("g2_Footpad")

if (x0_39 == 0)
    (*data_1660f78)(&data_1660f78, "g2_Footpad")
    uint32_t x10_89 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1660f78
    *UI2StateDeclI_counter = x10_89 + 1
    data_1660f80 = x11_40
else
    (*data_1660f78)(&data_1660f78, *(x0_39 + 0x10))

__builtin_memset(&data_1660fb8, 0, 0xb0)
data_1661064:4 = 0
data_1661064 = 0x100000000
data_1660f98 = 0x24
data_1660fa0 = Footpad
data_1660fc8 = Footpad_Draw
data_1660fb8:4.d = 0
data_1661058 = Footpad_Draw_Test
data_1660f90 = 0x500000a13
data_1660fb0 = 0x200000006
data_16615b0 = 1
memset(&data_1661670, 0, 0x618)
data_1661650 = "coffers"
data_1661658 = "Coffers"
data_1661660 = &data_776856
data_1661668 = _vtable_for_UI2StateDecl + 0x10
void* x0_40 = UI2StateDeclTryLookup("icon_coffers")
int64_t result

if (x0_40 == 0)
    result = (*data_1661668)(&data_1661668, "icon_coffers")
    uint32_t x10_91 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1661668
    *UI2StateDeclI_counter = x10_91 + 1
    data_1661670 = x11_42
else
    result = (*data_1661668)(&data_1661668, *(x0_40 + 0x10))

data_1661680 = 0xa00
return result
