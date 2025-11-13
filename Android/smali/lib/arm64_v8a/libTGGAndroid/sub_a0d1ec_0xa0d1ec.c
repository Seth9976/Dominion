// 函数: sub_a0d1ec
// 地址: 0xa0d1ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
v0, v1 = memset(0x14a7ff8, 0, 0x1e780)
data_71c460
data_7ac748
__builtin_memcpy(&data_14a8000, 
    "\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x09\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
v1 = data_7ac778
data_14a8030 = data_7ac768
data_14a8050 = "coin_of_the_realm"
data_14a8058 = 0x37
data_14a8060 = TEXTURE_CARD_GEN_ADVENTURES_COINSOFTHEREALM
data_14a8068 = SOUND_SOUND_CARDS_FX_LANDPLAY_COIN_OF_THE_REALM
data_14a8040 = v1
data_14a8088 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("ad_Coin_of_the_Realm")

if (x0 == 0)
    (*data_14a8088)(&data_14a8088, "ad_Coin_of_the_Realm")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a8088
    *UI2StateDeclI_counter = x10_1 + 1
    data_14a8090 = x11_1
else
    (*data_14a8088)(&data_14a8088, *(x0 + 0x10))

data_14a80a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("ad_Coin_of_the_Realm")

if (x0_1 == 0)
    (*data_14a80a0)(&data_14a80a0, "ad_Coin_of_the_Realm")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a80a0
    *UI2StateDeclI_counter = x10_3 + 1
    data_14a80a8 = x11_2
else
    (*data_14a80a0)(&data_14a80a0, *(x0_1 + 0x10))

data_14a80c0 = 0x202
data_14a80c8 = CoinOfTheRealm
data_14a80f0 = zx.o(0)
data_14a80f0.q = CoinOfTheRealm_Call
data_14a80e0 = zx.o(0)
__builtin_memset(&data_14a8100, 0, 0x90)
data_14a8180 = CoinOfTheRealm_Test
data_14a80e0:4.d = 1
data_14a86d8 = 1
data_14a818c:4 = 0
data_14a818c = 0x100000001
int128_t v2 = data_71c2d0
data_14a80b8 = 0x200000b00
data_14a80d8 = 0x500000006
__builtin_memcpy(&data_14a8778, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x0b\x00\x00\x00\x"
"0a\x00\x02\x00\x00\x00\x00\x00", 
    0x20)
data_14a8798 = 0xffffffff
data_14a87d0 = "page"
data_14a87d8 = 2
data_14a87e0 = TEXTURE_CARD_GEN_ADVENTURES_PAGE
data_14a8808 = _vtable_for_UI2StateDecl + 0x10
data_14a87e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_PAGE
void* x0_2 = UI2StateDeclTryLookup("ad_Page")

if (x0_2 == 0)
    (*data_14a8808)(&data_14a8808, "ad_Page")
    uint32_t x10_6 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a8808
    *UI2StateDeclI_counter = x10_6 + 1
    data_14a8810 = x11_3
else
    (*data_14a8808)(&data_14a8808, *(x0_2 + 0x10))

data_14a8820 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("ad_Page")

if (x0_3 == 0)
    (*data_14a8820)(&data_14a8820, "ad_Page")
    uint32_t x10_8 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a8820
    *UI2StateDeclI_counter = x10_8 + 1
    data_14a8828 = x11_4
else
    (*data_14a8820)(&data_14a8820, *(x0_3 + 0x10))

int128_t v1_1
v1_1.d = 6
v1_1:4.d = 6
data_14a8858 = 0x600000006
v1_1.q = 0x200000b01
data_14a8840 = 0x104
data_14a8848 = Page
data_14a8860 = zx.o(0)
data_14a8860:4.d = 3
data_14a8870 = zx.o(0)
data_14a8870.q = Page_ExchangeCard
data_14a8900 = zx.o(0)
data_14a8900.q = Page_TestExchange
data_14a8838 = 0x200000b01
__builtin_memset(&data_14a8910, 0, 0x18)
__builtin_memset(&data_14a8880, 0, 0x80)
data_14a8900:0xc = 0x100000003
__builtin_memset(&data_14a89d8, 0, 0x20)
data_14a89e8:8.d = 0xb35
__builtin_memset(&data_14a8928, 0, 0x20)
data_14a8928:8.d = 0xb33
__builtin_memset(&data_14a8948, 0, 0x90)
data_14a8918 = 0xc
data_14a89c8:4.d = 0x40
__builtin_memset(&data_14a89f8, 0, 0xa0)
data_14a89d8 = 0xc
data_14a8a88:4.d = 0x40
__builtin_memset(&data_14a8a98, 0, 0xc0)
data_14a8a98 = 0xc
data_14a8aa8:8.d = 0xb37
data_14a8b48:4.d = 0x40
__builtin_memset(&data_14a8b58, 0, 0x20)
data_14a8b58 = 0xc
__builtin_memset(&data_14a8b78, 0, 0xa0)
data_14a8b68:8.d = 0xb39
data_14a8c08:4.d = 0x40
data_14a8e58 = 1
__builtin_memcpy(&data_14a8ef8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x0f\x00\x00\x00\x"
"21\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14a8f18 = 0xffffffff
data_14a8f50 = "peasant"
data_14a8f58 = 0x14
data_14a8f60 = TEXTURE_CARD_GEN_ADVENTURES_PEASANT
data_14a8f68 = SOUND_SOUND_CARDS_FX_LANDPLAY_PEASANT
data_14a8f88 = _vtable_for_UI2StateDecl + 0x10
void* x0_4 = UI2StateDeclTryLookup("ad_Peasant")

if (x0_4 == 0)
    (*data_14a8f88)(&data_14a8f88, "ad_Peasant")
    uint32_t x10_10 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a8f88
    *UI2StateDeclI_counter = x10_10 + 1
    data_14a8f90 = x11_5
else
    (*data_14a8f88)(&data_14a8f88, *(x0_4 + 0x10))

data_14a8fa0 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("ad_Peasant")

if (x0_5 == 0)
    (*data_14a8fa0)(&data_14a8fa0, "ad_Peasant")
    uint32_t x10_12 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a8fa0
    *UI2StateDeclI_counter = x10_12 + 1
    data_14a8fa8 = x11_6
else
    (*data_14a8fa0)(&data_14a8fa0, *(x0_5 + 0x10))

data_14a8fc0 = 0x104
data_14a8fc8 = Peasant
data_14a8fe0 = zx.o(0)
data_14a8fe0:4.d = 3
data_14a8ff0 = zx.o(0)
data_14a8ff0.q = Peasant_ExchangeCard
data_14a9080 = zx.o(0)
data_14a9080.q = Peasant_TestExchange
__builtin_memset(&data_14a9090, 0, 0x18)
__builtin_memset(&data_14a9000, 0, 0x80)
data_14a8fd8 = 0x600000006
data_14a9080:0xc = 0x100000003
data_14a8fb8 = 0x200000b02
__builtin_memset(&data_14a9158, 0, 0x20)
data_14a9168:8.d = 0xb34
__builtin_memset(&data_14a90a8, 0, 0x20)
data_14a90a8:8.d = 0xb32
__builtin_memset(&data_14a90c8, 0, 0x90)
data_14a9098 = 0xc
data_14a9148:4.d = 0x40
__builtin_memset(&data_14a9178, 0, 0xa0)
data_14a9158 = 0xc
data_14a9208:4.d = 0x40
__builtin_memset(&data_14a9218, 0, 0xc0)
data_14a9218 = 0xc
data_14a9228:8.d = 0xb36
data_14a92c8:4.d = 0x40
__builtin_memset(&data_14a92d8, 0, 0x20)
data_14a92d8 = 0xc
__builtin_memset(&data_14a92f8, 0, 0xa0)
data_14a92e8:8.d = 0xb38
data_14a9388:4.d = 0x40
data_14a95d8 = 1
__builtin_memcpy(&data_14a9678, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x0a\x00\x00\x00", 
    0x18)
data_14a96d0 = "ratcatcher"
__builtin_memset(&data_14a96b0, 0, 0x20)
__builtin_memcpy(&data_14a9690, 
    "\x0a\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14a96d8 = 0xe
data_14a96e0 = TEXTURE_CARD_GEN_ADVENTURES_RATCATCHER
data_14a96e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_RATCATCHER
data_14a9708 = _vtable_for_UI2StateDecl + 0x10
void* x0_6 = UI2StateDeclTryLookup("ad_Ratcatcher")

if (x0_6 == 0)
    (*data_14a9708)(&data_14a9708, "ad_Ratcatcher")
    uint32_t x10_14 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a9708
    *UI2StateDeclI_counter = x10_14 + 1
    data_14a9710 = x11_8
else
    (*data_14a9708)(&data_14a9708, *(x0_6 + 0x10))

data_14a9720 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("ad_Ratcatcher")

if (x0_7 == 0)
    (*data_14a9720)(&data_14a9720, "ad_Ratcatcher")
    uint32_t x10_16 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a9720
    *UI2StateDeclI_counter = x10_16 + 1
    data_14a9728 = x11_9
else
    (*data_14a9720)(&data_14a9720, *(x0_7 + 0x10))

int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
__builtin_memset(&data_14a9760, 0, 0xb0)
v0_1.q = 0x200000b03
data_14a9738 = 0x200000b03
data_14a9770 = Ratcatcher_Call
data_14a9740 = 0x204
data_14a9748 = Ratcatcher
data_14a9d58 = 1
data_14a980c:4 = 0
data_14a9758 = 0x500000006
data_14a9760:4.d = 0
data_14a9800 = 0
data_14a980c = 0x100000003
__builtin_memcpy(&data_14a9df8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"02\x30\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14a9e18 = 0xffffffff
data_14a9e50 = "raze"
data_14a9e58 = 0x34
data_14a9e60 = TEXTURE_CARD_GEN_ADVENTURES_RAZE
data_14a9e88 = _vtable_for_UI2StateDecl + 0x10
data_14a9e68 = SOUND_SOUND_CARDS_FX_LANDPLAY_RAZE
void* x0_8 = UI2StateDeclTryLookup("ad_Raze")

if (x0_8 == 0)
    (*data_14a9e88)(&data_14a9e88, "ad_Raze")
    uint32_t x10_19 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a9e88
    *UI2StateDeclI_counter = x10_19 + 1
    data_14a9e90 = x11_10
else
    (*data_14a9e88)(&data_14a9e88, *(x0_8 + 0x10))

data_14a9ea0 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("ad_Raze")

if (x0_9 == 0)
    (*data_14a9ea0)(&data_14a9ea0, "ad_Raze")
    uint32_t x10_21 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14a9ea0
    *UI2StateDeclI_counter = x10_21 + 1
    data_14a9ea8 = x11_11
else
    (*data_14a9ea0)(&data_14a9ea0, *(x0_9 + 0x10))

data_14a9eb8 = 0x200000b04
data_14a9ec0 = 4
data_14a9ec8 = Raze
__builtin_memcpy(&data_14aa578, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"01\x20\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14aa598 = 0xffffffff
data_14aa5d0 = "amulet"
data_14aa5d8 = 0x2d
data_14aa5e0 = TEXTURE_CARD_GEN_ADVENTURES_AMULET
data_14aa608 = _vtable_for_UI2StateDecl + 0x10
data_14aa5e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_AMULET
void* x0_10 = UI2StateDeclTryLookup("ad_Amulet")

if (x0_10 == 0)
    (*data_14aa608)(&data_14aa608, "ad_Amulet")
    uint32_t x10_24 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14aa608
    *UI2StateDeclI_counter = x10_24 + 1
    data_14aa610 = x11_12
else
    (*data_14aa608)(&data_14aa608, *(x0_10 + 0x10))

data_14aa620 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("ad_Amulet")
int128_t v0_2
int128_t v2_1
int128_t v1_3

if (x0_11 == 0)
    v0_2, v1_3, v2_1 = (*data_14aa620)(&data_14aa620, "ad_Amulet")
    uint32_t x10_26 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14aa620
    *UI2StateDeclI_counter = x10_26 + 1
    data_14aa628 = x11_13
else
    v0_2, v1_3, v2_1 = (*data_14aa620)(&data_14aa620, *(x0_11 + 0x10))
v0_2.q = 0x300000b05
data_14aac58 = 1
data_14aa640 = 0x84
data_14aa648 = Amulet
data_14aacf8 = v2
data_14aa638 = 0x300000b05
v0_2 = data_7ac7c8
v2_1 = data_7ac7d8
data_14aad08 = 0x400000002
data_14aad10 = v0_2
data_14aad50 = "caravan_guard"
data_14aad20 = v2_1
__builtin_memset(&data_14aad30, 0, 0x20)
data_14aad58 = 0x1d
data_14aad60 = TEXTURE_CARD_GEN_ADVENTURES_CARAVANGUARD
data_14aad68 = SOUND_SOUND_CARDS_FX_LANDPLAY_CARAVANGUARD
data_14aad70 = SOUND_SOUND_CARDS_FX_REACTION_CARAVAN_GUARD
data_14aad88 = _vtable_for_UI2StateDecl + 0x10
void* x0_12 = UI2StateDeclTryLookup("ad22_Caravan_Guard")

if (x0_12 == 0)
    (*data_14aad88)(&data_14aad88, "ad22_Caravan_Guard")
    uint32_t x10_28 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14aad88
    *UI2StateDeclI_counter = x10_28 + 1
    data_14aad90 = x11_14
else
    (*data_14aad88)(&data_14aad88, *(x0_12 + 0x10))

data_14aada0 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("ad_Caravan_Guard")

if (x0_13 == 0)
    (*data_14aada0)(&data_14aada0, "ad_Caravan_Guard")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14aada0
    *UI2StateDeclI_counter = x10_30 + 1
    data_14aada8 = x11_15
else
    (*data_14aada0)(&data_14aada0, *(x0_13 + 0x10))

data_14aadc0 = 0xc4
data_14aadc8 = CaravanGuard
data_14aade0 = zx.o(0)
data_14aade0:4.d = 5
data_14aae80 = zx.o(0)
data_14aadf0 = zx.o(0)
data_14aadf0.q = CaravanGuard_Reaction
data_14aae80.q = CaravanGuard_Reaction_Test
__builtin_memset(&data_14aae00, 0, 0x80)
data_14aadb8 = 0x300000b06
data_14aae90 = 0
__builtin_memcpy(&data_14ab478, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"48\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14aadd8 = 6
data_14aae80:0xc = 0x800000003
__builtin_memset(&data_14ab3f8, 0, 0x20)
__builtin_memcpy(&data_14ab3d8, 
    "\x08\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"26\x7b\x79\x00\x00\x00\x00\x00", 
    0x20)
data_14ab498 = 0xffffffff
data_14ab4d0 = "dungeon"
data_14ab4d8 = 0x2a
data_14ab4e0 = TEXTURE_CARD_GEN_ADVENTURES_DUNGEON
data_14ab508 = _vtable_for_UI2StateDecl + 0x10
data_14ab4e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_DUNGEON
void* x0_14 = UI2StateDeclTryLookup("ad_Dungeon")

if (x0_14 == 0)
    (*data_14ab508)(&data_14ab508, "ad_Dungeon")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ab508
    *UI2StateDeclI_counter = x10_33 + 1
    data_14ab510 = x11_16
else
    (*data_14ab508)(&data_14ab508, *(x0_14 + 0x10))

data_14ab520 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("ad_Dungeon")
int128_t v1_4
int128_t v2_2

if (x0_15 == 0)
    v1_4, v2_2 = (*data_14ab520)(&data_14ab520, "ad_Dungeon")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ab520
    *UI2StateDeclI_counter = x10_35 + 1
    data_14ab528 = x11_17
else
    v1_4, v2_2 = (*data_14ab520)(&data_14ab520, *(x0_15 + 0x10))

data_14abb58 = 1
data_14ab540 = 0x84
data_14ab548 = Dungeon
data_14abbf8 = v2
v1_4 = data_7ac808
v2_2 = data_7ac818
data_14ab538 = 0x300000b07
data_14abc08 = 4
data_14abc10 = v1_4
data_14abc50 = "gear"
data_14abc20 = v2_2
__builtin_memset(&data_14abc30, 0, 0x20)
data_14abc58 = 0x28
data_14abc60 = TEXTURE_CARD_GEN_ADVENTURES_GEAR
data_14abc88 = _vtable_for_UI2StateDecl + 0x10
data_14abc68 = SOUND_SOUND_CARDS_FX_LANDPLAY_GEAR
void* x0_16 = UI2StateDeclTryLookup("ad_Gear")

if (x0_16 == 0)
    (*data_14abc88)(&data_14abc88, "ad_Gear")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14abc88
    *UI2StateDeclI_counter = x10_38 + 1
    data_14abc90 = x11_18
else
    (*data_14abc88)(&data_14abc88, *(x0_16 + 0x10))

data_14abca0 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("ad_Gear")
int128_t v1_5
int128_t v2_3

if (x0_17 == 0)
    v1_5, v2_3 = (*data_14abca0)(&data_14abca0, "ad_Gear")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14abca0
    *UI2StateDeclI_counter = x10_40 + 1
    data_14abca8 = x11_19
else
    v1_5, v2_3 = (*data_14abca0)(&data_14abca0, *(x0_17 + 0x10))

data_14abcc0 = 0x84
data_14abcc8 = Gear
data_14ac378 = v2
v1_5 = data_7ac848
v2_3 = data_7ac858
data_14ac2d8 = 1
data_14ac388 = 4
data_14abcb8 = 0x300000b08
data_14ac390 = v1_5
data_14ac3d0 = "guide"
data_14ac3a0 = v2_3
__builtin_memset(&data_14ac3b0, 0, 0x20)
data_14ac3d8 = 0xe
data_14ac3e0 = TEXTURE_CARD_GEN_ADVENTURES_GUIDE
data_14ac408 = _vtable_for_UI2StateDecl + 0x10
data_14ac3e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_GUIDE
void* x0_18 = UI2StateDeclTryLookup("ad_Guide")

if (x0_18 == 0)
    (*data_14ac408)(&data_14ac408, "ad_Guide")
    uint32_t x10_43 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ac408
    *UI2StateDeclI_counter = x10_43 + 1
    data_14ac410 = x11_20
else
    (*data_14ac408)(&data_14ac408, *(x0_18 + 0x10))

data_14ac420 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("ad_Guide")

if (x0_19 == 0)
    (*data_14ac420)(&data_14ac420, "ad_Guide")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ac420
    *UI2StateDeclI_counter = x10_45 + 1
    data_14ac428 = x11_21
else
    (*data_14ac420)(&data_14ac420, *(x0_19 + 0x10))

int128_t v0_3
v0_3.q = 0
v0_3:8.q = 0
__builtin_memset(&data_14ac460, 0, 0xb0)
data_14ac440 = 0x204
data_14ac448 = Guide
data_14ac470 = Guide_Call
data_14aca58 = 1
data_14ac50c:4 = 0
data_14ac50c = 0x100000001
__builtin_memcpy(&data_14acaf8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14ac438 = 0x300000b09
data_14ac458 = 0x500000006
data_14ac460:4.d = 0
data_14ac500 = 0
data_14acb50 = "duplicate"
__builtin_memset(&data_14acb30, 0, 0x20)
__builtin_memcpy(&data_14acb10, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14acb58 = 0x37
data_14acb60 = TEXTURE_CARD_GEN_ADVENTURES_DUPLICATE
data_14acb88 = _vtable_for_UI2StateDecl + 0x10
data_14acb68 = SOUND_SOUND_CARDS_FX_LANDPLAY_DUPLICATE
void* x0_20 = UI2StateDeclTryLookup("ad_Duplicate")

if (x0_20 == 0)
    (*data_14acb88)(&data_14acb88, "ad_Duplicate")
    uint32_t x10_48 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14acb88
    *UI2StateDeclI_counter = x10_48 + 1
    data_14acb90 = x11_22
else
    (*data_14acb88)(&data_14acb88, *(x0_20 + 0x10))

data_14acba0 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("ad_Duplicate")

if (x0_21 == 0)
    (*data_14acba0)(&data_14acba0, "ad_Duplicate")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14acba0
    *UI2StateDeclI_counter = x10_50 + 1
    data_14acba8 = x11_23
else
    (*data_14acba0)(&data_14acba0, *(x0_21 + 0x10))

__builtin_memset(&data_14acbe0, 0, 0xb8)
data_14acc8c = 0x100000001
data_14acbc0 = 0x204
data_14acbc8 = Duplicate
data_14acbe0:4.d = 2
data_14acbb8 = 0x400000b0a
data_14acbf0 = Duplicate_Call_OnGain
data_14acc80 = Duplicate_Test
data_14ad1d8 = 1
data_14acbd8 = 0x500000006
__builtin_memcpy(&data_14ad278, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x09\x00\x00\x00\x"
"0a\x10\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14ad298 = 0xffffffff
data_14ad2d0 = "magpie"
data_14ad2d8 = 0x28
data_14ad2e0 = TEXTURE_CARD_GEN_ADVENTURES_MAGPIE
data_14ad2e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_MAGPIE
data_14ad308 = _vtable_for_UI2StateDecl + 0x10
void* x0_22 = UI2StateDeclTryLookup("ad_Magpie")

if (x0_22 == 0)
    (*data_14ad308)(&data_14ad308, "ad_Magpie")
    uint32_t x10_53 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ad308
    *UI2StateDeclI_counter = x10_53 + 1
    data_14ad310 = x11_24
else
    (*data_14ad308)(&data_14ad308, *(x0_22 + 0x10))

data_14ad320 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("ad_Magpie")
int128_t v1_7
int128_t v2_4
int128_t v3

if (x0_23 == 0)
    v1_7, v2_4, v3 = (*data_14ad320)(&data_14ad320, "ad_Magpie")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ad320
    *UI2StateDeclI_counter = x10_55 + 1
    data_14ad328 = x11_25
else
    v1_7, v2_4, v3 = (*data_14ad320)(&data_14ad320, *(x0_23 + 0x10))

v1_7 = data_71d010
data_14ad340 = 4
data_14ad348 = Magpie
v2_4 = data_7aca48
v3 = data_7aca58
data_14ad338 = 0x400000b0b
data_14ad9f8 = v1_7
data_14ada08 = 0x15
int128_t var_e0
__builtin_memcpy(&var_e0, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x21\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
data_14ada10 = v2_4
data_14ada20 = v3
int128_t var_100
__builtin_memset(&var_100, 0, 0x20)
__builtin_memset(&data_14ada30, 0, 0x20)
data_14ada50 = "messenger"
data_14ada58 = 0x2a
data_14ada60 = TEXTURE_CARD_GEN_ADVENTURES_MESSENGER
data_14ada68 = SOUND_SOUND_CARDS_FX_LANDPLAY_MESSENGER
data_14ada88 = _vtable_for_UI2StateDecl + 0x10
void* x0_24 = UI2StateDeclTryLookup("ad_Messenger")

if (x0_24 == 0)
    (*data_14ada88)(&data_14ada88, "ad_Messenger")
    uint32_t x10_57 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ada88
    *UI2StateDeclI_counter = x10_57 + 1
    data_14ada90 = x11_26
else
    (*data_14ada88)(&data_14ada88, *(x0_24 + 0x10))

data_14adaa0 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("ad_Messenger")

if (x0_25 == 0)
    (*data_14adaa0)(&data_14adaa0, "ad_Messenger")
    uint32_t x10_59 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14adaa0
    *UI2StateDeclI_counter = x10_59 + 1
    data_14adaa8 = x11_27
else
    (*data_14adaa0)(&data_14adaa0, *(x0_25 + 0x10))

int128_t v0_4
v0_4.q = 0
v0_4:8.q = 0
__builtin_memset(&data_14adae0, 0, 0xb0)
data_14adaf0 = Messenger_OnBuy
data_14adb80 = Messenger_OnBuy_Test
data_14adb90 = 0
data_14adb90.d = 1
data_14ae0d8 = 1
data_14adac0 = 4
data_14adac8 = Messenger
data_14adad8 = 0x600000006
data_14adae0:4.d = 0
__builtin_memcpy(&data_14ae178, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"01\x04\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14adab8 = 0x400000b0c
data_14ae198 = 0xffffffff
data_14ae1d0 = "miser"
data_14ae1d8 = 0x28
data_14ae1e0 = TEXTURE_CARD_GEN_ADVENTURES_MISER
data_14ae208 = _vtable_for_UI2StateDecl + 0x10
data_14ae1e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_MISER
void* x0_26 = UI2StateDeclTryLookup("ad_Miser")

if (x0_26 == 0)
    (*data_14ae208)(&data_14ae208, "ad_Miser")
    uint32_t x10_62 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ae208
    *UI2StateDeclI_counter = x10_62 + 1
    data_14ae210 = x11_28
else
    (*data_14ae208)(&data_14ae208, *(x0_26 + 0x10))

data_14ae220 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("ad_Miser")
int128_t v0_5
int128_t v1_8
int128_t v2_5

if (x0_27 == 0)
    v0_5, v1_8, v2_5 = (*data_14ae220)(&data_14ae220, "ad_Miser")
    uint32_t x10_64 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ae220
    *UI2StateDeclI_counter = x10_64 + 1
    data_14ae228 = x11_29
else
    v0_5, v1_8, v2_5 = (*data_14ae220)(&data_14ae220, *(x0_27 + 0x10))

v0_5.q = 0x400000b0d
data_1125a48
data_1125a58
data_14ae238 = 0x400000b0d
__builtin_memset(&data_14ae8b8, 0, 0x20)
v0_5 = data_1125a28
v1_8 = data_1125a38
v2_5 = data_71cc50
data_14ae240 = 4
data_14ae248 = Miser
__builtin_memset(&data_14ae8d8, 0, 0x20)
data_14ae898 = v0_5
v0_5 = data_7acaa8
int128_t v4_1 = data_7acab8
data_14ae8a8 = v1_8
data_14ae8f8 = v2_5
v1_8 = data_7aca88
v2_5 = data_7aca98
data_14ae908 = 1
int128_t var_160 = v2_5
int128_t var_150 = v4_1
int128_t var_140 = v1_8
int128_t var_130 = v0_5
__builtin_memset(&data_14ae930, 0, 0x20)
data_14ae920 = v2_5
data_14ae910 = v1_8
data_14ae950 = "port"
data_14ae958 = 0x29
data_14ae960 = TEXTURE_CARD_GEN_ADVENTURES_PORT
data_14ae968 = SOUND_SOUND_CARDS_FX_LANDPLAY_PORT
data_14ae988 = _vtable_for_UI2StateDecl + 0x10
void* x0_28 = UI2StateDeclTryLookup("ad_Port")

if (x0_28 == 0)
    (*data_14ae988)(&data_14ae988, "ad_Port")
    uint32_t x10_66 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ae988
    *UI2StateDeclI_counter = x10_66 + 1
    data_14ae990 = x11_30
else
    (*data_14ae988)(&data_14ae988, *(x0_28 + 0x10))

data_14ae9a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("ad_Port")

if (x0_29 == 0)
    (*data_14ae9a0)(&data_14ae9a0, "ad_Port")
    uint32_t x10_68 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ae9a0
    *UI2StateDeclI_counter = x10_68 + 1
    data_14ae9a8 = x11_31
else
    (*data_14ae9a0)(&data_14ae9a0, *(x0_29 + 0x10))

int128_t v1_9
v1_9.d = 6
v1_9:4.d = 6
data_14ae9f0 = zx.o(0)
data_14ae9f0.q = Port_OnBuy
data_14ae9d8 = 0x600000006
v1_9.q = 0xc00000000
data_14ae9c0 = 4
data_14ae9c8 = Port
data_14ae9e0 = zx.o(0)
__builtin_memset(&data_14aea80, 0, 0x18)
__builtin_memset(&data_14aea00, 0, 0x88)
data_14ae9e0:4.d = 0
data_14aea90 = 1
data_14ae9b8 = 0x400000b0e
__builtin_memset(&data_14aea98, 0, 0xc0)
data_14aeaa8:8 = 0xc00000000
data_14aea98 = 0xb
data_14aeb28:8.d = 1
data_14aefd8 = 1
__builtin_memcpy(&data_14af078, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"30\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14af098 = 0xffffffff
data_14af0d0 = "ranger"
data_14af0d8 = 8
data_14af0e0 = TEXTURE_CARD_GEN_ADVENTURES_RANGER
data_14af108 = _vtable_for_UI2StateDecl + 0x10
data_14af0e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_RANGER
void* x0_30 = UI2StateDeclTryLookup("ad_Ranger")

if (x0_30 == 0)
    (*data_14af108)(&data_14af108, "ad_Ranger")
    uint32_t x10_71 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14af108
    *UI2StateDeclI_counter = x10_71 + 1
    data_14af110 = x11_32
else
    (*data_14af108)(&data_14af108, *(x0_30 + 0x10))

data_14af120 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("ad_Ranger")
int128_t v0_6
int128_t v2_6
int128_t v3_1
int128_t v4_2

if (x0_31 == 0)
    v0_6, v2_6, v3_1, v4_2 = (*data_14af120)(&data_14af120, "ad_Ranger")
    uint32_t x10_73 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14af120
    *UI2StateDeclI_counter = x10_73 + 1
    data_14af128 = x11_33
else
    v0_6, v2_6, v3_1, v4_2 = (*data_14af120)(&data_14af120, *(x0_31 + 0x10))

v0_6.q = 0
v0_6:8.q = 0
__builtin_memset(&data_14af158, 0, 0xc0)
v0_6 = data_1125a88
v2_6 = data_1125a98
v3_1 = data_1125aa8
v4_2 = data_1125ab8
data_14af138 = 0x400000b0f
data_14af7a8 = v2_6
data_14af798 = v0_6
data_14af140 = 4
data_14af148 = Ranger
data_14af7f8 = v2
__builtin_memset(&data_14af7d8, 0, 0x20)
data_14af7b8 = v3_1
data_14af158 = 1
data_14af168 = JourneyToken_Setup
data_14af7c8 = v4_2
data_14af808 = 0x10
data_14af850 = "transmogrify"
__builtin_memset(&data_14af830, 0, 0x20)
__builtin_memcpy(&data_14af810, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x20\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14af858 = 0x28
data_14af860 = TEXTURE_CARD_GEN_ADVENTURES_TRANSMOGRIFY
data_14af888 = _vtable_for_UI2StateDecl + 0x10
data_14af868 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRANSMOGRIFY
void* x0_32 = UI2StateDeclTryLookup("ad_Transmogrify")

if (x0_32 == 0)
    (*data_14af888)(&data_14af888, "ad_Transmogrify")
    uint32_t x10_76 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14af888
    *UI2StateDeclI_counter = x10_76 + 1
    data_14af890 = x11_34
else
    (*data_14af888)(&data_14af888, *(x0_32 + 0x10))

data_14af8a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("ad_Transmogrify")

if (x0_33 == 0)
    (*data_14af8a0)(&data_14af8a0, "ad_Transmogrify")
    uint32_t x10_78 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14af8a0
    *UI2StateDeclI_counter = x10_78 + 1
    data_14af8a8 = x11_35
else
    (*data_14af8a0)(&data_14af8a0, *(x0_33 + 0x10))

__builtin_memset(&data_14af8e0, 0, 0xb8)
data_14af98c = 0x100000001
data_14af8c0 = 0x204
data_14af8c8 = Transmogrify
data_14af8f0 = Transmogrify_Call
data_14afed8 = 1
data_14af8d8 = 0x500000006
data_14af8e0:4.d = 0
data_14af980 = 0
__builtin_memcpy(&data_14aff78, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"4b\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14af8b8 = 0x400000b10
data_14aff98 = 0xffffffff
data_14affd0 = "artificer"
data_14affd8 = 0x26
data_14affe0 = TEXTURE_CARD_GEN_ADVENTURES_ARTIFICER
data_14b0008 = _vtable_for_UI2StateDecl + 0x10
data_14affe8 = SOUND_SOUND_CARDS_FX_LANDPLAY_ARTIFICER
void* x0_34 = UI2StateDeclTryLookup("ad_Artificer")

if (x0_34 == 0)
    (*data_14b0008)(&data_14b0008, "ad_Artificer")
    uint32_t x10_81 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b0008
    *UI2StateDeclI_counter = x10_81 + 1
    data_14b0010 = x11_36
else
    (*data_14b0008)(&data_14b0008, *(x0_34 + 0x10))

data_14b0020 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("ad_Artificer")

if (x0_35 == 0)
    (*data_14b0020)(&data_14b0020, "ad_Artificer")
    uint32_t x10_83 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b0020
    *UI2StateDeclI_counter = x10_83 + 1
    data_14b0028 = x11_37
else
    (*data_14b0020)(&data_14b0020, *(x0_35 + 0x10))

data_14b0038 = 0x500000b11
data_14b0040 = 4
data_14b0048 = Artificer
__builtin_memcpy(&data_14b06f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x3c\x0b\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"20\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14b0718 = 0xffffffff
data_14b0750 = "bridge_troll"
data_14b0758 = 0x23
data_14b0760 = TEXTURE_CARD_GEN_ADVENTURES_BRIDGETROLL
data_14b0768 = SOUND_SOUND_CARDS_FX_LANDPLAY_BRIDGETROLL
data_14b0788 = _vtable_for_UI2StateDecl + 0x10
void* x0_36 = UI2StateDeclTryLookup("ad_Bridge_Troll")

if (x0_36 == 0)
    (*data_14b0788)(&data_14b0788, "ad_Bridge_Troll")
    uint32_t x10_85 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b0788
    *UI2StateDeclI_counter = x10_85 + 1
    data_14b0790 = x11_38
else
    (*data_14b0788)(&data_14b0788, *(x0_36 + 0x10))

data_14b07a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("ad_Bridge_Troll")

if (x0_37 == 0)
    (*data_14b07a0)(&data_14b07a0, "ad_Bridge_Troll")
    uint32_t x10_87 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b07a0
    *UI2StateDeclI_counter = x10_87 + 1
    data_14b07a8 = x11_39
else
    (*data_14b07a0)(&data_14b07a0, *(x0_37 + 0x10))

int128_t v0_7
v0_7.q = 0
v0_7:8.q = 0
__builtin_memset(&data_14b07d8, 0, 0x20)
data_14b07d8 = 7
__builtin_memset(&data_14b07f8, 0, 0xa0)
v0_7.q = 0x300000001
data_14b0878 = 0x300000001
data_14b07c0 = 0xa4
data_14b07c8 = BridgeTroll
data_14b07e8:8.d = 2
data_14b0888:8.d = 1
data_14b0dd8 = 1
__builtin_memcpy(&data_14b0e78, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14b07b8 = 0x500000b12
data_14b0e98 = 0xffffffff
data_14b0ed0 = "distant_lands"
data_14b0ed8 = 0x2d
data_14b0ee0 = TEXTURE_CARD_GEN_ADVENTURES_DISTANT_LANDS
data_14b0f08 = _vtable_for_UI2StateDecl + 0x10
data_14b0ee8 = SOUND_SOUND_CARDS_FX_LANDPLAY_DISTANT_LANDS
void* x0_38 = UI2StateDeclTryLookup("ad_Distant_Lands")

if (x0_38 == 0)
    (*data_14b0f08)(&data_14b0f08, "ad_Distant_Lands")
    uint32_t x10_90 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b0f08
    *UI2StateDeclI_counter = x10_90 + 1
    data_14b0f10 = x11_40
else
    (*data_14b0f08)(&data_14b0f08, *(x0_38 + 0x10))

data_14b0f20 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("ad_Distant_Lands")

if (x0_39 == 0)
    (*data_14b0f20)(&data_14b0f20, "ad_Distant_Lands")
    uint32_t x10_92 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b0f20
    *UI2StateDeclI_counter = x10_92 + 1
    data_14b0f28 = x11_41
else
    (*data_14b0f20)(&data_14b0f20, *(x0_39 + 0x10))

data_14b0f40 = 0x20c
data_14b0f48 = DistantLands
data_14b0f50 = DistantLands_VP
__builtin_memcpy(&data_14b15f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x20\x00\x00\x00\x00", 
    0x20)
data_14b0f38 = 0x500000b13
data_14b1618 = 0xffffffff
data_14b1650 = "giant"
data_14b1658 = 0x28
data_14b1660 = TEXTURE_CARD_GEN_ADVENTURES_GIANT
data_14b1688 = _vtable_for_UI2StateDecl + 0x10
data_14b1668 = SOUND_SOUND_CARDS_FX_LANDPLAY_GIANT
void* x0_40 = UI2StateDeclTryLookup("ad_Giant")

if (x0_40 == 0)
    (*data_14b1688)(&data_14b1688, "ad_Giant")
    uint32_t x10_95 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b1688
    *UI2StateDeclI_counter = x10_95 + 1
    data_14b1690 = x11_42
else
    (*data_14b1688)(&data_14b1688, *(x0_40 + 0x10))

data_14b16a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("ad_Giant")
int128_t v0_8
int128_t v1_12
int128_t v2_7
int128_t v3_2
int128_t v4_3

if (x0_41 == 0)
    v0_8, v1_12, v2_7, v3_2, v4_3 = (*data_14b16a0)(&data_14b16a0, "ad_Giant")
    uint32_t x10_97 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b16a0
    *UI2StateDeclI_counter = x10_97 + 1
    data_14b16a8 = x11_43
else
    v0_8, v1_12, v2_7, v3_2, v4_3 = (*data_14b16a0)(&data_14b16a0, *(x0_41 + 0x10))

v0_8.q = 0
v0_8:8.q = 0
v1_12.q = 0x500000b14
__builtin_memset(&data_14b16d8, 0, 0xc0)
v0_8 = data_1125ae8
v2_7 = data_1125af8
data_14b16b8 = 0x500000b14
v3_2 = data_1125b08
v4_3 = data_1125b18
data_14b1d28 = v2_7
data_1125b28
data_1125b38
data_14b1d18 = v0_8
v0_8 = data_71a690
data_14b16c0 = 0x24
data_14b16c8 = Giant
data_14b16d8 = 1
__builtin_memset(&data_14b1d58, 0, 0x20)
v1_12 = data_7acae8
v2_7 = data_7acaf8
data_14b1d38 = v3_2
data_14b1d78 = v0_8
v0_8 = data_7acac8
v3_2 = data_7acad8
data_14b16e8 = JourneyToken_Setup
data_14b1d48 = v4_3
data_14b1d88 = 8
data_14b1dc0 = v2_7
data_14b1db0 = v1_12
int128_t var_1c0
__builtin_memcpy(&var_1c0, 
    "\x00\x02\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
data_14b1da0 = v3_2
data_14b1d90 = v0_8
data_14b1dd0 = "haunted_woods"
data_14b1dd8 = 0x23
data_14b1de0 = TEXTURE_CARD_GEN_ADVENTURES_HAUNTEDWOODS
data_14b1de8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HAUNTEDWOODS
data_14b1e08 = _vtable_for_UI2StateDecl + 0x10
void* x0_42 = UI2StateDeclTryLookup("ad_Haunted_Woods")

if (x0_42 == 0)
    (*data_14b1e08)(&data_14b1e08, "ad_Haunted_Woods")
    uint32_t x10_99 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b1e08
    *UI2StateDeclI_counter = x10_99 + 1
    data_14b1e10 = x11_44
else
    (*data_14b1e08)(&data_14b1e08, *(x0_42 + 0x10))

data_14b1e20 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("ad_Haunted_Woods")
int128_t v0_9
int128_t v1_13

if (x0_43 == 0)
    v0_9, v1_13 = (*data_14b1e20)(&data_14b1e20, "ad_Haunted_Woods")
    uint32_t x10_101 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b1e20
    *UI2StateDeclI_counter = x10_101 + 1
    data_14b1e28 = x11_45
else
    v0_9, v1_13 = (*data_14b1e20)(&data_14b1e20, *(x0_43 + 0x10))

data_14b1e40 = 0xa4
data_14b1e48 = HauntedWoods
data_14b24f8 = v2
v0_9 = data_7ac908
v1_13 = data_7ac918
data_14b2458 = 1
data_14b2508 = 3
data_14b1e38 = 0x500000b15
data_14b2510 = v0_9
data_14b2550 = "lost_city"
data_14b2520 = v1_13
__builtin_memset(&data_14b2530, 0, 0x20)
data_14b2558 = 0x1d
data_14b2560 = TEXTURE_CARD_GEN_ADVENTURES_LOSTCITY
data_14b2588 = _vtable_for_UI2StateDecl + 0x10
data_14b2568 = SOUND_SOUND_CARDS_FX_LANDPLAY_LOSTCITY
void* x0_44 = UI2StateDeclTryLookup("ad_Lost_City")

if (x0_44 == 0)
    (*data_14b2588)(&data_14b2588, "ad_Lost_City")
    uint32_t x10_104 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b2588
    *UI2StateDeclI_counter = x10_104 + 1
    data_14b2590 = x11_46
else
    (*data_14b2588)(&data_14b2588, *(x0_44 + 0x10))

data_14b25a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("ad_Lost_City")

if (x0_45 == 0)
    (*data_14b25a0)(&data_14b25a0, "ad_Lost_City")
    uint32_t x10_106 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b25a0
    *UI2StateDeclI_counter = x10_106 + 1
    data_14b25a8 = x11_47
else
    (*data_14b25a0)(&data_14b25a0, *(x0_45 + 0x10))

int128_t v0_10
v0_10.q = 0
v0_10:8.q = 0
__builtin_memset(&data_14b25e0, 0, 0xb0)
v0_10.d = 6
v0_10:4.d = 6
data_14b25d8 = 0x600000006
data_14b25c0 = 4
data_14b25c8 = LostCity
v0_10.q = 0x500000b16
data_14b25f0 = LostCity_OnGain
data_14b25b8 = 0x500000b16
data_14b268c:4 = 0
data_14b2680 = LostCity_OnGain_Test
data_14b25e0:4.d = 1
data_14b2bd8 = 1
__builtin_memcpy(&data_14b2c78, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14b268c = 0x100000000
data_14b2c98 = 0xffffffff
data_14b2cd0 = "relic"
data_14b2cd8 = 0x37
data_14b2ce0 = TEXTURE_CARD_GEN_ADVENTURES_RELIC
data_14b2d08 = _vtable_for_UI2StateDecl + 0x10
data_14b2ce8 = SOUND_SOUND_CARDS_FX_LANDPLAY_RELIC
void* x0_46 = UI2StateDeclTryLookup("ad_Relic")

if (x0_46 == 0)
    (*data_14b2d08)(&data_14b2d08, "ad_Relic")
    uint32_t x10_109 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b2d08
    *UI2StateDeclI_counter = x10_109 + 1
    data_14b2d10 = x11_48
else
    (*data_14b2d08)(&data_14b2d08, *(x0_46 + 0x10))

data_14b2d20 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("ad_Relic")
int128_t v0_11
int128_t v2_8
int128_t v1_14

if (x0_47 == 0)
    v0_11, v1_14, v2_8 = (*data_14b2d20)(&data_14b2d20, "ad_Relic")
    uint32_t x10_111 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b2d20
    *UI2StateDeclI_counter = x10_111 + 1
    data_14b2d28 = x11_49
else
    v0_11, v1_14, v2_8 = (*data_14b2d20)(&data_14b2d20, *(x0_47 + 0x10))
v0_11.q = 0x500000b17
data_14b2d40 = 0x22
data_14b2d48 = Relic
data_14b33f8 = v2
data_14b2d38 = 0x500000b17
v0_11 = data_7ac948
v2_8 = data_7ac958
data_14b3408 = 0xc
data_14b3410 = v0_11
data_14b3450 = "royal_carriage"
data_14b3420 = v2_8
__builtin_memset(&data_14b3430, 0, 0x20)
data_14b3458 = 0x1e
data_14b3460 = TEXTURE_CARD_GEN_ADVENTURES_ROYALCARRIAGE
data_14b3488 = _vtable_for_UI2StateDecl + 0x10
data_14b3468 = SOUND_SOUND_CARDS_FX_LANDPLAY_ROYAL_CARRIAGE
void* x0_48 = UI2StateDeclTryLookup("ad_Royal_Carriage")

if (x0_48 == 0)
    (*data_14b3488)(&data_14b3488, "ad_Royal_Carriage")
    uint32_t x10_114 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b3488
    *UI2StateDeclI_counter = x10_114 + 1
    data_14b3490 = x11_50
else
    (*data_14b3488)(&data_14b3488, *(x0_48 + 0x10))

data_14b34a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("ad_Royal_Carriage")

if (x0_49 == 0)
    (*data_14b34a0)(&data_14b34a0, "ad_Royal_Carriage")
    uint32_t x10_116 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b34a0
    *UI2StateDeclI_counter = x10_116 + 1
    data_14b34a8 = x11_51
else
    (*data_14b34a0)(&data_14b34a0, *(x0_49 + 0x10))

__builtin_memset(&data_14b34e0, 0, 0xb8)
data_14b358c = 0x100000001
data_14b34c0 = 0x204
data_14b34c8 = RoyalCarriage
data_14b34f0 = RoyalCarriage_OnPlay
data_14b34e0:4.d = 1
data_14b3ad8 = 1
data_14b3580 = RoyalCarriage_Test
data_14b34d8 = 0x500000006
__builtin_memcpy(&data_14b3b78, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"12\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_14b34b8 = 0x500000b18
data_14b3b98 = 0xffffffff
data_14b3bd0 = "storyteller"
data_14b3bd8 = 8
data_14b3be0 = TEXTURE_CARD_GEN_ADVENTURES_STORYTELLER
data_14b3c08 = _vtable_for_UI2StateDecl + 0x10
data_14b3be8 = SOUND_SOUND_CARDS_FX_LANDPLAY_STORYTELLER
void* x0_50 = UI2StateDeclTryLookup("ad22_Storyteller")

if (x0_50 == 0)
    (*data_14b3c08)(&data_14b3c08, "ad22_Storyteller")
    uint32_t x10_119 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b3c08
    *UI2StateDeclI_counter = x10_119 + 1
    data_14b3c10 = x11_52
else
    (*data_14b3c08)(&data_14b3c08, *(x0_50 + 0x10))

data_14b3c20 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("ad_Storyteller")
int128_t v0_12
int128_t v1_16
int128_t v2_9

if (x0_51 == 0)
    v0_12, v1_16, v2_9 = (*data_14b3c20)(&data_14b3c20, "ad_Storyteller")
    uint32_t x10_121 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b3c20
    *UI2StateDeclI_counter = x10_121 + 1
    data_14b3c28 = x11_53
else
    v0_12, v1_16, v2_9 = (*data_14b3c20)(&data_14b3c20, *(x0_51 + 0x10))

v0_12.q = 0x500000b19
v1_16 = data_71c950
data_14b3c38 = 0x500000b19
v0_12 = data_7ac988
v2_9 = data_7ac998
data_14b3c40 = 4
data_14b3c48 = Storyteller
data_14b4308 = 6
data_14b42f8 = v1_16
data_14b4310 = v0_12
v1_16 = data_7ac9a8
v0_12 = data_7ac9b8
data_14b4320 = v2_9
data_14b4330 = v1_16
data_14b4340 = v0_12
data_14b4350 = "swamp_hag"
data_14b4358 = 0x1b
data_14b4360 = TEXTURE_CARD_GEN_ADVENTURES_SWAMP_HAG
data_14b4368 = SOUND_SOUND_CARDS_FX_LANDPLAY_SWAMP_HAG
data_14b4388 = _vtable_for_UI2StateDecl + 0x10
void* x0_52 = UI2StateDeclTryLookup("ad_Swamp_Hag")

if (x0_52 == 0)
    (*data_14b4388)(&data_14b4388, "ad_Swamp_Hag")
    uint32_t x10_123 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b4388
    *UI2StateDeclI_counter = x10_123 + 1
    data_14b4390 = x11_54
else
    (*data_14b4388)(&data_14b4388, *(x0_52 + 0x10))

data_14b43a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("ad_Swamp_Hag")

if (x0_53 == 0)
    (*data_14b43a0)(&data_14b43a0, "ad_Swamp_Hag")
    uint32_t x10_125 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b43a0
    *UI2StateDeclI_counter = x10_125 + 1
    data_14b43a8 = x11_55
else
    (*data_14b43a0)(&data_14b43a0, *(x0_53 + 0x10))

__builtin_memset(&data_14b4a38, 0, 0x40)
data_1125b88
data_1125b98
int128_t v1_17 = data_1125b58
data_14b4a18 = data_1125b48
data_14b4a88 = 9
data_14b43b8 = 0x500000b1a
data_14b43c0 = 0xa4
data_14b43c8 = SwampHag
data_14b49d8 = 1
data_14b4a78 = v2
data_14b4a28 = v1_17
data_14b4a90 = 0x10001
data_14b4a98 = 0xffffffff
data_14b4ad0 = "treasure_trove"
data_14b4ad8 = 0x28
data_14b4ae0 = TEXTURE_CARD_GEN_ADVENTURES_TREASURE_TROVE
data_14b4b08 = _vtable_for_UI2StateDecl + 0x10
data_14b4ae8 = SOUND_SOUND_CARDS_FX_LANDPLAY_TREASURE_TROVE
void* x0_54 = UI2StateDeclTryLookup("ad_Treasure_Trove")

if (x0_54 == 0)
    (*data_14b4b08)(&data_14b4b08, "ad_Treasure_Trove")
    uint32_t x10_128 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b4b08
    *UI2StateDeclI_counter = x10_128 + 1
    data_14b4b10 = x11_56
else
    (*data_14b4b08)(&data_14b4b08, *(x0_54 + 0x10))

data_14b4b20 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("ad_Treasure_Trove")
int128_t v1_18
int128_t v2_10

if (x0_55 == 0)
    v1_18, v2_10 = (*data_14b4b20)(&data_14b4b20, "ad_Treasure_Trove")
    uint32_t x10_130 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b4b20
    *UI2StateDeclI_counter = x10_130 + 1
    data_14b4b28 = x11_57
else
    v1_18, v2_10 = (*data_14b4b20)(&data_14b4b20, *(x0_55 + 0x10))

data_14b4b40 = 2
data_14b4b48 = TreasureTrove
data_14b51f8 = v2
v1_18 = data_7ac9c8
v2_10 = data_7ac9d8
data_14b4b38 = 0x500000b1b
data_14b5208 = 0xd
data_14b5210 = v1_18
data_14b5250 = "wine_merchant"
data_14b5220 = v2_10
__builtin_memset(&data_14b5230, 0, 0x20)
data_14b5258 = 0xe
data_14b5260 = TEXTURE_CARD_GEN_ADVENTURES_WINEMERCHANT
data_14b5288 = _vtable_for_UI2StateDecl + 0x10
data_14b5268 = SOUND_SOUND_CARDS_FX_LANDPLAY_WINEMERCHANT
void* x0_56 = UI2StateDeclTryLookup("ad_Wine_Merchant")

if (x0_56 == 0)
    (*data_14b5288)(&data_14b5288, "ad_Wine_Merchant")
    uint32_t x10_133 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b5288
    *UI2StateDeclI_counter = x10_133 + 1
    data_14b5290 = x11_58
else
    (*data_14b5288)(&data_14b5288, *(x0_56 + 0x10))

data_14b52a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("ad_Wine_Merchant")

if (x0_57 == 0)
    (*data_14b52a0)(&data_14b52a0, "ad_Wine_Merchant")
    uint32_t x10_135 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b52a0
    *UI2StateDeclI_counter = x10_135 + 1
    data_14b52a8 = x11_59
else
    (*data_14b52a0)(&data_14b52a0, *(x0_57 + 0x10))

data_14b52c0 = 0x204
data_14b52c8 = WineMerchant
data_14b52f0 = zx.o(0)
data_14b52f0.q = WineMerchantSpendCoffers_Call
data_14b5380 = zx.o(0)
data_14b5380.q = WineMerchantSpendCoffers_Call_Test
data_14b52e0 = zx.o(0)
data_14b5390 = 0
__builtin_memset(&data_14b5300, 0, 0x80)
data_14b52d8 = 0x500000006
data_14b52e0:4.d = 3
data_14b52b8 = 0x500000b1c
data_14b5380:0xc = 0x1c00000003
__builtin_memset(&data_14b53a0, 0, 0xb8)
data_14b5398 = 0x500000006
data_14b53a0:4.d = 3
data_14b53b0 = WineMerchant_Call
data_14b5440 = WineMerchant_Call_Test
data_14b544c = 0x1b00000003
__builtin_memset(&data_14b58f8, 0, 0x20)
__builtin_memcpy(&data_14b58d8, 
    "\x1b\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1c\x00\x00\x00\x00\x00\x00\x00\x"
"09\xfc\x79\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_14b5978, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14b59d0 = "hireling"
__builtin_memset(&data_14b59b0, 0, 0x20)
__builtin_memcpy(&data_14b5990, 
    "\x10\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14b59d8 = 8
data_14b59e0 = TEXTURE_CARD_GEN_ADVENTURES_HIRELING
data_14b5a08 = _vtable_for_UI2StateDecl + 0x10
data_14b59e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HIRELING
void* x0_58 = UI2StateDeclTryLookup("ad22_Hireling")

if (x0_58 == 0)
    (*data_14b5a08)(&data_14b5a08, "ad22_Hireling")
    uint32_t x10_137 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b5a08
    *UI2StateDeclI_counter = x10_137 + 1
    data_14b5a10 = x11_60
else
    (*data_14b5a08)(&data_14b5a08, *(x0_58 + 0x10))

data_14b5a20 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("ad_Hireling")

if (x0_59 == 0)
    (*data_14b5a20)(&data_14b5a20, "ad_Hireling")
    uint32_t x10_139 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b5a20
    *UI2StateDeclI_counter = x10_139 + 1
    data_14b5a28 = x11_61
else
    (*data_14b5a20)(&data_14b5a20, *(x0_59 + 0x10))

int128_t v0_14
v0_14.q = 0x600000b1d
data_14b5a40 = 0x84
data_14b5a48 = Hireling
data_14b5a38 = 0x600000b1d
data_14b6058 = 1
__builtin_memcpy(&data_14b60f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14b6150 = "alms"
data_14b6158 = 0x2d
data_14b6160 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_1
data_14b6188 = _vtable_for_UI2StateDecl + 0x10
data_14b6168 = SOUND_SOUND_CARDS_FX_BUY_EVENT_ALMS
void* x0_60 = UI2StateDeclTryLookup("ad_Alms")

if (x0_60 == 0)
    (*data_14b6188)(&data_14b6188, "ad_Alms")
    uint32_t x10_142 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b6188
    *UI2StateDeclI_counter = x10_142 + 1
    data_14b6190 = x11_62
else
    (*data_14b6188)(&data_14b6188, *(x0_60 + 0x10))

data_14b61a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("ad_Alms")
int128_t v0_15
int128_t v2_11

if (x0_61 == 0)
    v0_15, v2_11 = (*data_14b61a0)(&data_14b61a0, "ad_Alms")
    uint32_t x10_144 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b61a0
    *UI2StateDeclI_counter = x10_144 + 1
    data_14b61a8 = x11_63
else
    v0_15, v2_11 = (*data_14b61a0)(&data_14b61a0, *(x0_61 + 0x10))
data_1125c08
data_14b6888 = 0xa
data_14b61b8 = 0xb1e
__builtin_memset(&data_14b6838, 0, 0x20)
data_1125c28
data_1125c38
data_14b61c0 = 0x400
data_14b61c8 = Alms
__builtin_memset(&data_14b6858, 0, 0x20)
v0_15 = data_1125be8
int128_t v1_19 = data_1125bf8
data_14b6878 = v2
data_14b6818 = v0_15
data_14b6828 = v1_19
data_14b6890 = 0x100000000
data_14b68d0 = "borrow"
data_14b68d8 = 0x26
data_14b68e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_10
data_14b6908 = _vtable_for_UI2StateDecl + 0x10
data_14b68e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_BORROW
void* x0_62 = UI2StateDeclTryLookup("ad_Borrow")

if (x0_62 == 0)
    (*data_14b6908)(&data_14b6908, "ad_Borrow")
    uint32_t x10_147 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b6908
    *UI2StateDeclI_counter = x10_147 + 1
    data_14b6910 = x11_64
else
    (*data_14b6908)(&data_14b6908, *(x0_62 + 0x10))

data_14b6920 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("ad_Borrow")

if (x0_63 == 0)
    (*data_14b6920)(&data_14b6920, "ad_Borrow")
    uint32_t x10_149 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b6920
    *UI2StateDeclI_counter = x10_149 + 1
    data_14b6928 = x11_65
else
    (*data_14b6920)(&data_14b6920, *(x0_63 + 0x10))

data_14b6938 = 0xb1f
data_14b6940 = 0x400
data_14b6948 = Borrow
__builtin_memcpy(&data_14b6ff8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14b7050 = "quest"
data_14b7058 = 0x1a
data_14b7060 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_33
data_14b7088 = _vtable_for_UI2StateDecl + 0x10
data_14b7068 = SOUND_SOUND_CARDS_FX_BUY_EVENT_QUEST
void* x0_64 = UI2StateDeclTryLookup("ad_Quest")

if (x0_64 == 0)
    (*data_14b7088)(&data_14b7088, "ad_Quest")
    uint32_t x10_152 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b7088
    *UI2StateDeclI_counter = x10_152 + 1
    data_14b7090 = x11_66
else
    (*data_14b7088)(&data_14b7088, *(x0_64 + 0x10))

data_14b70a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("ad_Quest")

if (x0_65 == 0)
    (*data_14b70a0)(&data_14b70a0, "ad_Quest")
    uint32_t x10_154 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b70a0
    *UI2StateDeclI_counter = x10_154 + 1
    data_14b70a8 = x11_67
else
    (*data_14b70a0)(&data_14b70a0, *(x0_65 + 0x10))

data_1125c78
data_1125c58
data_14b7718 = data_1125c48
data_14b70b8 = 0xb20
__builtin_memset(&data_14b7728, 0, 0x50)
data_14b70c0 = 0x400
data_14b70c8 = Quest
__builtin_memcpy(&data_14b7778, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14b77d0 = "save"
data_14b77d8 = 0x1b
data_14b77e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_37
data_14b7808 = _vtable_for_UI2StateDecl + 0x10
data_14b77e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_SAVE
void* x0_66 = UI2StateDeclTryLookup("ad_Save")

if (x0_66 == 0)
    (*data_14b7808)(&data_14b7808, "ad_Save")
    uint32_t x10_157 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b7808
    *UI2StateDeclI_counter = x10_157 + 1
    data_14b7810 = x11_68
else
    (*data_14b7808)(&data_14b7808, *(x0_66 + 0x10))

data_14b7820 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("ad_Save")
int128_t v0_18
int128_t v2_12

if (x0_67 == 0)
    v0_18, v2_12 = (*data_14b7820)(&data_14b7820, "ad_Save")
    uint32_t x10_159 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b7820
    *UI2StateDeclI_counter = x10_159 + 1
    data_14b7828 = x11_69
else
    v0_18, v2_12 = (*data_14b7820)(&data_14b7820, *(x0_67 + 0x10))
v0_18.q = 0x100000b21
data_1125cd8
data_14b7838 = 0x100000b21
__builtin_memset(&data_14b7eb8, 0, 0x40)
data_1125ce8
data_1125cf8
v0_18 = data_1125cb8
data_14b7e98 = data_1125ca8
data_14b7e58 = 1
data_14b7f08 = 0x15
data_14b7840 = 0x400
data_14b7848 = Save
data_14b7ef8 = v2
data_14b7ea8 = v0_18
data_14b7f10 = 0x100000000
data_14b7f50 = "scouting_party"
data_14b7f58 = 0x1c
data_14b7f60 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_39
data_14b7f88 = _vtable_for_UI2StateDecl + 0x10
data_14b7f68 = SOUND_SOUND_CARDS_FX_BUY_EVENT_SCOUTING_PARTY
void* x0_68 = UI2StateDeclTryLookup("ad_Scouting_Party")

if (x0_68 == 0)
    (*data_14b7f88)(&data_14b7f88, "ad_Scouting_Party")
    uint32_t x10_162 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b7f88
    *UI2StateDeclI_counter = x10_162 + 1
    data_14b7f90 = x11_70
else
    (*data_14b7f88)(&data_14b7f88, *(x0_68 + 0x10))

data_14b7fa0 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("ad_Scouting_Party")

if (x0_69 == 0)
    (*data_14b7fa0)(&data_14b7fa0, "ad_Scouting_Party")
    uint32_t x10_164 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b7fa0
    *UI2StateDeclI_counter = x10_164 + 1
    data_14b7fa8 = x11_71
else
    (*data_14b7fa0)(&data_14b7fa0, *(x0_69 + 0x10))

data_1125d38
data_14b7fb8 = 0x200000b22
data_1125d18
data_14b8618 = data_1125d08
__builtin_memset(&data_14b8628, 0, 0x50)
data_14b7fc0 = 0x400
data_14b7fc8 = ScoutingParty
__builtin_memcpy(&data_14b8678, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"20\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14b8698 = 0xffffffff
data_14b86d0 = "travelling_fair"
data_14b86d8 = 0x1d
data_14b86e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_50
data_14b8708 = _vtable_for_UI2StateDecl + 0x10
data_14b86e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_TRAVELLING_FAIR
void* x0_70 = UI2StateDeclTryLookup("ad_Travelling_Fair")

if (x0_70 == 0)
    (*data_14b8708)(&data_14b8708, "ad_Travelling_Fair")
    uint32_t x10_167 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b8708
    *UI2StateDeclI_counter = x10_167 + 1
    data_14b8710 = x11_72
else
    (*data_14b8708)(&data_14b8708, *(x0_70 + 0x10))

data_14b8720 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("ad_Travelling_Fair")

if (x0_71 == 0)
    (*data_14b8720)(&data_14b8720, "ad_Travelling_Fair")
    uint32_t x10_169 = *UI2StateDeclI_counter
    uint64_t x11_73 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b8720
    *UI2StateDeclI_counter = x10_169 + 1
    data_14b8728 = x11_73
else
    (*data_14b8720)(&data_14b8720, *(x0_71 + 0x10))

data_14b8738 = 0x200000b23
data_14b8740 = 0x400
data_14b8748 = TravellingFair
data_14b8d58 = 1
__builtin_memcpy(&data_14b8df8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x3f\x0b\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14b8e18 = 0xffffffff
data_14b8e50 = "bonfire"
data_14b8e58 = 6
data_14b8e60 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_8
data_14b8e68 = SOUND_SOUND_CARDS_FX_BUY_EVENT_BONFIRE
data_14b8e88 = _vtable_for_UI2StateDecl + 0x10
void* x0_72 = UI2StateDeclTryLookup("ad_Bonfire")

if (x0_72 == 0)
    (*data_14b8e88)(&data_14b8e88, "ad_Bonfire")
    uint32_t x10_171 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b8e88
    *UI2StateDeclI_counter = x10_171 + 1
    data_14b8e90 = x11_74
else
    (*data_14b8e88)(&data_14b8e88, *(x0_72 + 0x10))

data_14b8ea0 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("ad_Bonfire")

if (x0_73 == 0)
    (*data_14b8ea0)(&data_14b8ea0, "ad_Bonfire")
    uint32_t x10_173 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b8ea0
    *UI2StateDeclI_counter = x10_173 + 1
    data_14b8ea8 = x11_75
else
    (*data_14b8ea0)(&data_14b8ea0, *(x0_73 + 0x10))

data_14b8ec0 = 0x400
data_14b8ec8 = Bonfire
__builtin_memcpy(&data_14b9578, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14b8eb8 = 0x300000b24
data_14b95d0 = "expedition"
data_14b95d8 = 0x1c
data_14b95e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_13
data_14b9608 = _vtable_for_UI2StateDecl + 0x10
data_14b95e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_EXPEDITION
void* x0_74 = UI2StateDeclTryLookup("ad_Expedition")

if (x0_74 == 0)
    (*data_14b9608)(&data_14b9608, "ad_Expedition")
    uint32_t x10_176 = *UI2StateDeclI_counter
    uint64_t x11_76 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b9608
    *UI2StateDeclI_counter = x10_176 + 1
    data_14b9610 = x11_76
else
    (*data_14b9608)(&data_14b9608, *(x0_74 + 0x10))

data_14b9620 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("ad_Expedition")

if (x0_75 == 0)
    (*data_14b9620)(&data_14b9620, "ad_Expedition")
    uint32_t x10_178 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b9620
    *UI2StateDeclI_counter = x10_178 + 1
    data_14b9628 = x11_77
else
    (*data_14b9620)(&data_14b9620, *(x0_75 + 0x10))

data_14b9640 = 0x400
data_14b9648 = Expedition
data_14b9c58 = 1
__builtin_memcpy(&data_14b9cf8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14b9638 = 0x300000b25
data_14b9d50 = "ferry"
data_14b9d58 = 0x29
data_14b9d60 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_15
data_14b9d68 = SOUND_SOUND_CARDS_FX_BUY_EVENT_FERRY
data_14b9d70 = SOUND_SOUND_CARDS_FX_BUY_CARD_FROM_TRASHING_TOKEN_PILE
data_14b9d88 = _vtable_for_UI2StateDecl + 0x10
void* x0_76 = UI2StateDeclTryLookup("ad_Ferry")

if (x0_76 == 0)
    (*data_14b9d88)(&data_14b9d88, "ad_Ferry")
    uint32_t x10_180 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b9d88
    *UI2StateDeclI_counter = x10_180 + 1
    data_14b9d90 = x11_78
else
    (*data_14b9d88)(&data_14b9d88, *(x0_76 + 0x10))

data_14b9da0 = _vtable_for_UI2StateDecl + 0x10
void* x0_77 = UI2StateDeclTryLookup("ad_Ferry")

if (x0_77 == 0)
    (*data_14b9da0)(&data_14b9da0, "ad_Ferry")
    uint32_t x10_182 = *UI2StateDeclI_counter
    uint64_t x11_79 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14b9da0
    *UI2StateDeclI_counter = x10_182 + 1
    data_14b9da8 = x11_79
else
    (*data_14b9da0)(&data_14b9da0, *(x0_77 + 0x10))

data_14b9db8 = 0x300000b26
data_14b9dc0 = 0x400
data_14b9dc8 = Ferry
__builtin_memcpy(&data_14ba478, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x40\x0b\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14ba4d0 = "plan"
data_14ba4d8 = 0x1b
data_14ba4e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_31
data_14ba4e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_PLAN
data_14ba508 = _vtable_for_UI2StateDecl + 0x10
void* x0_78 = UI2StateDeclTryLookup("ad_Plan")

if (x0_78 == 0)
    (*data_14ba508)(&data_14ba508, "ad_Plan")
    uint32_t x10_184 = *UI2StateDeclI_counter
    uint64_t x11_80 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ba508
    *UI2StateDeclI_counter = x10_184 + 1
    data_14ba510 = x11_80
else
    (*data_14ba508)(&data_14ba508, *(x0_78 + 0x10))

data_14ba520 = _vtable_for_UI2StateDecl + 0x10
void* x0_79 = UI2StateDeclTryLookup("ad_Plan")

if (x0_79 == 0)
    (*data_14ba520)(&data_14ba520, "ad_Plan")
    uint32_t x10_186 = *UI2StateDeclI_counter
    uint64_t x11_81 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ba520
    *UI2StateDeclI_counter = x10_186 + 1
    data_14ba528 = x11_81
else
    (*data_14ba520)(&data_14ba520, *(x0_79 + 0x10))

data_14ba540 = 0x400
data_14ba548 = Plan
data_14bab58 = 1
__builtin_memcpy(&data_14babf8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14ba538 = 0x300000b27
data_14bac50 = "mission"
data_14bac58 = 0x2a
data_14bac60 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_25
data_14bac88 = _vtable_for_UI2StateDecl + 0x10
data_14bac68 = SOUND_SOUND_CARDS_FX_BUY_EVENT_MISSION
void* x0_80 = UI2StateDeclTryLookup("ad22_Mission")

if (x0_80 == 0)
    (*data_14bac88)(&data_14bac88, "ad22_Mission")
    uint32_t x10_189 = *UI2StateDeclI_counter
    uint64_t x11_82 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bac88
    *UI2StateDeclI_counter = x10_189 + 1
    data_14bac90 = x11_82
else
    (*data_14bac88)(&data_14bac88, *(x0_80 + 0x10))

data_14baca0 = _vtable_for_UI2StateDecl + 0x10
void* x0_81 = UI2StateDeclTryLookup("ad_Mission")

if (x0_81 == 0)
    (*data_14baca0)(&data_14baca0, "ad_Mission")
    uint32_t x10_191 = *UI2StateDeclI_counter
    uint64_t x11_83 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14baca0
    *UI2StateDeclI_counter = x10_191 + 1
    data_14baca8 = x11_83
else
    (*data_14baca0)(&data_14baca0, *(x0_81 + 0x10))

data_1125d98
data_14bacb8 = 0x400000b28
data_14bb318 = data_1125d68
__builtin_memset(&data_14bb328, 0, 0x50)
data_14bacc0 = 0x400
data_14bacc8 = Mission
__builtin_memcpy(&data_14bb378, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14bb3d0 = "pilgrimage"
data_14bb390 = 0x100000000
data_14bb3d8 = 0x10
data_14bb3e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_29
data_14bb408 = _vtable_for_UI2StateDecl + 0x10
data_14bb3e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_PILGRIMAGE
void* x0_82 = UI2StateDeclTryLookup("ad_Pilgrimage")

if (x0_82 == 0)
    (*data_14bb408)(&data_14bb408, "ad_Pilgrimage")
    uint32_t x10_194 = *UI2StateDeclI_counter
    uint64_t x11_84 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bb408
    *UI2StateDeclI_counter = x10_194 + 1
    data_14bb410 = x11_84
else
    (*data_14bb408)(&data_14bb408, *(x0_82 + 0x10))

data_14bb420 = _vtable_for_UI2StateDecl + 0x10
void* x0_83 = UI2StateDeclTryLookup("ad_Pilgrimage")
int128_t v1_24
int128_t v2_15
int128_t v4_5

if (x0_83 == 0)
    v1_24, v2_15, v4_5 = (*data_14bb420)(&data_14bb420, "ad_Pilgrimage")
    uint32_t x10_196 = *UI2StateDeclI_counter
    uint64_t x11_85 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bb420
    *UI2StateDeclI_counter = x10_196 + 1
    data_14bb428 = x11_85
else
    v1_24, v2_15, v4_5 = (*data_14bb420)(&data_14bb420, *(x0_83 + 0x10))
v1_24.q = 0
v1_24:8.q = 0
data_14bb440 = 0x400
data_14bb448 = Pilgrimage
__builtin_memset(&data_14bb458, 0, 0x20)
data_14bb458 = 1
__builtin_memset(&data_14bb478, 0, 0xa0)
v1_24 = data_1125dc8
v2_15 = data_1125dd8
data_14bb438 = 0x400000b29
data_14bbaa8 = v2_15
data_14bba98 = v1_24
data_14bb468 = JourneyToken_Setup
__builtin_memcpy(&data_14bbaf8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
__builtin_memset(&data_14bbab8, 0, 0x40)
data_14bbb50 = "ball"
data_14bbb58 = 6
data_14bbb60 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_4
data_14bbb88 = _vtable_for_UI2StateDecl + 0x10
data_14bbb68 = SOUND_SOUND_CARDS_FX_BUY_EVENT_BALL
void* x0_84 = UI2StateDeclTryLookup("ad_Ball")

if (x0_84 == 0)
    (*data_14bbb88)(&data_14bbb88, "ad_Ball")
    uint32_t x10_199 = *UI2StateDeclI_counter
    uint64_t x11_86 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bbb88
    *UI2StateDeclI_counter = x10_199 + 1
    data_14bbb90 = x11_86
else
    (*data_14bbb88)(&data_14bbb88, *(x0_84 + 0x10))

data_14bbba0 = _vtable_for_UI2StateDecl + 0x10
void* x0_85 = UI2StateDeclTryLookup("ad_Ball")

if (x0_85 == 0)
    (*data_14bbba0)(&data_14bbba0, "ad_Ball")
    uint32_t x10_201 = *UI2StateDeclI_counter
    uint64_t x11_87 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bbba0
    *UI2StateDeclI_counter = x10_201 + 1
    data_14bbba8 = x11_87
else
    (*data_14bbba0)(&data_14bbba0, *(x0_85 + 0x10))

data_14bbbc0 = 0x400
data_14bbbc8 = Ball
__builtin_memcpy(&data_14bc278, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14bbbb8 = 0x500000b2a
data_14bc2d0 = "raid"
data_14bc2d8 = 0x1a
data_14bc2e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_35
data_14bc308 = _vtable_for_UI2StateDecl + 0x10
data_14bc2e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_RAID
void* x0_86 = UI2StateDeclTryLookup("ad_Raid")

if (x0_86 == 0)
    (*data_14bc308)(&data_14bc308, "ad_Raid")
    uint32_t x10_204 = *UI2StateDeclI_counter
    uint64_t x11_88 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bc308
    *UI2StateDeclI_counter = x10_204 + 1
    data_14bc310 = x11_88
else
    (*data_14bc308)(&data_14bc308, *(x0_86 + 0x10))

data_14bc320 = _vtable_for_UI2StateDecl + 0x10
void* x0_87 = UI2StateDeclTryLookup("ad_Raid")

if (x0_87 == 0)
    (*data_14bc320)(&data_14bc320, "ad_Raid")
    uint32_t x10_206 = *UI2StateDeclI_counter
    uint64_t x11_89 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bc320
    *UI2StateDeclI_counter = x10_206 + 1
    data_14bc328 = x11_89
else
    (*data_14bc320)(&data_14bc320, *(x0_87 + 0x10))

data_1125e58
data_14bc338 = 0x500000b2b
data_14bc998 = data_1125e28
__builtin_memset(&data_14bc9a8, 0, 0x50)
data_14bc340 = 0x400
data_14bc348 = Raid
__builtin_memcpy(&data_14bc9f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14bca50 = "seaway"
data_14bca10 = 0x100000000
data_14bca58 = 0x1d
data_14bca60 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_41
data_14bca88 = _vtable_for_UI2StateDecl + 0x10
data_14bca68 = SOUND_SOUND_CARDS_FX_BUY_EVENT_SEAWAY
void* x0_88 = UI2StateDeclTryLookup("ad_Seaway")

if (x0_88 == 0)
    (*data_14bca88)(&data_14bca88, "ad_Seaway")
    uint32_t x10_209 = *UI2StateDeclI_counter
    uint64_t x11_90 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bca88
    *UI2StateDeclI_counter = x10_209 + 1
    data_14bca90 = x11_90
else
    (*data_14bca88)(&data_14bca88, *(x0_88 + 0x10))

data_14bcaa0 = _vtable_for_UI2StateDecl + 0x10
void* x0_89 = UI2StateDeclTryLookup("ad_Seaway")

if (x0_89 == 0)
    (*data_14bcaa0)(&data_14bcaa0, "ad_Seaway")
    uint32_t x10_211 = *UI2StateDeclI_counter
    uint64_t x11_91 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bcaa0
    *UI2StateDeclI_counter = x10_211 + 1
    data_14bcaa8 = x11_91
else
    (*data_14bcaa0)(&data_14bcaa0, *(x0_89 + 0x10))

data_14bcac0 = 0x400
data_14bcac8 = Seaway
__builtin_memcpy(&data_14bd178, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14bcab8 = 0x500000b2c
data_14bd1d0 = "trade"
data_14bd1d8 = 0x28
data_14bd1e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_44
data_14bd208 = _vtable_for_UI2StateDecl + 0x10
data_14bd1e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_TRADE
void* x0_90 = UI2StateDeclTryLookup("ad_Trade")

if (x0_90 == 0)
    (*data_14bd208)(&data_14bd208, "ad_Trade")
    uint32_t x10_214 = *UI2StateDeclI_counter
    uint64_t x11_92 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bd208
    *UI2StateDeclI_counter = x10_214 + 1
    data_14bd210 = x11_92
else
    (*data_14bd208)(&data_14bd208, *(x0_90 + 0x10))

data_14bd220 = _vtable_for_UI2StateDecl + 0x10
void* x0_91 = UI2StateDeclTryLookup("ad_Trade")

if (x0_91 == 0)
    (*data_14bd220)(&data_14bd220, "ad_Trade")
    uint32_t x10_216 = *UI2StateDeclI_counter
    uint64_t x11_93 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bd220
    *UI2StateDeclI_counter = x10_216 + 1
    data_14bd228 = x11_93
else
    (*data_14bd220)(&data_14bd220, *(x0_91 + 0x10))

data_14bd240 = 0x400
data_14bd248 = Trade
__builtin_memcpy(&data_14bd8f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14bd238 = 0x500000b2d
data_14bd950 = "lost_arts"
data_14bd958 = 0x1c
data_14bd960 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_23
data_14bd988 = _vtable_for_UI2StateDecl + 0x10
data_14bd968 = SOUND_SOUND_CARDS_FX_BUY_EVENT_LOST_ARTS
void* x0_92 = UI2StateDeclTryLookup("ad_Lost_Arts")

if (x0_92 == 0)
    (*data_14bd988)(&data_14bd988, "ad_Lost_Arts")
    uint32_t x10_219 = *UI2StateDeclI_counter
    uint64_t x11_94 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bd988
    *UI2StateDeclI_counter = x10_219 + 1
    data_14bd990 = x11_94
else
    (*data_14bd988)(&data_14bd988, *(x0_92 + 0x10))

data_14bd9a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_93 = UI2StateDeclTryLookup("ad_Lost_Arts")

if (x0_93 == 0)
    (*data_14bd9a0)(&data_14bd9a0, "ad_Lost_Arts")
    uint32_t x10_221 = *UI2StateDeclI_counter
    uint64_t x11_95 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bd9a0
    *UI2StateDeclI_counter = x10_221 + 1
    data_14bd9a8 = x11_95
else
    (*data_14bd9a0)(&data_14bd9a0, *(x0_93 + 0x10))

data_14bd9c0 = 0x400
data_14bd9c8 = LostArts
data_14bdfd8 = 1
__builtin_memcpy(&data_14be078, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14bd9b8 = 0x600000b2e
data_14be0d0 = "training"
data_14be0d8 = 0x1a
data_14be0e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_46
data_14be0e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_TRAINING
data_14be0f0 = SOUND_SOUND_CARDS_FX_RESULT_TRAINING
data_14be108 = _vtable_for_UI2StateDecl + 0x10
void* x0_94 = UI2StateDeclTryLookup("ad_Training")

if (x0_94 == 0)
    (*data_14be108)(&data_14be108, "ad_Training")
    uint32_t x10_223 = *UI2StateDeclI_counter
    uint64_t x11_96 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14be108
    *UI2StateDeclI_counter = x10_223 + 1
    data_14be110 = x11_96
else
    (*data_14be108)(&data_14be108, *(x0_94 + 0x10))

data_14be120 = _vtable_for_UI2StateDecl + 0x10
void* x0_95 = UI2StateDeclTryLookup("ad_Training")

if (x0_95 == 0)
    (*data_14be120)(&data_14be120, "ad_Training")
    uint32_t x10_225 = *UI2StateDeclI_counter
    uint64_t x11_97 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14be120
    *UI2StateDeclI_counter = x10_225 + 1
    data_14be128 = x11_97
else
    (*data_14be120)(&data_14be120, *(x0_95 + 0x10))

data_14be140 = 0x400
data_14be148 = Training
__builtin_memcpy(&data_14be7f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14be138 = 0x600000b2f
data_14be850 = "inheritance"
data_14be858 = 0x29
data_14be860 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_20
data_14be888 = _vtable_for_UI2StateDecl + 0x10
data_14be868 = SOUND_SOUND_CARDS_FX_BUY_EVENT_INHERITANCE
void* x0_96 = UI2StateDeclTryLookup("ad22_Inheritance")

if (x0_96 == 0)
    (*data_14be888)(&data_14be888, "ad22_Inheritance")
    uint32_t x10_228 = *UI2StateDeclI_counter
    uint64_t x11_98 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14be888
    *UI2StateDeclI_counter = x10_228 + 1
    data_14be890 = x11_98
else
    (*data_14be888)(&data_14be888, *(x0_96 + 0x10))

data_14be8a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_97 = UI2StateDeclTryLookup("ad_Inheritance")

if (x0_97 == 0)
    (*data_14be8a0)(&data_14be8a0, "ad_Inheritance")
    uint32_t x10_230 = *UI2StateDeclI_counter
    uint64_t x11_99 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14be8a0
    *UI2StateDeclI_counter = x10_230 + 1
    data_14be8a8 = x11_99
else
    (*data_14be8a0)(&data_14be8a0, *(x0_97 + 0x10))

data_14be8c0 = 0x400
data_14be8c8 = Inheritance
__builtin_memcpy(&data_14bef78, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14be8b8 = 0x700000b30
data_14befd0 = "pathfinding"
data_14befd8 = 0x10
data_14befe0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_27
data_14bf008 = _vtable_for_UI2StateDecl + 0x10
data_14befe8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_PATHFINDING
void* x0_98 = UI2StateDeclTryLookup("ad_Pathfinding")

if (x0_98 == 0)
    (*data_14bf008)(&data_14bf008, "ad_Pathfinding")
    uint32_t x10_233 = *UI2StateDeclI_counter
    uint64_t x11_100 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bf008
    *UI2StateDeclI_counter = x10_233 + 1
    data_14bf010 = x11_100
else
    (*data_14bf008)(&data_14bf008, *(x0_98 + 0x10))

data_14bf020 = _vtable_for_UI2StateDecl + 0x10
void* x0_99 = UI2StateDeclTryLookup("ad_Pathfinding")

if (x0_99 == 0)
    (*data_14bf020)(&data_14bf020, "ad_Pathfinding")
    uint32_t x10_235 = *UI2StateDeclI_counter
    uint64_t x11_101 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bf020
    *UI2StateDeclI_counter = x10_235 + 1
    data_14bf028 = x11_101
else
    (*data_14bf020)(&data_14bf020, *(x0_99 + 0x10))

data_14bf040 = 0x400
data_14bf048 = Pathfinding
data_14bf658 = 1
data_14bf6f8 = v2
data_14bf708 = 0
data_14bf038 = 0x800000b31
data_14bf710 = 0x100000000
data_14bf750 = "soldier"
data_14bf70c = 0
data_14bf758 = 0x14
data_14bf760 = TEXTURE_CARD_GEN_ADVENTURES_SOLDIER
data_14bf788 = _vtable_for_UI2StateDecl + 0x10
data_14bf768 = SOUND_SOUND_CARDS_FX_LANDPLAY_SOLDIER
void* x0_100 = UI2StateDeclTryLookup("ad_Soldier")

if (x0_100 == 0)
    (*data_14bf788)(&data_14bf788, "ad_Soldier")
    uint32_t x10_238 = *UI2StateDeclI_counter
    uint64_t x11_102 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bf788
    *UI2StateDeclI_counter = x10_238 + 1
    data_14bf790 = x11_102
else
    (*data_14bf788)(&data_14bf788, *(x0_100 + 0x10))

data_14bf7a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_101 = UI2StateDeclTryLookup("ad_Soldier")
int128_t v0_22
int128_t v1_33

if (x0_101 == 0)
    v0_22, v1_33 = (*data_14bf7a0)(&data_14bf7a0, "ad_Soldier")
    uint32_t x10_240 = *UI2StateDeclI_counter
    uint64_t x11_103 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bf7a0
    *UI2StateDeclI_counter = x10_240 + 1
    data_14bf7a8 = x11_103
else
    v0_22, v1_33 = (*data_14bf7a0)(&data_14bf7a0, *(x0_101 + 0x10))

v1_33.q = 0x8000300000b32
v0_22.q = 0
v0_22:8.q = 0
data_14bf7c0 = 0x1000000000124
data_14bf7c8 = Soldier
data_14bf7b8 = 0x8000300000b32
__builtin_memset(&data_14bf7d8, 0, 0xc0)
data_14bf7d8 = 0xb
data_14bf7e8:8 = 0x500000000
data_14bf868:8.d = 1
__builtin_memset(&data_14bf8a0, 0, 0x40)
data_14bf898 = 0x600000006
data_14bf8a0:4.d = 3
__builtin_memset(&data_14bf8e0, 0, 0x78)
data_14bf8b0 = Soldier_ExchangeCard
v0_22 = data_1125e88
data_14bfe28 = data_1125e98
data_14bfe18 = v0_22
data_1125ec8
data_14bf940 = Soldier_TestExchange
data_14bfdd8 = 1
data_14bf94c = 0x100000003
__builtin_memset(&data_14bfe38, 0, 0x40)
data_14bfe78 = v2
data_14bfe88 = 0
data_14bfe90 = 0x100000000
data_14bfed0 = "treasure_hunter"
data_14bfe8c = 0
data_14bfed8 = 2
data_14bfee0 = TEXTURE_CARD_GEN_ADVENTURES_TREASURE_HUNTER
data_14bfee8 = SOUND_SOUND_CARDS_FX_LANDPLAY_TREASURE_HUNTER
data_14bff08 = _vtable_for_UI2StateDecl + 0x10
void* x0_102 = UI2StateDeclTryLookup("ad_Treasure_Hunter")

if (x0_102 == 0)
    (*data_14bff08)(&data_14bff08, "ad_Treasure_Hunter")
    uint32_t x10_242 = *UI2StateDeclI_counter
    uint64_t x11_104 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bff08
    *UI2StateDeclI_counter = x10_242 + 1
    data_14bff10 = x11_104
else
    (*data_14bff08)(&data_14bff08, *(x0_102 + 0x10))

data_14bff20 = _vtable_for_UI2StateDecl + 0x10
void* x0_103 = UI2StateDeclTryLookup("ad_Treasure_Hunter")
int128_t v0_23
int128_t v1_34

if (x0_103 == 0)
    v0_23, v1_34 = (*data_14bff20)(&data_14bff20, "ad_Treasure_Hunter")
    uint32_t x10_244 = *UI2StateDeclI_counter
    uint64_t x11_105 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14bff20
    *UI2StateDeclI_counter = x10_244 + 1
    data_14bff28 = x11_105
else
    v0_23, v1_34 = (*data_14bff20)(&data_14bff20, *(x0_103 + 0x10))

v1_34.q = 0x8000300000b33
v0_23.q = 0
v0_23:8.q = 0
data_14bff40 = 0x1000000000104
data_14bff48 = TreasureHunter
data_14bff38 = 0x8000300000b33
__builtin_memset(&data_14bff58, 0, 0xc0)
data_14bff58 = 0xb
data_14bff68:8 = 0x500000000
data_14bffe8:8.d = 1
__builtin_memset(&data_14c0020, 0, 0x40)
data_14c0018 = 0x600000006
data_14c0020:4.d = 3
__builtin_memset(&data_14c0060, 0, 0x78)
data_14c0030 = TreasureHunter_ExchangeCard
v0_23 = data_1125ee8
data_14c05a8 = data_1125ef8
data_14c0598 = v0_23
data_1125f28
data_14c00c0 = TreasureHunter_TestExchange
data_14c0558 = 1
data_14c00cc = 0x100000003
__builtin_memset(&data_14c05b8, 0, 0x40)
data_14c05f8 = v2
data_14c0608 = 0
data_14c0610 = 0x100000000
data_14c0650 = "fugitive"
data_14c060c = 0
data_14c0658 = 0x14
data_14c0660 = TEXTURE_CARD_GEN_ADVENTURES_FUGITIVE
data_14c0668 = SOUND_SOUND_CARDS_FX_LANDPLAY_FUGITIVE
data_14c0688 = _vtable_for_UI2StateDecl + 0x10
void* x0_104 = UI2StateDeclTryLookup("ad_Fugitive")

if (x0_104 == 0)
    (*data_14c0688)(&data_14c0688, "ad_Fugitive")
    uint32_t x10_246 = *UI2StateDeclI_counter
    uint64_t x11_106 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c0688
    *UI2StateDeclI_counter = x10_246 + 1
    data_14c0690 = x11_106
else
    (*data_14c0688)(&data_14c0688, *(x0_104 + 0x10))

data_14c06a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_105 = UI2StateDeclTryLookup("ad_Fugitive")

if (x0_105 == 0)
    (*data_14c06a0)(&data_14c06a0, "ad_Fugitive")
    uint32_t x10_248 = *UI2StateDeclI_counter
    uint64_t x11_107 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c06a0
    *UI2StateDeclI_counter = x10_248 + 1
    data_14c06a8 = x11_107
else
    (*data_14c06a0)(&data_14c06a0, *(x0_105 + 0x10))

int128_t v0_24
v0_24.q = 0x8000400000b34
data_14c06c0 = 0x1000000000104
data_14c06c8 = Fugitive
data_14c06b8 = 0x8000400000b34
__builtin_memset(&data_14c06d8, 0, 0xc0)
v0_24.d = 6
v0_24:4.d = 6
data_14c06d8 = 0xb
data_14c06e8:8 = 0x500000000
data_14c0768:8.d = 1
__builtin_memset(&data_14c07a0, 0, 0x40)
data_14c0798 = 0x600000006
data_14c07a0:4.d = 3
__builtin_memset(&data_14c07e0, 0, 0x78)
data_14c07b0 = Fugitive_ExchangeCard
data_14c0cd8 = 1
data_14c0840 = Fugitive_TestExchange
data_14c084c = 0x100000003
data_14c0d78 = v2
data_14c0d88 = 0
data_14c0d90 = 0x100000000
data_14c0dd0 = "warrior"
data_14c0d8c = 0
data_14c0dd8 = 2
data_14c0de0 = TEXTURE_CARD_GEN_ADVENTURES_WARRIOR
data_14c0de8 = SOUND_SOUND_CARDS_FX_LANDPLAY_WARRIOR
data_14c0e08 = _vtable_for_UI2StateDecl + 0x10
void* x0_106 = UI2StateDeclTryLookup("ad_Warrior")

if (x0_106 == 0)
    (*data_14c0e08)(&data_14c0e08, "ad_Warrior")
    uint32_t x10_250 = *UI2StateDeclI_counter
    uint64_t x11_108 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c0e08
    *UI2StateDeclI_counter = x10_250 + 1
    data_14c0e10 = x11_108
else
    (*data_14c0e08)(&data_14c0e08, *(x0_106 + 0x10))

data_14c0e20 = _vtable_for_UI2StateDecl + 0x10
void* x0_107 = UI2StateDeclTryLookup("ad_Warrior")

if (x0_107 == 0)
    (*data_14c0e20)(&data_14c0e20, "ad_Warrior")
    uint32_t x10_252 = *UI2StateDeclI_counter
    uint64_t x11_109 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c0e20
    *UI2StateDeclI_counter = x10_252 + 1
    data_14c0e28 = x11_109
else
    (*data_14c0e20)(&data_14c0e20, *(x0_107 + 0x10))

int128_t v0_25
v0_25.q = 0x8000400000b35
data_14c0e40 = 0x1000000000124
data_14c0e48 = Warrior
data_14c0e38 = 0x8000400000b35
__builtin_memset(&data_14c0e58, 0, 0xc0)
v0_25.d = 6
v0_25:4.d = 6
data_14c0e58 = 0xb
data_14c0e68:8 = 0x500000000
data_14c0ee8:8.d = 1
__builtin_memset(&data_14c0f20, 0, 0x40)
data_14c0f18 = 0x600000006
data_14c0f20:4.d = 3
__builtin_memset(&data_14c0f60, 0, 0x78)
data_14c0f30 = Warrior_ExchangeCard
data_14c0fc0 = Warrior_TestExchange
data_14c0fcc = 0x100000003
data_14c1458 = 1
data_14c14f8 = v2
data_14c1508 = 0
data_14c1510 = 0x100000000
data_14c1550 = "disciple"
data_14c150c = 0
data_14c1558 = 0x14
data_14c1560 = TEXTURE_CARD_GEN_ADVENTURES_DISCIPLE
data_14c1568 = SOUND_SOUND_CARDS_FX_LANDPLAY_DISCIPLE
data_14c1588 = _vtable_for_UI2StateDecl + 0x10
void* x0_108 = UI2StateDeclTryLookup("ad_Disciple")

if (x0_108 == 0)
    (*data_14c1588)(&data_14c1588, "ad_Disciple")
    uint32_t x10_254 = *UI2StateDeclI_counter
    uint64_t x11_110 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c1588
    *UI2StateDeclI_counter = x10_254 + 1
    data_14c1590 = x11_110
else
    (*data_14c1588)(&data_14c1588, *(x0_108 + 0x10))

data_14c15a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_109 = UI2StateDeclTryLookup("ad_Disciple")

if (x0_109 == 0)
    (*data_14c15a0)(&data_14c15a0, "ad_Disciple")
    uint32_t x10_256 = *UI2StateDeclI_counter
    uint64_t x11_111 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c15a0
    *UI2StateDeclI_counter = x10_256 + 1
    data_14c15a8 = x11_111
else
    (*data_14c15a0)(&data_14c15a0, *(x0_109 + 0x10))

int128_t v0_26
v0_26.q = 0x8000500000b36
data_14c15c0 = 0x1000000000104
data_14c15c8 = Disciple
data_14c15b8 = 0x8000500000b36
__builtin_memset(&data_14c15d8, 0, 0xc0)
v0_26.d = 6
v0_26:4.d = 6
data_14c15d8 = 0xb
data_14c15e8:8 = 0x500000000
data_14c1668:8.d = 1
__builtin_memset(&data_14c16a0, 0, 0x40)
data_14c1698 = 0x600000006
data_14c16a0:4.d = 3
__builtin_memset(&data_14c16e0, 0, 0x78)
data_14c16b0 = Disciple_ExchangeCard
data_14c1bd8 = 1
data_14c1740 = Disciple_TestExchange
data_14c174c = 0x100000003
data_14c1c78 = v2
data_14c1c88 = 0
data_14c1c90 = 0x100000000
data_14c1cd0 = "hero"
data_14c1c8c = 0
data_14c1cd8 = 2
data_14c1ce0 = TEXTURE_CARD_GEN_ADVENTURES_HERO
data_14c1ce8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HERO
data_14c1d08 = _vtable_for_UI2StateDecl + 0x10
void* x0_110 = UI2StateDeclTryLookup("ad_Hero")

if (x0_110 == 0)
    (*data_14c1d08)(&data_14c1d08, "ad_Hero")
    uint32_t x10_258 = *UI2StateDeclI_counter
    uint64_t x11_112 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c1d08
    *UI2StateDeclI_counter = x10_258 + 1
    data_14c1d10 = x11_112
else
    (*data_14c1d08)(&data_14c1d08, *(x0_110 + 0x10))

data_14c1d20 = _vtable_for_UI2StateDecl + 0x10
void* x0_111 = UI2StateDeclTryLookup("ad_Hero")

if (x0_111 == 0)
    (*data_14c1d20)(&data_14c1d20, "ad_Hero")
    uint32_t x10_260 = *UI2StateDeclI_counter
    uint64_t x11_113 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c1d20
    *UI2StateDeclI_counter = x10_260 + 1
    data_14c1d28 = x11_113
else
    (*data_14c1d20)(&data_14c1d20, *(x0_111 + 0x10))

int128_t v0_27
v0_27.q = 0x8000500000b37
data_14c1d40 = 0x1000000000104
data_14c1d48 = Hero
data_14c1d38 = 0x8000500000b37
__builtin_memset(&data_14c1d58, 0, 0xc0)
v0_27.d = 6
v0_27:4.d = 6
data_14c1d58 = 0xb
data_14c1d68:8 = 0x500000000
data_14c1de8:8.d = 1
__builtin_memset(&data_14c1e20, 0, 0x40)
data_14c1e18 = 0x600000006
data_14c1e20:4.d = 3
__builtin_memset(&data_14c1e60, 0, 0x78)
data_14c1e30 = Hero_ExchangeCard
data_14c2358 = 1
data_14c1ec0 = Hero_TestExchange
data_14c1ecc = 0x100000003
data_14c23f8 = v2
data_14c2408 = 0
data_14c2410 = 0x100000000
data_14c2450 = "teacher"
data_14c240c = 0
data_14c2458 = 0x14
data_14c2460 = TEXTURE_CARD_GEN_ADVENTURES_TEACHER
data_14c2468 = SOUND_SOUND_CARDS_FX_LANDPLAY_TEACHER
data_14c2488 = _vtable_for_UI2StateDecl + 0x10
void* x0_112 = UI2StateDeclTryLookup("ad_Teacher")

if (x0_112 == 0)
    (*data_14c2488)(&data_14c2488, "ad_Teacher")
    uint32_t x10_262 = *UI2StateDeclI_counter
    uint64_t x11_114 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c2488
    *UI2StateDeclI_counter = x10_262 + 1
    data_14c2490 = x11_114
else
    (*data_14c2488)(&data_14c2488, *(x0_112 + 0x10))

data_14c24a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_113 = UI2StateDeclTryLookup("ad_Teacher")

if (x0_113 == 0)
    (*data_14c24a0)(&data_14c24a0, "ad_Teacher")
    uint32_t x10_264 = *UI2StateDeclI_counter
    uint64_t x11_115 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c24a0
    *UI2StateDeclI_counter = x10_264 + 1
    data_14c24a8 = x11_115
else
    (*data_14c24a0)(&data_14c24a0, *(x0_113 + 0x10))

int128_t v0_28
v0_28.q = 0x8000600000b38
data_14c24b8 = 0x8000600000b38
v0_28.q = 0
v0_28:8.q = 0
data_14c24c0 = 0x1000000000204
data_14c24c8 = Teacher
__builtin_memset(&data_14c24d8, 0, 0xc0)
data_14c24d8 = 0xb
data_14c24e8:8 = 0x500000000
data_14c2568:8.d = 1
data_14c25a0 = zx.o(0)
__builtin_memset(&data_14c25b0, 0, 0xa8)
data_14c2598 = 0x500000006
data_14c25a0:4.d = 0
data_14c25b0 = Teacher_Call
data_14c2640 = 0
data_14c264c = 0x100000001
data_14c2ad8 = 1
data_14c2b78 = v2
data_14c2b88 = 0
data_14c2b90 = 0x100000000
data_14c2bd0 = "champion"
data_14c2b8c = 0
data_14c2bd8 = 2
data_14c2be0 = TEXTURE_CARD_GEN_ADVENTURES_CHAMPION
data_14c2be8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CHAMPION
data_14c2c08 = _vtable_for_UI2StateDecl + 0x10
void* x0_114 = UI2StateDeclTryLookup("ad22_Champion")

if (x0_114 == 0)
    (*data_14c2c08)(&data_14c2c08, "ad22_Champion")
    uint32_t x10_267 = *UI2StateDeclI_counter
    uint64_t x11_116 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c2c08
    *UI2StateDeclI_counter = x10_267 + 1
    data_14c2c10 = x11_116
else
    (*data_14c2c08)(&data_14c2c08, *(x0_114 + 0x10))

data_14c2c20 = _vtable_for_UI2StateDecl + 0x10
void* x0_115 = UI2StateDeclTryLookup("ad_Champion")
int128_t v0_29
int128_t v2_17

if (x0_115 == 0)
    v0_29, v2_17 = (*data_14c2c20)(&data_14c2c20, "ad_Champion")
    uint32_t x10_269 = *UI2StateDeclI_counter
    uint64_t x11_117 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c2c20
    *UI2StateDeclI_counter = x10_269 + 1
    data_14c2c28 = x11_117
else
    v0_29, v2_17 = (*data_14c2c20)(&data_14c2c20, *(x0_115 + 0x10))

v0_29.q = 0
v0_29:8.q = 0
__builtin_memset(&data_14c2c58, 0, 0xc0)
v0_29.q = 0x8000600000b39
data_14c2c38 = 0x8000600000b39
data_14c2c40 = 0x1000000000084
data_14c2c48 = Champion
data_14c2c58 = 0xb
data_14c2ce8:8.d = 1
v2_17 = data_71a6a0
v0_29 = var_100
data_14c2c68:8 = 0x500000000
__builtin_memcpy(&data_14c32f8, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14c3340 = v0_29
data_14c3350 = "messenger"
int128_t var_f0
data_14c3330 = var_f0
data_14c3320 = var_e0
int128_t var_d0
data_14c3310 = var_d0
data_14c3358 = 0x2a
data_14c3360 = TEXTURE_CARD_GEN_ADVENTURES_MESSENGER
data_14c3388 = _vtable_for_UI2StateDecl + 0x10
data_14c3368 = SOUND_SOUND_CARDS_FX_LANDPLAY_MESSENGER
void* x0_116 = UI2StateDeclTryLookup("ad22_Messenger")

if (x0_116 == 0)
    (*data_14c3388)(&data_14c3388, "ad22_Messenger")
    uint32_t x10_272 = *UI2StateDeclI_counter
    uint64_t x11_118 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c3388
    *UI2StateDeclI_counter = x10_272 + 1
    data_14c3390 = x11_118
else
    (*data_14c3388)(&data_14c3388, *(x0_116 + 0x10))

data_14c33a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_117 = UI2StateDeclTryLookup("ad_Messenger")

if (x0_117 == 0)
    (*data_14c33a0)(&data_14c33a0, "ad_Messenger")
    uint32_t x10_274 = *UI2StateDeclI_counter
    uint64_t x11_119 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c33a0
    *UI2StateDeclI_counter = x10_274 + 1
    data_14c33a8 = x11_119
else
    (*data_14c33a0)(&data_14c33a0, *(x0_117 + 0x10))

int128_t v0_30
v0_30.q = 0x400000b0c
data_14c33b8 = 0x400000b0c
v0_30.q = 0
v0_30:8.q = 0
__builtin_memset(&data_14c33e0, 0, 0xb0)
data_14c33c0 = 4
v0_30.d = 6
v0_30:4.d = 6
data_14c33c8 = Messenger
data_14c33f0 = Messenger22_OnGain
data_14c33d8 = 0x600000006
data_14c33e0:4.d = 1
data_14c39d8 = 1
data_14c3a78 = v2_17
v0_30.q = 1
data_14c3480 = Messenger22_OnGain_Test
data_14c348c:4 = 0
data_14c348c = 0x100000000
data_14c3a88 = 1
data_14c3ad0 = "port"
__builtin_memset(&data_14c3ab0, 0, 0x20)
__builtin_memcpy(&data_14c3a90, 
    "\x0c\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14c3ad8 = 0x29
data_14c3ae0 = TEXTURE_CARD_GEN_ADVENTURES_PORT
data_14c3b08 = _vtable_for_UI2StateDecl + 0x10
data_14c3ae8 = SOUND_SOUND_CARDS_FX_LANDPLAY_PORT
void* x0_118 = UI2StateDeclTryLookup("ad22_Port")

if (x0_118 == 0)
    (*data_14c3b08)(&data_14c3b08, "ad22_Port")
    uint32_t x10_276 = *UI2StateDeclI_counter
    uint64_t x11_121 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c3b08
    *UI2StateDeclI_counter = x10_276 + 1
    data_14c3b10 = x11_121
else
    (*data_14c3b08)(&data_14c3b08, *(x0_118 + 0x10))

data_14c3b20 = _vtable_for_UI2StateDecl + 0x10
void* x0_119 = UI2StateDeclTryLookup("ad_Port")

if (x0_119 == 0)
    (*data_14c3b20)(&data_14c3b20, "ad_Port")
    uint32_t x10_278 = *UI2StateDeclI_counter
    uint64_t x11_122 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c3b20
    *UI2StateDeclI_counter = x10_278 + 1
    data_14c3b28 = x11_122
else
    (*data_14c3b20)(&data_14c3b20, *(x0_119 + 0x10))

data_14c3b38 = 0x400000b0e
data_14c3b40 = 4
int128_t v0_31
v0_31.q = 0
v0_31:8.q = 0
data_14c3b48 = Port
data_14c3b70 = zx.o(0)
data_14c3b70.q = Port_OnGain22
__builtin_memset(&data_14c3c00, 0, 0x18)
data_14c3b60 = zx.o(0)
data_14c3c00 = Port_OnGain22_Test
__builtin_memset(&data_14c3b80, 0, 0x80)
data_14c3b58 = 0x600000006
data_14c3b60:4.d = 1
data_14c3c0c = 0x100000000
__builtin_memset(&data_14c3c18, 0, 0xc0)
v0_31.q = 0xc00000000
data_14c3c18 = 0xb
data_14c3c28:8 = 0xc00000000
data_14c3ca8:8.d = 1
data_14c4158 = 1
__builtin_memcpy(&data_14c41f8, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"20\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14c4218 = 0xffffffff
data_14c4250 = "bridge_troll"
data_14c4258 = 0x23
data_14c4260 = TEXTURE_CARD_GEN_ADVENTURES_BRIDGETROLL
data_14c4288 = _vtable_for_UI2StateDecl + 0x10
data_14c4268 = SOUND_SOUND_CARDS_FX_LANDPLAY_BRIDGETROLL
void* x0_120 = UI2StateDeclTryLookup("ad22_Bridge_Troll")

if (x0_120 == 0)
    (*data_14c4288)(&data_14c4288, "ad22_Bridge_Troll")
    uint32_t x10_280 = *UI2StateDeclI_counter
    uint64_t x11_124 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c4288
    *UI2StateDeclI_counter = x10_280 + 1
    data_14c4290 = x11_124
else
    (*data_14c4288)(&data_14c4288, *(x0_120 + 0x10))

data_14c42a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_121 = UI2StateDeclTryLookup("ad_Bridge_Troll")

if (x0_121 == 0)
    (*data_14c42a0)(&data_14c42a0, "ad_Bridge_Troll")
    uint32_t x10_282 = *UI2StateDeclI_counter
    uint64_t x11_125 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c42a0
    *UI2StateDeclI_counter = x10_282 + 1
    data_14c42a8 = x11_125
else
    (*data_14c42a0)(&data_14c42a0, *(x0_121 + 0x10))

int128_t v0_32
v0_32.q = 0x500000b12
data_14c42b8 = 0x500000b12
data_14c42c0 = 0xa4
data_14c42c8 = BridgeTroll22
data_14c48d8 = 1
__builtin_memcpy(&data_14c4978, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
v0_32.q = 8
data_14c49d0 = "haunted_woods"
int128_t var_1b0
data_14c4990 = var_1b0
data_14c49a0 = var_1c0
data_14c49b0 = v1_12
data_14c49c0 = v2_7
data_14c49d8 = 0x23
data_14c49e0 = TEXTURE_CARD_GEN_ADVENTURES_HAUNTEDWOODS
data_14c4a08 = _vtable_for_UI2StateDecl + 0x10
data_14c49e8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HAUNTEDWOODS
void* x0_122 = UI2StateDeclTryLookup("ad22_Haunted_Woods")

if (x0_122 == 0)
    (*data_14c4a08)(&data_14c4a08, "ad22_Haunted_Woods")
    uint32_t x10_285 = *UI2StateDeclI_counter
    uint64_t x11_126 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c4a08
    *UI2StateDeclI_counter = x10_285 + 1
    data_14c4a10 = x11_126
else
    (*data_14c4a08)(&data_14c4a08, *(x0_122 + 0x10))

data_14c4a20 = _vtable_for_UI2StateDecl + 0x10
void* x0_123 = UI2StateDeclTryLookup("ad_Haunted_Woods")
int128_t v0_33
int128_t v2_18

if (x0_123 == 0)
    v0_33, v2_18 = (*data_14c4a20)(&data_14c4a20, "ad_Haunted_Woods")
    uint32_t x10_287 = *UI2StateDeclI_counter
    uint64_t x11_127 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c4a20
    *UI2StateDeclI_counter = x10_287 + 1
    data_14c4a28 = x11_127
else
    v0_33, v2_18 = (*data_14c4a20)(&data_14c4a20, *(x0_123 + 0x10))
v0_33.q = 0x500000b15
data_14c4a38 = 0x500000b15
v0_33.q = 6
data_14c5108 = 6
data_1125f48
__builtin_memcpy(&data_14c5058, 
    "\x12\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"96\xa9\x76\x00\x00\x00\x00\x00", 
    0x20)
data_1125f68
data_14c4a40 = 0xa4
data_14c4a48 = HauntedWoods22
__builtin_memset(&data_14c5078, 0, 0x20)
data_7acb08
data_7acb18
data_14c50f8 = v2_17
__builtin_memcpy(&data_14c5110, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
v0_33 = data_7acb28
int128_t v1_35 = data_7acb38
data_14c5150 = "swamp_hag"
data_14c5130 = v0_33
data_14c5140 = v1_35
data_14c5158 = 0x1b
data_14c5160 = TEXTURE_CARD_GEN_ADVENTURES_SWAMP_HAG
data_14c5168 = SOUND_SOUND_CARDS_FX_LANDPLAY_SWAMP_HAG
data_14c5188 = _vtable_for_UI2StateDecl + 0x10
void* x0_124 = UI2StateDeclTryLookup("ad22_Swamp_Hag")

if (x0_124 == 0)
    (*data_14c5188)(&data_14c5188, "ad22_Swamp_Hag")
    uint32_t x10_289 = *UI2StateDeclI_counter
    uint64_t x11_129 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c5188
    *UI2StateDeclI_counter = x10_289 + 1
    data_14c5190 = x11_129
else
    (*data_14c5188)(&data_14c5188, *(x0_124 + 0x10))

data_14c51a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_125 = UI2StateDeclTryLookup("ad_Swamp_Hag")

if (x0_125 == 0)
    (*data_14c51a0)(&data_14c51a0, "ad_Swamp_Hag")
    uint32_t x10_291 = *UI2StateDeclI_counter
    uint64_t x11_130 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c51a0
    *UI2StateDeclI_counter = x10_291 + 1
    data_14c51a8 = x11_130
else
    (*data_14c51a0)(&data_14c51a0, *(x0_125 + 0x10))

data_14c51b8 = 0x500000b1a
data_14c51c0 = 0xa4
data_14c51c8 = SwampHag22
__builtin_memcpy(&data_14c57d8, 
    "\x0d\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"3a\xba\x79\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memcpy(&data_14c5878, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memset(&data_14c57f8, 0, 0x20)
data_14c5898 = 0xffffffff
data_14c58d0 = "bonfire"
data_14c58d8 = 6
data_14c58e0 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_8
data_14c58e8 = SOUND_SOUND_CARDS_FX_BUY_EVENT_BONFIRE
data_14c5908 = _vtable_for_UI2StateDecl + 0x10
void* x0_126 = UI2StateDeclTryLookup("ad22_Bonfire")

if (x0_126 == 0)
    (*data_14c5908)(&data_14c5908, "ad22_Bonfire")
    uint32_t x10_293 = *UI2StateDeclI_counter
    uint64_t x11_132 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c5908
    *UI2StateDeclI_counter = x10_293 + 1
    data_14c5910 = x11_132
else
    (*data_14c5908)(&data_14c5908, *(x0_126 + 0x10))

data_14c5920 = _vtable_for_UI2StateDecl + 0x10
void* x0_127 = UI2StateDeclTryLookup("ad_Bonfire")
int128_t v0_34
int128_t v1_36

if (x0_127 == 0)
    v0_34, v1_36 = (*data_14c5920)(&data_14c5920, "ad_Bonfire")
    uint32_t x10_295 = *UI2StateDeclI_counter
    uint64_t x11_133 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c5920
    *UI2StateDeclI_counter = x10_295 + 1
    data_14c5928 = x11_133
else
    v0_34, v1_36 = (*data_14c5920)(&data_14c5920, *(x0_127 + 0x10))
v0_34.q = 0x300000b24
data_14c5938 = 0x300000b24
data_14c5940 = 0x400
data_14c5948 = Bonfire22
__builtin_memcpy(&data_14c5ff8, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_1125ff8
data_14c5f98 = data_1125fc8
__builtin_memset(&data_14c5fa8, 0, 0x50)
data_14c6050 = "plan"
data_14c6058 = 0x1b
data_14c6060 = TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_31
data_14c6068 = SOUND_SOUND_CARDS_FX_BUY_EVENT_PLAN
data_14c6088 = _vtable_for_UI2StateDecl + 0x10
void* x0_128 = UI2StateDeclTryLookup("ad22_Plan")

if (x0_128 == 0)
    (*data_14c6088)(&data_14c6088, "ad22_Plan")
    uint32_t x10_297 = *UI2StateDeclI_counter
    uint64_t x11_135 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c6088
    *UI2StateDeclI_counter = x10_297 + 1
    data_14c6090 = x11_135
else
    (*data_14c6088)(&data_14c6088, *(x0_128 + 0x10))

data_14c60a0 = _vtable_for_UI2StateDecl + 0x10
void* x0_129 = UI2StateDeclTryLookup("ad_Plan")
int64_t result

if (x0_129 == 0)
    result = (*data_14c60a0)(&data_14c60a0, "ad_Plan")
    uint32_t x10_299 = *UI2StateDeclI_counter
    uint64_t x11_136 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c60a0
    *UI2StateDeclI_counter = x10_299 + 1
    data_14c60a8 = x11_136
else
    result = (*data_14c60a0)(&data_14c60a0, *(x0_129 + 0x10))

data_14c60b8 = 0x300000b27
data_14c60c0 = 0x400
data_14c60c8 = Plan22
data_14c66d8 = 1
return result
