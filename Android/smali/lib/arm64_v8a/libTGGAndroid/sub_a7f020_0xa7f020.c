// 函数: sub_a7f020
// 地址: 0xa7f020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x1661c88, 0, 0x11d00)
int128_t v0 = data_71cea0
data_1661ca0 = 0xc
data_1661ca8 = 0xffffffff
data_1661ce0 = "crossroads"
data_1661ce8 = 0x2d
data_1661cf0 = TEXTURE_CARD_GEN_HINTERLANDS_CROSSROADS
data_1661cf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CROSSROADS
data_1661c90 = v0
data_1661d18 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("h_Crossroads")

if (x0 == 0)
    (*data_1661d18)(&data_1661d18, "h_Crossroads")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1661d18
    *UI2StateDeclI_counter = x10_1 + 1
    data_1661d20 = x11_1
else
    (*data_1661d18)(&data_1661d18, *(x0 + 0x10))

data_1661d30 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("h_Crossroads")
int128_t v0_1
int128_t v1
int128_t v5

if (x0_1 == 0)
    v0_1, v1, v5 = (*data_1661d30)(&data_1661d30, "h_Crossroads")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1661d30
    *UI2StateDeclI_counter = x10_3 + 1
    data_1661d38 = x11_2
else
    v0_1, v1, v5 = (*data_1661d30)(&data_1661d30, *(x0_1 + 0x10))

v0_1.q = 0x200000800
v1 = data_113ddf0
data_1661d48 = 0x200000800
data_16623c8 = v1
v0_1 = data_113ddd0
v1 = data_113dde0
data_1661d50 = 4
data_1661d58 = Crossroads
v5 = data_71c0e0
__builtin_memset(&data_16623d8, 0, 0x30)
data_16623a8 = v0_1
data_16623b8 = v1
data_1662418 = 0
data_1662408 = v5
data_1662460 = "duchess"
data_166241c = 0
int128_t var_100
__builtin_memset(&var_100, 0, 0x20)
__builtin_memset(&data_1662440, 0, 0x20)
int128_t var_e0
__builtin_memcpy(&var_e0, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
__builtin_memcpy(&data_1662420, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1662468 = 2
data_1662470 = TEXTURE_CARD_GEN_HINTERLANDS_DUCHESS
data_1662498 = _vtable_for_UI2StateDecl + 0x10
data_1662478 = SOUND_SOUND_CARDS_FX_LANDPLAY_DUCHESS
void* x0_2 = UI2StateDeclTryLookup("h_Duchess")

if (x0_2 == 0)
    (*data_1662498)(&data_1662498, "h_Duchess")
    uint32_t x10_6 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1662498
    *UI2StateDeclI_counter = x10_6 + 1
    data_16624a0 = x11_3
else
    (*data_1662498)(&data_1662498, *(x0_2 + 0x10))

data_16624b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("h_Duchess")
int128_t v0_2
int128_t v1_1

if (x0_3 == 0)
    v0_2, v1_1 = (*data_16624b0)(&data_16624b0, "h_Duchess")
    uint32_t x10_8 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16624b0
    *UI2StateDeclI_counter = x10_8 + 1
    data_16624b8 = x11_4
else
    v0_2, v1_1 = (*data_16624b0)(&data_16624b0, *(x0_3 + 0x10))

v0_2.q = 0
v0_2:8.q = 0
data_16624d0 = 4
data_16624d8 = Duchess
v1_1.q = 0x200000801
__builtin_memset(&data_16624f0, 0, 0xb8)
v0_2.d = 1
v0_2:4.d = 1
data_166259c = 0x100000001
v0_2.q = 0x200000006
data_16624c8 = 0x200000801
data_16624e8 = 0x200000006
v0_2 = var_100
data_1662590 = Duchess_WhileExists_Test
v1_1 = data_71c2d0
data_1662500 = Duchess_WhileExists_OnGain
data_1662ae8 = 1
data_16624f0:4.d = 0
__builtin_memcpy(&data_1662b88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_1662bd0 = v0_2
data_1662be0 = "fools_gold"
int128_t var_f0
data_1662bc0 = var_f0
data_1662bb0 = var_e0
int128_t var_d0
data_1662ba0 = var_d0
data_1662be8 = 0x37
data_1662bf0 = TEXTURE_CARD_GEN_HINTERLANDS_FOOLSGOLD
data_1662bf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_FOOLS_GOLD
data_1662c00 = SOUND_SOUND_CARDS_FX_REACTION_FOOLS_GOLD
data_1662c18 = _vtable_for_UI2StateDecl + 0x10
void* x0_4 = UI2StateDeclTryLookup("h_Fools_Gold")

if (x0_4 == 0)
    (*data_1662c18)(&data_1662c18, "h_Fools_Gold")
    uint32_t x10_10 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1662c18
    *UI2StateDeclI_counter = x10_10 + 1
    data_1662c20 = x11_5
else
    (*data_1662c18)(&data_1662c18, *(x0_4 + 0x10))

data_1662c30 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("h_Fools_Gold")
int128_t v0_3
int128_t v2

if (x0_5 == 0)
    v0_3, v2 = (*data_1662c30)(&data_1662c30, "h_Fools_Gold")
    uint32_t x10_12 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1662c30
    *UI2StateDeclI_counter = x10_12 + 1
    data_1662c38 = x11_6
else
    v0_3, v2 = (*data_1662c30)(&data_1662c30, *(x0_5 + 0x10))

v0_3.q = 0
v0_3:8.q = 0
__builtin_memset(&data_1662c70, 0, 0xb0)
v0_3 = data_113de30
v2 = data_113de40
data_1662c48 = 0x200000802
data_1662c50 = 0x42
data_1662c58 = FoolsGold
data_16632a8 = v0_3
data_113de50
data_1662c70:4.d = 6
__builtin_memset(&data_16632c8, 0, 0x40)
data_1662c80 = FoolsGold_Reaction_OnGain
data_1663308 = v1_1
data_1662d10 = FoolsGold_Reaction_Test
data_1663268 = 1
data_1662d1c:4 = 0
data_16632b8 = v2
data_1662c68 = 6
data_1662d1c = 0x100000003
data_1663318 = 0x14
data_1663320 = 0x12000
data_1663328 = 0xffffffff
data_1663360 = "develop"
data_1663368 = 0x28
data_1663370 = TEXTURE_CARD_GEN_HINTERLANDS_DEVELOP
data_1663398 = _vtable_for_UI2StateDecl + 0x10
data_1663378 = SOUND_SOUND_CARDS_FX_LANDPLAY_DEVELOP
void* x0_6 = UI2StateDeclTryLookup("h_Develop")

if (x0_6 == 0)
    (*data_1663398)(&data_1663398, "h_Develop")
    uint32_t x10_15 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1663398
    *UI2StateDeclI_counter = x10_15 + 1
    data_16633a0 = x11_7
else
    (*data_1663398)(&data_1663398, *(x0_6 + 0x10))

data_16633b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("h_Develop")

if (x0_7 == 0)
    (*data_16633b0)(&data_16633b0, "h_Develop")
    uint32_t x10_17 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16633b0
    *UI2StateDeclI_counter = x10_17 + 1
    data_16633b8 = x11_8
else
    (*data_16633b0)(&data_16633b0, *(x0_7 + 0x10))

int128_t v0_4
v0_4.q = 0x300000803
data_16633c8 = 0x300000803
data_16633d0 = 4
data_16633d8 = Develop
__builtin_memcpy(&data_1663a88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x"
"4b\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1663aa8 = 0xffffffff
data_1663ae0 = "oasis"
data_1663ae8 = 2
data_1663af0 = TEXTURE_CARD_GEN_HINTERLANDS_OASIS
data_1663b18 = _vtable_for_UI2StateDecl + 0x10
data_1663af8 = SOUND_SOUND_CARDS_FX_LANDPLAY_OASIS
void* x0_8 = UI2StateDeclTryLookup("h_Oasis")

if (x0_8 == 0)
    (*data_1663b18)(&data_1663b18, "h_Oasis")
    uint32_t x10_20 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1663b18
    *UI2StateDeclI_counter = x10_20 + 1
    data_1663b20 = x11_9
else
    (*data_1663b18)(&data_1663b18, *(x0_8 + 0x10))

data_1663b30 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("h_Oasis")

if (x0_9 == 0)
    (*data_1663b30)(&data_1663b30, "h_Oasis")
    uint32_t x10_22 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1663b30
    *UI2StateDeclI_counter = x10_22 + 1
    data_1663b38 = x11_10
else
    (*data_1663b30)(&data_1663b30, *(x0_9 + 0x10))

data_1663b50 = 4
data_1663b58 = Oasis
int128_t var_c0
data_1664208 = var_c0
data_1664218 = 0
data_1663b48 = 0x300000804
data_1664220 = 0x800010
data_166421c = 0
data_1664228 = 0xffffffff
data_1664260 = "oracle"
data_1664268 = 0x1b
data_1664270 = TEXTURE_CARD_GEN_HINTERLANDS_ORACLE
data_1664298 = _vtable_for_UI2StateDecl + 0x10
data_1664278 = SOUND_SOUND_CARDS_FX_LANDPLAY_ORACLE
void* x0_10 = UI2StateDeclTryLookup("h_Oracle")

if (x0_10 == 0)
    (*data_1664298)(&data_1664298, "h_Oracle")
    uint32_t x10_25 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1664298
    *UI2StateDeclI_counter = x10_25 + 1
    data_16642a0 = x11_11
else
    (*data_1664298)(&data_1664298, *(x0_10 + 0x10))

data_16642b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("h_Oracle")
int128_t v1_3
int128_t v2_1

if (x0_11 == 0)
    v1_3, v2_1 = (*data_16642b0)(&data_16642b0, "h_Oracle")
    uint32_t x10_27 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16642b0
    *UI2StateDeclI_counter = x10_27 + 1
    data_16642b8 = x11_12
else
    v1_3, v2_1 = (*data_16642b0)(&data_16642b0, *(x0_11 + 0x10))

data_1664988 = v1_1
v1_3 = data_7e48d8
v2_1 = data_7e48e8
data_16642d0 = 0x24
data_16642d8 = Oracle
data_1664998 = 0x18
data_16642c8 = 0x300000805
data_16649a0 = v1_3
data_16649e0 = "scheme"
data_16649b0 = v2_1
__builtin_memset(&data_16649c0, 0, 0x20)
data_16649e8 = 0x1d
data_16649f0 = TEXTURE_CARD_GEN_HINTERLANDS_SCHEME
data_1664a18 = _vtable_for_UI2StateDecl + 0x10
data_16649f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SCHEME
void* x0_12 = UI2StateDeclTryLookup("h_Scheme")

if (x0_12 == 0)
    (*data_1664a18)(&data_1664a18, "h_Scheme")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1664a18
    *UI2StateDeclI_counter = x10_30 + 1
    data_1664a20 = x11_13
else
    (*data_1664a18)(&data_1664a18, *(x0_12 + 0x10))

data_1664a30 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("h_Scheme")
int128_t v1_4
int128_t v2_2

if (x0_13 == 0)
    v1_4, v2_2 = (*data_1664a30)(&data_1664a30, "h_Scheme")
    uint32_t x10_32 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1664a30
    *UI2StateDeclI_counter = x10_32 + 1
    data_1664a38 = x11_14
else
    v1_4, v2_2 = (*data_1664a30)(&data_1664a30, *(x0_13 + 0x10))

data_1665068 = 1
data_1664a50 = 4
data_1664a58 = Scheme
data_1665108 = v1_1
v1_4 = data_7e4918
v2_2 = data_7e4928
data_1664a48 = 0x300000806
data_1665118 = 4
data_1665120 = v1_4
data_1665160 = "tunnel"
data_1665130 = v2_2
__builtin_memset(&data_1665140, 0, 0x20)
data_1665168 = 6
data_1665170 = TEXTURE_CARD_GEN_HINTERLANDS_TUNNEL
data_1665178 = SOUND_SOUND_CARDS_FX_LANDPLAY_TUNNEL
data_1665180 = SOUND_SOUND_CARDS_FX_REACTION_TUNNEL
data_1665198 = _vtable_for_UI2StateDecl + 0x10
void* x0_14 = UI2StateDeclTryLookup("h_Tunnel")

if (x0_14 == 0)
    (*data_1665198)(&data_1665198, "h_Tunnel")
    uint32_t x10_34 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1665198
    *UI2StateDeclI_counter = x10_34 + 1
    data_16651a0 = x11_15
else
    (*data_1665198)(&data_1665198, *(x0_14 + 0x10))

data_16651b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("h_Tunnel")

if (x0_15 == 0)
    (*data_16651b0)(&data_16651b0, "h_Tunnel")
    uint32_t x10_36 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16651b0
    *UI2StateDeclI_counter = x10_36 + 1
    data_16651b8 = x11_16
else
    (*data_16651b0)(&data_16651b0, *(x0_15 + 0x10))

int128_t v0_5
v0_5.q = 0
v0_5:8.q = 0
__builtin_memset(&data_16651f0, 0, 0xb0)
v0_5.q = 0x300000807
data_16651d0 = 0x48
data_16651e0 = Tunnel_VP
data_1665200 = Tunnel_Reaction
data_16651c8 = 0x300000807
data_166529c:4 = 0
data_1665290 = Tunnel_Reaction_Test
data_16657e8 = 1
data_16651e8 = 6
data_16651f0:4.d = 0
__builtin_memcpy(&data_1665888, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"48\x20\x01\x00\x00\x00\x00\x00", 
    0x20)
data_166529c = 0x100000007
data_16658a8 = 0xffffffff
data_16658e0 = "jack_of_all_trades"
data_16658e8 = 0x20
data_16658f0 = TEXTURE_CARD_GEN_HINTERLANDS_JACKOFALLTRADES
data_1665918 = _vtable_for_UI2StateDecl + 0x10
data_16658f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_JACK_OF_ALL_TRADES
void* x0_16 = UI2StateDeclTryLookup("h_Jack_of_all_Trades")

if (x0_16 == 0)
    (*data_1665918)(&data_1665918, "h_Jack_of_all_Trades")
    uint32_t x10_39 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1665918
    *UI2StateDeclI_counter = x10_39 + 1
    data_1665920 = x11_17
else
    (*data_1665918)(&data_1665918, *(x0_16 + 0x10))

data_1665930 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("h_Jack_of_all_Trades")

if (x0_17 == 0)
    (*data_1665930)(&data_1665930, "h_Jack_of_all_Trades")
    uint32_t x10_41 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1665930
    *UI2StateDeclI_counter = x10_41 + 1
    data_1665938 = x11_18
else
    (*data_1665930)(&data_1665930, *(x0_17 + 0x10))

data_1665950 = 4
data_1665958 = JackOfAllTrades
data_1666008 = var_c0
data_1666018 = 0
data_1665948 = 0x400000808
data_1666020 = 0xa010001
data_166601c = 0
data_1666028 = 0xffffffff
data_1666060 = "noble_brigand"
data_1666068 = 0x1c
data_1666070 = TEXTURE_CARD_GEN_HINTERLANDS_NOBEL_BRIGAND
data_1666098 = _vtable_for_UI2StateDecl + 0x10
data_1666078 = SOUND_SOUND_CARDS_FX_LANDPLAY_NOBLE_BRIGAND
void* x0_18 = UI2StateDeclTryLookup("h_Noble_Brigand")

if (x0_18 == 0)
    (*data_1666098)(&data_1666098, "h_Noble_Brigand")
    uint32_t x10_44 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1666098
    *UI2StateDeclI_counter = x10_44 + 1
    data_16660a0 = x11_19
else
    (*data_1666098)(&data_1666098, *(x0_18 + 0x10))

data_16660b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("h_Noble_Brigand")

if (x0_19 == 0)
    (*data_16660b0)(&data_16660b0, "h_Noble_Brigand")
    uint32_t x10_46 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16660b0
    *UI2StateDeclI_counter = x10_46 + 1
    data_16660b8 = x11_20
else
    (*data_16660b0)(&data_16660b0, *(x0_19 + 0x10))

__builtin_memset(&data_16660f0, 0, 0xb0)
data_16660e8 = 0x600000006
data_16660d0 = 0x24
data_16660d8 = NobleBrigand
data_1666100 = NobleBrigand_OnBuy
data_16661a0 = 0
data_16661a0.d = 1
data_16666e8 = 1
data_16660f0:4.d = 0
data_1666190 = 0
data_1666788 = var_c0
data_1666798 = 0
data_16660c8 = 0x400000809
data_16667a0 = 0x21
data_166679c = 0
data_16667a8 = 0xffffffff
data_16667e0 = "nomad_camp"
data_16667e8 = 0x10
data_16667f0 = TEXTURE_CARD_GEN_HINTERLANDS_NOMADCAMP
data_1666818 = _vtable_for_UI2StateDecl + 0x10
data_16667f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_NOMAD_CAMP
void* x0_20 = UI2StateDeclTryLookup("h_Nomad_Camp")

if (x0_20 == 0)
    (*data_1666818)(&data_1666818, "h_Nomad_Camp")
    uint32_t x10_49 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1666818
    *UI2StateDeclI_counter = x10_49 + 1
    data_1666820 = x11_21
else
    (*data_1666818)(&data_1666818, *(x0_20 + 0x10))

data_1666830 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("h_Nomad_Camp")

if (x0_21 == 0)
    (*data_1666830)(&data_1666830, "h_Nomad_Camp")
    uint32_t x10_51 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1666830
    *UI2StateDeclI_counter = x10_51 + 1
    data_1666838 = x11_22
else
    (*data_1666830)(&data_1666830, *(x0_21 + 0x10))

__builtin_memset(&data_1666868, 0, 0xc0)
data_1666850 = 4
data_1666858 = NomadCamp
data_1666868 = 5
data_1666878:8.d = 0x3eb
data_1666f08 = var_c0
data_1666f18 = 0
data_1666848 = 0x40000080a
data_1666f20 = 0x100000000
data_1666f60 = "silk_road"
data_1666f1c = 0
data_1666f68 = 0x2a
data_1666f70 = TEXTURE_CARD_GEN_HINTERLANDS_SILKROAD
data_1666f98 = _vtable_for_UI2StateDecl + 0x10
void* x0_22 = UI2StateDeclTryLookup("h_Silk_Road")

if (x0_22 == 0)
    (*data_1666f98)(&data_1666f98, "h_Silk_Road")
    uint32_t x10_53 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1666f98
    *UI2StateDeclI_counter = x10_53 + 1
    data_1666fa0 = x11_23
else
    (*data_1666f98)(&data_1666f98, *(x0_22 + 0x10))

data_1666fb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("h_Silk_Road")

if (x0_23 == 0)
    (*data_1666fb0)(&data_1666fb0, "h_Silk_Road")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1666fb0
    *UI2StateDeclI_counter = x10_55 + 1
    data_1666fb8 = x11_24
else
    (*data_1666fb0)(&data_1666fb0, *(x0_23 + 0x10))

data_7e4988
data_1666fc8 = 0x40000080b
data_1667628 = data_7e4958
data_1666fd0 = 8
__builtin_memset(&data_1667638, 0, 0x50)
data_1666fe0 = SilkRoad_VP
__builtin_memcpy(&data_1667688, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x03\x00\x00\x00\x"
"33\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16676a8 = 0xffffffff
data_16676e0 = "spice_merchant"
data_16676e8 = 2
data_16676f0 = TEXTURE_CARD_GEN_HINTERLANDS_SPICEMERCHANT
data_1667718 = _vtable_for_UI2StateDecl + 0x10
data_16676f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SPICE_MERCHANT
void* x0_24 = UI2StateDeclTryLookup("h_Spice_Merchant")

if (x0_24 == 0)
    (*data_1667718)(&data_1667718, "h_Spice_Merchant")
    uint32_t x10_58 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1667718
    *UI2StateDeclI_counter = x10_58 + 1
    data_1667720 = x11_25
else
    (*data_1667718)(&data_1667718, *(x0_24 + 0x10))

data_1667730 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("h_Spice_Merchant")
int128_t v1_9
int128_t v2_4

if (x0_25 == 0)
    v1_9, v2_4 = (*data_1667730)(&data_1667730, "h_Spice_Merchant")
    uint32_t x10_60 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1667730
    *UI2StateDeclI_counter = x10_60 + 1
    data_1667738 = x11_26
else
    v1_9, v2_4 = (*data_1667730)(&data_1667730, *(x0_25 + 0x10))

data_1667750 = 4
data_1667758 = SpiceMerchant
data_1667e08 = v1_1
v1_9 = data_7e49b8
v2_4 = data_7e49c8
data_1667748 = 0x40000080c
data_1667e18 = 0xd
data_1667e20 = v1_9
data_1667e60 = "trader"
data_1667e30 = v2_4
__builtin_memset(&data_1667e40, 0, 0x20)
data_1667e68 = 0x25
data_1667e70 = TEXTURE_CARD_GEN_HINTERLANDS_TRADER
data_1667e78 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRADER
data_1667e80 = SOUND_SOUND_CARDS_FX_REACTION_TRADER
data_1667e98 = _vtable_for_UI2StateDecl + 0x10
void* x0_26 = UI2StateDeclTryLookup("h_Trader")

if (x0_26 == 0)
    (*data_1667e98)(&data_1667e98, "h_Trader")
    uint32_t x10_62 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1667e98
    *UI2StateDeclI_counter = x10_62 + 1
    data_1667ea0 = x11_27
else
    (*data_1667e98)(&data_1667e98, *(x0_26 + 0x10))

data_1667eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("h_Trader")

if (x0_27 == 0)
    (*data_1667eb0)(&data_1667eb0, "h_Trader")
    uint32_t x10_64 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1667eb0
    *UI2StateDeclI_counter = x10_64 + 1
    data_1667eb8 = x11_28
else
    (*data_1667eb0)(&data_1667eb0, *(x0_27 + 0x10))

__builtin_memset(&data_1667ef0, 0, 0xb8)
data_1667f9c = 0x100000001
data_1667ed0 = 0x44
data_1667ed8 = Trader
data_1667ef0:4.d = 2
data_1667f00 = Trader_Reaction
data_1667f90 = Trader_Reaction_Test
data_16684e8 = 1
data_1667ee8 = 6
data_1668588 = var_c0
data_1668598 = 0
data_1667ec8 = 0x40000080d
data_166859c = 0
data_16685a0 = 0x10001
data_16685a8 = 0xffffffff
data_16685e0 = "cache"
data_16685e8 = 0x34
data_16685f0 = TEXTURE_CARD_GEN_HINTERLANDS_CACHE
data_1668618 = _vtable_for_UI2StateDecl + 0x10
data_16685f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CACHE
void* x0_28 = UI2StateDeclTryLookup("h_Cache")

if (x0_28 == 0)
    (*data_1668618)(&data_1668618, "h_Cache")
    uint32_t x10_67 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1668618
    *UI2StateDeclI_counter = x10_67 + 1
    data_1668620 = x11_29
else
    (*data_1668618)(&data_1668618, *(x0_28 + 0x10))

data_1668630 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("h_Cache")

if (x0_29 == 0)
    (*data_1668630)(&data_1668630, "h_Cache")
    uint32_t x10_69 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1668630
    *UI2StateDeclI_counter = x10_69 + 1
    data_1668638 = x11_30
else
    (*data_1668630)(&data_1668630, *(x0_29 + 0x10))

int128_t v0_6
v0_6.q = 0
v0_6:8.q = 0
__builtin_memset(&data_1668670, 0, 0xb0)
v0_6.d = 6
v0_6:4.d = 6
data_1668668 = 0x600000006
data_1668650 = 2
data_1668658 = Cache
v0_6.q = 0x50000080e
data_1668670:4.d = 1
data_1668680 = Cache_OnGain
data_1668648 = 0x50000080e
data_1668c68 = 1
data_166871c:4 = 0
data_1668710 = 0
__builtin_memcpy(&data_1668d08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166871c = 0x100000000
data_1668d28 = 0xffffffff
data_1668d60 = "cartographer"
data_1668d68 = 0x29
data_1668d70 = TEXTURE_CARD_GEN_HINTERLANDS_CARTOGRAPHER
data_1668d98 = _vtable_for_UI2StateDecl + 0x10
data_1668d78 = SOUND_SOUND_CARDS_FX_LANDPLAY_CARTOGRAPHER
void* x0_30 = UI2StateDeclTryLookup("h_Cartographer")

if (x0_30 == 0)
    (*data_1668d98)(&data_1668d98, "h_Cartographer")
    uint32_t x10_72 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1668d98
    *UI2StateDeclI_counter = x10_72 + 1
    data_1668da0 = x11_31
else
    (*data_1668d98)(&data_1668d98, *(x0_30 + 0x10))

data_1668db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("h_Cartographer")
int128_t v1_11
int128_t v2_5

if (x0_31 == 0)
    v1_11, v2_5 = (*data_1668db0)(&data_1668db0, "h_Cartographer")
    uint32_t x10_74 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1668db0
    *UI2StateDeclI_counter = x10_74 + 1
    data_1668db8 = x11_32
else
    v1_11, v2_5 = (*data_1668db0)(&data_1668db0, *(x0_31 + 0x10))

data_1669488 = var_c0
v1_11 = data_7e49f8
v2_5 = data_7e4a08
data_1668dd0 = 4
data_1668dd8 = Cartographer
data_1669498 = 0
data_1668dc8 = 0x50000080f
data_16694a0 = v1_11
data_16694e0 = "embassy"
data_16694b0 = v2_5
__builtin_memset(&data_16694c0, 0, 0x20)
data_166949c = 0
data_16694e8 = 0x28
data_16694f0 = TEXTURE_CARD_GEN_HINTERLANDS_EMBASSY
data_1669518 = _vtable_for_UI2StateDecl + 0x10
data_16694f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_EMBASSY
void* x0_32 = UI2StateDeclTryLookup("h_Embassy")

if (x0_32 == 0)
    (*data_1669518)(&data_1669518, "h_Embassy")
    uint32_t x10_77 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1669518
    *UI2StateDeclI_counter = x10_77 + 1
    data_1669520 = x11_33
else
    (*data_1669518)(&data_1669518, *(x0_32 + 0x10))

data_1669530 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("h_Embassy")

if (x0_33 == 0)
    (*data_1669530)(&data_1669530, "h_Embassy")
    uint32_t x10_79 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1669530
    *UI2StateDeclI_counter = x10_79 + 1
    data_1669538 = x11_34
else
    (*data_1669530)(&data_1669530, *(x0_33 + 0x10))

int128_t v0_7
v0_7.q = 0
v0_7:8.q = 0
__builtin_memset(&data_1669570, 0, 0xb0)
v0_7.d = 6
v0_7:4.d = 6
data_1669568 = 0x600000006
v0_7.q = 0x500000810
data_1669550 = 4
data_1669558 = Embassy
data_1669548 = 0x500000810
data_71bdd0
data_1669580 = Embassy_OnGain
__builtin_memcpy(&data_1669c08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x24\x08\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
v0_7 = var_100
data_166961c:4 = 0
data_1669570:4.d = 1
data_1669610 = 0
data_166961c = 0x100000000
data_1669b68 = 1
data_1669c50 = v0_7
data_1669c40 = var_f0
v0_7 = var_e0
data_1669c60 = "haggler"
data_1669c30 = v0_7
data_1669c20 = var_d0
data_1669c68 = 8
data_1669c70 = TEXTURE_CARD_GEN_HINTERLANDS_HAGGLER_FINAL
data_1669c98 = _vtable_for_UI2StateDecl + 0x10
data_1669c78 = SOUND_SOUND_CARDS_FX_LANDPLAY_HAGGLER
void* x0_34 = UI2StateDeclTryLookup("h_Haggler")

if (x0_34 == 0)
    (*data_1669c98)(&data_1669c98, "h_Haggler")
    uint32_t x10_81 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1669c98
    *UI2StateDeclI_counter = x10_81 + 1
    data_1669ca0 = x11_35
else
    (*data_1669c98)(&data_1669c98, *(x0_34 + 0x10))

data_1669cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("h_Haggler")

if (x0_35 == 0)
    (*data_1669cb0)(&data_1669cb0, "h_Haggler")
    uint32_t x10_83 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1669cb0
    *UI2StateDeclI_counter = x10_83 + 1
    data_1669cb8 = x11_36
else
    (*data_1669cb0)(&data_1669cb0, *(x0_35 + 0x10))

int128_t v0_8
v0_8.q = 0
v0_8:8.q = 0
__builtin_memset(&data_1669cf0, 0, 0xb0)
v0_8.q = 0x100000006
data_1669ce8 = 0x100000006
v0_8 = data_71caa0
data_1669cd0 = 4
data_1669cd8 = Haggler
data_166a388 = v0_8
data_166a2e8 = 1
data_1669d00 = Haggler_WhileInPlay_OnBuy
data_1669d9c:4 = 0
data_1669cf0:4.d = 0
data_1669d90 = 0
data_1669d9c = 0x100000000
data_1669cc8 = 0x500000811
data_166a398 = 0x200000014
data_166a3a0 = 0xa
data_166a3a8 = 0xffffffff
data_166a3e0 = "highway"
data_166a3e8 = 0xe
data_166a3f0 = TEXTURE_CARD_GEN_HINTERLANDS_HIGHWAY
data_166a3f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HIGHWAY
data_166a418 = _vtable_for_UI2StateDecl + 0x10
void* x0_36 = UI2StateDeclTryLookup("h_Highway")

if (x0_36 == 0)
    (*data_166a418)(&data_166a418, "h_Highway")
    uint32_t x10_85 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166a418
    *UI2StateDeclI_counter = x10_85 + 1
    data_166a420 = x11_37
else
    (*data_166a418)(&data_166a418, *(x0_36 + 0x10))

data_166a430 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("h_Highway")

if (x0_37 == 0)
    (*data_166a430)(&data_166a430, "h_Highway")
    uint32_t x10_87 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166a430
    *UI2StateDeclI_counter = x10_87 + 1
    data_166a438 = x11_38
else
    (*data_166a430)(&data_166a430, *(x0_37 + 0x10))

int128_t v0_9
v0_9.q = 0
v0_9:8.q = 0
__builtin_memset(&data_166a468, 0, 0xc0)
data_166a450 = 4
data_166a458 = Highway
data_166a478:8.d = 2
data_166a468 = 7
data_166a508 = 0x100000001
data_166ab08 = var_c0
data_166a518:8.d = 1
data_166ab18 = 0
data_166a448 = 0x500000812
data_166ab60 = "ill_gotten_gains"
data_166ab1c = 0
__builtin_memset(&data_166ab40, 0, 0x20)
__builtin_memcpy(&data_166ab20, 
    "\x01\x00\x01\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166ab68 = 0x17
data_166ab70 = TEXTURE_CARD_GEN_HINTERLANDS_ILLGOTTENGAINS
data_166ab98 = _vtable_for_UI2StateDecl + 0x10
data_166ab78 = SOUND_SOUND_CARDS_FX_LANDPLAY_ILL_GOTTEN_GAINS
void* x0_38 = UI2StateDeclTryLookup("h_Ill_Gotten_Gains")

if (x0_38 == 0)
    (*data_166ab98)(&data_166ab98, "h_Ill_Gotten_Gains")
    uint32_t x10_90 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166ab98
    *UI2StateDeclI_counter = x10_90 + 1
    data_166aba0 = x11_39
else
    (*data_166ab98)(&data_166ab98, *(x0_38 + 0x10))

data_166abb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("h_Ill_Gotten_Gains")

if (x0_39 == 0)
    (*data_166abb0)(&data_166abb0, "h_Ill_Gotten_Gains")
    uint32_t x10_92 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166abb0
    *UI2StateDeclI_counter = x10_92 + 1
    data_166abb8 = x11_40
else
    (*data_166abb0)(&data_166abb0, *(x0_39 + 0x10))

data_166abd0 = 2
data_166abd8 = IllGottenGains
int128_t v0_10
v0_10.q = 0
v0_10:8.q = 0
__builtin_memset(&data_166abf0, 0, 0xb0)
data_166ac00 = IllGottenGains_OnGain
data_166abf0:4.d = 1
data_166b1e8 = 1
data_166abe8 = 0x600000006
__builtin_memcpy(&data_166b288, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_166abc8 = 0x500000813
data_166ac9c:4 = 0
data_166ac90 = 0
data_166ac9c = 0x100000000
data_166b2e0 = &data_7a408c
__builtin_memset(&data_166b2c0, 0, 0x20)
__builtin_memcpy(&data_166b2a0, 
    "\x48\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166b2e8 = 0x27
data_166b2f0 = TEXTURE_CARD_GEN_HINTERLANDS_INN
data_166b318 = _vtable_for_UI2StateDecl + 0x10
data_166b2f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_INN
void* x0_40 = UI2StateDeclTryLookup("h2_Inn")

if (x0_40 == 0)
    (*data_166b318)(&data_166b318, "h2_Inn")
    uint32_t x10_95 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166b318
    *UI2StateDeclI_counter = x10_95 + 1
    data_166b320 = x11_41
else
    (*data_166b318)(&data_166b318, *(x0_40 + 0x10))

data_166b330 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("h_Inn")

if (x0_41 == 0)
    (*data_166b330)(&data_166b330, "h_Inn")
    uint32_t x10_97 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166b330
    *UI2StateDeclI_counter = x10_97 + 1
    data_166b338 = x11_42
else
    (*data_166b330)(&data_166b330, *(x0_41 + 0x10))

data_166b350 = 4
data_166b358 = Inn
int128_t v0_11
v0_11.q = 0
v0_11:8.q = 0
__builtin_memset(&data_166b370, 0, 0xb0)
data_166b380 = Inn_OnGain
data_166b368 = 0x600000006
data_166ba08 = var_c0
data_166b348 = 0x500000814
data_166b370:4.d = 1
data_166b968 = 1
data_166b41c:4 = 0
data_166b410 = 0
data_166b41c = 0x100000000
data_166ba18 = 0
data_166ba60 = "mandarin"
data_166ba1c = 0
__builtin_memset(&data_166ba40, 0, 0x20)
__builtin_memcpy(&data_166ba20, 
    "\x01\x01\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166ba68 = 0x26
data_166ba70 = TEXTURE_CARD_GEN_HINTERLANDS_MANDARIN
data_166ba98 = _vtable_for_UI2StateDecl + 0x10
data_166ba78 = SOUND_SOUND_CARDS_FX_LANDPLAY_MANDARIN
void* x0_42 = UI2StateDeclTryLookup("h_Mandarin")

if (x0_42 == 0)
    (*data_166ba98)(&data_166ba98, "h_Mandarin")
    uint32_t x10_100 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166ba98
    *UI2StateDeclI_counter = x10_100 + 1
    data_166baa0 = x11_43
else
    (*data_166ba98)(&data_166ba98, *(x0_42 + 0x10))

data_166bab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("h_Mandarin")

if (x0_43 == 0)
    (*data_166bab0)(&data_166bab0, "h_Mandarin")
    uint32_t x10_102 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166bab0
    *UI2StateDeclI_counter = x10_102 + 1
    data_166bab8 = x11_44
else
    (*data_166bab0)(&data_166bab0, *(x0_43 + 0x10))

__builtin_memset(&data_166baf0, 0, 0xb0)
data_166bae8 = 0x600000006
data_166bad0 = 4
data_166bad8 = Mandarin
data_166bb00 = Mandarin_OnGain
data_166baf0:4.d = 1
data_166c0e8 = 1
data_166bb9c:4 = 0
data_166bb90 = 0
data_166bb9c = 0x100000000
__builtin_memcpy(&data_166c188, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x80\x01\x00\x00\x00\x00", 
    0x20)
data_166bac8 = 0x500000815
data_166c1a8 = 0xffffffff
data_166c1e0 = "margrave"
data_166c1e8 = 0x1c
data_166c1f0 = TEXTURE_CARD_GEN_HINTERLANDS_MARGRAVE
data_166c218 = _vtable_for_UI2StateDecl + 0x10
data_166c1f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_MARGRAVE
void* x0_44 = UI2StateDeclTryLookup("h_Margrave")

if (x0_44 == 0)
    (*data_166c218)(&data_166c218, "h_Margrave")
    uint32_t x10_105 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166c218
    *UI2StateDeclI_counter = x10_105 + 1
    data_166c220 = x11_45
else
    (*data_166c218)(&data_166c218, *(x0_44 + 0x10))

data_166c230 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("h_Margrave")

if (x0_45 == 0)
    (*data_166c230)(&data_166c230, "h_Margrave")
    uint32_t x10_107 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166c230
    *UI2StateDeclI_counter = x10_107 + 1
    data_166c238 = x11_46
else
    (*data_166c230)(&data_166c230, *(x0_45 + 0x10))

int128_t v0_12
v0_12.q = 0x500000816
data_166c248 = 0x500000816
data_166c250 = 0x24
data_166c258 = Margrave
__builtin_memcpy(&data_166c908, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"52\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166c928 = 0xffffffff
data_166c960 = "stables"
data_166c968 = 0xa
data_166c970 = TEXTURE_CARD_GEN_HINTERLANDS_STABLES
data_166c998 = _vtable_for_UI2StateDecl + 0x10
data_166c978 = SOUND_SOUND_CARDS_FX_LANDPLAY_STABLES
void* x0_46 = UI2StateDeclTryLookup("h_Stables")

if (x0_46 == 0)
    (*data_166c998)(&data_166c998, "h_Stables")
    uint32_t x10_110 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166c998
    *UI2StateDeclI_counter = x10_110 + 1
    data_166c9a0 = x11_47
else
    (*data_166c998)(&data_166c998, *(x0_46 + 0x10))

data_166c9b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("h_Stables")
int128_t v1_13
int128_t v2_6

if (x0_47 == 0)
    v1_13, v2_6 = (*data_166c9b0)(&data_166c9b0, "h_Stables")
    uint32_t x10_112 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166c9b0
    *UI2StateDeclI_counter = x10_112 + 1
    data_166c9b8 = x11_48
else
    v1_13, v2_6 = (*data_166c9b0)(&data_166c9b0, *(x0_47 + 0x10))

data_166d088 = v1_1
data_113deb0
data_113dec0
data_166c9c8 = 0x500000817
__builtin_memset(&data_166d048, 0, 0x20)
v1_13 = data_113de90
v2_6 = data_113dea0
data_166c9d0 = 4
data_166c9d8 = Stables
__builtin_memset(&data_166d068, 0, 0x20)
data_166d028 = v1_13
data_166d038 = v2_6
data_166d098 = 4
data_166d0e0 = "border_village"
__builtin_memset(&data_166d0c0, 0, 0x20)
__builtin_memcpy(&data_166d0a0, 
    "\x0c\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166d0e8 = 0x23
data_166d0f0 = TEXTURE_CARD_GEN_HINTERLANDS_BORDERVILLAGE
data_166d118 = _vtable_for_UI2StateDecl + 0x10
data_166d0f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_BORDER_VILLAGE
void* x0_48 = UI2StateDeclTryLookup("h_Border_Village")

if (x0_48 == 0)
    (*data_166d118)(&data_166d118, "h_Border_Village")
    uint32_t x10_115 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166d118
    *UI2StateDeclI_counter = x10_115 + 1
    data_166d120 = x11_49
else
    (*data_166d118)(&data_166d118, *(x0_48 + 0x10))

data_166d130 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("h_Border_Village")
int128_t v0_13
int128_t v1_14
int128_t v2_7
int128_t v3
int128_t v4

if (x0_49 == 0)
    v0_13, v1_14, v2_7, v3, v4 = (*data_166d130)(&data_166d130, "h_Border_Village")
    uint32_t x10_117 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166d130
    *UI2StateDeclI_counter = x10_117 + 1
    data_166d138 = x11_50
else
    v0_13, v1_14, v2_7, v3, v4 = (*data_166d130)(&data_166d130, *(x0_49 + 0x10))

v2_7.q = 0x600000818
v0_13.q = 0
v0_13:8.q = 0
data_166d180 = zx.o(0)
data_166d180.q = BorderVillage_OnGain
v1_14.d = 6
v1_14:4.d = 6
data_166d150 = 4
data_166d158 = BorderVillage
data_166d170 = zx.o(0)
v3 = data_71d130
__builtin_memset(&data_166d190, 0, 0x90)
data_166d168 = 0x600000006
v0_13 = data_7e4cd8
v4 = data_7e4ce8
data_166d148 = 0x600000818
v1_14 = data_7e4cb8
v2_7 = data_7e4cc8
data_166d170:4.d = 1
data_166d768 = 1
data_166d21c:4 = 0
data_166d210 = 0
data_166d21c = 0x100000000
data_166d808 = v3
data_166d818 = 0xf
int128_t var_170 = v2_7
__builtin_memset(&data_166d840, 0, 0x20)
data_166d830 = v2_7
int128_t var_150 = v1_14
data_166d820 = v1_14
data_166d860 = "farmland"
data_166d868 = 0xe
data_166d870 = TEXTURE_CARD_GEN_HINTERLANDS_FARMLAND
data_166d898 = _vtable_for_UI2StateDecl + 0x10
void* x0_50 = UI2StateDeclTryLookup("h_Farmland")

if (x0_50 == 0)
    (*data_166d898)(&data_166d898, "h_Farmland")
    uint32_t x10_119 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166d898
    *UI2StateDeclI_counter = x10_119 + 1
    data_166d8a0 = x11_51
else
    (*data_166d898)(&data_166d898, *(x0_50 + 0x10))

data_166d8b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("h_Farmland")

if (x0_51 == 0)
    (*data_166d8b0)(&data_166d8b0, "h_Farmland")
    uint32_t x10_121 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166d8b0
    *UI2StateDeclI_counter = x10_121 + 1
    data_166d8b8 = x11_52
else
    (*data_166d8b0)(&data_166d8b0, *(x0_51 + 0x10))

data_166d8d0 = 8
data_166d900 = zx.o(0)
data_166d900.q = Farmland_OnBuy
data_166d9a0 = 0
data_166d9a0.d = 1
data_166dee8 = 1
int128_t v4_1 = data_71ab40
data_166d8f0 = zx.o(0)
__builtin_memset(&data_166d910, 0, 0x90)
data_166d8e8 = 0x600000006
data_166d8e0 = Farmland_VP
data_166d8f0:4.d = 0
data_166d990 = 0
data_166d8c8 = 0x600000819
__builtin_memcpy(&data_166df88, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_166dfe0 = "guard_dog"
__builtin_memset(&data_166dfc0, 0, 0x20)
__builtin_memcpy(&data_166dfa0, 
    "\x10\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166dfe8 = 0x1d
data_166dff0 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_GUARDDOG
data_166dff8 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_GUARD_DOG
data_166e000 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_GUARD_DOG_COMBO
data_166e018 = _vtable_for_UI2StateDecl + 0x10
void* x0_52 = UI2StateDeclTryLookup("h2_Guard_Dog")

if (x0_52 == 0)
    (*data_166e018)(&data_166e018, "h2_Guard_Dog")
    uint32_t x10_123 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166e018
    *UI2StateDeclI_counter = x10_123 + 1
    data_166e020 = x11_53
else
    (*data_166e018)(&data_166e018, *(x0_52 + 0x10))

data_166e030 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("h2_Guard_Dog")
int128_t v0_14
int128_t v4_2

if (x0_53 == 0)
    v0_14, v4_2 = (*data_166e030)(&data_166e030, "h2_Guard_Dog")
    uint32_t x10_125 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166e030
    *UI2StateDeclI_counter = x10_125 + 1
    data_166e038 = x11_54
else
    v0_14, v4_2 = (*data_166e030)(&data_166e030, *(x0_53 + 0x10))
v0_14.q = 0
v0_14:8.q = 0
data_166e050 = 0x44
data_166e058 = GuardDog
data_166e070 = zx.o(0)
data_166e070:4.d = 5
__builtin_memset(&data_166e080, 0, 0xa0)
v0_14.q = 0x100000003
data_166e110 = GuardDog_Reaction_Test
data_166e11c:4 = 0
data_166e11c = 0x100000003
data_166e048 = 0x30000081a
v0_14 = data_113def0
data_166e080 = GuardDog_Reaction
data_166e6a8 = v0_14
data_166e668 = 1
__builtin_memset(&data_166e6b8, 0, 0x50)
data_166e068 = 6
__builtin_memcpy(&data_166e708, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_166e760 = "nomads"
__builtin_memset(&data_166e740, 0, 0x20)
__builtin_memcpy(&data_166e720, 
    "\x21\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166e768 = 0x27
data_166e770 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_NOMADS
data_166e798 = _vtable_for_UI2StateDecl + 0x10
data_166e778 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_NOMADS
void* x0_54 = UI2StateDeclTryLookup("h2_Nomads")

if (x0_54 == 0)
    (*data_166e798)(&data_166e798, "h2_Nomads")
    uint32_t x10_128 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166e798
    *UI2StateDeclI_counter = x10_128 + 1
    data_166e7a0 = x11_55
else
    (*data_166e798)(&data_166e798, *(x0_54 + 0x10))

data_166e7b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("h2_Nomads")

if (x0_55 == 0)
    (*data_166e7b0)(&data_166e7b0, "h2_Nomads")
    uint32_t x10_130 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166e7b0
    *UI2StateDeclI_counter = x10_130 + 1
    data_166e7b8 = x11_56
else
    (*data_166e7b0)(&data_166e7b0, *(x0_55 + 0x10))

data_166e7d0 = 4
data_166e7d8 = Nomads
__builtin_memset(&data_166e7f0, 0, 0xb8)
data_166e7e8 = 0x600000006
data_166e7f0:4.d = 1
data_166e800 = Nomads_OnGainOrTrash
data_166e890 = 0
data_166e89c = 0x100000000
data_166e7c8 = 0x40000081b
__builtin_memset(&data_166e8b0, 0, 0xb8)
data_166e8a8 = 0x600000006
data_166e8b0:4.d = 2
data_166e8c0 = Nomads_OnGainOrTrash
data_166e950 = 0
data_166ede8 = 1
data_166e95c = 0x100000000
__builtin_memcpy(&data_166ee88, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_166eee0 = "trail"
__builtin_memset(&data_166eec0, 0, 0x20)
__builtin_memcpy(&data_166eea0, 
    "\x0a\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166eee8 = 0x27
data_166eef0 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_TRAIL
data_166eef8 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_TRAIL
data_166ef18 = _vtable_for_UI2StateDecl + 0x10
void* x0_56 = UI2StateDeclTryLookup("h2_Trail")

if (x0_56 == 0)
    (*data_166ef18)(&data_166ef18, "h2_Trail")
    uint32_t x10_132 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166ef18
    *UI2StateDeclI_counter = x10_132 + 1
    data_166ef20 = x11_57
else
    (*data_166ef18)(&data_166ef18, *(x0_56 + 0x10))

data_166ef30 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("h2_Trail")

if (x0_57 == 0)
    (*data_166ef30)(&data_166ef30, "h2_Trail")
    uint32_t x10_134 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166ef30
    *UI2StateDeclI_counter = x10_134 + 1
    data_166ef38 = x11_58
else
    (*data_166ef30)(&data_166ef30, *(x0_57 + 0x10))

data_166ef50 = 0x44
data_166ef58 = Trail
data_166f010 = zx.o(0)
data_166f010.q = Trail_OnGainTrashDiscard_TestGain
data_166ef70 = zx.o(0)
data_166ef70:4.d = 2
__builtin_memset(&data_166ef80, 0, 0x90)
data_166f020 = 0
data_166ef68 = 6
data_166ef80 = Trail_OnGainTrashDiscard
data_166f010:0xc = 0x100000007
data_166ef48 = 0x40000081c
__builtin_memset(&data_166f030, 0, 0xb8)
data_166f028 = 6
data_166f030:4.d = 4
data_166f0d0 = Trail_OnGainTrashDiscard_TestTrash
data_166f040 = Trail_OnGainTrashDiscard
data_166f0dc = 0x100000007
__builtin_memset(&data_166f0f0, 0, 0xb0)
data_166f100 = Trail_OnGainTrashDiscard
data_166f190 = Trail_OnGainTrashDiscard_TestDiscard
data_166f19c:4 = 0
data_166f0e8 = 6
data_166f0f0:4.d = 0
data_166f19c = 0x100000007
data_166f568 = 1
__builtin_memcpy(&data_166f608, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_166f660 = "weaver"
__builtin_memset(&data_166f640, 0, 0x20)
__builtin_memcpy(&data_166f620, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166f668 = 0x27
data_166f670 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_WEAVER
data_166f698 = _vtable_for_UI2StateDecl + 0x10
data_166f678 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_WEAVER
void* x0_58 = UI2StateDeclTryLookup("h2_Weaver")

if (x0_58 == 0)
    (*data_166f698)(&data_166f698, "h2_Weaver")
    uint32_t x10_136 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166f698
    *UI2StateDeclI_counter = x10_136 + 1
    data_166f6a0 = x11_59
else
    (*data_166f698)(&data_166f698, *(x0_58 + 0x10))

data_166f6b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("h2_Weaver")

if (x0_59 == 0)
    (*data_166f6b0)(&data_166f6b0, "h2_Weaver")
    uint32_t x10_138 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166f6b0
    *UI2StateDeclI_counter = x10_138 + 1
    data_166f6b8 = x11_60
else
    (*data_166f6b0)(&data_166f6b0, *(x0_59 + 0x10))

data_166f6d0 = 0x44
data_166f6d8 = Weaver
int128_t v0_15
v0_15.q = 0
v0_15:8.q = 0
data_166f790 = zx.o(0)
data_166f700 = zx.o(0)
data_166f790.q = Weaver_OnDiscard_Test
data_166f6f0 = zx.o(0)
__builtin_memset(&data_166f710, 0, 0x80)
data_166f700.q = Weaver_OnDiscard
data_166fce8 = 1
__builtin_memcpy(&data_166fd88, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x03\x00\x00\x00", 
    0x18)
data_166f6c8 = 0x40000081d
data_166f7a0 = 0
data_166f6e8 = 6
data_166f6f0:4.d = 0
data_166f790:0xc = 0x100000007
data_166fde0 = "berserker"
__builtin_memset(&data_166fdc0, 0, 0x20)
__builtin_memcpy(&data_166fda0, 
    "\x00\x00\x81\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_166fde8 = 0x1d
data_166fdf0 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_BERSERKER
data_166fe18 = _vtable_for_UI2StateDecl + 0x10
data_166fdf8 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_BERSERKER
void* x0_60 = UI2StateDeclTryLookup("h2_Berserker")

if (x0_60 == 0)
    (*data_166fe18)(&data_166fe18, "h2_Berserker")
    uint32_t x10_141 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166fe18
    *UI2StateDeclI_counter = x10_141 + 1
    data_166fe20 = x11_61
else
    (*data_166fe18)(&data_166fe18, *(x0_60 + 0x10))

data_166fe30 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("h2_Berserker")
int128_t v0_16
int128_t v1_15

if (x0_61 == 0)
    v0_16, v1_15 = (*data_166fe30)(&data_166fe30, "h2_Berserker")
    uint32_t x10_143 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_166fe30
    *UI2StateDeclI_counter = x10_143 + 1
    data_166fe38 = x11_62
else
    v0_16, v1_15 = (*data_166fe30)(&data_166fe30, *(x0_61 + 0x10))

data_166fe50 = 0x24
data_166fe58 = Berserker
v0_16.q = 0
v0_16:8.q = 0
data_166fe80 = zx.o(0)
data_166fe80.q = Berserker_OnGain
data_166fe70 = zx.o(0)
__builtin_memset(&data_166fe90, 0, 0x90)
data_166ff10 = Berserker_OnGain_Test
v1_15.d = 6
v1_15:4.d = 6
data_166fe68 = 0x600000006
__builtin_memcpy(&data_1670508, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
v1_15 = data_7e4c88
data_166fe48 = 0x50000081e
data_166fe70:4.d = 1
data_1670468 = 1
data_166ff1c:4 = 0
data_166ff1c = 0x100000000
data_1670560 = "cauldron"
int128_t var_1a0
__builtin_memset(&var_1a0, 0, 0x20)
__builtin_memset(&data_1670540, 0, 0x20)
int128_t var_180 = v1_15
__builtin_memcpy(&data_1670520, 
    "\x21\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1670568 = 0x10
data_1670570 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_CAULDRON
data_1670598 = _vtable_for_UI2StateDecl + 0x10
data_1670578 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_CAULDRON
void* x0_62 = UI2StateDeclTryLookup("h2_Cauldron")

if (x0_62 == 0)
    (*data_1670598)(&data_1670598, "h2_Cauldron")
    uint32_t x10_146 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1670598
    *UI2StateDeclI_counter = x10_146 + 1
    data_16705a0 = x11_63
else
    (*data_1670598)(&data_1670598, *(x0_62 + 0x10))

data_16705b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("h2_Cauldron")

if (x0_63 == 0)
    (*data_16705b0)(&data_16705b0, "h2_Cauldron")
    uint32_t x10_148 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16705b0
    *UI2StateDeclI_counter = x10_148 + 1
    data_16705b8 = x11_64
else
    (*data_16705b0)(&data_16705b0, *(x0_63 + 0x10))

data_16705c8 = 0x50000081f
data_16705d0 = 0x22
data_16705d8 = Cauldron
__builtin_memset(&data_1670c48, 0, 0x40)
data_113df50
data_1670be8 = 1
__builtin_memcpy(&data_1670c88, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
__builtin_memcpy(&data_1670c28, 
    "\x14\x00\x00\x00\x00\x00\x00\x00\xa4\xdb\xa7\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
int128_t v0_17 = var_1a0
data_1670ce0 = "souk"
data_1670cd0 = v0_17
int128_t var_190
data_1670cc0 = var_190
__builtin_memcpy(&data_1670ca0, 
    "\x21\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1670ce8 = 0x10
data_1670cf0 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_SOUK
data_1670d18 = _vtable_for_UI2StateDecl + 0x10
data_1670cf8 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_SOUK
void* x0_64 = UI2StateDeclTryLookup("h2_Souk")

if (x0_64 == 0)
    (*data_1670d18)(&data_1670d18, "h2_Souk")
    uint32_t x10_151 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1670d18
    *UI2StateDeclI_counter = x10_151 + 1
    data_1670d20 = x11_65
else
    (*data_1670d18)(&data_1670d18, *(x0_64 + 0x10))

data_1670d30 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("h2_Souk")

if (x0_65 == 0)
    (*data_1670d30)(&data_1670d30, "h2_Souk")
    uint32_t x10_153 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1670d30
    *UI2StateDeclI_counter = x10_153 + 1
    data_1670d38 = x11_66
else
    (*data_1670d30)(&data_1670d30, *(x0_65 + 0x10))

int128_t v0_18
v0_18.q = 0
v0_18:8.q = 0
__builtin_memset(&data_1670d70, 0, 0xb0)
data_1670d68 = 0x600000006
data_1670d48 = 0x500000820
v0_18 = data_113dfb0
data_1671418 = 0xe
data_16713a8 = v0_18
data_113dfe0
__builtin_memset(&data_16713d8, 0, 0x30)
data_1670d50 = 4
data_1670d58 = Souk
data_1670d70:4.d = 1
data_1671368 = 1
data_1670d80 = Souk_OnGain
data_1670e1c:4 = 0
data_1670e10 = 0
data_1670e1c = 0x100000000
data_1671408 = v4_1
__builtin_memset(&data_16713b8, 0, 0x20)
data_1671420 = 0x1004a
data_1671428 = 0xffffffff
data_1671460 = "wheelwright"
data_1671468 = 0xd
data_1671470 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_WHEELRIGHT
data_1671498 = _vtable_for_UI2StateDecl + 0x10
data_1671478 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_WHEELWRIGHT
void* x0_66 = UI2StateDeclTryLookup("h2_Wheelwright")

if (x0_66 == 0)
    (*data_1671498)(&data_1671498, "h2_Wheelwright")
    uint32_t x10_156 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1671498
    *UI2StateDeclI_counter = x10_156 + 1
    data_16714a0 = x11_67
else
    (*data_1671498)(&data_1671498, *(x0_66 + 0x10))

data_16714b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("h2_Wheelwright")

if (x0_67 == 0)
    (*data_16714b0)(&data_16714b0, "h2_Wheelwright")
    uint32_t x10_158 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16714b0
    *UI2StateDeclI_counter = x10_158 + 1
    data_16714b8 = x11_68
else
    (*data_16714b0)(&data_16714b0, *(x0_67 + 0x10))

data_16714d0 = 4
data_16714d8 = Wheelwright
__builtin_memcpy(&data_1671b88, 
    "\x02\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x"
"50\x00\x00\x20\x00\x00\x00\x00", 
    0x20)
data_16714c8 = 0x500000821
data_1671ba8 = 0xffffffff
data_1671be0 = "witchs_hut"
data_1671be8 = 0x1d
data_1671bf0 = TEXTURE_CARD_GEN_HINTERLANDS_H2E_WITCHHUT
data_1671bf8 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_WITCHS_HUT
data_1671c00 = SOUND_SOUND_CARDS_HINTERLANDS2E_FX_LANDPLAY_WITCHS_HUT_COMBO
data_1671c18 = _vtable_for_UI2StateDecl + 0x10
void* x0_68 = UI2StateDeclTryLookup("h2_Witchs_Hut")

if (x0_68 == 0)
    (*data_1671c18)(&data_1671c18, "h2_Witchs_Hut")
    uint32_t x10_160 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1671c18
    *UI2StateDeclI_counter = x10_160 + 1
    data_1671c20 = x11_69
else
    (*data_1671c18)(&data_1671c18, *(x0_68 + 0x10))

data_1671c30 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("h2_Witchs_Hut")

if (x0_69 == 0)
    (*data_1671c30)(&data_1671c30, "h2_Witchs_Hut")
    uint32_t x10_162 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1671c30
    *UI2StateDeclI_counter = x10_162 + 1
    data_1671c38 = x11_70
else
    (*data_1671c30)(&data_1671c30, *(x0_69 + 0x10))

int128_t v0_19
v0_19.q = 0x500000822
data_1671c48 = 0x500000822
data_113e050
data_16722a8 = data_113e010
v0_19 = data_71a6a0
__builtin_memset(&data_16722b8, 0, 0x50)
__builtin_memcpy(&data_1672308, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_1671c50 = 0x24
data_1671c58 = WitchsHut
data_1672350 = v4
data_1672360 = "farmland"
data_1672340 = v0_13
__builtin_memcpy(&data_1672320, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x20\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1672368 = 0xe
data_1672370 = TEXTURE_CARD_GEN_HINTERLANDS_FARMLAND
data_1672398 = _vtable_for_UI2StateDecl + 0x10
void* x0_70 = UI2StateDeclTryLookup("h2_Farmland")

if (x0_70 == 0)
    (*data_1672398)(&data_1672398, "h2_Farmland")
    uint32_t x10_165 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1672398
    *UI2StateDeclI_counter = x10_165 + 1
    data_16723a0 = x11_71
else
    (*data_1672398)(&data_1672398, *(x0_70 + 0x10))

data_16723b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("h_Farmland")

if (x0_71 == 0)
    (*data_16723b0)(&data_16723b0, "h_Farmland")
    uint32_t x10_167 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16723b0
    *UI2StateDeclI_counter = x10_167 + 1
    data_16723b8 = x11_72
else
    (*data_16723b0)(&data_16723b0, *(x0_71 + 0x10))

int128_t v0_20
v0_20.q = 0
v0_20:8.q = 0
data_16723c8 = 0x600000819
__builtin_memset(&data_16723f0, 0, 0xb0)
v0_20.d = 6
v0_20:4.d = 6
data_16723e0 = Farmland_VP
data_16723e8 = 0x600000006
data_16723f0:4.d = 1
data_1672a88 = v0_19
v0_20 = var_100
data_16729e8 = 1
data_1672400 = Farmland_OnGain_2E
data_16723d0 = 8
data_167249c:4 = 0
data_1672490 = 0
data_167249c = 0x100000000
data_1672a98 = 0xd
data_1672ad0 = v0_20
data_1672ac0 = var_f0
v0_20 = var_e0
data_1672ae0 = "haggler"
data_1672ab0 = v0_20
data_1672aa0 = var_d0
data_1672ae8 = 8
data_1672af0 = TEXTURE_CARD_GEN_HINTERLANDS_HAGGLER_FINAL
data_1672af8 = SOUND_SOUND_CARDS_FX_LANDPLAY_HAGGLER
data_1672b18 = _vtable_for_UI2StateDecl + 0x10
void* x0_72 = UI2StateDeclTryLookup("h2_Haggler")

if (x0_72 == 0)
    (*data_1672b18)(&data_1672b18, "h2_Haggler")
    uint32_t x10_169 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1672b18
    *UI2StateDeclI_counter = x10_169 + 1
    data_1672b20 = x11_74
else
    (*data_1672b18)(&data_1672b18, *(x0_72 + 0x10))

data_1672b30 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("h_Haggler")

if (x0_73 == 0)
    (*data_1672b30)(&data_1672b30, "h_Haggler")
    uint32_t x10_171 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1672b30
    *UI2StateDeclI_counter = x10_171 + 1
    data_1672b38 = x11_75
else
    (*data_1672b30)(&data_1672b30, *(x0_73 + 0x10))

int128_t v0_21
v0_21.q = 0x500000811
data_1672b48 = 0x500000811
data_1672b50 = 4
data_1672b58 = Haggler_2E
__builtin_memcpy(&data_1673208, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x02\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_1673168 = 1
data_1673228 = 0xffffffff
data_1673260 = "highway"
data_1673268 = 0xe
data_1673270 = TEXTURE_CARD_GEN_HINTERLANDS_HIGHWAY
data_1673278 = SOUND_SOUND_CARDS_FX_LANDPLAY_HIGHWAY
data_1673298 = _vtable_for_UI2StateDecl + 0x10
void* x0_74 = UI2StateDeclTryLookup("h2_Highway")

if (x0_74 == 0)
    (*data_1673298)(&data_1673298, "h2_Highway")
    uint32_t x10_173 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1673298
    *UI2StateDeclI_counter = x10_173 + 1
    data_16732a0 = x11_77
else
    (*data_1673298)(&data_1673298, *(x0_74 + 0x10))

data_16732b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("h_Highway")
int64_t result

if (x0_75 == 0)
    result = (*data_16732b0)(&data_16732b0, "h_Highway")
    uint32_t x10_175 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16732b0
    *UI2StateDeclI_counter = x10_175 + 1
    data_16732b8 = x11_78
else
    result = (*data_16732b0)(&data_16732b0, *(x0_75 + 0x10))

data_16732c8 = 0x500000812
data_16732d0 = 4
data_16732d8 = Highway_2E
return result
