// 函数: sub_aa4920
// 地址: 0xaa4920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x16c9d88, 0, 0x28500)
data_16c9da0 = 0x100000000
int128_t v0 = data_71bc30
data_16c9de0 = "cage"
data_16c9de8 = 0x1b
data_16c9df0 = TEXTURE_CARD_GEN_PLUNDER_CAGE
data_16c9df8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_CAGE
data_16c9d90 = v0
data_16c9e18 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("pl_cage")

if (x0 == 0)
    (*data_16c9e18)(&data_16c9e18, "pl_cage")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c9e18
    *UI2StateDeclI_counter = x10_1 + 1
    data_16c9e20 = x11_1
else
    (*data_16c9e18)(&data_16c9e18, *(x0 + 0x10))

data_16c9e30 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("pl_cage")

if (x0_1 == 0)
    (*data_16c9e30)(&data_16c9e30, "pl_cage")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c9e30
    *UI2StateDeclI_counter = x10_3 + 1
    data_16c9e38 = x11_2
else
    (*data_16c9e30)(&data_16c9e30, *(x0_1 + 0x10))

data_16c9e48 = 0x200001100
data_1142870
__builtin_memcpy(&data_16ca468, 
    "\x45\x00\x00\x00\x00\x00\x00\x00\xf3\xda\x75\x00\x00\x00\x00\x00\x46\x00\x00\x00\x00\x00\x00\x00\x"
"83\x60\x75\x00\x00\x00\x00\x00", 
    0x20)
data_1142890
data_16c9e50 = 0x82
data_16c9e58 = Cage
__builtin_memset(&data_16ca488, 0, 0x20)
int128_t v1 = data_71c2d0
__builtin_memcpy(&data_16ca508, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ca560 = "grotto"
data_16ca568 = 0x2b
data_16ca570 = TEXTURE_CARD_GEN_PLUNDER_GROTTO
data_16ca598 = _vtable_for_UI2StateDecl + 0x10
data_16ca578 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_GROTTO
void* x0_2 = UI2StateDeclTryLookup("pl_grotto")

if (x0_2 == 0)
    (*data_16ca598)(&data_16ca598, "pl_grotto")
    uint32_t x10_6 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ca598
    *UI2StateDeclI_counter = x10_6 + 1
    data_16ca5a0 = x11_3
else
    (*data_16ca598)(&data_16ca598, *(x0_2 + 0x10))

data_16ca5b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("pl_grotto")

if (x0_3 == 0)
    (*data_16ca5b0)(&data_16ca5b0, "pl_grotto")
    uint32_t x10_8 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ca5b0
    *UI2StateDeclI_counter = x10_8 + 1
    data_16ca5b8 = x11_4
else
    (*data_16ca5b0)(&data_16ca5b0, *(x0_3 + 0x10))

int128_t v0_1
v0_1.q = 0x200001101
data_16ca5d0 = 0x84
data_16ca5d8 = Grotto
data_16ca5c8 = 0x200001101
data_16cabe8 = 1
__builtin_memcpy(&data_16cac88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"20\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16caca8 = 0xffffffff
data_16cace0 = "jewelled_egg"
data_16cace8 = 0x28
data_16cacf0 = TEXTURE_CARD_GEN_PLUNDER_JEWELLED_EGG
data_16cad18 = _vtable_for_UI2StateDecl + 0x10
data_16cacf8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_JEWELED_EGG
void* x0_4 = UI2StateDeclTryLookup("pl_jewelled_egg")

if (x0_4 == 0)
    (*data_16cad18)(&data_16cad18, "pl_jewelled_egg")
    uint32_t x10_11 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cad18
    *UI2StateDeclI_counter = x10_11 + 1
    data_16cad20 = x11_5
else
    (*data_16cad18)(&data_16cad18, *(x0_4 + 0x10))

data_16cad30 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("pl_jewelled_egg")

if (x0_5 == 0)
    (*data_16cad30)(&data_16cad30, "pl_jewelled_egg")
    uint32_t x10_13 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cad30
    *UI2StateDeclI_counter = x10_13 + 1
    data_16cad38 = x11_6
else
    (*data_16cad30)(&data_16cad30, *(x0_5 + 0x10))

int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
data_16cad50 = 2
data_16cad58 = JewelledEgg
data_16cad48 = 0x200001102
__builtin_memset(&data_16cad68, 0, 0xc0)
data_16cad68 = 0xc
data_16cad78:8.d = 0x1128
data_16cae18:4.d = 0
__builtin_memset(&data_16cae30, 0, 0x40)
data_16cae28 = 0x600000006
data_16cae30:4.d = 2
__builtin_memset(&data_16cae70, 0, 0x78)
data_16cae40 = JewelledEgg_OnTrash
data_16cb368 = 1
data_16caed0 = 0
data_16caedc = 0x100000000
__builtin_memcpy(&data_16cb408, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"20\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cb428 = 0xffffffff
data_16cb460 = "buried_treasure"
data_16cb468 = 0x17
data_16cb470 = TEXTURE_CARD_GEN_PLUNDER_BURIED_TREASURE
data_16cb478 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_BURIED_TREASURE
data_16cb498 = _vtable_for_UI2StateDecl + 0x10
void* x0_6 = UI2StateDeclTryLookup("pl_buried_treasure")

if (x0_6 == 0)
    (*data_16cb498)(&data_16cb498, "pl_buried_treasure")
    uint32_t x10_15 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cb498
    *UI2StateDeclI_counter = x10_15 + 1
    data_16cb4a0 = x11_7
else
    (*data_16cb498)(&data_16cb498, *(x0_6 + 0x10))

data_16cb4b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("pl_buried_treasure")

if (x0_7 == 0)
    (*data_16cb4b0)(&data_16cb4b0, "pl_buried_treasure")
    uint32_t x10_17 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cb4b0
    *UI2StateDeclI_counter = x10_17 + 1
    data_16cb4b8 = x11_8
else
    (*data_16cb4b0)(&data_16cb4b0, *(x0_7 + 0x10))

data_16cb4d0 = 0x82
data_16cb4d8 = BuriedTreasure
data_16cb4f0 = zx.o(0)
data_16cb4f0:4.d = 1
data_16cb500 = zx.o(0)
data_16cb500.q = BuriedTreasure_OnGain
data_16cb590 = zx.o(0)
data_16cb590.q = BuriedTreasure_OnGain_Test
data_16cb5a0 = 0
__builtin_memset(&data_16cb510, 0, 0x80)
data_16cb4e8 = 0x600000006
data_16cb4c8 = 0x500001103
data_16cb590:0xc = 0x3c00000002
__builtin_memset(&data_16cbb08, 0, 0x20)
__builtin_memcpy(&data_16cbae8, 
    "\x3b\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x3c\x00\x00\x00\x00\x00\x00\x00\x"
"02\x24\x76\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_16cbb88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16cbbe0 = "search"
__builtin_memset(&data_16cbbc0, 0, 0x20)
__builtin_memcpy(&data_16cbba0, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cbbe8 = 8
data_16cbbf0 = TEXTURE_CARD_GEN_PLUNDER_SEARCH
data_16cbc18 = _vtable_for_UI2StateDecl + 0x10
data_16cbbf8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SEARCH
void* x0_8 = UI2StateDeclTryLookup("pl_search")

if (x0_8 == 0)
    (*data_16cbc18)(&data_16cbc18, "pl_search")
    uint32_t x10_20 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cbc18
    *UI2StateDeclI_counter = x10_20 + 1
    data_16cbc20 = x11_9
else
    (*data_16cbc18)(&data_16cbc18, *(x0_8 + 0x10))

data_16cbc30 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("pl_search")

if (x0_9 == 0)
    (*data_16cbc30)(&data_16cbc30, "pl_search")
    uint32_t x10_22 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cbc30
    *UI2StateDeclI_counter = x10_22 + 1
    data_16cbc38 = x11_10
else
    (*data_16cbc30)(&data_16cbc30, *(x0_9 + 0x10))

__builtin_memset(&data_16cbc68, 0, 0xc0)
data_16cbc50 = 0x84
data_16cbc58 = Search
data_16cbc78:8.d = 0x1128
data_16cbc48 = 0x200001104
data_16cbc68 = 0xc
data_16cc268 = 1
data_16cbd18:4.d = 0
__builtin_memcpy(&data_16cc308, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x16\x00\x00\x00\x07\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cc328 = 0xffffffff
data_16cc360 = "secluded_shrine"
data_16cc368 = 0x27
data_16cc370 = TEXTURE_CARD_GEN_PLUNDER_SECLUDED_SHRINE
data_16cc398 = _vtable_for_UI2StateDecl + 0x10
data_16cc378 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SECLUDED_SHRINE
void* x0_10 = UI2StateDeclTryLookup("pl_secluded_shrine")

if (x0_10 == 0)
    (*data_16cc398)(&data_16cc398, "pl_secluded_shrine")
    uint32_t x10_25 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cc398
    *UI2StateDeclI_counter = x10_25 + 1
    data_16cc3a0 = x11_11
else
    (*data_16cc398)(&data_16cc398, *(x0_10 + 0x10))

data_16cc3b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("pl_secluded_shrine")

if (x0_11 == 0)
    (*data_16cc3b0)(&data_16cc3b0, "pl_secluded_shrine")
    uint32_t x10_27 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cc3b0
    *UI2StateDeclI_counter = x10_27 + 1
    data_16cc3b8 = x11_12
else
    (*data_16cc3b0)(&data_16cc3b0, *(x0_11 + 0x10))

data_16cc3d0 = 0x84
data_16cc3d8 = SecludedShrine
data_16cc3c8 = 0x300001105
data_16cc9e8 = 1
__builtin_memcpy(&data_16cca88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x06\x00\x00\x00\x"
"10\x00\x00\x20\x00\x00\x00\x00", 
    0x20)
data_16ccaa8 = 0xffffffff
data_16ccae0 = "siren"
data_16ccae8 = 0x27
data_16ccaf0 = TEXTURE_CARD_GEN_PLUNDER_SIREN
data_16ccb18 = _vtable_for_UI2StateDecl + 0x10
data_16ccaf8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SIREN
void* x0_12 = UI2StateDeclTryLookup("pl_siren")

if (x0_12 == 0)
    (*data_16ccb18)(&data_16ccb18, "pl_siren")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ccb18
    *UI2StateDeclI_counter = x10_30 + 1
    data_16ccb20 = x11_13
else
    (*data_16ccb18)(&data_16ccb18, *(x0_12 + 0x10))

data_16ccb30 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("pl_siren")
int128_t v0_3
int128_t v1_3
int128_t v4_1

if (x0_13 == 0)
    v0_3, v1_3, v4_1 = (*data_16ccb30)(&data_16ccb30, "pl_siren")
    uint32_t x10_32 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ccb30
    *UI2StateDeclI_counter = x10_32 + 1
    data_16ccb38 = x11_14
else
    v0_3, v1_3, v4_1 = (*data_16ccb30)(&data_16ccb30, *(x0_13 + 0x10))
v0_3.q = 0
v0_3:8.q = 0
data_16ccb50 = 0xa4
data_16ccb58 = Siren
data_16ccb70 = zx.o(0)
data_16ccb70:4.d = 1
data_16ccc10 = zx.o(0)
v1_3.d = 6
v1_3:4.d = 6
data_16ccb80 = zx.o(0)
data_16ccc10.q = Siren_OnGain_Useful_Test
data_16ccb80.q = Siren_OnGain
__builtin_memset(&data_16ccb90, 0, 0x80)
data_16ccb68 = 0x600000006
data_1142910
v1_3 = data_1142920
data_16ccc20 = 0
data_16ccb48 = 0x300001106
data_16ccc10:0xc = 0x3200000000
data_16cd198 = v1_3
v0_3 = data_1142930
__builtin_memcpy(&data_16cd168, 
    "\x31\x00\x00\x00\x00\x00\x00\x00\x5d\xa1\x75\x00\x00\x00\x00\x00\x32\x00\x00\x00\x00\x00\x00\x00\x"
"f3\xda\x75\x00\x00\x00\x00\x00\x33\x00\x00\x00\x00\x00\x00\x00\xec\x68\x77\x00\x00\x00\x00\x
        00", 
    0x30)
__builtin_memset(&data_16cd1b8, 0, 0x50)
data_16cd1a8 = v0_3
__builtin_memcpy(&data_16cd208, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cd228 = 0xffffffff
data_16cd260 = "stowaway"
data_16cd268 = 8
data_16cd270 = TEXTURE_CARD_GEN_PLUNDER_STOWAWAY
data_16cd298 = _vtable_for_UI2StateDecl + 0x10
data_16cd278 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_STOWAWAY
void* x0_14 = UI2StateDeclTryLookup("pl_stowaway")

if (x0_14 == 0)
    (*data_16cd298)(&data_16cd298, "pl_stowaway")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cd298
    *UI2StateDeclI_counter = x10_35 + 1
    data_16cd2a0 = x11_15
else
    (*data_16cd298)(&data_16cd298, *(x0_14 + 0x10))

data_16cd2b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("pl_stowaway")

if (x0_15 == 0)
    (*data_16cd2b0)(&data_16cd2b0, "pl_stowaway")
    uint32_t x10_37 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cd2b0
    *UI2StateDeclI_counter = x10_37 + 1
    data_16cd2b8 = x11_16
else
    (*data_16cd2b0)(&data_16cd2b0, *(x0_15 + 0x10))

data_16cd2d0 = 0xc4
data_16cd2d8 = Stowaway
int128_t v0_4
v0_4.q = 0
v0_4:8.q = 0
data_16cd2f0 = zx.o(0)
data_16cd2f0:4.d = 2
__builtin_memset(&data_16cd300, 0, 0xa8)
data_16cd300 = Stowaway_OnGain
data_16cd390 = Stowaway_OnGainTest
data_16cd2c8 = 0x300001107
data_16cd2e8 = 6
data_16cd39c = 0x3500000003
__builtin_memset(&data_16cd3b0, 0, 0xb8)
data_16cd3a8 = 6
data_16cd3b0:4.d = 6
data_11429b0
data_16cd3c0 = Stowaway_OnGain
data_16cd450 = Stowaway_OnGainTest
data_16cd45c = 0x3500000003
__builtin_memset(&data_16cd908, 0, 0x20)
__builtin_memcpy(&data_16cd8e8, 
    "\x35\x00\x00\x00\x00\x00\x00\x00\x02\x24\x76\x00\x00\x00\x00\x00\x34\x00\x00\x00\x00\x00\x00\x00\x"
"5d\xa1\x75\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_16cd988, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"14\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cd9a8 = 0xffffffff
data_16cd9e0 = "swamp_shacks"
data_16cd9e8 = 0x1b
data_16cd9f0 = TEXTURE_CARD_GEN_PLUNDER_SWAMP_SHACKS
data_16cd9f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SWAMP_SHACKS
data_16cda18 = _vtable_for_UI2StateDecl + 0x10
void* x0_16 = UI2StateDeclTryLookup("pl_swamp_shacks")

if (x0_16 == 0)
    (*data_16cda18)(&data_16cda18, "pl_swamp_shacks")
    uint32_t x10_39 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cda18
    *UI2StateDeclI_counter = x10_39 + 1
    data_16cda20 = x11_17
else
    (*data_16cda18)(&data_16cda18, *(x0_16 + 0x10))

data_16cda30 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("pl_swamp_shacks")

if (x0_17 == 0)
    (*data_16cda30)(&data_16cda30, "pl_swamp_shacks")
    uint32_t x10_41 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cda30
    *UI2StateDeclI_counter = x10_41 + 1
    data_16cda38 = x11_18
else
    (*data_16cda30)(&data_16cda30, *(x0_17 + 0x10))

data_1142a00
data_16cda48 = 0x400001108
data_11429e0
data_16ce0a8 = data_11429d0
__builtin_memset(&data_16ce0b8, 0, 0x50)
data_16cda50 = 4
data_16cda58 = SwampShacks
__builtin_memcpy(&data_16ce108, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x"
"03\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16ce128 = 0xffffffff
data_16ce160 = "taskmaster"
data_16ce168 = 8
data_16ce170 = TEXTURE_CARD_GEN_PLUNDER_TASKMASTER
data_16ce198 = _vtable_for_UI2StateDecl + 0x10
data_16ce178 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_TASKMASTER
void* x0_18 = UI2StateDeclTryLookup("pl_taskmaster")

if (x0_18 == 0)
    (*data_16ce198)(&data_16ce198, "pl_taskmaster")
    uint32_t x10_44 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ce198
    *UI2StateDeclI_counter = x10_44 + 1
    data_16ce1a0 = x11_19
else
    (*data_16ce198)(&data_16ce198, *(x0_18 + 0x10))

data_16ce1b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("pl_taskmaster")
int128_t v1_4
int128_t v2_1

if (x0_19 == 0)
    v1_4, v2_1 = (*data_16ce1b0)(&data_16ce1b0, "pl_taskmaster")
    uint32_t x10_46 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ce1b0
    *UI2StateDeclI_counter = x10_46 + 1
    data_16ce1b8 = x11_20
else
    v1_4, v2_1 = (*data_16ce1b0)(&data_16ce1b0, *(x0_19 + 0x10))

data_16ce1d0 = 0x84
data_16ce1d8 = Taskmaster
data_16ce888 = v1
v1_4 = data_7e7e28
v2_1 = data_7e7e38
data_16ce7e8 = 1
data_16ce898 = 1
data_16ce1c8 = 0x300001109
data_16ce8a0 = v1_4
data_16ce8e0 = "cabin_boy"
data_16ce8b0 = v2_1
__builtin_memset(&data_16ce8c0, 0, 0x20)
data_16ce8e8 = 0x1d
data_16ce8f0 = TEXTURE_CARD_GEN_PLUNDER_CABIN_BOY
data_16ce918 = _vtable_for_UI2StateDecl + 0x10
data_16ce8f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_CABIN_BOY
void* x0_20 = UI2StateDeclTryLookup("pl_cabin_boy")

if (x0_20 == 0)
    (*data_16ce918)(&data_16ce918, "pl_cabin_boy")
    uint32_t x10_49 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ce918
    *UI2StateDeclI_counter = x10_49 + 1
    data_16ce920 = x11_21
else
    (*data_16ce918)(&data_16ce918, *(x0_20 + 0x10))

data_16ce930 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("pl_cabin_boy")

if (x0_21 == 0)
    (*data_16ce930)(&data_16ce930, "pl_cabin_boy")
    uint32_t x10_51 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ce930
    *UI2StateDeclI_counter = x10_51 + 1
    data_16ce938 = x11_22
else
    (*data_16ce930)(&data_16ce930, *(x0_21 + 0x10))

int128_t v0_6
v0_6.q = 0x40000110a
data_16ce950 = 0x84
data_16ce958 = CabinBoy
data_16ce948 = 0x40000110a
data_16cef68 = 1
__builtin_memcpy(&data_16cf008, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"01\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cf028 = 0xffffffff
data_16cf060 = "crucible"
data_16cf068 = 8
data_16cf070 = TEXTURE_CARD_GEN_PLUNDER_CRUCIBLE
data_16cf098 = _vtable_for_UI2StateDecl + 0x10
data_16cf078 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_CRUCIBLE
void* x0_22 = UI2StateDeclTryLookup("pl_crucible")

if (x0_22 == 0)
    (*data_16cf098)(&data_16cf098, "pl_crucible")
    uint32_t x10_54 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cf098
    *UI2StateDeclI_counter = x10_54 + 1
    data_16cf0a0 = x11_23
else
    (*data_16cf098)(&data_16cf098, *(x0_22 + 0x10))

data_16cf0b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("pl_crucible")

if (x0_23 == 0)
    (*data_16cf0b0)(&data_16cf0b0, "pl_crucible")
    uint32_t x10_56 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cf0b0
    *UI2StateDeclI_counter = x10_56 + 1
    data_16cf0b8 = x11_24
else
    (*data_16cf0b0)(&data_16cf0b0, *(x0_23 + 0x10))

data_16cf0d0 = 2
data_16cf0d8 = Crucible
__builtin_memcpy(&data_16cf788, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cf0c8 = 0x40000110b
data_16cf7a8 = 0xffffffff
data_16cf7e0 = "fortune_hunter"
data_16cf7e8 = 0x1d
data_16cf7f0 = TEXTURE_CARD_GEN_PLUNDER_FORTUNE_HUNTER
data_16cf818 = _vtable_for_UI2StateDecl + 0x10
data_16cf7f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_FORTUNE_HUNTER
void* x0_24 = UI2StateDeclTryLookup("pl_fortune_hunter")

if (x0_24 == 0)
    (*data_16cf818)(&data_16cf818, "pl_fortune_hunter")
    uint32_t x10_59 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cf818
    *UI2StateDeclI_counter = x10_59 + 1
    data_16cf820 = x11_25
else
    (*data_16cf818)(&data_16cf818, *(x0_24 + 0x10))

data_16cf830 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("pl_fortune_hunter")

if (x0_25 == 0)
    (*data_16cf830)(&data_16cf830, "pl_fortune_hunter")
    uint32_t x10_61 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cf830
    *UI2StateDeclI_counter = x10_61 + 1
    data_16cf838 = x11_26
else
    (*data_16cf830)(&data_16cf830, *(x0_25 + 0x10))

data_16cf850 = 4
data_16cf858 = FortuneHunter
__builtin_memcpy(&data_16cff08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16cf848 = 0x40000110c
data_16cff28 = 0xffffffff
data_16cff60 = "gondola"
data_16cff68 = 0x27
data_16cff70 = TEXTURE_CARD_GEN_PLUNDER_GONDOLA
data_16cff98 = _vtable_for_UI2StateDecl + 0x10
data_16cff78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_GONDOLA
void* x0_26 = UI2StateDeclTryLookup("pl_gondola")

if (x0_26 == 0)
    (*data_16cff98)(&data_16cff98, "pl_gondola")
    uint32_t x10_64 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cff98
    *UI2StateDeclI_counter = x10_64 + 1
    data_16cffa0 = x11_27
else
    (*data_16cff98)(&data_16cff98, *(x0_26 + 0x10))

data_16cffb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("pl_gondola")

if (x0_27 == 0)
    (*data_16cffb0)(&data_16cffb0, "pl_gondola")
    uint32_t x10_66 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16cffb0
    *UI2StateDeclI_counter = x10_66 + 1
    data_16cffb8 = x11_28
else
    (*data_16cffb0)(&data_16cffb0, *(x0_27 + 0x10))

data_16cffd0 = 0x82
data_16cffd8 = Gondola
data_16cfff0 = zx.o(0)
data_16cfff0:4.d = 1
data_16d0000 = zx.o(0)
data_16d0000.q = Gondola_OnGain
data_16d0090 = zx.o(0)
data_16d0090.q = Gondola_OnGain_Test
data_16d00a0 = 0
__builtin_memset(&data_16d0010, 0, 0x80)
data_16cffe8 = 0x600000006
data_16cffc8 = 0x40000110d
data_16d0090:0xc = 0x3700000002
__builtin_memcpy(&data_16d0688, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memset(&data_16d0608, 0, 0x20)
__builtin_memcpy(&data_16d05e8, 
    "\x37\x00\x00\x00\x00\x00\x00\x00\xf2\xa1\x75\x00\x00\x00\x00\x00\x36\x00\x00\x00\x00\x00\x00\x00\x"
"18\x3a\x79\x00\x00\x00\x00\x00", 
    0x20)
data_16d06a8 = 0xffffffff
data_16d06e0 = "harbor_village"
data_16d06e8 = 0x14
data_16d06f0 = TEXTURE_CARD_GEN_PLUNDER_HARBOR_VILLAGE
data_16d0718 = _vtable_for_UI2StateDecl + 0x10
data_16d06f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_HARBOR_VILLAGE
void* x0_28 = UI2StateDeclTryLookup("pl_harbor_village")

if (x0_28 == 0)
    (*data_16d0718)(&data_16d0718, "pl_harbor_village")
    uint32_t x10_69 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d0718
    *UI2StateDeclI_counter = x10_69 + 1
    data_16d0720 = x11_29
else
    (*data_16d0718)(&data_16d0718, *(x0_28 + 0x10))

data_16d0730 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("pl_harbor_village")

if (x0_29 == 0)
    (*data_16d0730)(&data_16d0730, "pl_harbor_village")
    uint32_t x10_71 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d0730
    *UI2StateDeclI_counter = x10_71 + 1
    data_16d0738 = x11_30
else
    (*data_16d0730)(&data_16d0730, *(x0_29 + 0x10))

data_16d0750 = 4
data_16d0758 = HarborVillage
data_16d0d68 = 1
__builtin_memcpy(&data_16d0e08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"14\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d0748 = 0x40000110e
data_16d0e28 = 0xffffffff
data_16d0e60 = "landing_party"
data_16d0e68 = 0x14
data_16d0e70 = TEXTURE_CARD_GEN_PLUNDER_LANDING_PARTY
data_16d0e78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_LANDING_PARTY
data_16d0e98 = _vtable_for_UI2StateDecl + 0x10
void* x0_30 = UI2StateDeclTryLookup("pl_landing_party")

if (x0_30 == 0)
    (*data_16d0e98)(&data_16d0e98, "pl_landing_party")
    uint32_t x10_74 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d0e98
    *UI2StateDeclI_counter = x10_74 + 1
    data_16d0ea0 = x11_31
else
    (*data_16d0e98)(&data_16d0e98, *(x0_30 + 0x10))

data_16d0eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("pl_landing_party")

if (x0_31 == 0)
    (*data_16d0eb0)(&data_16d0eb0, "pl_landing_party")
    uint32_t x10_76 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d0eb0
    *UI2StateDeclI_counter = x10_76 + 1
    data_16d0eb8 = x11_32
else
    (*data_16d0eb0)(&data_16d0eb0, *(x0_31 + 0x10))

data_16d0ed0 = 0x84
data_16d0ed8 = LandingParty
data_16d14e8 = 1
__builtin_memcpy(&data_16d1588, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d0ec8 = 0x40000110f
data_16d15a8 = 0xffffffff
data_16d15e0 = "mapmaker"
data_16d15e8 = 8
data_16d15f0 = TEXTURE_CARD_GEN_PLUNDER_MAP_MAKER
data_16d1618 = _vtable_for_UI2StateDecl + 0x10
data_16d15f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_MAPMAKER
void* x0_32 = UI2StateDeclTryLookup("pl_mapmaker")

if (x0_32 == 0)
    (*data_16d1618)(&data_16d1618, "pl_mapmaker")
    uint32_t x10_79 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d1618
    *UI2StateDeclI_counter = x10_79 + 1
    data_16d1620 = x11_33
else
    (*data_16d1618)(&data_16d1618, *(x0_32 + 0x10))

data_16d1630 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("pl_mapmaker")

if (x0_33 == 0)
    (*data_16d1630)(&data_16d1630, "pl_mapmaker")
    uint32_t x10_81 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d1630
    *UI2StateDeclI_counter = x10_81 + 1
    data_16d1638 = x11_34
else
    (*data_16d1630)(&data_16d1630, *(x0_33 + 0x10))

data_16d1650 = 0x44
data_16d1658 = Mapmaker
data_16d1648 = 0x400001110
int128_t v0_7
v0_7.q = 0
v0_7:8.q = 0
data_16d1670 = zx.o(0)
data_16d1670:4.d = 2
__builtin_memset(&data_16d1680, 0, 0xa8)
data_16d1668 = 6
data_16d1680 = Mapmaker_OnGain
data_16d1710 = Mapmaker_OnGain_Test
data_16d171c = 0x100000003
__builtin_memset(&data_16d1730, 0, 0xb8)
data_16d1728 = 6
data_16d1730:4.d = 6
data_16d1740 = Mapmaker_OnGain
data_16d17d0 = Mapmaker_OnGain_Test
data_16d1c68 = 1
data_16d17dc = 0x100000003
__builtin_memcpy(&data_16d1d08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"10\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d1d28 = 0xffffffff
data_16d1d60 = "maroon"
data_16d1d68 = 0x14
data_16d1d70 = TEXTURE_CARD_GEN_PLUNDER_MAROON
data_16d1d78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_MAROON
data_16d1d98 = _vtable_for_UI2StateDecl + 0x10
void* x0_34 = UI2StateDeclTryLookup("pl_maroon")

if (x0_34 == 0)
    (*data_16d1d98)(&data_16d1d98, "pl_maroon")
    uint32_t x10_83 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d1d98
    *UI2StateDeclI_counter = x10_83 + 1
    data_16d1da0 = x11_35
else
    (*data_16d1d98)(&data_16d1d98, *(x0_34 + 0x10))

data_16d1db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("pl_maroon")
int128_t v1_9
int128_t v2_2

if (x0_35 == 0)
    v1_9, v2_2 = (*data_16d1db0)(&data_16d1db0, "pl_maroon")
    uint32_t x10_85 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d1db0
    *UI2StateDeclI_counter = x10_85 + 1
    data_16d1db8 = x11_36
else
    v1_9, v2_2 = (*data_16d1db0)(&data_16d1db0, *(x0_35 + 0x10))

data_16d1dd0 = 4
data_16d1dd8 = Maroon
data_16d2488 = v1
v1_9 = data_7e7e68
v2_2 = data_7e7e78
data_16d1dc8 = 0x400001111
data_16d2498 = 0x18
data_16d24a0 = v1_9
data_16d24e0 = "rope"
data_16d24b0 = v2_2
__builtin_memset(&data_16d24c0, 0, 0x20)
data_16d24e8 = 0x28
data_16d24f0 = TEXTURE_CARD_GEN_PLUNDER_ROPE
data_16d2518 = _vtable_for_UI2StateDecl + 0x10
data_16d24f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_ROPE
void* x0_36 = UI2StateDeclTryLookup("pl_rope")

if (x0_36 == 0)
    (*data_16d2518)(&data_16d2518, "pl_rope")
    uint32_t x10_88 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d2518
    *UI2StateDeclI_counter = x10_88 + 1
    data_16d2520 = x11_37
else
    (*data_16d2518)(&data_16d2518, *(x0_36 + 0x10))

data_16d2530 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("pl_rope")

if (x0_37 == 0)
    (*data_16d2530)(&data_16d2530, "pl_rope")
    uint32_t x10_90 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d2530
    *UI2StateDeclI_counter = x10_90 + 1
    data_16d2538 = x11_38
else
    (*data_16d2530)(&data_16d2530, *(x0_37 + 0x10))

data_16d2550 = 0x82
data_16d2558 = Rope
data_16d2b68 = 1
__builtin_memcpy(&data_16d2c08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16d2548 = 0x400001112
data_16d2c28 = 0xffffffff
data_16d2c60 = "tools"
data_16d2c68 = 0x28
data_16d2c70 = TEXTURE_CARD_GEN_PLUNDER_TOOLS
data_16d2c98 = _vtable_for_UI2StateDecl + 0x10
data_16d2c78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_TOOLS
void* x0_38 = UI2StateDeclTryLookup("pl_tools")

if (x0_38 == 0)
    (*data_16d2c98)(&data_16d2c98, "pl_tools")
    uint32_t x10_93 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d2c98
    *UI2StateDeclI_counter = x10_93 + 1
    data_16d2ca0 = x11_39
else
    (*data_16d2c98)(&data_16d2c98, *(x0_38 + 0x10))

data_16d2cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("pl_tools")

if (x0_39 == 0)
    (*data_16d2cb0)(&data_16d2cb0, "pl_tools")
    uint32_t x10_95 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d2cb0
    *UI2StateDeclI_counter = x10_95 + 1
    data_16d2cb8 = x11_40
else
    (*data_16d2cb0)(&data_16d2cb0, *(x0_39 + 0x10))

data_16d2cc8 = 0x400001113
data_16d2cd0 = 2
data_16d2cd8 = Tools
__builtin_memcpy(&data_16d3388, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d33a8 = 0xffffffff
data_16d33e0 = "abundance"
data_16d33e8 = 0x27
data_16d33f0 = TEXTURE_CARD_GEN_PLUNDER_ABUNDANCE
data_16d3418 = _vtable_for_UI2StateDecl + 0x10
data_16d33f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_ABUNDANCE
void* x0_40 = UI2StateDeclTryLookup("pl_abundance")

if (x0_40 == 0)
    (*data_16d3418)(&data_16d3418, "pl_abundance")
    uint32_t x10_98 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d3418
    *UI2StateDeclI_counter = x10_98 + 1
    data_16d3420 = x11_41
else
    (*data_16d3418)(&data_16d3418, *(x0_40 + 0x10))

data_16d3430 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("pl_abundance")

if (x0_41 == 0)
    (*data_16d3430)(&data_16d3430, "pl_abundance")
    uint32_t x10_100 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d3430
    *UI2StateDeclI_counter = x10_100 + 1
    data_16d3438 = x11_42
else
    (*data_16d3430)(&data_16d3430, *(x0_41 + 0x10))

data_16d3450 = 0x82
data_16d3458 = Abundance
data_16d3a68 = 1
__builtin_memcpy(&data_16d3b08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d3448 = 0x400001114
data_16d3b28 = 0xffffffff
data_16d3b60 = "crew"
data_16d3b68 = 0x1d
data_16d3b70 = TEXTURE_CARD_GEN_PLUNDER_CREW
data_16d3b98 = _vtable_for_UI2StateDecl + 0x10
data_16d3b78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_CREW
void* x0_42 = UI2StateDeclTryLookup("pl_crew")

if (x0_42 == 0)
    (*data_16d3b98)(&data_16d3b98, "pl_crew")
    uint32_t x10_103 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d3b98
    *UI2StateDeclI_counter = x10_103 + 1
    data_16d3ba0 = x11_43
else
    (*data_16d3b98)(&data_16d3b98, *(x0_42 + 0x10))

data_16d3bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("pl_crew")

if (x0_43 == 0)
    (*data_16d3bb0)(&data_16d3bb0, "pl_crew")
    uint32_t x10_105 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d3bb0
    *UI2StateDeclI_counter = x10_105 + 1
    data_16d3bb8 = x11_44
else
    (*data_16d3bb0)(&data_16d3bb0, *(x0_43 + 0x10))

data_16d3bd0 = 0x84
data_16d3bd8 = Crew
data_16d41e8 = 1
__builtin_memcpy(&data_16d4288, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16d3bc8 = 0x500001115
data_16d42a0 = &data_800000
data_16d42a8 = 0xffffffff
data_16d42e0 = "cutthroat"
data_16d42e8 = 0x13
data_16d42f0 = TEXTURE_CARD_GEN_PLUNDER_CUTTHROAT
data_16d4318 = _vtable_for_UI2StateDecl + 0x10
data_16d42f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_CUTTHROAT
void* x0_44 = UI2StateDeclTryLookup("pl_cutthroat")

if (x0_44 == 0)
    (*data_16d4318)(&data_16d4318, "pl_cutthroat")
    uint32_t x10_108 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d4318
    *UI2StateDeclI_counter = x10_108 + 1
    data_16d4320 = x11_45
else
    (*data_16d4318)(&data_16d4318, *(x0_44 + 0x10))

data_16d4330 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("pl_cutthroat")

if (x0_45 == 0)
    (*data_16d4330)(&data_16d4330, "pl_cutthroat")
    uint32_t x10_110 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d4330
    *UI2StateDeclI_counter = x10_110 + 1
    data_16d4338 = x11_46
else
    (*data_16d4330)(&data_16d4330, *(x0_45 + 0x10))

__builtin_memset(&data_16d4368, 0, 0xc0)
data_16d4a08 = v1
data_16d4350 = 0xa4
data_16d4358 = Cutthroat
data_16d4368 = 0xc
data_16d4378:8.d = 0x1128
data_16d4968 = 1
data_16d4418:4.d = 0
data_16d4a18 = 0x14
data_16d4348 = 0x500001116
data_16d4a20 = 0x12000
data_16d4a28 = 0xffffffff
data_16d4a60 = "enlarge"
data_16d4a68 = 0x25
data_16d4a70 = TEXTURE_CARD_GEN_PLUNDER_ENLARGE
data_16d4a98 = _vtable_for_UI2StateDecl + 0x10
data_16d4a78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_ENLARGE
void* x0_46 = UI2StateDeclTryLookup("pl_enlarge")

if (x0_46 == 0)
    (*data_16d4a98)(&data_16d4a98, "pl_enlarge")
    uint32_t x10_113 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d4a98
    *UI2StateDeclI_counter = x10_113 + 1
    data_16d4aa0 = x11_47
else
    (*data_16d4a98)(&data_16d4a98, *(x0_46 + 0x10))

data_16d4ab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("pl_enlarge")

if (x0_47 == 0)
    (*data_16d4ab0)(&data_16d4ab0, "pl_enlarge")
    uint32_t x10_115 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d4ab0
    *UI2StateDeclI_counter = x10_115 + 1
    data_16d4ab8 = x11_48
else
    (*data_16d4ab0)(&data_16d4ab0, *(x0_47 + 0x10))

data_16d4ad0 = 0x84
data_16d4ad8 = Enlarge
data_16d50e8 = 1
__builtin_memcpy(&data_16d5188, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"30\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d4ac8 = 0x500001117
data_16d51a8 = 0xffffffff
data_16d51e0 = "figurine"
data_16d51e8 = 0x10
data_16d51f0 = TEXTURE_CARD_GEN_PLUNDER_FIGURINE
data_16d5218 = _vtable_for_UI2StateDecl + 0x10
data_16d51f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_FIGURINE
void* x0_48 = UI2StateDeclTryLookup("pl_figurine")

if (x0_48 == 0)
    (*data_16d5218)(&data_16d5218, "pl_figurine")
    uint32_t x10_118 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d5218
    *UI2StateDeclI_counter = x10_118 + 1
    data_16d5220 = x11_49
else
    (*data_16d5218)(&data_16d5218, *(x0_48 + 0x10))

data_16d5230 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("pl_figurine")

if (x0_49 == 0)
    (*data_16d5230)(&data_16d5230, "pl_figurine")
    uint32_t x10_120 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d5230
    *UI2StateDeclI_counter = x10_120 + 1
    data_16d5238 = x11_50
else
    (*data_16d5230)(&data_16d5230, *(x0_49 + 0x10))

data_16d5250 = 2
data_16d5258 = Figurine
__builtin_memcpy(&data_16d5908, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d5248 = 0x500001118
data_16d5928 = 0xffffffff
data_16d5960 = "first_mate"
data_16d5968 = 0x1d
data_16d5970 = TEXTURE_CARD_GEN_PLUNDER_FIRST_MATE
data_16d5998 = _vtable_for_UI2StateDecl + 0x10
data_16d5978 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_FIRST_MATE
void* x0_50 = UI2StateDeclTryLookup("pl_first_mate")

if (x0_50 == 0)
    (*data_16d5998)(&data_16d5998, "pl_first_mate")
    uint32_t x10_123 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d5998
    *UI2StateDeclI_counter = x10_123 + 1
    data_16d59a0 = x11_51
else
    (*data_16d5998)(&data_16d5998, *(x0_50 + 0x10))

data_16d59b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("pl_first_mate")

if (x0_51 == 0)
    (*data_16d59b0)(&data_16d59b0, "pl_first_mate")
    uint32_t x10_125 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d59b0
    *UI2StateDeclI_counter = x10_125 + 1
    data_16d59b8 = x11_52
else
    (*data_16d59b0)(&data_16d59b0, *(x0_51 + 0x10))

data_16d59d0 = 4
data_16d59d8 = FirstMate
__builtin_memcpy(&data_16d6088, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x08\x00\x00\x00\x00\x00", 
    0x20)
data_16d59c8 = 0x500001119
data_16d60a8 = 0xffffffff
data_16d60e0 = "flagship"
data_16d60e8 = 0x13
data_16d60f0 = TEXTURE_CARD_GEN_PLUNDER_FLAG_SHIP
data_16d6118 = _vtable_for_UI2StateDecl + 0x10
data_16d60f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_FLAGSHIP
void* x0_52 = UI2StateDeclTryLookup("pl_flagship")

if (x0_52 == 0)
    (*data_16d6118)(&data_16d6118, "pl_flagship")
    uint32_t x10_128 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d6118
    *UI2StateDeclI_counter = x10_128 + 1
    data_16d6120 = x11_53
else
    (*data_16d6118)(&data_16d6118, *(x0_52 + 0x10))

data_16d6130 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("pl_flagship")

if (x0_53 == 0)
    (*data_16d6130)(&data_16d6130, "pl_flagship")
    uint32_t x10_130 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d6130
    *UI2StateDeclI_counter = x10_130 + 1
    data_16d6138 = x11_54
else
    (*data_16d6130)(&data_16d6130, *(x0_53 + 0x10))

data_16d6150 = 0x400000000084
data_16d6158 = Flagship
data_16d6148 = 0x40000111a
data_16d6768 = 0x43
__builtin_memcpy(&data_16d6808, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x11\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d6828 = 0xffffffff
data_16d6860 = "frigate"
data_16d6868 = 8
data_16d6870 = TEXTURE_CARD_GEN_PLUNDER_FRIGATE
data_16d6898 = _vtable_for_UI2StateDecl + 0x10
data_16d6878 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_FRIGATE
void* x0_54 = UI2StateDeclTryLookup("pl_frigate")

if (x0_54 == 0)
    (*data_16d6898)(&data_16d6898, "pl_frigate")
    uint32_t x10_133 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d6898
    *UI2StateDeclI_counter = x10_133 + 1
    data_16d68a0 = x11_55
else
    (*data_16d6898)(&data_16d6898, *(x0_54 + 0x10))

data_16d68b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("pl_frigate")

if (x0_55 == 0)
    (*data_16d68b0)(&data_16d68b0, "pl_frigate")
    uint32_t x10_135 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d68b0
    *UI2StateDeclI_counter = x10_135 + 1
    data_16d68b8 = x11_56
else
    (*data_16d68b0)(&data_16d68b0, *(x0_55 + 0x10))

int128_t v0_8
v0_8.q = 0x50000111b
data_16d68d0 = 0xa4
data_16d68d8 = Frigate
data_16d68c8 = 0x50000111b
data_16d6ee8 = 1
__builtin_memcpy(&data_16d6f88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x15\x00\x00\x00\x"
"14\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d6fa8 = 0xffffffff
data_16d6fe0 = "longship"
data_16d6fe8 = 0x1d
data_16d6ff0 = TEXTURE_CARD_GEN_PLUNDER_LONG_SHIP
data_16d7018 = _vtable_for_UI2StateDecl + 0x10
data_16d6ff8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_LONGSHIP
void* x0_56 = UI2StateDeclTryLookup("pl_longship")

if (x0_56 == 0)
    (*data_16d7018)(&data_16d7018, "pl_longship")
    uint32_t x10_138 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d7018
    *UI2StateDeclI_counter = x10_138 + 1
    data_16d7020 = x11_57
else
    (*data_16d7018)(&data_16d7018, *(x0_56 + 0x10))

data_16d7030 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("pl_longship")

if (x0_57 == 0)
    (*data_16d7030)(&data_16d7030, "pl_longship")
    uint32_t x10_140 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d7030
    *UI2StateDeclI_counter = x10_140 + 1
    data_16d7038 = x11_58
else
    (*data_16d7030)(&data_16d7030, *(x0_57 + 0x10))

data_16d7050 = 0x84
data_16d7058 = Longship
data_16d7668 = 1
__builtin_memcpy(&data_16d7708, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"22\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d7048 = 0x50000111c
data_16d7728 = 0xffffffff
data_16d7760 = "mining_road"
data_16d7768 = 0x27
data_16d7770 = TEXTURE_CARD_GEN_PLUNDER_MINING_ROAD
data_16d7798 = _vtable_for_UI2StateDecl + 0x10
data_16d7778 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_MINING_ROAD
void* x0_58 = UI2StateDeclTryLookup("pl_mining_road")

if (x0_58 == 0)
    (*data_16d7798)(&data_16d7798, "pl_mining_road")
    uint32_t x10_143 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d7798
    *UI2StateDeclI_counter = x10_143 + 1
    data_16d77a0 = x11_59
else
    (*data_16d7798)(&data_16d7798, *(x0_58 + 0x10))

data_16d77b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("pl_mining_road")

if (x0_59 == 0)
    (*data_16d77b0)(&data_16d77b0, "pl_mining_road")
    uint32_t x10_145 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d77b0
    *UI2StateDeclI_counter = x10_145 + 1
    data_16d77b8 = x11_60
else
    (*data_16d77b0)(&data_16d77b0, *(x0_59 + 0x10))

data_16d77d0 = 4
data_16d77d8 = MiningRoad
data_16d7de8 = 1
__builtin_memcpy(&data_16d7e88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d77c8 = 0x50000111d
data_16d7ea8 = 0xffffffff
data_16d7ee0 = "pendant"
data_16d7ee8 = 0x2a
data_16d7ef0 = TEXTURE_CARD_GEN_PLUNDER_PENDANT
data_16d7f18 = _vtable_for_UI2StateDecl + 0x10
data_16d7ef8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_PENDANT
void* x0_60 = UI2StateDeclTryLookup("pl_pendant")

if (x0_60 == 0)
    (*data_16d7f18)(&data_16d7f18, "pl_pendant")
    uint32_t x10_148 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d7f18
    *UI2StateDeclI_counter = x10_148 + 1
    data_16d7f20 = x11_61
else
    (*data_16d7f18)(&data_16d7f18, *(x0_60 + 0x10))

data_16d7f30 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("pl_pendant")

if (x0_61 == 0)
    (*data_16d7f30)(&data_16d7f30, "pl_pendant")
    uint32_t x10_150 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d7f30
    *UI2StateDeclI_counter = x10_150 + 1
    data_16d7f38 = x11_62
else
    (*data_16d7f30)(&data_16d7f30, *(x0_61 + 0x10))

data_1142aa0
data_16d7f48 = 0x50000111e
data_1142ac0
data_16d85a8 = data_1142a70
data_16d8618 = 4
__builtin_memset(&data_16d85b8, 0, 0x50)
data_16d7f50 = 2
data_16d7f58 = Pendant
data_16d8608 = v1
data_16d8620 = 0x2001
data_16d8628 = 0xffffffff
data_16d8660 = "pickaxe"
data_16d8668 = 0x28
data_16d8670 = TEXTURE_CARD_GEN_PLUNDER_PICKAXE
data_16d8698 = _vtable_for_UI2StateDecl + 0x10
data_16d8678 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_PICKAXE
void* x0_62 = UI2StateDeclTryLookup("pl_pickaxe")

if (x0_62 == 0)
    (*data_16d8698)(&data_16d8698, "pl_pickaxe")
    uint32_t x10_153 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d8698
    *UI2StateDeclI_counter = x10_153 + 1
    data_16d86a0 = x11_63
else
    (*data_16d8698)(&data_16d8698, *(x0_62 + 0x10))

data_16d86b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("pl_pickaxe")

if (x0_63 == 0)
    (*data_16d86b0)(&data_16d86b0, "pl_pickaxe")
    uint32_t x10_155 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d86b0
    *UI2StateDeclI_counter = x10_155 + 1
    data_16d86b8 = x11_64
else
    (*data_16d86b0)(&data_16d86b0, *(x0_63 + 0x10))

int128_t v0_9
v0_9.q = 0
v0_9:8.q = 0
__builtin_memset(&data_16d86e8, 0, 0xc0)
v0_9.q = 0x50000111f
data_16d86e8 = 0xc
data_16d86c8 = 0x50000111f
data_16d86d0 = 2
data_16d86d8 = Pickaxe
data_16d86f8:8.d = 0x1128
data_16d8798:4.d = 0
__builtin_memcpy(&data_16d8d88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d8da8 = 0xffffffff
data_16d8de0 = "pilgrim"
data_16d8de8 = 0xf
data_16d8df0 = TEXTURE_CARD_GEN_PLUNDER_PILGRIM
data_16d8e18 = _vtable_for_UI2StateDecl + 0x10
data_16d8df8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_PILGRIM
void* x0_64 = UI2StateDeclTryLookup("pl_pilgrim")

if (x0_64 == 0)
    (*data_16d8e18)(&data_16d8e18, "pl_pilgrim")
    uint32_t x10_158 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d8e18
    *UI2StateDeclI_counter = x10_158 + 1
    data_16d8e20 = x11_65
else
    (*data_16d8e18)(&data_16d8e18, *(x0_64 + 0x10))

data_16d8e30 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("pl_pilgrim")

if (x0_65 == 0)
    (*data_16d8e30)(&data_16d8e30, "pl_pilgrim")
    uint32_t x10_160 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d8e30
    *UI2StateDeclI_counter = x10_160 + 1
    data_16d8e38 = x11_66
else
    (*data_16d8e30)(&data_16d8e30, *(x0_65 + 0x10))

data_16d8e50 = 4
data_16d8e58 = Pilgrim
__builtin_memcpy(&data_16d9508, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16d8e48 = 0x500001120
data_16d9528 = 0xffffffff
data_16d9560 = "quartermaster"
data_16d9568 = 0x1d
data_16d9570 = TEXTURE_CARD_GEN_PLUNDER_QUARTERMASTER
data_16d9598 = _vtable_for_UI2StateDecl + 0x10
data_16d9578 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_QUARTERMASTER
void* x0_66 = UI2StateDeclTryLookup("pl_quartermaster")

if (x0_66 == 0)
    (*data_16d9598)(&data_16d9598, "pl_quartermaster")
    uint32_t x10_163 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d9598
    *UI2StateDeclI_counter = x10_163 + 1
    data_16d95a0 = x11_67
else
    (*data_16d9598)(&data_16d9598, *(x0_66 + 0x10))

data_16d95b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("pl_quartermaster")

if (x0_67 == 0)
    (*data_16d95b0)(&data_16d95b0, "pl_quartermaster")
    uint32_t x10_165 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d95b0
    *UI2StateDeclI_counter = x10_165 + 1
    data_16d95b8 = x11_68
else
    (*data_16d95b0)(&data_16d95b0, *(x0_67 + 0x10))

int128_t v0_10
v0_10.q = 0x500001121
data_16d95d0 = 0x84
data_16d95d8 = Quartermaster
data_16d95c8 = 0x500001121
data_16d9be8 = 1
__builtin_memcpy(&data_16d9c88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16d9ca8 = 0xffffffff
data_16d9ce0 = "shaman"
data_16d9ce8 = 0x27
data_16d9cf0 = TEXTURE_CARD_GEN_PLUNDER_SHAMAN
data_16d9d18 = _vtable_for_UI2StateDecl + 0x10
data_16d9cf8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SHAMAN
void* x0_68 = UI2StateDeclTryLookup("pl_shaman")

if (x0_68 == 0)
    (*data_16d9d18)(&data_16d9d18, "pl_shaman")
    uint32_t x10_168 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d9d18
    *UI2StateDeclI_counter = x10_168 + 1
    data_16d9d20 = x11_69
else
    (*data_16d9d18)(&data_16d9d18, *(x0_68 + 0x10))

data_16d9d30 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("pl_shaman")

if (x0_69 == 0)
    (*data_16d9d30)(&data_16d9d30, "pl_shaman")
    uint32_t x10_170 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16d9d30
    *UI2StateDeclI_counter = x10_170 + 1
    data_16d9d38 = x11_70
else
    (*data_16d9d30)(&data_16d9d30, *(x0_69 + 0x10))

int128_t v0_11
v0_11.q = 0
v0_11:8.q = 0
__builtin_memset(&data_16d9d70, 0, 0xb0)
v0_11.q = 0x200001122
data_16d9d50 = 4
data_16d9d58 = Shaman
data_16d9d48 = 0x200001122
v0_11.q = 0x100000000
data_16d9e1c:4 = 0
data_16d9d70:4.d = 7
data_16d9e1c = 0x100000000
data_16d9d80 = Shaman_OnStartOfTurn
data_16da368 = 1
data_16d9e10 = 0
__builtin_memcpy(&data_16da408, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16d9d68 = 0x200000006
data_16da428 = 0xffffffff
data_16da460 = "silver_mine"
data_16da468 = 0x2a
data_16da470 = TEXTURE_CARD_GEN_PLUNDER_SILVER_MINE
data_16da498 = _vtable_for_UI2StateDecl + 0x10
data_16da478 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SILVER_MINE
void* x0_70 = UI2StateDeclTryLookup("pl_silver_mine")

if (x0_70 == 0)
    (*data_16da498)(&data_16da498, "pl_silver_mine")
    uint32_t x10_173 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16da498
    *UI2StateDeclI_counter = x10_173 + 1
    data_16da4a0 = x11_71
else
    (*data_16da498)(&data_16da498, *(x0_70 + 0x10))

data_16da4b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("pl_silver_mine")

if (x0_71 == 0)
    (*data_16da4b0)(&data_16da4b0, "pl_silver_mine")
    uint32_t x10_175 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16da4b0
    *UI2StateDeclI_counter = x10_175 + 1
    data_16da4b8 = x11_72
else
    (*data_16da4b0)(&data_16da4b0, *(x0_71 + 0x10))

data_16da4c8 = 0x500001123
data_16da4d0 = 2
data_16da4d8 = SilverMine
__builtin_memcpy(&data_16dab88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x09\x00\x00\x00\x"
"00\x00\x00\x20\x00\x00\x00\x00", 
    0x20)
data_16daba8 = 0xffffffff
data_16dabe0 = "trickster"
data_16dabe8 = 0x25
data_16dabf0 = TEXTURE_CARD_GEN_PLUNDER_TRICKSTER
data_16dac18 = _vtable_for_UI2StateDecl + 0x10
data_16dabf8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_TRICKSTER
void* x0_72 = UI2StateDeclTryLookup("pl_trickster")

if (x0_72 == 0)
    (*data_16dac18)(&data_16dac18, "pl_trickster")
    uint32_t x10_178 = *UI2StateDeclI_counter
    uint64_t x11_73 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dac18
    *UI2StateDeclI_counter = x10_178 + 1
    data_16dac20 = x11_73
else
    (*data_16dac18)(&data_16dac18, *(x0_72 + 0x10))

data_16dac30 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("pl_trickster")

if (x0_73 == 0)
    (*data_16dac30)(&data_16dac30, "pl_trickster")
    uint32_t x10_180 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dac30
    *UI2StateDeclI_counter = x10_180 + 1
    data_16dac38 = x11_74
else
    (*data_16dac30)(&data_16dac30, *(x0_73 + 0x10))

int128_t v0_12
v0_12.q = 0x500001124
data_16dac48 = 0x500001124
__builtin_memcpy(&data_16db268, 
    "\x3a\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x39\x00\x00\x00\x00\x00\x00\x00\x"
"83\x60\x75\x00\x00\x00\x00\x00", 
    0x20)
data_1142af0
__builtin_memset(&data_16db288, 0, 0x20)
data_1142b40
data_16db2a8 = data_1142b10
data_16db318 = 9
__builtin_memset(&data_16db2b8, 0, 0x50)
data_16dac50 = 0x24
data_16dac58 = Trickster
data_16db308 = v1
data_16db320 = 0xc
data_16db328 = 0xffffffff
data_16db360 = "wealthy_village"
data_16db368 = 0xe
data_16db370 = TEXTURE_CARD_GEN_PLUNDER_WEALTHY_VILLAGE
data_16db398 = _vtable_for_UI2StateDecl + 0x10
data_16db378 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_WEALTHY_VILLAGE
void* x0_74 = UI2StateDeclTryLookup("pl_wealthy_village")

if (x0_74 == 0)
    (*data_16db398)(&data_16db398, "pl_wealthy_village")
    uint32_t x10_183 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16db398
    *UI2StateDeclI_counter = x10_183 + 1
    data_16db3a0 = x11_75
else
    (*data_16db398)(&data_16db398, *(x0_74 + 0x10))

data_16db3b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("pl_wealthy_village")
int128_t v0_13
int128_t v3

if (x0_75 == 0)
    v0_13, v3 = (*data_16db3b0)(&data_16db3b0, "pl_wealthy_village")
    uint32_t x10_185 = *UI2StateDeclI_counter
    uint64_t x11_76 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16db3b0
    *UI2StateDeclI_counter = x10_185 + 1
    data_16db3b8 = x11_76
else
    v0_13, v3 = (*data_16db3b0)(&data_16db3b0, *(x0_75 + 0x10))

v0_13.q = 0
v0_13:8.q = 0
data_16db3d0 = 4
data_16db3d8 = WealthyVillage
data_16db3c8 = 0x500001125
__builtin_memset(&data_16db3e8, 0, 0xc0)
data_16db3e8 = 0xc
data_16db3f8:8.d = 0x1128
data_16db498:4.d = 0
__builtin_memset(&data_16db4b0, 0, 0xb8)
data_16db4a8 = 0x600000006
data_16db4b0:4.d = 1
data_16db4c0 = WealthyVillage_OnGain
data_1142b70
v3 = data_1142bc0
__builtin_memcpy(&data_16dba28, 
    "\x1c\x00\x00\x00\x00\x00\x00\x00\xc0\x2a\xaa\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
v0_13 = data_1142b90
data_16dba78 = v3
data_16dba48 = v0_13
data_16db9e8 = 1
data_16db550 = WealthyVillage_OnGain_Test
data_16db55c = 0x100000002
__builtin_memset(&data_16dba58, 0, 0x20)
__builtin_memcpy(&data_16dba88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x11\x00\x00\x00\x"
"20\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16dbaa8 = 0xffffffff
data_16dbae0 = "sack_of_loot"
data_16dbae8 = 0x14
data_16dbaf0 = TEXTURE_CARD_GEN_PLUNDER_SACK_OF_LOOT
data_16dbaf8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SACK_OF_LOOT
data_16dbb18 = _vtable_for_UI2StateDecl + 0x10
void* x0_76 = UI2StateDeclTryLookup("pl_sack_of_loot")

if (x0_76 == 0)
    (*data_16dbb18)(&data_16dbb18, "pl_sack_of_loot")
    uint32_t x10_187 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dbb18
    *UI2StateDeclI_counter = x10_187 + 1
    data_16dbb20 = x11_77
else
    (*data_16dbb18)(&data_16dbb18, *(x0_76 + 0x10))

data_16dbb30 = _vtable_for_UI2StateDecl + 0x10
void* x0_77 = UI2StateDeclTryLookup("pl_sack_of_loot")

if (x0_77 == 0)
    (*data_16dbb30)(&data_16dbb30, "pl_sack_of_loot")
    uint32_t x10_189 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dbb30
    *UI2StateDeclI_counter = x10_189 + 1
    data_16dbb38 = x11_78
else
    (*data_16dbb30)(&data_16dbb30, *(x0_77 + 0x10))

__builtin_memset(&data_16dbb68, 0, 0xc0)
data_16dbb68 = 0xc
data_16dbb48 = 0x600001126
data_16dbb50 = 2
data_16dbb58 = SackOfLoot
data_16dbb78:8.d = 0x1128
data_16dbc18:4.d = 0
__builtin_memcpy(&data_16dc208, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x0c\x00\x00\x00\x"
"00\x00\x08\x00\x00\x00\x00\x00", 
    0x20)
data_16dc228 = 0xffffffff
data_16dc260 = "kings_cache"
data_16dc268 = 0x14
data_16dc270 = TEXTURE_CARD_GEN_PLUNDER_KINGS_CACHE
data_16dc298 = _vtable_for_UI2StateDecl + 0x10
data_16dc278 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_KINGS_CACHE
void* x0_78 = UI2StateDeclTryLookup("pl_kings_cache")

if (x0_78 == 0)
    (*data_16dc298)(&data_16dc298, "pl_kings_cache")
    uint32_t x10_192 = *UI2StateDeclI_counter
    uint64_t x11_79 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dc298
    *UI2StateDeclI_counter = x10_192 + 1
    data_16dc2a0 = x11_79
else
    (*data_16dc298)(&data_16dc298, *(x0_78 + 0x10))

data_16dc2b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_79 = UI2StateDeclTryLookup("pl_kings_cache")

if (x0_79 == 0)
    (*data_16dc2b0)(&data_16dc2b0, "pl_kings_cache")
    uint32_t x10_194 = *UI2StateDeclI_counter
    uint64_t x11_80 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dc2b0
    *UI2StateDeclI_counter = x10_194 + 1
    data_16dc2b8 = x11_80
else
    (*data_16dc2b0)(&data_16dc2b0, *(x0_79 + 0x10))

data_16dc2d0 = 2
data_16dc2d8 = KingsCache
data_16dc988 = v1
data_16dc998 = 0
data_16dc2c8 = 0x700001127
data_16dc9a0 = 0x100000000
data_16dc9e0 = "loot_pile"
data_16dc99c = 0
data_16dc9e8 = 0
data_16dca18 = _vtable_for_UI2StateDecl + 0x10
void* x0_80 = UI2StateDeclTryLookup("pl_loot_pile")

if (x0_80 == 0)
    (*data_16dca18)(&data_16dca18, "pl_loot_pile")
    uint32_t x10_196 = *UI2StateDeclI_counter
    uint64_t x11_81 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dca18
    *UI2StateDeclI_counter = x10_196 + 1
    data_16dca20 = x11_81
else
    (*data_16dca18)(&data_16dca18, *(x0_80 + 0x10))

data_16dca30 = _vtable_for_UI2StateDecl + 0x10
void* x0_81 = UI2StateDeclTryLookup("pl_loot_pile")

if (x0_81 == 0)
    (*data_16dca30)(&data_16dca30, "pl_loot_pile")
    uint32_t x10_198 = *UI2StateDeclI_counter
    uint64_t x11_82 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dca30
    *UI2StateDeclI_counter = x10_198 + 1
    data_16dca38 = x11_82
else
    (*data_16dca30)(&data_16dca30, *(x0_81 + 0x10))

__builtin_memset(&data_16dca68, 0, 0xc0)
data_16dca50 = 0x1000000000002
data_16dca68 = 0xa
data_16dca78:8 = Loot_Setup
data_16dd108 = v1
data_16dd118 = 0
data_16dca48 = 0x8000700001128
data_16dd120 = 0x100000000
data_16dd160 = "amphora"
data_16dd11c = 0
data_16dd168 = 0x2a
data_16dd170 = TEXTURE_CARD_GEN_PLUNDER_AMPHORA
data_16dd198 = _vtable_for_UI2StateDecl + 0x10
data_16dd178 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_AMPHORA
void* x0_82 = UI2StateDeclTryLookup("pl_amphora")

if (x0_82 == 0)
    (*data_16dd198)(&data_16dd198, "pl_amphora")
    uint32_t x10_201 = *UI2StateDeclI_counter
    uint64_t x11_83 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dd198
    *UI2StateDeclI_counter = x10_201 + 1
    data_16dd1a0 = x11_83
else
    (*data_16dd198)(&data_16dd198, *(x0_82 + 0x10))

data_16dd1b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_83 = UI2StateDeclTryLookup("pl_amphora")

if (x0_83 == 0)
    (*data_16dd1b0)(&data_16dd1b0, "pl_amphora")
    uint32_t x10_203 = *UI2StateDeclI_counter
    uint64_t x11_84 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dd1b0
    *UI2StateDeclI_counter = x10_203 + 1
    data_16dd1b8 = x11_84
else
    (*data_16dd1b0)(&data_16dd1b0, *(x0_83 + 0x10))

data_16dd7e8 = 1
data_16dd1d0 = 0x8000000082
data_16dd1d8 = Amphora
data_16dd888 = v1
data_16dd898 = 0
data_16dd1c8 = 0x8000700001129
data_16dd8a0 = 0x100000000
data_16dd8e0 = "doubloons"
data_16dd89c = 0
data_16dd8e8 = 0x11
data_16dd8f0 = TEXTURE_CARD_GEN_PLUNDER_DOUBLOONS
data_16dd918 = _vtable_for_UI2StateDecl + 0x10
data_16dd8f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_DOUBLOONS
void* x0_84 = UI2StateDeclTryLookup("pl_doubloons")

if (x0_84 == 0)
    (*data_16dd918)(&data_16dd918, "pl_doubloons")
    uint32_t x10_206 = *UI2StateDeclI_counter
    uint64_t x11_85 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dd918
    *UI2StateDeclI_counter = x10_206 + 1
    data_16dd920 = x11_85
else
    (*data_16dd918)(&data_16dd918, *(x0_84 + 0x10))

data_16dd930 = _vtable_for_UI2StateDecl + 0x10
void* x0_85 = UI2StateDeclTryLookup("pl_doubloons")

if (x0_85 == 0)
    (*data_16dd930)(&data_16dd930, "pl_doubloons")
    uint32_t x10_208 = *UI2StateDeclI_counter
    uint64_t x11_86 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dd930
    *UI2StateDeclI_counter = x10_208 + 1
    data_16dd938 = x11_86
else
    (*data_16dd930)(&data_16dd930, *(x0_85 + 0x10))

__builtin_memset(&data_16dd970, 0, 0xb0)
data_16dd968 = 0x600000006
data_16dd950 = 0x8000000002
data_16dd958 = Doubloons
int128_t v1_28
v1_28.q = 0x100000000
data_16dda1c:4 = 0
data_16dda1c = 0x100000000
data_16dd980 = Doubloons_OnGain
data_16dd970:4.d = 1
data_16ddf68 = 1
data_16dda10 = 0
data_16de008 = v1
data_16de018 = 0
data_16dd948 = 0x800070000112a
data_16de020 = 0x100000000
data_16de060 = "endless_chalice"
data_16de01c = 0
data_16de068 = 0x2a
data_16de070 = TEXTURE_CARD_GEN_PLUNDER_ENDLESS_CHALICE
data_16de098 = _vtable_for_UI2StateDecl + 0x10
data_16de078 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_ENDLESS_CHALICE
void* x0_86 = UI2StateDeclTryLookup("pl_endless_chalice")

if (x0_86 == 0)
    (*data_16de098)(&data_16de098, "pl_endless_chalice")
    uint32_t x10_211 = *UI2StateDeclI_counter
    uint64_t x11_87 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16de098
    *UI2StateDeclI_counter = x10_211 + 1
    data_16de0a0 = x11_87
else
    (*data_16de098)(&data_16de098, *(x0_86 + 0x10))

data_16de0b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_87 = UI2StateDeclTryLookup("pl_endless_chalice")

if (x0_87 == 0)
    (*data_16de0b0)(&data_16de0b0, "pl_endless_chalice")
    uint32_t x10_213 = *UI2StateDeclI_counter
    uint64_t x11_88 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16de0b0
    *UI2StateDeclI_counter = x10_213 + 1
    data_16de0b8 = x11_88
else
    (*data_16de0b0)(&data_16de0b0, *(x0_87 + 0x10))

data_16de0d0 = 0x8000000082
data_16de0d8 = EndlessChalice
data_16de6e8 = 1
data_16de788 = v1
data_16de798 = 0
data_16de0c8 = 0x800070000112b
data_16de7a0 = 0x100000000
data_16de7e0 = "figurehead"
data_16de79c = 0
data_16de7e8 = 0x2a
data_16de7f0 = TEXTURE_CARD_GEN_PLUNDER_FIGUREHEAD
data_16de818 = _vtable_for_UI2StateDecl + 0x10
data_16de7f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_FIGUREHEAD
void* x0_88 = UI2StateDeclTryLookup("pl_figurehead")

if (x0_88 == 0)
    (*data_16de818)(&data_16de818, "pl_figurehead")
    uint32_t x10_216 = *UI2StateDeclI_counter
    uint64_t x11_89 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16de818
    *UI2StateDeclI_counter = x10_216 + 1
    data_16de820 = x11_89
else
    (*data_16de818)(&data_16de818, *(x0_88 + 0x10))

data_16de830 = _vtable_for_UI2StateDecl + 0x10
void* x0_89 = UI2StateDeclTryLookup("pl_figurehead")

if (x0_89 == 0)
    (*data_16de830)(&data_16de830, "pl_figurehead")
    uint32_t x10_218 = *UI2StateDeclI_counter
    uint64_t x11_90 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16de830
    *UI2StateDeclI_counter = x10_218 + 1
    data_16de838 = x11_90
else
    (*data_16de830)(&data_16de830, *(x0_89 + 0x10))

data_16de850 = 0x8000000082
data_16de858 = Figurehead
data_16dee68 = 1
data_16def08 = v1
data_16def18 = 0
data_16de848 = 0x800070000112c
data_16def20 = 0x100000000
data_16def60 = "hammer"
data_16def1c = 0
data_16def68 = 0x11
data_16def70 = TEXTURE_CARD_GEN_PLUNDER_HAMMER
data_16def98 = _vtable_for_UI2StateDecl + 0x10
data_16def78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_HAMMER
void* x0_90 = UI2StateDeclTryLookup("pl_hammer")

if (x0_90 == 0)
    (*data_16def98)(&data_16def98, "pl_hammer")
    uint32_t x10_221 = *UI2StateDeclI_counter
    uint64_t x11_91 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16def98
    *UI2StateDeclI_counter = x10_221 + 1
    data_16defa0 = x11_91
else
    (*data_16def98)(&data_16def98, *(x0_90 + 0x10))

data_16defb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_91 = UI2StateDeclTryLookup("pl_hammer")

if (x0_91 == 0)
    (*data_16defb0)(&data_16defb0, "pl_hammer")
    uint32_t x10_223 = *UI2StateDeclI_counter
    uint64_t x11_92 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16defb0
    *UI2StateDeclI_counter = x10_223 + 1
    data_16defb8 = x11_92
else
    (*data_16defb0)(&data_16defb0, *(x0_91 + 0x10))

data_16defd0 = 0x8000000002
data_16defd8 = Hammer
data_16df688 = v1
data_16df698 = 0
data_16defc8 = 0x800070000112d
data_16df6a0 = 0x100000000
data_16df6e0 = "insignia"
data_16df69c = 0
data_16df6e8 = 0x14
data_16df6f0 = TEXTURE_CARD_GEN_PLUNDER_INSIGNIA
data_16df718 = _vtable_for_UI2StateDecl + 0x10
data_16df6f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_INSIGNIA
void* x0_92 = UI2StateDeclTryLookup("pl_insignia")

if (x0_92 == 0)
    (*data_16df718)(&data_16df718, "pl_insignia")
    uint32_t x10_226 = *UI2StateDeclI_counter
    uint64_t x11_93 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16df718
    *UI2StateDeclI_counter = x10_226 + 1
    data_16df720 = x11_93
else
    (*data_16df718)(&data_16df718, *(x0_92 + 0x10))

data_16df730 = _vtable_for_UI2StateDecl + 0x10
void* x0_93 = UI2StateDeclTryLookup("pl_insignia")

if (x0_93 == 0)
    (*data_16df730)(&data_16df730, "pl_insignia")
    uint32_t x10_228 = *UI2StateDeclI_counter
    uint64_t x11_94 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16df730
    *UI2StateDeclI_counter = x10_228 + 1
    data_16df738 = x11_94
else
    (*data_16df730)(&data_16df730, *(x0_93 + 0x10))

data_16df750 = 0x8000000002
data_16df758 = Insignia
data_16dfd68 = 1
data_16dfe08 = v1
data_16dfe18 = 0
data_16df748 = 0x800070000112e
data_16dfe20 = 0x100000000
data_16dfe60 = "jewels"
data_16dfe1c = 0
data_16dfe68 = 0x10
data_16dfe70 = TEXTURE_CARD_GEN_PLUNDER_JEWELS
data_16dfe98 = _vtable_for_UI2StateDecl + 0x10
data_16dfe78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_JEWELS
void* x0_94 = UI2StateDeclTryLookup("pl_jewels")

if (x0_94 == 0)
    (*data_16dfe98)(&data_16dfe98, "pl_jewels")
    uint32_t x10_231 = *UI2StateDeclI_counter
    uint64_t x11_95 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dfe98
    *UI2StateDeclI_counter = x10_231 + 1
    data_16dfea0 = x11_95
else
    (*data_16dfe98)(&data_16dfe98, *(x0_94 + 0x10))

data_16dfeb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_95 = UI2StateDeclTryLookup("pl_jewels")

if (x0_95 == 0)
    (*data_16dfeb0)(&data_16dfeb0, "pl_jewels")
    uint32_t x10_233 = *UI2StateDeclI_counter
    uint64_t x11_96 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16dfeb0
    *UI2StateDeclI_counter = x10_233 + 1
    data_16dfeb8 = x11_96
else
    (*data_16dfeb0)(&data_16dfeb0, *(x0_95 + 0x10))

data_16dfed0 = 0x8000000082
data_16dfed8 = Jewels
data_16e04e8 = 1
data_16e0588 = v1
data_16e0598 = 0
data_16dfec8 = 0x800070000112f
data_16e05a0 = 0x100000000
data_16e05e0 = &data_75eda6
data_16e059c = 0
data_16e05e8 = 0x1b
data_16e05f0 = TEXTURE_CARD_GEN_PLUNDER_ORB
data_16e0618 = _vtable_for_UI2StateDecl + 0x10
data_16e05f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_ORB
void* x0_96 = UI2StateDeclTryLookup("pl_orb")

if (x0_96 == 0)
    (*data_16e0618)(&data_16e0618, "pl_orb")
    uint32_t x10_236 = *UI2StateDeclI_counter
    uint64_t x11_97 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e0618
    *UI2StateDeclI_counter = x10_236 + 1
    data_16e0620 = x11_97
else
    (*data_16e0618)(&data_16e0618, *(x0_96 + 0x10))

data_16e0630 = _vtable_for_UI2StateDecl + 0x10
void* x0_97 = UI2StateDeclTryLookup("pl_orb")

if (x0_97 == 0)
    (*data_16e0630)(&data_16e0630, "pl_orb")
    uint32_t x10_238 = *UI2StateDeclI_counter
    uint64_t x11_98 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e0630
    *UI2StateDeclI_counter = x10_238 + 1
    data_16e0638 = x11_98
else
    (*data_16e0630)(&data_16e0630, *(x0_97 + 0x10))

data_16e0650 = 0x8000000002
data_16e0658 = Orb
data_16e0d08 = v1
data_16e0d18 = 0
data_16e0648 = 0x8000700001130
data_16e0d20 = 0x100000000
data_16e0d60 = "prize_goat"
data_16e0d1c = 0
data_16e0d68 = 0xf
data_16e0d70 = TEXTURE_CARD_GEN_PLUNDER_PRIZE_GOAT
data_16e0d98 = _vtable_for_UI2StateDecl + 0x10
data_16e0d78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_PRIZE_GOAT
void* x0_98 = UI2StateDeclTryLookup("pl_prize_goat")

if (x0_98 == 0)
    (*data_16e0d98)(&data_16e0d98, "pl_prize_goat")
    uint32_t x10_241 = *UI2StateDeclI_counter
    uint64_t x11_99 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e0d98
    *UI2StateDeclI_counter = x10_241 + 1
    data_16e0da0 = x11_99
else
    (*data_16e0d98)(&data_16e0d98, *(x0_98 + 0x10))

data_16e0db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_99 = UI2StateDeclTryLookup("pl_prize_goat")

if (x0_99 == 0)
    (*data_16e0db0)(&data_16e0db0, "pl_prize_goat")
    uint32_t x10_243 = *UI2StateDeclI_counter
    uint64_t x11_100 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e0db0
    *UI2StateDeclI_counter = x10_243 + 1
    data_16e0db8 = x11_100
else
    (*data_16e0db0)(&data_16e0db0, *(x0_99 + 0x10))

data_16e0dd0 = 0x8000000002
data_16e0dd8 = PrizeGoat
data_16e1488 = v1
data_16e1498 = 0
data_16e0dc8 = 0x8000700001131
data_16e14a0 = 0x100000000
data_16e14e0 = "puzzle_box"
data_16e149c = 0
data_16e14e8 = 0x2a
data_16e14f0 = TEXTURE_CARD_GEN_PLUNDER_PUZZLE_BOX
data_16e1518 = _vtable_for_UI2StateDecl + 0x10
data_16e14f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_PUZZLE_BOX
void* x0_100 = UI2StateDeclTryLookup("pl_puzzle_box")

if (x0_100 == 0)
    (*data_16e1518)(&data_16e1518, "pl_puzzle_box")
    uint32_t x10_246 = *UI2StateDeclI_counter
    uint64_t x11_101 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e1518
    *UI2StateDeclI_counter = x10_246 + 1
    data_16e1520 = x11_101
else
    (*data_16e1518)(&data_16e1518, *(x0_100 + 0x10))

data_16e1530 = _vtable_for_UI2StateDecl + 0x10
void* x0_101 = UI2StateDeclTryLookup("pl_puzzle_box")

if (x0_101 == 0)
    (*data_16e1530)(&data_16e1530, "pl_puzzle_box")
    uint32_t x10_248 = *UI2StateDeclI_counter
    uint64_t x11_102 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e1530
    *UI2StateDeclI_counter = x10_248 + 1
    data_16e1538 = x11_102
else
    (*data_16e1530)(&data_16e1530, *(x0_101 + 0x10))

data_16e1550 = 0x8000000002
data_16e1558 = PuzzleBox
data_16e1b68 = 1
data_16e1c08 = v1
data_16e1c18 = 0
data_16e1548 = 0x8000700001132
data_16e1c20 = 0x100000000
data_16e1c60 = "sextant"
data_16e1c1c = 0
data_16e1c68 = 0xe
data_16e1c70 = TEXTURE_CARD_GEN_PLUNDER_SEXTATNT
data_16e1c98 = _vtable_for_UI2StateDecl + 0x10
data_16e1c78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SEXTANT
void* x0_102 = UI2StateDeclTryLookup("pl_sextant")

if (x0_102 == 0)
    (*data_16e1c98)(&data_16e1c98, "pl_sextant")
    uint32_t x10_251 = *UI2StateDeclI_counter
    uint64_t x11_103 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e1c98
    *UI2StateDeclI_counter = x10_251 + 1
    data_16e1ca0 = x11_103
else
    (*data_16e1c98)(&data_16e1c98, *(x0_102 + 0x10))

data_16e1cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_103 = UI2StateDeclTryLookup("pl_sextant")

if (x0_103 == 0)
    (*data_16e1cb0)(&data_16e1cb0, "pl_sextant")
    uint32_t x10_253 = *UI2StateDeclI_counter
    uint64_t x11_104 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e1cb0
    *UI2StateDeclI_counter = x10_253 + 1
    data_16e1cb8 = x11_104
else
    (*data_16e1cb0)(&data_16e1cb0, *(x0_103 + 0x10))

data_16e1cd0 = 0x8000000002
data_16e1cd8 = Sextant
data_16e2388 = v1
data_16e2398 = 0
data_16e1cc8 = 0x8000700001133
data_16e23a0 = 0x100000000
data_16e23e0 = "shield"
data_16e239c = 0
data_16e23e8 = 0x26
data_16e23f0 = TEXTURE_CARD_GEN_PLUNDER_SHIELD
data_16e23f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SHIELD
data_16e2400 = SOUND_SOUND_CARDS_PLUNDER_FX_REACTION_SHIELD
data_16e2418 = _vtable_for_UI2StateDecl + 0x10
void* x0_104 = UI2StateDeclTryLookup("pl_shield")

if (x0_104 == 0)
    (*data_16e2418)(&data_16e2418, "pl_shield")
    uint32_t x10_255 = *UI2StateDeclI_counter
    uint64_t x11_105 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e2418
    *UI2StateDeclI_counter = x10_255 + 1
    data_16e2420 = x11_105
else
    (*data_16e2418)(&data_16e2418, *(x0_104 + 0x10))

data_16e2430 = _vtable_for_UI2StateDecl + 0x10
void* x0_105 = UI2StateDeclTryLookup("pl_shield")

if (x0_105 == 0)
    (*data_16e2430)(&data_16e2430, "pl_shield")
    uint32_t x10_257 = *UI2StateDeclI_counter
    uint64_t x11_106 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e2430
    *UI2StateDeclI_counter = x10_257 + 1
    data_16e2438 = x11_106
else
    (*data_16e2430)(&data_16e2430, *(x0_105 + 0x10))

__builtin_memset(&data_16e2470, 0, 0xb8)
data_16e251c = 0x100000001
data_16e2450 = 0x8000000042
data_16e2458 = Shield
data_16e2470:4.d = 5
data_16e2480 = Shield_Reaction
data_16e2a68 = 1
data_16e2468 = 6
data_16e2510 = 0
data_16e2b08 = v1
data_16e2b18 = 0
data_16e2448 = 0x8000700001134
data_16e2b20 = 0x100000000
data_16e2b60 = "spell_scroll"
data_16e2b1c = 0
data_16e2b68 = 0xd
data_16e2b70 = TEXTURE_CARD_GEN_PLUNDER_SPELL_SCROLL
data_16e2b98 = _vtable_for_UI2StateDecl + 0x10
data_16e2b78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SPELL_SCROLL
void* x0_106 = UI2StateDeclTryLookup("pl_spell_scroll")

if (x0_106 == 0)
    (*data_16e2b98)(&data_16e2b98, "pl_spell_scroll")
    uint32_t x10_260 = *UI2StateDeclI_counter
    uint64_t x11_107 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e2b98
    *UI2StateDeclI_counter = x10_260 + 1
    data_16e2ba0 = x11_107
else
    (*data_16e2b98)(&data_16e2b98, *(x0_106 + 0x10))

data_16e2bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_107 = UI2StateDeclTryLookup("pl_spell_scroll")

if (x0_107 == 0)
    (*data_16e2bb0)(&data_16e2bb0, "pl_spell_scroll")
    uint32_t x10_262 = *UI2StateDeclI_counter
    uint64_t x11_108 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e2bb0
    *UI2StateDeclI_counter = x10_262 + 1
    data_16e2bb8 = x11_108
else
    (*data_16e2bb0)(&data_16e2bb0, *(x0_107 + 0x10))

data_16e2bd0 = 0x8000000006
data_16e2bd8 = SpellScroll
data_16e3288 = v1
data_16e3298 = 0
data_16e2bc8 = 0x8000700001135
data_16e32a0 = 0x100000000
data_16e32e0 = "staff"
data_16e329c = 0
data_16e32e8 = 0xd
data_16e32f0 = TEXTURE_CARD_GEN_PLUNDER_STAFF
data_16e3318 = _vtable_for_UI2StateDecl + 0x10
data_16e32f8 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_STAFF
void* x0_108 = UI2StateDeclTryLookup("pl_staff")

if (x0_108 == 0)
    (*data_16e3318)(&data_16e3318, "pl_staff")
    uint32_t x10_265 = *UI2StateDeclI_counter
    uint64_t x11_109 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e3318
    *UI2StateDeclI_counter = x10_265 + 1
    data_16e3320 = x11_109
else
    (*data_16e3318)(&data_16e3318, *(x0_108 + 0x10))

data_16e3330 = _vtable_for_UI2StateDecl + 0x10
void* x0_109 = UI2StateDeclTryLookup("pl_staff")

if (x0_109 == 0)
    (*data_16e3330)(&data_16e3330, "pl_staff")
    uint32_t x10_267 = *UI2StateDeclI_counter
    uint64_t x11_110 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e3330
    *UI2StateDeclI_counter = x10_267 + 1
    data_16e3338 = x11_110
else
    (*data_16e3330)(&data_16e3330, *(x0_109 + 0x10))

data_16e3350 = 0x8000000002
data_16e3358 = Staff
data_16e3a08 = v1
data_16e3a18 = 0
data_16e3348 = 0x8000700001136
data_16e3a20 = 0x100000000
data_16e3a60 = "sword"
data_16e3a1c = 0
data_16e3a68 = 0x26
data_16e3a70 = TEXTURE_CARD_GEN_PLUNDER_SWORD
data_16e3a98 = _vtable_for_UI2StateDecl + 0x10
data_16e3a78 = SOUND_SOUND_CARDS_PLUNDER_FX_LANDPLAY_SWORD
void* x0_110 = UI2StateDeclTryLookup("pl_sword")

if (x0_110 == 0)
    (*data_16e3a98)(&data_16e3a98, "pl_sword")
    uint32_t x10_270 = *UI2StateDeclI_counter
    uint64_t x11_111 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e3a98
    *UI2StateDeclI_counter = x10_270 + 1
    data_16e3aa0 = x11_111
else
    (*data_16e3a98)(&data_16e3a98, *(x0_110 + 0x10))

data_16e3ab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_111 = UI2StateDeclTryLookup("pl_sword")

if (x0_111 == 0)
    (*data_16e3ab0)(&data_16e3ab0, "pl_sword")
    uint32_t x10_272 = *UI2StateDeclI_counter
    uint64_t x11_112 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e3ab0
    *UI2StateDeclI_counter = x10_272 + 1
    data_16e3ab8 = x11_112
else
    (*data_16e3ab0)(&data_16e3ab0, *(x0_111 + 0x10))

data_16e3ad0 = 0x8000000022
data_16e3ad8 = Sword
__builtin_memcpy(&data_16e4188, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16e3ac8 = 0x8000700001137
data_16e41e0 = "bury"
data_16e41e8 = 8
data_16e41f0 = TEXTURE_CARD_GEN_PLUNDER_BURY
data_16e4218 = _vtable_for_UI2StateDecl + 0x10
data_16e41f8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_BURY
void* x0_112 = UI2StateDeclTryLookup("pl_bury")

if (x0_112 == 0)
    (*data_16e4218)(&data_16e4218, "pl_bury")
    uint32_t x10_275 = *UI2StateDeclI_counter
    uint64_t x11_113 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e4218
    *UI2StateDeclI_counter = x10_275 + 1
    data_16e4220 = x11_113
else
    (*data_16e4218)(&data_16e4218, *(x0_112 + 0x10))

data_16e4230 = _vtable_for_UI2StateDecl + 0x10
void* x0_113 = UI2StateDeclTryLookup("pl_bury")

if (x0_113 == 0)
    (*data_16e4230)(&data_16e4230, "pl_bury")
    uint32_t x10_277 = *UI2StateDeclI_counter
    uint64_t x11_114 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e4230
    *UI2StateDeclI_counter = x10_277 + 1
    data_16e4238 = x11_114
else
    (*data_16e4230)(&data_16e4230, *(x0_113 + 0x10))

data_1142c00
data_16e4248 = 0x100001138
data_1142c20
data_16e48a8 = data_1142bd0
data_16e4918 = 0x18
__builtin_memset(&data_16e48b8, 0, 0x50)
data_16e4250 = 0x400
data_16e4258 = Bury
data_16e4908 = v1
data_16e4960 = "avoid"
data_16e4920 = 0x100000000
data_16e4968 = 8
data_16e4970 = TEXTURE_CARD_GEN_PLUNDER_AVOID
data_16e4998 = _vtable_for_UI2StateDecl + 0x10
data_16e4978 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_AVOID
void* x0_114 = UI2StateDeclTryLookup("pl_avoid")

if (x0_114 == 0)
    (*data_16e4998)(&data_16e4998, "pl_avoid")
    uint32_t x10_280 = *UI2StateDeclI_counter
    uint64_t x11_115 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e4998
    *UI2StateDeclI_counter = x10_280 + 1
    data_16e49a0 = x11_115
else
    (*data_16e4998)(&data_16e4998, *(x0_114 + 0x10))

data_16e49b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_115 = UI2StateDeclTryLookup("pl_avoid")

if (x0_115 == 0)
    (*data_16e49b0)(&data_16e49b0, "pl_avoid")
    uint32_t x10_282 = *UI2StateDeclI_counter
    uint64_t x11_116 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e49b0
    *UI2StateDeclI_counter = x10_282 + 1
    data_16e49b8 = x11_116
else
    (*data_16e49b0)(&data_16e49b0, *(x0_115 + 0x10))

data_16e49d0 = 0x400
data_16e49d8 = Avoid
__builtin_memcpy(&data_16e5088, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16e49c8 = 0x200001139
data_16e50e0 = "deliver"
data_16e50e8 = 0x1d
data_16e50f0 = TEXTURE_CARD_GEN_PLUNDER_DELIVER
data_16e5118 = _vtable_for_UI2StateDecl + 0x10
data_16e50f8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_DELIVER
void* x0_116 = UI2StateDeclTryLookup("pl_deliver")

if (x0_116 == 0)
    (*data_16e5118)(&data_16e5118, "pl_deliver")
    uint32_t x10_285 = *UI2StateDeclI_counter
    uint64_t x11_117 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e5118
    *UI2StateDeclI_counter = x10_285 + 1
    data_16e5120 = x11_117
else
    (*data_16e5118)(&data_16e5118, *(x0_116 + 0x10))

data_16e5130 = _vtable_for_UI2StateDecl + 0x10
void* x0_117 = UI2StateDeclTryLookup("pl_deliver")

if (x0_117 == 0)
    (*data_16e5130)(&data_16e5130, "pl_deliver")
    uint32_t x10_287 = *UI2StateDeclI_counter
    uint64_t x11_118 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e5130
    *UI2StateDeclI_counter = x10_287 + 1
    data_16e5138 = x11_118
else
    (*data_16e5130)(&data_16e5130, *(x0_117 + 0x10))

int128_t v0_14
v0_14.q = 0x20000113a
data_16e5148 = 0x20000113a
__builtin_memcpy(&data_16e5768, 
    "\x3e\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x3d\x00\x00\x00\x00\x00\x00\x00\x"
"83\x60\x75\x00\x00\x00\x00\x00", 
    0x20)
data_1142c50
__builtin_memset(&data_16e5788, 0, 0x20)
data_16e5150 = 0x400
data_16e5158 = Deliver
__builtin_memcpy(&data_16e5808, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16e5860 = "rush"
data_16e5820 = 0x100000000
data_16e5868 = 0x28
data_16e5870 = TEXTURE_CARD_GEN_PLUNDER_RUSH
data_16e5898 = _vtable_for_UI2StateDecl + 0x10
data_16e5878 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_RUSH
void* x0_118 = UI2StateDeclTryLookup("pl_rush")

if (x0_118 == 0)
    (*data_16e5898)(&data_16e5898, "pl_rush")
    uint32_t x10_290 = *UI2StateDeclI_counter
    uint64_t x11_119 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e5898
    *UI2StateDeclI_counter = x10_290 + 1
    data_16e58a0 = x11_119
else
    (*data_16e5898)(&data_16e5898, *(x0_118 + 0x10))

data_16e58b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_119 = UI2StateDeclTryLookup("pl_rush")

if (x0_119 == 0)
    (*data_16e58b0)(&data_16e58b0, "pl_rush")
    uint32_t x10_292 = *UI2StateDeclI_counter
    uint64_t x11_120 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e58b0
    *UI2StateDeclI_counter = x10_292 + 1
    data_16e58b8 = x11_120
else
    (*data_16e58b0)(&data_16e58b0, *(x0_119 + 0x10))

int128_t v0_15
v0_15.q = 0x20000113b
data_16e58d0 = 0x400
data_16e58d8 = Rush
data_16e58c8 = 0x20000113b
data_16e5ee8 = 1
__builtin_memcpy(&data_16e5f88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16e5fe0 = "foray"
data_16e5fe8 = 0x28
data_16e5ff0 = TEXTURE_CARD_GEN_PLUNDER_FORAY
data_16e6018 = _vtable_for_UI2StateDecl + 0x10
data_16e5ff8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_FORAY
void* x0_120 = UI2StateDeclTryLookup("pl_foray")

if (x0_120 == 0)
    (*data_16e6018)(&data_16e6018, "pl_foray")
    uint32_t x10_295 = *UI2StateDeclI_counter
    uint64_t x11_121 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e6018
    *UI2StateDeclI_counter = x10_295 + 1
    data_16e6020 = x11_121
else
    (*data_16e6018)(&data_16e6018, *(x0_120 + 0x10))

data_16e6030 = _vtable_for_UI2StateDecl + 0x10
void* x0_121 = UI2StateDeclTryLookup("pl_foray")
int128_t v0_16
int128_t v2_5
int128_t v5

if (x0_121 == 0)
    v0_16, v2_5, v5 = (*data_16e6030)(&data_16e6030, "pl_foray")
    uint32_t x10_297 = *UI2StateDeclI_counter
    uint64_t x11_122 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e6030
    *UI2StateDeclI_counter = x10_297 + 1
    data_16e6038 = x11_122
else
    v0_16, v2_5, v5 = (*data_16e6030)(&data_16e6030, *(x0_121 + 0x10))
v0_16.q = 0
v0_16:8.q = 0
__builtin_memset(&data_16e6068, 0, 0x20)
data_16e6068 = 0xc
__builtin_memset(&data_16e6088, 0, 0xa0)
v0_16 = data_1142c70
v2_5 = data_1142c80
data_16e6048 = 0x30000113c
data_16e66b8 = v2_5
data_16e6718 = 0x1500000001
data_16e6050 = 0x400
data_16e6058 = Foray
data_16e6078:8.d = 0x1128
data_16e6118:4.d = 0
data_16e6708 = v1
data_16e66a8 = v0_16
__builtin_memset(&data_16e66c8, 0, 0x40)
data_16e6720 = 0x100000000
data_16e6760 = "launch"
data_16e6768 = 0x28
data_16e6770 = TEXTURE_CARD_GEN_PLUNDER_LAUNCH
data_16e6798 = _vtable_for_UI2StateDecl + 0x10
data_16e6778 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_LAUNCH
void* x0_122 = UI2StateDeclTryLookup("pl_launch")

if (x0_122 == 0)
    (*data_16e6798)(&data_16e6798, "pl_launch")
    uint32_t x10_300 = *UI2StateDeclI_counter
    uint64_t x11_123 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e6798
    *UI2StateDeclI_counter = x10_300 + 1
    data_16e67a0 = x11_123
else
    (*data_16e6798)(&data_16e6798, *(x0_122 + 0x10))

data_16e67b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_123 = UI2StateDeclTryLookup("pl_launch")

if (x0_123 == 0)
    (*data_16e67b0)(&data_16e67b0, "pl_launch")
    uint32_t x10_302 = *UI2StateDeclI_counter
    uint64_t x11_124 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e67b0
    *UI2StateDeclI_counter = x10_302 + 1
    data_16e67b8 = x11_124
else
    (*data_16e67b0)(&data_16e67b0, *(x0_123 + 0x10))

data_16e6e88 = v1
data_16e67d0 = 0x400
data_16e67d8 = Launch
data_16e6e98 = 0x14
data_16e67c8 = 0x30000113d
data_16e6ea0 = 0x100000000
data_16e6ee0 = "mirror"
data_16e6ee8 = 0x28
data_16e6ef0 = TEXTURE_CARD_GEN_PLUNDER_MIRROR
data_16e6f18 = _vtable_for_UI2StateDecl + 0x10
data_16e6ef8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_MIRROR
void* x0_124 = UI2StateDeclTryLookup("pl_mirror")

if (x0_124 == 0)
    (*data_16e6f18)(&data_16e6f18, "pl_mirror")
    uint32_t x10_305 = *UI2StateDeclI_counter
    uint64_t x11_125 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e6f18
    *UI2StateDeclI_counter = x10_305 + 1
    data_16e6f20 = x11_125
else
    (*data_16e6f18)(&data_16e6f18, *(x0_124 + 0x10))

data_16e6f30 = _vtable_for_UI2StateDecl + 0x10
void* x0_125 = UI2StateDeclTryLookup("pl_mirror")

if (x0_125 == 0)
    (*data_16e6f30)(&data_16e6f30, "pl_mirror")
    uint32_t x10_307 = *UI2StateDeclI_counter
    uint64_t x11_126 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e6f30
    *UI2StateDeclI_counter = x10_307 + 1
    data_16e6f38 = x11_126
else
    (*data_16e6f30)(&data_16e6f30, *(x0_125 + 0x10))

data_16e6f50 = 0x400
data_16e6f58 = Mirror
data_16e7568 = 1
__builtin_memcpy(&data_16e7608, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16e6f48 = 0x30000113e
data_16e7660 = "peril"
data_16e7668 = 8
data_16e7670 = TEXTURE_CARD_GEN_PLUNDER_PERIL
data_16e7698 = _vtable_for_UI2StateDecl + 0x10
data_16e7678 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_PERIL
void* x0_126 = UI2StateDeclTryLookup("pl_peril")

if (x0_126 == 0)
    (*data_16e7698)(&data_16e7698, "pl_peril")
    uint32_t x10_310 = *UI2StateDeclI_counter
    uint64_t x11_127 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e7698
    *UI2StateDeclI_counter = x10_310 + 1
    data_16e76a0 = x11_127
else
    (*data_16e7698)(&data_16e7698, *(x0_126 + 0x10))

data_16e76b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_127 = UI2StateDeclTryLookup("pl_peril")
int128_t v0_17
int128_t v2_6
int128_t v5_1

if (x0_127 == 0)
    v0_17, v2_6, v5_1 = (*data_16e76b0)(&data_16e76b0, "pl_peril")
    uint32_t x10_312 = *UI2StateDeclI_counter
    uint64_t x11_128 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e76b0
    *UI2StateDeclI_counter = x10_312 + 1
    data_16e76b8 = x11_128
else
    v0_17, v2_6, v5_1 = (*data_16e76b0)(&data_16e76b0, *(x0_127 + 0x10))
v0_17.q = 0
v0_17:8.q = 0
__builtin_memset(&data_16e76e8, 0, 0x20)
data_16e76e8 = 0xc
__builtin_memset(&data_16e7708, 0, 0xa0)
v0_17 = data_1142cd0
v2_6 = data_1142ce0
data_16e76c8 = 0x20000113f
data_16e7d38 = v2_6
data_16e76d0 = 0x400
data_16e76d8 = Peril
data_16e76f8:8.d = 0x1128
data_16e7798:4.d = 0
__builtin_memcpy(&data_16e7d88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16e7d28 = v0_17
__builtin_memset(&data_16e7d48, 0, 0x40)
data_16e7de0 = "prepare"
data_16e7de8 = 0x25
data_16e7df0 = TEXTURE_CARD_GEN_PLUNDER_PREPARE
data_16e7e18 = _vtable_for_UI2StateDecl + 0x10
data_16e7df8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_PREPARE
void* x0_128 = UI2StateDeclTryLookup("pl_prepare")

if (x0_128 == 0)
    (*data_16e7e18)(&data_16e7e18, "pl_prepare")
    uint32_t x10_315 = *UI2StateDeclI_counter
    uint64_t x11_129 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e7e18
    *UI2StateDeclI_counter = x10_315 + 1
    data_16e7e20 = x11_129
else
    (*data_16e7e18)(&data_16e7e18, *(x0_128 + 0x10))

data_16e7e30 = _vtable_for_UI2StateDecl + 0x10
void* x0_129 = UI2StateDeclTryLookup("pl_prepare")

if (x0_129 == 0)
    (*data_16e7e30)(&data_16e7e30, "pl_prepare")
    uint32_t x10_317 = *UI2StateDeclI_counter
    uint64_t x11_130 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e7e30
    *UI2StateDeclI_counter = x10_317 + 1
    data_16e7e38 = x11_130
else
    (*data_16e7e30)(&data_16e7e30, *(x0_129 + 0x10))

data_16e8508 = v1
data_16e7e50 = 0x400
data_16e7e58 = Prepare
data_16e8468 = 1
data_16e8518 = 0xa
data_16e7e48 = 0x300001140
data_16e8520 = 0x2000
data_16e8528 = 0xffffffff
data_16e8560 = "scrounge"
data_16e8568 = 8
data_16e8570 = TEXTURE_CARD_GEN_PLUNDER_SCROUNGE
data_16e8598 = _vtable_for_UI2StateDecl + 0x10
data_16e8578 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_SCROUNGE
void* x0_130 = UI2StateDeclTryLookup("pl_scrounge")

if (x0_130 == 0)
    (*data_16e8598)(&data_16e8598, "pl_scrounge")
    uint32_t x10_320 = *UI2StateDeclI_counter
    uint64_t x11_131 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e8598
    *UI2StateDeclI_counter = x10_320 + 1
    data_16e85a0 = x11_131
else
    (*data_16e8598)(&data_16e8598, *(x0_130 + 0x10))

data_16e85b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_131 = UI2StateDeclTryLookup("pl_scrounge")

if (x0_131 == 0)
    (*data_16e85b0)(&data_16e85b0, "pl_scrounge")
    uint32_t x10_322 = *UI2StateDeclI_counter
    uint64_t x11_132 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e85b0
    *UI2StateDeclI_counter = x10_322 + 1
    data_16e85b8 = x11_132
else
    (*data_16e85b0)(&data_16e85b0, *(x0_131 + 0x10))

int128_t v0_18
v0_18.q = 0x300001141
data_16e85c8 = 0x300001141
data_16e85d0 = 0x400
data_16e85d8 = Scrounge
__builtin_memcpy(&data_16e8c88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16e8ce0 = "journey"
data_16e8ca0 = 0x100000000
data_16e8ce8 = 0x1d
data_16e8cf0 = TEXTURE_CARD_GEN_PLUNDER_JOURNEY
data_16e8d18 = _vtable_for_UI2StateDecl + 0x10
data_16e8cf8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_JOURNEY
void* x0_132 = UI2StateDeclTryLookup("pl_journey")

if (x0_132 == 0)
    (*data_16e8d18)(&data_16e8d18, "pl_journey")
    uint32_t x10_325 = *UI2StateDeclI_counter
    uint64_t x11_133 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e8d18
    *UI2StateDeclI_counter = x10_325 + 1
    data_16e8d20 = x11_133
else
    (*data_16e8d18)(&data_16e8d18, *(x0_132 + 0x10))

data_16e8d30 = _vtable_for_UI2StateDecl + 0x10
void* x0_133 = UI2StateDeclTryLookup("pl_journey")

if (x0_133 == 0)
    (*data_16e8d30)(&data_16e8d30, "pl_journey")
    uint32_t x10_327 = *UI2StateDeclI_counter
    uint64_t x11_134 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e8d30
    *UI2StateDeclI_counter = x10_327 + 1
    data_16e8d38 = x11_134
else
    (*data_16e8d30)(&data_16e8d30, *(x0_133 + 0x10))

data_16e8d48 = 0x400001142
data_16e8d50 = 0x400
data_16e8d58 = Journey
data_1142d70
data_16e9368 = 1
int128_t v0_19 = data_1142d30
__builtin_memcpy(&data_16e9408, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16e93a8 = v0_19
__builtin_memset(&data_16e93b8, 0, 0x50)
data_16e9428 = 0xffffffff
data_16e9460 = "maelstrom"
data_16e9468 = 0x1d
data_16e9470 = TEXTURE_CARD_GEN_PLUNDER_MAELSTROM
data_16e9498 = _vtable_for_UI2StateDecl + 0x10
data_16e9478 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_MAELSTROM
void* x0_134 = UI2StateDeclTryLookup("pl_maelstrom")

if (x0_134 == 0)
    (*data_16e9498)(&data_16e9498, "pl_maelstrom")
    uint32_t x10_330 = *UI2StateDeclI_counter
    uint64_t x11_135 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e9498
    *UI2StateDeclI_counter = x10_330 + 1
    data_16e94a0 = x11_135
else
    (*data_16e9498)(&data_16e9498, *(x0_134 + 0x10))

data_16e94b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_135 = UI2StateDeclTryLookup("pl_maelstrom")

if (x0_135 == 0)
    (*data_16e94b0)(&data_16e94b0, "pl_maelstrom")
    uint32_t x10_332 = *UI2StateDeclI_counter
    uint64_t x11_136 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e94b0
    *UI2StateDeclI_counter = x10_332 + 1
    data_16e94b8 = x11_136
else
    (*data_16e94b0)(&data_16e94b0, *(x0_135 + 0x10))

data_16e94d0 = 0x400
data_16e94d8 = Maelstrom
__builtin_memcpy(&data_16e9b88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16e94c8 = 0x400001143
data_16e9be0 = "looting"
data_16e9be8 = 0x28
data_16e9bf0 = TEXTURE_CARD_GEN_PLUNDER_LOOTING
data_16e9c18 = _vtable_for_UI2StateDecl + 0x10
data_16e9bf8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_LOOTING
void* x0_136 = UI2StateDeclTryLookup("pl_looting")

if (x0_136 == 0)
    (*data_16e9c18)(&data_16e9c18, "pl_looting")
    uint32_t x10_335 = *UI2StateDeclI_counter
    uint64_t x11_137 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e9c18
    *UI2StateDeclI_counter = x10_335 + 1
    data_16e9c20 = x11_137
else
    (*data_16e9c18)(&data_16e9c18, *(x0_136 + 0x10))

data_16e9c30 = _vtable_for_UI2StateDecl + 0x10
void* x0_137 = UI2StateDeclTryLookup("pl_looting")

if (x0_137 == 0)
    (*data_16e9c30)(&data_16e9c30, "pl_looting")
    uint32_t x10_337 = *UI2StateDeclI_counter
    uint64_t x11_138 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16e9c30
    *UI2StateDeclI_counter = x10_337 + 1
    data_16e9c38 = x11_138
else
    (*data_16e9c30)(&data_16e9c30, *(x0_137 + 0x10))

__builtin_memset(&data_16e9c68, 0, 0xc0)
data_16e9c68 = 0xc
data_16e9c48 = 0x600001144
data_16e9c50 = 0x400
data_16e9c58 = Looting
data_16e9c78:8.d = 0x1128
data_16e9d18:4.d = 0
__builtin_memcpy(&data_16ea308, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x01\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ea360 = "invasion"
data_16ea368 = 0x28
data_16ea370 = TEXTURE_CARD_GEN_PLUNDER_INVASION
data_16ea398 = _vtable_for_UI2StateDecl + 0x10
data_16ea378 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_INVASION
void* x0_138 = UI2StateDeclTryLookup("pl_invasion")

if (x0_138 == 0)
    (*data_16ea398)(&data_16ea398, "pl_invasion")
    uint32_t x10_340 = *UI2StateDeclI_counter
    uint64_t x11_139 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ea398
    *UI2StateDeclI_counter = x10_340 + 1
    data_16ea3a0 = x11_139
else
    (*data_16ea398)(&data_16ea398, *(x0_138 + 0x10))

data_16ea3b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_139 = UI2StateDeclTryLookup("pl_invasion")

if (x0_139 == 0)
    (*data_16ea3b0)(&data_16ea3b0, "pl_invasion")
    uint32_t x10_342 = *UI2StateDeclI_counter
    uint64_t x11_140 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ea3b0
    *UI2StateDeclI_counter = x10_342 + 1
    data_16ea3b8 = x11_140
else
    (*data_16ea3b0)(&data_16ea3b0, *(x0_139 + 0x10))

__builtin_memset(&data_16ea3e8, 0, 0xc0)
data_16ea3d0 = 0x400
data_16ea3d8 = Invasion
data_16ea3e8 = 0xc
data_16ea3f8:8.d = 0x1128
data_16ea498:4.d = 0
__builtin_memcpy(&data_16eaa88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ea3c8 = 0xa00001145
data_16eaae0 = "prosper"
data_16eaae8 = 0x1d
data_16eaaf0 = TEXTURE_CARD_GEN_PLUNDER_PROSPER
data_16eab18 = _vtable_for_UI2StateDecl + 0x10
data_16eaaf8 = SOUND_SOUND_CARDS_PLUNDER_FX_BUY_EVENT_PROSPER
void* x0_140 = UI2StateDeclTryLookup("pl_prosper")

if (x0_140 == 0)
    (*data_16eab18)(&data_16eab18, "pl_prosper")
    uint32_t x10_345 = *UI2StateDeclI_counter
    uint64_t x11_141 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eab18
    *UI2StateDeclI_counter = x10_345 + 1
    data_16eab20 = x11_141
else
    (*data_16eab18)(&data_16eab18, *(x0_140 + 0x10))

data_16eab30 = _vtable_for_UI2StateDecl + 0x10
void* x0_141 = UI2StateDeclTryLookup("pl_prosper")

if (x0_141 == 0)
    (*data_16eab30)(&data_16eab30, "pl_prosper")
    uint32_t x10_347 = *UI2StateDeclI_counter
    uint64_t x11_142 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eab30
    *UI2StateDeclI_counter = x10_347 + 1
    data_16eab38 = x11_142
else
    (*data_16eab30)(&data_16eab30, *(x0_141 + 0x10))

__builtin_memset(&data_16eab68, 0, 0xc0)
data_16eb208 = v1
data_16eab50 = 0x400
data_16eab58 = Prosper
data_16eab68 = 0xc
data_16eab78:8.d = 0x1128
data_16eac18:4.d = 0
data_16eb218 = 0xa
data_16eab48 = 0xa00001146
data_16eb220 = 0x100000000
data_16eb260 = "cheap"
data_16eb268 = 0x2d
data_16eb270 = TEXTURE_CARD_GEN_PLUNDER_CHEAP
data_16eb298 = _vtable_for_UI2StateDecl + 0x10
void* x0_142 = UI2StateDeclTryLookup("pl_Cheap")

if (x0_142 == 0)
    (*data_16eb298)(&data_16eb298, "pl_Cheap")
    uint32_t x10_349 = *UI2StateDeclI_counter
    uint64_t x11_143 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eb298
    *UI2StateDeclI_counter = x10_349 + 1
    data_16eb2a0 = x11_143
else
    (*data_16eb298)(&data_16eb298, *(x0_142 + 0x10))

data_16eb2b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_143 = UI2StateDeclTryLookup("pl_Cheap")

if (x0_143 == 0)
    (*data_16eb2b0)(&data_16eb2b0, "pl_Cheap")
    uint32_t x10_351 = *UI2StateDeclI_counter
    uint64_t x11_144 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eb2b0
    *UI2StateDeclI_counter = x10_351 + 1
    data_16eb2b8 = x11_144
else
    (*data_16eb2b0)(&data_16eb2b0, *(x0_143 + 0x10))

data_16eb2c8 = 0x1147
data_16eb2d0 = 0x10000000000
__builtin_memcpy(&data_16eb988, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16eb9e0 = "cursed"
data_16eb9e8 = 0x1b
data_16eb9f0 = TEXTURE_CARD_GEN_PLUNDER_CURSED
data_16eba18 = _vtable_for_UI2StateDecl + 0x10
void* x0_144 = UI2StateDeclTryLookup("pl_Cursed")

if (x0_144 == 0)
    (*data_16eba18)(&data_16eba18, "pl_Cursed")
    uint32_t x10_353 = *UI2StateDeclI_counter
    uint64_t x11_145 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eba18
    *UI2StateDeclI_counter = x10_353 + 1
    data_16eba20 = x11_145
else
    (*data_16eba18)(&data_16eba18, *(x0_144 + 0x10))

data_16eba30 = _vtable_for_UI2StateDecl + 0x10
void* x0_145 = UI2StateDeclTryLookup("pl_Cursed")

if (x0_145 == 0)
    (*data_16eba30)(&data_16eba30, "pl_Cursed")
    uint32_t x10_355 = *UI2StateDeclI_counter
    uint64_t x11_146 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eba30
    *UI2StateDeclI_counter = x10_355 + 1
    data_16eba38 = x11_146
else
    (*data_16eba30)(&data_16eba30, *(x0_145 + 0x10))

data_16eba48 = 0x1148
data_16eba50 = 0x10000000000
int128_t v0_21
v0_21.q = 0
v0_21:8.q = 0
data_16eba80 = zx.o(0)
data_16eba80.q = Cursed_OnGain
data_16ebb10 = zx.o(0)
data_16ebb10.q = Cursed_OnGain_Test
data_16eba70 = zx.o(0)
__builtin_memset(&data_16ebb20, 0, 0xc8)
__builtin_memset(&data_16eba90, 0, 0x80)
data_16eba68 = 0x200000006
data_16eba70:4.d = 0
data_16ebb10:0xc = 0x100000000
data_16ebb28 = 0xc
data_16ebb38:8.d = 0x1128
data_16ec068 = 1
data_16ebbd8:4.d = 0
__builtin_memcpy(&data_16ec108, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ec160 = "tireless"
data_16ec168 = 0x2a
data_16ec170 = TEXTURE_CARD_GEN_PLUNDER_TIRELESS
data_16ec198 = _vtable_for_UI2StateDecl + 0x10
void* x0_146 = UI2StateDeclTryLookup("pl_Tireless")

if (x0_146 == 0)
    (*data_16ec198)(&data_16ec198, "pl_Tireless")
    uint32_t x10_357 = *UI2StateDeclI_counter
    uint64_t x11_147 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ec198
    *UI2StateDeclI_counter = x10_357 + 1
    data_16ec1a0 = x11_147
else
    (*data_16ec198)(&data_16ec198, *(x0_146 + 0x10))

data_16ec1b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_147 = UI2StateDeclTryLookup("pl_Tireless")

if (x0_147 == 0)
    (*data_16ec1b0)(&data_16ec1b0, "pl_Tireless")
    uint32_t x10_359 = *UI2StateDeclI_counter
    uint64_t x11_148 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ec1b0
    *UI2StateDeclI_counter = x10_359 + 1
    data_16ec1b8 = x11_148
else
    (*data_16ec1b0)(&data_16ec1b0, *(x0_147 + 0x10))

data_16ec1c8 = 0x1149
data_16ec1d0 = 0x10000000000
data_16ec1f0 = zx.o(0)
data_16ec1f0:4.d = 0xc
data_16ec290 = zx.o(0)
data_16ec200 = zx.o(0)
data_16ec290.q = Tireless_OnDiscard_Test
data_16ec200.q = Tireless_OnDiscard
__builtin_memset(&data_16ec210, 0, 0x80)
data_16ec2a0 = 0
data_16ec1e8 = 0x200000006
__builtin_memcpy(&data_16ec888, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ec290:0xc = 0x4700000002
__builtin_memset(&data_16ec808, 0, 0x20)
__builtin_memcpy(&data_16ec7e8, 
    "\x47\x00\x00\x00\x00\x00\x00\x00\xd4\xdb\x77\x00\x00\x00\x00\x00\x48\x00\x00\x00\x00\x00\x00\x00\x"
"fd\xf9\x78\x00\x00\x00\x00\x00", 
    0x20)
data_16ec8e0 = "fated"
data_16ec8e8 = 6
data_16ec8f0 = TEXTURE_CARD_GEN_PLUNDER_FATED
data_16ec918 = _vtable_for_UI2StateDecl + 0x10
void* x0_148 = UI2StateDeclTryLookup("pl_Fated")

if (x0_148 == 0)
    (*data_16ec918)(&data_16ec918, "pl_Fated")
    uint32_t x10_361 = *UI2StateDeclI_counter
    uint64_t x11_149 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ec918
    *UI2StateDeclI_counter = x10_361 + 1
    data_16ec920 = x11_149
else
    (*data_16ec918)(&data_16ec918, *(x0_148 + 0x10))

data_16ec930 = _vtable_for_UI2StateDecl + 0x10
void* x0_149 = UI2StateDeclTryLookup("pl_Fated")

if (x0_149 == 0)
    (*data_16ec930)(&data_16ec930, "pl_Fated")
    uint32_t x10_363 = *UI2StateDeclI_counter
    uint64_t x11_150 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ec930
    *UI2StateDeclI_counter = x10_363 + 1
    data_16ec938 = x11_150
else
    (*data_16ec930)(&data_16ec930, *(x0_149 + 0x10))

data_16ec948 = 0x114a
data_16ec950 = 0x10000000000
data_16ec970 = zx.o(0)
data_16ec970:4.d = 0xa
data_16eca10 = zx.o(0)
__builtin_memset(&data_16ec980, 0, 0x20)
data_16eca10.q = Fated_OnShuffle_Test
__builtin_memset(&data_16ec9a0, 0, 0x70)
data_16ec980 = Fated_OnShuffle
data_16ecf68 = 1
data_16eca20 = 0
data_16ec968 = 0x200000006
data_16eca10:0xc = 0x100000000
__builtin_memcpy(&data_16ed008, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ed060 = "fawning"
data_16ed068 = 6
data_16ed070 = TEXTURE_CARD_GEN_PLUNDER_FAWNING
data_16ed098 = _vtable_for_UI2StateDecl + 0x10
void* x0_150 = UI2StateDeclTryLookup("pl_Fawning")

if (x0_150 == 0)
    (*data_16ed098)(&data_16ed098, "pl_Fawning")
    uint32_t x10_365 = *UI2StateDeclI_counter
    uint64_t x11_151 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ed098
    *UI2StateDeclI_counter = x10_365 + 1
    data_16ed0a0 = x11_151
else
    (*data_16ed098)(&data_16ed098, *(x0_150 + 0x10))

data_16ed0b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_151 = UI2StateDeclTryLookup("pl_Fawning")

if (x0_151 == 0)
    (*data_16ed0b0)(&data_16ed0b0, "pl_Fawning")
    uint32_t x10_367 = *UI2StateDeclI_counter
    uint64_t x11_152 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ed0b0
    *UI2StateDeclI_counter = x10_367 + 1
    data_16ed0b8 = x11_152
else
    (*data_16ed0b0)(&data_16ed0b0, *(x0_151 + 0x10))

data_16ed0c8 = 0x114b
data_16ed0d0 = 0x10000000000
int128_t v0_22
v0_22.q = 0
v0_22:8.q = 0
__builtin_memset(&data_16ed0f0, 0, 0xb0)
data_16ed100 = Fawning_OnGain
data_16ed190 = Fawning_OnGain_Test
data_16ed6e8 = 1
data_16ed19c:4 = 0
data_16ed0e8 = 0x200000006
data_16ed0f0:4.d = 0
data_16ed19c = 0x100000000
__builtin_memcpy(&data_16ed788, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ed7e0 = "friendly"
data_16ed7e8 = 6
data_16ed7f0 = TEXTURE_CARD_GEN_PLUNDER_FRIENDLY
data_16ed818 = _vtable_for_UI2StateDecl + 0x10
void* x0_152 = UI2StateDeclTryLookup("pl_Friendly")

if (x0_152 == 0)
    (*data_16ed818)(&data_16ed818, "pl_Friendly")
    uint32_t x10_369 = *UI2StateDeclI_counter
    uint64_t x11_153 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ed818
    *UI2StateDeclI_counter = x10_369 + 1
    data_16ed820 = x11_153
else
    (*data_16ed818)(&data_16ed818, *(x0_152 + 0x10))

data_16ed830 = _vtable_for_UI2StateDecl + 0x10
void* x0_153 = UI2StateDeclTryLookup("pl_Friendly")

if (x0_153 == 0)
    (*data_16ed830)(&data_16ed830, "pl_Friendly")
    uint32_t x10_371 = *UI2StateDeclI_counter
    uint64_t x11_154 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ed830
    *UI2StateDeclI_counter = x10_371 + 1
    data_16ed838 = x11_154
else
    (*data_16ed830)(&data_16ed830, *(x0_153 + 0x10))

int128_t v0_23
v0_23.q = 0
v0_23:8.q = 0
data_16ed848 = 0x114c
data_16ed850 = 0x10000000000
data_16ed870 = zx.o(0)
data_16ed870:4.d = 0xd
__builtin_memset(&data_16ed880, 0, 0xa8)
v0_23.d = 1
v0_23:4.d = 1
data_16ed91c = 0x100000001
data_16ed880 = Friendly_OnCleanup
data_16ed910 = Friendly_OnCleanup_Test
data_16ede68 = 1
data_16ed868 = 0x200000006
__builtin_memcpy(&data_16edf08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16edf60 = "hasty"
data_16edf68 = 0xb
data_16edf70 = TEXTURE_CARD_GEN_PLUNDER_HASTY
data_16edf98 = _vtable_for_UI2StateDecl + 0x10
void* x0_154 = UI2StateDeclTryLookup("pl_Hasty")

if (x0_154 == 0)
    (*data_16edf98)(&data_16edf98, "pl_Hasty")
    uint32_t x10_373 = *UI2StateDeclI_counter
    uint64_t x11_155 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16edf98
    *UI2StateDeclI_counter = x10_373 + 1
    data_16edfa0 = x11_155
else
    (*data_16edf98)(&data_16edf98, *(x0_154 + 0x10))

data_16edfb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_155 = UI2StateDeclTryLookup("pl_Hasty")

if (x0_155 == 0)
    (*data_16edfb0)(&data_16edfb0, "pl_Hasty")
    uint32_t x10_375 = *UI2StateDeclI_counter
    uint64_t x11_156 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16edfb0
    *UI2StateDeclI_counter = x10_375 + 1
    data_16edfb8 = x11_156
else
    (*data_16edfb0)(&data_16edfb0, *(x0_155 + 0x10))

data_16edfc8 = 0x114d
data_16edfd0 = 0x10000000000
data_16ee000 = zx.o(0)
data_16ee000.q = Hasty_OnGain
data_16ee090 = zx.o(0)
data_16ee090.q = Hasty_OnGain_Test
data_16edff0 = zx.o(0)
data_16ee0a0 = 0
__builtin_memset(&data_16ee010, 0, 0x80)
data_16ee090:0xc = 0x4000000002
data_16edfe8 = 0x200000006
data_16edff0:4.d = 0
__builtin_memcpy(&data_16ee688, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
__builtin_memset(&data_16ee608, 0, 0x20)
__builtin_memcpy(&data_16ee5e8, 
    "\x40\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x"
"02\x24\x76\x00\x00\x00\x00\x00", 
    0x20)
data_16ee6e0 = "inherited"
data_16ee6e8 = 0x2a
data_16ee6f0 = TEXTURE_CARD_GEN_PLUNDER_INHERITED
data_16ee718 = _vtable_for_UI2StateDecl + 0x10
void* x0_156 = UI2StateDeclTryLookup("pl_Inherited")

if (x0_156 == 0)
    (*data_16ee718)(&data_16ee718, "pl_Inherited")
    uint32_t x10_377 = *UI2StateDeclI_counter
    uint64_t x11_157 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ee718
    *UI2StateDeclI_counter = x10_377 + 1
    data_16ee720 = x11_157
else
    (*data_16ee718)(&data_16ee718, *(x0_156 + 0x10))

data_16ee730 = _vtable_for_UI2StateDecl + 0x10
void* x0_157 = UI2StateDeclTryLookup("pl_Inherited")

if (x0_157 == 0)
    (*data_16ee730)(&data_16ee730, "pl_Inherited")
    uint32_t x10_379 = *UI2StateDeclI_counter
    uint64_t x11_158 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ee730
    *UI2StateDeclI_counter = x10_379 + 1
    data_16ee738 = x11_158
else
    (*data_16ee730)(&data_16ee730, *(x0_157 + 0x10))

data_16ee748 = 0x114e
data_16ee750 = 0x10000000000
int128_t v0_24
v0_24.q = 0
v0_24:8.q = 0
__builtin_memset(&data_16ee768, 0, 0xc0)
data_16ee768 = 2
data_16ee778 = Inherited_Setup
__builtin_memcpy(&data_16eee08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16eee60 = "inspiring"
data_16eee68 = 6
data_16eee70 = TEXTURE_CARD_GEN_PLUNDER_INSPIRING
data_16eee98 = _vtable_for_UI2StateDecl + 0x10
void* x0_158 = UI2StateDeclTryLookup("pl_Inspiring")

if (x0_158 == 0)
    (*data_16eee98)(&data_16eee98, "pl_Inspiring")
    uint32_t x10_381 = *UI2StateDeclI_counter
    uint64_t x11_159 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eee98
    *UI2StateDeclI_counter = x10_381 + 1
    data_16eeea0 = x11_159
else
    (*data_16eee98)(&data_16eee98, *(x0_158 + 0x10))

data_16eeeb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_159 = UI2StateDeclTryLookup("pl_Inspiring")

if (x0_159 == 0)
    (*data_16eeeb0)(&data_16eeeb0, "pl_Inspiring")
    uint32_t x10_383 = *UI2StateDeclI_counter
    uint64_t x11_160 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16eeeb0
    *UI2StateDeclI_counter = x10_383 + 1
    data_16eeeb8 = x11_160
else
    (*data_16eeeb0)(&data_16eeeb0, *(x0_159 + 0x10))

int128_t v0_25
v0_25.q = 0
v0_25:8.q = 0
data_16eeec8 = 0x114f
data_16eeed0 = 0x10000000000
data_16eeef0 = zx.o(0)
data_16eeef0:4.d = 9
__builtin_memset(&data_16eef00, 0, 0xa0)
data_16eef00 = Inspiring_OnPlay
data_16eef90 = Inspiring_OnPlay_Test
data_16ef4e8 = 1
data_16eef9c:4 = 0
data_16eeee8 = 0x200000006
data_16eef9c = 0x100000000
__builtin_memcpy(&data_16ef588, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16ef5e0 = "patient"
data_16ef5e8 = 0xb
data_16ef5f0 = TEXTURE_CARD_GEN_PLUNDER_PATIENT
data_16ef618 = _vtable_for_UI2StateDecl + 0x10
void* x0_160 = UI2StateDeclTryLookup("pl_Patient")

if (x0_160 == 0)
    (*data_16ef618)(&data_16ef618, "pl_Patient")
    uint32_t x10_385 = *UI2StateDeclI_counter
    uint64_t x11_161 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ef618
    *UI2StateDeclI_counter = x10_385 + 1
    data_16ef620 = x11_161
else
    (*data_16ef618)(&data_16ef618, *(x0_160 + 0x10))

data_16ef630 = _vtable_for_UI2StateDecl + 0x10
void* x0_161 = UI2StateDeclTryLookup("pl_Patient")

if (x0_161 == 0)
    (*data_16ef630)(&data_16ef630, "pl_Patient")
    uint32_t x10_387 = *UI2StateDeclI_counter
    uint64_t x11_162 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ef630
    *UI2StateDeclI_counter = x10_387 + 1
    data_16ef638 = x11_162
else
    (*data_16ef630)(&data_16ef630, *(x0_161 + 0x10))

data_16ef648 = 0x1150
data_16ef650 = 0x10000000000
data_16ef670 = zx.o(0)
data_16ef670:4.d = 0xd
data_16ef710 = zx.o(0)
data_16ef680 = zx.o(0)
data_16ef710.q = Patient_OnStartOfCleanup_Test
data_16ef680.q = Patient_OnStartOfCleanup
__builtin_memset(&data_16ef690, 0, 0x80)
data_16ef720 = 0
data_16ef668 = 0x200000006
__builtin_memcpy(&data_16efd08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16ef710:0xc = 0x4100000000
__builtin_memset(&data_16efc88, 0, 0x20)
__builtin_memcpy(&data_16efc68, 
    "\x41\x00\x00\x00\x00\x00\x00\x00\xd4\xdb\x77\x00\x00\x00\x00\x00\x42\x00\x00\x00\x00\x00\x00\x00\x"
"02\x24\x76\x00\x00\x00\x00\x00", 
    0x20)
data_16efd28 = 0xffffffff
data_16efd60 = "pious"
data_16efd68 = 0x2a
data_16efd70 = TEXTURE_CARD_GEN_PLUNDER_PIOUS
data_16efd98 = _vtable_for_UI2StateDecl + 0x10
void* x0_162 = UI2StateDeclTryLookup("pl_Pious")

if (x0_162 == 0)
    (*data_16efd98)(&data_16efd98, "pl_Pious")
    uint32_t x10_389 = *UI2StateDeclI_counter
    uint64_t x11_163 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16efd98
    *UI2StateDeclI_counter = x10_389 + 1
    data_16efda0 = x11_163
else
    (*data_16efd98)(&data_16efd98, *(x0_162 + 0x10))

data_16efdb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_163 = UI2StateDeclTryLookup("pl_Pious")

if (x0_163 == 0)
    (*data_16efdb0)(&data_16efdb0, "pl_Pious")
    uint32_t x10_391 = *UI2StateDeclI_counter
    uint64_t x11_164 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16efdb0
    *UI2StateDeclI_counter = x10_391 + 1
    data_16efdb8 = x11_164
else
    (*data_16efdb0)(&data_16efdb0, *(x0_163 + 0x10))

data_16efdc8 = 0x1151
data_16efdd0 = 0x10000000000
int128_t v0_26
v0_26.q = 0
v0_26:8.q = 0
__builtin_memset(&data_16efdf0, 0, 0xb0)
data_16efe00 = Pious_OnGain
data_16efe90 = Pious_OnGain_Test
data_16f03e8 = 1
data_16efe9c:4 = 0
data_16efde8 = 0x200000006
data_16efdf0:4.d = 0
data_16efe9c = 0x100000000
__builtin_memcpy(&data_16f0488, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f04e0 = "reckless"
data_16f04e8 = 0x2a
data_16f04f0 = TEXTURE_CARD_GEN_PLUNDER_RECKLESS
data_16f0518 = _vtable_for_UI2StateDecl + 0x10
void* x0_164 = UI2StateDeclTryLookup("pl_Reckless")

if (x0_164 == 0)
    (*data_16f0518)(&data_16f0518, "pl_Reckless")
    uint32_t x10_393 = *UI2StateDeclI_counter
    uint64_t x11_165 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f0518
    *UI2StateDeclI_counter = x10_393 + 1
    data_16f0520 = x11_165
else
    (*data_16f0518)(&data_16f0518, *(x0_164 + 0x10))

data_16f0530 = _vtable_for_UI2StateDecl + 0x10
void* x0_165 = UI2StateDeclTryLookup("pl_Reckless")

if (x0_165 == 0)
    (*data_16f0530)(&data_16f0530, "pl_Reckless")
    uint32_t x10_395 = *UI2StateDeclI_counter
    uint64_t x11_166 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f0530
    *UI2StateDeclI_counter = x10_395 + 1
    data_16f0538 = x11_166
else
    (*data_16f0530)(&data_16f0530, *(x0_165 + 0x10))

int128_t v0_27
v0_27.q = 0
v0_27:8.q = 0
data_16f0548 = 0x1152
data_16f0550 = 0x10000000000
data_16f0570 = zx.o(0)
data_16f0570:4.d = 0xc
__builtin_memset(&data_16f0580, 0, 0xa8)
v0_27.q = 0x100000002
data_16f0580 = Reckless_OnDiscardFromPlay
data_16f061c = 0x100000002
data_16f0610 = Reckless_OnDiscardFromPlay_Test
data_16f0b68 = 1
data_16f0568 = 0x200000006
__builtin_memcpy(&data_16f0c08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f0c60 = "rich"
data_16f0c68 = 6
data_16f0c70 = TEXTURE_CARD_GEN_PLUNDER_RICH
data_16f0c98 = _vtable_for_UI2StateDecl + 0x10
void* x0_166 = UI2StateDeclTryLookup("pl_Rich")

if (x0_166 == 0)
    (*data_16f0c98)(&data_16f0c98, "pl_Rich")
    uint32_t x10_397 = *UI2StateDeclI_counter
    uint64_t x11_167 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f0c98
    *UI2StateDeclI_counter = x10_397 + 1
    data_16f0ca0 = x11_167
else
    (*data_16f0c98)(&data_16f0c98, *(x0_166 + 0x10))

data_16f0cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_167 = UI2StateDeclTryLookup("pl_Rich")

if (x0_167 == 0)
    (*data_16f0cb0)(&data_16f0cb0, "pl_Rich")
    uint32_t x10_399 = *UI2StateDeclI_counter
    uint64_t x11_168 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f0cb0
    *UI2StateDeclI_counter = x10_399 + 1
    data_16f0cb8 = x11_168
else
    (*data_16f0cb0)(&data_16f0cb0, *(x0_167 + 0x10))

data_16f0cc8 = 0x1153
data_16f0cd0 = 0x10000000000
int128_t v0_28
v0_28.q = 0
v0_28:8.q = 0
__builtin_memset(&data_16f0cf0, 0, 0xb0)
data_16f0d00 = Rich_OnGain
data_16f0d90 = Rich_OnGain_Test
data_16f12e8 = 1
data_16f0d9c:4 = 0
data_16f0ce8 = 0x200000006
data_16f0cf0:4.d = 0
data_16f0d9c = 0x100000000
__builtin_memcpy(&data_16f1388, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f13e0 = &data_7666c1
data_16f13e8 = 0x1b
data_16f13f0 = TEXTURE_CARD_GEN_PLUNDER_SHY
data_16f1418 = _vtable_for_UI2StateDecl + 0x10
void* x0_168 = UI2StateDeclTryLookup("pl_Shy")

if (x0_168 == 0)
    (*data_16f1418)(&data_16f1418, "pl_Shy")
    uint32_t x10_401 = *UI2StateDeclI_counter
    uint64_t x11_169 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f1418
    *UI2StateDeclI_counter = x10_401 + 1
    data_16f1420 = x11_169
else
    (*data_16f1418)(&data_16f1418, *(x0_168 + 0x10))

data_16f1430 = _vtable_for_UI2StateDecl + 0x10
void* x0_169 = UI2StateDeclTryLookup("pl_Shy")

if (x0_169 == 0)
    (*data_16f1430)(&data_16f1430, "pl_Shy")
    uint32_t x10_403 = *UI2StateDeclI_counter
    uint64_t x11_170 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f1430
    *UI2StateDeclI_counter = x10_403 + 1
    data_16f1438 = x11_170
else
    (*data_16f1430)(&data_16f1430, *(x0_169 + 0x10))

data_16f1448 = 0x1154
data_16f1450 = 0x10000000000
data_16f1470 = zx.o(0)
data_16f1470:4.d = 7
__builtin_memset(&data_16f1480, 0, 0xa0)
data_16f1510 = Shy_StartOfTurn_Test
data_16f151c:4 = 0
data_16f151c = 0x100000001
data_16f1480 = Shy_StartOfTurn
data_16f1a68 = 1
data_16f1468 = 0x200000006
__builtin_memcpy(&data_16f1b08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f1b60 = "nearby"
data_16f1b68 = 6
data_16f1b70 = TEXTURE_CARD_GEN_PLUNDER_NEARBY
data_16f1b98 = _vtable_for_UI2StateDecl + 0x10
void* x0_170 = UI2StateDeclTryLookup("pl_Nearby")

if (x0_170 == 0)
    (*data_16f1b98)(&data_16f1b98, "pl_Nearby")
    uint32_t x10_405 = *UI2StateDeclI_counter
    uint64_t x11_171 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f1b98
    *UI2StateDeclI_counter = x10_405 + 1
    data_16f1ba0 = x11_171
else
    (*data_16f1b98)(&data_16f1b98, *(x0_170 + 0x10))

data_16f1bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_171 = UI2StateDeclTryLookup("pl_Nearby")
int64_t result

if (x0_171 == 0)
    result = (*data_16f1bb0)(&data_16f1bb0, "pl_Nearby")
    uint32_t x10_407 = *UI2StateDeclI_counter
    uint64_t x11_172 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f1bb0
    *UI2StateDeclI_counter = x10_407 + 1
    data_16f1bb8 = x11_172
else
    result = (*data_16f1bb0)(&data_16f1bb0, *(x0_171 + 0x10))

data_16f1bc8 = 0x1155
data_16f1bd0 = 0x10000000000
data_16f1c00 = zx.o(0)
data_16f1c00.q = Nearby_OnGain
data_16f1c90 = zx.o(0)
data_16f1ca0 = 0
data_16f1be8 = 0x200000006
data_16f1c90:0xc = 0x100000000
data_16f1c90.q = Nearby_OnGain_Test
data_16f1bf0 = zx.o(0)
__builtin_memset(&data_16f1c10, 0, 0x80)
data_16f1bf0:4.d = 0
data_16f21e8 = 1
return result
