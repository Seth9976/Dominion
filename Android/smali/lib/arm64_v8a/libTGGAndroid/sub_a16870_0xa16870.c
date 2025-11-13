// 函数: sub_a16870
// 地址: 0xa16870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x14cabe0, 0, 0x7080)
int128_t v0 = data_71a9a0
data_14cabf8 = 1
data_14cac00 = 0xffffffff
data_14cac38 = "potion"
data_14cac40 = 0x2d
data_14cac48 = TEXTURE_CARD_GEN_SHARED_POTION
data_14cac50 = SOUND_SOUND_CARDS_FX_LANDPLAY_POTION
data_14cabe8 = v0
data_14cac70 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("al_Potion")

if (x0 == 0)
    (*data_14cac70)(&data_14cac70, "al_Potion")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cac70
    *UI2StateDeclI_counter = x10_1 + 1
    data_14cac78 = x11_1
else
    (*data_14cac70)(&data_14cac70, *(x0 + 0x10))

data_14cac88 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("al_Potion")

if (x0_1 == 0)
    (*data_14cac88)(&data_14cac88, "al_Potion")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cac88
    *UI2StateDeclI_counter = x10_3 + 1
    data_14cac90 = x11_2
else
    (*data_14cac88)(&data_14cac88, *(x0_1 + 0x10))

int128_t v1
v1.q = 0x400000500
data_14caca8 = 0x2000000000002
data_14cacb0 = Potion
__builtin_memset(&data_14cacc0, 0, 0xc0)
data_14caca0 = 0x400000500
v1 = data_71c2d0
data_14cacc0 = 0xb
data_14cad50:8.d = 1
data_14cacd0:8 = 0x1000000000
__builtin_memcpy(&data_14cb360, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14cb380 = 0xffffffff
data_14cb3b8 = "transmute"
data_14cb3c0 = 8
data_14cb3c8 = TEXTURE_CARD_GEN_ALCHEMY_TRANSMUTE
data_14cb3f0 = _vtable_for_UI2StateDecl + 0x10
data_14cb3d0 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRANSMUTE
void* x0_2 = UI2StateDeclTryLookup("al_Transmute")

if (x0_2 == 0)
    (*data_14cb3f0)(&data_14cb3f0, "al_Transmute")
    uint32_t x10_6 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cb3f0
    *UI2StateDeclI_counter = x10_6 + 1
    data_14cb3f8 = x11_3
else
    (*data_14cb3f0)(&data_14cb3f0, *(x0_2 + 0x10))

data_14cb408 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("al_Transmute")

if (x0_3 == 0)
    (*data_14cb408)(&data_14cb408, "al_Transmute")
    uint32_t x10_8 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cb408
    *UI2StateDeclI_counter = x10_8 + 1
    data_14cb410 = x11_4
else
    (*data_14cb408)(&data_14cb408, *(x0_3 + 0x10))

data_14cb420 = 0x1000000000501
data_14cb428 = 4
data_14cb430 = Transmute
__builtin_memcpy(&data_14cbae0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14cbb38 = "vineyard"
data_14cbaf8 = 0x100000000
data_14cbb40 = 0x1d
data_14cbb48 = TEXTURE_CARD_GEN_ALCHEMY_VINEYARD
data_14cbb70 = _vtable_for_UI2StateDecl + 0x10
void* x0_4 = UI2StateDeclTryLookup("al_Vineyard")

if (x0_4 == 0)
    (*data_14cbb70)(&data_14cbb70, "al_Vineyard")
    uint32_t x10_10 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cbb70
    *UI2StateDeclI_counter = x10_10 + 1
    data_14cbb78 = x11_5
else
    (*data_14cbb70)(&data_14cbb70, *(x0_4 + 0x10))

data_14cbb88 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("al_Vineyard")
int128_t v0_1
int128_t v1_2
int128_t v2
int128_t v3

if (x0_5 == 0)
    v0_1, v1_2, v2, v3 = (*data_14cbb88)(&data_14cbb88, "al_Vineyard")
    uint32_t x10_12 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cbb88
    *UI2StateDeclI_counter = x10_12 + 1
    data_14cbb90 = x11_6
else
    v0_1, v1_2, v2, v3 = (*data_14cbb88)(&data_14cbb88, *(x0_5 + 0x10))

v0_1.q = 0x1000000000502
data_7ad768
data_7ad778
data_7ad788
data_14cbba0 = 0x1000000000502
__builtin_memset(&data_14cc220, 0, 0x20)
v0_1 = data_7ad748
v1_2 = data_7ad758
v2 = data_71b020
data_14cbbb8 = Vineyard_VP
data_14cbba8 = 8
__builtin_memset(&data_14cc240, 0, 0x20)
data_14cc200 = v0_1
v0_1 = data_7ad7c8
v3 = data_7ad7d8
data_14cc210 = v1_2
data_14cc260 = v2
v1_2 = data_7ad7a8
v2 = data_7ad7b8
data_14cc270 = 2
int128_t var_d0 = v2
int128_t var_c0 = v3
int128_t var_b0 = v1_2
int128_t var_a0 = v0_1
__builtin_memset(&data_14cc298, 0, 0x20)
data_14cc288 = v2
data_14cc278 = v1_2
data_14cc2b8 = "herbalist"
data_14cc2c0 = 0x14
data_14cc2c8 = TEXTURE_CARD_GEN_ALCHEMY_HERBALIST
data_14cc2d0 = SOUND_SOUND_CARDS_FX_LANDPLAY_HERBALIST
data_14cc2f0 = _vtable_for_UI2StateDecl + 0x10
void* x0_6 = UI2StateDeclTryLookup("al_Herbalist")

if (x0_6 == 0)
    (*data_14cc2f0)(&data_14cc2f0, "al_Herbalist")
    uint32_t x10_14 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cc2f0
    *UI2StateDeclI_counter = x10_14 + 1
    data_14cc2f8 = x11_7
else
    (*data_14cc2f0)(&data_14cc2f0, *(x0_6 + 0x10))

data_14cc308 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("al_Herbalist")

if (x0_7 == 0)
    (*data_14cc308)(&data_14cc308, "al_Herbalist")
    uint32_t x10_16 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cc308
    *UI2StateDeclI_counter = x10_16 + 1
    data_14cc310 = x11_8
else
    (*data_14cc308)(&data_14cc308, *(x0_7 + 0x10))

int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
__builtin_memset(&data_14cc348, 0, 0xb0)
data_14cc328 = 4
data_14cc330 = Herbalist
data_14cc348:4.d = 3
data_14cc358 = Herbalist_WhenDiscardedFromPlayTrigger
data_14cc3e8 = Herbalist_WhenDiscardedFromPlay
data_14cc940 = 1
data_14cc340 = 0x600000006
data_14cc3f4:4 = 0
__builtin_memcpy(&data_14cc9e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14cc320 = 0x200000503
data_14cc3f4 = 0x100000003
data_14cca00 = 0xffffffff
data_14cca38 = "apothecary"
data_14cca40 = 0x37
data_14cca48 = TEXTURE_CARD_GEN_ALCHEMY_APOTHECARY
data_14cca70 = _vtable_for_UI2StateDecl + 0x10
data_14cca50 = SOUND_SOUND_CARDS_FX_LANDPLAY_APOTHECARY
void* x0_8 = UI2StateDeclTryLookup("al_Apothecary")

if (x0_8 == 0)
    (*data_14cca70)(&data_14cca70, "al_Apothecary")
    uint32_t x10_19 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cca70
    *UI2StateDeclI_counter = x10_19 + 1
    data_14cca78 = x11_9
else
    (*data_14cca70)(&data_14cca70, *(x0_8 + 0x10))

data_14cca88 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("al_Apothecary")

if (x0_9 == 0)
    (*data_14cca88)(&data_14cca88, "al_Apothecary")
    uint32_t x10_21 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cca88
    *UI2StateDeclI_counter = x10_21 + 1
    data_14cca90 = x11_10
else
    (*data_14cca88)(&data_14cca88, *(x0_9 + 0x10))

data_14ccaa0 = 0x1000200000504
data_14ccaa8 = 4
data_14ccab0 = Apothecary
__builtin_memcpy(&data_14cd160, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x"
"08\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14cd180 = 0xffffffff
data_14cd1b8 = "scrying_pool"
data_14cd1c0 = 0x22
data_14cd1c8 = TEXTURE_CARD_GEN_ALCHEMY_SCRYINGPOOL
data_14cd1f0 = _vtable_for_UI2StateDecl + 0x10
data_14cd1d0 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCRYINGPOOL
void* x0_10 = UI2StateDeclTryLookup("al_Scrying_Pool")

if (x0_10 == 0)
    (*data_14cd1f0)(&data_14cd1f0, "al_Scrying_Pool")
    uint32_t x10_24 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cd1f0
    *UI2StateDeclI_counter = x10_24 + 1
    data_14cd1f8 = x11_11
else
    (*data_14cd1f0)(&data_14cd1f0, *(x0_10 + 0x10))

data_14cd208 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("al_Scrying_Pool")

if (x0_11 == 0)
    (*data_14cd208)(&data_14cd208, "al_Scrying_Pool")
    uint32_t x10_26 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cd208
    *UI2StateDeclI_counter = x10_26 + 1
    data_14cd210 = x11_12
else
    (*data_14cd208)(&data_14cd208, *(x0_11 + 0x10))

data_14cd228 = 0x24
data_14cd230 = ScryingPool
__builtin_memcpy(&data_14cd8e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"04\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14cd220 = 0x1000200000505
data_14cd900 = 0xffffffff
data_14cd938 = "university"
data_14cd940 = 0x27
data_14cd948 = TEXTURE_CARD_GEN_ALCHEMY_UNIVERSITY
data_14cd970 = _vtable_for_UI2StateDecl + 0x10
data_14cd950 = SOUND_SOUND_CARDS_FX_LANDPLAY_UNIVERSITY
void* x0_12 = UI2StateDeclTryLookup("al_University")

if (x0_12 == 0)
    (*data_14cd970)(&data_14cd970, "al_University")
    uint32_t x10_29 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cd970
    *UI2StateDeclI_counter = x10_29 + 1
    data_14cd978 = x11_13
else
    (*data_14cd970)(&data_14cd970, *(x0_12 + 0x10))

data_14cd988 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("al_University")
int128_t v1_5
int128_t v2_1
int128_t v3_1

if (x0_13 == 0)
    v1_5, v2_1, v3_1 = (*data_14cd988)(&data_14cd988, "al_University")
    uint32_t x10_31 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cd988
    *UI2StateDeclI_counter = x10_31 + 1
    data_14cd990 = x11_14
else
    v1_5, v2_1, v3_1 = (*data_14cd988)(&data_14cd988, *(x0_13 + 0x10))

v1_5 = data_71c470
data_14cd9a8 = 4
data_14cd9b0 = University
v2_1 = data_7ad7e8
v3_1 = data_7ad7f8
data_14cd9a0 = 0x1000200000506
data_14ce060 = v1_5
data_14ce070 = 0x10
int128_t var_f0
__builtin_memcpy(&var_f0, 
    "\x00\x01\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
data_14ce078 = v2_1
data_14ce088 = v3_1
int128_t var_110
__builtin_memset(&var_110, 0, 0x20)
__builtin_memset(&data_14ce098, 0, 0x20)
data_14ce0b8 = "alchemist"
data_14ce0c0 = 0x38
data_14ce0c8 = TEXTURE_CARD_GEN_ALCHEMY_ALCHEMIST
data_14ce0d0 = SOUND_SOUND_CARDS_FX_LANDPLAY_ALCHEMIST
data_14ce0f0 = _vtable_for_UI2StateDecl + 0x10
void* x0_14 = UI2StateDeclTryLookup("al_Alchemist")

if (x0_14 == 0)
    (*data_14ce0f0)(&data_14ce0f0, "al_Alchemist")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ce0f0
    *UI2StateDeclI_counter = x10_33 + 1
    data_14ce0f8 = x11_15
else
    (*data_14ce0f0)(&data_14ce0f0, *(x0_14 + 0x10))

data_14ce108 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("al_Alchemist")

if (x0_15 == 0)
    (*data_14ce108)(&data_14ce108, "al_Alchemist")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ce108
    *UI2StateDeclI_counter = x10_35 + 1
    data_14ce110 = x11_16
else
    (*data_14ce108)(&data_14ce108, *(x0_15 + 0x10))

int128_t v0_3
v0_3.q = 0
v0_3:8.q = 0
__builtin_memset(&data_14ce148, 0, 0xb0)
data_14ce128 = 4
data_14ce130 = Alchemist
data_14ce148:4.d = 3
data_14ce1f4:4 = 0
data_14ce1f4 = 0x100000003
data_14ce1e8 = Alchemist_WhenDiscardFromPlay_Test
data_14ce158 = Alchemist_WhenDiscardFromPlay
data_14ce740 = 1
data_14ce140 = 0x600000006
__builtin_memcpy(&data_14ce7e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x08\x00\x00\x00\x"
"0a\x00\x00\x20\x00\x00\x00\x00", 
    0x20)
data_14ce120 = 0x1000300000507
data_14ce800 = 0xffffffff
data_14ce838 = "familiar"
data_14ce840 = 5
data_14ce848 = TEXTURE_CARD_GEN_ALCHEMY_FAMILIAR
data_14ce870 = _vtable_for_UI2StateDecl + 0x10
data_14ce850 = SOUND_SOUND_CARDS_FX_LANDPLAY_FAMILIAR
void* x0_16 = UI2StateDeclTryLookup("al_Familiar")

if (x0_16 == 0)
    (*data_14ce870)(&data_14ce870, "al_Familiar")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ce870
    *UI2StateDeclI_counter = x10_38 + 1
    data_14ce878 = x11_17
else
    (*data_14ce870)(&data_14ce870, *(x0_16 + 0x10))

data_14ce888 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("al_Familiar")

if (x0_17 == 0)
    (*data_14ce888)(&data_14ce888, "al_Familiar")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ce888
    *UI2StateDeclI_counter = x10_40 + 1
    data_14ce890 = x11_18
else
    (*data_14ce888)(&data_14ce888, *(x0_17 + 0x10))

data_1126ef8
data_14ce8a0 = 0x1000300000508
data_1126f18
data_14cef00 = data_1126ec8
data_14cef70 = 0x10
__builtin_memset(&data_14cef10, 0, 0x50)
data_14ce8a8 = 0x24
data_14ce8b0 = Familiar
data_14cef60 = v1
data_14cef78 = 1
data_14cef80 = 0xffffffff
data_14cefb8 = "philosophers_stone"
data_14cefc0 = 0x16
data_14cefc8 = TEXTURE_CARD_GEN_ALCHEMY_PHILOSOPHERSTONE
data_14ceff0 = _vtable_for_UI2StateDecl + 0x10
data_14cefd0 = SOUND_SOUND_CARDS_FX_LANDPLAY_PHILOSOPHERS_STONE
void* x0_18 = UI2StateDeclTryLookup("al_Philosophers_Stone")

if (x0_18 == 0)
    (*data_14ceff0)(&data_14ceff0, "al_Philosophers_Stone")
    uint32_t x10_43 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ceff0
    *UI2StateDeclI_counter = x10_43 + 1
    data_14ceff8 = x11_19
else
    (*data_14ceff0)(&data_14ceff0, *(x0_18 + 0x10))

data_14cf008 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("al_Philosophers_Stone")

if (x0_19 == 0)
    (*data_14cf008)(&data_14cf008, "al_Philosophers_Stone")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cf008
    *UI2StateDeclI_counter = x10_45 + 1
    data_14cf010 = x11_20
else
    (*data_14cf008)(&data_14cf008, *(x0_19 + 0x10))

data_1126f58
data_14cf020 = 0x1000300000509
data_1126f78
data_14cf680 = data_1126f28
data_14cf6f0 = 0x10
__builtin_memset(&data_14cf690, 0, 0x50)
data_14cf028 = 2
data_14cf030 = PhilosopherStone
data_14cf6e0 = v1
data_14cf6f8 = 0x40000
data_14cf700 = 0xffffffff
data_14cf738 = "golem"
data_14cf740 = 0xf
data_14cf748 = TEXTURE_CARD_GEN_ALCHEMY_GOLEM
data_14cf770 = _vtable_for_UI2StateDecl + 0x10
data_14cf750 = SOUND_SOUND_CARDS_FX_LANDPLAY_GOLEM
void* x0_20 = UI2StateDeclTryLookup("al_Golem")

if (x0_20 == 0)
    (*data_14cf770)(&data_14cf770, "al_Golem")
    uint32_t x10_48 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cf770
    *UI2StateDeclI_counter = x10_48 + 1
    data_14cf778 = x11_21
else
    (*data_14cf770)(&data_14cf770, *(x0_20 + 0x10))

data_14cf788 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("al_Golem")

if (x0_21 == 0)
    (*data_14cf788)(&data_14cf788, "al_Golem")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cf788
    *UI2StateDeclI_counter = x10_50 + 1
    data_14cf790 = x11_22
else
    (*data_14cf788)(&data_14cf788, *(x0_21 + 0x10))

data_14cf7a8 = 4
data_14cf7b0 = Golem
__builtin_memcpy(&data_14cfe60, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"08\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14cf7a0 = 0x100040000050a
data_14cfe80 = 0xffffffff
data_14cfeb8 = "apprentice"
data_14cfec0 = 0x2a
data_14cfec8 = TEXTURE_CARD_GEN_ALCHEMY_APPRENTICE
data_14cfef0 = _vtable_for_UI2StateDecl + 0x10
data_14cfed0 = SOUND_SOUND_CARDS_FX_LANDPLAY_APPRENTICE
void* x0_22 = UI2StateDeclTryLookup("al_Apprentice")

if (x0_22 == 0)
    (*data_14cfef0)(&data_14cfef0, "al_Apprentice")
    uint32_t x10_53 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cfef0
    *UI2StateDeclI_counter = x10_53 + 1
    data_14cfef8 = x11_23
else
    (*data_14cfef0)(&data_14cfef0, *(x0_22 + 0x10))

data_14cff08 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("al_Apprentice")

if (x0_23 == 0)
    (*data_14cff08)(&data_14cff08, "al_Apprentice")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14cff08
    *UI2StateDeclI_counter = x10_55 + 1
    data_14cff10 = x11_24
else
    (*data_14cff08)(&data_14cff08, *(x0_23 + 0x10))

data_14cff28 = 4
data_14cff30 = Apprentice
__builtin_memcpy(&data_14d05e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x08\x00\x00\x00\x"
"00\x00\x00\x40\x00\x00\x00\x00", 
    0x20)
data_14cff20 = 0x50000050b
data_14d0600 = 0xffffffff
data_14d0638 = "possession"
data_14d0640 = 0x20
data_14d0648 = TEXTURE_CARD_GEN_ALCHEMY_POSSESSION
data_14d0650 = SOUND_SOUND_CARDS_FX_LANDPLAY_POSSESSION
data_14d0658 = SOUND_SOUND_CARDS_FX_ONGOING_POSSESSION
data_14d0670 = _vtable_for_UI2StateDecl + 0x10
void* x0_24 = UI2StateDeclTryLookup("al_Possession")

if (x0_24 == 0)
    (*data_14d0670)(&data_14d0670, "al_Possession")
    uint32_t x10_57 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d0670
    *UI2StateDeclI_counter = x10_57 + 1
    data_14d0678 = x11_25
else
    (*data_14d0670)(&data_14d0670, *(x0_24 + 0x10))

data_14d0688 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("al_Possession")
int128_t v0_4
int128_t v1_10

if (x0_25 == 0)
    v0_4, v1_10 = (*data_14d0688)(&data_14d0688, "al_Possession")
    uint32_t x10_59 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d0688
    *UI2StateDeclI_counter = x10_59 + 1
    data_14d0690 = x11_26
else
    v0_4, v1_10 = (*data_14d0688)(&data_14d0688, *(x0_25 + 0x10))

v1_10.q = 0x100060000050c
data_14d06a8 = 4
data_14d06b0 = Possession
v0_4.q = 0
v0_4:8.q = 0
data_14d0768 = zx.o(0)
data_14d0768.q = Possession_OnTrash_Test
data_14d0778 = 0
data_14d0768:0xc = 0x200000002
data_14d06d8 = zx.o(0)
data_14d06d8.q = Possession_OnTrash
data_14d06c8 = zx.o(0)
__builtin_memset(&data_14d06e8, 0, 0x80)
data_14d06c0 = 0x800000006
data_14d06c8:4.d = 0
data_14d06a0 = 0x100060000050c
__builtin_memset(&data_14d0788, 0, 0xb8)
data_14d0780 = 0x800000006
data_14d0788:4.d = 1
data_14d0828 = 0
data_14d0798 = Possession_EndOfTurn
data_1126fa8
v1_10 = data_1126fb8
data_14d0834 = 0x300000002
data_14d0cf0 = v1_10
v0_4 = data_1126fc8
__builtin_memcpy(&data_14d0cc0, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"f0\x20\x76\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x3c\xda\x77\x00\x00\x00\x00\x
        00", 
    0x30)
__builtin_memset(&data_14d0d10, 0, 0x50)
data_14d0d00 = v0_4
int128_t v3_2 = data_71a6a0
__builtin_memcpy(&data_14d0d60, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
__builtin_memset(&data_14d0d98, 0, 0x20)
data_14d0db8 = "herbalist"
__builtin_memcpy(&data_14d0d78, 
    "\x21\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d0dc0 = 0x14
data_14d0dc8 = TEXTURE_CARD_GEN_ALCHEMY_HERBALIST
data_14d0dd0 = SOUND_SOUND_CARDS_FX_LANDPLAY_HERBALIST
data_14d0df0 = _vtable_for_UI2StateDecl + 0x10
void* x0_26 = UI2StateDeclTryLookup("al22_Herbalist")

if (x0_26 == 0)
    (*data_14d0df0)(&data_14d0df0, "al22_Herbalist")
    uint32_t x10_61 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d0df0
    *UI2StateDeclI_counter = x10_61 + 1
    data_14d0df8 = x11_28
else
    (*data_14d0df0)(&data_14d0df0, *(x0_26 + 0x10))

data_14d0e08 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("al_Herbalist")

if (x0_27 == 0)
    (*data_14d0e08)(&data_14d0e08, "al_Herbalist")
    uint32_t x10_63 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d0e08
    *UI2StateDeclI_counter = x10_63 + 1
    data_14d0e10 = x11_29
else
    (*data_14d0e08)(&data_14d0e08, *(x0_27 + 0x10))

data_14d14e0 = v3_2
data_14d0e28 = 4
data_14d0e30 = Herbalist22
data_14d1440 = 1
data_14d0e20 = 0x200000503
data_14d14f0 = 0x10
int128_t var_e0
data_14d14f8 = var_e0
int128_t v0_5 = var_f0
data_14d1538 = "alchemist"
data_14d1508 = v0_5
int128_t var_100
data_14d1518 = var_100
data_14d1528 = var_110
data_14d1540 = 0x38
data_14d1548 = TEXTURE_CARD_GEN_ALCHEMY_ALCHEMIST
data_14d1550 = SOUND_SOUND_CARDS_FX_LANDPLAY_ALCHEMIST
data_14d1570 = _vtable_for_UI2StateDecl + 0x10
void* x0_28 = UI2StateDeclTryLookup("al22_Alchemist")

if (x0_28 == 0)
    (*data_14d1570)(&data_14d1570, "al22_Alchemist")
    uint32_t x10_66 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d1570
    *UI2StateDeclI_counter = x10_66 + 1
    data_14d1578 = x11_30
else
    (*data_14d1570)(&data_14d1570, *(x0_28 + 0x10))

data_14d1588 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("al_Alchemist")
int64_t result

if (x0_29 == 0)
    result = (*data_14d1588)(&data_14d1588, "al_Alchemist")
    uint32_t x10_68 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d1588
    *UI2StateDeclI_counter = x10_68 + 1
    data_14d1590 = x11_31
else
    result = (*data_14d1588)(&data_14d1588, *(x0_29 + 0x10))

data_14d15a0 = 0x1000300000507
data_14d15a8 = 4
data_14d15b0 = Alchemist22
data_14d1bc0 = 1
return result
