// 函数: sub_ab2570
// 地址: 0xab2570
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x16f22b0, 0, 0x7060)
int128_t v1 = data_71c0e0
data_16f22a8 = 0x100000000
data_16f22e8 = "black_market"
data_16f22f0 = 0xf
data_16f22f8 = TEXTURE_CARD_GEN_PROMO_BLACK_MARKETART
data_16f2300 = SOUND_SOUND_CARDS_FX_LANDPLAY_BLACK_MARKET
__builtin_memcpy(&data_16f2290, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16f2320 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("pr_Black_Market")

if (x0 == 0)
    (*data_16f2320)(&data_16f2320, "pr_Black_Market")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f2320
    *UI2StateDeclI_counter = x10_1 + 1
    data_16f2328 = x11_1
else
    (*data_16f2320)(&data_16f2320, *(x0 + 0x10))

data_16f2338 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("pr_Black_Market")

if (x0_1 == 0)
    (*data_16f2338)(&data_16f2338, "pr_Black_Market")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f2338
    *UI2StateDeclI_counter = x10_3 + 1
    data_16f2340 = x11_2
else
    (*data_16f2338)(&data_16f2338, *(x0_1 + 0x10))

__builtin_memset(&data_16f2370, 0, 0xc0)
data_16f2358 = 4
data_16f2360 = BlackMarket
data_16f2370 = 0xd
data_16f2a10 = v1
data_16f2390 = BlackMarket_SetupGenerate
data_16f2420:4.d = 0x4000
data_16f2380 = BlackMarket_Setup
data_16f2a20 = 0
data_16f2350 = 0x300001300
data_16f2388 = 0x3c00000018
data_16f2a28 = 0x100000000
data_16f2a68 = "black_market_deck"
data_16f2a24 = 0
data_16f2a70 = 0
data_16f2aa0 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("pr_Black_Market_Pile")

if (x0_2 == 0)
    (*data_16f2aa0)(&data_16f2aa0, "pr_Black_Market_Pile")
    uint32_t x10_6 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f2aa0
    *UI2StateDeclI_counter = x10_6 + 1
    data_16f2aa8 = x11_3
else
    (*data_16f2aa0)(&data_16f2aa0, *(x0_2 + 0x10))

data_16f2ab8 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("pr_Black_Market_Pile")

if (x0_3 == 0)
    (*data_16f2ab8)(&data_16f2ab8, "pr_Black_Market_Pile")
    uint32_t x10_8 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f2ab8
    *UI2StateDeclI_counter = x10_8 + 1
    data_16f2ac0 = x11_4
else
    (*data_16f2ab8)(&data_16f2ab8, *(x0_3 + 0x10))

int128_t v1_2 = data_71b280
data_16f2ad0 = 0x10000000001301
data_16f2ad8 = 0x1000000000000
__builtin_memcpy(&data_16f3190, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f31e8 = "church"
data_16f31f0 = 0x1d
data_16f31f8 = TEXTURE_CARD_GEN_PROMO_CHURCH
data_16f3220 = _vtable_for_UI2StateDecl + 0x10
data_16f3200 = SOUND_SOUND_CARDS_FX_LANDPLAY_CHURCH
void* x0_4 = UI2StateDeclTryLookup("pr_Church")

if (x0_4 == 0)
    (*data_16f3220)(&data_16f3220, "pr_Church")
    uint32_t x10_11 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f3220
    *UI2StateDeclI_counter = x10_11 + 1
    data_16f3228 = x11_5
else
    (*data_16f3220)(&data_16f3220, *(x0_4 + 0x10))

data_16f3238 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("pr_Church")

if (x0_5 == 0)
    (*data_16f3238)(&data_16f3238, "pr_Church")
    uint32_t x10_13 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f3238
    *UI2StateDeclI_counter = x10_13 + 1
    data_16f3240 = x11_6
else
    (*data_16f3238)(&data_16f3238, *(x0_5 + 0x10))

data_16f3258 = 0x84
data_16f3260 = Church
data_16f3250 = 0x300001302
data_16f3870 = 1
__builtin_memcpy(&data_16f3910, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f3968 = "dismantle"
data_16f3970 = 0xc
data_16f3978 = TEXTURE_CARD_GEN_PROMO_DISMANTLE
data_16f39a0 = _vtable_for_UI2StateDecl + 0x10
data_16f3980 = SOUND_SOUND_CARDS_FX_LANDPLAY_DISMANTLE
void* x0_6 = UI2StateDeclTryLookup("pr_Dismantle")

if (x0_6 == 0)
    (*data_16f39a0)(&data_16f39a0, "pr_Dismantle")
    uint32_t x10_16 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f39a0
    *UI2StateDeclI_counter = x10_16 + 1
    data_16f39a8 = x11_7
else
    (*data_16f39a0)(&data_16f39a0, *(x0_6 + 0x10))

data_16f39b8 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("pr_Dismantle")

if (x0_7 == 0)
    (*data_16f39b8)(&data_16f39b8, "pr_Dismantle")
    uint32_t x10_18 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f39b8
    *UI2StateDeclI_counter = x10_18 + 1
    data_16f39c0 = x11_8
else
    (*data_16f39b8)(&data_16f39b8, *(x0_7 + 0x10))

int128_t v1_4 = data_71d200
data_16f39d0 = 0x400001303
data_16f39d8 = 4
data_16f39e0 = Dismantle
__builtin_memcpy(&data_16f4090, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x0b\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f40e8 = "envoy"
int128_t var_80 = v1_4
data_16f40f0 = 0x2d
data_16f40f8 = TEXTURE_CARD_GEN_PROMO_ENVOY
data_16f4120 = _vtable_for_UI2StateDecl + 0x10
data_16f4100 = SOUND_SOUND_CARDS_FX_LANDPLAY_ENVOY
void* x0_8 = UI2StateDeclTryLookup("pr_Envoy")

if (x0_8 == 0)
    (*data_16f4120)(&data_16f4120, "pr_Envoy")
    uint32_t x10_21 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f4120
    *UI2StateDeclI_counter = x10_21 + 1
    data_16f4128 = x11_9
else
    (*data_16f4120)(&data_16f4120, *(x0_8 + 0x10))

data_16f4138 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("pr_Envoy")

if (x0_9 == 0)
    (*data_16f4138)(&data_16f4138, "pr_Envoy")
    uint32_t x10_23 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f4138
    *UI2StateDeclI_counter = x10_23 + 1
    data_16f4140 = x11_10
else
    (*data_16f4138)(&data_16f4138, *(x0_9 + 0x10))

data_16f4150 = 0x400001304
data_16f4158 = 4
data_16f4160 = Envoy
__builtin_memcpy(&data_16f4810, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x0d\x13\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f4868 = "sauna"
data_16f4870 = 0x31
data_16f4878 = TEXTURE_CARD_GEN_PROMO_SAUNAART
data_16f4880 = SOUND_SOUND_CARDS_FX_LANDPLAY_SAUNA
data_16f48a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_10 = UI2StateDeclTryLookup("pr_Sauna")

if (x0_10 == 0)
    (*data_16f48a0)(&data_16f48a0, "pr_Sauna")
    uint32_t x10_25 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f48a0
    *UI2StateDeclI_counter = x10_25 + 1
    data_16f48a8 = x11_11
else
    (*data_16f48a0)(&data_16f48a0, *(x0_10 + 0x10))

data_16f48b8 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("pr_Sauna")

if (x0_11 == 0)
    (*data_16f48b8)(&data_16f48b8, "pr_Sauna")
    uint32_t x10_27 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f48b8
    *UI2StateDeclI_counter = x10_27 + 1
    data_16f48c0 = x11_12
else
    (*data_16f48b8)(&data_16f48b8, *(x0_11 + 0x10))

data_16f48d8 = 4
data_16f48e0 = Sauna
int128_t v0
v0.q = 0
v0:8.q = 0
data_16f48f8 = zx.o(0)
data_16f48f8:4.d = 3
data_16f4908 = zx.o(0)
data_16f4908.q = Sauna_OnPlay
data_16f4998 = zx.o(0)
data_16f4998.q = Sauna_OnPlay_Test
__builtin_memset(&data_16f49b0, 0, 0xc0)
__builtin_memset(&data_16f4918, 0, 0x80)
data_16f49b0 = 0xa
data_16f4ef0 = 1
data_16f49a8 = 0
data_16f49c0:8 = SplitPile<4869, 4870>
data_16f4f90 = v1_2
data_16f4fa0 = 0
data_16f48d0 = 0x400001305
data_16f48f0 = 0x100000006
data_16f4998:0xc = 0x100000003
data_16f4fa8 = 0x100000000
data_16f4fe8 = "avanto"
data_16f4fa4 = 0
data_16f4ff0 = 0x31
data_16f4ff8 = TEXTURE_CARD_GEN_PROMO_AVANTOART
data_16f5020 = _vtable_for_UI2StateDecl + 0x10
data_16f5000 = SOUND_SOUND_CARDS_FX_LANDPLAY_AVANTO
void* x0_12 = UI2StateDeclTryLookup("pr_Avanto")

if (x0_12 == 0)
    (*data_16f5020)(&data_16f5020, "pr_Avanto")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f5020
    *UI2StateDeclI_counter = x10_30 + 1
    data_16f5028 = x11_13
else
    (*data_16f5020)(&data_16f5020, *(x0_12 + 0x10))

data_16f5038 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("pr_Avanto")

if (x0_13 == 0)
    (*data_16f5038)(&data_16f5038, "pr_Avanto")
    uint32_t x10_32 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f5038
    *UI2StateDeclI_counter = x10_32 + 1
    data_16f5040 = x11_14
else
    (*data_16f5038)(&data_16f5038, *(x0_13 + 0x10))

data_16f5050 = 0x500001306
data_16f5058 = 0x1000000000004
data_16f5060 = Avanto
__builtin_memcpy(&data_16f5710, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16f5768 = "walled_village"
data_16f5728 = 0x100000000
data_16f5770 = 0xc
data_16f5778 = TEXTURE_CARD_GEN_PROMO_WALLED_VILLAGE
data_16f57a0 = _vtable_for_UI2StateDecl + 0x10
data_16f5780 = SOUND_SOUND_CARDS_FX_LANDPLAY_WALLED_VILLAGE
void* x0_14 = UI2StateDeclTryLookup("pr_Walled_Village")

if (x0_14 == 0)
    (*data_16f57a0)(&data_16f57a0, "pr_Walled_Village")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f57a0
    *UI2StateDeclI_counter = x10_35 + 1
    data_16f57a8 = x11_15
else
    (*data_16f57a0)(&data_16f57a0, *(x0_14 + 0x10))

data_16f57b8 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("pr_Walled_Village")

if (x0_15 == 0)
    (*data_16f57b8)(&data_16f57b8, "pr_Walled_Village")
    uint32_t x10_37 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f57b8
    *UI2StateDeclI_counter = x10_37 + 1
    data_16f57c0 = x11_16
else
    (*data_16f57b8)(&data_16f57b8, *(x0_15 + 0x10))

__builtin_memset(&data_16f57f8, 0, 0xb0)
data_16f57d8 = 4
data_16f57e0 = WalledVillage
data_16f57f8:4.d = 4
data_16f5808 = WalledVillage_StartOfCleanup
data_16f5898 = WalledVillage_StartOfCleanup_Test
data_16f5df0 = 1
data_16f58a4:4 = 0
data_16f57f0 = 0x100000006
data_16f58a4 = 0x100000003
__builtin_memcpy(&data_16f5e90, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x01\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f57d0 = 0x400001307
data_16f5ee8 = "governor"
data_16f5ef0 = 0x14
data_16f5ef8 = TEXTURE_CARD_GEN_PROMO_GOVERNOR
data_16f5f20 = _vtable_for_UI2StateDecl + 0x10
data_16f5f00 = SOUND_SOUND_CARDS_FX_LANDPLAY_GOVERNOR
void* x0_16 = UI2StateDeclTryLookup("pr_Governor")

if (x0_16 == 0)
    (*data_16f5f20)(&data_16f5f20, "pr_Governor")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f5f20
    *UI2StateDeclI_counter = x10_40 + 1
    data_16f5f28 = x11_17
else
    (*data_16f5f20)(&data_16f5f20, *(x0_16 + 0x10))

data_16f5f38 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("pr_Governor")

if (x0_17 == 0)
    (*data_16f5f38)(&data_16f5f38, "pr_Governor")
    uint32_t x10_42 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f5f38
    *UI2StateDeclI_counter = x10_42 + 1
    data_16f5f40 = x11_18
else
    (*data_16f5f38)(&data_16f5f38, *(x0_17 + 0x10))

data_16f5f50 = 0x500001308
data_16f5f58 = 4
data_16f5f60 = Governor
__builtin_memcpy(&data_16f6610, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16f6668 = "stash"
data_16f6628 = 0x100000000
data_16f6670 = 0x2a
data_16f6678 = TEXTURE_CARD_GEN_PROMO_STASH
data_16f66a0 = _vtable_for_UI2StateDecl + 0x10
data_16f6680 = SOUND_SOUND_CARDS_FX_LANDPLAY_STASH
void* x0_18 = UI2StateDeclTryLookup("pr_Stash")

if (x0_18 == 0)
    (*data_16f66a0)(&data_16f66a0, "pr_Stash")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f66a0
    *UI2StateDeclI_counter = x10_45 + 1
    data_16f66a8 = x11_19
else
    (*data_16f66a0)(&data_16f66a0, *(x0_18 + 0x10))

data_16f66b8 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("pr_Stash")

if (x0_19 == 0)
    (*data_16f66b8)(&data_16f66b8, "pr_Stash")
    uint32_t x10_47 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f66b8
    *UI2StateDeclI_counter = x10_47 + 1
    data_16f66c0 = x11_20
else
    (*data_16f66b8)(&data_16f66b8, *(x0_19 + 0x10))

__builtin_memset(&data_16f66f8, 0, 0xb0)
data_16f66f0 = 0x600000006
data_16f66d8 = 2
data_16f66e0 = Stash
data_16f66f8:4.d = 4
data_16f66d0 = 0x500001309
data_16f6708 = Stash_AfterShuffle
data_16f6798 = Stash_OnShuffle_Test
data_16f67a8 = 0
data_16f67a8.d = 1
data_16f6cf0 = 1
__builtin_memcpy(&data_16f6d90, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f6de8 = "captain"
data_16f6df0 = 0x1d
data_16f6df8 = TEXTURE_CARD_GEN_PROMO_CAPTAIN
data_16f6e20 = _vtable_for_UI2StateDecl + 0x10
data_16f6e00 = SOUND_SOUND_CARDS_FX_LANDPLAY_CAPTAIN
void* x0_20 = UI2StateDeclTryLookup("pr_Captain")

if (x0_20 == 0)
    (*data_16f6e20)(&data_16f6e20, "pr_Captain")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f6e20
    *UI2StateDeclI_counter = x10_50 + 1
    data_16f6e28 = x11_21
else
    (*data_16f6e20)(&data_16f6e20, *(x0_20 + 0x10))

data_16f6e38 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("pr_Captain")

if (x0_21 == 0)
    (*data_16f6e38)(&data_16f6e38, "pr_Captain")
    uint32_t x10_52 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f6e38
    *UI2StateDeclI_counter = x10_52 + 1
    data_16f6e40 = x11_22
else
    (*data_16f6e38)(&data_16f6e38, *(x0_21 + 0x10))

data_16f6e58 = 0x400000000084
data_16f6e60 = Captain
data_16f7470 = 1
__builtin_memcpy(&data_16f7510, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f6e50 = 0x60000130a
data_16f7568 = "prince"
data_16f7570 = 0xe
data_16f7578 = TEXTURE_CARD_GEN_PROMO_PRINCE
data_16f75a0 = _vtable_for_UI2StateDecl + 0x10
data_16f7580 = SOUND_SOUND_CARDS_FX_LANDPLAY_PRINCE
void* x0_22 = UI2StateDeclTryLookup("pr_Prince")

if (x0_22 == 0)
    (*data_16f75a0)(&data_16f75a0, "pr_Prince")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f75a0
    *UI2StateDeclI_counter = x10_55 + 1
    data_16f75a8 = x11_23
else
    (*data_16f75a0)(&data_16f75a0, *(x0_22 + 0x10))

data_16f75b8 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("pr_Prince")

if (x0_23 == 0)
    (*data_16f75b8)(&data_16f75b8, "pr_Prince")
    uint32_t x10_57 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f75b8
    *UI2StateDeclI_counter = x10_57 + 1
    data_16f75c0 = x11_24
else
    (*data_16f75b8)(&data_16f75b8, *(x0_23 + 0x10))

data_16f75d8 = 0x400000000084
data_16f75e0 = Prince
data_16f7bf0 = 1
__builtin_memcpy(&data_16f7c90, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f75d0 = 0x80000130b
data_16f7ce8 = "summon"
data_16f7cf0 = 0x28
data_16f7cf8 = TEXTURE_CARD_GEN_PROMO_SUMMON_1
data_16f7d20 = _vtable_for_UI2StateDecl + 0x10
data_16f7d00 = SOUND_SOUND_CARDS_FX_BUY_EVENT_SUMMON
void* x0_24 = UI2StateDeclTryLookup("pr_Summon")

if (x0_24 == 0)
    (*data_16f7d20)(&data_16f7d20, "pr_Summon")
    uint32_t x10_60 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f7d20
    *UI2StateDeclI_counter = x10_60 + 1
    data_16f7d28 = x11_25
else
    (*data_16f7d20)(&data_16f7d20, *(x0_24 + 0x10))

data_16f7d38 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("pr_Summon")

if (x0_25 == 0)
    (*data_16f7d38)(&data_16f7d38, "pr_Summon")
    uint32_t x10_62 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f7d38
    *UI2StateDeclI_counter = x10_62 + 1
    data_16f7d40 = x11_26
else
    (*data_16f7d38)(&data_16f7d38, *(x0_25 + 0x10))

data_16f7d58 = 0x400
data_16f7d60 = Summon
data_16f8370 = 1
data_16f7d50 = 0x50000130c
__builtin_memcpy(&data_16f8410, 
    "\x04\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16f8468 = "sauna"
data_16f8470 = 0x31
data_16f8478 = TEXTURE_CARD_GEN_PROMO_SAUNAART
data_16f8480 = SOUND_SOUND_CARDS_FX_LANDPLAY_SAUNA
data_16f84a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_26 = UI2StateDeclTryLookup("pr22_Sauna")

if (x0_26 == 0)
    (*data_16f84a0)(&data_16f84a0, "pr22_Sauna")
    uint32_t x10_64 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f84a0
    *UI2StateDeclI_counter = x10_64 + 1
    data_16f84a8 = x11_28
else
    (*data_16f84a0)(&data_16f84a0, *(x0_26 + 0x10))

data_16f84b8 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("pr_Sauna")

if (x0_27 == 0)
    (*data_16f84b8)(&data_16f84b8, "pr_Sauna")
    uint32_t x10_66 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f84b8
    *UI2StateDeclI_counter = x10_66 + 1
    data_16f84c0 = x11_29
else
    (*data_16f84b8)(&data_16f84b8, *(x0_27 + 0x10))

int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
data_16f84d8 = 4
data_16f84e0 = Sauna22
__builtin_memset(&data_16f84f0, 0, 0x20)
data_16f84f0 = 0xa
__builtin_memset(&data_16f8510, 0, 0xa0)
v0_1 = data_71ceb0
data_16f8af0 = 1
data_16f8b90 = v0_1
data_16f84d0 = 0x400001305
data_16f8500:8 = SplitPile<4869, 4870>
data_16f8ba0 = 4
data_16f8ba8 = 0x100000000
data_16f8be8 = "marchland"
data_16f8bf0 = 0xe
data_16f8bf8 = TEXTURE_CARD_GEN_PROMO_MARCHLAND
data_16f8c00 = SOUND_SOUND_CARDS_FX_LANDPLAY_SAUNA
data_16f8c20 = _vtable_for_UI2StateDecl + 0x10
void* x0_28 = UI2StateDeclTryLookup("pr_Marchland")

if (x0_28 == 0)
    (*data_16f8c20)(&data_16f8c20, "pr_Marchland")
    uint32_t x10_68 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f8c20
    *UI2StateDeclI_counter = x10_68 + 1
    data_16f8c28 = x11_30
else
    (*data_16f8c20)(&data_16f8c20, *(x0_28 + 0x10))

data_16f8c38 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("pr_Marchland")
int64_t result
int128_t v0_2

if (x0_29 == 0)
    result, v0_2 = (*data_16f8c38)(&data_16f8c38, "pr_Marchland")
    uint32_t x10_70 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16f8c38
    *UI2StateDeclI_counter = x10_70 + 1
    data_16f8c40 = x11_31
else
    result, v0_2 = (*data_16f8c38)(&data_16f8c38, *(x0_29 + 0x10))

v0_2.q = 0
v0_2:8.q = 0
__builtin_memset(&data_16f8c78, 0, 0xb0)
data_16f8c70 = 0x600000006
v0_2.q = 0x100000000
data_16f8c50 = 0x50000130e
data_16f8d24:4 = 0
data_16f8d24 = 0x100000000
data_7e9458
v0_2 = data_7e9428
__builtin_memset(&data_16f92c0, 0, 0x50)
data_16f8c58 = 8
data_16f8c68 = Marchland_VP
data_16f8c78:4.d = 1
data_16f8c88 = Marchland_OnGain
data_16f8d18 = 0
data_16f9270 = 1
data_16f92b0 = v0_2
return result
