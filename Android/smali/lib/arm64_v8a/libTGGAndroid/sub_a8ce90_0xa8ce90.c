// 函数: sub_a8ce90
// 地址: 0xa8ce90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
v0, v1 = memset(0x1682988, 0, 0x21c00)
data_71cc70
data_7e65a0
__builtin_memcpy(&data_1682990, 
    "\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x08\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
v1 = data_7e65d0
data_16829c0 = data_7e65c0
data_16829e0 = "black_cat"
data_16829e8 = 0x28
data_16829f0 = TEXTURE_CARD_GEN_MENAGERIE_BLACK_CAT
data_16829f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_BLACK_CAT
data_1682a00 = SOUND_SOUND_CARDS_FX_REACTION_BLACK_CAT
data_16829d0 = v1
data_1682a18 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("m_Black_Cat")

if (x0 == 0)
    (*data_1682a18)(&data_1682a18, "m_Black_Cat")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1682a18
    *UI2StateDeclI_counter = x10_1 + 1
    data_1682a20 = x11_1
else
    (*data_1682a18)(&data_1682a18, *(x0 + 0x10))

data_1682a30 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("m_Black_Cat")

if (x0_1 == 0)
    (*data_1682a30)(&data_1682a30, "m_Black_Cat")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1682a30
    *UI2StateDeclI_counter = x10_3 + 1
    data_1682a38 = x11_2
else
    (*data_1682a30)(&data_1682a30, *(x0_1 + 0x10))

data_1682a50 = 0x64
data_1682a58 = BlackCat
data_1682a70 = zx.o(0)
data_1682a70:4.d = 6
data_1682a80 = zx.o(0)
data_1682a80.q = BlackCat_Reaction_OnAnotherGain
data_1682b10 = zx.o(0)
data_1682b10.q = BlackCat_Reaction_OnAnotherGain_Test
data_1683068 = 1
int128_t v4 = data_71c2d0
__builtin_memset(&data_1682a90, 0, 0x80)
data_1682a48 = 0x200000f00
data_1682b20 = 0
data_1682a68 = 6
data_1682b10:0xc = 0x100000003
__builtin_memcpy(&data_1683108, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_1683160 = "sleigh"
__builtin_memset(&data_1683140, 0, 0x20)
__builtin_memcpy(&data_1683120, 
    "\x10\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1683168 = 0x27
data_1683170 = TEXTURE_CARD_GEN_MENAGERIE_SLEIGH
data_1683178 = SOUND_SOUND_CARDS_FX_LANDPLAY_SLEIGH
data_1683180 = SOUND_SOUND_CARDS_FX_REACTION_SLEIGH
data_1683198 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("m_Sleigh")

if (x0_2 == 0)
    (*data_1683198)(&data_1683198, "m_Sleigh")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1683198
    *UI2StateDeclI_counter = x10_5 + 1
    data_16831a0 = x11_3
else
    (*data_1683198)(&data_1683198, *(x0_2 + 0x10))

data_16831b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("m_Sleigh")

if (x0_3 == 0)
    (*data_16831b0)(&data_16831b0, "m_Sleigh")
    uint32_t x10_7 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16831b0
    *UI2StateDeclI_counter = x10_7 + 1
    data_16831b8 = x11_4
else
    (*data_16831b0)(&data_16831b0, *(x0_3 + 0x10))

data_16831d0 = 0x44
data_16831d8 = Sleigh
data_1683200 = zx.o(0)
data_1683200.q = Sleigh_Reaction_OnGain_Hand
int128_t v3
v3.q = 0x1500000021
data_16831f0 = zx.o(0)
__builtin_memset(&data_1683210, 0, 0x98)
data_16831e8 = 6
data_16831f0:4.d = 2
data_1683290 = Sleigh_Reaction_CanMove
data_16831c8 = 0x200000f01
data_168329c = 0x1400000021
__builtin_memset(&data_16832b0, 0, 0xb8)
data_16832a8 = 6
data_16832b0:4.d = 2
data_16832c0 = Sleigh_Reaction_OnGain_Topdeck
data_1683350 = Sleigh_Reaction_CanMove
data_168335c = 0x1500000021
__builtin_memset(&data_16833b0, 0, 0x70)
data_1683380 = zx.o(0)
data_1683380.q = Sleigh_Reaction_OnGain_Nothing
data_1683410 = Sleigh_Reaction_CannotMove
data_1683370 = zx.o(0)
data_1683370:4.d = 2
__builtin_memset(&data_168341c:4, 0, 0xc8)
__builtin_memset(&data_1683390, 0, 0x20)
data_1683368 = 6
data_168341c = 0x1600000003
v3 = data_1140080
data_1683428 = 0xc
data_1683438:8.d = 0xf46
data_16834d8:4.d = 0
data_1683818 = v3
__builtin_memcpy(&data_16837e8, 
    "\x14\x00\x00\x00\x00\x00\x00\x00\x91\x67\x72\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00\x"
"fd\xf9\x78\x00\x00\x00\x00\x00\x16\x00\x00\x00\x00\x00\x00\x00\xa0\xbd\x79\x00\x00\x00\x00\x
        00", 
    0x30)
__builtin_memcpy(&data_1683888, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"11\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16838a8 = 0xffffffff
data_16838e0 = "supplies"
data_16838e8 = 0x11
data_16838f0 = TEXTURE_CARD_GEN_MENAGERIE_SUPPLIES
data_16838f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SUPPLIES
data_1683918 = _vtable_for_UI2StateDecl + 0x10
void* x0_4 = UI2StateDeclTryLookup("m_Supplies")

if (x0_4 == 0)
    (*data_1683918)(&data_1683918, "m_Supplies")
    uint32_t x10_9 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1683918
    *UI2StateDeclI_counter = x10_9 + 1
    data_1683920 = x11_5
else
    (*data_1683918)(&data_1683918, *(x0_4 + 0x10))

data_1683930 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("m_Supplies")

if (x0_5 == 0)
    (*data_1683930)(&data_1683930, "m_Supplies")
    uint32_t x10_11 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1683930
    *UI2StateDeclI_counter = x10_11 + 1
    data_1683938 = x11_6
else
    (*data_1683930)(&data_1683930, *(x0_5 + 0x10))

int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
__builtin_memset(&data_1683968, 0, 0xc0)
data_1683950 = 2
data_1683958 = Supplies
data_1683968 = 0xc
data_1683978:8.d = 0xf46
__builtin_memcpy(&data_1684008, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_1683948 = 0x200000f02
data_1683a18:4.d = 0
data_1684060 = "camel_train"
__builtin_memset(&data_1684040, 0, 0x20)
__builtin_memcpy(&data_1684020, 
    "\x00\x00\x00\x00\x20\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1684068 = 8
data_1684070 = TEXTURE_CARD_GEN_MENAGERIE_CAMELTRAIN
data_1684098 = _vtable_for_UI2StateDecl + 0x10
data_1684078 = SOUND_SOUND_CARDS_FX_LANDPLAY_CAMEL_TRAIN
void* x0_6 = UI2StateDeclTryLookup("m_Camel_Train")

if (x0_6 == 0)
    (*data_1684098)(&data_1684098, "m_Camel_Train")
    uint32_t x10_14 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1684098
    *UI2StateDeclI_counter = x10_14 + 1
    data_16840a0 = x11_7
else
    (*data_1684098)(&data_1684098, *(x0_6 + 0x10))

data_16840b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("m_Camel_Train")

if (x0_7 == 0)
    (*data_16840b0)(&data_16840b0, "m_Camel_Train")
    uint32_t x10_16 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16840b0
    *UI2StateDeclI_counter = x10_16 + 1
    data_16840b8 = x11_8
else
    (*data_16840b0)(&data_16840b0, *(x0_7 + 0x10))

int128_t v0_3
v0_3.q = 0
v0_3:8.q = 0
__builtin_memset(&data_16840f0, 0, 0xb0)
data_16840d0 = 4
data_16840d8 = CamelTrain
v0_3.q = 0x300000f03
data_1684100 = CamelTrain_OnGain
data_16840c8 = 0x300000f03
data_16840f0:4.d = 1
data_16846e8 = 1
data_16840e8 = 0x600000006
data_168419c:4 = 0
data_1684190 = 0
__builtin_memcpy(&data_1684788, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"02\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_168419c = 0x100000000
data_16847a8 = 0xffffffff
data_16847e0 = "goatherd"
data_16847e8 = 8
data_16847f0 = TEXTURE_CARD_GEN_MENAGERIE_GOATHERDING
data_1684818 = _vtable_for_UI2StateDecl + 0x10
data_16847f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_GOATHERD
void* x0_8 = UI2StateDeclTryLookup("m_Goatherd")

if (x0_8 == 0)
    (*data_1684818)(&data_1684818, "m_Goatherd")
    uint32_t x10_19 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1684818
    *UI2StateDeclI_counter = x10_19 + 1
    data_1684820 = x11_9
else
    (*data_1684818)(&data_1684818, *(x0_8 + 0x10))

data_1684830 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("m_Goatherd")

if (x0_9 == 0)
    (*data_1684830)(&data_1684830, "m_Goatherd")
    uint32_t x10_21 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1684830
    *UI2StateDeclI_counter = x10_21 + 1
    data_1684838 = x11_10
else
    (*data_1684830)(&data_1684830, *(x0_9 + 0x10))

data_11400c0
data_1684848 = 0x300000f04
data_11400a0
data_1684ea8 = data_1140090
__builtin_memset(&data_1684eb8, 0, 0x50)
data_1684850 = 4
data_1684858 = Goatherd
__builtin_memcpy(&data_1684f08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1684f28 = 0xffffffff
data_1684f60 = "scrap"
data_1684f68 = 0xe
data_1684f70 = TEXTURE_CARD_GEN_MENAGERIE_SCRAP
data_1684f98 = _vtable_for_UI2StateDecl + 0x10
data_1684f78 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCRAP
void* x0_10 = UI2StateDeclTryLookup("m_Scrap")

if (x0_10 == 0)
    (*data_1684f98)(&data_1684f98, "m_Scrap")
    uint32_t x10_24 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1684f98
    *UI2StateDeclI_counter = x10_24 + 1
    data_1684fa0 = x11_11
else
    (*data_1684f98)(&data_1684f98, *(x0_10 + 0x10))

data_1684fb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("m_Scrap")

if (x0_11 == 0)
    (*data_1684fb0)(&data_1684fb0, "m_Scrap")
    uint32_t x10_26 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1684fb0
    *UI2StateDeclI_counter = x10_26 + 1
    data_1684fb8 = x11_12
else
    (*data_1684fb0)(&data_1684fb0, *(x0_11 + 0x10))

int128_t v0_5
v0_5.q = 0
v0_5:8.q = 0
__builtin_memset(&data_1684fe8, 0, 0xc0)
data_1684fe8 = 0xc
data_1684fd0 = 4
data_1684fd8 = Scrap
__builtin_memcpy(&data_1685688, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_1684fc8 = 0x300000f05
data_1684ff8:8.d = 0xf46
data_1685098:4.d = 0
data_16856e0 = "sheepdog"
__builtin_memset(&data_16856c0, 0, 0x20)
__builtin_memcpy(&data_16856a0, 
    "\x10\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16856e8 = 8
data_16856f0 = TEXTURE_CARD_GEN_MENAGERIE_SHEEPDOG
data_16856f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SHEEPDOG
data_1685700 = SOUND_SOUND_CARDS_FX_REACTION_SHEEPDOG
data_1685718 = _vtable_for_UI2StateDecl + 0x10
void* x0_12 = UI2StateDeclTryLookup("m_Sheepdog")

if (x0_12 == 0)
    (*data_1685718)(&data_1685718, "m_Sheepdog")
    uint32_t x10_28 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1685718
    *UI2StateDeclI_counter = x10_28 + 1
    data_1685720 = x11_13
else
    (*data_1685718)(&data_1685718, *(x0_12 + 0x10))

data_1685730 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("m_Sheepdog")

if (x0_13 == 0)
    (*data_1685730)(&data_1685730, "m_Sheepdog")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1685730
    *UI2StateDeclI_counter = x10_30 + 1
    data_1685738 = x11_14
else
    (*data_1685730)(&data_1685730, *(x0_13 + 0x10))

__builtin_memset(&data_1685770, 0, 0xb0)
data_1685750 = 0x44
data_1685758 = Sheepdog
data_1685770:4.d = 2
data_1685780 = Sheepdog_Reaction_OnGain
data_1685810 = Sheepdog_Reaction_Test
data_1685d68 = 1
data_168581c:4 = 0
data_1685768 = 6
data_168581c = 0x100000003
__builtin_memcpy(&data_1685e08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00\x"
"2c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1685748 = 0x300000f06
data_1685e28 = 0xffffffff
data_1685e60 = "snowy_village"
data_1685e68 = 8
data_1685e70 = TEXTURE_CARD_GEN_MENAGERIE_SNOWYVILLAGE
data_1685e98 = _vtable_for_UI2StateDecl + 0x10
data_1685e78 = SOUND_SOUND_CARDS_FX_LANDPLAY_SNOWY_VILLAGE
void* x0_14 = UI2StateDeclTryLookup("m_Snowy_Village")

if (x0_14 == 0)
    (*data_1685e98)(&data_1685e98, "m_Snowy_Village")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1685e98
    *UI2StateDeclI_counter = x10_33 + 1
    data_1685ea0 = x11_15
else
    (*data_1685e98)(&data_1685e98, *(x0_14 + 0x10))

data_1685eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("m_Snowy_Village")

if (x0_15 == 0)
    (*data_1685eb0)(&data_1685eb0, "m_Snowy_Village")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1685eb0
    *UI2StateDeclI_counter = x10_35 + 1
    data_1685eb8 = x11_16
else
    (*data_1685eb0)(&data_1685eb0, *(x0_15 + 0x10))

int128_t v0_6
v0_6.q = 0x300000f07
data_1685ec8 = 0x300000f07
data_1685ed0 = 4
data_1685ed8 = SnowyVillage
__builtin_memcpy(&data_1686588, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x20\x00\x00\x00", 
    0x20)
data_16865a8 = 0xffffffff
data_16865e0 = "stockpile"
data_16865e8 = 0x11
data_16865f0 = TEXTURE_CARD_GEN_MENAGERIE_STOCKPILE
data_1686618 = _vtable_for_UI2StateDecl + 0x10
data_16865f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_STOCKPILE
void* x0_16 = UI2StateDeclTryLookup("m_Stockpile")

if (x0_16 == 0)
    (*data_1686618)(&data_1686618, "m_Stockpile")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1686618
    *UI2StateDeclI_counter = x10_38 + 1
    data_1686620 = x11_17
else
    (*data_1686618)(&data_1686618, *(x0_16 + 0x10))

data_1686630 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("m_Stockpile")

if (x0_17 == 0)
    (*data_1686630)(&data_1686630, "m_Stockpile")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1686630
    *UI2StateDeclI_counter = x10_40 + 1
    data_1686638 = x11_18
else
    (*data_1686630)(&data_1686630, *(x0_17 + 0x10))

int128_t v0_7
v0_7.q = 0x300000f08
data_1686648 = 0x300000f08
data_1686650 = 2
data_1686658 = Stockpile
__builtin_memcpy(&data_1686d08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"03\x00\x00\x00\x20\x00\x00\x00", 
    0x20)
data_1686d28 = 0xffffffff
data_1686d60 = "bounty_hunter"
data_1686d68 = 0xf
data_1686d70 = TEXTURE_CARD_GEN_MENAGERIE_BOUNTY_HUNTER
data_1686d98 = _vtable_for_UI2StateDecl + 0x10
data_1686d78 = SOUND_SOUND_CARDS_FX_LANDPLAY_BOUNTY_HUNTER
void* x0_18 = UI2StateDeclTryLookup("m_Bounty_Hunter")

if (x0_18 == 0)
    (*data_1686d98)(&data_1686d98, "m_Bounty_Hunter")
    uint32_t x10_43 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1686d98
    *UI2StateDeclI_counter = x10_43 + 1
    data_1686da0 = x11_19
else
    (*data_1686d98)(&data_1686d98, *(x0_18 + 0x10))

data_1686db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("m_Bounty_Hunter")

if (x0_19 == 0)
    (*data_1686db0)(&data_1686db0, "m_Bounty_Hunter")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1686db0
    *UI2StateDeclI_counter = x10_45 + 1
    data_1686db8 = x11_20
else
    (*data_1686db0)(&data_1686db0, *(x0_19 + 0x10))

int128_t v0_8
v0_8.q = 0x400000f09
data_1686dc8 = 0x400000f09
data_1686dd0 = 4
data_1686dd8 = BountyHunter
__builtin_memcpy(&data_1687488, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x40\x00\x00\x00", 
    0x20)
data_16874a8 = 0xffffffff
data_16874e0 = "cardinal"
data_16874e8 = 8
data_16874f0 = TEXTURE_CARD_GEN_MENAGERIE_CARDINAL
data_1687518 = _vtable_for_UI2StateDecl + 0x10
data_16874f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CARDINAL
void* x0_20 = UI2StateDeclTryLookup("m_Cardinal")

if (x0_20 == 0)
    (*data_1687518)(&data_1687518, "m_Cardinal")
    uint32_t x10_48 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1687518
    *UI2StateDeclI_counter = x10_48 + 1
    data_1687520 = x11_21
else
    (*data_1687518)(&data_1687518, *(x0_20 + 0x10))

data_1687530 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("m_Cardinal")

if (x0_21 == 0)
    (*data_1687530)(&data_1687530, "m_Cardinal")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1687530
    *UI2StateDeclI_counter = x10_50 + 1
    data_1687538 = x11_22
else
    (*data_1687530)(&data_1687530, *(x0_21 + 0x10))

int128_t v0_9
v0_9.q = 0x400000f0a
data_1687548 = 0x400000f0a
data_1687550 = 0x24
data_1687558 = Cardinal
__builtin_memcpy(&data_1687c08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1687c28 = 0xffffffff
data_1687c60 = "cavalry"
data_1687c68 = 8
data_1687c70 = TEXTURE_CARD_GEN_MENAGERIE_CAVALARY
data_1687c98 = _vtable_for_UI2StateDecl + 0x10
data_1687c78 = SOUND_SOUND_CARDS_FX_LANDPLAY_CAVALRY
void* x0_22 = UI2StateDeclTryLookup("m_Cavalry")

if (x0_22 == 0)
    (*data_1687c98)(&data_1687c98, "m_Cavalry")
    uint32_t x10_53 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1687c98
    *UI2StateDeclI_counter = x10_53 + 1
    data_1687ca0 = x11_23
else
    (*data_1687c98)(&data_1687c98, *(x0_22 + 0x10))

data_1687cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("m_Cavalry")
int128_t v0_10
int128_t v2_1

if (x0_23 == 0)
    v0_10, v2_1 = (*data_1687cb0)(&data_1687cb0, "m_Cavalry")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1687cb0
    *UI2StateDeclI_counter = x10_55 + 1
    data_1687cb8 = x11_24
else
    v0_10, v2_1 = (*data_1687cb0)(&data_1687cb0, *(x0_23 + 0x10))

v0_10.q = 0
v0_10:8.q = 0
v2_1.q = 0x400000f0b
data_1687cd0 = 4
data_1687cd8 = Cavalry
data_1687cf0 = zx.o(0)
data_1687cf0:4.d = 1
data_1687d90 = zx.o(0)
data_1687d00 = zx.o(0)
data_1687d90.q = Cavalry_OnGain_Test
data_1687d00.q = Cavalry_OnGain
__builtin_memset(&data_1687da0, 0, 0xc8)
__builtin_memset(&data_1687d10, 0, 0x80)
data_1687ce8 = 0x600000006
data_1687d90:0xc = 0x100000000
data_1687cc8 = 0x400000f0b
v2_1 = data_1140120
data_1688308 = data_1140110
data_1687da8 = 0xc
data_1687db8:8.d = 0xf46
data_1687e58:4.d = 0
data_1688318 = v2_1
__builtin_memcpy(&data_16882e8, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"c8\x2c\x78\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_1688388, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16883a8 = 0xffffffff
data_16883e0 = "groom"
data_16883e8 = 0xd
data_16883f0 = TEXTURE_CARD_GEN_MENAGERIE_GROOM
data_1688418 = _vtable_for_UI2StateDecl + 0x10
data_16883f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_GROOM
void* x0_24 = UI2StateDeclTryLookup("m_Groom")

if (x0_24 == 0)
    (*data_1688418)(&data_1688418, "m_Groom")
    uint32_t x10_58 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1688418
    *UI2StateDeclI_counter = x10_58 + 1
    data_1688420 = x11_25
else
    (*data_1688418)(&data_1688418, *(x0_24 + 0x10))

data_1688430 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("m_Groom")

if (x0_25 == 0)
    (*data_1688430)(&data_1688430, "m_Groom")
    uint32_t x10_60 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1688430
    *UI2StateDeclI_counter = x10_60 + 1
    data_1688438 = x11_26
else
    (*data_1688430)(&data_1688430, *(x0_25 + 0x10))

__builtin_memset(&data_1688468, 0, 0xc0)
data_1688450 = 4
data_1688458 = Groom
data_1688478:8.d = 0xf46
data_1688468 = 0xc
data_1688518:4.d = 0
__builtin_memcpy(&data_1688b08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1688448 = 0x400000f0c
data_1688b28 = 0xffffffff
data_1688b60 = "hostelry"
data_1688b68 = 0xd
data_1688b70 = TEXTURE_CARD_GEN_MENAGERIE_HOLSTERY
data_1688b98 = _vtable_for_UI2StateDecl + 0x10
data_1688b78 = SOUND_SOUND_CARDS_FX_LANDPLAY_HOSTELRY
void* x0_26 = UI2StateDeclTryLookup("m_Hostelry")

if (x0_26 == 0)
    (*data_1688b98)(&data_1688b98, "m_Hostelry")
    uint32_t x10_63 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1688b98
    *UI2StateDeclI_counter = x10_63 + 1
    data_1688ba0 = x11_27
else
    (*data_1688b98)(&data_1688b98, *(x0_26 + 0x10))

data_1688bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("m_Hostelry")

if (x0_27 == 0)
    (*data_1688bb0)(&data_1688bb0, "m_Hostelry")
    uint32_t x10_65 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1688bb0
    *UI2StateDeclI_counter = x10_65 + 1
    data_1688bb8 = x11_28
else
    (*data_1688bb0)(&data_1688bb0, *(x0_27 + 0x10))

data_1688be8 = 0x600000006
data_1688bd0 = 4
data_1688bd8 = Hostelry
int128_t v0_11
v0_11.q = 0
v0_11:8.q = 0
data_1688c00 = zx.o(0)
data_1688c00.q = Hostelry_OnGain
data_1688c90 = zx.o(0)
data_1688c90.q = Hostelry_OnGain_Test
data_1688bf0 = zx.o(0)
data_1688ca0 = 0
__builtin_memset(&data_1688c10, 0, 0x80)
data_1688bf0:4.d = 1
data_1688c90:0xc = 0x100000000
data_1688bc8 = 0x400000f0d
__builtin_memset(&data_1688ca8, 0, 0xc0)
data_1688cb8:8.d = 0xf46
data_1688ca8 = 0xc
data_1688d58:4.d = 0
data_16891e8 = 1
__builtin_memcpy(&data_1689288, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16892a8 = 0xffffffff
data_16892e0 = "village_green"
data_16892e8 = 0xf
data_16892f0 = TEXTURE_CARD_GEN_MENAGERIE_VILLAGE_GREEN
data_16892f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_VILLAGE_GREEN
data_1689300 = SOUND_SOUND_CARDS_FX_REACTION_VILLAGE_GREEN
data_1689318 = _vtable_for_UI2StateDecl + 0x10
void* x0_28 = UI2StateDeclTryLookup("m_Village_Green")

if (x0_28 == 0)
    (*data_1689318)(&data_1689318, "m_Village_Green")
    uint32_t x10_68 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1689318
    *UI2StateDeclI_counter = x10_68 + 1
    data_1689320 = x11_29
else
    (*data_1689318)(&data_1689318, *(x0_28 + 0x10))

data_1689330 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("m_Village_Green")

if (x0_29 == 0)
    (*data_1689330)(&data_1689330, "m_Village_Green")
    uint32_t x10_70 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1689330
    *UI2StateDeclI_counter = x10_70 + 1
    data_1689338 = x11_30
else
    (*data_1689330)(&data_1689330, *(x0_29 + 0x10))

data_1689350 = 0xc4
data_1689358 = VillageGreen
data_1689380 = zx.o(0)
data_1689380.q = VillageGreen_Reaction_OnDiscard
data_1689410 = zx.o(0)
data_1689410.q = VillageGreen_Reaction_Test
data_1689370 = zx.o(0)
data_1689420 = 0
__builtin_memset(&data_1689390, 0, 0x80)
data_1689348 = 0x400000f0e
data_1689410:0xc = 0x2300000007
data_1689368 = 6
data_1689370:4.d = 0
__builtin_memcpy(&data_1689a08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"30\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memset(&data_1689988, 0, 0x20)
__builtin_memcpy(&data_1689968, 
    "\x23\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x22\x00\x00\x00\x00\x00\x00\x00\x"
"05\xfa\x78\x00\x00\x00\x00\x00", 
    0x20)
data_1689a28 = 0xffffffff
data_1689a60 = "barge"
data_1689a68 = 0xe
data_1689a70 = TEXTURE_CARD_GEN_MENAGERIE_BARGE
data_1689a98 = _vtable_for_UI2StateDecl + 0x10
data_1689a78 = SOUND_SOUND_CARDS_FX_LANDPLAY_BARGE
void* x0_30 = UI2StateDeclTryLookup("m_Barge")

if (x0_30 == 0)
    (*data_1689a98)(&data_1689a98, "m_Barge")
    uint32_t x10_73 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1689a98
    *UI2StateDeclI_counter = x10_73 + 1
    data_1689aa0 = x11_31
else
    (*data_1689a98)(&data_1689a98, *(x0_30 + 0x10))

data_1689ab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("m_Barge")

if (x0_31 == 0)
    (*data_1689ab0)(&data_1689ab0, "m_Barge")
    uint32_t x10_75 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1689ab0
    *UI2StateDeclI_counter = x10_75 + 1
    data_1689ab8 = x11_32
else
    (*data_1689ab0)(&data_1689ab0, *(x0_31 + 0x10))

data_1689ad0 = 0x84
data_1689ad8 = Barge
data_168a0e8 = 1
__builtin_memcpy(&data_168a188, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x"
"03\x00\x00\x20\x00\x00\x00\x00", 
    0x20)
data_1689ac8 = 0x500000f0f
data_168a1a8 = 0xffffffff
data_168a1e0 = "coven"
data_168a1e8 = 8
data_168a1f0 = TEXTURE_CARD_GEN_MENAGERIE_COVEN
data_168a218 = _vtable_for_UI2StateDecl + 0x10
data_168a1f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_COVEN
void* x0_32 = UI2StateDeclTryLookup("m_Coven")

if (x0_32 == 0)
    (*data_168a218)(&data_168a218, "m_Coven")
    uint32_t x10_78 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168a218
    *UI2StateDeclI_counter = x10_78 + 1
    data_168a220 = x11_33
else
    (*data_168a218)(&data_168a218, *(x0_32 + 0x10))

data_168a230 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("m_Coven")

if (x0_33 == 0)
    (*data_168a230)(&data_168a230, "m_Coven")
    uint32_t x10_80 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168a230
    *UI2StateDeclI_counter = x10_80 + 1
    data_168a238 = x11_34
else
    (*data_168a230)(&data_168a230, *(x0_33 + 0x10))

data_11401a0
data_168a248 = 0x500000f10
data_168a8a8 = data_1140170
__builtin_memset(&data_168a8b8, 0, 0x50)
data_168a250 = 0x24
data_168a258 = Coven
__builtin_memcpy(&data_168a908, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x20\x00\x00\x00", 
    0x20)
data_168a928 = 0xffffffff
data_168a960 = "displace"
data_168a968 = 0x27
data_168a970 = TEXTURE_CARD_GEN_MENAGERIE_DISPLACE
data_168a998 = _vtable_for_UI2StateDecl + 0x10
data_168a978 = SOUND_SOUND_CARDS_FX_LANDPLAY_DISPLACE
void* x0_34 = UI2StateDeclTryLookup("m_Displace")

if (x0_34 == 0)
    (*data_168a998)(&data_168a998, "m_Displace")
    uint32_t x10_83 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168a998
    *UI2StateDeclI_counter = x10_83 + 1
    data_168a9a0 = x11_35
else
    (*data_168a998)(&data_168a998, *(x0_34 + 0x10))

data_168a9b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("m_Displace")
int128_t v1_7
int128_t v2_3

if (x0_35 == 0)
    v1_7, v2_3 = (*data_168a9b0)(&data_168a9b0, "m_Displace")
    uint32_t x10_85 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168a9b0
    *UI2StateDeclI_counter = x10_85 + 1
    data_168a9b8 = x11_36
else
    v1_7, v2_3 = (*data_168a9b0)(&data_168a9b0, *(x0_35 + 0x10))

data_168a9d0 = 4
data_168a9d8 = Displace
data_168b088 = v4
v1_7 = data_7e66a0
v2_3 = data_7e66b0
data_168a9c8 = 0x500000f11
data_168b098 = 2
data_168b0a0 = v1_7
data_168b0e0 = "falconer"
data_168b0b0 = v2_3
__builtin_memset(&data_168b0c0, 0, 0x20)
data_168b0e8 = 8
data_168b0f0 = TEXTURE_CARD_GEN_MENAGERIE_FALCONIER
data_168b0f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_FALCONER
data_168b100 = SOUND_SOUND_CARDS_FX_REACTION_FALCONER
data_168b118 = _vtable_for_UI2StateDecl + 0x10
void* x0_36 = UI2StateDeclTryLookup("m_Falconer")

if (x0_36 == 0)
    (*data_168b118)(&data_168b118, "m_Falconer")
    uint32_t x10_87 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168b118
    *UI2StateDeclI_counter = x10_87 + 1
    data_168b120 = x11_37
else
    (*data_168b118)(&data_168b118, *(x0_36 + 0x10))

data_168b130 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("m_Falconer")

if (x0_37 == 0)
    (*data_168b130)(&data_168b130, "m_Falconer")
    uint32_t x10_89 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168b130
    *UI2StateDeclI_counter = x10_89 + 1
    data_168b138 = x11_38
else
    (*data_168b130)(&data_168b130, *(x0_37 + 0x10))

data_168b150 = 0x44
data_168b158 = Falconer
__builtin_memset(&data_168b170, 0, 0xb8)
data_168b168 = 6
data_168b170:4.d = 2
data_168b180 = Falconer_Reaciton_OnGain
data_168b210 = Falconer_Reaciton_OnGain_Test
data_168b21c = 0x100000003
data_168b148 = 0x500000f12
__builtin_memset(&data_168b230, 0, 0xb8)
data_168b228 = 6
data_168b230:4.d = 6
data_168b240 = Falconer_Reaciton_OnGain
data_168b2d0 = Falconer_Reaciton_OnGain_Test
data_168b2dc = 0x100000003
__builtin_memcpy(&data_168b808, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_168b768 = 1
data_168b860 = "gatekeeper"
__builtin_memset(&data_168b840, 0, 0x20)
__builtin_memcpy(&data_168b820, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_168b868 = 0x10
data_168b870 = TEXTURE_CARD_GEN_MENAGERIE_GATEKEEPER
data_168b878 = SOUND_SOUND_CARDS_FX_LANDPLAY_GATEKEEPER
data_168b898 = _vtable_for_UI2StateDecl + 0x10
void* x0_38 = UI2StateDeclTryLookup("m_Gatekeeper")

if (x0_38 == 0)
    (*data_168b898)(&data_168b898, "m_Gatekeeper")
    uint32_t x10_91 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168b898
    *UI2StateDeclI_counter = x10_91 + 1
    data_168b8a0 = x11_39
else
    (*data_168b898)(&data_168b898, *(x0_38 + 0x10))

data_168b8b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("m_Gatekeeper")
int128_t v0_12
int128_t v1_8

if (x0_39 == 0)
    v0_12, v1_8 = (*data_168b8b0)(&data_168b8b0, "m_Gatekeeper")
    uint32_t x10_93 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168b8b0
    *UI2StateDeclI_counter = x10_93 + 1
    data_168b8b8 = x11_40
else
    v0_12, v1_8 = (*data_168b8b0)(&data_168b8b0, *(x0_39 + 0x10))

v0_12.q = 0x500000f13
data_11401d0
data_168b8c8 = 0x500000f13
__builtin_memcpy(&data_168bee8, 
    "\x10\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"bd\x9e\x75\x00\x00\x00\x00\x00", 
    0x20)
v1_8 = data_1140200
data_168bf08 = data_11401f0
data_168bf98 = 2
data_168b8d0 = 0xa4
data_168b8d8 = Gatekeeper
data_168bf88 = v4
data_168bf18 = v1_8
data_168bfa0 = 0x5c
data_168bfa8 = 0xffffffff
data_168bfe0 = "hunting_lodge"
data_168bfe8 = 8
data_168bff0 = TEXTURE_CARD_GEN_MENAGERIE_HUNTINGLODGE
data_168c018 = _vtable_for_UI2StateDecl + 0x10
data_168bff8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HUNTING_LODGE
void* x0_40 = UI2StateDeclTryLookup("m_Hunting_Lodge")

if (x0_40 == 0)
    (*data_168c018)(&data_168c018, "m_Hunting_Lodge")
    uint32_t x10_96 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168c018
    *UI2StateDeclI_counter = x10_96 + 1
    data_168c020 = x11_41
else
    (*data_168c018)(&data_168c018, *(x0_40 + 0x10))

data_168c030 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("m_Hunting_Lodge")

if (x0_41 == 0)
    (*data_168c030)(&data_168c030, "m_Hunting_Lodge")
    uint32_t x10_98 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168c030
    *UI2StateDeclI_counter = x10_98 + 1
    data_168c038 = x11_42
else
    (*data_168c030)(&data_168c030, *(x0_41 + 0x10))

data_168c048 = 0x500000f14
data_168c050 = 4
data_168c058 = HuntingLodge
__builtin_memcpy(&data_168c708, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_168c728 = 0xffffffff
data_168c760 = "kiln"
data_168c768 = 0xd
data_168c770 = TEXTURE_CARD_GEN_MENAGERIE_KILN
data_168c798 = _vtable_for_UI2StateDecl + 0x10
data_168c778 = SOUND_SOUND_CARDS_FX_LANDPLAY_KILN
void* x0_42 = UI2StateDeclTryLookup("m_Kiln")

if (x0_42 == 0)
    (*data_168c798)(&data_168c798, "m_Kiln")
    uint32_t x10_101 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168c798
    *UI2StateDeclI_counter = x10_101 + 1
    data_168c7a0 = x11_43
else
    (*data_168c798)(&data_168c798, *(x0_42 + 0x10))

data_168c7b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("m_Kiln")

if (x0_43 == 0)
    (*data_168c7b0)(&data_168c7b0, "m_Kiln")
    uint32_t x10_103 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168c7b0
    *UI2StateDeclI_counter = x10_103 + 1
    data_168c7b8 = x11_44
else
    (*data_168c7b0)(&data_168c7b0, *(x0_43 + 0x10))

data_168c7d0 = 4
data_168c7d8 = Kiln
data_168cde8 = 0x21
__builtin_memcpy(&data_168ce88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"11\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_168c7c8 = 0x500000f15
data_168cea8 = 0xffffffff
data_168cee0 = "livery"
data_168cee8 = 0x10
data_168cef0 = TEXTURE_CARD_GEN_MENAGERIE_LIVERY
data_168cf18 = _vtable_for_UI2StateDecl + 0x10
data_168cef8 = SOUND_SOUND_CARDS_FX_LANDPLAY_LIVERY
void* x0_44 = UI2StateDeclTryLookup("m_Livery")

if (x0_44 == 0)
    (*data_168cf18)(&data_168cf18, "m_Livery")
    uint32_t x10_106 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168cf18
    *UI2StateDeclI_counter = x10_106 + 1
    data_168cf20 = x11_45
else
    (*data_168cf18)(&data_168cf18, *(x0_44 + 0x10))

data_168cf30 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("m_Livery")

if (x0_45 == 0)
    (*data_168cf30)(&data_168cf30, "m_Livery")
    uint32_t x10_108 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168cf30
    *UI2StateDeclI_counter = x10_108 + 1
    data_168cf38 = x11_46
else
    (*data_168cf30)(&data_168cf30, *(x0_45 + 0x10))

int128_t v0_13
v0_13.q = 0
v0_13:8.q = 0
data_168cf50 = 4
data_168cf58 = Livery
__builtin_memset(&data_168cf68, 0, 0x20)
data_168cf78:8.d = 0xf46
__builtin_memset(&data_168cf88, 0, 0xa0)
data_168cf68 = 0xc
data_168d568 = 1
__builtin_memcpy(&data_168d608, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_168cf48 = 0x500000f16
data_168d660 = "mastermind"
__builtin_memset(&data_168d640, 0, 0x20)
__builtin_memcpy(&data_168d620, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_168d668 = 0xf
data_168d670 = TEXTURE_CARD_GEN_MENAGERIE_MASTERMIND
data_168d698 = _vtable_for_UI2StateDecl + 0x10
data_168d678 = SOUND_SOUND_CARDS_FX_LANDPLAY_MASTERMIND
void* x0_46 = UI2StateDeclTryLookup("m_Mastermind")

if (x0_46 == 0)
    (*data_168d698)(&data_168d698, "m_Mastermind")
    uint32_t x10_111 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168d698
    *UI2StateDeclI_counter = x10_111 + 1
    data_168d6a0 = x11_47
else
    (*data_168d698)(&data_168d698, *(x0_46 + 0x10))

data_168d6b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("m_Mastermind")

if (x0_47 == 0)
    (*data_168d6b0)(&data_168d6b0, "m_Mastermind")
    uint32_t x10_113 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168d6b0
    *UI2StateDeclI_counter = x10_113 + 1
    data_168d6b8 = x11_48
else
    (*data_168d6b0)(&data_168d6b0, *(x0_47 + 0x10))

data_168d6d0 = 0x84
data_168d6d8 = Mastermind
data_168dce8 = 1
__builtin_memcpy(&data_168dd88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"11\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_168d6c8 = 0x500000f17
data_168dda8 = 0xffffffff
data_168dde0 = "paddock"
data_168dde8 = 0xd
data_168ddf0 = TEXTURE_CARD_GEN_MENAGERIE_PADDOCK
data_168de18 = _vtable_for_UI2StateDecl + 0x10
data_168ddf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_PADDOCK
void* x0_48 = UI2StateDeclTryLookup("m_Paddock")

if (x0_48 == 0)
    (*data_168de18)(&data_168de18, "m_Paddock")
    uint32_t x10_116 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168de18
    *UI2StateDeclI_counter = x10_116 + 1
    data_168de20 = x11_49
else
    (*data_168de18)(&data_168de18, *(x0_48 + 0x10))

data_168de30 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("m_Paddock")
int128_t v1_12
int128_t v5

if (x0_49 == 0)
    v1_12, v5 = (*data_168de30)(&data_168de30, "m_Paddock")
    uint32_t x10_118 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168de30
    *UI2StateDeclI_counter = x10_118 + 1
    data_168de38 = x11_50
else
    v1_12, v5 = (*data_168de30)(&data_168de30, *(x0_49 + 0x10))
v1_12.q = 0
v1_12:8.q = 0
data_168de50 = 4
data_168de58 = Paddock
__builtin_memset(&data_168de68, 0, 0x20)
data_168de68 = 0xc
data_168de78:8.d = 0xf46
__builtin_memset(&data_168de88, 0, 0xa0)
v1_12 = data_1140210
data_168de48 = 0x500000f18
__builtin_memset(&data_168e4b8, 0, 0x50)
__builtin_memcpy(&data_168e508, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"2a\x00\x00\x00\x20\x00\x00\x00", 
    0x20)
data_168e4a8 = v1_12
data_168e528 = 0xffffffff
data_168e560 = "sanctuary"
data_168e568 = 8
data_168e570 = TEXTURE_CARD_GEN_MENAGERIE_SANCTUARY
data_168e598 = _vtable_for_UI2StateDecl + 0x10
data_168e578 = SOUND_SOUND_CARDS_FX_LANDPLAY_SANCTUARY
void* x0_50 = UI2StateDeclTryLookup("m_Sanctuary")

if (x0_50 == 0)
    (*data_168e598)(&data_168e598, "m_Sanctuary")
    uint32_t x10_121 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168e598
    *UI2StateDeclI_counter = x10_121 + 1
    data_168e5a0 = x11_51
else
    (*data_168e598)(&data_168e598, *(x0_50 + 0x10))

data_168e5b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("m_Sanctuary")

if (x0_51 == 0)
    (*data_168e5b0)(&data_168e5b0, "m_Sanctuary")
    uint32_t x10_123 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168e5b0
    *UI2StateDeclI_counter = x10_123 + 1
    data_168e5b8 = x11_52
else
    (*data_168e5b0)(&data_168e5b0, *(x0_51 + 0x10))

int128_t v0_14
v0_14.q = 0x500000f19
data_168e5c8 = 0x500000f19
data_168e5d0 = 4
data_168e5d8 = Sanctuary
__builtin_memcpy(&data_168ec88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"0b\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_168eca8 = 0xffffffff
data_168ece0 = "fisherman"
data_168ece8 = 0x27
data_168ecf0 = TEXTURE_CARD_GEN_MENAGERIE_FISHERMAN
data_168ecf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_FISHERMAN
data_168ed00 = SOUND_SOUND_CARDS_FX_GAIN_FISHERMAN_COMBO
data_168ed18 = _vtable_for_UI2StateDecl + 0x10
void* x0_52 = UI2StateDeclTryLookup("m_Fisherman")

if (x0_52 == 0)
    (*data_168ed18)(&data_168ed18, "m_Fisherman")
    uint32_t x10_125 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168ed18
    *UI2StateDeclI_counter = x10_125 + 1
    data_168ed20 = x11_53
else
    (*data_168ed18)(&data_168ed18, *(x0_52 + 0x10))

data_168ed30 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("m_Fisherman")

if (x0_53 == 0)
    (*data_168ed30)(&data_168ed30, "m_Fisherman")
    uint32_t x10_127 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168ed30
    *UI2StateDeclI_counter = x10_127 + 1
    data_168ed38 = x11_54
else
    (*data_168ed30)(&data_168ed30, *(x0_53 + 0x10))

__builtin_memset(&data_168ed68, 0, 0xc0)
data_168ed50 = 4
data_168ed58 = Fisherman
data_168ed68 = 3
data_168ed78:8 = Fisherman_Cost
__builtin_memcpy(&data_168f408, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"12\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_168ed48 = 0x8000500000f1a
data_168f428 = 0xffffffff
data_168f460 = "destrier"
data_168f468 = 0x10
data_168f470 = TEXTURE_CARD_GEN_MENAGERIE_DESTERIER
data_168f498 = _vtable_for_UI2StateDecl + 0x10
data_168f478 = SOUND_SOUND_CARDS_FX_LANDPLAY_DESTRIER
void* x0_54 = UI2StateDeclTryLookup("m_Destrier")

if (x0_54 == 0)
    (*data_168f498)(&data_168f498, "m_Destrier")
    uint32_t x10_130 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168f498
    *UI2StateDeclI_counter = x10_130 + 1
    data_168f4a0 = x11_55
else
    (*data_168f498)(&data_168f498, *(x0_54 + 0x10))

data_168f4b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("m_Destrier")

if (x0_55 == 0)
    (*data_168f4b0)(&data_168f4b0, "m_Destrier")
    uint32_t x10_132 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168f4b0
    *UI2StateDeclI_counter = x10_132 + 1
    data_168f4b8 = x11_56
else
    (*data_168f4b0)(&data_168f4b0, *(x0_55 + 0x10))

__builtin_memset(&data_168f4e8, 0, 0xc0)
data_168f4d0 = 4
data_168f4d8 = Destrier
data_168f4e8 = 3
data_168fb98 = 2
data_168f4f8:8 = Destrier_Cost
data_168fb88 = v4
data_168f4c8 = 0x8000600000f1b
data_168fba0 = 0x10010
data_168fba8 = 0xffffffff
data_168fbe0 = "wayfarer"
data_168fbe8 = 0x10
data_168fbf0 = TEXTURE_CARD_GEN_MENAGERIE_WAYFARER
data_168fc18 = _vtable_for_UI2StateDecl + 0x10
data_168fbf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_WAYFARER
void* x0_56 = UI2StateDeclTryLookup("m_Wayfarer")

if (x0_56 == 0)
    (*data_168fc18)(&data_168fc18, "m_Wayfarer")
    uint32_t x10_135 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168fc18
    *UI2StateDeclI_counter = x10_135 + 1
    data_168fc20 = x11_57
else
    (*data_168fc18)(&data_168fc18, *(x0_56 + 0x10))

data_168fc30 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("m_Wayfarer")

if (x0_57 == 0)
    (*data_168fc30)(&data_168fc30, "m_Wayfarer")
    uint32_t x10_137 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_168fc30
    *UI2StateDeclI_counter = x10_137 + 1
    data_168fc38 = x11_58
else
    (*data_168fc30)(&data_168fc30, *(x0_57 + 0x10))

__builtin_memset(&data_168fc68, 0, 0xc0)
data_168fc50 = 4
data_168fc58 = Wayfarer
data_168fc68 = 3
data_168fc48 = 0x8000600000f1c
data_168fc78:8 = Wayfarer_Cost
__builtin_memcpy(&data_1690308, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1690328 = 0xffffffff
data_1690360 = "animal_fair"
data_1690368 = 8
data_1690370 = TEXTURE_CARD_GEN_MENAGERIE_ANIMALFAIR
data_1690398 = _vtable_for_UI2StateDecl + 0x10
data_1690378 = SOUND_SOUND_CARDS_FX_LANDPLAY_ANIMAL_FAIR
void* x0_58 = UI2StateDeclTryLookup("m_Animal_Fair")

if (x0_58 == 0)
    (*data_1690398)(&data_1690398, "m_Animal_Fair")
    uint32_t x10_140 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1690398
    *UI2StateDeclI_counter = x10_140 + 1
    data_16903a0 = x11_59
else
    (*data_1690398)(&data_1690398, *(x0_58 + 0x10))

data_16903b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("m_Animal_Fair")
int128_t v1_16
int128_t v2_4
int128_t v4_3

if (x0_59 == 0)
    v1_16, v2_4, v4_3 = (*data_16903b0)(&data_16903b0, "m_Animal_Fair")
    uint32_t x10_142 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16903b0
    *UI2StateDeclI_counter = x10_142 + 1
    data_16903b8 = x11_60
else
    v1_16, v2_4, v4_3 = (*data_16903b0)(&data_16903b0, *(x0_59 + 0x10))
data_16903d0 = 4
data_16903d8 = AnimalFair
v1_16.q = 0
v1_16:8.q = 0
data_16903e8 = zx.o(0)
data_16903e8.d = 4
__builtin_memset(&data_16903f8, 0, 0x20)
data_16903f8:8 = AnimalFair_OnPayCost
__builtin_memset(&data_1690418, 0, 0x90)
v1_16 = data_1140270
v2_4 = data_1140280
data_16903c8 = 0x8000700000f1d
data_1690a38 = v2_4
data_1690a28 = v1_16
data_1690488:8 = AnimalFair_OnPayCost_Test
__builtin_memcpy(&data_1690a88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
__builtin_memset(&data_1690a48, 0, 0x40)
data_1690ae0 = "delay"
data_1690ae8 = 0x1b
data_1690af0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_1
data_1690b18 = _vtable_for_UI2StateDecl + 0x10
data_1690af8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_DELAY
void* x0_60 = UI2StateDeclTryLookup("m_Delay")

if (x0_60 == 0)
    (*data_1690b18)(&data_1690b18, "m_Delay")
    uint32_t x10_145 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1690b18
    *UI2StateDeclI_counter = x10_145 + 1
    data_1690b20 = x11_61
else
    (*data_1690b18)(&data_1690b18, *(x0_60 + 0x10))

data_1690b30 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("m_Delay")

if (x0_61 == 0)
    (*data_1690b30)(&data_1690b30, "m_Delay")
    uint32_t x10_147 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1690b30
    *UI2StateDeclI_counter = x10_147 + 1
    data_1690b38 = x11_62
else
    (*data_1690b30)(&data_1690b30, *(x0_61 + 0x10))

data_1690b48 = 0xf1e
data_1691218 = 0xa
data_1690b50 = 0x400
data_1690b58 = Delay
data_1140310
data_1691168 = 1
int128_t v0_15 = data_11402d0
data_1691208 = v4
data_16911a8 = v0_15
__builtin_memset(&data_16911b8, 0, 0x50)
data_1691220 = 0x100000000
data_1691260 = "desperation"
data_1691268 = 0x2a
data_1691270 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_4
data_1691298 = _vtable_for_UI2StateDecl + 0x10
data_1691278 = SOUND_SOUND_CARDS_FX_BUY_EVENT_DESPERATION
void* x0_62 = UI2StateDeclTryLookup("m_Desperation")

if (x0_62 == 0)
    (*data_1691298)(&data_1691298, "m_Desperation")
    uint32_t x10_150 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1691298
    *UI2StateDeclI_counter = x10_150 + 1
    data_16912a0 = x11_63
else
    (*data_1691298)(&data_1691298, *(x0_62 + 0x10))

data_16912b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("m_Desperation")
int128_t v0_16
int128_t v2_6

if (x0_63 == 0)
    v0_16, v2_6 = (*data_16912b0)(&data_16912b0, "m_Desperation")
    uint32_t x10_152 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16912b0
    *UI2StateDeclI_counter = x10_152 + 1
    data_16912b8 = x11_64
else
    v0_16, v2_6 = (*data_16912b0)(&data_16912b0, *(x0_63 + 0x10))
v0_16.q = 4
data_1691998 = 4
data_1140350
data_16912c8 = 0xf1f
__builtin_memset(&data_1691948, 0, 0x20)
data_1140370
data_1140380
data_16912d0 = 0x400
data_16912d8 = Desperation
__builtin_memset(&data_1691968, 0, 0x20)
v0_16 = data_1140330
int128_t v1_17 = data_1140340
data_1691988 = v4
data_1691928 = v0_16
data_1691938 = v1_17
data_16919a0 = 0x100000000
data_16919e0 = "gamble"
data_16919e8 = 0x2a
data_16919f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_8
data_1691a18 = _vtable_for_UI2StateDecl + 0x10
data_16919f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_GAMBLE
void* x0_64 = UI2StateDeclTryLookup("m_Gamble")

if (x0_64 == 0)
    (*data_1691a18)(&data_1691a18, "m_Gamble")
    uint32_t x10_155 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1691a18
    *UI2StateDeclI_counter = x10_155 + 1
    data_1691a20 = x11_65
else
    (*data_1691a18)(&data_1691a18, *(x0_64 + 0x10))

data_1691a30 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("m_Gamble")

if (x0_65 == 0)
    (*data_1691a30)(&data_1691a30, "m_Gamble")
    uint32_t x10_157 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1691a30
    *UI2StateDeclI_counter = x10_157 + 1
    data_1691a38 = x11_66
else
    (*data_1691a30)(&data_1691a30, *(x0_65 + 0x10))

data_11403c0
data_1691a48 = 0x200000f20
data_11403e0
data_16920a8 = data_1140390
data_1692118 = 2
__builtin_memset(&data_16920b8, 0, 0x50)
data_1691a50 = 0x400
data_1691a58 = Gamble
data_1692108 = v4
data_1692160 = "pursue"
data_1692120 = 0x100000000
data_1692168 = 0x2a
data_1692170 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_11
data_1692198 = _vtable_for_UI2StateDecl + 0x10
data_1692178 = SOUND_SOUND_CARDS_FX_BUY_EVENT_PURSUE
void* x0_66 = UI2StateDeclTryLookup("m_Pursue")

if (x0_66 == 0)
    (*data_1692198)(&data_1692198, "m_Pursue")
    uint32_t x10_160 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1692198
    *UI2StateDeclI_counter = x10_160 + 1
    data_16921a0 = x11_67
else
    (*data_1692198)(&data_1692198, *(x0_66 + 0x10))

data_16921b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("m_Pursue")
int128_t v0_17
int128_t v2_8

if (x0_67 == 0)
    v0_17, v2_8 = (*data_16921b0)(&data_16921b0, "m_Pursue")
    uint32_t x10_162 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16921b0
    *UI2StateDeclI_counter = x10_162 + 1
    data_16921b8 = x11_68
else
    v0_17, v2_8 = (*data_16921b0)(&data_16921b0, *(x0_67 + 0x10))
v0_17.q = 0x200000f21
data_16921c8 = 0x200000f21
data_1140410
data_1692898 = 0x18
__builtin_memset(&data_1692848, 0, 0x20)
data_1140430
data_1140440
data_16921d0 = 0x400
data_16921d8 = Pursue
__builtin_memset(&data_1692868, 0, 0x20)
v0_17 = data_11403f0
int128_t v1_19 = data_1140400
data_1692888 = v4
data_1692828 = v0_17
data_1692838 = v1_19
data_16928a0 = 0x100000000
data_16928e0 = "ride"
data_16928e8 = 6
data_16928f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_14
data_1692918 = _vtable_for_UI2StateDecl + 0x10
data_16928f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_RIDE
void* x0_68 = UI2StateDeclTryLookup("m_Ride")

if (x0_68 == 0)
    (*data_1692918)(&data_1692918, "m_Ride")
    uint32_t x10_165 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1692918
    *UI2StateDeclI_counter = x10_165 + 1
    data_1692920 = x11_69
else
    (*data_1692918)(&data_1692918, *(x0_68 + 0x10))

data_1692930 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("m_Ride")
int128_t v0_18
int128_t v2_9
int128_t v4_4

if (x0_69 == 0)
    v0_18, v2_9, v4_4 = (*data_1692930)(&data_1692930, "m_Ride")
    uint32_t x10_167 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1692930
    *UI2StateDeclI_counter = x10_167 + 1
    data_1692938 = x11_70
else
    v0_18, v2_9, v4_4 = (*data_1692930)(&data_1692930, *(x0_69 + 0x10))
v0_18.q = 0
v0_18:8.q = 0
__builtin_memset(&data_1692968, 0, 0x20)
data_1692968 = 0xc
__builtin_memset(&data_1692988, 0, 0xa0)
v0_18 = data_1140450
v2_9 = data_1140460
data_1692948 = 0x200000f22
data_1692fb8 = v2_9
data_1692fa8 = v0_18
data_1692950 = 0x400
data_1692958 = Ride
data_1692978:8.d = 0xf46
data_1692a18:4.d = 0
__builtin_memcpy(&data_1693008, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
__builtin_memset(&data_1692fc8, 0, 0x40)
data_1693060 = "toil"
data_1693068 = 0x13
data_1693070 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_17
data_1693098 = _vtable_for_UI2StateDecl + 0x10
data_1693078 = SOUND_SOUND_CARDS_FX_BUY_EVENT_TOIL
void* x0_70 = UI2StateDeclTryLookup("m_Toil")

if (x0_70 == 0)
    (*data_1693098)(&data_1693098, "m_Toil")
    uint32_t x10_170 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1693098
    *UI2StateDeclI_counter = x10_170 + 1
    data_16930a0 = x11_71
else
    (*data_1693098)(&data_1693098, *(x0_70 + 0x10))

data_16930b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("m_Toil")

if (x0_71 == 0)
    (*data_16930b0)(&data_16930b0, "m_Toil")
    uint32_t x10_172 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16930b0
    *UI2StateDeclI_counter = x10_172 + 1
    data_16930b8 = x11_72
else
    (*data_16930b0)(&data_16930b0, *(x0_71 + 0x10))

data_11404e0
data_16930c8 = 0x200000f23
data_1693728 = data_11404b0
__builtin_memset(&data_1693738, 0, 0x50)
data_16930d0 = 0x400
data_16930d8 = Toil
__builtin_memcpy(&data_1693788, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16937e0 = "enhance"
data_16937a0 = 0x100000000
data_16937e8 = 0x2a
data_16937f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_20
data_1693818 = _vtable_for_UI2StateDecl + 0x10
data_16937f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_ENHANCE
void* x0_72 = UI2StateDeclTryLookup("m_Enhance")

if (x0_72 == 0)
    (*data_1693818)(&data_1693818, "m_Enhance")
    uint32_t x10_175 = *UI2StateDeclI_counter
    uint64_t x11_73 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1693818
    *UI2StateDeclI_counter = x10_175 + 1
    data_1693820 = x11_73
else
    (*data_1693818)(&data_1693818, *(x0_72 + 0x10))

data_1693830 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("m_Enhance")

if (x0_73 == 0)
    (*data_1693830)(&data_1693830, "m_Enhance")
    uint32_t x10_177 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1693830
    *UI2StateDeclI_counter = x10_177 + 1
    data_1693838 = x11_74
else
    (*data_1693830)(&data_1693830, *(x0_73 + 0x10))

data_1140540
data_1693848 = 0x300000f24
data_1140560
data_1693ea8 = data_1140510
data_1693f18 = 0x11
__builtin_memset(&data_1693eb8, 0, 0x50)
data_1693850 = 0x400
data_1693858 = Enhance
data_1693f08 = v4
data_1693f60 = "march"
data_1693f20 = 0x100000000
data_1693f68 = 0x1b
data_1693f70 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_24
data_1693f98 = _vtable_for_UI2StateDecl + 0x10
data_1693f78 = SOUND_SOUND_CARDS_FX_BUY_EVENT_MARCH
void* x0_74 = UI2StateDeclTryLookup("m_March")

if (x0_74 == 0)
    (*data_1693f98)(&data_1693f98, "m_March")
    uint32_t x10_180 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1693f98
    *UI2StateDeclI_counter = x10_180 + 1
    data_1693fa0 = x11_75
else
    (*data_1693f98)(&data_1693f98, *(x0_74 + 0x10))

data_1693fb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("m_March")

if (x0_75 == 0)
    (*data_1693fb0)(&data_1693fb0, "m_March")
    uint32_t x10_182 = *UI2StateDeclI_counter
    uint64_t x11_76 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1693fb0
    *UI2StateDeclI_counter = x10_182 + 1
    data_1693fb8 = x11_76
else
    (*data_1693fb0)(&data_1693fb0, *(x0_75 + 0x10))

data_11405a0
data_1693fc8 = 0x300000f25
data_11405c0
data_1694628 = data_1140570
data_1694698 = 1
__builtin_memset(&data_1694638, 0, 0x50)
data_1693fd0 = 0x400
data_1693fd8 = March
data_1694688 = v4
data_16946e0 = "transport"
data_16946a0 = 0x100000000
data_16946e8 = 6
data_16946f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_27
data_1694718 = _vtable_for_UI2StateDecl + 0x10
data_16946f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_TRANSPORT
void* x0_76 = UI2StateDeclTryLookup("m_Transport")

if (x0_76 == 0)
    (*data_1694718)(&data_1694718, "m_Transport")
    uint32_t x10_185 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1694718
    *UI2StateDeclI_counter = x10_185 + 1
    data_1694720 = x11_77
else
    (*data_1694718)(&data_1694718, *(x0_76 + 0x10))

data_1694730 = _vtable_for_UI2StateDecl + 0x10
void* x0_77 = UI2StateDeclTryLookup("m_Transport")

if (x0_77 == 0)
    (*data_1694730)(&data_1694730, "m_Transport")
    uint32_t x10_187 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1694730
    *UI2StateDeclI_counter = x10_187 + 1
    data_1694738 = x11_78
else
    (*data_1694730)(&data_1694730, *(x0_77 + 0x10))

data_1140600
data_1694748 = 0x300000f26
data_1140620
data_1694da8 = data_11405d0
data_1694e18 = 3
__builtin_memset(&data_1694db8, 0, 0x50)
data_1694750 = 0x400
data_1694758 = Transport
data_1694e08 = v4
data_1694e60 = "banish"
data_1694e20 = 0x100000000
data_1694e68 = 0x14
data_1694e70 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_30
data_1694e98 = _vtable_for_UI2StateDecl + 0x10
data_1694e78 = SOUND_SOUND_CARDS_FX_BUY_EVENT_BANISH
void* x0_78 = UI2StateDeclTryLookup("m_Banish")

if (x0_78 == 0)
    (*data_1694e98)(&data_1694e98, "m_Banish")
    uint32_t x10_190 = *UI2StateDeclI_counter
    uint64_t x11_79 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1694e98
    *UI2StateDeclI_counter = x10_190 + 1
    data_1694ea0 = x11_79
else
    (*data_1694e98)(&data_1694e98, *(x0_78 + 0x10))

data_1694eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_79 = UI2StateDeclTryLookup("m_Banish")

if (x0_79 == 0)
    (*data_1694eb0)(&data_1694eb0, "m_Banish")
    uint32_t x10_192 = *UI2StateDeclI_counter
    uint64_t x11_80 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1694eb0
    *UI2StateDeclI_counter = x10_192 + 1
    data_1694eb8 = x11_80
else
    (*data_1694eb0)(&data_1694eb0, *(x0_79 + 0x10))

int128_t v0_19
v0_19.q = 0x400000f27
data_1694ec8 = 0x400000f27
data_1694ed0 = 0x400
data_1694ed8 = Banish
__builtin_memcpy(&data_1695588, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16955e0 = "bargain"
data_16955a0 = 0x100000000
data_16955e8 = 0x14
data_16955f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_33
data_1695618 = _vtable_for_UI2StateDecl + 0x10
data_16955f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_BARGAIN
void* x0_80 = UI2StateDeclTryLookup("m_Bargain")

if (x0_80 == 0)
    (*data_1695618)(&data_1695618, "m_Bargain")
    uint32_t x10_195 = *UI2StateDeclI_counter
    uint64_t x11_81 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1695618
    *UI2StateDeclI_counter = x10_195 + 1
    data_1695620 = x11_81
else
    (*data_1695618)(&data_1695618, *(x0_80 + 0x10))

data_1695630 = _vtable_for_UI2StateDecl + 0x10
void* x0_81 = UI2StateDeclTryLookup("m_Bargain")

if (x0_81 == 0)
    (*data_1695630)(&data_1695630, "m_Bargain")
    uint32_t x10_197 = *UI2StateDeclI_counter
    uint64_t x11_82 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1695630
    *UI2StateDeclI_counter = x10_197 + 1
    data_1695638 = x11_82
else
    (*data_1695630)(&data_1695630, *(x0_81 + 0x10))

__builtin_memset(&data_1695668, 0, 0xc0)
data_1695650 = 0x400
data_1695658 = Bargain
data_1695668 = 0xc
data_1695678:8.d = 0xf46
data_1695718:4.d = 0
__builtin_memcpy(&data_1695d08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1695648 = 0x400000f28
data_1695d60 = "invest"
data_1695d68 = 6
data_1695d70 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_37
data_1695d98 = _vtable_for_UI2StateDecl + 0x10
data_1695d78 = SOUND_SOUND_CARDS_FX_BUY_EVENT_INVEST
void* x0_82 = UI2StateDeclTryLookup("m_Invest")

if (x0_82 == 0)
    (*data_1695d98)(&data_1695d98, "m_Invest")
    uint32_t x10_200 = *UI2StateDeclI_counter
    uint64_t x11_83 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1695d98
    *UI2StateDeclI_counter = x10_200 + 1
    data_1695da0 = x11_83
else
    (*data_1695d98)(&data_1695d98, *(x0_82 + 0x10))

data_1695db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_83 = UI2StateDeclTryLookup("m_Invest")

if (x0_83 == 0)
    (*data_1695db0)(&data_1695db0, "m_Invest")
    uint32_t x10_202 = *UI2StateDeclI_counter
    uint64_t x11_84 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1695db0
    *UI2StateDeclI_counter = x10_202 + 1
    data_1695db8 = x11_84
else
    (*data_1695db0)(&data_1695db0, *(x0_83 + 0x10))

data_1695dd0 = 0x400
data_1695dd8 = Invest
data_1695dc8 = 0x400000f29
int128_t v0_20
v0_20.q = 0
v0_20:8.q = 0
data_1695df0 = zx.o(0)
data_1695df0:4.d = 4
__builtin_memset(&data_1695e00, 0, 0xa8)
data_1695e00 = Invest_OnOpponentGainOrInvest
data_1695e90 = Invest_OnGainOrInvest_Test
data_1695de8 = 0x200000006
data_1695e9c = 0x100000002
__builtin_memset(&data_1695eb0, 0, 0xb8)
data_1695ea8 = 0x200000006
data_1695eb0:4.d = 5
data_1695ec0 = Invest_OnOpponentGainOrInvest
data_1695f50 = Invest_OnGainOrInvest_Test
data_16963e8 = 1
data_1695f5c = 0x100000002
__builtin_memcpy(&data_1696488, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16964e0 = "seize_the_day"
data_16964e8 = 0x13
data_16964f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_40
data_16964f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_SEIZE_THE_DAY
data_1696518 = _vtable_for_UI2StateDecl + 0x10
void* x0_84 = UI2StateDeclTryLookup("m_Seize_the_Day")

if (x0_84 == 0)
    (*data_1696518)(&data_1696518, "m_Seize_the_Day")
    uint32_t x10_204 = *UI2StateDeclI_counter
    uint64_t x11_85 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1696518
    *UI2StateDeclI_counter = x10_204 + 1
    data_1696520 = x11_85
else
    (*data_1696518)(&data_1696518, *(x0_84 + 0x10))

data_1696530 = _vtable_for_UI2StateDecl + 0x10
void* x0_85 = UI2StateDeclTryLookup("m_Seize_the_Day")

if (x0_85 == 0)
    (*data_1696530)(&data_1696530, "m_Seize_the_Day")
    uint32_t x10_206 = *UI2StateDeclI_counter
    uint64_t x11_86 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1696530
    *UI2StateDeclI_counter = x10_206 + 1
    data_1696538 = x11_86
else
    (*data_1696530)(&data_1696530, *(x0_85 + 0x10))

data_1696550 = 0x400
data_1696558 = SeizeTheDay
__builtin_memcpy(&data_1696c08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1696548 = 0x400000f2a
data_1696c60 = "commerce"
data_1696c68 = 0x2a
data_1696c70 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_43
data_1696c98 = _vtable_for_UI2StateDecl + 0x10
data_1696c78 = SOUND_SOUND_CARDS_FX_BUY_EVENT_COMMERCE
void* x0_86 = UI2StateDeclTryLookup("m_Commerce")

if (x0_86 == 0)
    (*data_1696c98)(&data_1696c98, "m_Commerce")
    uint32_t x10_209 = *UI2StateDeclI_counter
    uint64_t x11_87 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1696c98
    *UI2StateDeclI_counter = x10_209 + 1
    data_1696ca0 = x11_87
else
    (*data_1696c98)(&data_1696c98, *(x0_86 + 0x10))

data_1696cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_87 = UI2StateDeclTryLookup("m_Commerce")

if (x0_87 == 0)
    (*data_1696cb0)(&data_1696cb0, "m_Commerce")
    uint32_t x10_211 = *UI2StateDeclI_counter
    uint64_t x11_88 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1696cb0
    *UI2StateDeclI_counter = x10_211 + 1
    data_1696cb8 = x11_88
else
    (*data_1696cb0)(&data_1696cb0, *(x0_87 + 0x10))

data_1140660
data_1696cc8 = 0x500000f2b
data_1140680
data_1697328 = data_1140630
data_1697398 = 9
__builtin_memset(&data_1697338, 0, 0x50)
data_1696cd0 = 0x400
data_1696cd8 = Commerce
data_1697388 = v4
data_16973e0 = "demand"
data_16973a0 = 0x100000000
data_16973e8 = 0x14
data_16973f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_46
data_1697418 = _vtable_for_UI2StateDecl + 0x10
data_16973f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_DEMAND
void* x0_88 = UI2StateDeclTryLookup("m_Demand")

if (x0_88 == 0)
    (*data_1697418)(&data_1697418, "m_Demand")
    uint32_t x10_214 = *UI2StateDeclI_counter
    uint64_t x11_89 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1697418
    *UI2StateDeclI_counter = x10_214 + 1
    data_1697420 = x11_89
else
    (*data_1697418)(&data_1697418, *(x0_88 + 0x10))

data_1697430 = _vtable_for_UI2StateDecl + 0x10
void* x0_89 = UI2StateDeclTryLookup("m_Demand")

if (x0_89 == 0)
    (*data_1697430)(&data_1697430, "m_Demand")
    uint32_t x10_216 = *UI2StateDeclI_counter
    uint64_t x11_90 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1697430
    *UI2StateDeclI_counter = x10_216 + 1
    data_1697438 = x11_90
else
    (*data_1697430)(&data_1697430, *(x0_89 + 0x10))

__builtin_memset(&data_1697468, 0, 0xc0)
data_1697450 = 0x400
data_1697458 = Demand
data_1697468 = 0xc
data_1697478:8.d = 0xf46
data_1697518:4.d = 0
__builtin_memcpy(&data_1697b08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1697448 = 0x500000f2c
data_1697b60 = "stampede"
data_1697b68 = 6
data_1697b70 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_53
data_1697b98 = _vtable_for_UI2StateDecl + 0x10
data_1697b78 = SOUND_SOUND_CARDS_FX_BUY_EVENT_STAMPEDE
void* x0_90 = UI2StateDeclTryLookup("m_Stampede")

if (x0_90 == 0)
    (*data_1697b98)(&data_1697b98, "m_Stampede")
    uint32_t x10_219 = *UI2StateDeclI_counter
    uint64_t x11_91 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1697b98
    *UI2StateDeclI_counter = x10_219 + 1
    data_1697ba0 = x11_91
else
    (*data_1697b98)(&data_1697b98, *(x0_90 + 0x10))

data_1697bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_91 = UI2StateDeclTryLookup("m_Stampede")
int128_t v0_21
int128_t v2_15
int128_t v4_5

if (x0_91 == 0)
    v0_21, v2_15, v4_5 = (*data_1697bb0)(&data_1697bb0, "m_Stampede")
    uint32_t x10_221 = *UI2StateDeclI_counter
    uint64_t x11_92 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1697bb0
    *UI2StateDeclI_counter = x10_221 + 1
    data_1697bb8 = x11_92
else
    v0_21, v2_15, v4_5 = (*data_1697bb0)(&data_1697bb0, *(x0_91 + 0x10))
v0_21.q = 0
v0_21:8.q = 0
__builtin_memset(&data_1697be8, 0, 0x20)
data_1697be8 = 0xc
__builtin_memset(&data_1697c08, 0, 0xa0)
v0_21 = data_1140690
v2_15 = data_11406a0
data_1697bc8 = 0x500000f2d
data_1698238 = v2_15
data_1698228 = v0_21
data_1697bd0 = 0x400
data_1697bd8 = Stampede
data_1697bf8:8.d = 0xf46
data_1697c98:4.d = 0
__builtin_memcpy(&data_1698288, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
__builtin_memset(&data_1698248, 0, 0x40)
data_16982e0 = "reap"
data_16982e8 = 0x14
data_16982f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_50
data_1698318 = _vtable_for_UI2StateDecl + 0x10
data_16982f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_REAP
void* x0_92 = UI2StateDeclTryLookup("m_Reap")

if (x0_92 == 0)
    (*data_1698318)(&data_1698318, "m_Reap")
    uint32_t x10_224 = *UI2StateDeclI_counter
    uint64_t x11_93 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1698318
    *UI2StateDeclI_counter = x10_224 + 1
    data_1698320 = x11_93
else
    (*data_1698318)(&data_1698318, *(x0_92 + 0x10))

data_1698330 = _vtable_for_UI2StateDecl + 0x10
void* x0_93 = UI2StateDeclTryLookup("m_Reap")

if (x0_93 == 0)
    (*data_1698330)(&data_1698330, "m_Reap")
    uint32_t x10_226 = *UI2StateDeclI_counter
    uint64_t x11_94 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1698330
    *UI2StateDeclI_counter = x10_226 + 1
    data_1698338 = x11_94
else
    (*data_1698330)(&data_1698330, *(x0_93 + 0x10))

data_1698a08 = v4
data_1698350 = 0x400
data_1698358 = Reap
data_1698968 = 1
data_1698a18 = 0xb
data_1698348 = 0x700000f2e
data_1698a20 = 0x100000000
data_1698a60 = "enclave"
data_1698a68 = 6
data_1698a70 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_56
data_1698a98 = _vtable_for_UI2StateDecl + 0x10
data_1698a78 = SOUND_SOUND_CARDS_FX_BUY_EVENT_ENCLAVE
void* x0_94 = UI2StateDeclTryLookup("m_Enclave")

if (x0_94 == 0)
    (*data_1698a98)(&data_1698a98, "m_Enclave")
    uint32_t x10_229 = *UI2StateDeclI_counter
    uint64_t x11_95 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1698a98
    *UI2StateDeclI_counter = x10_229 + 1
    data_1698aa0 = x11_95
else
    (*data_1698a98)(&data_1698a98, *(x0_94 + 0x10))

data_1698ab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_95 = UI2StateDeclTryLookup("m_Enclave")

if (x0_95 == 0)
    (*data_1698ab0)(&data_1698ab0, "m_Enclave")
    uint32_t x10_231 = *UI2StateDeclI_counter
    uint64_t x11_96 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1698ab0
    *UI2StateDeclI_counter = x10_231 + 1
    data_1698ab8 = x11_96
else
    (*data_1698ab0)(&data_1698ab0, *(x0_95 + 0x10))

data_1698ad0 = 0x400
data_1698ad8 = Enclave
__builtin_memcpy(&data_1699188, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1698ac8 = 0x800000f2f
data_16991e0 = "alliance"
data_16991e8 = 0x13
data_16991f0 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_59
data_1699218 = _vtable_for_UI2StateDecl + 0x10
data_16991f8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_ALLIANCE
void* x0_96 = UI2StateDeclTryLookup("m_Alliance")

if (x0_96 == 0)
    (*data_1699218)(&data_1699218, "m_Alliance")
    uint32_t x10_234 = *UI2StateDeclI_counter
    uint64_t x11_97 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1699218
    *UI2StateDeclI_counter = x10_234 + 1
    data_1699220 = x11_97
else
    (*data_1699218)(&data_1699218, *(x0_96 + 0x10))

data_1699230 = _vtable_for_UI2StateDecl + 0x10
void* x0_97 = UI2StateDeclTryLookup("m_Alliance")

if (x0_97 == 0)
    (*data_1699230)(&data_1699230, "m_Alliance")
    uint32_t x10_236 = *UI2StateDeclI_counter
    uint64_t x11_98 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1699230
    *UI2StateDeclI_counter = x10_236 + 1
    data_1699238 = x11_98
else
    (*data_1699230)(&data_1699230, *(x0_97 + 0x10))

data_1699250 = 0x400
data_1699258 = Alliance
__builtin_memcpy(&data_1699908, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1699248 = 0xa00000f30
data_1699960 = "populate"
data_1699968 = 0x13
data_1699970 = TEXTURE_CARD_GEN_MENAGERIE_EVENT_CARDS02_62
data_1699998 = _vtable_for_UI2StateDecl + 0x10
data_1699978 = SOUND_SOUND_CARDS_FX_BUY_EVENT_POPULATE
void* x0_98 = UI2StateDeclTryLookup("m_Populate")

if (x0_98 == 0)
    (*data_1699998)(&data_1699998, "m_Populate")
    uint32_t x10_239 = *UI2StateDeclI_counter
    uint64_t x11_99 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1699998
    *UI2StateDeclI_counter = x10_239 + 1
    data_16999a0 = x11_99
else
    (*data_1699998)(&data_1699998, *(x0_98 + 0x10))

data_16999b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_99 = UI2StateDeclTryLookup("m_Populate")

if (x0_99 == 0)
    (*data_16999b0)(&data_16999b0, "m_Populate")
    uint32_t x10_241 = *UI2StateDeclI_counter
    uint64_t x11_100 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16999b0
    *UI2StateDeclI_counter = x10_241 + 1
    data_16999b8 = x11_100
else
    (*data_16999b0)(&data_16999b0, *(x0_99 + 0x10))

data_16999d0 = 0x400
data_16999d8 = Populate
__builtin_memcpy(&data_169a088, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16999c8 = 0xa00000f31
data_169a0e0 = "way_of_the_butterfly"
data_169a0e8 = 0x28
data_169a0f0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_1
data_169a118 = _vtable_for_UI2StateDecl + 0x10
data_169a0f8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_BUTTERFLY
void* x0_100 = UI2StateDeclTryLookup("m_Butterfly")

if (x0_100 == 0)
    (*data_169a118)(&data_169a118, "m_Butterfly")
    uint32_t x10_244 = *UI2StateDeclI_counter
    uint64_t x11_101 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169a118
    *UI2StateDeclI_counter = x10_244 + 1
    data_169a120 = x11_101
else
    (*data_169a118)(&data_169a118, *(x0_100 + 0x10))

data_169a130 = _vtable_for_UI2StateDecl + 0x10
void* x0_101 = UI2StateDeclTryLookup("m_Butterfly")

if (x0_101 == 0)
    (*data_169a130)(&data_169a130, "m_Butterfly")
    uint32_t x10_246 = *UI2StateDeclI_counter
    uint64_t x11_102 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169a130
    *UI2StateDeclI_counter = x10_246 + 1
    data_169a138 = x11_102
else
    (*data_169a130)(&data_169a130, *(x0_101 + 0x10))

data_169a150 = 0x10000000
data_169a158 = WayOfTheButterfly
__builtin_memcpy(&data_169a808, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169a148 = 0x10000000000f32
data_169a860 = "way_of_the_camel"
data_169a868 = 0x2d
data_169a870 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_4
data_169a898 = _vtable_for_UI2StateDecl + 0x10
data_169a878 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_CAMEL
void* x0_102 = UI2StateDeclTryLookup("m_Camel")

if (x0_102 == 0)
    (*data_169a898)(&data_169a898, "m_Camel")
    uint32_t x10_249 = *UI2StateDeclI_counter
    uint64_t x11_103 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169a898
    *UI2StateDeclI_counter = x10_249 + 1
    data_169a8a0 = x11_103
else
    (*data_169a898)(&data_169a898, *(x0_102 + 0x10))

data_169a8b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_103 = UI2StateDeclTryLookup("m_Camel")

if (x0_103 == 0)
    (*data_169a8b0)(&data_169a8b0, "m_Camel")
    uint32_t x10_251 = *UI2StateDeclI_counter
    uint64_t x11_104 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169a8b0
    *UI2StateDeclI_counter = x10_251 + 1
    data_169a8b8 = x11_104
else
    (*data_169a8b0)(&data_169a8b0, *(x0_103 + 0x10))

data_169a8d0 = 0x10000000
data_169a8d8 = WayOfTheCamel
__builtin_memcpy(&data_169af88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169a8c8 = 0x10000000000f33
data_169afe0 = "way_of_the_chameleon"
data_169afe8 = 0x11
data_169aff0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_OF_THE_CHAMELEON_FINAL
data_169b018 = _vtable_for_UI2StateDecl + 0x10
data_169aff8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_CHAMELEON
void* x0_104 = UI2StateDeclTryLookup("m_Chameleon")

if (x0_104 == 0)
    (*data_169b018)(&data_169b018, "m_Chameleon")
    uint32_t x10_254 = *UI2StateDeclI_counter
    uint64_t x11_105 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169b018
    *UI2StateDeclI_counter = x10_254 + 1
    data_169b020 = x11_105
else
    (*data_169b018)(&data_169b018, *(x0_104 + 0x10))

data_169b030 = _vtable_for_UI2StateDecl + 0x10
void* x0_105 = UI2StateDeclTryLookup("m_Chameleon")

if (x0_105 == 0)
    (*data_169b030)(&data_169b030, "m_Chameleon")
    uint32_t x10_256 = *UI2StateDeclI_counter
    uint64_t x11_106 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169b030
    *UI2StateDeclI_counter = x10_256 + 1
    data_169b038 = x11_106
else
    (*data_169b030)(&data_169b030, *(x0_105 + 0x10))

data_169b050 = 0x10000000
data_169b058 = WayOfTheChameleon
data_169b668 = 1
__builtin_memcpy(&data_169b708, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169b048 = 0x10000000000f34
data_169b760 = "way_of_the_frog"
data_169b768 = 0x28
data_169b770 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_9
data_169b798 = _vtable_for_UI2StateDecl + 0x10
data_169b778 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_FROG
void* x0_106 = UI2StateDeclTryLookup("m_Frog")

if (x0_106 == 0)
    (*data_169b798)(&data_169b798, "m_Frog")
    uint32_t x10_259 = *UI2StateDeclI_counter
    uint64_t x11_107 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169b798
    *UI2StateDeclI_counter = x10_259 + 1
    data_169b7a0 = x11_107
else
    (*data_169b798)(&data_169b798, *(x0_106 + 0x10))

data_169b7b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_107 = UI2StateDeclTryLookup("m_Frog")

if (x0_107 == 0)
    (*data_169b7b0)(&data_169b7b0, "m_Frog")
    uint32_t x10_261 = *UI2StateDeclI_counter
    uint64_t x11_108 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169b7b0
    *UI2StateDeclI_counter = x10_261 + 1
    data_169b7b8 = x11_108
else
    (*data_169b7b0)(&data_169b7b0, *(x0_107 + 0x10))

data_169b7d0 = 0x10000000
data_169b7d8 = WayOfTheFrog
data_169bde8 = 1
__builtin_memcpy(&data_169be88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169b7c8 = 0x10000000000f35
data_169bee0 = "way_of_the_goat"
data_169bee8 = 0x28
data_169bef0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_11
data_169bf18 = _vtable_for_UI2StateDecl + 0x10
data_169bef8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_GOAT
void* x0_108 = UI2StateDeclTryLookup("m_Goat")

if (x0_108 == 0)
    (*data_169bf18)(&data_169bf18, "m_Goat")
    uint32_t x10_264 = *UI2StateDeclI_counter
    uint64_t x11_109 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169bf18
    *UI2StateDeclI_counter = x10_264 + 1
    data_169bf20 = x11_109
else
    (*data_169bf18)(&data_169bf18, *(x0_108 + 0x10))

data_169bf30 = _vtable_for_UI2StateDecl + 0x10
void* x0_109 = UI2StateDeclTryLookup("m_Goat")

if (x0_109 == 0)
    (*data_169bf30)(&data_169bf30, "m_Goat")
    uint32_t x10_266 = *UI2StateDeclI_counter
    uint64_t x11_110 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169bf30
    *UI2StateDeclI_counter = x10_266 + 1
    data_169bf38 = x11_110
else
    (*data_169bf30)(&data_169bf30, *(x0_109 + 0x10))

data_169bf50 = 0x10000000
data_169bf58 = WayOfTheGoat
__builtin_memcpy(&data_169c608, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169bf48 = 0x10000000000f36
data_169c660 = "way_of_the_horse"
data_169c668 = 0x1b
data_169c670 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_13
data_169c698 = _vtable_for_UI2StateDecl + 0x10
data_169c678 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_HORSE
void* x0_110 = UI2StateDeclTryLookup("m_Horse")

if (x0_110 == 0)
    (*data_169c698)(&data_169c698, "m_Horse")
    uint32_t x10_269 = *UI2StateDeclI_counter
    uint64_t x11_111 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169c698
    *UI2StateDeclI_counter = x10_269 + 1
    data_169c6a0 = x11_111
else
    (*data_169c698)(&data_169c698, *(x0_110 + 0x10))

data_169c6b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_111 = UI2StateDeclTryLookup("m_Horse")

if (x0_111 == 0)
    (*data_169c6b0)(&data_169c6b0, "m_Horse")
    uint32_t x10_271 = *UI2StateDeclI_counter
    uint64_t x11_112 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169c6b0
    *UI2StateDeclI_counter = x10_271 + 1
    data_169c6b8 = x11_112
else
    (*data_169c6b0)(&data_169c6b0, *(x0_111 + 0x10))

data_169c6d0 = 0x10000000
data_169c6d8 = WayOfTheHorse
__builtin_memcpy(&data_169cd88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169c6c8 = 0x10000000000f37
data_169cde0 = "way_of_the_mole"
data_169cde8 = 0x1b
data_169cdf0 = TEXTURE_CARD_GEN_MENAGERIE_MOLE_WAY
data_169ce18 = _vtable_for_UI2StateDecl + 0x10
data_169cdf8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_MOLE
void* x0_112 = UI2StateDeclTryLookup("m_Mole")

if (x0_112 == 0)
    (*data_169ce18)(&data_169ce18, "m_Mole")
    uint32_t x10_274 = *UI2StateDeclI_counter
    uint64_t x11_113 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169ce18
    *UI2StateDeclI_counter = x10_274 + 1
    data_169ce20 = x11_113
else
    (*data_169ce18)(&data_169ce18, *(x0_112 + 0x10))

data_169ce30 = _vtable_for_UI2StateDecl + 0x10
void* x0_113 = UI2StateDeclTryLookup("m_Mole")

if (x0_113 == 0)
    (*data_169ce30)(&data_169ce30, "m_Mole")
    uint32_t x10_276 = *UI2StateDeclI_counter
    uint64_t x11_114 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169ce30
    *UI2StateDeclI_counter = x10_276 + 1
    data_169ce38 = x11_114
else
    (*data_169ce30)(&data_169ce30, *(x0_113 + 0x10))

data_169ce50 = 0x10000000
data_169ce58 = WayOfTheMole
__builtin_memcpy(&data_169d508, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169ce48 = 0x10000000000f38
data_169d560 = "way_of_the_monkey"
data_169d568 = 0x11
data_169d570 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_17
data_169d598 = _vtable_for_UI2StateDecl + 0x10
data_169d578 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_MONKEY
void* x0_114 = UI2StateDeclTryLookup("m_Monkey")

if (x0_114 == 0)
    (*data_169d598)(&data_169d598, "m_Monkey")
    uint32_t x10_279 = *UI2StateDeclI_counter
    uint64_t x11_115 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169d598
    *UI2StateDeclI_counter = x10_279 + 1
    data_169d5a0 = x11_115
else
    (*data_169d598)(&data_169d598, *(x0_114 + 0x10))

data_169d5b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_115 = UI2StateDeclTryLookup("m_Monkey")

if (x0_115 == 0)
    (*data_169d5b0)(&data_169d5b0, "m_Monkey")
    uint32_t x10_281 = *UI2StateDeclI_counter
    uint64_t x11_116 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169d5b0
    *UI2StateDeclI_counter = x10_281 + 1
    data_169d5b8 = x11_116
else
    (*data_169d5b0)(&data_169d5b0, *(x0_115 + 0x10))

data_169d5d0 = 0x10000000
data_169d5d8 = WayOfTheMonkey
__builtin_memcpy(&data_169dc88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169d5c8 = 0x10000000000f39
data_169dce0 = "way_of_the_mouse"
data_169dce8 = 0x28
data_169dcf0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_20
data_169dd18 = _vtable_for_UI2StateDecl + 0x10
data_169dcf8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_MOUSE
void* x0_116 = UI2StateDeclTryLookup("m_Mouse")

if (x0_116 == 0)
    (*data_169dd18)(&data_169dd18, "m_Mouse")
    uint32_t x10_284 = *UI2StateDeclI_counter
    uint64_t x11_117 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169dd18
    *UI2StateDeclI_counter = x10_284 + 1
    data_169dd20 = x11_117
else
    (*data_169dd18)(&data_169dd18, *(x0_116 + 0x10))

data_169dd30 = _vtable_for_UI2StateDecl + 0x10
void* x0_117 = UI2StateDeclTryLookup("m_Mouse")

if (x0_117 == 0)
    (*data_169dd30)(&data_169dd30, "m_Mouse")
    uint32_t x10_286 = *UI2StateDeclI_counter
    uint64_t x11_118 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169dd30
    *UI2StateDeclI_counter = x10_286 + 1
    data_169dd38 = x11_118
else
    (*data_169dd30)(&data_169dd30, *(x0_117 + 0x10))

__builtin_memset(&data_169dd68, 0, 0xc0)
data_169dd50 = 0x10000000
data_169dd58 = WayOfTheMouse
data_169dd68 = 0xd
data_169dd48 = 0x10000000000f3a
data_169dd88:8 = WayOfTheMouse_SetupFilter
data_169dd78 = WayOfTheMouse_Setup
data_169de18:4.d = 0x8000
__builtin_memcpy(&data_169e408, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169dd80 = 0x100000004
data_169e460 = "way_of_the_mule"
data_169e468 = 0x28
data_169e470 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_24
data_169e498 = _vtable_for_UI2StateDecl + 0x10
data_169e478 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_MULE
void* x0_118 = UI2StateDeclTryLookup("m_Mule")

if (x0_118 == 0)
    (*data_169e498)(&data_169e498, "m_Mule")
    uint32_t x10_289 = *UI2StateDeclI_counter
    uint64_t x11_119 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169e498
    *UI2StateDeclI_counter = x10_289 + 1
    data_169e4a0 = x11_119
else
    (*data_169e498)(&data_169e498, *(x0_118 + 0x10))

data_169e4b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_119 = UI2StateDeclTryLookup("m_Mule")

if (x0_119 == 0)
    (*data_169e4b0)(&data_169e4b0, "m_Mule")
    uint32_t x10_291 = *UI2StateDeclI_counter
    uint64_t x11_120 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169e4b0
    *UI2StateDeclI_counter = x10_291 + 1
    data_169e4b8 = x11_120
else
    (*data_169e4b0)(&data_169e4b0, *(x0_119 + 0x10))

data_169e4d0 = 0x10000000
data_169e4d8 = WayOfTheMule
__builtin_memcpy(&data_169eb88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169e4c8 = 0x10000000000f3b
data_169ebe0 = "way_of_the_otter"
data_169ebe8 = 0x14
data_169ebf0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_27
data_169ec18 = _vtable_for_UI2StateDecl + 0x10
data_169ebf8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_OTTER
void* x0_120 = UI2StateDeclTryLookup("m_Otter")

if (x0_120 == 0)
    (*data_169ec18)(&data_169ec18, "m_Otter")
    uint32_t x10_294 = *UI2StateDeclI_counter
    uint64_t x11_121 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169ec18
    *UI2StateDeclI_counter = x10_294 + 1
    data_169ec20 = x11_121
else
    (*data_169ec18)(&data_169ec18, *(x0_120 + 0x10))

data_169ec30 = _vtable_for_UI2StateDecl + 0x10
void* x0_121 = UI2StateDeclTryLookup("m_Otter")

if (x0_121 == 0)
    (*data_169ec30)(&data_169ec30, "m_Otter")
    uint32_t x10_296 = *UI2StateDeclI_counter
    uint64_t x11_122 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169ec30
    *UI2StateDeclI_counter = x10_296 + 1
    data_169ec38 = x11_122
else
    (*data_169ec30)(&data_169ec30, *(x0_121 + 0x10))

data_169ec50 = 0x10000000
data_169ec58 = WayOfTheOtter
__builtin_memcpy(&data_169f308, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169ec48 = 0x10000000000f3c
data_169f360 = "way_of_the_owl"
data_169f368 = 0x28
data_169f370 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_29
data_169f398 = _vtable_for_UI2StateDecl + 0x10
data_169f378 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_OWL
void* x0_122 = UI2StateDeclTryLookup("m_Owl")

if (x0_122 == 0)
    (*data_169f398)(&data_169f398, "m_Owl")
    uint32_t x10_299 = *UI2StateDeclI_counter
    uint64_t x11_123 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169f398
    *UI2StateDeclI_counter = x10_299 + 1
    data_169f3a0 = x11_123
else
    (*data_169f398)(&data_169f398, *(x0_122 + 0x10))

data_169f3b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_123 = UI2StateDeclTryLookup("m_Owl")

if (x0_123 == 0)
    (*data_169f3b0)(&data_169f3b0, "m_Owl")
    uint32_t x10_301 = *UI2StateDeclI_counter
    uint64_t x11_124 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169f3b0
    *UI2StateDeclI_counter = x10_301 + 1
    data_169f3b8 = x11_124
else
    (*data_169f3b0)(&data_169f3b0, *(x0_123 + 0x10))

data_169f3d0 = 0x10000000
data_169f3d8 = WayOfTheOwl
__builtin_memcpy(&data_169fa88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"04\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_169f3c8 = 0x10000000000f3d
data_169faa8 = 0xffffffff
data_169fae0 = "way_of_the_ox"
data_169fae8 = 0x2d
data_169faf0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_31
data_169fb18 = _vtable_for_UI2StateDecl + 0x10
data_169faf8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_OX
void* x0_124 = UI2StateDeclTryLookup("m_Ox")

if (x0_124 == 0)
    (*data_169fb18)(&data_169fb18, "m_Ox")
    uint32_t x10_304 = *UI2StateDeclI_counter
    uint64_t x11_125 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169fb18
    *UI2StateDeclI_counter = x10_304 + 1
    data_169fb20 = x11_125
else
    (*data_169fb18)(&data_169fb18, *(x0_124 + 0x10))

data_169fb30 = _vtable_for_UI2StateDecl + 0x10
void* x0_125 = UI2StateDeclTryLookup("m_Ox")

if (x0_125 == 0)
    (*data_169fb30)(&data_169fb30, "m_Ox")
    uint32_t x10_306 = *UI2StateDeclI_counter
    uint64_t x11_126 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_169fb30
    *UI2StateDeclI_counter = x10_306 + 1
    data_169fb38 = x11_126
else
    (*data_169fb30)(&data_169fb30, *(x0_125 + 0x10))

data_169fb50 = 0x10000000
data_169fb58 = WayOfTheOx
__builtin_memcpy(&data_16a0208, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_169fb48 = 0x10000000000f3e
data_16a0260 = "way_of_the_pig"
data_16a0268 = 0x28
data_16a0270 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_33
data_16a0298 = _vtable_for_UI2StateDecl + 0x10
data_16a0278 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_PIG
void* x0_126 = UI2StateDeclTryLookup("m_Pig")

if (x0_126 == 0)
    (*data_16a0298)(&data_16a0298, "m_Pig")
    uint32_t x10_309 = *UI2StateDeclI_counter
    uint64_t x11_127 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a0298
    *UI2StateDeclI_counter = x10_309 + 1
    data_16a02a0 = x11_127
else
    (*data_16a0298)(&data_16a0298, *(x0_126 + 0x10))

data_16a02b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_127 = UI2StateDeclTryLookup("m_Pig")

if (x0_127 == 0)
    (*data_16a02b0)(&data_16a02b0, "m_Pig")
    uint32_t x10_311 = *UI2StateDeclI_counter
    uint64_t x11_128 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a02b0
    *UI2StateDeclI_counter = x10_311 + 1
    data_16a02b8 = x11_128
else
    (*data_16a02b0)(&data_16a02b0, *(x0_127 + 0x10))

data_16a02d0 = 0x10000000
data_16a02d8 = WayOfThePig
__builtin_memcpy(&data_16a0988, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16a02c8 = 0x10000000000f3f
data_16a09e0 = "way_of_the_rat"
data_16a09e8 = 0x11
data_16a09f0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_OF_THE_RAT_FINAL
data_16a0a18 = _vtable_for_UI2StateDecl + 0x10
data_16a09f8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_RAT
void* x0_128 = UI2StateDeclTryLookup("m_Rat")

if (x0_128 == 0)
    (*data_16a0a18)(&data_16a0a18, "m_Rat")
    uint32_t x10_314 = *UI2StateDeclI_counter
    uint64_t x11_129 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a0a18
    *UI2StateDeclI_counter = x10_314 + 1
    data_16a0a20 = x11_129
else
    (*data_16a0a18)(&data_16a0a18, *(x0_128 + 0x10))

data_16a0a30 = _vtable_for_UI2StateDecl + 0x10
void* x0_129 = UI2StateDeclTryLookup("m_Rat")

if (x0_129 == 0)
    (*data_16a0a30)(&data_16a0a30, "m_Rat")
    uint32_t x10_316 = *UI2StateDeclI_counter
    uint64_t x11_130 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a0a30
    *UI2StateDeclI_counter = x10_316 + 1
    data_16a0a38 = x11_130
else
    (*data_16a0a30)(&data_16a0a30, *(x0_129 + 0x10))

data_16a0a50 = 0x10000000
data_16a0a58 = WayOfTheRat
__builtin_memcpy(&data_16a1108, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16a0a48 = 0x10000000000f40
data_16a1160 = "way_of_the_seal"
data_16a1168 = 0x28
data_16a1170 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_37
data_16a1198 = _vtable_for_UI2StateDecl + 0x10
data_16a1178 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_SEAL
void* x0_130 = UI2StateDeclTryLookup("m_Seal")

if (x0_130 == 0)
    (*data_16a1198)(&data_16a1198, "m_Seal")
    uint32_t x10_319 = *UI2StateDeclI_counter
    uint64_t x11_131 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a1198
    *UI2StateDeclI_counter = x10_319 + 1
    data_16a11a0 = x11_131
else
    (*data_16a1198)(&data_16a1198, *(x0_130 + 0x10))

data_16a11b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_131 = UI2StateDeclTryLookup("m_Seal")

if (x0_131 == 0)
    (*data_16a11b0)(&data_16a11b0, "m_Seal")
    uint32_t x10_321 = *UI2StateDeclI_counter
    uint64_t x11_132 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a11b0
    *UI2StateDeclI_counter = x10_321 + 1
    data_16a11b8 = x11_132
else
    (*data_16a11b0)(&data_16a11b0, *(x0_131 + 0x10))

data_16a11d0 = 0x10000000
data_16a11d8 = WayOfTheSeal
data_16a17e8 = 1
__builtin_memcpy(&data_16a1888, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16a11c8 = 0x10000000000f41
data_16a18e0 = "way_of_the_sheep"
data_16a18e8 = 0x13
data_16a18f0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_OF_THE_SHEEP_FINAL
data_16a1918 = _vtable_for_UI2StateDecl + 0x10
data_16a18f8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_SHEEP
void* x0_132 = UI2StateDeclTryLookup("m_Sheep")

if (x0_132 == 0)
    (*data_16a1918)(&data_16a1918, "m_Sheep")
    uint32_t x10_324 = *UI2StateDeclI_counter
    uint64_t x11_133 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a1918
    *UI2StateDeclI_counter = x10_324 + 1
    data_16a1920 = x11_133
else
    (*data_16a1918)(&data_16a1918, *(x0_132 + 0x10))

data_16a1930 = _vtable_for_UI2StateDecl + 0x10
void* x0_133 = UI2StateDeclTryLookup("m_Sheep")

if (x0_133 == 0)
    (*data_16a1930)(&data_16a1930, "m_Sheep")
    uint32_t x10_326 = *UI2StateDeclI_counter
    uint64_t x11_134 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a1930
    *UI2StateDeclI_counter = x10_326 + 1
    data_16a1938 = x11_134
else
    (*data_16a1930)(&data_16a1930, *(x0_133 + 0x10))

data_16a1950 = 0x10000000
data_16a1958 = WayOfTheSheep
__builtin_memcpy(&data_16a2008, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16a1948 = 0x10000000000f42
data_16a2060 = "way_of_the_squirrel"
data_16a2068 = 0x28
data_16a2070 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_43
data_16a2098 = _vtable_for_UI2StateDecl + 0x10
data_16a2078 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_SQUIRREL
void* x0_134 = UI2StateDeclTryLookup("m_Squirrel")

if (x0_134 == 0)
    (*data_16a2098)(&data_16a2098, "m_Squirrel")
    uint32_t x10_329 = *UI2StateDeclI_counter
    uint64_t x11_135 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a2098
    *UI2StateDeclI_counter = x10_329 + 1
    data_16a20a0 = x11_135
else
    (*data_16a2098)(&data_16a2098, *(x0_134 + 0x10))

data_16a20b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_135 = UI2StateDeclTryLookup("m_Squirrel")

if (x0_135 == 0)
    (*data_16a20b0)(&data_16a20b0, "m_Squirrel")
    uint32_t x10_331 = *UI2StateDeclI_counter
    uint64_t x11_136 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a20b0
    *UI2StateDeclI_counter = x10_331 + 1
    data_16a20b8 = x11_136
else
    (*data_16a20b0)(&data_16a20b0, *(x0_135 + 0x10))

data_16a20d0 = 0x10000000
data_16a20d8 = WayOfTheSquirrel
__builtin_memcpy(&data_16a2788, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16a20c8 = 0x10000000000f43
data_16a27e0 = "way_of_the_turtle"
data_16a27e8 = 0x28
data_16a27f0 = TEXTURE_CARD_GEN_MENAGERIE_WAY_CARDS02_45
data_16a2818 = _vtable_for_UI2StateDecl + 0x10
data_16a27f8 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_TURTLE
void* x0_136 = UI2StateDeclTryLookup("m_Turtle")

if (x0_136 == 0)
    (*data_16a2818)(&data_16a2818, "m_Turtle")
    uint32_t x10_334 = *UI2StateDeclI_counter
    uint64_t x11_137 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a2818
    *UI2StateDeclI_counter = x10_334 + 1
    data_16a2820 = x11_137
else
    (*data_16a2818)(&data_16a2818, *(x0_136 + 0x10))

data_16a2830 = _vtable_for_UI2StateDecl + 0x10
void* x0_137 = UI2StateDeclTryLookup("m_Turtle")

if (x0_137 == 0)
    (*data_16a2830)(&data_16a2830, "m_Turtle")
    uint32_t x10_336 = *UI2StateDeclI_counter
    uint64_t x11_138 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a2830
    *UI2StateDeclI_counter = x10_336 + 1
    data_16a2838 = x11_138
else
    (*data_16a2830)(&data_16a2830, *(x0_137 + 0x10))

data_16a2850 = 0x10000000
data_16a2858 = WayOfTheTurtle
data_16a2e68 = 1
__builtin_memcpy(&data_16a2f08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16a2848 = 0x10000000000f44
data_16a2f60 = "way_of_the_worm"
data_16a2f68 = 0x28
data_16a2f70 = TEXTURE_CARD_GEN_MENAGERIE_WAY_OF_THE_WORM_FINAL
data_16a2f98 = _vtable_for_UI2StateDecl + 0x10
data_16a2f78 = SOUND_SOUND_CARDS_FX_LANDPLAYWAY_WAY_OF_THE_WORM
void* x0_138 = UI2StateDeclTryLookup("m_Worm")

if (x0_138 == 0)
    (*data_16a2f98)(&data_16a2f98, "m_Worm")
    uint32_t x10_339 = *UI2StateDeclI_counter
    uint64_t x11_139 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a2f98
    *UI2StateDeclI_counter = x10_339 + 1
    data_16a2fa0 = x11_139
else
    (*data_16a2f98)(&data_16a2f98, *(x0_138 + 0x10))

data_16a2fb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_139 = UI2StateDeclTryLookup("m_Worm")

if (x0_139 == 0)
    (*data_16a2fb0)(&data_16a2fb0, "m_Worm")
    uint32_t x10_341 = *UI2StateDeclI_counter
    uint64_t x11_140 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a2fb0
    *UI2StateDeclI_counter = x10_341 + 1
    data_16a2fb8 = x11_140
else
    (*data_16a2fb0)(&data_16a2fb0, *(x0_139 + 0x10))

data_16a2fd0 = 0x10000000
data_16a2fd8 = WayOfTheWorm
data_16a3688 = v4
data_16a3698 = 0
data_16a2fc8 = 0x10000000000f45
data_16a36a0 = 0x100000000
data_16a36e0 = "horse"
data_16a369c = 0
data_16a36e8 = 8
data_16a36f0 = TEXTURE_CARD_GEN_MENAGERIE_HORSE
data_16a3718 = _vtable_for_UI2StateDecl + 0x10
data_16a36f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HORSE
void* x0_140 = UI2StateDeclTryLookup("m_Horse")

if (x0_140 == 0)
    (*data_16a3718)(&data_16a3718, "m_Horse")
    uint32_t x10_344 = *UI2StateDeclI_counter
    uint64_t x11_141 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a3718
    *UI2StateDeclI_counter = x10_344 + 1
    data_16a3720 = x11_141
else
    (*data_16a3718)(&data_16a3718, *(x0_140 + 0x10))

data_16a3730 = _vtable_for_UI2StateDecl + 0x10
void* x0_141 = UI2StateDeclTryLookup("m_Horse")

if (x0_141 == 0)
    (*data_16a3730)(&data_16a3730, "m_Horse")
    uint32_t x10_346 = *UI2StateDeclI_counter
    uint64_t x11_142 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a3730
    *UI2StateDeclI_counter = x10_346 + 1
    data_16a3738 = x11_142
else
    (*data_16a3730)(&data_16a3730, *(x0_141 + 0x10))

data_16a3750 = 0x1000000000004
data_16a3758 = Horse
__builtin_memset(&data_16a3768, 0, 0xc0)
data_16a3e08 = v4
data_16a3768 = 0xb
data_16a37f8:8.d = 1
data_16a3e18 = 0
data_16a3748 = 0x8000300000f46
data_16a3778:8 = 0x1e00000000
data_16a3e20 = 0x100000000
data_16a3e60 = "exile"
data_16a3e1c = 0
data_16a3e68 = 0
data_16a3e98 = _vtable_for_UI2StateDecl + 0x10
void* x0_142 = UI2StateDeclTryLookup("m_Exile")

if (x0_142 == 0)
    (*data_16a3e98)(&data_16a3e98, "m_Exile")
    uint32_t x10_349 = *UI2StateDeclI_counter
    uint64_t x11_143 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a3e98
    *UI2StateDeclI_counter = x10_349 + 1
    data_16a3ea0 = x11_143
else
    (*data_16a3e98)(&data_16a3e98, *(x0_142 + 0x10))

data_16a3eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_143 = UI2StateDeclTryLookup("m_Exile")
int64_t result

if (x0_143 == 0)
    result = (*data_16a3eb0)(&data_16a3eb0, "m_Exile")
    uint32_t x10_351 = *UI2StateDeclI_counter
    uint64_t x11_144 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a3eb0
    *UI2StateDeclI_counter = x10_351 + 1
    data_16a3eb8 = x11_144
else
    result = (*data_16a3eb0)(&data_16a3eb0, *(x0_143 + 0x10))

__builtin_memset(&data_16a3ef0, 0, 0xb8)
data_16a3f9c = 0x100000001
data_16a3ed0 = 0x1000000000000
data_16a3ec8 = 0x10000000000f47
data_16a3f00 = ExileOnGain
data_16a3f90 = ExileOnGain_Test
data_16a3ef0:4.d = 0
data_16a3ee8 = 0x300000006
data_16a44e8 = 1
return result
