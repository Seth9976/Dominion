// 函数: sub_abb614
// 地址: 0xabb614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x170c400, 0, 0x18600)
int128_t v0 = data_71cea0
data_170c418 = 0x1002
data_170c420 = 0xffffffff
data_170c458 = "border_guard"
data_170c460 = 8
data_170c468 = TEXTURE_CARD_GEN_RENAISSANCE_BORDERGUARD
data_170c470 = SOUND_SOUND_CARDS_FX_LANDPLAY_BORDER_GUARD
data_170c408 = v0
data_170c490 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("r_Border_Guard")

if (x0 == 0)
    (*data_170c490)(&data_170c490, "r_Border_Guard")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170c490
    *UI2StateDeclI_counter = x10_1 + 1
    data_170c498 = x11_1
else
    (*data_170c490)(&data_170c490, *(x0 + 0x10))

data_170c4a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("r_Border_Guard")

if (x0_1 == 0)
    (*data_170c4a8)(&data_170c4a8, "r_Border_Guard")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170c4a8
    *UI2StateDeclI_counter = x10_3 + 1
    data_170c4b0 = x11_2
else
    (*data_170c4a8)(&data_170c4a8, *(x0_1 + 0x10))

int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
__builtin_memset(&data_170c4e0, 0, 0x20)
data_170c4e0 = 0x10
__builtin_memset(&data_170c590, 0, 0x20)
data_170c5a0 = 0x10
__builtin_memset(&data_170c500, 0, 0x90)
__builtin_memset(&data_170c5b0, 0, 0xb0)
v0_1 = data_71c2d0
data_170c4c8 = 4
data_170c4d0 = BorderGuard
data_170c4f0:8.d = 0xe1c
data_170c5b0:8.d = 0xe1a
data_170c4c0 = 0x200000e00
__builtin_memcpy(&data_170cb80, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x04\x00\x00\x00", 
    0x20)
data_170cba0 = 0xffffffff
data_170cbd8 = "ducat"
data_170cbe0 = 0x28
data_170cbe8 = TEXTURE_CARD_GEN_RENAISSANCE_DUCAT
data_170cc10 = _vtable_for_UI2StateDecl + 0x10
data_170cbf0 = SOUND_SOUND_CARDS_FX_LANDPLAY_DUCAT
void* x0_2 = UI2StateDeclTryLookup("r_Ducat")

if (x0_2 == 0)
    (*data_170cc10)(&data_170cc10, "r_Ducat")
    uint32_t x10_6 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170cc10
    *UI2StateDeclI_counter = x10_6 + 1
    data_170cc18 = x11_3
else
    (*data_170cc10)(&data_170cc10, *(x0_2 + 0x10))

data_170cc28 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("r_Ducat")

if (x0_3 == 0)
    (*data_170cc28)(&data_170cc28, "r_Ducat")
    uint32_t x10_8 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170cc28
    *UI2StateDeclI_counter = x10_8 + 1
    data_170cc30 = x11_4
else
    (*data_170cc28)(&data_170cc28, *(x0_3 + 0x10))

__builtin_memset(&data_170cc68, 0, 0xb8)
data_170cc60 = 0x600000006
data_170cd14 = 0x100000001
data_170cc48 = 2
data_170cc50 = Ducat
data_170cc78 = Ducat_OnGain
data_170cc40 = 0x200000e01
data_170cc68:4.d = 1
data_170cd08 = Ducat_OnGain_Test
data_170d260 = 1
__builtin_memcpy(&data_170d300, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"08\x00\x00\x00\x08\x00\x00\x00", 
    0x20)
data_170d320 = 0xffffffff
data_170d358 = "lackeys"
data_170d360 = 0x11
data_170d368 = TEXTURE_CARD_GEN_RENAISSANCE_LACKEYS
data_170d390 = _vtable_for_UI2StateDecl + 0x10
data_170d370 = SOUND_SOUND_CARDS_FX_LANDPLAY_LACKEYS
void* x0_4 = UI2StateDeclTryLookup("r_Lackeys")

if (x0_4 == 0)
    (*data_170d390)(&data_170d390, "r_Lackeys")
    uint32_t x10_11 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170d390
    *UI2StateDeclI_counter = x10_11 + 1
    data_170d398 = x11_5
else
    (*data_170d390)(&data_170d390, *(x0_4 + 0x10))

data_170d3a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("r_Lackeys")

if (x0_5 == 0)
    (*data_170d3a8)(&data_170d3a8, "r_Lackeys")
    uint32_t x10_13 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170d3a8
    *UI2StateDeclI_counter = x10_13 + 1
    data_170d3b0 = x11_6
else
    (*data_170d3a8)(&data_170d3a8, *(x0_5 + 0x10))

int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
__builtin_memset(&data_170d3e8, 0, 0xb0)
data_170d3c8 = 4
data_170d3d0 = Lackeys
v0_2.q = 0x200000e02
data_170d3f8 = Lackeys_OnGain
data_170d3e0 = 0x600000006
data_170d3c0 = 0x200000e02
data_170d3e8:4.d = 1
data_170d9e0 = 1
data_170d494:4 = 0
data_170d488 = 0
__builtin_memcpy(&data_170da80, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x08\x00\x00\x00", 
    0x20)
data_170d494 = 0x100000000
data_170daa0 = 0xffffffff
data_170dad8 = "acting_troupe"
data_170dae0 = 0x1d
data_170dae8 = TEXTURE_CARD_GEN_RENAISSANCE_ACTING_TROUP
data_170db10 = _vtable_for_UI2StateDecl + 0x10
data_170daf0 = SOUND_SOUND_CARDS_FX_LANDPLAY_ACTING_TROUPE
void* x0_6 = UI2StateDeclTryLookup("r_Acting_Troupe")

if (x0_6 == 0)
    (*data_170db10)(&data_170db10, "r_Acting_Troupe")
    uint32_t x10_16 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170db10
    *UI2StateDeclI_counter = x10_16 + 1
    data_170db18 = x11_7
else
    (*data_170db10)(&data_170db10, *(x0_6 + 0x10))

data_170db28 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("r_Acting_Troupe")

if (x0_7 == 0)
    (*data_170db28)(&data_170db28, "r_Acting_Troupe")
    uint32_t x10_18 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170db28
    *UI2StateDeclI_counter = x10_18 + 1
    data_170db30 = x11_8
else
    (*data_170db28)(&data_170db28, *(x0_7 + 0x10))

data_170db48 = 4
data_170db50 = ActingTroupe
data_170e200 = v0_1
int128_t v1_1 = data_7ea500
data_170db40 = 0x300000e03
data_170e210 = 1
data_170e218 = v1_1
v1_1 = data_7ea530
data_170e258 = "cargo_ship"
__builtin_memcpy(&data_170e228, 
    "\x00\x04\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x"
"07\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_170e248 = v1_1
data_170e260 = 0x11
data_170e268 = TEXTURE_CARD_GEN_RENAISSANCE_CARRACK
data_170e290 = _vtable_for_UI2StateDecl + 0x10
data_170e270 = SOUND_SOUND_CARDS_FX_LANDPLAY_CARGO_SHIP
void* x0_8 = UI2StateDeclTryLookup("r_Cargo_Ship")

if (x0_8 == 0)
    (*data_170e290)(&data_170e290, "r_Cargo_Ship")
    uint32_t x10_21 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170e290
    *UI2StateDeclI_counter = x10_21 + 1
    data_170e298 = x11_9
else
    (*data_170e290)(&data_170e290, *(x0_8 + 0x10))

data_170e2a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("r_Cargo_Ship")
int128_t v0_3
int128_t v1_2

if (x0_9 == 0)
    v0_3, v1_2 = (*data_170e2a8)(&data_170e2a8, "r_Cargo_Ship")
    uint32_t x10_23 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170e2a8
    *UI2StateDeclI_counter = x10_23 + 1
    data_170e2b0 = x11_10
else
    v0_3, v1_2 = (*data_170e2a8)(&data_170e2a8, *(x0_9 + 0x10))

v0_3.q = 0x300000e04
data_1145af0
data_170e2c0 = 0x300000e04
__builtin_memcpy(&data_170e8e0, 
    "\x06\x00\x00\x00\x00\x00\x00\x00\xd4\xdb\x77\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"e8\xe9\x74\x00\x00\x00\x00\x00", 
    0x20)
v1_2 = data_1145b20
data_170e900 = data_1145b10
data_170e2c8 = 0x84
data_170e2d0 = CargoShip
data_170e910 = v1_2
__builtin_memcpy(&data_170e980, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"12\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_170e9a0 = 0xffffffff
data_170e9d8 = "experiment"
data_170e9e0 = 0x17
data_170e9e8 = TEXTURE_CARD_GEN_RENAISSANCE_EXPERIMENT
data_170ea10 = _vtable_for_UI2StateDecl + 0x10
data_170e9f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_EXPERIMENT
void* x0_10 = UI2StateDeclTryLookup("r22_Experiment")

if (x0_10 == 0)
    (*data_170ea10)(&data_170ea10, "r22_Experiment")
    uint32_t x10_26 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170ea10
    *UI2StateDeclI_counter = x10_26 + 1
    data_170ea18 = x11_11
else
    (*data_170ea10)(&data_170ea10, *(x0_10 + 0x10))

data_170ea28 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("r_Experiment")

if (x0_11 == 0)
    (*data_170ea28)(&data_170ea28, "r_Experiment")
    uint32_t x10_28 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170ea28
    *UI2StateDeclI_counter = x10_28 + 1
    data_170ea30 = x11_12
else
    (*data_170ea28)(&data_170ea28, *(x0_11 + 0x10))

data_170ea48 = 4
data_170ea50 = Experiment
int128_t v0_4
v0_4.q = 0
v0_4:8.q = 0
data_170ea78 = zx.o(0)
data_170ea78.q = Experiment_OnGain
data_170eb08 = zx.o(0)
data_170ea68 = zx.o(0)
data_170eb08.q = Experiment_OnGain_Test
__builtin_memset(&data_170ea88, 0, 0x80)
data_170ea68:4.d = 1
data_170f060 = 1
data_170ea60 = 0x600000006
__builtin_memcpy(&data_170f100, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_170ea40 = 0x300000e05
data_170eb18 = 0
data_170eb08:0xc = 0x100000000
data_170f158 = "improve"
__builtin_memset(&data_170f138, 0, 0x20)
__builtin_memcpy(&data_170f118, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x20\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_170f160 = 0x28
data_170f168 = TEXTURE_CARD_GEN_RENAISSANCE_IMPROVE
data_170f190 = _vtable_for_UI2StateDecl + 0x10
data_170f170 = SOUND_SOUND_CARDS_FX_LANDPLAY_IMPROVE
void* x0_12 = UI2StateDeclTryLookup("r_Improve")

if (x0_12 == 0)
    (*data_170f190)(&data_170f190, "r_Improve")
    uint32_t x10_31 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170f190
    *UI2StateDeclI_counter = x10_31 + 1
    data_170f198 = x11_13
else
    (*data_170f190)(&data_170f190, *(x0_12 + 0x10))

data_170f1a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("r_Improve")

if (x0_13 == 0)
    (*data_170f1a8)(&data_170f1a8, "r_Improve")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170f1a8
    *UI2StateDeclI_counter = x10_33 + 1
    data_170f1b0 = x11_14
else
    (*data_170f1a8)(&data_170f1a8, *(x0_13 + 0x10))

int128_t v0_5
v0_5.q = 0x300000e06
data_170f1c0 = 0x300000e06
data_170f1c8 = 4
data_170f1d0 = Improve
__builtin_memcpy(&data_170f880, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_170f8a0 = 0xffffffff
data_170f8d8 = "flag_bearer"
data_170f8e0 = 0x11
data_170f8e8 = TEXTURE_CARD_GEN_RENAISSANCE_FLAG_BEARER
data_170f910 = _vtable_for_UI2StateDecl + 0x10
data_170f8f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_FLAG_BEARER
void* x0_14 = UI2StateDeclTryLookup("r_Flag_Bearer")

if (x0_14 == 0)
    (*data_170f910)(&data_170f910, "r_Flag_Bearer")
    uint32_t x10_36 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170f910
    *UI2StateDeclI_counter = x10_36 + 1
    data_170f918 = x11_15
else
    (*data_170f910)(&data_170f910, *(x0_14 + 0x10))

data_170f928 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("r_Flag_Bearer")

if (x0_15 == 0)
    (*data_170f928)(&data_170f928, "r_Flag_Bearer")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_170f928
    *UI2StateDeclI_counter = x10_38 + 1
    data_170f930 = x11_16
else
    (*data_170f928)(&data_170f928, *(x0_15 + 0x10))

data_170f940 = 0x400000e07
int128_t v0_6
v0_6.q = 0
v0_6:8.q = 0
data_170f948 = 4
data_170f950 = FlagBearer
__builtin_memset(&data_170f968, 0, 0xb8)
data_170f960 = 0x600000006
data_170f968:4.d = 1
data_170f978 = FlagBearer_OnGainOrTrash
data_170fa08 = 0
data_170fa14 = 0x100000000
__builtin_memset(&data_170fa28, 0, 0xb8)
data_170fa20 = 0x600000006
data_170fa28:4.d = 2
data_170fa38 = FlagBearer_OnGainOrTrash
data_170fac8 = 0
__builtin_memset(&data_170fae0, 0, 0xc0)
data_170fae0 = 0x10
data_170faf0:8.d = 0xe19
data_170ff60 = 1
data_170fad4 = 0x100000000
__builtin_memcpy(&data_1710000, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1710020 = 0xffffffff
data_1710058 = "hideout"
data_1710060 = 0x1d
data_1710068 = TEXTURE_CARD_GEN_RENAISSANCE_HIDEOUT
data_1710070 = SOUND_SOUND_CARDS_FX_LANDPLAY_HIDEOUT
data_1710090 = _vtable_for_UI2StateDecl + 0x10
void* x0_16 = UI2StateDeclTryLookup("r_Hideout")

if (x0_16 == 0)
    (*data_1710090)(&data_1710090, "r_Hideout")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1710090
    *UI2StateDeclI_counter = x10_40 + 1
    data_1710098 = x11_17
else
    (*data_1710090)(&data_1710090, *(x0_16 + 0x10))

data_17100a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("r_Hideout")

if (x0_17 == 0)
    (*data_17100a8)(&data_17100a8, "r_Hideout")
    uint32_t x10_42 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_17100a8
    *UI2StateDeclI_counter = x10_42 + 1
    data_17100b0 = x11_18
else
    (*data_17100a8)(&data_17100a8, *(x0_17 + 0x10))

data_17100c8 = 4
data_17100d0 = Hideout
__builtin_memcpy(&data_1710780, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_17100c0 = 0x400000e08
data_17107a0 = 0xffffffff
data_17107d8 = "inventor"
data_17107e0 = 0x1d
data_17107e8 = TEXTURE_CARD_GEN_RENAISSANCE_INVENTOR
data_1710810 = _vtable_for_UI2StateDecl + 0x10
data_17107f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_INVENTOR
void* x0_18 = UI2StateDeclTryLookup("r_Inventor")

if (x0_18 == 0)
    (*data_1710810)(&data_1710810, "r_Inventor")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1710810
    *UI2StateDeclI_counter = x10_45 + 1
    data_1710818 = x11_19
else
    (*data_1710810)(&data_1710810, *(x0_18 + 0x10))

data_1710828 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("r_Inventor")

if (x0_19 == 0)
    (*data_1710828)(&data_1710828, "r_Inventor")
    uint32_t x10_47 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1710828
    *UI2StateDeclI_counter = x10_47 + 1
    data_1710830 = x11_20
else
    (*data_1710828)(&data_1710828, *(x0_19 + 0x10))

int128_t v0_7
v0_7.q = 0x400000e09
data_1710840 = 0x400000e09
data_1710848 = 4
data_1710850 = Inventor
__builtin_memcpy(&data_1710f00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1710f20 = 0xffffffff
data_1710f58 = "mountain_village"
data_1710f60 = 0x14
data_1710f68 = TEXTURE_CARD_GEN_RENAISSANCE_MOUNTAINVILLAGE
data_1710f90 = _vtable_for_UI2StateDecl + 0x10
data_1710f70 = SOUND_SOUND_CARDS_FX_LANDPLAY_MOUNTAIN_VILLAGE
void* x0_20 = UI2StateDeclTryLookup("r_Mountain_Village")

if (x0_20 == 0)
    (*data_1710f90)(&data_1710f90, "r_Mountain_Village")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1710f90
    *UI2StateDeclI_counter = x10_50 + 1
    data_1710f98 = x11_21
else
    (*data_1710f90)(&data_1710f90, *(x0_20 + 0x10))

data_1710fa8 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("r_Mountain_Village")
int128_t v1_4
int128_t v2

if (x0_21 == 0)
    v1_4, v2 = (*data_1710fa8)(&data_1710fa8, "r_Mountain_Village")
    uint32_t x10_52 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1710fa8
    *UI2StateDeclI_counter = x10_52 + 1
    data_1710fb0 = x11_22
else
    v1_4, v2 = (*data_1710fa8)(&data_1710fa8, *(x0_21 + 0x10))

data_1711680 = v0_1
v1_4 = data_7ea580
v2 = data_7ea590
data_1710fc8 = 4
data_1710fd0 = MountainVillage
data_1711690 = 9
data_1710fc0 = 0x400000e0a
data_1711698 = v1_4
data_17116d8 = "patron"
data_17116a8 = v2
__builtin_memset(&data_17116b8, 0, 0x20)
data_17116e0 = 8
data_17116e8 = TEXTURE_CARD_GEN_RENAISSANCE_PATRON
data_17116f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_PATRON
data_17116f8 = SOUND_SOUND_CARDS_FX_REACTION_PATRON
data_1711710 = _vtable_for_UI2StateDecl + 0x10
void* x0_22 = UI2StateDeclTryLookup("r_Patron")

if (x0_22 == 0)
    (*data_1711710)(&data_1711710, "r_Patron")
    uint32_t x10_54 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1711710
    *UI2StateDeclI_counter = x10_54 + 1
    data_1711718 = x11_23
else
    (*data_1711710)(&data_1711710, *(x0_22 + 0x10))

data_1711728 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("r_Patron")

if (x0_23 == 0)
    (*data_1711728)(&data_1711728, "r_Patron")
    uint32_t x10_56 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1711728
    *UI2StateDeclI_counter = x10_56 + 1
    data_1711730 = x11_24
else
    (*data_1711728)(&data_1711728, *(x0_23 + 0x10))

int128_t v0_8
v0_8.q = 0
v0_8:8.q = 0
data_1711748 = 0x44
data_1711750 = Patron
__builtin_memset(&data_1711768, 0, 0xb0)
data_1711778 = Patron_Reaction_OnReveal
data_1711814:4 = 0
data_1711768:4.d = 1
data_1711d60 = 1
data_1711808 = Patron_Reaction_OnRevealTest
v0_8.q = 0x100000004
data_1711814 = 0x100000004
data_1711740 = 0x400000e0b
data_1711760 = 6
__builtin_memcpy(&data_1711e00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"01\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1711e20 = 0xffffffff
data_1711e58 = "priest"
data_1711e60 = 0x1d
data_1711e68 = TEXTURE_CARD_GEN_RENAISSANCE_PRIEST
data_1711e90 = _vtable_for_UI2StateDecl + 0x10
data_1711e70 = SOUND_SOUND_CARDS_FX_LANDPLAY_PRIEST
void* x0_24 = UI2StateDeclTryLookup("r_Priest")

if (x0_24 == 0)
    (*data_1711e90)(&data_1711e90, "r_Priest")
    uint32_t x10_59 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1711e90
    *UI2StateDeclI_counter = x10_59 + 1
    data_1711e98 = x11_25
else
    (*data_1711e90)(&data_1711e90, *(x0_24 + 0x10))

data_1711ea8 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("r_Priest")
int128_t v1_5
int128_t v2_1

if (x0_25 == 0)
    v1_5, v2_1 = (*data_1711ea8)(&data_1711ea8, "r_Priest")
    uint32_t x10_61 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1711ea8
    *UI2StateDeclI_counter = x10_61 + 1
    data_1711eb0 = x11_26
else
    v1_5, v2_1 = (*data_1711ea8)(&data_1711ea8, *(x0_25 + 0x10))

data_1711ec8 = 4
data_1711ed0 = Priest
data_1712580 = v0_1
v1_5 = data_7ea5c0
v2_1 = data_7ea5d0
data_17124e0 = 1
data_1712590 = 0x10
data_1711ec0 = 0x400000e0c
data_1712598 = v1_5
data_17125d8 = "research"
data_17125a8 = v2_1
__builtin_memset(&data_17125b8, 0, 0x20)
data_17125e0 = 0x1d
data_17125e8 = TEXTURE_CARD_GEN_RENAISSANCE_RESEARCH
data_1712610 = _vtable_for_UI2StateDecl + 0x10
data_17125f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_RESEARCH
void* x0_26 = UI2StateDeclTryLookup("r_Research")

if (x0_26 == 0)
    (*data_1712610)(&data_1712610, "r_Research")
    uint32_t x10_64 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1712610
    *UI2StateDeclI_counter = x10_64 + 1
    data_1712618 = x11_27
else
    (*data_1712610)(&data_1712610, *(x0_26 + 0x10))

data_1712628 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("r_Research")
int128_t v1_6
int128_t v2_2

if (x0_27 == 0)
    v1_6, v2_2 = (*data_1712628)(&data_1712628, "r_Research")
    uint32_t x10_66 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1712628
    *UI2StateDeclI_counter = x10_66 + 1
    data_1712630 = x11_28
else
    v1_6, v2_2 = (*data_1712628)(&data_1712628, *(x0_27 + 0x10))

data_1712c60 = 1
data_1712648 = 0x84
data_1712650 = Research
data_1712d00 = v0_1
v1_6 = data_7ea600
v2_2 = data_7ea610
data_1712640 = 0x400000e0d
data_1712d10 = 0xd
data_1712d18 = v1_6
data_1712d58 = "silk_merchant"
data_1712d28 = v2_2
__builtin_memset(&data_1712d38, 0, 0x20)
data_1712d60 = 0xd
data_1712d68 = TEXTURE_CARD_GEN_RENAISSANCE_SILK_MERCHANT
data_1712d90 = _vtable_for_UI2StateDecl + 0x10
data_1712d70 = SOUND_SOUND_CARDS_FX_LANDPLAY_SILK_MERCHANT
void* x0_28 = UI2StateDeclTryLookup("r_Silk_Merchant")

if (x0_28 == 0)
    (*data_1712d90)(&data_1712d90, "r_Silk_Merchant")
    uint32_t x10_69 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1712d90
    *UI2StateDeclI_counter = x10_69 + 1
    data_1712d98 = x11_29
else
    (*data_1712d90)(&data_1712d90, *(x0_28 + 0x10))

data_1712da8 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("r_Silk_Merchant")

if (x0_29 == 0)
    (*data_1712da8)(&data_1712da8, "r_Silk_Merchant")
    uint32_t x10_71 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1712da8
    *UI2StateDeclI_counter = x10_71 + 1
    data_1712db0 = x11_30
else
    (*data_1712da8)(&data_1712da8, *(x0_29 + 0x10))

data_1712dc0 = 0x400000e0e
int128_t v0_9
v0_9.q = 0
v0_9:8.q = 0
data_1712dc8 = 4
data_1712dd0 = SilkMerchant
__builtin_memset(&data_1712de8, 0, 0xb8)
data_1712de0 = 0x600000006
data_1712de8:4.d = 1
data_1712df8 = SilkMerchant_OnGainOrTrash
data_1712e88 = 0
data_1712e94 = 0x100000000
__builtin_memset(&data_1712ea8, 0, 0xb8)
v0_9.q = 0x100000002
data_1712ea0 = 0x600000006
data_1712ea8:4.d = 2
data_1712eb8 = SilkMerchant_OnGainOrTrash
data_1712f48 = 0
data_1712f54 = 0x100000002
data_17133e0 = 1
__builtin_memcpy(&data_1713480, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x"
"08\x00\x00\x28\x00\x00\x00\x00", 
    0x20)
data_17134a0 = 0xffffffff
data_17134d8 = "old_witch"
data_17134e0 = 0x1b
data_17134e8 = TEXTURE_CARD_GEN_RENAISSANCE_OLD_WITCH
data_17134f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_OLD_WITCH
data_1713510 = _vtable_for_UI2StateDecl + 0x10
void* x0_30 = UI2StateDeclTryLookup("r_Old_Witch")

if (x0_30 == 0)
    (*data_1713510)(&data_1713510, "r_Old_Witch")
    uint32_t x10_74 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1713510
    *UI2StateDeclI_counter = x10_74 + 1
    data_1713518 = x11_31
else
    (*data_1713510)(&data_1713510, *(x0_30 + 0x10))

data_1713528 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("r_Old_Witch")

if (x0_31 == 0)
    (*data_1713528)(&data_1713528, "r_Old_Witch")
    uint32_t x10_76 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1713528
    *UI2StateDeclI_counter = x10_76 + 1
    data_1713530 = x11_32
else
    (*data_1713528)(&data_1713528, *(x0_31 + 0x10))

data_1145b60
data_1713540 = 0x500000e0f
data_1145b80
data_1713ba0 = data_1145b30
data_1713c10 = 0x11
__builtin_memset(&data_1713bb0, 0, 0x50)
data_1713548 = 0x24
data_1713550 = OldWitch
data_1713c00 = v0_1
data_1713c18 = 0x800002010
data_1713c20 = 0xffffffff
data_1713c58 = "recruiter"
data_1713c60 = 0x1d
data_1713c68 = TEXTURE_CARD_GEN_RENAISSANCE_RECRUITER
data_1713c90 = _vtable_for_UI2StateDecl + 0x10
data_1713c70 = SOUND_SOUND_CARDS_FX_LANDPLAY_RECRUITER
void* x0_32 = UI2StateDeclTryLookup("r_Recruiter")

if (x0_32 == 0)
    (*data_1713c90)(&data_1713c90, "r_Recruiter")
    uint32_t x10_79 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1713c90
    *UI2StateDeclI_counter = x10_79 + 1
    data_1713c98 = x11_33
else
    (*data_1713c90)(&data_1713c90, *(x0_32 + 0x10))

data_1713ca8 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("r_Recruiter")

if (x0_33 == 0)
    (*data_1713ca8)(&data_1713ca8, "r_Recruiter")
    uint32_t x10_81 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1713ca8
    *UI2StateDeclI_counter = x10_81 + 1
    data_1713cb0 = x11_34
else
    (*data_1713ca8)(&data_1713ca8, *(x0_33 + 0x10))

data_1713cc0 = 0x500000e10
data_1713cc8 = 4
data_1713cd0 = Recruiter
__builtin_memcpy(&data_1714380, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x08\x00\x00\x00\x00\x00", 
    0x20)
data_17143a0 = 0xffffffff
data_17143d8 = "scepter"
data_17143e0 = 0x28
data_17143e8 = TEXTURE_CARD_GEN_RENAISSANCE_SCEPTER
data_1714410 = _vtable_for_UI2StateDecl + 0x10
data_17143f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCEPTER
void* x0_34 = UI2StateDeclTryLookup("r_Scepter")

if (x0_34 == 0)
    (*data_1714410)(&data_1714410, "r_Scepter")
    uint32_t x10_84 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1714410
    *UI2StateDeclI_counter = x10_84 + 1
    data_1714418 = x11_35
else
    (*data_1714410)(&data_1714410, *(x0_34 + 0x10))

data_1714428 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("r_Scepter")

if (x0_35 == 0)
    (*data_1714428)(&data_1714428, "r_Scepter")
    uint32_t x10_86 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1714428
    *UI2StateDeclI_counter = x10_86 + 1
    data_1714430 = x11_36
else
    (*data_1714428)(&data_1714428, *(x0_35 + 0x10))

data_1714448 = 0x400000000002
data_1714450 = Scepter
__builtin_memcpy(&data_1714b00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"50\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1714440 = 0x500000e11
data_1714b20 = 0xffffffff
data_1714b58 = "scholar"
data_1714b60 = 0xd
data_1714b68 = TEXTURE_CARD_GEN_RENAISSANCE_SCHOLAR
data_1714b90 = _vtable_for_UI2StateDecl + 0x10
data_1714b70 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCHOLAR
void* x0_36 = UI2StateDeclTryLookup("r_Scholar")

if (x0_36 == 0)
    (*data_1714b90)(&data_1714b90, "r_Scholar")
    uint32_t x10_89 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1714b90
    *UI2StateDeclI_counter = x10_89 + 1
    data_1714b98 = x11_37
else
    (*data_1714b90)(&data_1714b90, *(x0_36 + 0x10))

data_1714ba8 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("r_Scholar")

if (x0_37 == 0)
    (*data_1714ba8)(&data_1714ba8, "r_Scholar")
    uint32_t x10_91 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1714ba8
    *UI2StateDeclI_counter = x10_91 + 1
    data_1714bb0 = x11_38
else
    (*data_1714ba8)(&data_1714ba8, *(x0_37 + 0x10))

data_1714bc0 = 0x500000e12
data_1714bc8 = 4
data_1714bd0 = Scholar
__builtin_memcpy(&data_1715280, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x08\x00\x00\x00", 
    0x20)
data_17152a0 = 0xffffffff
data_17152d8 = "sculptor"
data_17152e0 = 0x1b
data_17152e8 = TEXTURE_CARD_GEN_RENAISSANCE_SCULPTOR
data_1715310 = _vtable_for_UI2StateDecl + 0x10
data_17152f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCULPTOR
void* x0_38 = UI2StateDeclTryLookup("r_Sculptor")

if (x0_38 == 0)
    (*data_1715310)(&data_1715310, "r_Sculptor")
    uint32_t x10_94 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1715310
    *UI2StateDeclI_counter = x10_94 + 1
    data_1715318 = x11_39
else
    (*data_1715310)(&data_1715310, *(x0_38 + 0x10))

data_1715328 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("r_Sculptor")

if (x0_39 == 0)
    (*data_1715328)(&data_1715328, "r_Sculptor")
    uint32_t x10_96 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1715328
    *UI2StateDeclI_counter = x10_96 + 1
    data_1715330 = x11_40
else
    (*data_1715328)(&data_1715328, *(x0_39 + 0x10))

data_1715340 = 0x500000e13
data_1715348 = 4
data_1715350 = Sculptor
__builtin_memcpy(&data_1715a00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x10\x00\x00\x00\x"
"1a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1715a20 = 0xffffffff
data_1715a58 = "seer"
data_1715a60 = 0x1c
data_1715a68 = TEXTURE_CARD_GEN_RENAISSANCE_SEER
data_1715a90 = _vtable_for_UI2StateDecl + 0x10
data_1715a70 = SOUND_SOUND_CARDS_FX_LANDPLAY_SEER
void* x0_40 = UI2StateDeclTryLookup("r_Seer")

if (x0_40 == 0)
    (*data_1715a90)(&data_1715a90, "r_Seer")
    uint32_t x10_99 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1715a90
    *UI2StateDeclI_counter = x10_99 + 1
    data_1715a98 = x11_41
else
    (*data_1715a90)(&data_1715a90, *(x0_40 + 0x10))

data_1715aa8 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("r_Seer")

if (x0_41 == 0)
    (*data_1715aa8)(&data_1715aa8, "r_Seer")
    uint32_t x10_101 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1715aa8
    *UI2StateDeclI_counter = x10_101 + 1
    data_1715ab0 = x11_42
else
    (*data_1715aa8)(&data_1715aa8, *(x0_41 + 0x10))

data_1715ac0 = 0x500000e14
data_1715ac8 = 4
data_1715ad0 = Seer
__builtin_memcpy(&data_1716180, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x0d\x00\x00\x00\x"
"21\x00\x00\x00\x04\x00\x00\x00", 
    0x20)
data_17161a0 = 0xffffffff
data_17161d8 = "spices"
data_17161e0 = 0xd
data_17161e8 = TEXTURE_CARD_GEN_RENAISSANCE_SPICE_MARKET
data_1716210 = _vtable_for_UI2StateDecl + 0x10
data_17161f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_SPICES
void* x0_42 = UI2StateDeclTryLookup("r_Spices")

if (x0_42 == 0)
    (*data_1716210)(&data_1716210, "r_Spices")
    uint32_t x10_104 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1716210
    *UI2StateDeclI_counter = x10_104 + 1
    data_1716218 = x11_43
else
    (*data_1716210)(&data_1716210, *(x0_42 + 0x10))

data_1716228 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("r_Spices")

if (x0_43 == 0)
    (*data_1716228)(&data_1716228, "r_Spices")
    uint32_t x10_106 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1716228
    *UI2StateDeclI_counter = x10_106 + 1
    data_1716230 = x11_44
else
    (*data_1716228)(&data_1716228, *(x0_43 + 0x10))

__builtin_memset(&data_1716268, 0, 0xb0)
data_1716260 = 0x600000006
data_1716248 = 2
data_1716250 = Spices
data_1716268:4.d = 1
data_1716860 = 1
data_1716278 = Spices_OnGain
data_1716314:4 = 0
data_1716308 = 0
data_1716314 = 0x100000000
__builtin_memcpy(&data_1716900, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x04\x00\x00\x00", 
    0x20)
data_1716240 = 0x500000e15
data_1716920 = 0xffffffff
data_1716958 = "swashbuckler"
data_1716960 = 0x1c
data_1716968 = TEXTURE_CARD_GEN_RENAISSANCE_SWASHBUCKLER
data_1716970 = SOUND_SOUND_CARDS_FX_LANDPLAY_SWASHBUCKLER
data_1716990 = _vtable_for_UI2StateDecl + 0x10
void* x0_44 = UI2StateDeclTryLookup("r_Swashbuckler")

if (x0_44 == 0)
    (*data_1716990)(&data_1716990, "r_Swashbuckler")
    uint32_t x10_108 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1716990
    *UI2StateDeclI_counter = x10_108 + 1
    data_1716998 = x11_45
else
    (*data_1716990)(&data_1716990, *(x0_44 + 0x10))

data_17169a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("r_Swashbuckler")
int128_t v1_14
int128_t v4

if (x0_45 == 0)
    v1_14, v4 = (*data_17169a8)(&data_17169a8, "r_Swashbuckler")
    uint32_t x10_110 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_17169a8
    *UI2StateDeclI_counter = x10_110 + 1
    data_17169b0 = x11_46
else
    v1_14, v4 = (*data_17169a8)(&data_17169a8, *(x0_45 + 0x10))
v1_14.q = 0
v1_14:8.q = 0
data_17169c8 = 4
data_17169d0 = Swashbuckler
__builtin_memset(&data_17169e0, 0, 0x20)
data_17169e0 = 0x10
data_17169f0:8.d = 0xe1d
__builtin_memset(&data_1716a00, 0, 0xa0)
v1_14 = data_1145b90
data_17169c0 = 0x500000e16
__builtin_memset(&data_1717030, 0, 0x50)
data_1717020 = v1_14
__builtin_memcpy(&data_1717080, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"01\x20\x01\x00\x00\x00\x00\x00", 
    0x20)
data_17170a0 = 0xffffffff
data_17170d8 = "treasurer"
data_17170e0 = 8
data_17170e8 = TEXTURE_CARD_GEN_RENAISSANCE_TREASURER
data_1717110 = _vtable_for_UI2StateDecl + 0x10
data_17170f0 = SOUND_SOUND_CARDS_FX_LANDPLAY_TREASURER
void* x0_46 = UI2StateDeclTryLookup("r_Treasurer")

if (x0_46 == 0)
    (*data_1717110)(&data_1717110, "r_Treasurer")
    uint32_t x10_113 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1717110
    *UI2StateDeclI_counter = x10_113 + 1
    data_1717118 = x11_47
else
    (*data_1717110)(&data_1717110, *(x0_46 + 0x10))

data_1717128 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("r_Treasurer")

if (x0_47 == 0)
    (*data_1717128)(&data_1717128, "r_Treasurer")
    uint32_t x10_115 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1717128
    *UI2StateDeclI_counter = x10_115 + 1
    data_1717130 = x11_48
else
    (*data_1717128)(&data_1717128, *(x0_47 + 0x10))

int128_t v0_10
v0_10.q = 0
v0_10:8.q = 0
__builtin_memset(&data_1717160, 0, 0xc0)
v0_10.q = 0x500000e17
data_1717160 = 0x10
data_1717140 = 0x500000e17
data_1717148 = 4
data_1717150 = Treasurer
data_1717170:8.d = 0xe1b
__builtin_memcpy(&data_1717800, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x80\x00\x04\x00\x00\x00", 
    0x20)
data_1717820 = 0xffffffff
data_1717858 = "villain"
data_1717860 = 0x17
data_1717868 = TEXTURE_CARD_GEN_RENAISSANCE_VILLAIN
data_1717890 = _vtable_for_UI2StateDecl + 0x10
data_1717870 = SOUND_SOUND_CARDS_FX_LANDPLAY_VILLAIN
void* x0_48 = UI2StateDeclTryLookup("r_Villain")

if (x0_48 == 0)
    (*data_1717890)(&data_1717890, "r_Villain")
    uint32_t x10_118 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1717890
    *UI2StateDeclI_counter = x10_118 + 1
    data_1717898 = x11_49
else
    (*data_1717890)(&data_1717890, *(x0_48 + 0x10))

data_17178a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("r_Villain")

if (x0_49 == 0)
    (*data_17178a8)(&data_17178a8, "r_Villain")
    uint32_t x10_120 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_17178a8
    *UI2StateDeclI_counter = x10_120 + 1
    data_17178b0 = x11_50
else
    (*data_17178a8)(&data_17178a8, *(x0_49 + 0x10))

data_17178c8 = 0x24
data_17178d0 = Villain
data_1717f80 = v0_1
data_1717f90 = 0
data_17178c0 = 0x500000e18
data_1717f98 = 0x100000000
data_1717fd8 = "flag"
data_1717f94 = 0
data_1717fe0 = 0x11
data_1717fe8 = TEXTURE_CARD_GEN_RENAISSANCE_ARTIFACT_FLAG
data_1718010 = _vtable_for_UI2StateDecl + 0x10
data_1717ff0 = SOUND_SOUND_CARDS_FX_TAKE_ARTIFACT_FLAG
void* x0_50 = UI2StateDeclTryLookup("r_Flag")

if (x0_50 == 0)
    (*data_1718010)(&data_1718010, "r_Flag")
    uint32_t x10_123 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1718010
    *UI2StateDeclI_counter = x10_123 + 1
    data_1718018 = x11_51
else
    (*data_1718010)(&data_1718010, *(x0_50 + 0x10))

data_1718028 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("r_Flag")

if (x0_51 == 0)
    (*data_1718028)(&data_1718028, "r_Flag")
    uint32_t x10_125 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1718028
    *UI2StateDeclI_counter = x10_125 + 1
    data_1718030 = x11_52
else
    (*data_1718028)(&data_1718028, *(x0_51 + 0x10))

int128_t v0_11
v0_11.q = 0
v0_11:8.q = 0
data_1718040 = 0xe19
data_1718048 = 0x4000000
__builtin_memset(&data_1718068, 0, 0xb0)
data_1718068:4.d = 2
data_1718078 = Flag_OnDrawHand
data_1718660 = 1
data_1718114:4 = 0
data_1718108 = 0
data_1718114 = 0x100000000
data_1718700 = v0_1
data_1718710 = 0
data_1718060 = 0x400000006
data_1718718 = 0x100000000
data_1718758 = "horn"
data_1718714 = 0
data_1718760 = 0x14
data_1718768 = TEXTURE_CARD_GEN_RENAISSANCE_ARTIFACT_HORN
data_1718790 = _vtable_for_UI2StateDecl + 0x10
data_1718770 = SOUND_SOUND_CARDS_FX_TAKE_ARTIFACT_HORN
void* x0_52 = UI2StateDeclTryLookup("r_Horn")

if (x0_52 == 0)
    (*data_1718790)(&data_1718790, "r_Horn")
    uint32_t x10_128 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1718790
    *UI2StateDeclI_counter = x10_128 + 1
    data_1718798 = x11_53
else
    (*data_1718790)(&data_1718790, *(x0_52 + 0x10))

data_17187a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("r_Horn")

if (x0_53 == 0)
    (*data_17187a8)(&data_17187a8, "r_Horn")
    uint32_t x10_130 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_17187a8
    *UI2StateDeclI_counter = x10_130 + 1
    data_17187b0 = x11_54
else
    (*data_17187a8)(&data_17187a8, *(x0_53 + 0x10))

data_17187c0 = 0xe1a
data_17187c8 = 0x4000000
int128_t v0_12
v0_12.q = 0
v0_12:8.q = 0
data_17187e8 = zx.o(0)
data_17187e8:4.d = 3
data_17187f8 = zx.o(0)
data_17187f8.q = Horn_OnDiscardFromPlay
__builtin_memset(&data_1718808, 0, 0x90)
data_1718888 = Horn_OnDiscardFromPlay_Test
data_1718de0 = 1
data_1718894:4 = 0
data_17187e0 = 0x400000006
data_1718e80 = v0_1
data_1718e90 = 0
data_1718894 = 0x100000021
data_1718e98 = 0x100000000
data_1718ed8 = &data_73a55a
data_1718e94 = 0
data_1718ee0 = 8
data_1718ee8 = TEXTURE_CARD_GEN_RENAISSANCE_ARTIFACT_KEY
data_1718f10 = _vtable_for_UI2StateDecl + 0x10
data_1718ef0 = SOUND_SOUND_CARDS_FX_TAKE_ARTIFACT_KEY
void* x0_54 = UI2StateDeclTryLookup("r_Key")

if (x0_54 == 0)
    (*data_1718f10)(&data_1718f10, "r_Key")
    uint32_t x10_133 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1718f10
    *UI2StateDeclI_counter = x10_133 + 1
    data_1718f18 = x11_55
else
    (*data_1718f10)(&data_1718f10, *(x0_54 + 0x10))

data_1718f28 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("r_Key")

if (x0_55 == 0)
    (*data_1718f28)(&data_1718f28, "r_Key")
    uint32_t x10_135 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1718f28
    *UI2StateDeclI_counter = x10_135 + 1
    data_1718f30 = x11_56
else
    (*data_1718f28)(&data_1718f28, *(x0_55 + 0x10))

data_1718f40 = 0xe1b
data_1718f48 = 0x4000000
int128_t v0_13
v0_13.q = 0
v0_13:8.q = 0
__builtin_memset(&data_1718f68, 0, 0xb0)
data_1718f78 = Key_OnStartOfTurn
data_1718f68:4.d = 1
data_1719560 = 1
data_1719014:4 = 0
data_1718f60 = 0x400000006
data_1719008 = 0
data_1719014 = 0x100000000
data_1719600 = v0_1
data_1719610 = 0
data_1719618 = 0x100000000
data_1719658 = "lantern"
data_1719614 = 0
data_1719660 = 8
data_1719668 = TEXTURE_CARD_GEN_RENAISSANCE_ARTIFACT_LANTERN
data_1719690 = _vtable_for_UI2StateDecl + 0x10
data_1719670 = SOUND_SOUND_CARDS_FX_TAKE_ARTIFACT_LANTERN
void* x0_56 = UI2StateDeclTryLookup("r_Lantern")

if (x0_56 == 0)
    (*data_1719690)(&data_1719690, "r_Lantern")
    uint32_t x10_138 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1719690
    *UI2StateDeclI_counter = x10_138 + 1
    data_1719698 = x11_57
else
    (*data_1719690)(&data_1719690, *(x0_56 + 0x10))

data_17196a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("r_Lantern")

if (x0_57 == 0)
    (*data_17196a8)(&data_17196a8, "r_Lantern")
    uint32_t x10_140 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_17196a8
    *UI2StateDeclI_counter = x10_140 + 1
    data_17196b0 = x11_58
else
    (*data_17196a8)(&data_17196a8, *(x0_57 + 0x10))

data_17196c0 = 0xe1c
data_17196c8 = 0x4000000
data_1719d80 = v0_1
data_1719d90 = 0
data_1719d98 = 0x100000000
data_1719dd8 = "treasure_chest"
data_1719d94 = 0
data_1719de0 = 0x1c
data_1719de8 = TEXTURE_CARD_GEN_RENAISSANCE_ARTIFACT_CHEST
data_1719e10 = _vtable_for_UI2StateDecl + 0x10
data_1719df0 = SOUND_SOUND_CARDS_FX_TAKE_ARTIFACT_TREASURE_CHEST
void* x0_58 = UI2StateDeclTryLookup("r_Treasure_Chest")

if (x0_58 == 0)
    (*data_1719e10)(&data_1719e10, "r_Treasure_Chest")
    uint32_t x10_143 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1719e10
    *UI2StateDeclI_counter = x10_143 + 1
    data_1719e18 = x11_59
else
    (*data_1719e10)(&data_1719e10, *(x0_58 + 0x10))

data_1719e28 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("r_Treasure_Chest")

if (x0_59 == 0)
    (*data_1719e28)(&data_1719e28, "r_Treasure_Chest")
    uint32_t x10_145 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1719e28
    *UI2StateDeclI_counter = x10_145 + 1
    data_1719e30 = x11_60
else
    (*data_1719e28)(&data_1719e28, *(x0_59 + 0x10))

data_1719e40 = 0xe1d
int128_t v0_15
v0_15.q = 0
v0_15:8.q = 0
__builtin_memset(&data_1719e68, 0, 0xb0)
data_1719e48 = 0x4000000
data_1719e78 = TreasureChest_OnStartOfBuyPhase
data_171a460 = 1
data_1719f14:4 = 0
data_1719e60 = 0x400000006
data_1719e68:4.d = 0
data_1719f08 = 0
data_1719f14 = 0x100000000
__builtin_memcpy(&data_171a500, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_171a520 = 0xffffffff
data_171a558 = "cathedral"
data_171a560 = 0x1c
data_171a568 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_1
data_171a590 = _vtable_for_UI2StateDecl + 0x10
data_171a570 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_CATHEDRAL
void* x0_60 = UI2StateDeclTryLookup("r_Cathedral")

if (x0_60 == 0)
    (*data_171a590)(&data_171a590, "r_Cathedral")
    uint32_t x10_148 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171a590
    *UI2StateDeclI_counter = x10_148 + 1
    data_171a598 = x11_61
else
    (*data_171a590)(&data_171a590, *(x0_60 + 0x10))

data_171a5a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("r_Cathedral")

if (x0_61 == 0)
    (*data_171a5a8)(&data_171a5a8, "r_Cathedral")
    uint32_t x10_150 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171a5a8
    *UI2StateDeclI_counter = x10_150 + 1
    data_171a5b0 = x11_62
else
    (*data_171a5a8)(&data_171a5a8, *(x0_61 + 0x10))

__builtin_memset(&data_171a5e8, 0, 0xb0)
data_171a5c8 = 0x8000000
data_171a5f8 = Cathedral_OnStartOfTurn
data_171a5e8:4.d = 1
data_171abe0 = 1
data_171a694:4 = 0
data_171a5e0 = 0x400000006
data_171a688 = 0
data_171a694 = 0x100000000
__builtin_memcpy(&data_171ac80, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171a5c0 = 0x300000e1e
data_171acd8 = "city_gate"
data_171ace0 = 0x14
data_171ace8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_4
data_171ad10 = _vtable_for_UI2StateDecl + 0x10
data_171acf0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_CITY_GATE
void* x0_62 = UI2StateDeclTryLookup("r_City_Gate")

if (x0_62 == 0)
    (*data_171ad10)(&data_171ad10, "r_City_Gate")
    uint32_t x10_153 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171ad10
    *UI2StateDeclI_counter = x10_153 + 1
    data_171ad18 = x11_63
else
    (*data_171ad10)(&data_171ad10, *(x0_62 + 0x10))

data_171ad28 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("r_City_Gate")

if (x0_63 == 0)
    (*data_171ad28)(&data_171ad28, "r_City_Gate")
    uint32_t x10_155 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171ad28
    *UI2StateDeclI_counter = x10_155 + 1
    data_171ad30 = x11_64
else
    (*data_171ad28)(&data_171ad28, *(x0_63 + 0x10))

__builtin_memset(&data_171ad68, 0, 0xb0)
data_171ad48 = 0x8000000
data_171b400 = v0_1
data_171ad78 = CityGate_OnStartOfTurn
data_171ad68:4.d = 1
data_171b360 = 1
data_171ae14:4 = 0
data_171ad60 = 0x400000006
data_171ae08 = 0
data_171ae14 = 0x100000000
data_171b410 = 0x13
data_171ad40 = 0x300000e1f
data_171b418 = 0x100000000
data_171b458 = "pageant"
data_171b460 = 0x37
data_171b468 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_7
data_171b490 = _vtable_for_UI2StateDecl + 0x10
data_171b470 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_PAGEANT
void* x0_64 = UI2StateDeclTryLookup("r_Pageant")

if (x0_64 == 0)
    (*data_171b490)(&data_171b490, "r_Pageant")
    uint32_t x10_158 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171b490
    *UI2StateDeclI_counter = x10_158 + 1
    data_171b498 = x11_65
else
    (*data_171b490)(&data_171b490, *(x0_64 + 0x10))

data_171b4a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("r_Pageant")

if (x0_65 == 0)
    (*data_171b4a8)(&data_171b4a8, "r_Pageant")
    uint32_t x10_160 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171b4a8
    *UI2StateDeclI_counter = x10_160 + 1
    data_171b4b0 = x11_66
else
    (*data_171b4a8)(&data_171b4a8, *(x0_65 + 0x10))

__builtin_memset(&data_171b4e8, 0, 0xb8)
data_171b594 = 0x100000001
data_171b4c8 = 0x8000000
data_171b4e8:4.d = 4
data_171b4f8 = Pageant_OnEndOfBuyPhase
data_171b588 = Pageant_OnEndOfBuyPhase_Test
data_171bae0 = 1
data_171b4e0 = 0x400000006
__builtin_memcpy(&data_171bb80, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171b4c0 = 0x300000e20
data_171bbd8 = "sewers"
data_171bbe0 = 0x2d
data_171bbe8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_11
data_171bc10 = _vtable_for_UI2StateDecl + 0x10
data_171bbf0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_SEWERS
void* x0_66 = UI2StateDeclTryLookup("r_Sewers")

if (x0_66 == 0)
    (*data_171bc10)(&data_171bc10, "r_Sewers")
    uint32_t x10_163 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171bc10
    *UI2StateDeclI_counter = x10_163 + 1
    data_171bc18 = x11_67
else
    (*data_171bc10)(&data_171bc10, *(x0_66 + 0x10))

data_171bc28 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("r_Sewers")

if (x0_67 == 0)
    (*data_171bc28)(&data_171bc28, "r_Sewers")
    uint32_t x10_165 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171bc28
    *UI2StateDeclI_counter = x10_165 + 1
    data_171bc30 = x11_68
else
    (*data_171bc28)(&data_171bc28, *(x0_67 + 0x10))

__builtin_memset(&data_171bc68, 0, 0xb8)
data_171bd14 = 0x100000001
data_171bc48 = 0x8000000
data_171bc68:4.d = 5
data_171bc78 = Sewers_OnTrash
data_171bd08 = Sewers_OnTrash_Test
data_171c260 = 1
data_171bc60 = 0x400000006
__builtin_memcpy(&data_171c300, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171bc40 = 0x300000e21
data_171c358 = "star_chart"
data_171c360 = 0x11
data_171c368 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_14
data_171c390 = _vtable_for_UI2StateDecl + 0x10
data_171c370 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_STAR_CHART
void* x0_68 = UI2StateDeclTryLookup("r_Star_Chart")

if (x0_68 == 0)
    (*data_171c390)(&data_171c390, "r_Star_Chart")
    uint32_t x10_168 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171c390
    *UI2StateDeclI_counter = x10_168 + 1
    data_171c398 = x11_69
else
    (*data_171c390)(&data_171c390, *(x0_68 + 0x10))

data_171c3a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("r_Star_Chart")

if (x0_69 == 0)
    (*data_171c3a8)(&data_171c3a8, "r_Star_Chart")
    uint32_t x10_170 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171c3a8
    *UI2StateDeclI_counter = x10_170 + 1
    data_171c3b0 = x11_70
else
    (*data_171c3a8)(&data_171c3a8, *(x0_69 + 0x10))

__builtin_memset(&data_171c3e8, 0, 0xb0)
data_171c3c8 = 0x8000000
data_171c3c0 = 0x300000e22
data_171c3f8 = StarChart_OnShuffle
data_171c494:4 = 0
data_171c494 = 0x100000003
data_171c3e8:4.d = 6
data_171c9e0 = 1
data_171c488 = StarChart_OnShuffle_Test
data_171c3e0 = 0x400000006
__builtin_memcpy(&data_171ca80, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x32\x0e\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171cad8 = "exploration"
data_171cae0 = 0x27
data_171cae8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_17
data_171caf0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_EXPLORATION
data_171cb10 = _vtable_for_UI2StateDecl + 0x10
void* x0_70 = UI2StateDeclTryLookup("r_Exploration")

if (x0_70 == 0)
    (*data_171cb10)(&data_171cb10, "r_Exploration")
    uint32_t x10_172 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171cb10
    *UI2StateDeclI_counter = x10_172 + 1
    data_171cb18 = x11_71
else
    (*data_171cb10)(&data_171cb10, *(x0_70 + 0x10))

data_171cb28 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("r_Exploration")

if (x0_71 == 0)
    (*data_171cb28)(&data_171cb28, "r_Exploration")
    uint32_t x10_174 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171cb28
    *UI2StateDeclI_counter = x10_174 + 1
    data_171cb30 = x11_72
else
    (*data_171cb28)(&data_171cb28, *(x0_71 + 0x10))

int128_t v0_16
v0_16.q = 0
v0_16:8.q = 0
data_171cb48 = 0x8000000
__builtin_memset(&data_171cb68, 0, 0xb0)
data_171cc08 = Exploration_OnEndOfBuyPhase_Test
data_171d200 = v0_1
data_171d160 = 1
data_171cb68:4.d = 4
data_171cc14:4 = 0
data_171cb60 = 0x400000006
data_171cb78 = Exploration_OnEndOfBuyPhase
data_171cc14 = 0x100000000
data_171d210 = 0x13
data_171cb40 = 0x400000e23
data_171d218 = 0x100000000
data_171d258 = "fair"
data_171d260 = 0x10
data_171d268 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_20
data_171d290 = _vtable_for_UI2StateDecl + 0x10
data_171d270 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_FAIR
void* x0_72 = UI2StateDeclTryLookup("r_Fair")

if (x0_72 == 0)
    (*data_171d290)(&data_171d290, "r_Fair")
    uint32_t x10_177 = *UI2StateDeclI_counter
    uint64_t x11_73 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171d290
    *UI2StateDeclI_counter = x10_177 + 1
    data_171d298 = x11_73
else
    (*data_171d290)(&data_171d290, *(x0_72 + 0x10))

data_171d2a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("r_Fair")

if (x0_73 == 0)
    (*data_171d2a8)(&data_171d2a8, "r_Fair")
    uint32_t x10_179 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171d2a8
    *UI2StateDeclI_counter = x10_179 + 1
    data_171d2b0 = x11_74
else
    (*data_171d2a8)(&data_171d2a8, *(x0_73 + 0x10))

int128_t v0_17
v0_17.q = 0
v0_17:8.q = 0
__builtin_memset(&data_171d2e8, 0, 0xb0)
data_171d2c8 = 0x8000000
v0_17.q = 0x400000e24
data_171d2e8:4.d = 1
data_171d2f8 = Fair_OnStartOfTurn
data_171d2c0 = 0x400000e24
data_171d8e0 = 1
data_171d394:4 = 0
data_171d2e0 = 0x400000006
data_171d388 = 0
data_171d394 = 0x100000000
__builtin_memcpy(&data_171d980, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171d9d8 = "silos"
data_171d9e0 = 6
data_171d9e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_23
data_171da10 = _vtable_for_UI2StateDecl + 0x10
data_171d9f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_SILOS
void* x0_74 = UI2StateDeclTryLookup("r_Silos")

if (x0_74 == 0)
    (*data_171da10)(&data_171da10, "r_Silos")
    uint32_t x10_182 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171da10
    *UI2StateDeclI_counter = x10_182 + 1
    data_171da18 = x11_75
else
    (*data_171da10)(&data_171da10, *(x0_74 + 0x10))

data_171da28 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("r_Silos")

if (x0_75 == 0)
    (*data_171da28)(&data_171da28, "r_Silos")
    uint32_t x10_184 = *UI2StateDeclI_counter
    uint64_t x11_76 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171da28
    *UI2StateDeclI_counter = x10_184 + 1
    data_171da30 = x11_76
else
    (*data_171da28)(&data_171da28, *(x0_75 + 0x10))

__builtin_memset(&data_171da68, 0, 0xb0)
data_171da48 = 0x8000000
data_171da78 = Silos_OnStartOfTurn
data_171da40 = 0x400000e25
data_171da68:4.d = 1
data_171db08 = Silos_OnStartOfTurn_Test
data_171e060 = 1
data_171db14:4 = 0
data_171da60 = 0x400000006
data_171db14 = 0x100000000
__builtin_memcpy(&data_171e100, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x0a\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_171e120 = 0xffffffff
data_171e158 = "sinister_plot"
data_171e160 = 0x13
data_171e168 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_26
data_171e190 = _vtable_for_UI2StateDecl + 0x10
data_171e170 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_SINISTER_PLOT
void* x0_76 = UI2StateDeclTryLookup("r_Sinister_Plot")

if (x0_76 == 0)
    (*data_171e190)(&data_171e190, "r_Sinister_Plot")
    uint32_t x10_187 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171e190
    *UI2StateDeclI_counter = x10_187 + 1
    data_171e198 = x11_77
else
    (*data_171e190)(&data_171e190, *(x0_76 + 0x10))

data_171e1a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_77 = UI2StateDeclTryLookup("r_Sinister_Plot")

if (x0_77 == 0)
    (*data_171e1a8)(&data_171e1a8, "r_Sinister_Plot")
    uint32_t x10_189 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171e1a8
    *UI2StateDeclI_counter = x10_189 + 1
    data_171e1b0 = x11_78
else
    (*data_171e1a8)(&data_171e1a8, *(x0_77 + 0x10))

__builtin_memset(&data_171e1e8, 0, 0xb0)
data_171e1c8 = 0x8000000
data_171e1f8 = SinisterPlot_OnStartOfTurn
data_171e1e8:4.d = 1
data_171e7e0 = 1
data_171e294:4 = 0
data_171e1e0 = 0x400000006
data_171e288 = 0
data_171e294 = 0x100000000
__builtin_memcpy(&data_171e880, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171e1c0 = 0x400000e26
data_171e8d8 = "academy"
data_171e8e0 = 6
data_171e8e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_29
data_171e910 = _vtable_for_UI2StateDecl + 0x10
data_171e8f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_ACADEMY
void* x0_78 = UI2StateDeclTryLookup("r_Academy")

if (x0_78 == 0)
    (*data_171e910)(&data_171e910, "r_Academy")
    uint32_t x10_192 = *UI2StateDeclI_counter
    uint64_t x11_79 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171e910
    *UI2StateDeclI_counter = x10_192 + 1
    data_171e918 = x11_79
else
    (*data_171e910)(&data_171e910, *(x0_78 + 0x10))

data_171e928 = _vtable_for_UI2StateDecl + 0x10
void* x0_79 = UI2StateDeclTryLookup("r_Academy")

if (x0_79 == 0)
    (*data_171e928)(&data_171e928, "r_Academy")
    uint32_t x10_194 = *UI2StateDeclI_counter
    uint64_t x11_80 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171e928
    *UI2StateDeclI_counter = x10_194 + 1
    data_171e930 = x11_80
else
    (*data_171e928)(&data_171e928, *(x0_79 + 0x10))

__builtin_memset(&data_171e968, 0, 0xb0)
data_171e948 = 0x8000000
data_171e968:4.d = 7
data_171e978 = Academy_OnGain
data_171ea08 = Academy_OnGain_Test
data_171ef60 = 1
data_171ea14:4 = 0
data_171e960 = 0x400000006
data_171ea14 = 0x100000000
__builtin_memcpy(&data_171f000, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171e940 = 0x500000e27
data_171f058 = "capitalism"
data_171f060 = 0x2a
data_171f068 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_32
data_171f090 = _vtable_for_UI2StateDecl + 0x10
data_171f070 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_CAPITALISM
void* x0_80 = UI2StateDeclTryLookup("r_Capitalism")

if (x0_80 == 0)
    (*data_171f090)(&data_171f090, "r_Capitalism")
    uint32_t x10_197 = *UI2StateDeclI_counter
    uint64_t x11_81 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171f090
    *UI2StateDeclI_counter = x10_197 + 1
    data_171f098 = x11_81
else
    (*data_171f090)(&data_171f090, *(x0_80 + 0x10))

data_171f0a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_81 = UI2StateDeclTryLookup("r_Capitalism")

if (x0_81 == 0)
    (*data_171f0a8)(&data_171f0a8, "r_Capitalism")
    uint32_t x10_199 = *UI2StateDeclI_counter
    uint64_t x11_82 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171f0a8
    *UI2StateDeclI_counter = x10_199 + 1
    data_171f0b0 = x11_82
else
    (*data_171f0a8)(&data_171f0a8, *(x0_81 + 0x10))

__builtin_memcpy(&data_171f780, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171f0c8 = 0x8000000
data_171f0c0 = 0x500000e28
data_171f7d8 = "fleet"
data_171f7e0 = 0x2a
data_171f7e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_36
data_171f810 = _vtable_for_UI2StateDecl + 0x10
data_171f7f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_FLEET
void* x0_82 = UI2StateDeclTryLookup("r_Fleet")

if (x0_82 == 0)
    (*data_171f810)(&data_171f810, "r_Fleet")
    uint32_t x10_202 = *UI2StateDeclI_counter
    uint64_t x11_83 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171f810
    *UI2StateDeclI_counter = x10_202 + 1
    data_171f818 = x11_83
else
    (*data_171f810)(&data_171f810, *(x0_82 + 0x10))

data_171f828 = _vtable_for_UI2StateDecl + 0x10
void* x0_83 = UI2StateDeclTryLookup("r_Fleet")

if (x0_83 == 0)
    (*data_171f828)(&data_171f828, "r_Fleet")
    uint32_t x10_204 = *UI2StateDeclI_counter
    uint64_t x11_84 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171f828
    *UI2StateDeclI_counter = x10_204 + 1
    data_171f830 = x11_84
else
    (*data_171f828)(&data_171f828, *(x0_83 + 0x10))

data_171f848 = 0x8000000
__builtin_memcpy(&data_171ff00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_171f840 = 0x500000e29
data_171ff58 = "guildhall"
data_171ff60 = 0x13
data_171ff68 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_39
data_171ff90 = _vtable_for_UI2StateDecl + 0x10
data_171ff70 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_GUILDHALL
void* x0_84 = UI2StateDeclTryLookup("r_Guildhall")

if (x0_84 == 0)
    (*data_171ff90)(&data_171ff90, "r_Guildhall")
    uint32_t x10_207 = *UI2StateDeclI_counter
    uint64_t x11_85 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171ff90
    *UI2StateDeclI_counter = x10_207 + 1
    data_171ff98 = x11_85
else
    (*data_171ff90)(&data_171ff90, *(x0_84 + 0x10))

data_171ffa8 = _vtable_for_UI2StateDecl + 0x10
void* x0_85 = UI2StateDeclTryLookup("r_Guildhall")

if (x0_85 == 0)
    (*data_171ffa8)(&data_171ffa8, "r_Guildhall")
    uint32_t x10_209 = *UI2StateDeclI_counter
    uint64_t x11_86 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_171ffa8
    *UI2StateDeclI_counter = x10_209 + 1
    data_171ffb0 = x11_86
else
    (*data_171ffa8)(&data_171ffa8, *(x0_85 + 0x10))

__builtin_memset(&data_171ffe8, 0, 0xb0)
data_171ffc8 = 0x8000000
data_171ffe8:4.d = 7
data_171fff8 = GuildHall_OnGain
data_1720088 = GuildHall_OnGain_Test
__builtin_memcpy(&data_1720680, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_17205e0 = 1
data_1720094:4 = 0
data_171ffe0 = 0x400000006
data_1720094 = 0x100000000
data_171ffc0 = 0x500000e2a
data_17206d8 = "piazza"
data_17206e0 = 0x2a
data_17206e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_42
data_1720710 = _vtable_for_UI2StateDecl + 0x10
data_17206f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_PIAZZA
void* x0_86 = UI2StateDeclTryLookup("r_Piazza")

if (x0_86 == 0)
    (*data_1720710)(&data_1720710, "r_Piazza")
    uint32_t x10_212 = *UI2StateDeclI_counter
    uint64_t x11_87 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1720710
    *UI2StateDeclI_counter = x10_212 + 1
    data_1720718 = x11_87
else
    (*data_1720710)(&data_1720710, *(x0_86 + 0x10))

data_1720728 = _vtable_for_UI2StateDecl + 0x10
void* x0_87 = UI2StateDeclTryLookup("r_Piazza")

if (x0_87 == 0)
    (*data_1720728)(&data_1720728, "r_Piazza")
    uint32_t x10_214 = *UI2StateDeclI_counter
    uint64_t x11_88 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1720728
    *UI2StateDeclI_counter = x10_214 + 1
    data_1720730 = x11_88
else
    (*data_1720728)(&data_1720728, *(x0_87 + 0x10))

__builtin_memset(&data_1720768, 0, 0xb0)
data_1720748 = 0x8000000
data_1720778 = Piazza_OnStartOfTurn
data_1720740 = 0x500000e2b
data_1720768:4.d = 1
data_1720d60 = 1
data_1720814:4 = 0
data_1720760 = 0x400000006
data_1720808 = 0
data_1720814 = 0x100000000
__builtin_memcpy(&data_1720e00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x16\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1720e58 = "road_network"
data_1720e60 = 0x2d
data_1720e68 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_45
data_1720e90 = _vtable_for_UI2StateDecl + 0x10
data_1720e70 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_ROAD_NETWORK
void* x0_88 = UI2StateDeclTryLookup("r_Road_Network")

if (x0_88 == 0)
    (*data_1720e90)(&data_1720e90, "r_Road_Network")
    uint32_t x10_217 = *UI2StateDeclI_counter
    uint64_t x11_89 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1720e90
    *UI2StateDeclI_counter = x10_217 + 1
    data_1720e98 = x11_89
else
    (*data_1720e90)(&data_1720e90, *(x0_88 + 0x10))

data_1720ea8 = _vtable_for_UI2StateDecl + 0x10
void* x0_89 = UI2StateDeclTryLookup("r_Road_Network")

if (x0_89 == 0)
    (*data_1720ea8)(&data_1720ea8, "r_Road_Network")
    uint32_t x10_219 = *UI2StateDeclI_counter
    uint64_t x11_90 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1720ea8
    *UI2StateDeclI_counter = x10_219 + 1
    data_1720eb0 = x11_90
else
    (*data_1720ea8)(&data_1720ea8, *(x0_89 + 0x10))

__builtin_memset(&data_1720ee8, 0, 0xb0)
data_1720ec8 = 0x8000000
data_1720ee8:4.d = 8
data_1720ef8 = RoadNetwork_OnAnotherGain
data_1720f88 = RoadNetwork_OnAnotherGain_Test
data_17214e0 = 1
data_1720f94:4 = 0
data_1720ee0 = 0x400000006
data_1720f94 = 0x100000000
__builtin_memcpy(&data_1721580, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"04\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1720ec0 = 0x500000e2c
data_17215a0 = 0xffffffff
data_17215d8 = "barracks"
data_17215e0 = 0x2a
data_17215e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_48
data_1721610 = _vtable_for_UI2StateDecl + 0x10
data_17215f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_BARRACKS
void* x0_90 = UI2StateDeclTryLookup("r_Barracks")

if (x0_90 == 0)
    (*data_1721610)(&data_1721610, "r_Barracks")
    uint32_t x10_222 = *UI2StateDeclI_counter
    uint64_t x11_91 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1721610
    *UI2StateDeclI_counter = x10_222 + 1
    data_1721618 = x11_91
else
    (*data_1721610)(&data_1721610, *(x0_90 + 0x10))

data_1721628 = _vtable_for_UI2StateDecl + 0x10
void* x0_91 = UI2StateDeclTryLookup("r_Barracks")

if (x0_91 == 0)
    (*data_1721628)(&data_1721628, "r_Barracks")
    uint32_t x10_224 = *UI2StateDeclI_counter
    uint64_t x11_92 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1721628
    *UI2StateDeclI_counter = x10_224 + 1
    data_1721630 = x11_92
else
    (*data_1721628)(&data_1721628, *(x0_91 + 0x10))

__builtin_memset(&data_1721668, 0, 0xb0)
data_1721648 = 0x8000000
data_1721678 = Barracks_OnStartOfTurn
data_1721668:4.d = 1
data_1721c60 = 1
data_1721714:4 = 0
data_1721660 = 0x400000006
data_1721708 = 0
data_1721714 = 0x100000000
__builtin_memcpy(&data_1721d00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1721640 = 0x600000e2d
data_1721d58 = "crop_rotation"
data_1721d60 = 6
data_1721d68 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_51
data_1721d90 = _vtable_for_UI2StateDecl + 0x10
data_1721d70 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_CROP_ROTATION
void* x0_92 = UI2StateDeclTryLookup("r_Crop_Rotation")

if (x0_92 == 0)
    (*data_1721d90)(&data_1721d90, "r_Crop_Rotation")
    uint32_t x10_227 = *UI2StateDeclI_counter
    uint64_t x11_93 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1721d90
    *UI2StateDeclI_counter = x10_227 + 1
    data_1721d98 = x11_93
else
    (*data_1721d90)(&data_1721d90, *(x0_92 + 0x10))

data_1721da8 = _vtable_for_UI2StateDecl + 0x10
void* x0_93 = UI2StateDeclTryLookup("r_Crop_Rotation")

if (x0_93 == 0)
    (*data_1721da8)(&data_1721da8, "r_Crop_Rotation")
    uint32_t x10_229 = *UI2StateDeclI_counter
    uint64_t x11_94 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1721da8
    *UI2StateDeclI_counter = x10_229 + 1
    data_1721db0 = x11_94
else
    (*data_1721da8)(&data_1721da8, *(x0_93 + 0x10))

__builtin_memset(&data_1721de8, 0, 0xb8)
data_1721e94 = 0x100000001
data_1721dc8 = 0x8000000
data_1721dc0 = 0x600000e2e
data_1721df8 = CropRotation_StartOfTurn
data_1721e88 = CropRotation_Test
data_1721de0 = 0x400000006
data_1721de8:4.d = 1
data_17223e0 = 1
__builtin_memcpy(&data_1722480, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x33\x0e\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_17224d8 = "innovation"
data_17224e0 = 0x37
data_17224e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_54
data_17224f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_INNOVATION
data_1722510 = _vtable_for_UI2StateDecl + 0x10
void* x0_94 = UI2StateDeclTryLookup("r_Innovation")

if (x0_94 == 0)
    (*data_1722510)(&data_1722510, "r_Innovation")
    uint32_t x10_231 = *UI2StateDeclI_counter
    uint64_t x11_95 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1722510
    *UI2StateDeclI_counter = x10_231 + 1
    data_1722518 = x11_95
else
    (*data_1722510)(&data_1722510, *(x0_94 + 0x10))

data_1722528 = _vtable_for_UI2StateDecl + 0x10
void* x0_95 = UI2StateDeclTryLookup("r_Innovation")

if (x0_95 == 0)
    (*data_1722528)(&data_1722528, "r_Innovation")
    uint32_t x10_233 = *UI2StateDeclI_counter
    uint64_t x11_96 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1722528
    *UI2StateDeclI_counter = x10_233 + 1
    data_1722530 = x11_96
else
    (*data_1722528)(&data_1722528, *(x0_95 + 0x10))

int128_t v0_18
v0_18.q = 0
v0_18:8.q = 0
data_1722548 = 0x8000000
__builtin_memset(&data_1722568, 0, 0xb8)
v0_18.d = 1
v0_18:4.d = 1
data_1722614 = 0x100000001
data_1722608 = Innovation_OnGain_Test
data_1722b60 = 1
data_1722568:4.d = 7
data_1722560 = 0x400000006
data_1722578 = Innovation_OnGain
__builtin_memcpy(&data_1722c00, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1722540 = 0x600000e2f
data_1722c58 = "canal"
data_1722c60 = 0x1c
data_1722c68 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_57
data_1722c90 = _vtable_for_UI2StateDecl + 0x10
data_1722c70 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_CANAL
void* x0_96 = UI2StateDeclTryLookup("r_Canal")

if (x0_96 == 0)
    (*data_1722c90)(&data_1722c90, "r_Canal")
    uint32_t x10_236 = *UI2StateDeclI_counter
    uint64_t x11_97 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1722c90
    *UI2StateDeclI_counter = x10_236 + 1
    data_1722c98 = x11_97
else
    (*data_1722c90)(&data_1722c90, *(x0_96 + 0x10))

data_1722ca8 = _vtable_for_UI2StateDecl + 0x10
void* x0_97 = UI2StateDeclTryLookup("r_Canal")

if (x0_97 == 0)
    (*data_1722ca8)(&data_1722ca8, "r_Canal")
    uint32_t x10_238 = *UI2StateDeclI_counter
    uint64_t x11_98 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1722ca8
    *UI2StateDeclI_counter = x10_238 + 1
    data_1722cb0 = x11_98
else
    (*data_1722ca8)(&data_1722ca8, *(x0_97 + 0x10))

__builtin_memset(&data_1722ce0, 0, 0xc0)
data_1722ce0 = 7
__builtin_memcpy(&data_1723380, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1722cc8 = 0x8000000
data_1722cf0:8.d = 2
data_1722d90:8.d = 1
data_17232e0 = 1
data_1722cc0 = 0x700000e30
data_1722d80 = 0x300000001
data_17233d8 = "citadel"
data_17233e0 = 0x14
data_17233e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_62
data_1723410 = _vtable_for_UI2StateDecl + 0x10
data_17233f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_CITADEL
void* x0_98 = UI2StateDeclTryLookup("r_Citadel")

if (x0_98 == 0)
    (*data_1723410)(&data_1723410, "r_Citadel")
    uint32_t x10_241 = *UI2StateDeclI_counter
    uint64_t x11_99 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1723410
    *UI2StateDeclI_counter = x10_241 + 1
    data_1723418 = x11_99
else
    (*data_1723410)(&data_1723410, *(x0_98 + 0x10))

data_1723428 = _vtable_for_UI2StateDecl + 0x10
void* x0_99 = UI2StateDeclTryLookup("r_Citadel")

if (x0_99 == 0)
    (*data_1723428)(&data_1723428, "r_Citadel")
    uint32_t x10_243 = *UI2StateDeclI_counter
    uint64_t x11_100 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1723428
    *UI2StateDeclI_counter = x10_243 + 1
    data_1723430 = x11_100
else
    (*data_1723428)(&data_1723428, *(x0_99 + 0x10))

__builtin_memset(&data_1723468, 0, 0xb0)
data_1723448 = 0x8000000
data_1723468:4.d = 0xa
int128_t v1_30
v1_30.q = 4
data_1723478 = Citadel_OnAfterPlay
data_1723508 = Citadel_OnPlay_Test
v1_30 = data_71a6a0
data_1723a60 = 1
data_1723514:4 = 0
data_1723460 = 0x400000006
data_1723514 = 0x100000000
data_1723440 = 0x800000e31
__builtin_memcpy(&data_1723b00, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
int128_t var_b0_1 = v1_30
data_1723b58 = "exploration"
data_1723b60 = 0x27
data_1723b68 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_17
data_1723b70 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_EXPLORATION
data_1723b90 = _vtable_for_UI2StateDecl + 0x10
void* x0_100 = UI2StateDeclTryLookup("r22_Exploration")

if (x0_100 == 0)
    (*data_1723b90)(&data_1723b90, "r22_Exploration")
    uint32_t x10_245 = *UI2StateDeclI_counter
    uint64_t x11_102 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1723b90
    *UI2StateDeclI_counter = x10_245 + 1
    data_1723b98 = x11_102
else
    (*data_1723b90)(&data_1723b90, *(x0_100 + 0x10))

data_1723ba8 = _vtable_for_UI2StateDecl + 0x10
void* x0_101 = UI2StateDeclTryLookup("r_Exploration")

if (x0_101 == 0)
    (*data_1723ba8)(&data_1723ba8, "r_Exploration")
    uint32_t x10_247 = *UI2StateDeclI_counter
    uint64_t x11_103 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1723ba8
    *UI2StateDeclI_counter = x10_247 + 1
    data_1723bb0 = x11_103
else
    (*data_1723ba8)(&data_1723ba8, *(x0_101 + 0x10))

int128_t v0_19
v0_19.q = 0
v0_19:8.q = 0
data_1723bc8 = 0x8000000
data_1723bc0 = 0x400000e23
data_1723be8 = zx.o(0)
data_1723be8:4.d = 4
__builtin_memset(&data_1723bf8, 0, 0xa0)
data_1723c88 = Exploration22_OnEndOfBuyPhase_Test
data_17241e0 = 1
data_1723bf8 = Exploration_OnEndOfBuyPhase
data_1723c94:4 = 0
data_1723be0 = 0x400000006
data_1723c94 = 0x100000000
__builtin_memcpy(&data_1724280, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_17242d8 = "innovation"
data_17242e0 = 0x37
data_17242e8 = TEXTURE_CARD_GEN_RENAISSANCE_RENAISSANCE_PROJECT_CARDS_54
data_17242f0 = SOUND_SOUND_CARDS_FX_BUILD_PROJECT_INNOVATION
data_1724310 = _vtable_for_UI2StateDecl + 0x10
void* x0_102 = UI2StateDeclTryLookup("r22_Innovation")

if (x0_102 == 0)
    (*data_1724310)(&data_1724310, "r22_Innovation")
    uint32_t x10_249 = *UI2StateDeclI_counter
    uint64_t x11_105 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1724310
    *UI2StateDeclI_counter = x10_249 + 1
    data_1724318 = x11_105
else
    (*data_1724310)(&data_1724310, *(x0_102 + 0x10))

data_1724328 = _vtable_for_UI2StateDecl + 0x10
void* x0_103 = UI2StateDeclTryLookup("r_Innovation")
int64_t result

if (x0_103 == 0)
    result = (*data_1724328)(&data_1724328, "r_Innovation")
    uint32_t x10_251 = *UI2StateDeclI_counter
    uint64_t x11_106 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1724328
    *UI2StateDeclI_counter = x10_251 + 1
    data_1724330 = x11_106
else
    result = (*data_1724328)(&data_1724328, *(x0_103 + 0x10))

data_1724348 = 0x8000000
data_1724340 = 0x600000e2f
data_1724368 = zx.o(0)
data_1724368:4.d = 7
__builtin_memset(&data_1724378, 0, 0xa0)
data_1724378 = Innovation_OnGain
data_1724360 = 0x400000006
data_1724414:4 = 0
data_1724408 = Innovation22_OnGain_Test
data_1724414 = 0x100000021
data_1724960 = 1
return result
