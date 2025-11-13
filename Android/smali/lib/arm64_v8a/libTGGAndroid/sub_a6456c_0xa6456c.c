// 函数: sub_a6456c
// 地址: 0xa6456c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x1615898, 0, 0x1ba80)
int128_t v0 = data_71c2f0
data_16158b0 = 1
data_16158b8 = 0xffffffff
data_16158f0 = "poor_house"
data_16158f8 = 0x1b
data_1615900 = TEXTURE_CARD_GEN_DARK_AGES_POORHOUSE
data_1615908 = SOUND_SOUND_CARDS_FX_LANDPLAY_POOR_HOUSE
data_16158a0 = v0
data_1615928 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("d_Poor_House")

if (x0 == 0)
    (*data_1615928)(&data_1615928, "d_Poor_House")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1615928
    *UI2StateDeclI_counter = x10_1 + 1
    data_1615930 = x11_1
else
    (*data_1615928)(&data_1615928, *(x0 + 0x10))

data_1615940 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("d_Poor_House")
int128_t v0_1
int128_t v6

if (x0_1 == 0)
    v0_1, v6 = (*data_1615940)(&data_1615940, "d_Poor_House")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1615940
    *UI2StateDeclI_counter = x10_3 + 1
    data_1615948 = x11_2
else
    v0_1, v6 = (*data_1615940)(&data_1615940, *(x0_1 + 0x10))

v0_1.q = 0x100000900
data_1615958 = 0x100000900
v0_1 = data_113af30
data_1615960 = 4
data_1615968 = PoorHouse
v6 = data_71c2d0
data_1615fb8 = v0_1
__builtin_memset(&data_1615fc8, 0, 0x50)
__builtin_memcpy(&data_1616018, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_1616070 = "beggar"
__builtin_memset(&data_1616050, 0, 0x20)
__builtin_memcpy(&data_1616030, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x40\x01\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1616078 = 0x10
data_1616080 = TEXTURE_CARD_GEN_DARK_AGES_BEGGAR
data_1616088 = SOUND_SOUND_CARDS_FX_LANDPLAY_BEGGAR
data_1616090 = SOUND_SOUND_CARDS_FX_REACTION_BEGGAR
data_16160a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("d_Beggar")

if (x0_2 == 0)
    (*data_16160a8)(&data_16160a8, "d_Beggar")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16160a8
    *UI2StateDeclI_counter = x10_5 + 1
    data_16160b0 = x11_3
else
    (*data_16160a8)(&data_16160a8, *(x0_2 + 0x10))

data_16160c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("d_Beggar")

if (x0_3 == 0)
    (*data_16160c0)(&data_16160c0, "d_Beggar")
    uint32_t x10_7 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16160c0
    *UI2StateDeclI_counter = x10_7 + 1
    data_16160c8 = x11_4
else
    (*data_16160c0)(&data_16160c0, *(x0_3 + 0x10))

data_16160e0 = 0x44
data_16160e8 = Beggar
int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
__builtin_memset(&data_1616100, 0, 0xb0)
data_1616100:4.d = 5
data_1616110 = Beggar_Reaction
data_16166f8 = 1
data_16161ac:4 = 0
data_16161ac = 0x100000001
__builtin_memcpy(&data_1616798, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16160d8 = 0x200000901
data_16161a0 = 0
data_16160f8 = 6
data_16167f0 = "squire"
__builtin_memset(&data_16167d0, 0, 0x20)
__builtin_memcpy(&data_16167b0, 
    "\x25\x00\x01\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16167f8 = 0x14
data_1616800 = TEXTURE_CARD_GEN_DARK_AGES_SQUIRE
data_1616828 = _vtable_for_UI2StateDecl + 0x10
data_1616808 = SOUND_SOUND_CARDS_FX_LANDPLAY_SQUIRE
void* x0_4 = UI2StateDeclTryLookup("d_Squire")

if (x0_4 == 0)
    (*data_1616828)(&data_1616828, "d_Squire")
    uint32_t x10_10 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1616828
    *UI2StateDeclI_counter = x10_10 + 1
    data_1616830 = x11_5
else
    (*data_1616828)(&data_1616828, *(x0_4 + 0x10))

data_1616840 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("d_Squire")

if (x0_5 == 0)
    (*data_1616840)(&data_1616840, "d_Squire")
    uint32_t x10_12 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1616840
    *UI2StateDeclI_counter = x10_12 + 1
    data_1616848 = x11_6
else
    (*data_1616840)(&data_1616840, *(x0_5 + 0x10))

int128_t v0_3
v0_3.q = 0
v0_3:8.q = 0
__builtin_memset(&data_1616880, 0, 0xb0)
v0_3.d = 6
v0_3:4.d = 6
data_1616878 = 0x600000006
v0_3.q = 0x200000902
data_1616860 = 4
data_1616868 = Squire
data_1616880:4.d = 2
data_1616858 = 0x200000902
data_1616890 = Squire_OnTrash
data_1616e78 = 1
data_161692c:4 = 0
data_1616920 = 0
__builtin_memcpy(&data_1616f18, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161692c = 0x100000002
data_1616f38 = 0xffffffff
data_1616f70 = "vagrant"
data_1616f78 = 0x1c
data_1616f80 = TEXTURE_CARD_GEN_DARK_AGES_VAGRANT
data_1616fa8 = _vtable_for_UI2StateDecl + 0x10
data_1616f88 = SOUND_SOUND_CARDS_FX_LANDPLAY_VAGRANT
void* x0_6 = UI2StateDeclTryLookup("d_Vagrant")

if (x0_6 == 0)
    (*data_1616fa8)(&data_1616fa8, "d_Vagrant")
    uint32_t x10_15 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1616fa8
    *UI2StateDeclI_counter = x10_15 + 1
    data_1616fb0 = x11_7
else
    (*data_1616fa8)(&data_1616fa8, *(x0_6 + 0x10))

data_1616fc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("d_Vagrant")

if (x0_7 == 0)
    (*data_1616fc0)(&data_1616fc0, "d_Vagrant")
    uint32_t x10_17 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1616fc0
    *UI2StateDeclI_counter = x10_17 + 1
    data_1616fc8 = x11_8
else
    (*data_1616fc0)(&data_1616fc0, *(x0_7 + 0x10))

data_1616fe0 = 4
data_1616fe8 = Vagrant
__builtin_memcpy(&data_1617698, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"23\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1616fd8 = 0x200000903
data_16176b8 = 0xffffffff
data_16176f0 = "forager"
data_16176f8 = 0xe
data_1617700 = TEXTURE_CARD_GEN_DARK_AGES_FORAGER
data_1617728 = _vtable_for_UI2StateDecl + 0x10
data_1617708 = SOUND_SOUND_CARDS_FX_LANDPLAY_FORAGER
void* x0_8 = UI2StateDeclTryLookup("d_Forager")

if (x0_8 == 0)
    (*data_1617728)(&data_1617728, "d_Forager")
    uint32_t x10_20 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1617728
    *UI2StateDeclI_counter = x10_20 + 1
    data_1617730 = x11_9
else
    (*data_1617728)(&data_1617728, *(x0_8 + 0x10))

data_1617740 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("d_Forager")

if (x0_9 == 0)
    (*data_1617740)(&data_1617740, "d_Forager")
    uint32_t x10_22 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1617740
    *UI2StateDeclI_counter = x10_22 + 1
    data_1617748 = x11_10
else
    (*data_1617740)(&data_1617740, *(x0_9 + 0x10))

data_113afc0
data_1617758 = 0x300000904
__builtin_memset(&data_1617dd8, 0, 0x20)
int128_t v2 = data_71c490
data_1617760 = 4
data_1617768 = Forager
__builtin_memset(&data_1617df8, 0, 0x20)
__builtin_memcpy(&data_1617db8, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x8c\x20\xa6\x00\x00\x00\x00\x00\x00\x80\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1617e18 = v2
int128_t v1_1 = data_7e2b38
v2 = data_7e2b48
data_1617e28 = 2
int128_t var_e0
__builtin_memset(&var_e0, 0, 0x20)
__builtin_memset(&data_1617e50, 0, 0x20)
int128_t var_100
__builtin_memcpy(&var_100, 
    "\x00\x80\x01\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x20\x01\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
data_1617e40 = v2
data_1617e30 = v1_1
data_1617e70 = "hermit"
data_1617e78 = 8
data_1617e80 = TEXTURE_CARD_GEN_DARK_AGES_HERMIT
data_1617e88 = SOUND_SOUND_CARDS_FX_LANDPLAY_HERMIT
data_1617ea8 = _vtable_for_UI2StateDecl + 0x10
void* x0_10 = UI2StateDeclTryLookup("d_Hermit")

if (x0_10 == 0)
    (*data_1617ea8)(&data_1617ea8, "d_Hermit")
    uint32_t x10_24 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1617ea8
    *UI2StateDeclI_counter = x10_24 + 1
    data_1617eb0 = x11_11
else
    (*data_1617ea8)(&data_1617ea8, *(x0_10 + 0x10))

data_1617ec0 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("d_Hermit")

if (x0_11 == 0)
    (*data_1617ec0)(&data_1617ec0, "d_Hermit")
    uint32_t x10_26 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1617ec0
    *UI2StateDeclI_counter = x10_26 + 1
    data_1617ec8 = x11_12
else
    (*data_1617ec0)(&data_1617ec0, *(x0_11 + 0x10))

int128_t v4
v4.q = 0x300000905
data_1617ee0 = 4
data_1617ee8 = Hermit
data_1617f00 = zx.o(0)
data_1617f00:4.d = 3
data_1617fa0 = zx.o(0)
data_1617f10 = zx.o(0)
data_1617fa0.q = Hermit_WhenDiscardFromPlay_Test
data_1617f10.q = Hermit_WhenDiscardFromPlay
__builtin_memset(&data_1617fb0, 0, 0xc8)
__builtin_memset(&data_1617f20, 0, 0x80)
data_1617ef8 = 0x600000006
data_1617fa0:0xc = 0x100000002
data_1617ed8 = 0x300000905
data_16185a8 = 0xd
data_1617fb8 = 0xc
data_1617fc8:8.d = 0x92c
data_16184f8 = 1
data_1618068:4.d = 0
data_1618598 = v6
data_16185f0 = "market_square"
__builtin_memset(&data_16185d0, 0, 0x20)
__builtin_memcpy(&data_16185b0, 
    "\x2a\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x40\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16185f8 = 0x25
data_1618600 = TEXTURE_CARD_GEN_DARK_AGES_MARKETSQUARE
data_1618608 = SOUND_SOUND_CARDS_FX_LANDPLAY_MARKET_SQUARE
data_1618610 = SOUND_SOUND_CARDS_FX_REACTION_MARKET_SQUARE
data_1618628 = _vtable_for_UI2StateDecl + 0x10
void* x0_12 = UI2StateDeclTryLookup("d_Market_Square")

if (x0_12 == 0)
    (*data_1618628)(&data_1618628, "d_Market_Square")
    uint32_t x10_28 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1618628
    *UI2StateDeclI_counter = x10_28 + 1
    data_1618630 = x11_13
else
    (*data_1618628)(&data_1618628, *(x0_12 + 0x10))

data_1618640 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("d_Market_Square")

if (x0_13 == 0)
    (*data_1618640)(&data_1618640, "d_Market_Square")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1618640
    *UI2StateDeclI_counter = x10_30 + 1
    data_1618648 = x11_14
else
    (*data_1618640)(&data_1618640, *(x0_13 + 0x10))

data_1618660 = 0x44
data_1618668 = MarketSquare
int128_t v1_2
v1_2.q = 0x300000906
data_1618680 = zx.o(0)
data_1618680:4.d = 4
data_1618690 = zx.o(0)
data_1618690.q = MarketSquare_Reaction
__builtin_memset(&data_16186a0, 0, 0x90)
data_1618658 = 0x300000906
data_1618720 = MarketSquare_Reaction_Test
data_1618c78 = 1
data_161872c:4 = 0
data_1618678 = 6
__builtin_memcpy(&data_1618d18, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161872c = 0x100000003
data_1618d38 = 0xffffffff
data_1618d70 = "sage"
data_1618d78 = 0x14
data_1618d80 = TEXTURE_CARD_GEN_DARK_AGES_SAGE
data_1618da8 = _vtable_for_UI2StateDecl + 0x10
data_1618d88 = SOUND_SOUND_CARDS_FX_LANDPLAY_SAGE
void* x0_14 = UI2StateDeclTryLookup("d_Sage")

if (x0_14 == 0)
    (*data_1618da8)(&data_1618da8, "d_Sage")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1618da8
    *UI2StateDeclI_counter = x10_33 + 1
    data_1618db0 = x11_15
else
    (*data_1618da8)(&data_1618da8, *(x0_14 + 0x10))

data_1618dc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("d_Sage")

if (x0_15 == 0)
    (*data_1618dc0)(&data_1618dc0, "d_Sage")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1618dc0
    *UI2StateDeclI_counter = x10_35 + 1
    data_1618dc8 = x11_16
else
    (*data_1618dc0)(&data_1618dc0, *(x0_15 + 0x10))

int128_t v0_4
v0_4.q = 0x300000907
data_1618dd8 = 0x300000907
data_1618de0 = 4
data_1618de8 = Sage
__builtin_memcpy(&data_1619498, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"49\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16194b8 = 0xffffffff
data_16194f0 = "storeroom"
data_16194f8 = 5
data_1619500 = TEXTURE_CARD_GEN_DARK_AGES_STOREROOM
data_1619528 = _vtable_for_UI2StateDecl + 0x10
data_1619508 = SOUND_SOUND_CARDS_FX_LANDPLAY_STOREROOM
void* x0_16 = UI2StateDeclTryLookup("d_Storeroom")

if (x0_16 == 0)
    (*data_1619528)(&data_1619528, "d_Storeroom")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1619528
    *UI2StateDeclI_counter = x10_38 + 1
    data_1619530 = x11_17
else
    (*data_1619528)(&data_1619528, *(x0_16 + 0x10))

data_1619540 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("d_Storeroom")
int128_t v1_3
int128_t v2_1

if (x0_17 == 0)
    v1_3, v2_1 = (*data_1619540)(&data_1619540, "d_Storeroom")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1619540
    *UI2StateDeclI_counter = x10_40 + 1
    data_1619548 = x11_18
else
    v1_3, v2_1 = (*data_1619540)(&data_1619540, *(x0_17 + 0x10))

data_1619c18 = v6
v1_3 = data_7e2898
v2_1 = data_7e28a8
data_1619560 = 4
data_1619568 = Storeroom
data_1619c28 = 0xa
data_1619558 = 0x300000908
data_1619c30 = v1_3
data_1619c70 = "urchin"
data_1619c40 = v2_1
__builtin_memset(&data_1619c50, 0, 0x20)
data_1619c78 = 0x2a
data_1619c80 = TEXTURE_CARD_GEN_DARK_AGES_URCHIN
data_1619ca8 = _vtable_for_UI2StateDecl + 0x10
data_1619c88 = SOUND_SOUND_CARDS_FX_LANDPLAY_URCHIN
void* x0_18 = UI2StateDeclTryLookup("d_Urchin")

if (x0_18 == 0)
    (*data_1619ca8)(&data_1619ca8, "d_Urchin")
    uint32_t x10_43 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1619ca8
    *UI2StateDeclI_counter = x10_43 + 1
    data_1619cb0 = x11_19
else
    (*data_1619ca8)(&data_1619ca8, *(x0_18 + 0x10))

data_1619cc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("d_Urchin")

if (x0_19 == 0)
    (*data_1619cc0)(&data_1619cc0, "d_Urchin")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1619cc0
    *UI2StateDeclI_counter = x10_45 + 1
    data_1619cc8 = x11_20
else
    (*data_1619cc0)(&data_1619cc0, *(x0_19 + 0x10))

int128_t v0_5
v0_5.q = 0
v0_5:8.q = 0
data_1619ce0 = 0x24
data_1619ce8 = Urchin
__builtin_memset(&data_1619da0, 0, 0x18)
data_1619dac = 0x100000003
data_1619d00 = zx.o(0)
data_1619d00:4.d = 2
data_1619d10 = zx.o(0)
data_1619d10.q = Urchin_WhileInPlay
data_1619d20 = zx.o(0)
data_1619da0 = Urchin_WhileInPlay_Test
__builtin_memset(&data_1619d30, 0, 0x70)
data_1619cd8 = 0x300000909
data_1619cf8 = 0x100000006
__builtin_memset(&data_1619db8, 0, 0xc0)
data_1619db8 = 0xc
data_1619dc8:8.d = 0x92d
data_161a2f8 = 1
data_1619e68:4.d = 0
__builtin_memcpy(&data_161a398, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x01\x01\x00\x00\x00\x00\x00", 
    0x20)
data_161a3b8 = 0xffffffff
data_161a3f0 = "armory"
data_161a3f8 = 0x27
data_161a400 = TEXTURE_CARD_GEN_DARK_AGES_ARMORY
data_161a428 = _vtable_for_UI2StateDecl + 0x10
data_161a408 = SOUND_SOUND_CARDS_FX_LANDPLAY_ARMORY
void* x0_20 = UI2StateDeclTryLookup("d_Armory")

if (x0_20 == 0)
    (*data_161a428)(&data_161a428, "d_Armory")
    uint32_t x10_48 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161a428
    *UI2StateDeclI_counter = x10_48 + 1
    data_161a430 = x11_21
else
    (*data_161a428)(&data_161a428, *(x0_20 + 0x10))

data_161a440 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("d_Armory")
int128_t v1_4
int128_t v2_2

if (x0_21 == 0)
    v1_4, v2_2 = (*data_161a440)(&data_161a440, "d_Armory")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161a440
    *UI2StateDeclI_counter = x10_50 + 1
    data_161a448 = x11_22
else
    v1_4, v2_2 = (*data_161a440)(&data_161a440, *(x0_21 + 0x10))

data_161a460 = 4
data_161a468 = Armory
data_161ab18 = v6
v1_4 = data_7e28d8
v2_2 = data_7e28e8
data_161a458 = 0x40000090a
data_161ab28 = 0x12
data_161ab30 = v1_4
data_161ab70 = "death_cart"
data_161ab40 = v2_2
__builtin_memset(&data_161ab50, 0, 0x20)
data_161ab78 = 0x28
data_161ab80 = TEXTURE_CARD_GEN_DARK_AGES_DEATHCART
data_161aba8 = _vtable_for_UI2StateDecl + 0x10
data_161ab88 = SOUND_SOUND_CARDS_FX_LANDPLAY_DEATH_CART
void* x0_22 = UI2StateDeclTryLookup("d_Death_Cart")

if (x0_22 == 0)
    (*data_161aba8)(&data_161aba8, "d_Death_Cart")
    uint32_t x10_53 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161aba8
    *UI2StateDeclI_counter = x10_53 + 1
    data_161abb0 = x11_23
else
    (*data_161aba8)(&data_161aba8, *(x0_22 + 0x10))

data_161abc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("d_Death_Cart")

if (x0_23 == 0)
    (*data_161abc0)(&data_161abc0, "d_Death_Cart")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161abc0
    *UI2StateDeclI_counter = x10_55 + 1
    data_161abc8 = x11_24
else
    (*data_161abc0)(&data_161abc0, *(x0_23 + 0x10))

data_161abe0 = 0x1004
data_161abe8 = DeathCart
int128_t v0_6
v0_6.q = 0
v0_6:8.q = 0
__builtin_memset(&data_161ac00, 0, 0xb0)
data_161ac10 = DeathCard_OnGain
data_161ac00:4.d = 1
data_161b1f8 = 1
data_161abf8 = 0x600000006
__builtin_memcpy(&data_161b298, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_161abd8 = 0x40000090b
data_161acac:4 = 0
data_161aca0 = 0
data_161acac = 0x100000000
data_161b2f0 = "feodum"
int64_t var_120 = 0x100000000
__builtin_memset(&data_161b2d0, 0, 0x20)
__builtin_memcpy(&data_161b2b0, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161b2f8 = 0x2d
data_161b300 = TEXTURE_CARD_GEN_DARK_AGES_FEODUM
data_161b328 = _vtable_for_UI2StateDecl + 0x10
void* x0_24 = UI2StateDeclTryLookup("d_Feodum")

if (x0_24 == 0)
    (*data_161b328)(&data_161b328, "d_Feodum")
    uint32_t x10_57 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161b328
    *UI2StateDeclI_counter = x10_57 + 1
    data_161b330 = x11_25
else
    (*data_161b328)(&data_161b328, *(x0_24 + 0x10))

data_161b340 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("d_Feodum")
int128_t v1_5
int128_t v2_3
int128_t v4_1

if (x0_25 == 0)
    v1_5, v2_3, v4_1 = (*data_161b340)(&data_161b340, "d_Feodum")
    uint32_t x10_59 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161b340
    *UI2StateDeclI_counter = x10_59 + 1
    data_161b348 = x11_26
else
    v1_5, v2_3, v4_1 = (*data_161b340)(&data_161b340, *(x0_25 + 0x10))
data_161b360 = 8
data_161b370 = Feodum_VP
v1_5.q = 0
v1_5:8.q = 0
data_161b390 = zx.o(0)
v2_3.d = 6
v2_3:4.d = 6
data_161b390.q = Feodum_OnTrash
data_161b380 = zx.o(0)
__builtin_memset(&data_161b3a0, 0, 0x90)
data_161b378 = 0x600000006
v2_3 = data_7e29a8
data_161b358 = 0x40000090c
v1_5 = data_7e2958
data_161ba08 = v2_3
data_161b380:4.d = 2
data_161b9b8 = v1_5
data_161b978 = 1
__builtin_memset(&data_161b9c8, 0, 0x40)
data_161b42c:4 = 0
data_161b420 = 0
data_161b42c = 0x100000002
__builtin_memcpy(&data_161ba18, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_161ba70 = "fortress"
__builtin_memset(&data_161ba50, 0, 0x20)
__builtin_memcpy(&data_161ba30, 
    "\x0c\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161ba78 = 0x28
data_161ba80 = TEXTURE_CARD_GEN_DARK_AGES_FORTRESS
data_161baa8 = _vtable_for_UI2StateDecl + 0x10
data_161ba88 = SOUND_SOUND_CARDS_FX_LANDPLAY_FORTRESS
void* x0_26 = UI2StateDeclTryLookup("d_Fortress")

if (x0_26 == 0)
    (*data_161baa8)(&data_161baa8, "d_Fortress")
    uint32_t x10_62 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161baa8
    *UI2StateDeclI_counter = x10_62 + 1
    data_161bab0 = x11_27
else
    (*data_161baa8)(&data_161baa8, *(x0_26 + 0x10))

data_161bac0 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("d_Fortress")

if (x0_27 == 0)
    (*data_161bac0)(&data_161bac0, "d_Fortress")
    uint32_t x10_64 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161bac0
    *UI2StateDeclI_counter = x10_64 + 1
    data_161bac8 = x11_28
else
    (*data_161bac0)(&data_161bac0, *(x0_27 + 0x10))

__builtin_memset(&data_161bb00, 0, 0xb0)
data_161baf8 = 0x600000006
data_161bae0 = 4
data_161bae8 = Fortress
data_161bb10 = Fortress_OnTrash
data_161bad8 = 0x40000090d
data_161bb00:4.d = 2
data_161c0f8 = 1
data_161bbac:4 = 0
data_161bba0 = 0
data_161bbac = 0x100000002
__builtin_memcpy(&data_161c198, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00\x"
"0e\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161c1b8 = 0xffffffff
data_161c1f0 = "ironmonger"
data_161c1f8 = 0xa
data_161c200 = TEXTURE_CARD_GEN_DARK_AGES_IRONMONGER
data_161c228 = _vtable_for_UI2StateDecl + 0x10
data_161c208 = SOUND_SOUND_CARDS_FX_LANDPLAY_IRONMONGER
void* x0_28 = UI2StateDeclTryLookup("d_Ironmonger")

if (x0_28 == 0)
    (*data_161c228)(&data_161c228, "d_Ironmonger")
    uint32_t x10_67 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161c228
    *UI2StateDeclI_counter = x10_67 + 1
    data_161c230 = x11_29
else
    (*data_161c228)(&data_161c228, *(x0_28 + 0x10))

data_161c240 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("d_Ironmonger")

if (x0_29 == 0)
    (*data_161c240)(&data_161c240, "d_Ironmonger")
    uint32_t x10_69 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161c240
    *UI2StateDeclI_counter = x10_69 + 1
    data_161c248 = x11_30
else
    (*data_161c240)(&data_161c240, *(x0_29 + 0x10))

int128_t v0_7
v0_7.q = 0x40000090e
data_161c258 = 0x40000090e
data_161c260 = 4
data_161c268 = Ironmonger
__builtin_memcpy(&data_161c918, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x12\x00\x00\x00\x"
"00\x00\x01\x20\x00\x00\x00\x00", 
    0x20)
data_161c938 = 0xffffffff
data_161c970 = "marauder"
data_161c978 = 0xf
data_161c980 = TEXTURE_CARD_GEN_DARK_AGES_MARAUDER
data_161c9a8 = _vtable_for_UI2StateDecl + 0x10
data_161c988 = SOUND_SOUND_CARDS_FX_LANDPLAY_MARAUDER
void* x0_30 = UI2StateDeclTryLookup("d_Marauder")

if (x0_30 == 0)
    (*data_161c9a8)(&data_161c9a8, "d_Marauder")
    uint32_t x10_72 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161c9a8
    *UI2StateDeclI_counter = x10_72 + 1
    data_161c9b0 = x11_31
else
    (*data_161c9a8)(&data_161c9a8, *(x0_30 + 0x10))

data_161c9c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("d_Marauder")

if (x0_31 == 0)
    (*data_161c9c0)(&data_161c9c0, "d_Marauder")
    uint32_t x10_74 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161c9c0
    *UI2StateDeclI_counter = x10_74 + 1
    data_161c9c8 = x11_32
else
    (*data_161c9c0)(&data_161c9c0, *(x0_31 + 0x10))

__builtin_memset(&data_161c9f8, 0, 0xc0)
data_161c9f8 = 0xc
data_161c9d8 = 0x40000090f
data_161c9e0 = 0x1024
data_161c9e8 = Marauder
data_161ca08:8.d = 0x92e
data_161caa8:4.d = 0
__builtin_memcpy(&data_161d098, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"00\x40\x09\x00\x00\x00\x00\x00", 
    0x20)
data_161d0b8 = 0xffffffff
data_161d0f0 = "procession"
data_161d0f8 = 5
data_161d100 = TEXTURE_CARD_GEN_DARK_AGES_PROCESSION
data_161d128 = _vtable_for_UI2StateDecl + 0x10
data_161d108 = SOUND_SOUND_CARDS_FX_LANDPLAY_PROCESSION
void* x0_32 = UI2StateDeclTryLookup("d_Procession")

if (x0_32 == 0)
    (*data_161d128)(&data_161d128, "d_Procession")
    uint32_t x10_77 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161d128
    *UI2StateDeclI_counter = x10_77 + 1
    data_161d130 = x11_33
else
    (*data_161d128)(&data_161d128, *(x0_32 + 0x10))

data_161d140 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("d_Procession")
int128_t v1_8
int128_t v2_4
int128_t v4_2

if (x0_33 == 0)
    v1_8, v2_4, v4_2 = (*data_161d140)(&data_161d140, "d_Procession")
    uint32_t x10_79 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161d140
    *UI2StateDeclI_counter = x10_79 + 1
    data_161d148 = x11_34
else
    v1_8, v2_4, v4_2 = (*data_161d140)(&data_161d140, *(x0_33 + 0x10))
data_113b010
data_113b020
data_161d158 = 0x400000910
__builtin_memset(&data_161d7d8, 0, 0x20)
v1_8 = data_113aff0
v2_4 = data_113b000
data_161d160 = 4
data_161d168 = Procession
__builtin_memset(&data_161d7f8, 0, 0x20)
data_161d7b8 = v1_8
data_161d7c8 = v2_4
__builtin_memcpy(&data_161d818, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_161d870 = "rats"
__builtin_memset(&data_161d850, 0, 0x20)
__builtin_memcpy(&data_161d830, 
    "\x0a\x20\x01\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161d878 = 0x15
data_161d880 = TEXTURE_CARD_GEN_DARK_AGES_RATS
data_161d8a8 = _vtable_for_UI2StateDecl + 0x10
data_161d888 = SOUND_SOUND_CARDS_FX_LANDPLAY_RATS
void* x0_34 = UI2StateDeclTryLookup("d_Rats")

if (x0_34 == 0)
    (*data_161d8a8)(&data_161d8a8, "d_Rats")
    uint32_t x10_82 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161d8a8
    *UI2StateDeclI_counter = x10_82 + 1
    data_161d8b0 = x11_35
else
    (*data_161d8a8)(&data_161d8a8, *(x0_34 + 0x10))

data_161d8c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("d_Rats")

if (x0_35 == 0)
    (*data_161d8c0)(&data_161d8c0, "d_Rats")
    uint32_t x10_84 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161d8c0
    *UI2StateDeclI_counter = x10_84 + 1
    data_161d8c8 = x11_36
else
    (*data_161d8c0)(&data_161d8c0, *(x0_35 + 0x10))

data_161d8f8 = 0x600000006
data_161d8e0 = 4
data_161d8e8 = Rats
int128_t v0_8
v0_8.q = 0
v0_8:8.q = 0
data_161d900 = zx.o(0)
data_161d900:4.d = 2
data_161d910 = zx.o(0)
data_161d910.q = Rats_OnTrash
data_161d8d8 = 0x400000911
data_161d9a0 = zx.o(0)
__builtin_memset(&data_161d9b0, 0, 0xc8)
__builtin_memset(&data_161d920, 0, 0x88)
data_161d9a0:0xc = 0x100000002
data_161d9b8 = 0xb
data_161da48:8.d = 1
data_161def8 = 1
data_161d9c8:8 = 0x1400000000
__builtin_memcpy(&data_161df98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"01\x01\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161dfb8 = 0xffffffff
data_161dff0 = "scavenger"
data_161dff8 = 0xf
data_161e000 = TEXTURE_CARD_GEN_DARK_AGES_SCAVENGER
data_161e028 = _vtable_for_UI2StateDecl + 0x10
data_161e008 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCAVENGER
void* x0_36 = UI2StateDeclTryLookup("d_Scavenger")

if (x0_36 == 0)
    (*data_161e028)(&data_161e028, "d_Scavenger")
    uint32_t x10_87 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161e028
    *UI2StateDeclI_counter = x10_87 + 1
    data_161e030 = x11_37
else
    (*data_161e028)(&data_161e028, *(x0_36 + 0x10))

data_161e040 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("d_Scavenger")

if (x0_37 == 0)
    (*data_161e040)(&data_161e040, "d_Scavenger")
    uint32_t x10_89 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161e040
    *UI2StateDeclI_counter = x10_89 + 1
    data_161e048 = x11_38
else
    (*data_161e040)(&data_161e040, *(x0_37 + 0x10))

data_161e058 = 0x400000912
data_161e060 = 4
data_161e068 = Scavenger
__builtin_memcpy(&data_161e718, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161e738 = 0xffffffff
data_161e770 = "wandering_minstrel"
data_161e778 = 0x12
data_161e780 = TEXTURE_CARD_GEN_DARK_AGES_WANDERING_MINSTREL
data_161e7a8 = _vtable_for_UI2StateDecl + 0x10
data_161e788 = SOUND_SOUND_CARDS_FX_LANDPLAY_WANDERING_MINSTREL
void* x0_38 = UI2StateDeclTryLookup("d_Wandering_Minstrel")

if (x0_38 == 0)
    (*data_161e7a8)(&data_161e7a8, "d_Wandering_Minstrel")
    uint32_t x10_92 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161e7a8
    *UI2StateDeclI_counter = x10_92 + 1
    data_161e7b0 = x11_39
else
    (*data_161e7a8)(&data_161e7a8, *(x0_38 + 0x10))

data_161e7c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("d_Wandering_Minstrel")

if (x0_39 == 0)
    (*data_161e7c0)(&data_161e7c0, "d_Wandering_Minstrel")
    uint32_t x10_94 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161e7c0
    *UI2StateDeclI_counter = x10_94 + 1
    data_161e7c8 = x11_40
else
    (*data_161e7c0)(&data_161e7c0, *(x0_39 + 0x10))

data_161e7d8 = 0x400000913
data_161e7e0 = 4
data_161e7e8 = WanderingMinstrel
__builtin_memcpy(&data_161ee98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x04\x00\x00\x00\x"
"00\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_161eeb8 = 0xffffffff
data_161eef0 = "band_of_misfits"
data_161eef8 = 0x34
data_161ef00 = TEXTURE_CARD_GEN_DARK_AGES_BANDOFMISFITS
data_161ef28 = _vtable_for_UI2StateDecl + 0x10
data_161ef08 = SOUND_SOUND_CARDS_FX_LANDPLAY_BAND_OF_MISFITS
void* x0_40 = UI2StateDeclTryLookup("d_Band_of_Misfits")

if (x0_40 == 0)
    (*data_161ef28)(&data_161ef28, "d_Band_of_Misfits")
    uint32_t x10_97 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161ef28
    *UI2StateDeclI_counter = x10_97 + 1
    data_161ef30 = x11_41
else
    (*data_161ef28)(&data_161ef28, *(x0_40 + 0x10))

data_161ef40 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("d_Band_of_Misfits")

if (x0_41 == 0)
    (*data_161ef40)(&data_161ef40, "d_Band_of_Misfits")
    uint32_t x10_99 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161ef40
    *UI2StateDeclI_counter = x10_99 + 1
    data_161ef48 = x11_42
else
    (*data_161ef40)(&data_161ef40, *(x0_41 + 0x10))

int128_t v0_9
v0_9.q = 0x500000914
data_161ef58 = 0x500000914
data_161ef60 = 0x400000000004
data_161ef68 = BandOfMisfits
__builtin_memcpy(&data_161f618, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x09\x00\x00\x00\x"
"0c\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_161f638 = 0xffffffff
data_161f670 = "bandit_camp"
data_161f678 = 0x34
data_161f680 = TEXTURE_CARD_GEN_DARK_AGES_BANDITCAMP
data_161f6a8 = _vtable_for_UI2StateDecl + 0x10
data_161f688 = SOUND_SOUND_CARDS_FX_LANDPLAY_BANDIT_CAMP
void* x0_42 = UI2StateDeclTryLookup("d_Bandit_Camp")

if (x0_42 == 0)
    (*data_161f6a8)(&data_161f6a8, "d_Bandit_Camp")
    uint32_t x10_102 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161f6a8
    *UI2StateDeclI_counter = x10_102 + 1
    data_161f6b0 = x11_43
else
    (*data_161f6a8)(&data_161f6a8, *(x0_42 + 0x10))

data_161f6c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("d_Bandit_Camp")

if (x0_43 == 0)
    (*data_161f6c0)(&data_161f6c0, "d_Bandit_Camp")
    uint32_t x10_104 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161f6c0
    *UI2StateDeclI_counter = x10_104 + 1
    data_161f6c8 = x11_44
else
    (*data_161f6c0)(&data_161f6c0, *(x0_43 + 0x10))

int128_t v0_10
v0_10.q = 0
v0_10:8.q = 0
__builtin_memset(&data_161f6f8, 0, 0xc0)
data_161f6f8 = 0xc
data_161f6e0 = 4
data_161f6e8 = BanditCamp
__builtin_memcpy(&data_161fd98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_161f6d8 = 0x500000915
data_161f708:8.d = 0x92e
data_161f7a8:4.d = 0
data_161fdf0 = "catacombs"
int128_t var_160
__builtin_memset(&var_160, 0, 0x20)
__builtin_memset(&data_161fdd0, 0, 0x20)
int128_t var_140
__builtin_memcpy(&var_140, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_161fdb0, 
    "\x10\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_161fdf8 = 0x27
data_161fe00 = TEXTURE_CARD_GEN_DARK_AGES_CATACOMB
data_161fe28 = _vtable_for_UI2StateDecl + 0x10
data_161fe08 = SOUND_SOUND_CARDS_FX_LANDPLAY_CATACOMBS
void* x0_44 = UI2StateDeclTryLookup("d_Catacombs")

if (x0_44 == 0)
    (*data_161fe28)(&data_161fe28, "d_Catacombs")
    uint32_t x10_107 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161fe28
    *UI2StateDeclI_counter = x10_107 + 1
    data_161fe30 = x11_45
else
    (*data_161fe28)(&data_161fe28, *(x0_44 + 0x10))

data_161fe40 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("d_Catacombs")

if (x0_45 == 0)
    (*data_161fe40)(&data_161fe40, "d_Catacombs")
    uint32_t x10_109 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_161fe40
    *UI2StateDeclI_counter = x10_109 + 1
    data_161fe48 = x11_46
else
    (*data_161fe40)(&data_161fe40, *(x0_45 + 0x10))

__builtin_memset(&data_161fe80, 0, 0xb0)
data_161fe78 = 0x600000006
data_161fe60 = 4
data_161fe68 = Catacombs
data_161fe80:4.d = 2
data_161fe90 = Catacombs_OnTrash
data_1620478 = 1
data_161ff2c:4 = 0
data_161ff20 = 0
data_161ff2c = 0x100000002
__builtin_memcpy(&data_1620518, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"41\x21\x01\x00\x00\x00\x00\x00", 
    0x20)
data_161fe58 = 0x500000916
data_1620538 = 0xffffffff
data_1620570 = "count"
data_1620578 = 0xa
data_1620580 = TEXTURE_CARD_GEN_DARK_AGES_COUNT_FINAL
data_16205a8 = _vtable_for_UI2StateDecl + 0x10
data_1620588 = SOUND_SOUND_CARDS_FX_LANDPLAY_COUNT
void* x0_46 = UI2StateDeclTryLookup("d_Count")

if (x0_46 == 0)
    (*data_16205a8)(&data_16205a8, "d_Count")
    uint32_t x10_112 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16205a8
    *UI2StateDeclI_counter = x10_112 + 1
    data_16205b0 = x11_47
else
    (*data_16205a8)(&data_16205a8, *(x0_46 + 0x10))

data_16205c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("d_Count")

if (x0_47 == 0)
    (*data_16205c0)(&data_16205c0, "d_Count")
    uint32_t x10_114 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16205c0
    *UI2StateDeclI_counter = x10_114 + 1
    data_16205c8 = x11_48
else
    (*data_16205c0)(&data_16205c0, *(x0_47 + 0x10))

data_16205e0 = 4
data_16205e8 = Count
__builtin_memcpy(&data_1620c98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"20\x20\x08\x00\x00\x00\x00\x00", 
    0x20)
data_16205d8 = 0x500000917
data_1620cb8 = 0xffffffff
data_1620cf0 = "counterfeit"
data_1620cf8 = 0x37
data_1620d00 = TEXTURE_CARD_GEN_DARK_AGES_COUNTERFEIT
data_1620d28 = _vtable_for_UI2StateDecl + 0x10
data_1620d08 = SOUND_SOUND_CARDS_FX_LANDPLAY_COUNTERFEIT
void* x0_48 = UI2StateDeclTryLookup("d_Counterfeit")

if (x0_48 == 0)
    (*data_1620d28)(&data_1620d28, "d_Counterfeit")
    uint32_t x10_117 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1620d28
    *UI2StateDeclI_counter = x10_117 + 1
    data_1620d30 = x11_49
else
    (*data_1620d28)(&data_1620d28, *(x0_48 + 0x10))

data_1620d40 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("d_Counterfeit")
int128_t v1_13
int128_t v2_5

if (x0_49 == 0)
    v1_13, v2_5 = (*data_1620d40)(&data_1620d40, "d_Counterfeit")
    uint32_t x10_119 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1620d40
    *UI2StateDeclI_counter = x10_119 + 1
    data_1620d48 = x11_50
else
    v1_13, v2_5 = (*data_1620d40)(&data_1620d40, *(x0_49 + 0x10))

data_1621418 = v6
v1_13 = data_7e2a38
v2_5 = data_7e2a48
data_1620d60 = 2
data_1620d68 = Counterfeit
data_1621428 = 0x12
data_1620d58 = 0x500000918
data_1621430 = v1_13
data_1621470 = "cultist"
data_1621440 = v2_5
__builtin_memset(&data_1621450, 0, 0x20)
data_1621478 = 0x17
data_1621480 = TEXTURE_CARD_GEN_DARK_AGES_CULTIST
data_16214a8 = _vtable_for_UI2StateDecl + 0x10
data_1621488 = SOUND_SOUND_CARDS_FX_LANDPLAY_CULTIST
void* x0_50 = UI2StateDeclTryLookup("d_Cultist")

if (x0_50 == 0)
    (*data_16214a8)(&data_16214a8, "d_Cultist")
    uint32_t x10_122 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16214a8
    *UI2StateDeclI_counter = x10_122 + 1
    data_16214b0 = x11_51
else
    (*data_16214a8)(&data_16214a8, *(x0_50 + 0x10))

data_16214c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("d_Cultist")

if (x0_51 == 0)
    (*data_16214c0)(&data_16214c0, "d_Cultist")
    uint32_t x10_124 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16214c0
    *UI2StateDeclI_counter = x10_124 + 1
    data_16214c8 = x11_52
else
    (*data_16214c0)(&data_16214c0, *(x0_51 + 0x10))

__builtin_memset(&data_1621500, 0, 0xb0)
data_16214f8 = 0x600000006
data_16214e0 = 0x1024
data_16214e8 = Cultist
data_1621500:4.d = 2
data_1621510 = Cultist_OnTrash
data_1621af8 = 1
data_16215ac:4 = 0
data_16215a0 = 0
data_16215ac = 0x100000002
__builtin_memcpy(&data_1621b98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16214d8 = 0x500000919
data_1621bb8 = 0xffffffff
data_1621bf0 = "graverobber"
data_1621bf8 = 0x1d
data_1621c00 = TEXTURE_CARD_GEN_DARK_AGES_GRAVEROBBER
data_1621c28 = _vtable_for_UI2StateDecl + 0x10
data_1621c08 = SOUND_SOUND_CARDS_FX_LANDPLAY_GRAVEROBBER
void* x0_52 = UI2StateDeclTryLookup("d_Graverobber")

if (x0_52 == 0)
    (*data_1621c28)(&data_1621c28, "d_Graverobber")
    uint32_t x10_127 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1621c28
    *UI2StateDeclI_counter = x10_127 + 1
    data_1621c30 = x11_53
else
    (*data_1621c28)(&data_1621c28, *(x0_52 + 0x10))

data_1621c40 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("d_Graverobber")

if (x0_53 == 0)
    (*data_1621c40)(&data_1621c40, "d_Graverobber")
    uint32_t x10_129 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1621c40
    *UI2StateDeclI_counter = x10_129 + 1
    data_1621c48 = x11_54
else
    (*data_1621c40)(&data_1621c40, *(x0_53 + 0x10))

data_1621c60 = 4
data_1621c68 = Graverobber
__builtin_memcpy(&data_1622318, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"0b\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1621c58 = 0x50000091a
data_1622338 = 0xffffffff
data_1622370 = "junk_dealer"
data_1622378 = 0x23
data_1622380 = TEXTURE_CARD_GEN_DARK_AGES_JUNKDEALER
data_16223a8 = _vtable_for_UI2StateDecl + 0x10
data_1622388 = SOUND_SOUND_CARDS_FX_LANDPLAY_JUNK_DEALER
void* x0_54 = UI2StateDeclTryLookup("d_Junk_Dealer")

if (x0_54 == 0)
    (*data_16223a8)(&data_16223a8, "d_Junk_Dealer")
    uint32_t x10_132 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16223a8
    *UI2StateDeclI_counter = x10_132 + 1
    data_16223b0 = x11_55
else
    (*data_16223a8)(&data_16223a8, *(x0_54 + 0x10))

data_16223c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("d_Junk_Dealer")

if (x0_55 == 0)
    (*data_16223c0)(&data_16223c0, "d_Junk_Dealer")
    uint32_t x10_134 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16223c0
    *UI2StateDeclI_counter = x10_134 + 1
    data_16223c8 = x11_56
else
    (*data_16223c0)(&data_16223c0, *(x0_55 + 0x10))

data_16223e0 = 4
data_16223e8 = JunkDealer
__builtin_memcpy(&data_1622a98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x08\x00\x00\x00\x00", 
    0x20)
data_16223d8 = 0x50000091b
data_1622ab8 = 0xffffffff
data_1622af0 = "knights"
data_1622af8 = 0x2d
data_1622b00 = TEXTURE_CARD_GEN_DARK_AGES_KNIGHTS
data_1622b08 = SOUND_SOUND_CARDS_FX_RESULT_KNIGHTS_FEMALE
data_1622b10 = SOUND_SOUND_CARDS_FX_RESULT_KNIGHTS_MALE
data_1622b28 = _vtable_for_UI2StateDecl + 0x10
void* x0_56 = UI2StateDeclTryLookup("d_Knights")

if (x0_56 == 0)
    (*data_1622b28)(&data_1622b28, "d_Knights")
    uint32_t x10_136 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1622b28
    *UI2StateDeclI_counter = x10_136 + 1
    data_1622b30 = x11_57
else
    (*data_1622b28)(&data_1622b28, *(x0_56 + 0x10))

data_1622b40 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("d_Knights")

if (x0_57 == 0)
    (*data_1622b40)(&data_1622b40, "d_Knights")
    uint32_t x10_138 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1622b40
    *UI2StateDeclI_counter = x10_138 + 1
    data_1622b48 = x11_58
else
    (*data_1622b40)(&data_1622b40, *(x0_57 + 0x10))

__builtin_memset(&data_1622b78, 0, 0xc0)
data_1622b60 = 0x2024
data_1622b78 = 0xa
data_1622b58 = 0x50000091c
data_1622b88:8 = Knights_Setup
__builtin_memcpy(&data_1623218, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"03\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1623238 = 0xffffffff
data_1623270 = "mystic"
data_1623278 = 2
data_1623280 = TEXTURE_CARD_GEN_DARK_AGES_MYSTIC
data_16232a8 = _vtable_for_UI2StateDecl + 0x10
data_1623288 = SOUND_SOUND_CARDS_FX_LANDPLAY_MYSTIC
void* x0_58 = UI2StateDeclTryLookup("d_Mystic")

if (x0_58 == 0)
    (*data_16232a8)(&data_16232a8, "d_Mystic")
    uint32_t x10_141 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16232a8
    *UI2StateDeclI_counter = x10_141 + 1
    data_16232b0 = x11_59
else
    (*data_16232a8)(&data_16232a8, *(x0_58 + 0x10))

data_16232c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("d_Mystic")

if (x0_59 == 0)
    (*data_16232c0)(&data_16232c0, "d_Mystic")
    uint32_t x10_143 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16232c0
    *UI2StateDeclI_counter = x10_143 + 1
    data_16232c8 = x11_60
else
    (*data_16232c0)(&data_16232c0, *(x0_59 + 0x10))

data_16232e0 = 4
data_16232e8 = Mystic
__builtin_memcpy(&data_1623998, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x12\x00\x00\x00\x"
"00\x80\x81\x00\x00\x00\x00\x00", 
    0x20)
data_16232d8 = 0x50000091d
data_16239b8 = 0xffffffff
data_16239f0 = "pillage"
data_16239f8 = 8
data_1623a00 = TEXTURE_CARD_GEN_DARK_AGES_PILLAGE
data_1623a08 = SOUND_SOUND_CARDS_FX_LANDPLAY_PILLAGE
data_1623a10 = SOUND_SOUND_CARDS_FX_RESULT_PILLAGE
data_1623a28 = _vtable_for_UI2StateDecl + 0x10
void* x0_60 = UI2StateDeclTryLookup("d_Pillage")

if (x0_60 == 0)
    (*data_1623a28)(&data_1623a28, "d_Pillage")
    uint32_t x10_145 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1623a28
    *UI2StateDeclI_counter = x10_145 + 1
    data_1623a30 = x11_61
else
    (*data_1623a28)(&data_1623a28, *(x0_60 + 0x10))

data_1623a40 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("d_Pillage")

if (x0_61 == 0)
    (*data_1623a40)(&data_1623a40, "d_Pillage")
    uint32_t x10_147 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1623a40
    *UI2StateDeclI_counter = x10_147 + 1
    data_1623a48 = x11_62
else
    (*data_1623a40)(&data_1623a40, *(x0_61 + 0x10))

__builtin_memset(&data_1623a78, 0, 0xc0)
data_1623a78 = 0xc
data_1623a58 = 0x50000091e
data_1623a60 = 0x24
data_1623a68 = Pillage
data_1623a88:8.d = 0x92e
data_1623b28:4.d = 0
__builtin_memcpy(&data_1624118, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x"
"02\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_1624138 = 0xffffffff
data_1624170 = "rebuild"
data_1624178 = 0x23
data_1624180 = TEXTURE_CARD_GEN_DARK_AGES_REBUILD
data_1624188 = SOUND_SOUND_CARDS_FX_LANDPLAY_REBUILD
data_16241a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_62 = UI2StateDeclTryLookup("d_Rebuild")

if (x0_62 == 0)
    (*data_16241a8)(&data_16241a8, "d_Rebuild")
    uint32_t x10_149 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16241a8
    *UI2StateDeclI_counter = x10_149 + 1
    data_16241b0 = x11_63
else
    (*data_16241a8)(&data_16241a8, *(x0_62 + 0x10))

data_16241c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("d_Rebuild")

if (x0_63 == 0)
    (*data_16241c0)(&data_16241c0, "d_Rebuild")
    uint32_t x10_151 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16241c0
    *UI2StateDeclI_counter = x10_151 + 1
    data_16241c8 = x11_64
else
    (*data_16241c0)(&data_16241c0, *(x0_63 + 0x10))

data_16241e0 = 4
data_16241e8 = Rebuild
__builtin_memcpy(&data_1624898, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x09\x00\x00\x00\x"
"01\x00\x01\x08\x00\x00\x00\x00", 
    0x20)
data_16241d8 = 0x50000091f
data_16248b8 = 0xffffffff
data_16248f0 = "rogue"
data_16248f8 = 0x1a
data_1624900 = TEXTURE_CARD_GEN_DARK_AGES_ROGUE
data_1624928 = _vtable_for_UI2StateDecl + 0x10
data_1624908 = SOUND_SOUND_CARDS_FX_LANDPLAY_ROGUE
void* x0_64 = UI2StateDeclTryLookup("d_Rogue")

if (x0_64 == 0)
    (*data_1624928)(&data_1624928, "d_Rogue")
    uint32_t x10_154 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1624928
    *UI2StateDeclI_counter = x10_154 + 1
    data_1624930 = x11_65
else
    (*data_1624928)(&data_1624928, *(x0_64 + 0x10))

data_1624940 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("d_Rogue")

if (x0_65 == 0)
    (*data_1624940)(&data_1624940, "d_Rogue")
    uint32_t x10_156 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1624940
    *UI2StateDeclI_counter = x10_156 + 1
    data_1624948 = x11_66
else
    (*data_1624940)(&data_1624940, *(x0_65 + 0x10))

data_1624958 = 0x500000920
__builtin_memset(&data_1624fe8, 0, 0x30)
__builtin_memcpy(&data_1624fb8, 
    "\x09\x00\x00\x00\x00\x00\x00\x00\x5c\x3e\xa6\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"15\x00\x00\x00\x00\x00\x00\x00\x94\x3e\xa6\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
data_1624960 = 0x24
data_1624968 = Rogue
__builtin_memcpy(&data_1625018, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x12\x00\x00\x00\x"
"00\x20\x01\x00\x00\x00\x00\x00", 
    0x20)
data_1625038 = 0xffffffff
data_1625070 = "altar"
data_1625078 = 0x2d
data_1625080 = TEXTURE_CARD_GEN_DARK_AGES_ALTAR
data_1625088 = SOUND_SOUND_CARDS_FX_LANDPLAY_ALTAR
data_16250a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_66 = UI2StateDeclTryLookup("d_Altar")

if (x0_66 == 0)
    (*data_16250a8)(&data_16250a8, "d_Altar")
    uint32_t x10_158 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16250a8
    *UI2StateDeclI_counter = x10_158 + 1
    data_16250b0 = x11_67
else
    (*data_16250a8)(&data_16250a8, *(x0_66 + 0x10))

data_16250c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("d_Altar")
int128_t v0_11
int128_t v1_22

if (x0_67 == 0)
    v0_11, v1_22 = (*data_16250c0)(&data_16250c0, "d_Altar")
    uint32_t x10_160 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16250c0
    *UI2StateDeclI_counter = x10_160 + 1
    data_16250c8 = x11_68
else
    v0_11, v1_22 = (*data_16250c0)(&data_16250c0, *(x0_67 + 0x10))
v0_11.q = 0x600000921
data_16250d8 = 0x600000921
data_16250e0 = 4
data_16250e8 = Altar
data_1625798 = v6
data_16257a8 = 2
int128_t var_130
data_16257b0 = var_130
v0_11 = var_140
data_16257f0 = "hunting_grounds"
data_16257c0 = v0_11
int128_t var_150
data_16257d0 = var_150
data_16257e0 = var_160
data_16257f8 = 0x38
data_1625800 = TEXTURE_CARD_GEN_DARK_AGES_HUNTINGGROUNDS
data_1625828 = _vtable_for_UI2StateDecl + 0x10
data_1625808 = SOUND_SOUND_CARDS_FX_LANDPLAY_HUNTING_GROUNDS
void* x0_68 = UI2StateDeclTryLookup("d_Hunting_Grounds")

if (x0_68 == 0)
    (*data_1625828)(&data_1625828, "d_Hunting_Grounds")
    uint32_t x10_163 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1625828
    *UI2StateDeclI_counter = x10_163 + 1
    data_1625830 = x11_69
else
    (*data_1625828)(&data_1625828, *(x0_68 + 0x10))

data_1625840 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("d_Hunting_Grounds")

if (x0_69 == 0)
    (*data_1625840)(&data_1625840, "d_Hunting_Grounds")
    uint32_t x10_165 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1625840
    *UI2StateDeclI_counter = x10_165 + 1
    data_1625848 = x11_70
else
    (*data_1625840)(&data_1625840, *(x0_69 + 0x10))

__builtin_memset(&data_1625880, 0, 0xb0)
data_1625878 = 0x600000006
data_1625860 = 4
data_1625868 = HuntingGrounds
data_1625880:4.d = 2
data_1625890 = HuntingGrounds_OnTrash
data_1625e78 = 1
data_162592c:4 = 0
data_1625920 = 0
data_162592c = 0x100000002
data_1625f18 = v6
data_1625f28 = 0
data_1625858 = 0x600000922
data_1625f30 = 0x100000000
data_1625f70 = "ruins"
data_1625f2c = 0
data_1625f78 = 0
data_1625f80 = TEXTURE_CARD_GEN_DARK_AGES_RUINED_LIBRARY
data_1625fa8 = _vtable_for_UI2StateDecl + 0x10
void* x0_70 = UI2StateDeclTryLookup("d_Ruins")

if (x0_70 == 0)
    (*data_1625fa8)(&data_1625fa8, "d_Ruins")
    uint32_t x10_167 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1625fa8
    *UI2StateDeclI_counter = x10_167 + 1
    data_1625fb0 = x11_71
else
    (*data_1625fa8)(&data_1625fa8, *(x0_70 + 0x10))

data_1625fc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("d_Ruins")

if (x0_71 == 0)
    (*data_1625fc0)(&data_1625fc0, "d_Ruins")
    uint32_t x10_169 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1625fc0
    *UI2StateDeclI_counter = x10_169 + 1
    data_1625fc8 = x11_72
else
    (*data_1625fc0)(&data_1625fc0, *(x0_71 + 0x10))

data_1625fd8 = 0x923
int128_t v0_12
v0_12.q = 0
v0_12:8.q = 0
__builtin_memset(&data_1625ff8, 0, 0xc0)
data_1625ff8 = 0xa
data_1626008:8 = Ruins_Setup
data_1625fe0 = 0x1000000008004
data_1626698 = v6
data_16266a8 = 0
data_16266b0 = 1
data_16266ac = 0
data_16266b8 = 0xffffffff
data_16266f0 = "abandoned_mine"
data_16266f8 = 8
data_1626700 = TEXTURE_CARD_GEN_DARK_AGES_ABANDONEDMINE
data_1626728 = _vtable_for_UI2StateDecl + 0x10
data_1626708 = SOUND_SOUND_CARDS_FX_LANDPLAY_ABANDONED_MINE
void* x0_72 = UI2StateDeclTryLookup("d_Abandoned_Mine")

if (x0_72 == 0)
    (*data_1626728)(&data_1626728, "d_Abandoned_Mine")
    uint32_t x10_172 = *UI2StateDeclI_counter
    uint64_t x11_73 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1626728
    *UI2StateDeclI_counter = x10_172 + 1
    data_1626730 = x11_73
else
    (*data_1626728)(&data_1626728, *(x0_72 + 0x10))

data_1626740 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("d_Abandoned_Mine")

if (x0_73 == 0)
    (*data_1626740)(&data_1626740, "d_Abandoned_Mine")
    uint32_t x10_174 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1626740
    *UI2StateDeclI_counter = x10_174 + 1
    data_1626748 = x11_74
else
    (*data_1626740)(&data_1626740, *(x0_73 + 0x10))

data_1626758 = 0x924
data_1626760 = 0x1000000008004
data_1626768 = AbandonedMine
data_1626e18 = v6
data_1626e28 = 0
data_1626e30 = 8
data_1626e2c = 0
data_1626e38 = 0xffffffff
data_1626e70 = "ruined_library"
data_1626e78 = 0x14
data_1626e80 = TEXTURE_CARD_GEN_DARK_AGES_RUINED_LIBRARY
data_1626e88 = SOUND_SOUND_CARDS_FX_LANDPLAY_RUINED_LIBRARY
data_1626ea8 = _vtable_for_UI2StateDecl + 0x10
void* x0_74 = UI2StateDeclTryLookup("d_Ruined_Library")

if (x0_74 == 0)
    (*data_1626ea8)(&data_1626ea8, "d_Ruined_Library")
    uint32_t x10_177 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1626ea8
    *UI2StateDeclI_counter = x10_177 + 1
    data_1626eb0 = x11_75
else
    (*data_1626ea8)(&data_1626ea8, *(x0_74 + 0x10))

data_1626ec0 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("d_Ruined_Library")

if (x0_75 == 0)
    (*data_1626ec0)(&data_1626ec0, "d_Ruined_Library")
    uint32_t x10_179 = *UI2StateDeclI_counter
    uint64_t x11_76 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1626ec0
    *UI2StateDeclI_counter = x10_179 + 1
    data_1626ec8 = x11_76
else
    (*data_1626ec0)(&data_1626ec0, *(x0_75 + 0x10))

data_1626ed8 = 0x925
data_1626ee0 = 0x1000000008004
data_1626ee8 = RuinedLibrary
data_1627598 = v6
data_16275a8 = 0
data_16275b0 = 0x20
data_16275ac = 0
data_16275b8 = 0xffffffff
data_16275f0 = "ruined_market"
data_16275f8 = 0x27
data_1627600 = TEXTURE_CARD_GEN_DARK_AGES_RUINEDMARKET
data_1627628 = _vtable_for_UI2StateDecl + 0x10
data_1627608 = SOUND_SOUND_CARDS_FX_LANDPLAY_RUINED_MARKET
void* x0_76 = UI2StateDeclTryLookup("d_Ruined_Market")

if (x0_76 == 0)
    (*data_1627628)(&data_1627628, "d_Ruined_Market")
    uint32_t x10_182 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1627628
    *UI2StateDeclI_counter = x10_182 + 1
    data_1627630 = x11_77
else
    (*data_1627628)(&data_1627628, *(x0_76 + 0x10))

data_1627640 = _vtable_for_UI2StateDecl + 0x10
void* x0_77 = UI2StateDeclTryLookup("d_Ruined_Market")

if (x0_77 == 0)
    (*data_1627640)(&data_1627640, "d_Ruined_Market")
    uint32_t x10_184 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1627640
    *UI2StateDeclI_counter = x10_184 + 1
    data_1627648 = x11_78
else
    (*data_1627640)(&data_1627640, *(x0_77 + 0x10))

data_1627658 = 0x926
data_1627660 = 0x1000000008004
data_1627668 = RuinedMarket
data_1627d18 = v6
data_1627d28 = 0
data_1627d30 = 2
data_1627d2c = 0
data_1627d38 = 0xffffffff
data_1627d70 = "ruined_village"
data_1627d78 = 0xc
data_1627d80 = TEXTURE_CARD_GEN_DARK_AGES_RUINED_VILLAGE
data_1627da8 = _vtable_for_UI2StateDecl + 0x10
data_1627d88 = SOUND_SOUND_CARDS_FX_LANDPLAY_RUINED_VILLAGE
void* x0_78 = UI2StateDeclTryLookup("d_Ruined_Village")

if (x0_78 == 0)
    (*data_1627da8)(&data_1627da8, "d_Ruined_Village")
    uint32_t x10_187 = *UI2StateDeclI_counter
    uint64_t x11_79 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1627da8
    *UI2StateDeclI_counter = x10_187 + 1
    data_1627db0 = x11_79
else
    (*data_1627da8)(&data_1627da8, *(x0_78 + 0x10))

data_1627dc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_79 = UI2StateDeclTryLookup("d_Ruined_Village")

if (x0_79 == 0)
    (*data_1627dc0)(&data_1627dc0, "d_Ruined_Village")
    uint32_t x10_189 = *UI2StateDeclI_counter
    uint64_t x11_80 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1627dc0
    *UI2StateDeclI_counter = x10_189 + 1
    data_1627dc8 = x11_80
else
    (*data_1627dc0)(&data_1627dc0, *(x0_79 + 0x10))

data_1627dd8 = 0x927
data_1627de0 = 0x1000000008004
data_1627de8 = RuinedVillage
data_1628498 = v6
data_16284a8 = 0
data_16284b0 = 0x80
data_16284ac = 0
data_16284b8 = 0xffffffff
data_16284f0 = "survivors"
data_16284f8 = 5
data_1628500 = TEXTURE_CARD_GEN_DARK_AGES_SURVIVORS
data_1628528 = _vtable_for_UI2StateDecl + 0x10
data_1628508 = SOUND_SOUND_CARDS_FX_LANDPLAY_SURVIVORS
void* x0_80 = UI2StateDeclTryLookup("d_Survivors")

if (x0_80 == 0)
    (*data_1628528)(&data_1628528, "d_Survivors")
    uint32_t x10_192 = *UI2StateDeclI_counter
    uint64_t x11_81 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1628528
    *UI2StateDeclI_counter = x10_192 + 1
    data_1628530 = x11_81
else
    (*data_1628528)(&data_1628528, *(x0_80 + 0x10))

data_1628540 = _vtable_for_UI2StateDecl + 0x10
void* x0_81 = UI2StateDeclTryLookup("d_Survivors")

if (x0_81 == 0)
    (*data_1628540)(&data_1628540, "d_Survivors")
    uint32_t x10_194 = *UI2StateDeclI_counter
    uint64_t x11_82 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1628540
    *UI2StateDeclI_counter = x10_194 + 1
    data_1628548 = x11_82
else
    (*data_1628540)(&data_1628540, *(x0_81 + 0x10))

int128_t v0_17 = data_71a6b0
data_1628558 = 0x928
data_1628560 = 0x1000000008004
data_1628568 = Survivors
data_1628c18 = v0_17
data_1628c28 = 0
data_1628c2c = 0
__builtin_memcpy(&var_120, 
    "\x00\x80\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_1628c30, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x80\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
int128_t var_140_1
__builtin_memset(&var_140_1, 0, 0x20)
__builtin_memset(&data_1628c50, 0, 0x20)
data_1628c70 = "hovel"
data_1628c78 = 0xe
data_1628c80 = TEXTURE_CARD_GEN_DARK_AGES_HOVEL
data_1628c88 = SOUND_SOUND_CARDS_FX_LANDPLAY_HOVEL
data_1628c90 = SOUND_SOUND_CARDS_FX_REACTION_HOVEL
data_1628ca8 = _vtable_for_UI2StateDecl + 0x10
void* x0_82 = UI2StateDeclTryLookup("d_Hovel")

if (x0_82 == 0)
    (*data_1628ca8)(&data_1628ca8, "d_Hovel")
    uint32_t x10_196 = *UI2StateDeclI_counter
    uint64_t x11_83 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1628ca8
    *UI2StateDeclI_counter = x10_196 + 1
    data_1628cb0 = x11_83
else
    (*data_1628ca8)(&data_1628ca8, *(x0_82 + 0x10))

data_1628cc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_83 = UI2StateDeclTryLookup("d_Hovel")

if (x0_83 == 0)
    (*data_1628cc0)(&data_1628cc0, "d_Hovel")
    uint32_t x10_198 = *UI2StateDeclI_counter
    uint64_t x11_84 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1628cc0
    *UI2StateDeclI_counter = x10_198 + 1
    data_1628cc8 = x11_84
else
    (*data_1628cc0)(&data_1628cc0, *(x0_83 + 0x10))

int128_t v0_18
v0_18.q = 0
v0_18:8.q = 0
__builtin_memset(&data_1628d00, 0, 0xb8)
v0_18.d = 1
v0_18:4.d = 1
data_1628dac = 0x100000001
data_16292f8 = 1
data_1628ce0 = 0x1000000004040
data_1628d00:4.d = 3
data_1628cf8 = 6
data_1628d10 = Hovel_Reaction
data_1628da0 = Hovel_Reaction_Test
data_1629398 = v6
data_16293a8 = 0
data_1628cd8 = 0x100000929
data_16293b0 = 4
data_16293ac = 0
data_16293b8 = 0xffffffff
data_16293f0 = "necropolis"
data_16293f8 = 6
data_1629400 = TEXTURE_CARD_GEN_DARK_AGES_NECROPOLIS
data_1629428 = _vtable_for_UI2StateDecl + 0x10
data_1629408 = SOUND_SOUND_CARDS_FX_LANDPLAY_NECROPOLIS
void* x0_84 = UI2StateDeclTryLookup("d_Necropolis")

if (x0_84 == 0)
    (*data_1629428)(&data_1629428, "d_Necropolis")
    uint32_t x10_201 = *UI2StateDeclI_counter
    uint64_t x11_85 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1629428
    *UI2StateDeclI_counter = x10_201 + 1
    data_1629430 = x11_85
else
    (*data_1629428)(&data_1629428, *(x0_84 + 0x10))

data_1629440 = _vtable_for_UI2StateDecl + 0x10
void* x0_85 = UI2StateDeclTryLookup("d_Necropolis")
int128_t v1_24
int128_t v2_6

if (x0_85 == 0)
    v1_24, v2_6 = (*data_1629440)(&data_1629440, "d_Necropolis")
    uint32_t x10_203 = *UI2StateDeclI_counter
    uint64_t x11_86 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1629440
    *UI2StateDeclI_counter = x10_203 + 1
    data_1629448 = x11_86
else
    v1_24, v2_6 = (*data_1629440)(&data_1629440, *(x0_85 + 0x10))

data_1629b18 = v6
v1_24 = data_7e2ab8
v2_6 = data_7e2ac8
data_1629460 = 0x1000000004004
data_1629468 = Necropolis
data_1629b28 = 0
data_1629458 = 0x10000092a
data_1629b30 = v1_24
data_1629b70 = "overgrown_estate"
data_1629b40 = v2_6
__builtin_memset(&data_1629b50, 0, 0x20)
data_1629b2c = 0
data_1629b78 = 0x2a
data_1629b80 = TEXTURE_CARD_GEN_DARK_AGES_OVERGROWN_ESTATE
data_1629ba8 = _vtable_for_UI2StateDecl + 0x10
void* x0_86 = UI2StateDeclTryLookup("d_Overgrown_Estate")

if (x0_86 == 0)
    (*data_1629ba8)(&data_1629ba8, "d_Overgrown_Estate")
    uint32_t x10_205 = *UI2StateDeclI_counter
    uint64_t x11_87 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1629ba8
    *UI2StateDeclI_counter = x10_205 + 1
    data_1629bb0 = x11_87
else
    (*data_1629ba8)(&data_1629ba8, *(x0_86 + 0x10))

data_1629bc0 = _vtable_for_UI2StateDecl + 0x10
void* x0_87 = UI2StateDeclTryLookup("d_Overgrown_Estate")

if (x0_87 == 0)
    (*data_1629bc0)(&data_1629bc0, "d_Overgrown_Estate")
    uint32_t x10_207 = *UI2StateDeclI_counter
    uint64_t x11_88 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1629bc0
    *UI2StateDeclI_counter = x10_207 + 1
    data_1629bc8 = x11_88
else
    (*data_1629bc0)(&data_1629bc0, *(x0_87 + 0x10))

__builtin_memset(&data_1629c00, 0, 0xb0)
data_1629bf8 = 0x600000006
data_1629bf0 = OvergrownEstate_VP
data_1629c00:4.d = 2
data_1629be0 = 0x1000000004008
data_1629c10 = OvergrownEstate_OnTrash
data_162a1f8 = 1
data_1629cac:4 = 0
data_1629ca0 = 0
data_1629cac = 0x100000000
data_162a298 = v6
data_162a2a8 = 0
data_1629bd8 = 0x10000092b
data_162a2b0 = 0x8014
data_162a2ac = 0
data_162a2b8 = 0xffffffff
data_162a2f0 = "madman"
data_162a2f8 = 8
data_162a300 = TEXTURE_CARD_GEN_DARK_AGES_MADMAN
data_162a328 = _vtable_for_UI2StateDecl + 0x10
data_162a308 = SOUND_SOUND_CARDS_FX_LANDPLAY_MADMAN
void* x0_88 = UI2StateDeclTryLookup("d_Madman")

if (x0_88 == 0)
    (*data_162a328)(&data_162a328, "d_Madman")
    uint32_t x10_210 = *UI2StateDeclI_counter
    uint64_t x11_89 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162a328
    *UI2StateDeclI_counter = x10_210 + 1
    data_162a330 = x11_89
else
    (*data_162a328)(&data_162a328, *(x0_88 + 0x10))

data_162a340 = _vtable_for_UI2StateDecl + 0x10
void* x0_89 = UI2StateDeclTryLookup("d_Madman")

if (x0_89 == 0)
    (*data_162a340)(&data_162a340, "d_Madman")
    uint32_t x10_212 = *UI2StateDeclI_counter
    uint64_t x11_90 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162a340
    *UI2StateDeclI_counter = x10_212 + 1
    data_162a348 = x11_90
else
    (*data_162a340)(&data_162a340, *(x0_89 + 0x10))

data_162a360 = 0x1000000000004
data_162a368 = Madman
data_162aa18 = v6
data_162aa28 = 0
data_162a358 = 0x800000000092c
data_162aa30 = "*******&uxxxuxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx/"
data_162aa2c = 0
data_162aa38 = 0xffffffff
data_162aa70 = "mercenary"
data_162aa78 = 0x2a
data_162aa80 = TEXTURE_CARD_GEN_DARK_AGES_MERCENARY
data_162aaa8 = _vtable_for_UI2StateDecl + 0x10
data_162aa88 = SOUND_SOUND_CARDS_FX_LANDPLAY_MERCENARY
void* x0_90 = UI2StateDeclTryLookup("d_Mercenary")

if (x0_90 == 0)
    (*data_162aaa8)(&data_162aaa8, "d_Mercenary")
    uint32_t x10_215 = *UI2StateDeclI_counter
    uint64_t x11_91 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162aaa8
    *UI2StateDeclI_counter = x10_215 + 1
    data_162aab0 = x11_91
else
    (*data_162aaa8)(&data_162aaa8, *(x0_90 + 0x10))

data_162aac0 = _vtable_for_UI2StateDecl + 0x10
void* x0_91 = UI2StateDeclTryLookup("d_Mercenary")

if (x0_91 == 0)
    (*data_162aac0)(&data_162aac0, "d_Mercenary")
    uint32_t x10_217 = *UI2StateDeclI_counter
    uint64_t x11_92 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162aac0
    *UI2StateDeclI_counter = x10_217 + 1
    data_162aac8 = x11_92
else
    (*data_162aac0)(&data_162aac0, *(x0_91 + 0x10))

data_162aae0 = 0x1000000000024
data_162aae8 = Mercenary
data_162b198 = v6
data_162b1a8 = 0
data_162aad8 = 0x800000000092d
data_162b1b0 = 0x8001
data_162b1ac = 0
data_162b1b8 = 0xffffffff
data_162b1f0 = "spoils"
data_162b1f8 = 0x37
data_162b200 = TEXTURE_CARD_GEN_DARK_AGES_SPOILS
data_162b228 = _vtable_for_UI2StateDecl + 0x10
data_162b208 = SOUND_SOUND_CARDS_FX_LANDPLAY_SPOILS
void* x0_92 = UI2StateDeclTryLookup("d_Spoils")

if (x0_92 == 0)
    (*data_162b228)(&data_162b228, "d_Spoils")
    uint32_t x10_220 = *UI2StateDeclI_counter
    uint64_t x11_93 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162b228
    *UI2StateDeclI_counter = x10_220 + 1
    data_162b230 = x11_93
else
    (*data_162b228)(&data_162b228, *(x0_92 + 0x10))

data_162b240 = _vtable_for_UI2StateDecl + 0x10
void* x0_93 = UI2StateDeclTryLookup("d_Spoils")

if (x0_93 == 0)
    (*data_162b240)(&data_162b240, "d_Spoils")
    uint32_t x10_222 = *UI2StateDeclI_counter
    uint64_t x11_94 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162b240
    *UI2StateDeclI_counter = x10_222 + 1
    data_162b248 = x11_94
else
    (*data_162b240)(&data_162b240, *(x0_93 + 0x10))

__builtin_memset(&data_162b278, 0, 0xc0)
data_162b260 = 0x1000000000002
data_162b268 = Spoils
data_162b258 = 0x800000000092e
data_162b278 = 0xb
data_162b308:8.d = 1
data_162b918 = v6
data_162b928 = 0
data_162b288:8 = 0xf00000000
data_162b930 = 0x8002000
data_162b92c = 0
data_162b938 = 0xffffffff
data_162b970 = "dame_anna"
data_162b978 = 0x25
data_162b980 = TEXTURE_CARD_GEN_DARK_AGES_DAME_ANNA
data_162b9a8 = _vtable_for_UI2StateDecl + 0x10
data_162b988 = SOUND_SOUND_CARDS_FX_LANDPLAY_DAME_ANNA
void* x0_94 = UI2StateDeclTryLookup("d_Dame_Anna")

if (x0_94 == 0)
    (*data_162b9a8)(&data_162b9a8, "d_Dame_Anna")
    uint32_t x10_225 = *UI2StateDeclI_counter
    uint64_t x11_95 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162b9a8
    *UI2StateDeclI_counter = x10_225 + 1
    data_162b9b0 = x11_95
else
    (*data_162b9a8)(&data_162b9a8, *(x0_94 + 0x10))

data_162b9c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_95 = UI2StateDeclTryLookup("d_Dame_Anna")

if (x0_95 == 0)
    (*data_162b9c0)(&data_162b9c0, "d_Dame_Anna")
    uint32_t x10_227 = *UI2StateDeclI_counter
    uint64_t x11_96 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162b9c0
    *UI2StateDeclI_counter = x10_227 + 1
    data_162b9c8 = x11_96
else
    (*data_162b9c0)(&data_162b9c0, *(x0_95 + 0x10))

data_162b9e0 = 0x1000000002024
data_162b9e8 = DameAnna
data_162c098 = v6
data_162c0a8 = 0
data_162b9d8 = 0x50000092f
data_162c0b0 = 0x8000000
data_162c0ac = 0
data_162c0b8 = 0xffffffff
data_162c0f0 = "dame_josephine"
data_162c0f8 = 0x26
data_162c100 = TEXTURE_CARD_GEN_DARK_AGES_DAME_JOSEPHINE
data_162c128 = _vtable_for_UI2StateDecl + 0x10
data_162c108 = SOUND_SOUND_CARDS_FX_LANDPLAY_DAME_JOSEPHINE
void* x0_96 = UI2StateDeclTryLookup("d_Dame_Josephine")

if (x0_96 == 0)
    (*data_162c128)(&data_162c128, "d_Dame_Josephine")
    uint32_t x10_230 = *UI2StateDeclI_counter
    uint64_t x11_97 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162c128
    *UI2StateDeclI_counter = x10_230 + 1
    data_162c130 = x11_97
else
    (*data_162c128)(&data_162c128, *(x0_96 + 0x10))

data_162c140 = _vtable_for_UI2StateDecl + 0x10
void* x0_97 = UI2StateDeclTryLookup("d_Dame_Josephine")

if (x0_97 == 0)
    (*data_162c140)(&data_162c140, "d_Dame_Josephine")
    uint32_t x10_232 = *UI2StateDeclI_counter
    uint64_t x11_98 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162c140
    *UI2StateDeclI_counter = x10_232 + 1
    data_162c148 = x11_98
else
    (*data_162c140)(&data_162c140, *(x0_97 + 0x10))

data_162c160 = 0x100000000202c
data_162c168 = DameJosephine
data_162c170 = DameJosephine_VP
data_162c818 = v6
data_162c828 = 0
data_162c158 = 0x500000930
data_162c830 = 0x8000004
data_162c82c = 0
data_162c838 = 0xffffffff
data_162c870 = "dame_molly"
data_162c878 = 0x26
data_162c880 = TEXTURE_CARD_GEN_DARK_AGES_DAMEMOLLY
data_162c8a8 = _vtable_for_UI2StateDecl + 0x10
data_162c888 = SOUND_SOUND_CARDS_FX_LANDPLAY_DAME_MOLLY
void* x0_98 = UI2StateDeclTryLookup("d_Dame_Molly")

if (x0_98 == 0)
    (*data_162c8a8)(&data_162c8a8, "d_Dame_Molly")
    uint32_t x10_235 = *UI2StateDeclI_counter
    uint64_t x11_99 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162c8a8
    *UI2StateDeclI_counter = x10_235 + 1
    data_162c8b0 = x11_99
else
    (*data_162c8a8)(&data_162c8a8, *(x0_98 + 0x10))

data_162c8c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_99 = UI2StateDeclTryLookup("d_Dame_Molly")

if (x0_99 == 0)
    (*data_162c8c0)(&data_162c8c0, "d_Dame_Molly")
    uint32_t x10_237 = *UI2StateDeclI_counter
    uint64_t x11_100 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162c8c0
    *UI2StateDeclI_counter = x10_237 + 1
    data_162c8c8 = x11_100
else
    (*data_162c8c0)(&data_162c8c0, *(x0_99 + 0x10))

data_162c8e0 = 0x1000000002024
data_162c8e8 = DameMolly
data_162cf98 = v6
data_162cfa8 = 0
data_162c8d8 = 0x500000931
data_162cfb0 = 0x8010000
data_162cfac = 0
data_162cfb8 = 0xffffffff
data_162cff0 = "dame_natalie"
data_162cff8 = 2
data_162d000 = TEXTURE_CARD_GEN_DARK_AGES_DAME_NATALIE
data_162d028 = _vtable_for_UI2StateDecl + 0x10
data_162d008 = SOUND_SOUND_CARDS_FX_LANDPLAY_DAME_NATALIE
void* x0_100 = UI2StateDeclTryLookup("d_Dame_Natalie")

if (x0_100 == 0)
    (*data_162d028)(&data_162d028, "d_Dame_Natalie")
    uint32_t x10_240 = *UI2StateDeclI_counter
    uint64_t x11_101 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162d028
    *UI2StateDeclI_counter = x10_240 + 1
    data_162d030 = x11_101
else
    (*data_162d028)(&data_162d028, *(x0_100 + 0x10))

data_162d040 = _vtable_for_UI2StateDecl + 0x10
void* x0_101 = UI2StateDeclTryLookup("d_Dame_Natalie")

if (x0_101 == 0)
    (*data_162d040)(&data_162d040, "d_Dame_Natalie")
    uint32_t x10_242 = *UI2StateDeclI_counter
    uint64_t x11_102 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162d040
    *UI2StateDeclI_counter = x10_242 + 1
    data_162d048 = x11_102
else
    (*data_162d040)(&data_162d040, *(x0_101 + 0x10))

data_162d060 = 0x1000000002024
data_162d068 = DameNatalie
data_162d718 = v6
data_162d728 = 0
data_162d058 = 0x500000932
data_162d72c = 0
data_162d730 = 0x8000001
data_162d738 = 0xffffffff
data_162d770 = "dame_sylvia"
data_162d778 = 0x1b
data_162d780 = TEXTURE_CARD_GEN_DARK_AGES_DAME_SYLVIA
data_162d7a8 = _vtable_for_UI2StateDecl + 0x10
data_162d788 = SOUND_SOUND_CARDS_FX_LANDPLAY_DAME_SYLVIA
void* x0_102 = UI2StateDeclTryLookup("d_Dame_Sylvia")

if (x0_102 == 0)
    (*data_162d7a8)(&data_162d7a8, "d_Dame_Sylvia")
    uint32_t x10_245 = *UI2StateDeclI_counter
    uint64_t x11_103 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162d7a8
    *UI2StateDeclI_counter = x10_245 + 1
    data_162d7b0 = x11_103
else
    (*data_162d7a8)(&data_162d7a8, *(x0_102 + 0x10))

data_162d7c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_103 = UI2StateDeclTryLookup("d_Dame_Sylvia")

if (x0_103 == 0)
    (*data_162d7c0)(&data_162d7c0, "d_Dame_Sylvia")
    uint32_t x10_247 = *UI2StateDeclI_counter
    uint64_t x11_104 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162d7c0
    *UI2StateDeclI_counter = x10_247 + 1
    data_162d7c8 = x11_104
else
    (*data_162d7c0)(&data_162d7c0, *(x0_103 + 0x10))

data_162d7e0 = 0x1000000002024
data_162d7e8 = DameSylvia
data_162de98 = v6
data_162dea8 = 0
data_162d7d8 = 0x500000933
data_162deb0 = 0x800000a
data_162deac = 0
data_162deb8 = 0xffffffff
data_162def0 = "sir_bailey"
data_162def8 = 0x1c
data_162df00 = TEXTURE_CARD_GEN_DARK_AGES_SIR_BAILEY
data_162df28 = _vtable_for_UI2StateDecl + 0x10
data_162df08 = SOUND_SOUND_CARDS_FX_LANDPLAY_SIR_BAILEY
void* x0_104 = UI2StateDeclTryLookup("d_Sir_Bailey")

if (x0_104 == 0)
    (*data_162df28)(&data_162df28, "d_Sir_Bailey")
    uint32_t x10_250 = *UI2StateDeclI_counter
    uint64_t x11_105 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162df28
    *UI2StateDeclI_counter = x10_250 + 1
    data_162df30 = x11_105
else
    (*data_162df28)(&data_162df28, *(x0_104 + 0x10))

data_162df40 = _vtable_for_UI2StateDecl + 0x10
void* x0_105 = UI2StateDeclTryLookup("d_Sir_Bailey")

if (x0_105 == 0)
    (*data_162df40)(&data_162df40, "d_Sir_Bailey")
    uint32_t x10_252 = *UI2StateDeclI_counter
    uint64_t x11_106 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162df40
    *UI2StateDeclI_counter = x10_252 + 1
    data_162df48 = x11_106
else
    (*data_162df40)(&data_162df40, *(x0_105 + 0x10))

data_162df60 = 0x1000000002024
data_162df68 = SirBailey
data_162e618 = v6
data_162e628 = 0
data_162df58 = 0x500000934
data_162e630 = 0x8000010
data_162e62c = 0
data_162e638 = 0xffffffff
data_162e670 = "sir_destry"
data_162e678 = 0x28
data_162e680 = TEXTURE_CARD_GEN_DARK_AGES_SIR_DESTRY
data_162e6a8 = _vtable_for_UI2StateDecl + 0x10
data_162e688 = SOUND_SOUND_CARDS_FX_LANDPLAY_SIR_DESTRY
void* x0_106 = UI2StateDeclTryLookup("d_Sir_Destry")

if (x0_106 == 0)
    (*data_162e6a8)(&data_162e6a8, "d_Sir_Destry")
    uint32_t x10_255 = *UI2StateDeclI_counter
    uint64_t x11_107 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162e6a8
    *UI2StateDeclI_counter = x10_255 + 1
    data_162e6b0 = x11_107
else
    (*data_162e6a8)(&data_162e6a8, *(x0_106 + 0x10))

data_162e6c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_107 = UI2StateDeclTryLookup("d_Sir_Destry")

if (x0_107 == 0)
    (*data_162e6c0)(&data_162e6c0, "d_Sir_Destry")
    uint32_t x10_257 = *UI2StateDeclI_counter
    uint64_t x11_108 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162e6c0
    *UI2StateDeclI_counter = x10_257 + 1
    data_162e6c8 = x11_108
else
    (*data_162e6c0)(&data_162e6c0, *(x0_107 + 0x10))

data_162e6e0 = 0x1000000002024
data_162e6e8 = SirDestry
data_162ed98 = v6
data_162eda8 = 0
data_162e6d8 = 0x500000935
data_162edb0 = 0x8000020
data_162edac = 0
data_162edb8 = 0xffffffff
data_162edf0 = "sir_martin"
data_162edf8 = 0x1d
data_162ee00 = TEXTURE_CARD_GEN_DARK_AGES_SIRMARTIN
data_162ee28 = _vtable_for_UI2StateDecl + 0x10
data_162ee08 = SOUND_SOUND_CARDS_FX_LANDPLAY_SIR_MARTIN
void* x0_108 = UI2StateDeclTryLookup("d_Sir_Martin")

if (x0_108 == 0)
    (*data_162ee28)(&data_162ee28, "d_Sir_Martin")
    uint32_t x10_260 = *UI2StateDeclI_counter
    uint64_t x11_109 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162ee28
    *UI2StateDeclI_counter = x10_260 + 1
    data_162ee30 = x11_109
else
    (*data_162ee28)(&data_162ee28, *(x0_108 + 0x10))

data_162ee40 = _vtable_for_UI2StateDecl + 0x10
void* x0_109 = UI2StateDeclTryLookup("d_Sir_Martin")

if (x0_109 == 0)
    (*data_162ee40)(&data_162ee40, "d_Sir_Martin")
    uint32_t x10_262 = *UI2StateDeclI_counter
    uint64_t x11_110 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162ee40
    *UI2StateDeclI_counter = x10_262 + 1
    data_162ee48 = x11_110
else
    (*data_162ee40)(&data_162ee40, *(x0_109 + 0x10))

data_162ee60 = 0x1000000002024
data_162ee68 = SirMartin
data_162f518 = v6
data_162f528 = 0
data_162ee58 = 0x400000936
data_162f530 = 0x8800000
data_162f52c = 0
data_162f538 = 0xffffffff
data_162f570 = "sir_michael"
data_162f578 = 0x28
data_162f580 = TEXTURE_CARD_GEN_DARK_AGES_SIR_MICHAEL
data_162f5a8 = _vtable_for_UI2StateDecl + 0x10
data_162f588 = SOUND_SOUND_CARDS_FX_LANDPLAY_SIR_MICHAEL
void* x0_110 = UI2StateDeclTryLookup("d_Sir_Michael")

if (x0_110 == 0)
    (*data_162f5a8)(&data_162f5a8, "d_Sir_Michael")
    uint32_t x10_265 = *UI2StateDeclI_counter
    uint64_t x11_111 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162f5a8
    *UI2StateDeclI_counter = x10_265 + 1
    data_162f5b0 = x11_111
else
    (*data_162f5a8)(&data_162f5a8, *(x0_110 + 0x10))

data_162f5c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_111 = UI2StateDeclTryLookup("d_Sir_Michael")

if (x0_111 == 0)
    (*data_162f5c0)(&data_162f5c0, "d_Sir_Michael")
    uint32_t x10_267 = *UI2StateDeclI_counter
    uint64_t x11_112 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162f5c0
    *UI2StateDeclI_counter = x10_267 + 1
    data_162f5c8 = x11_112
else
    (*data_162f5c0)(&data_162f5c0, *(x0_111 + 0x10))

data_162fc98 = v6
data_162f5d8 = 0x500000937
data_162f5e0 = 0x1000000002024
data_162f5e8 = SirMichael
data_162fca8 = 0
__builtin_memcpy(&data_162fcb0, 
    "\x00\x00\x00\x08\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_162fcf0 = "sir_vander"
data_162fcac = 0
__builtin_memset(&data_162fcd0, 0, 0x20)
data_162fcf8 = 0x10
data_162fd00 = TEXTURE_CARD_GEN_DARK_AGES_SIRVANDER
data_162fd28 = _vtable_for_UI2StateDecl + 0x10
data_162fd08 = SOUND_SOUND_CARDS_FX_LANDPLAY_SIR_VANDER
void* x0_112 = UI2StateDeclTryLookup("d_Sir_Vander")

if (x0_112 == 0)
    (*data_162fd28)(&data_162fd28, "d_Sir_Vander")
    uint32_t x10_270 = *UI2StateDeclI_counter
    uint64_t x11_113 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162fd28
    *UI2StateDeclI_counter = x10_270 + 1
    data_162fd30 = x11_113
else
    (*data_162fd28)(&data_162fd28, *(x0_112 + 0x10))

data_162fd40 = _vtable_for_UI2StateDecl + 0x10
void* x0_113 = UI2StateDeclTryLookup("d_Sir_Vander")
int128_t v0_19
int128_t v1_38

if (x0_113 == 0)
    v0_19, v1_38 = (*data_162fd40)(&data_162fd40, "d_Sir_Vander")
    uint32_t x10_272 = *UI2StateDeclI_counter
    uint64_t x11_114 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_162fd40
    *UI2StateDeclI_counter = x10_272 + 1
    data_162fd48 = x11_114
else
    v0_19, v1_38 = (*data_162fd40)(&data_162fd40, *(x0_113 + 0x10))

v0_19.q = 0
v0_19:8.q = 0
__builtin_memset(&data_162fd80, 0, 0xb0)
v0_19.d = 6
v0_19:4.d = 6
data_162fd78 = 0x600000006
v0_19.q = 0x500000938
data_162fd60 = 0x1000000002024
data_162fd68 = SirVander
data_162fd80:4.d = 2
data_162fd58 = 0x500000938
v0_19 = var_e0
data_162fe2c:4 = 0
data_162fd90 = SirVander_OnTrash
data_1630378 = 1
v1_38 = data_71a6a0
data_162fe20 = 0
data_162fe2c = 0x100000000
__builtin_memcpy(&data_1630418, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_1630460 = v0_19
data_1630470 = "hermit"
int128_t var_d0
data_1630450 = var_d0
data_1630440 = var_100
int128_t var_f0
data_1630430 = var_f0
data_1630478 = 8
data_1630480 = TEXTURE_CARD_GEN_DARK_AGES_HERMIT
data_16304a8 = _vtable_for_UI2StateDecl + 0x10
data_1630488 = SOUND_SOUND_CARDS_FX_LANDPLAY_HERMIT
void* x0_114 = UI2StateDeclTryLookup("d22_Hermit")

if (x0_114 == 0)
    (*data_16304a8)(&data_16304a8, "d22_Hermit")
    uint32_t x10_275 = *UI2StateDeclI_counter
    uint64_t x11_115 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16304a8
    *UI2StateDeclI_counter = x10_275 + 1
    data_16304b0 = x11_115
else
    (*data_16304a8)(&data_16304a8, *(x0_114 + 0x10))

data_16304c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_115 = UI2StateDeclTryLookup("d_Hermit")
int128_t v0_20
int128_t v4_3

if (x0_115 == 0)
    v0_20, v4_3 = (*data_16304c0)(&data_16304c0, "d_Hermit")
    uint32_t x10_277 = *UI2StateDeclI_counter
    uint64_t x11_116 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16304c0
    *UI2StateDeclI_counter = x10_277 + 1
    data_16304c8 = x11_116
else
    v0_20, v4_3 = (*data_16304c0)(&data_16304c0, *(x0_115 + 0x10))
v0_20.q = 0
v0_20:8.q = 0
data_16304e0 = 4
data_16304e8 = Hermit22
__builtin_memset(&data_16304f8, 0, 0x20)
data_16304f8 = 0xc
data_1630508:8.d = 0x92c
__builtin_memset(&data_1630598, 0, 0x20)
data_16305a8:4.d = 0x40
data_16304d8 = 0x300000905
__builtin_memset(&data_1630518, 0, 0x80)
v0_20 = data_113b0b0
data_1630ba8 = 0
__builtin_memset(&data_1630b48, 0, 0x50)
data_1630b98 = v1_38
data_1630b38 = v0_20
data_1630be0 = var_140_1
data_1630bf0 = "hovel"
int128_t var_130_1
data_1630bd0 = var_130_1
v0_20 = var_120.o
data_1630bac = 0
data_1630bc0 = v0_20
data_1630bb0 = 2.o
data_1630bf8 = 0xe
data_1630c00 = TEXTURE_CARD_GEN_DARK_AGES_HOVEL
data_1630c08 = SOUND_SOUND_CARDS_FX_LANDPLAY_HOVEL
data_1630c10 = SOUND_SOUND_CARDS_FX_REACTION_HOVEL
data_1630c28 = _vtable_for_UI2StateDecl + 0x10
void* x0_116 = UI2StateDeclTryLookup("d22_Hovel")

if (x0_116 == 0)
    (*data_1630c28)(&data_1630c28, "d22_Hovel")
    uint32_t x10_280 = *UI2StateDeclI_counter
    uint64_t x11_117 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1630c28
    *UI2StateDeclI_counter = x10_280 + 1
    data_1630c30 = x11_117
else
    (*data_1630c28)(&data_1630c28, *(x0_116 + 0x10))

data_1630c40 = _vtable_for_UI2StateDecl + 0x10
void* x0_117 = UI2StateDeclTryLookup("d_Hovel")
int64_t result

if (x0_117 == 0)
    result = (*data_1630c40)(&data_1630c40, "d_Hovel")
    uint32_t x10_282 = *UI2StateDeclI_counter
    uint64_t x11_118 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1630c40
    *UI2StateDeclI_counter = x10_282 + 1
    data_1630c48 = x11_118
else
    result = (*data_1630c40)(&data_1630c40, *(x0_117 + 0x10))

data_1630c58 = 0x100000929
data_1630c90 = zx.o(0)
data_1630d20 = zx.o(0)
data_1630c78 = 6
data_1630c90.q = Hovel_Reaction
data_1630d20.q = Hovel_Reaction_Test
data_1630c80 = zx.o(0)
__builtin_memset(&data_1630ca0, 0, 0x80)
data_1630c80:4.d = 2
data_1630d30 = 0
data_1630d20:0xc = 0x100000001
data_1630c60 = 0x1000000004040
data_1631278 = 1
return result
