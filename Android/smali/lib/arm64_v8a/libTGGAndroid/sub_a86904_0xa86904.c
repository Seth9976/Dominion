// 函数: sub_a86904
// 地址: 0xa86904
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x1673988, 0, 0xf000)
int128_t v0 = data_71d220
data_16739a0 = 0x48
data_16739a8 = 0xffffffff
data_16739e0 = "courtyard"
data_16739e8 = 0x14
data_16739f0 = TEXTURE_CARD_GEN_INTRIGUE_COURTYARD
data_16739f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_COURTYARD
data_1673990 = v0
data_1673a18 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("i_Courtyard")

if (x0 == 0)
    (*data_1673a18)(&data_1673a18, "i_Courtyard")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1673a18
    *UI2StateDeclI_counter = x10_1 + 1
    data_1673a20 = x11_1
else
    (*data_1673a18)(&data_1673a18, *(x0 + 0x10))

data_1673a30 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("i_Courtyard")

if (x0_1 == 0)
    (*data_1673a30)(&data_1673a30, "i_Courtyard")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1673a30
    *UI2StateDeclI_counter = x10_3 + 1
    data_1673a38 = x11_2
else
    (*data_1673a30)(&data_1673a30, *(x0_1 + 0x10))

int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
data_1673a50 = 4
data_1673a58 = Courtyard
data_1673a68 = zx.o(0)
data_1673a68.d = 0x12
data_1673a68:0xc.d = 0xa
__builtin_memset(&data_1673a78, 0, 0xb0)
v0_1 = data_71d200
data_1673a78:8 = Courtyard_Achievement_OnCards
data_1673a48 = 0x200000300
__builtin_memcpy(&data_1674108, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"02\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_1674128 = 0xffffffff
data_1674160 = "lurker"
int128_t var_60 = v0_1
data_1674168 = 0x2a
data_1674170 = TEXTURE_CARD_GEN_INTRIGUE_LURKER
data_1674178 = SOUND_SOUND_CARDS_FX_LANDPLAY_LURKER
data_1674180 = SOUND_SOUND_CARDS_UI_POPUP_REVEAL_TRASH_LURKER
data_1674198 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("i_Lurker")

if (x0_2 == 0)
    (*data_1674198)(&data_1674198, "i_Lurker")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1674198
    *UI2StateDeclI_counter = x10_5 + 1
    data_16741a0 = x11_3
else
    (*data_1674198)(&data_1674198, *(x0_2 + 0x10))

data_16741b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("i_Lurker")

if (x0_3 == 0)
    (*data_16741b0)(&data_16741b0, "i_Lurker")
    uint32_t x10_7 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16741b0
    *UI2StateDeclI_counter = x10_7 + 1
    data_16741b8 = x11_4
else
    (*data_16741b0)(&data_16741b0, *(x0_3 + 0x10))

int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
data_16741d0 = 4
data_16741d8 = Lurker
data_16741e8 = zx.o(0)
data_16741e8.d = 0x12
data_16741e8:0xc.d = 5
__builtin_memset(&data_16741f8, 0, 0xb0)
v0_2 = data_71c2d0
data_16741f8:8 = Lurker_Achievement_OnGain
data_16741c8 = 0x200000301
__builtin_memcpy(&data_1674888, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"2b\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16748a8 = 0xffffffff
data_16748e0 = "pawn"
data_16748e8 = 0xf
data_16748f0 = TEXTURE_CARD_GEN_INTRIGUE_PAWN
data_1674918 = _vtable_for_UI2StateDecl + 0x10
data_16748f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_PAWN
void* x0_4 = UI2StateDeclTryLookup("i_Pawn")

if (x0_4 == 0)
    (*data_1674918)(&data_1674918, "i_Pawn")
    uint32_t x10_10 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1674918
    *UI2StateDeclI_counter = x10_10 + 1
    data_1674920 = x11_5
else
    (*data_1674918)(&data_1674918, *(x0_4 + 0x10))

data_1674930 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("i_Pawn")

if (x0_5 == 0)
    (*data_1674930)(&data_1674930, "i_Pawn")
    uint32_t x10_12 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1674930
    *UI2StateDeclI_counter = x10_12 + 1
    data_1674938 = x11_6
else
    (*data_1674930)(&data_1674930, *(x0_5 + 0x10))

__builtin_memset(&data_1674968, 0, 0xc0)
data_1674950 = 4
data_1674958 = Pawn
data_1674968 = 0x12
data_1674974 = 0x10
data_1674948 = 0x200000302
data_1674978:8 = Pawn_Achievement_OnOption
__builtin_memcpy(&data_1675008, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"10\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1675028 = 0xffffffff
data_1675060 = "masquerade"
data_1675068 = 0xf
data_1675070 = TEXTURE_CARD_GEN_INTRIGUE_MASQUERADE
data_1675078 = SOUND_SOUND_CARDS_FX_LANDPLAY_MASQUERADE
data_1675080 = SOUND_SOUND_CARDS_FX_PROMPT_MASQUERADE
data_1675098 = _vtable_for_UI2StateDecl + 0x10
void* x0_6 = UI2StateDeclTryLookup("i_Masquerade")

if (x0_6 == 0)
    (*data_1675098)(&data_1675098, "i_Masquerade")
    uint32_t x10_14 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1675098
    *UI2StateDeclI_counter = x10_14 + 1
    data_16750a0 = x11_7
else
    (*data_1675098)(&data_1675098, *(x0_6 + 0x10))

data_16750b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("i_Masquerade")

if (x0_7 == 0)
    (*data_16750b0)(&data_16750b0, "i_Masquerade")
    uint32_t x10_16 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16750b0
    *UI2StateDeclI_counter = x10_16 + 1
    data_16750b8 = x11_8
else
    (*data_16750b0)(&data_16750b0, *(x0_7 + 0x10))

__builtin_memset(&data_16750e8, 0, 0xc0)
data_16750d0 = 4
data_16750d8 = Masquerade
data_16750e8 = 0x12
data_16750f4 = 0xa
data_16750f8:8 = Masquerade_Achievement_OnReceive
__builtin_memcpy(&data_1675788, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"14\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16750c8 = 0x300000303
data_16757a8 = 0xffffffff
data_16757e0 = "shanty_town"
data_16757e8 = 0x2e
data_16757f0 = TEXTURE_CARD_GEN_INTRIGUE_SHANTY_TOWN
data_1675818 = _vtable_for_UI2StateDecl + 0x10
data_16757f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SHANTY_TOWN
void* x0_8 = UI2StateDeclTryLookup("i_Shanty_Town")

if (x0_8 == 0)
    (*data_1675818)(&data_1675818, "i_Shanty_Town")
    uint32_t x10_19 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1675818
    *UI2StateDeclI_counter = x10_19 + 1
    data_1675820 = x11_9
else
    (*data_1675818)(&data_1675818, *(x0_8 + 0x10))

data_1675830 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("i_Shanty_Town")
int128_t v0_3
int128_t v2
int128_t v4

if (x0_9 == 0)
    v0_3, v2, v4 = (*data_1675830)(&data_1675830, "i_Shanty_Town")
    uint32_t x10_21 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1675830
    *UI2StateDeclI_counter = x10_21 + 1
    data_1675838 = x11_10
else
    v0_3, v2, v4 = (*data_1675830)(&data_1675830, *(x0_9 + 0x10))
v0_3.q = 0
v0_3:8.q = 0
data_1675850 = 4
data_1675858 = ShantyTown
data_1675868 = zx.o(0)
data_1675868.d = 0x12
data_1675868:0xc.d = 8
__builtin_memset(&data_1675878, 0, 0xb0)
v0_3 = data_113ecf0
v2 = data_113ed00
data_1675848 = 0x300000304
data_1675eb8 = v2
data_1675ea8 = v0_3
data_1675878:8 = ShantyTown_Achievement_OnDraw
__builtin_memcpy(&data_1675f08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"11\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memset(&data_1675ec8, 0, 0x40)
data_1675f28 = 0xffffffff
data_1675f60 = "steward"
data_1675f68 = 0x2d
data_1675f70 = TEXTURE_CARD_GEN_INTRIGUE_STEWARD
data_1675f98 = _vtable_for_UI2StateDecl + 0x10
data_1675f78 = SOUND_SOUND_CARDS_FX_LANDPLAY_STEWARD
void* x0_10 = UI2StateDeclTryLookup("i_Steward")

if (x0_10 == 0)
    (*data_1675f98)(&data_1675f98, "i_Steward")
    uint32_t x10_24 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1675f98
    *UI2StateDeclI_counter = x10_24 + 1
    data_1675fa0 = x11_11
else
    (*data_1675f98)(&data_1675f98, *(x0_10 + 0x10))

data_1675fb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("i_Steward")

if (x0_11 == 0)
    (*data_1675fb0)(&data_1675fb0, "i_Steward")
    uint32_t x10_26 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1675fb0
    *UI2StateDeclI_counter = x10_26 + 1
    data_1675fb8 = x11_12
else
    (*data_1675fb0)(&data_1675fb0, *(x0_11 + 0x10))

__builtin_memset(&data_1675fe8, 0, 0xc0)
data_1675fd0 = 4
data_1675fd8 = Steward
data_1675fe8 = 0x12
data_1675ff4 = 0x10
data_1675ff8:8 = Steward_Achievement_OnOption
__builtin_memcpy(&data_1676688, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x0a\x00\x00\x00\x00", 
    0x20)
data_1675fc8 = 0x300000305
data_16766a8 = 0xffffffff
data_16766e0 = "swindler"
data_16766e8 = 4
data_16766f0 = TEXTURE_CARD_GEN_INTRIGUE_SWINDLER
data_16766f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SWINDLER
data_1676718 = _vtable_for_UI2StateDecl + 0x10
void* x0_12 = UI2StateDeclTryLookup("i_Swindler")

if (x0_12 == 0)
    (*data_1676718)(&data_1676718, "i_Swindler")
    uint32_t x10_28 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1676718
    *UI2StateDeclI_counter = x10_28 + 1
    data_1676720 = x11_13
else
    (*data_1676718)(&data_1676718, *(x0_12 + 0x10))

data_1676730 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("i_Swindler")

if (x0_13 == 0)
    (*data_1676730)(&data_1676730, "i_Swindler")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1676730
    *UI2StateDeclI_counter = x10_30 + 1
    data_1676738 = x11_14
else
    (*data_1676730)(&data_1676730, *(x0_13 + 0x10))

__builtin_memset(&data_1676768, 0, 0xc0)
data_1676750 = 0x24
data_1676758 = Swindler
data_1676768 = 0x12
data_1676774 = 0xe
data_1676748 = 0x300000306
data_1676778:8 = Swindler_Achievement_OnTrash
__builtin_memcpy(&data_1676e08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1676e28 = 0xffffffff
data_1676e60 = "wishing_well"
data_1676e68 = 0x37
data_1676e70 = TEXTURE_CARD_GEN_INTRIGUE_WISHING_WELL
data_1676e98 = _vtable_for_UI2StateDecl + 0x10
data_1676e78 = SOUND_SOUND_CARDS_FX_LANDPLAY_WISHING_WELL
void* x0_14 = UI2StateDeclTryLookup("i_Wishing_Well")

if (x0_14 == 0)
    (*data_1676e98)(&data_1676e98, "i_Wishing_Well")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1676e98
    *UI2StateDeclI_counter = x10_33 + 1
    data_1676ea0 = x11_15
else
    (*data_1676e98)(&data_1676e98, *(x0_14 + 0x10))

data_1676eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("i_Wishing_Well")

if (x0_15 == 0)
    (*data_1676eb0)(&data_1676eb0, "i_Wishing_Well")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1676eb0
    *UI2StateDeclI_counter = x10_35 + 1
    data_1676eb8 = x11_16
else
    (*data_1676eb0)(&data_1676eb0, *(x0_15 + 0x10))

__builtin_memset(&data_1676ee8, 0, 0xc0)
data_1676ed0 = 4
data_1676ed8 = WishingWell
data_1676ee8 = 0x12
data_1676ef4 = 0xa
data_1676ef8:8 = WishingWell_Achievement_OnResult
__builtin_memcpy(&data_1677588, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_1676ec8 = 0x300000307
data_16775a8 = 0xffffffff
data_16775e0 = "baron"
data_16775e8 = 0x37
data_16775f0 = TEXTURE_CARD_GEN_INTRIGUE_BARON
data_1677618 = _vtable_for_UI2StateDecl + 0x10
data_16775f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_BARON
void* x0_16 = UI2StateDeclTryLookup("i_Baron")

if (x0_16 == 0)
    (*data_1677618)(&data_1677618, "i_Baron")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1677618
    *UI2StateDeclI_counter = x10_38 + 1
    data_1677620 = x11_17
else
    (*data_1677618)(&data_1677618, *(x0_16 + 0x10))

data_1677630 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("i_Baron")

if (x0_17 == 0)
    (*data_1677630)(&data_1677630, "i_Baron")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1677630
    *UI2StateDeclI_counter = x10_40 + 1
    data_1677638 = x11_18
else
    (*data_1677630)(&data_1677630, *(x0_17 + 0x10))

int128_t v0_4
v0_4.q = 0
v0_4:8.q = 0
__builtin_memset(&data_1677668, 0, 0xc0)
v0_4.q = 0x400000308
data_1677650 = 4
data_1677658 = Baron
data_1677668 = 0x12
data_1677674 = 5
data_1677648 = 0x400000308
data_1677678:8 = Baron_Achievement_OnGain
__builtin_memcpy(&data_1677d08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1677d28 = 0xffffffff
data_1677d60 = "bridge"
data_1677d68 = 0x14
data_1677d70 = TEXTURE_CARD_GEN_INTRIGUE_BRIDGE
data_1677d98 = _vtable_for_UI2StateDecl + 0x10
data_1677d78 = SOUND_SOUND_CARDS_FX_LANDPLAY_BRIDGE
void* x0_18 = UI2StateDeclTryLookup("i_Bridge")

if (x0_18 == 0)
    (*data_1677d98)(&data_1677d98, "i_Bridge")
    uint32_t x10_43 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1677d98
    *UI2StateDeclI_counter = x10_43 + 1
    data_1677da0 = x11_19
else
    (*data_1677d98)(&data_1677d98, *(x0_18 + 0x10))

data_1677db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("i_Bridge")

if (x0_19 == 0)
    (*data_1677db0)(&data_1677db0, "i_Bridge")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1677db0
    *UI2StateDeclI_counter = x10_45 + 1
    data_1677db8 = x11_20
else
    (*data_1677db0)(&data_1677db0, *(x0_19 + 0x10))

__builtin_memset(&data_1677de8, 0, 0xc0)
data_1677dd0 = 4
data_1677dd8 = Bridge
data_1677de8 = 0x12
data_1677df4 = 0xc
data_1677dc8 = 0x400000309
data_1677df8:8 = Bridge_Achievement_OnPlay
__builtin_memcpy(&data_1678488, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"0b\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16784a8 = 0xffffffff
data_16784e0 = "conspirator"
data_16784e8 = 0x2d
data_16784f0 = TEXTURE_CARD_GEN_INTRIGUE_CONSPIRATOR
data_1678518 = _vtable_for_UI2StateDecl + 0x10
data_16784f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CONSPIRATOR
void* x0_20 = UI2StateDeclTryLookup("i_Conspirator")

if (x0_20 == 0)
    (*data_1678518)(&data_1678518, "i_Conspirator")
    uint32_t x10_48 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1678518
    *UI2StateDeclI_counter = x10_48 + 1
    data_1678520 = x11_21
else
    (*data_1678518)(&data_1678518, *(x0_20 + 0x10))

data_1678530 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("i_Conspirator")
int128_t v0_5
int128_t v2_1
int128_t v4_1

if (x0_21 == 0)
    v0_5, v2_1, v4_1 = (*data_1678530)(&data_1678530, "i_Conspirator")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1678530
    *UI2StateDeclI_counter = x10_50 + 1
    data_1678538 = x11_22
else
    v0_5, v2_1, v4_1 = (*data_1678530)(&data_1678530, *(x0_21 + 0x10))
v0_5.q = 0
v0_5:8.q = 0
data_1678550 = 4
data_1678558 = Conspirator
data_1678568 = zx.o(0)
data_1678568.d = 0x12
data_1678568:0xc.d = 0xa
__builtin_memset(&data_1678578, 0, 0xb0)
v0_5 = data_113ed50
v2_1 = data_113ed60
data_1678548 = 0x40000030a
data_1678bb8 = v2_1
data_1678ba8 = v0_5
data_1678578:8 = Conspirator_Achievement_OnBonus
__builtin_memcpy(&data_1678c08, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"14\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memset(&data_1678bc8, 0, 0x40)
data_1678c28 = 0xffffffff
data_1678c60 = "diplomat"
data_1678c68 = 0x25
data_1678c70 = TEXTURE_CARD_GEN_INTRIGUE_DIPLOMAT
data_1678c78 = SOUND_SOUND_CARDS_FX_LANDPLAY_DIPLOMAT
data_1678c80 = SOUND_SOUND_CARDS_FX_REACTION_DIPLOMAT
data_1678c98 = _vtable_for_UI2StateDecl + 0x10
void* x0_22 = UI2StateDeclTryLookup("i_Diplomat")

if (x0_22 == 0)
    (*data_1678c98)(&data_1678c98, "i_Diplomat")
    uint32_t x10_52 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1678c98
    *UI2StateDeclI_counter = x10_52 + 1
    data_1678ca0 = x11_23
else
    (*data_1678c98)(&data_1678c98, *(x0_22 + 0x10))

data_1678cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("i_Diplomat")
int128_t v0_6
int128_t v1_6
int128_t v2_2

if (x0_23 == 0)
    v0_6, v1_6, v2_2 = (*data_1678cb0)(&data_1678cb0, "i_Diplomat")
    uint32_t x10_54 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1678cb0
    *UI2StateDeclI_counter = x10_54 + 1
    data_1678cb8 = x11_24
else
    v0_6, v1_6, v2_2 = (*data_1678cb0)(&data_1678cb0, *(x0_23 + 0x10))

v1_6.q = 0x40000030b
data_1678cd0 = 0x44
data_1678cd8 = Diplomat
v0_6.q = 0
v0_6:8.q = 0
data_1678cc8 = 0x40000030b
__builtin_memset(&data_1678ce8, 0, 0xc0)
data_1678ce8 = 0x12
data_1678cf4 = 3
__builtin_memset(&data_1678db0, 0, 0x20)
data_1678cf8:8 = Diplomat_Achievement_Reaction
__builtin_memset(&data_1678dd0, 0, 0x98)
data_1678da8 = 6
data_1678db0:4.d = 5
data_1678dc0 = Diplomat_Reaction
v0_6.d = 1
v0_6:4.d = 1
v1_6 = data_113edb0
v2_2 = data_113edc0
data_1678e5c = 0x100000001
data_113edf0
data_1679338 = v2_2
data_1679328 = v1_6
__builtin_memset(&data_1679368, 0, 0x20)
data_1678e50 = Diplomat_Reaction_Test
data_16792e8 = 1
__builtin_memset(&data_1679348, 0, 0x20)
__builtin_memcpy(&data_1679388, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"02\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16793a8 = 0xffffffff
data_16793e0 = "ironworks"
data_16793e8 = 0x2a
data_16793f0 = TEXTURE_CARD_GEN_INTRIGUE_IRONWORKS
data_1679418 = _vtable_for_UI2StateDecl + 0x10
data_16793f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_IRONWORKS
void* x0_24 = UI2StateDeclTryLookup("i_Ironworks")

if (x0_24 == 0)
    (*data_1679418)(&data_1679418, "i_Ironworks")
    uint32_t x10_56 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1679418
    *UI2StateDeclI_counter = x10_56 + 1
    data_1679420 = x11_25
else
    (*data_1679418)(&data_1679418, *(x0_24 + 0x10))

data_1679430 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("i_Ironworks")

if (x0_25 == 0)
    (*data_1679430)(&data_1679430, "i_Ironworks")
    uint32_t x10_58 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1679430
    *UI2StateDeclI_counter = x10_58 + 1
    data_1679438 = x11_26
else
    (*data_1679430)(&data_1679430, *(x0_25 + 0x10))

int128_t v0_7
v0_7.q = 0
v0_7:8.q = 0
__builtin_memset(&data_1679468, 0, 0xc0)
v0_7.q = 0x40000030c
data_1679450 = 4
data_1679458 = Ironworks
data_1679468 = 0x12
data_1679474 = 5
data_1679448 = 0x40000030c
data_1679478:8 = Ironworks_Achievement_OnGain
__builtin_memcpy(&data_1679b08, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"4b\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1679b28 = 0xffffffff
data_1679b60 = "mill"
data_1679b68 = 0x27
data_1679b70 = TEXTURE_CARD_GEN_INTRIGUE_MILL
data_1679b98 = _vtable_for_UI2StateDecl + 0x10
data_1679b78 = SOUND_SOUND_CARDS_FX_LANDPLAY_MILL
void* x0_26 = UI2StateDeclTryLookup("i_Mill")

if (x0_26 == 0)
    (*data_1679b98)(&data_1679b98, "i_Mill")
    uint32_t x10_61 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1679b98
    *UI2StateDeclI_counter = x10_61 + 1
    data_1679ba0 = x11_27
else
    (*data_1679b98)(&data_1679b98, *(x0_26 + 0x10))

data_1679bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("i_Mill")

if (x0_27 == 0)
    (*data_1679bb0)(&data_1679bb0, "i_Mill")
    uint32_t x10_63 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1679bb0
    *UI2StateDeclI_counter = x10_63 + 1
    data_1679bb8 = x11_28
else
    (*data_1679bb0)(&data_1679bb0, *(x0_27 + 0x10))

__builtin_memset(&data_1679be8, 0, 0xc0)
data_1679bd0 = 0xc
data_1679bd8 = Mill
data_1679be0 = Mill_VP
data_1679be8 = 0x12
data_1679bf4 = 1
data_1679bc8 = 0x40000030d
data_1679bf8:8 = Mill_Achievement_OnDiscard
__builtin_memcpy(&data_167a288, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00\x"
"0d\x80\x00\x00\x00\x00\x00\x00", 
    0x20)
data_167a2a8 = 0xffffffff
data_167a2e0 = "mining_village"
data_167a2e8 = 8
data_167a2f0 = TEXTURE_CARD_GEN_INTRIGUE_MINING_VILLAGE
data_167a318 = _vtable_for_UI2StateDecl + 0x10
data_167a2f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_MINING_VILLAGE
void* x0_28 = UI2StateDeclTryLookup("i_Mining_Village")

if (x0_28 == 0)
    (*data_167a318)(&data_167a318, "i_Mining_Village")
    uint32_t x10_66 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167a318
    *UI2StateDeclI_counter = x10_66 + 1
    data_167a320 = x11_29
else
    (*data_167a318)(&data_167a318, *(x0_28 + 0x10))

data_167a330 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("i_Mining_Village")

if (x0_29 == 0)
    (*data_167a330)(&data_167a330, "i_Mining_Village")
    uint32_t x10_68 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167a330
    *UI2StateDeclI_counter = x10_68 + 1
    data_167a338 = x11_30
else
    (*data_167a330)(&data_167a330, *(x0_29 + 0x10))

__builtin_memset(&data_167a368, 0, 0x180)
data_167a350 = 4
data_167a358 = MiningVillage
data_167a378:8 = MiningVillage_Achievement_OnAnyGain
data_167a368 = 0x12
data_167a374 = 0x12
data_167a428 = 0x12
data_167a434 = 2
data_167a438:8 = MiningVillage_Achievement_OnTrash
__builtin_memcpy(&data_167aa08, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"12\x01\x00\x00\x00\x00\x00\x00", 
    0x20)
data_167a348 = 0x40000030e
data_167aa28 = 0xffffffff
data_167aa60 = "secret_passage"
data_167aa68 = 0x27
data_167aa70 = TEXTURE_CARD_GEN_INTRIGUE_SECRET_PASSAGE
data_167aa98 = _vtable_for_UI2StateDecl + 0x10
data_167aa78 = SOUND_SOUND_CARDS_FX_LANDPLAY_SECRET_PASSAGE
void* x0_30 = UI2StateDeclTryLookup("i_Secret_Passage")

if (x0_30 == 0)
    (*data_167aa98)(&data_167aa98, "i_Secret_Passage")
    uint32_t x10_71 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167aa98
    *UI2StateDeclI_counter = x10_71 + 1
    data_167aaa0 = x11_31
else
    (*data_167aa98)(&data_167aa98, *(x0_30 + 0x10))

data_167aab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("i_Secret_Passage")

if (x0_31 == 0)
    (*data_167aab0)(&data_167aab0, "i_Secret_Passage")
    uint32_t x10_73 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167aab0
    *UI2StateDeclI_counter = x10_73 + 1
    data_167aab8 = x11_32
else
    (*data_167aab0)(&data_167aab0, *(x0_31 + 0x10))

int128_t v0_8
v0_8.q = 0
v0_8:8.q = 0
__builtin_memset(&data_167aae8, 0, 0xc0)
v0_8.q = 0x40000030f
data_167aad0 = 4
data_167aad8 = SecretPassage
data_167aae8 = 0x12
data_167aaf4 = 0xa
data_167aac8 = 0x40000030f
data_167aaf8:8 = SecretPassage_Achievement_OnEvent
__builtin_memcpy(&data_167b188, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"23\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_167b1a8 = 0xffffffff
data_167b1e0 = "courtier"
data_167b1e8 = 8
data_167b1f0 = TEXTURE_CARD_GEN_INTRIGUE_COURTIER
data_167b1f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_COURTIER
data_167b218 = _vtable_for_UI2StateDecl + 0x10
void* x0_32 = UI2StateDeclTryLookup("i_Courtier")

if (x0_32 == 0)
    (*data_167b218)(&data_167b218, "i_Courtier")
    uint32_t x10_75 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167b218
    *UI2StateDeclI_counter = x10_75 + 1
    data_167b220 = x11_33
else
    (*data_167b218)(&data_167b218, *(x0_32 + 0x10))

data_167b230 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("i_Courtier")

if (x0_33 == 0)
    (*data_167b230)(&data_167b230, "i_Courtier")
    uint32_t x10_77 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167b230
    *UI2StateDeclI_counter = x10_77 + 1
    data_167b238 = x11_34
else
    (*data_167b230)(&data_167b230, *(x0_33 + 0x10))

__builtin_memset(&data_167b268, 0, 0xc0)
data_167b250 = 4
data_167b258 = Courtier
data_167b278:8 = Courtier_Achievement_OnReveal
data_167b268 = 0x12
data_167b274 = 7
__builtin_memcpy(&data_167b908, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_167b248 = 0x500000310
data_167b960 = "duke"
data_167b968 = 7
data_167b970 = TEXTURE_CARD_GEN_INTRIGUE_DUKE
data_167b998 = _vtable_for_UI2StateDecl + 0x10
void* x0_34 = UI2StateDeclTryLookup("i_Duke")

if (x0_34 == 0)
    (*data_167b998)(&data_167b998, "i_Duke")
    uint32_t x10_79 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167b998
    *UI2StateDeclI_counter = x10_79 + 1
    data_167b9a0 = x11_35
else
    (*data_167b998)(&data_167b998, *(x0_34 + 0x10))

data_167b9b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("i_Duke")
int128_t v1_10
int128_t v2_3
int128_t v4_2

if (x0_35 == 0)
    v1_10, v2_3, v4_2 = (*data_167b9b0)(&data_167b9b0, "i_Duke")
    uint32_t x10_81 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167b9b0
    *UI2StateDeclI_counter = x10_81 + 1
    data_167b9b8 = x11_36
else
    v1_10, v2_3, v4_2 = (*data_167b9b0)(&data_167b9b0, *(x0_35 + 0x10))
v1_10.q = 0
v1_10:8.q = 0
data_167b9d0 = 8
data_167b9e0 = Duke_VP
data_167b9e8 = zx.o(0)
data_167b9e8.d = 0x13
data_167b9e8:0xc.d = 0x15
__builtin_memset(&data_167b9f8, 0, 0xb0)
v1_10 = data_7e57a8
v2_3 = data_7e57b8
data_167b9c8 = 0x500000311
data_167c038 = v2_3
data_167c028 = v1_10
data_167b9f8:8 = Duke_Achievement_GameEnd
__builtin_memcpy(&data_167c088, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"51\x00\x80\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memset(&data_167c048, 0, 0x40)
data_167c0a8 = 0xffffffff
data_167c0e0 = "minion"
data_167c0e8 = 7
data_167c0f0 = TEXTURE_CARD_GEN_INTRIGUE_MINION
data_167c118 = _vtable_for_UI2StateDecl + 0x10
data_167c0f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_MINION
void* x0_36 = UI2StateDeclTryLookup("i_Minion")

if (x0_36 == 0)
    (*data_167c118)(&data_167c118, "i_Minion")
    uint32_t x10_84 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167c118
    *UI2StateDeclI_counter = x10_84 + 1
    data_167c120 = x11_37
else
    (*data_167c118)(&data_167c118, *(x0_36 + 0x10))

data_167c130 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("i_Minion")

if (x0_37 == 0)
    (*data_167c130)(&data_167c130, "i_Minion")
    uint32_t x10_86 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167c130
    *UI2StateDeclI_counter = x10_86 + 1
    data_167c138 = x11_38
else
    (*data_167c130)(&data_167c130, *(x0_37 + 0x10))

__builtin_memset(&data_167c168, 0, 0xc0)
data_167c150 = 0x24
data_167c158 = Minion
data_167c168 = 0x12
data_167c174 = 0xa
data_167c178:8 = Minion_Achievement_OnResult
__builtin_memcpy(&data_167c808, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_167c148 = 0x500000312
data_167c828 = 0xffffffff
data_167c860 = "patrol"
data_167c868 = 0x14
data_167c870 = TEXTURE_CARD_GEN_INTRIGUE_PATROL
data_167c898 = _vtable_for_UI2StateDecl + 0x10
data_167c878 = SOUND_SOUND_CARDS_FX_LANDPLAY_PATROL
void* x0_38 = UI2StateDeclTryLookup("i_Patrol")

if (x0_38 == 0)
    (*data_167c898)(&data_167c898, "i_Patrol")
    uint32_t x10_89 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167c898
    *UI2StateDeclI_counter = x10_89 + 1
    data_167c8a0 = x11_39
else
    (*data_167c898)(&data_167c898, *(x0_38 + 0x10))

data_167c8b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("i_Patrol")

if (x0_39 == 0)
    (*data_167c8b0)(&data_167c8b0, "i_Patrol")
    uint32_t x10_91 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167c8b0
    *UI2StateDeclI_counter = x10_91 + 1
    data_167c8b8 = x11_40
else
    (*data_167c8b0)(&data_167c8b0, *(x0_39 + 0x10))

__builtin_memset(&data_167c8e8, 0, 0xc0)
data_167c8d0 = 4
data_167c8d8 = Patrol
data_167c8e8 = 0x12
data_167c8f4 = 0xa
data_167c8f8:8 = Patrol_Achievement_OnResult
__builtin_memcpy(&data_167cf88, 
    "\x02\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x01\x20\x00\x00\x00\x00", 
    0x20)
data_167c8c8 = 0x500000313
data_167cfa8 = 0xffffffff
data_167cfe0 = "replace"
data_167cfe8 = 8
data_167cff0 = TEXTURE_CARD_GEN_INTRIGUE_REPLACE
data_167d018 = _vtable_for_UI2StateDecl + 0x10
data_167cff8 = SOUND_SOUND_CARDS_FX_LANDPLAY_REPLACE
void* x0_40 = UI2StateDeclTryLookup("i_Replace")

if (x0_40 == 0)
    (*data_167d018)(&data_167d018, "i_Replace")
    uint32_t x10_94 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167d018
    *UI2StateDeclI_counter = x10_94 + 1
    data_167d020 = x11_41
else
    (*data_167d018)(&data_167d018, *(x0_40 + 0x10))

data_167d030 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("i_Replace")
int128_t v0_9
int128_t v4_3

if (x0_41 == 0)
    v0_9, v4_3 = (*data_167d030)(&data_167d030, "i_Replace")
    uint32_t x10_96 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167d030
    *UI2StateDeclI_counter = x10_96 + 1
    data_167d038 = x11_42
else
    v0_9, v4_3 = (*data_167d030)(&data_167d030, *(x0_41 + 0x10))
v0_9.q = 0
v0_9:8.q = 0
data_167d050 = 0x24
data_167d058 = Replace
data_167d068 = zx.o(0)
data_167d068.d = 0x12
data_167d068:0xc.d = 5
__builtin_memset(&data_167d078, 0, 0xb0)
v0_9 = data_113ee10
data_167d048 = 0x500000314
data_167d078:8 = Replace_Achievement_OnGain
__builtin_memset(&data_167d6b8, 0, 0x50)
data_167d6a8 = v0_9
__builtin_memcpy(&data_167d708, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x80\x20\x00\x00\x00\x00", 
    0x20)
data_167d728 = 0xffffffff
data_167d760 = "torturer"
data_167d768 = 0xf
data_167d770 = TEXTURE_CARD_GEN_INTRIGUE_TORTURER
data_167d798 = _vtable_for_UI2StateDecl + 0x10
data_167d778 = SOUND_SOUND_CARDS_FX_LANDPLAY_TORTURER
void* x0_42 = UI2StateDeclTryLookup("i_Torturer")

if (x0_42 == 0)
    (*data_167d798)(&data_167d798, "i_Torturer")
    uint32_t x10_99 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167d798
    *UI2StateDeclI_counter = x10_99 + 1
    data_167d7a0 = x11_43
else
    (*data_167d798)(&data_167d798, *(x0_42 + 0x10))

data_167d7b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("i_Torturer")
int128_t v0_10
int128_t v4_4

if (x0_43 == 0)
    v0_10, v4_4 = (*data_167d7b0)(&data_167d7b0, "i_Torturer")
    uint32_t x10_101 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167d7b0
    *UI2StateDeclI_counter = x10_101 + 1
    data_167d7b8 = x11_44
else
    v0_10, v4_4 = (*data_167d7b0)(&data_167d7b0, *(x0_43 + 0x10))
v0_10.q = 0
v0_10:8.q = 0
data_167d7d0 = 0x24
data_167d7d8 = Torturer
data_167d7e8 = zx.o(0)
data_167d7e8.d = 0x12
data_167d7e8:0xc.d = 0xd
__builtin_memset(&data_167d7f8, 0, 0xb0)
v0_10 = data_113ee70
data_167d7c8 = 0x500000315
data_167d7f8:8 = Torturer_Achievement_OnOppDiscard
__builtin_memset(&data_167de38, 0, 0x50)
data_167de28 = v0_10
__builtin_memcpy(&data_167de88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x01\x00\x00\x00\x00\x00", 
    0x20)
data_167dea8 = 0xffffffff
data_167dee0 = "trading_post"
data_167dee8 = 0x2a
data_167def0 = TEXTURE_CARD_GEN_INTRIGUE_TRADING_POST
data_167df18 = _vtable_for_UI2StateDecl + 0x10
data_167def8 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRADING_POST
void* x0_44 = UI2StateDeclTryLookup("i_Trading_Post")

if (x0_44 == 0)
    (*data_167df18)(&data_167df18, "i_Trading_Post")
    uint32_t x10_104 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167df18
    *UI2StateDeclI_counter = x10_104 + 1
    data_167df20 = x11_45
else
    (*data_167df18)(&data_167df18, *(x0_44 + 0x10))

data_167df30 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("i_Trading_Post")

if (x0_45 == 0)
    (*data_167df30)(&data_167df30, "i_Trading_Post")
    uint32_t x10_106 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167df30
    *UI2StateDeclI_counter = x10_106 + 1
    data_167df38 = x11_46
else
    (*data_167df30)(&data_167df30, *(x0_45 + 0x10))

__builtin_memset(&data_167df68, 0, 0xc0)
data_167df50 = 4
data_167df58 = TradingPost
data_167df68 = 0x12
data_167df74 = 2
data_167e618 = 0x14
data_167df78:8 = TradingPost_Achievement_OnTrash
data_167e608 = v0_2
data_167df48 = 0x500000316
data_167e620 = 0x1200a
data_167e628 = 0xffffffff
data_167e660 = "upgrade"
data_167e668 = 0x2d
data_167e670 = TEXTURE_CARD_GEN_INTRIGUE_UPGRADE
data_167e678 = SOUND_SOUND_CARDS_FX_LANDPLAY_UPGRADE
data_167e680 = SOUND_SOUND_CARDS_FX_RESULT_REMODEL
data_167e698 = _vtable_for_UI2StateDecl + 0x10
void* x0_46 = UI2StateDeclTryLookup("i_Upgrade")

if (x0_46 == 0)
    (*data_167e698)(&data_167e698, "i_Upgrade")
    uint32_t x10_108 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167e698
    *UI2StateDeclI_counter = x10_108 + 1
    data_167e6a0 = x11_47
else
    (*data_167e698)(&data_167e698, *(x0_46 + 0x10))

data_167e6b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("i_Upgrade")

if (x0_47 == 0)
    (*data_167e6b0)(&data_167e6b0, "i_Upgrade")
    uint32_t x10_110 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167e6b0
    *UI2StateDeclI_counter = x10_110 + 1
    data_167e6b8 = x11_48
else
    (*data_167e6b0)(&data_167e6b0, *(x0_47 + 0x10))

__builtin_memset(&data_167e6e8, 0, 0xc0)
data_167e6d0 = 4
data_167e6d8 = Upgrade
data_167e6e8 = 0x12
data_167e6f4 = 5
data_167e6f8:8 = Upgrade_Achievement_OnGain
__builtin_memcpy(&data_167ed88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_167e6c8 = 0x500000317
data_167eda8 = 0xffffffff
data_167ede0 = "farm"
data_167ede8 = 8
data_167edf0 = TEXTURE_CARD_GEN_INTRIGUE_FARM
data_167ee18 = _vtable_for_UI2StateDecl + 0x10
data_167edf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_FARM
void* x0_48 = UI2StateDeclTryLookup("i_Farm")

if (x0_48 == 0)
    (*data_167ee18)(&data_167ee18, "i_Farm")
    uint32_t x10_113 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167ee18
    *UI2StateDeclI_counter = x10_113 + 1
    data_167ee20 = x11_49
else
    (*data_167ee18)(&data_167ee18, *(x0_48 + 0x10))

data_167ee30 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("i_Farm")

if (x0_49 == 0)
    (*data_167ee30)(&data_167ee30, "i_Farm")
    uint32_t x10_115 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167ee30
    *UI2StateDeclI_counter = x10_115 + 1
    data_167ee38 = x11_50
else
    (*data_167ee30)(&data_167ee30, *(x0_49 + 0x10))

__builtin_memset(&data_167ee68, 0, 0xc0)
data_167ee50 = 0xa
data_167ee58 = Farm
data_167ee60 = Farm_VP
data_167ee68 = 0x13
data_167ee74 = 0x15
data_167ee78:8 = Farm_Achievement_GameEnd
__builtin_memcpy(&data_167f508, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"14\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_167ee48 = 0x600000318
data_167f528 = 0xffffffff
data_167f560 = "nobles"
data_167f568 = 0x27
data_167f570 = TEXTURE_CARD_GEN_INTRIGUE_NOBLES
data_167f598 = _vtable_for_UI2StateDecl + 0x10
data_167f578 = SOUND_SOUND_CARDS_FX_LANDPLAY_NOBLES
void* x0_50 = UI2StateDeclTryLookup("i_Nobles")

if (x0_50 == 0)
    (*data_167f598)(&data_167f598, "i_Nobles")
    uint32_t x10_118 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167f598
    *UI2StateDeclI_counter = x10_118 + 1
    data_167f5a0 = x11_51
else
    (*data_167f598)(&data_167f598, *(x0_50 + 0x10))

data_167f5b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("i_Nobles")

if (x0_51 == 0)
    (*data_167f5b0)(&data_167f5b0, "i_Nobles")
    uint32_t x10_120 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167f5b0
    *UI2StateDeclI_counter = x10_120 + 1
    data_167f5b8 = x11_52
else
    (*data_167f5b0)(&data_167f5b0, *(x0_51 + 0x10))

int128_t v0_11
v0_11.q = 0
v0_11:8.q = 0
__builtin_memset(&data_167f5e8, 0, 0xc0)
v0_11.q = 0x600000319
data_167f5d0 = 0xc
data_167f5d8 = Nobles
data_167f5e0 = Nobles_VP
data_167f5e8 = 0x13
data_167f5f4 = 0x15
data_167f5c8 = 0x600000319
v0_11 = data_71c0e0
data_167f5f8:8 = Nobles_Achievement_GameEnd
data_167fc98 = 0
data_167fc88 = v0_11
data_167fca0 = 0x41
data_167fc9c = 0
data_167fca8 = 0xffffffff
data_167fce0 = "secret_chamber"
data_167fce8 = 0x27
data_167fcf0 = TEXTURE_CARD_GEN_INTRIGUE_SECRET_CHAMBER
data_167fcf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SECRET_CHAMBER
data_167fd00 = SOUND_SOUND_CARDS_FX_REACTION_SECRET_CHAMBER
data_167fd18 = _vtable_for_UI2StateDecl + 0x10
void* x0_52 = UI2StateDeclTryLookup("i1_Secret_Chamber")

if (x0_52 == 0)
    (*data_167fd18)(&data_167fd18, "i1_Secret_Chamber")
    uint32_t x10_122 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167fd18
    *UI2StateDeclI_counter = x10_122 + 1
    data_167fd20 = x11_53
else
    (*data_167fd18)(&data_167fd18, *(x0_52 + 0x10))

data_167fd30 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("i1_Secret_Chamber")

if (x0_53 == 0)
    (*data_167fd30)(&data_167fd30, "i1_Secret_Chamber")
    uint32_t x10_124 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_167fd30
    *UI2StateDeclI_counter = x10_124 + 1
    data_167fd38 = x11_54
else
    (*data_167fd30)(&data_167fd30, *(x0_53 + 0x10))

__builtin_memset(&data_167fd70, 0, 0xb0)
data_167fd50 = 0x44
data_167fd58 = SecretChamber
int128_t v1_16
v1_16.d = 1
v1_16:4.d = 1
data_167fe1c:4 = 0
data_167fe1c = 0x100000001
data_167fd70:4.d = 5
data_167fd80 = SecretChamber_Reaction
data_1680368 = 1
data_167fd68 = 6
data_167fe10 = 0
data_1680408 = v0_11
data_1680418 = 0
data_167fd48 = 0x20000031a
data_1680420 = 0xa
data_168041c = 0
data_1680428 = 0xffffffff
data_1680460 = "great_hall"
data_1680468 = 0x1d
data_1680470 = TEXTURE_CARD_GEN_INTRIGUE_GREAT_HALL
data_1680498 = _vtable_for_UI2StateDecl + 0x10
data_1680478 = SOUND_SOUND_CARDS_FX_LANDPLAY_GREAT_HALL
void* x0_54 = UI2StateDeclTryLookup("i1_Great_Hall")

if (x0_54 == 0)
    (*data_1680498)(&data_1680498, "i1_Great_Hall")
    uint32_t x10_127 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1680498
    *UI2StateDeclI_counter = x10_127 + 1
    data_16804a0 = x11_55
else
    (*data_1680498)(&data_1680498, *(x0_54 + 0x10))

data_16804b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("i1_Great_Hall")

if (x0_55 == 0)
    (*data_16804b0)(&data_16804b0, "i1_Great_Hall")
    uint32_t x10_129 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16804b0
    *UI2StateDeclI_counter = x10_129 + 1
    data_16804b8 = x11_56
else
    (*data_16804b0)(&data_16804b0, *(x0_55 + 0x10))

data_16804d0 = 0xc
data_16804d8 = GreatHall
data_16804e0 = GreatHall_VP
data_1680b88 = v0_11
data_1680b98 = 0
data_16804c8 = 0x30000031b
data_1680ba0 = 1
data_1680b9c = 0
data_1680ba8 = 0xffffffff
data_1680be0 = "coppersmith"
data_1680be8 = 8
data_1680bf0 = TEXTURE_CARD_GEN_INTRIGUE_COPPERSMITH
data_1680c18 = _vtable_for_UI2StateDecl + 0x10
data_1680bf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_COPPERSMITH
void* x0_56 = UI2StateDeclTryLookup("i1_Coppersmith")

if (x0_56 == 0)
    (*data_1680c18)(&data_1680c18, "i1_Coppersmith")
    uint32_t x10_132 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1680c18
    *UI2StateDeclI_counter = x10_132 + 1
    data_1680c20 = x11_57
else
    (*data_1680c18)(&data_1680c18, *(x0_56 + 0x10))

data_1680c30 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("i1_Coppersmith")

if (x0_57 == 0)
    (*data_1680c30)(&data_1680c30, "i1_Coppersmith")
    uint32_t x10_134 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1680c30
    *UI2StateDeclI_counter = x10_134 + 1
    data_1680c38 = x11_58
else
    (*data_1680c30)(&data_1680c30, *(x0_57 + 0x10))

data_1680c50 = 4
data_1680c58 = Coppersmith
data_1681308 = v0_11
data_1681318 = 0
data_1680c48 = 0x40000031c
data_1681320 = 1
data_168131c = 0
data_1681328 = 0xffffffff
data_1681360 = "scout"
data_1681368 = 0x2d
data_1681370 = TEXTURE_CARD_GEN_INTRIGUE_SCOUT
data_1681398 = _vtable_for_UI2StateDecl + 0x10
data_1681378 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCOUT
void* x0_58 = UI2StateDeclTryLookup("i1_Scout")

if (x0_58 == 0)
    (*data_1681398)(&data_1681398, "i1_Scout")
    uint32_t x10_137 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1681398
    *UI2StateDeclI_counter = x10_137 + 1
    data_16813a0 = x11_59
else
    (*data_1681398)(&data_1681398, *(x0_58 + 0x10))

data_16813b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("i1_Scout")

if (x0_59 == 0)
    (*data_16813b0)(&data_16813b0, "i1_Scout")
    uint32_t x10_139 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16813b0
    *UI2StateDeclI_counter = x10_139 + 1
    data_16813b8 = x11_60
else
    (*data_16813b0)(&data_16813b0, *(x0_59 + 0x10))

data_16813d0 = 4
data_16813d8 = Scout
data_1681a88 = v0_11
data_1681a98 = 0
data_16813c8 = 0x40000031d
data_1681aa0 = 0x8000000
data_1681a9c = 0
data_1681aa8 = 0xffffffff
data_1681ae0 = "saboteur"
data_1681ae8 = 0xa
data_1681af0 = TEXTURE_CARD_GEN_INTRIGUE_SABOTEUR
data_1681b18 = _vtable_for_UI2StateDecl + 0x10
data_1681af8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SABOTEUR
void* x0_60 = UI2StateDeclTryLookup("i1_Saboteur")

if (x0_60 == 0)
    (*data_1681b18)(&data_1681b18, "i1_Saboteur")
    uint32_t x10_142 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1681b18
    *UI2StateDeclI_counter = x10_142 + 1
    data_1681b20 = x11_61
else
    (*data_1681b18)(&data_1681b18, *(x0_60 + 0x10))

data_1681b30 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("i1_Saboteur")

if (x0_61 == 0)
    (*data_1681b30)(&data_1681b30, "i1_Saboteur")
    uint32_t x10_144 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1681b30
    *UI2StateDeclI_counter = x10_144 + 1
    data_1681b38 = x11_62
else
    (*data_1681b30)(&data_1681b30, *(x0_61 + 0x10))

data_1681b50 = 0x24
data_1681b58 = Saboteur
data_1682208 = v0_11
data_1682218 = 0
data_1681b48 = 0x50000031e
data_1682220 = -0x7fffffffffffffeb
data_168221c = 0
data_1682228 = 0xffffffff
data_1682260 = "tribute"
data_1682268 = 0x2d
data_1682270 = TEXTURE_CARD_GEN_INTRIGUE_TRIBUTE
data_1682298 = _vtable_for_UI2StateDecl + 0x10
data_1682278 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRIBUTE
void* x0_62 = UI2StateDeclTryLookup("i1_Tribute")

if (x0_62 == 0)
    (*data_1682298)(&data_1682298, "i1_Tribute")
    uint32_t x10_147 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1682298
    *UI2StateDeclI_counter = x10_147 + 1
    data_16822a0 = x11_63
else
    (*data_1682298)(&data_1682298, *(x0_62 + 0x10))

data_16822b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("i1_Tribute")
int64_t result

if (x0_63 == 0)
    result = (*data_16822b0)(&data_16822b0, "i1_Tribute")
    uint32_t x10_149 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16822b0
    *UI2StateDeclI_counter = x10_149 + 1
    data_16822b8 = x11_64
else
    result = (*data_16822b0)(&data_16822b0, *(x0_63 + 0x10))

data_16822c8 = 0x50000031f
data_16822d0 = 4
data_16822d8 = Tribute
return result
