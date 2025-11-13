// 函数: sub_a97ee0
// 地址: 0xa97ee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(0x16a4588, 0, 0x25800)
int128_t v0 = data_71bde0
data_16a45a0 = 0x20
data_16a45a8 = 0xffffffff
data_16a45e0 = "druid"
data_16a45e8 = 0x11
data_16a45f0 = TEXTURE_CARD_GEN_NOCTURNE_DRUID
data_16a45f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_DRUID
data_16a4590 = v0
data_16a4618 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("n_Druid")

if (x0 == 0)
    (*data_16a4618)(&data_16a4618, "n_Druid")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a4618
    *UI2StateDeclI_counter = x10_1 + 1
    data_16a4620 = x11_1
else
    (*data_16a4618)(&data_16a4618, *(x0 + 0x10))

data_16a4630 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("n_Druid")
int128_t v2
int128_t v4

if (x0_1 == 0)
    v2, v4 = (*data_16a4630)(&data_16a4630, "n_Druid")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a4630
    *UI2StateDeclI_counter = x10_3 + 1
    data_16a4638 = x11_2
else
    v2, v4 = (*data_16a4630)(&data_16a4630, *(x0_1 + 0x10))

data_16a4650 = 0x80004
data_16a4658 = Druid
data_16a4668 = zx.o(0)
data_16a4668.d = 0xd
v2.q = 0x300000001
__builtin_memset(&data_16a4678, 0, 0x20)
data_16a4688 = Druid_SetupGenerate
data_16a4678 = Druid_Setup
v4 = data_71c2d0
__builtin_memset(&data_16a4698, 0, 0x90)
data_16a4648 = 0x200000d00
data_16a4680 = 0x300000001
v2 = data_7e7240
__builtin_memcpy(&data_16a4d08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16a4d60 = "faithful_hound"
data_16a4d50 = v2
__builtin_memcpy(&data_16a4d20, 
    "\x10\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
data_16a4d68 = 0x26
data_16a4d70 = TEXTURE_CARD_GEN_NOCTURNE_FAITHFULHOUND
data_16a4d78 = SOUND_SOUND_CARDS_FX_LANDPLAY_FAITHFUL_HOUND
data_16a4d80 = SOUND_SOUND_CARDS_FX_REACTION_FAITHFUL_HOUND
data_16a4d98 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("n_Faithful_Hound")

if (x0_2 == 0)
    (*data_16a4d98)(&data_16a4d98, "n_Faithful_Hound")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a4d98
    *UI2StateDeclI_counter = x10_5 + 1
    data_16a4da0 = x11_3
else
    (*data_16a4d98)(&data_16a4d98, *(x0_2 + 0x10))

data_16a4db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("n_Faithful_Hound")

if (x0_3 == 0)
    (*data_16a4db0)(&data_16a4db0, "n_Faithful_Hound")
    uint32_t x10_7 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a4db0
    *UI2StateDeclI_counter = x10_7 + 1
    data_16a4db8 = x11_4
else
    (*data_16a4db0)(&data_16a4db0, *(x0_3 + 0x10))

data_16a4dd0 = 0x44
data_16a4dd8 = FaithfulHound
data_16a4e00 = zx.o(0)
data_16a4e00.q = FaithfulHound_OnDiscard
data_16a4e90 = zx.o(0)
data_16a4e90.q = FaithfulHound_Test
data_16a4df0 = zx.o(0)
data_16a4ea0 = 0
__builtin_memset(&data_16a4e10, 0, 0x80)
data_16a4dc8 = 0x200000d01
data_16a4e90:0xc = 0xa00000007
data_16a4df0:4.d = 0
__builtin_memcpy(&data_16a5488, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x02\x00\x00\x00", 
    0x20)
data_16a4de8 = 6
__builtin_memset(&data_16a5408, 0, 0x20)
__builtin_memcpy(&data_16a53e8, 
    "\x0a\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"01\xae\x74\x00\x00\x00\x00\x00", 
    0x20)
data_16a54a8 = 0xffffffff
data_16a54e0 = "guardian"
data_16a54e8 = 0x2a
data_16a54f0 = TEXTURE_CARD_GEN_NOCTURNE_GUARDIAN
data_16a5518 = _vtable_for_UI2StateDecl + 0x10
data_16a54f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_GUARDIAN
void* x0_4 = UI2StateDeclTryLookup("n22_Guardian")

if (x0_4 == 0)
    (*data_16a5518)(&data_16a5518, "n22_Guardian")
    uint32_t x10_10 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a5518
    *UI2StateDeclI_counter = x10_10 + 1
    data_16a5520 = x11_5
else
    (*data_16a5518)(&data_16a5518, *(x0_4 + 0x10))

data_16a5530 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("n_Guardian")

if (x0_5 == 0)
    (*data_16a5530)(&data_16a5530, "n_Guardian")
    uint32_t x10_12 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a5530
    *UI2StateDeclI_counter = x10_12 + 1
    data_16a5538 = x11_6
else
    (*data_16a5530)(&data_16a5530, *(x0_5 + 0x10))

int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
__builtin_memset(&data_16a5568, 0, 0xc0)
v0_1.q = 0x200000d02
data_16a5550 = 0x40080
data_16a5558 = Guardian
data_16a5578:8.d = 0x3ea
data_16a5548 = 0x200000d02
data_16a5568 = 5
data_16a5b68 = 1
__builtin_memcpy(&data_16a5c08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a5c28 = 0xffffffff
data_16a5c60 = "monastery"
data_16a5c68 = 0x14
data_16a5c70 = TEXTURE_CARD_GEN_NOCTURNE_MONASTERY
data_16a5c98 = _vtable_for_UI2StateDecl + 0x10
data_16a5c78 = SOUND_SOUND_CARDS_FX_LANDPLAY_MONASTERY
void* x0_6 = UI2StateDeclTryLookup("n_Monastery")

if (x0_6 == 0)
    (*data_16a5c98)(&data_16a5c98, "n_Monastery")
    uint32_t x10_15 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a5c98
    *UI2StateDeclI_counter = x10_15 + 1
    data_16a5ca0 = x11_7
else
    (*data_16a5c98)(&data_16a5c98, *(x0_6 + 0x10))

data_16a5cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("n_Monastery")

if (x0_7 == 0)
    (*data_16a5cb0)(&data_16a5cb0, "n_Monastery")
    uint32_t x10_17 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a5cb0
    *UI2StateDeclI_counter = x10_17 + 1
    data_16a5cb8 = x11_8
else
    (*data_16a5cb0)(&data_16a5cb0, *(x0_7 + 0x10))

data_11414e0
data_16a5cc8 = 0x200000d03
data_11414c0
data_16a6328 = data_11414b0
__builtin_memset(&data_16a6338, 0, 0x50)
data_16a5cd0 = 0x40000
data_16a5cd8 = Monastery
__builtin_memcpy(&data_16a6388, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x80\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a63a8 = 0xffffffff
data_16a63e0 = "pixie"
data_16a63e8 = 8
data_16a63f0 = TEXTURE_CARD_GEN_NOCTURNE_PIXIE
data_16a6418 = _vtable_for_UI2StateDecl + 0x10
data_16a63f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_PIXIE
void* x0_8 = UI2StateDeclTryLookup("n_Pixie")

if (x0_8 == 0)
    (*data_16a6418)(&data_16a6418, "n_Pixie")
    uint32_t x10_20 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a6418
    *UI2StateDeclI_counter = x10_20 + 1
    data_16a6420 = x11_9
else
    (*data_16a6418)(&data_16a6418, *(x0_8 + 0x10))

data_16a6430 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("n_Pixie")

if (x0_9 == 0)
    (*data_16a6430)(&data_16a6430, "n_Pixie")
    uint32_t x10_22 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a6430
    *UI2StateDeclI_counter = x10_22 + 1
    data_16a6438 = x11_10
else
    (*data_16a6430)(&data_16a6430, *(x0_9 + 0x10))

__builtin_memset(&data_16a6468, 0, 0xc0)
data_16a6448 = 0x200000d04
data_16a6450 = 0x80004
data_16a6458 = Pixie
data_16a6468 = 0xf
data_16a6478:8.d = 0xd23
__builtin_memcpy(&data_16a6b08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x4f\x0d\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"20\x01\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a6b28 = 0xffffffff
data_16a6b60 = "tracker"
data_16a6b68 = 0x2a
data_16a6b70 = TEXTURE_CARD_GEN_NOCTURNE_TRACKER
data_16a6b78 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRACKER
data_16a6b98 = _vtable_for_UI2StateDecl + 0x10
void* x0_10 = UI2StateDeclTryLookup("n_Tracker")

if (x0_10 == 0)
    (*data_16a6b98)(&data_16a6b98, "n_Tracker")
    uint32_t x10_24 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a6b98
    *UI2StateDeclI_counter = x10_24 + 1
    data_16a6ba0 = x11_11
else
    (*data_16a6b98)(&data_16a6b98, *(x0_10 + 0x10))

data_16a6bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("n_Tracker")

if (x0_11 == 0)
    (*data_16a6bb0)(&data_16a6bb0, "n_Tracker")
    uint32_t x10_26 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a6bb0
    *UI2StateDeclI_counter = x10_26 + 1
    data_16a6bb8 = x11_12
else
    (*data_16a6bb0)(&data_16a6bb0, *(x0_11 + 0x10))

data_16a6bd0 = 0x80004
data_16a6bd8 = Tracker
data_16a6bc8 = 0x200000d05
__builtin_memset(&data_16a6be8, 0, 0xc0)
data_16a6be8 = 0xf
data_16a6bf8:8.d = 0xd25
__builtin_memset(&data_16a6cb0, 0, 0xb8)
data_16a6ca8 = 0x100000006
data_16a6cb0:4.d = 1
data_16a6cc0 = Tracker_WhileInPlay_OnGain
data_16a6d50 = Tracker_WhileInPlay_OnGain_Test
data_16a6d5c = 0x100000001
data_16a71e8 = 1
__builtin_memcpy(&data_16a7288, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16a72e0 = "changeling"
__builtin_memset(&data_16a72c0, 0, 0x20)
__builtin_memcpy(&data_16a72a0, 
    "\x00\x80\x01\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a72e8 = 0x17
data_16a72f0 = TEXTURE_CARD_GEN_NOCTURNE_SLAVIN_DOMINION_CHANGELING
data_16a72f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CHANGELING
data_16a7318 = _vtable_for_UI2StateDecl + 0x10
void* x0_12 = UI2StateDeclTryLookup("n_Changeling")

if (x0_12 == 0)
    (*data_16a7318)(&data_16a7318, "n_Changeling")
    uint32_t x10_28 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a7318
    *UI2StateDeclI_counter = x10_28 + 1
    data_16a7320 = x11_13
else
    (*data_16a7318)(&data_16a7318, *(x0_12 + 0x10))

data_16a7330 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("n_Changeling")

if (x0_13 == 0)
    (*data_16a7330)(&data_16a7330, "n_Changeling")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a7330
    *UI2StateDeclI_counter = x10_30 + 1
    data_16a7338 = x11_14
else
    (*data_16a7330)(&data_16a7330, *(x0_13 + 0x10))

__builtin_memset(&data_16a7370, 0, 0xb8)
data_16a741c = 0x100000001
data_16a7350 = 0x40000
data_16a7358 = Changeling
data_16a7348 = 0x300000d06
data_16a7380 = Changeling_Always_OnGain
data_16a7410 = Changeling_Always_OnGain_Test
data_16a7968 = 1
data_16a7370:4.d = 0
__builtin_memcpy(&data_16a7a08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_16a7368 = 0x200000006
data_16a7a60 = "fool"
data_16a7a68 = 8
data_16a7a70 = TEXTURE_CARD_GEN_NOCTURNE_FOOL
data_16a7a98 = _vtable_for_UI2StateDecl + 0x10
data_16a7a78 = SOUND_SOUND_CARDS_FX_LANDPLAY_FOOL
void* x0_14 = UI2StateDeclTryLookup("n_Fool")

if (x0_14 == 0)
    (*data_16a7a98)(&data_16a7a98, "n_Fool")
    uint32_t x10_33 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a7a98
    *UI2StateDeclI_counter = x10_33 + 1
    data_16a7aa0 = x11_15
else
    (*data_16a7a98)(&data_16a7a98, *(x0_14 + 0x10))

data_16a7ab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("n_Fool")
int128_t v0_3
int128_t v4_3

if (x0_15 == 0)
    v0_3, v4_3 = (*data_16a7ab0)(&data_16a7ab0, "n_Fool")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a7ab0
    *UI2StateDeclI_counter = x10_35 + 1
    data_16a7ab8 = x11_16
else
    v0_3, v4_3 = (*data_16a7ab0)(&data_16a7ab0, *(x0_15 + 0x10))

v0_3.q = 0
v0_3:8.q = 0
__builtin_memset(&data_16a7ae8, 0, 0x180)
v0_3 = data_1141510
v4_3 = data_1141520
data_16a7ac8 = 0x300000d07
data_16a8128 = v0_3
__builtin_memset(&data_16a8148, 0, 0x40)
data_16a7ae8 = 0xf
data_16a7ad0 = 0x80004
data_16a7ad8 = Fool
data_16a7af8:8.d = 0xd27
data_16a7ba8 = 0x10
data_16a7bb8:8.d = 0xd4a
__builtin_memcpy(&data_16a8188, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a8138 = v4_3
data_16a81a8 = 0xffffffff
data_16a81e0 = "ghost_town"
data_16a81e8 = 0x27
data_16a81f0 = TEXTURE_CARD_GEN_NOCTURNE_GHOSTTOWN
data_16a8218 = _vtable_for_UI2StateDecl + 0x10
data_16a81f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_GHOST_TOWN
void* x0_16 = UI2StateDeclTryLookup("n_Ghost_Town")

if (x0_16 == 0)
    (*data_16a8218)(&data_16a8218, "n_Ghost_Town")
    uint32_t x10_38 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a8218
    *UI2StateDeclI_counter = x10_38 + 1
    data_16a8220 = x11_17
else
    (*data_16a8218)(&data_16a8218, *(x0_16 + 0x10))

data_16a8230 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("n_Ghost_Town")

if (x0_17 == 0)
    (*data_16a8230)(&data_16a8230, "n_Ghost_Town")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a8230
    *UI2StateDeclI_counter = x10_40 + 1
    data_16a8238 = x11_18
else
    (*data_16a8230)(&data_16a8230, *(x0_17 + 0x10))

__builtin_memset(&data_16a8268, 0, 0xc0)
data_16a8250 = 0x40080
data_16a8258 = GhostTown
data_16a8268 = 5
data_16a8278:8.d = 0x3ea
data_16a8868 = 1
__builtin_memcpy(&data_16a8908, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16a8248 = 0x300000d08
data_16a8928 = 0xffffffff
data_16a8960 = "leprechaun"
data_16a8968 = 6
data_16a8970 = TEXTURE_CARD_GEN_NOCTURNE_LEPRECHAUN
data_16a8998 = _vtable_for_UI2StateDecl + 0x10
data_16a8978 = SOUND_SOUND_CARDS_FX_LANDPLAY_LEPRECHAUN
void* x0_18 = UI2StateDeclTryLookup("n_Leprechaun")

if (x0_18 == 0)
    (*data_16a8998)(&data_16a8998, "n_Leprechaun")
    uint32_t x10_43 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a8998
    *UI2StateDeclI_counter = x10_43 + 1
    data_16a89a0 = x11_19
else
    (*data_16a8998)(&data_16a8998, *(x0_18 + 0x10))

data_16a89b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("n_Leprechaun")
int128_t v0_4
int128_t v4_4

if (x0_19 == 0)
    v0_4, v4_4 = (*data_16a89b0)(&data_16a89b0, "n_Leprechaun")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a89b0
    *UI2StateDeclI_counter = x10_45 + 1
    data_16a89b8 = x11_20
else
    v0_4, v4_4 = (*data_16a89b0)(&data_16a89b0, *(x0_19 + 0x10))
v0_4.q = 0
v0_4:8.q = 0
__builtin_memset(&data_16a89e8, 0, 0x20)
data_16a89e8 = 0xc
__builtin_memset(&data_16a8a08, 0, 0xa0)
v0_4 = data_1141570
data_16a89d0 = 0x100004
data_16a89d8 = Leprechaun
__builtin_memset(&data_16a9038, 0, 0x50)
data_16a9028 = v0_4
data_16a89f8:8.d = 0xd29
data_16a89c8 = 0x300000d09
data_16a8a98:4.d = 0
__builtin_memcpy(&data_16a9088, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"80\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a90a8 = 0xffffffff
data_16a90e0 = "night_watchman"
data_16a90e8 = 0xd
data_16a90f0 = TEXTURE_CARD_GEN_NOCTURNE_NIGHT_WATCHMAN
data_16a9118 = _vtable_for_UI2StateDecl + 0x10
data_16a90f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_NIGHT_WATCHMAN
void* x0_20 = UI2StateDeclTryLookup("n_Night_Watchman")

if (x0_20 == 0)
    (*data_16a9118)(&data_16a9118, "n_Night_Watchman")
    uint32_t x10_48 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a9118
    *UI2StateDeclI_counter = x10_48 + 1
    data_16a9120 = x11_21
else
    (*data_16a9118)(&data_16a9118, *(x0_20 + 0x10))

data_16a9130 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("n_Night_Watchman")

if (x0_21 == 0)
    (*data_16a9130)(&data_16a9130, "n_Night_Watchman")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a9130
    *UI2StateDeclI_counter = x10_50 + 1
    data_16a9138 = x11_22
else
    (*data_16a9130)(&data_16a9130, *(x0_21 + 0x10))

__builtin_memset(&data_16a9168, 0, 0xc0)
data_16a9168 = 5
data_16a9148 = 0x300000d0a
data_16a9150 = 0x40000
data_16a9158 = NightWatchman
data_16a9178:8.d = 0x3ea
__builtin_memcpy(&data_16a9808, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x"
"4a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a9828 = 0xffffffff
data_16a9860 = "secret_cave"
data_16a9868 = 0x37
data_16a9870 = TEXTURE_CARD_GEN_NOCTURNE_SECRETCAVE
data_16a9898 = _vtable_for_UI2StateDecl + 0x10
data_16a9878 = SOUND_SOUND_CARDS_FX_LANDPLAY_SECRET_CAVE
void* x0_22 = UI2StateDeclTryLookup("n_Secret_Cave")

if (x0_22 == 0)
    (*data_16a9898)(&data_16a9898, "n_Secret_Cave")
    uint32_t x10_53 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a9898
    *UI2StateDeclI_counter = x10_53 + 1
    data_16a98a0 = x11_23
else
    (*data_16a9898)(&data_16a9898, *(x0_22 + 0x10))

data_16a98b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("n_Secret_Cave")

if (x0_23 == 0)
    (*data_16a98b0)(&data_16a98b0, "n_Secret_Cave")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16a98b0
    *UI2StateDeclI_counter = x10_55 + 1
    data_16a98b8 = x11_24
else
    (*data_16a98b0)(&data_16a98b0, *(x0_23 + 0x10))

__builtin_memset(&data_16a98e8, 0, 0xc0)
data_16a98d0 = 0x84
data_16a98d8 = SecretCave
data_16a98c8 = 0x300000d0b
data_16a98e8 = 0xf
data_16a98f8:8.d = 0xd22
data_16a9ee8 = 1
__builtin_memcpy(&data_16a9f88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16a9fa8 = 0xffffffff
data_16a9fe0 = "bard"
data_16a9fe8 = 0xd
data_16a9ff0 = TEXTURE_CARD_GEN_NOCTURNE_BARD
data_16a9ff8 = SOUND_SOUND_CARDS_FX_LANDPLAY_BARD
data_16aa018 = _vtable_for_UI2StateDecl + 0x10
void* x0_24 = UI2StateDeclTryLookup("n_Bard")

if (x0_24 == 0)
    (*data_16aa018)(&data_16aa018, "n_Bard")
    uint32_t x10_58 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aa018
    *UI2StateDeclI_counter = x10_58 + 1
    data_16aa020 = x11_25
else
    (*data_16aa018)(&data_16aa018, *(x0_24 + 0x10))

data_16aa030 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("n_Bard")

if (x0_25 == 0)
    (*data_16aa030)(&data_16aa030, "n_Bard")
    uint32_t x10_60 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aa030
    *UI2StateDeclI_counter = x10_60 + 1
    data_16aa038 = x11_26
else
    (*data_16aa030)(&data_16aa030, *(x0_25 + 0x10))

data_16aa050 = 0x80004
data_16aa058 = Bard
__builtin_memcpy(&data_16aa708, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00\x"
"0c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16aa048 = 0x400000d0c
data_16aa728 = 0xffffffff
data_16aa760 = "blessed_village"
data_16aa768 = 6
data_16aa770 = TEXTURE_CARD_GEN_NOCTURNE_BLESSED_VILLAGE
data_16aa798 = _vtable_for_UI2StateDecl + 0x10
data_16aa778 = SOUND_SOUND_CARDS_FX_LANDPLAY_BLESSED_VILLAGE
void* x0_26 = UI2StateDeclTryLookup("n_Blessed_Village")

if (x0_26 == 0)
    (*data_16aa798)(&data_16aa798, "n_Blessed_Village")
    uint32_t x10_63 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aa798
    *UI2StateDeclI_counter = x10_63 + 1
    data_16aa7a0 = x11_27
else
    (*data_16aa798)(&data_16aa798, *(x0_26 + 0x10))

data_16aa7b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("n_Blessed_Village")

if (x0_27 == 0)
    (*data_16aa7b0)(&data_16aa7b0, "n_Blessed_Village")
    uint32_t x10_65 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aa7b0
    *UI2StateDeclI_counter = x10_65 + 1
    data_16aa7b8 = x11_28
else
    (*data_16aa7b0)(&data_16aa7b0, *(x0_27 + 0x10))

data_16aa7d0 = 0x80004
data_16aa7d8 = BlessedVillage
int128_t v0_5
v0_5.q = 0
v0_5:8.q = 0
__builtin_memset(&data_16aa7f0, 0, 0xb0)
data_16aa800 = BlessedVillage_OnGain
data_16aa7f0:4.d = 1
data_16aade8 = 1
data_16aa7e8 = 0x600000006
__builtin_memcpy(&data_16aae88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16aa7c8 = 0x400000d0d
data_16aa89c:4 = 0
data_16aa890 = 0
data_16aa89c = 0x100000000
data_16aaee0 = "cemetery"
__builtin_memset(&data_16aaec0, 0, 0x20)
__builtin_memcpy(&data_16aaea0, 
    "\x00\x20\x20\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16aaee8 = 0x27
data_16aaef0 = TEXTURE_CARD_GEN_NOCTURNE_CEMETERY
data_16aaf18 = _vtable_for_UI2StateDecl + 0x10
void* x0_28 = UI2StateDeclTryLookup("n_Cemetery")

if (x0_28 == 0)
    (*data_16aaf18)(&data_16aaf18, "n_Cemetery")
    uint32_t x10_67 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aaf18
    *UI2StateDeclI_counter = x10_67 + 1
    data_16aaf20 = x11_29
else
    (*data_16aaf18)(&data_16aaf18, *(x0_28 + 0x10))

data_16aaf30 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("n_Cemetery")

if (x0_29 == 0)
    (*data_16aaf30)(&data_16aaf30, "n_Cemetery")
    uint32_t x10_69 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aaf30
    *UI2StateDeclI_counter = x10_69 + 1
    data_16aaf38 = x11_30
else
    (*data_16aaf30)(&data_16aaf30, *(x0_29 + 0x10))

int128_t v1_5
v1_5.d = 6
v1_5:4.d = 6
data_16aaf68 = 0x600000006
data_16aaf50 = 8
data_16aaf60 = Cemetery_VP
v1_5.q = 0
v1_5:8.q = 0
__builtin_memset(&data_16ab028, 0, 0xc0)
__builtin_memset(&data_16aaf70, 0, 0xb0)
data_16aaf80 = Cemetery_OnGain
data_16ab028 = 0xf
data_16ab038:8.d = 0xd21
data_16aaf70:4.d = 1
data_16ab568 = 1
data_16ab01c:4 = 0
data_16ab010 = 0
data_16ab01c = 0x100000000
__builtin_memcpy(&data_16ab608, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_16aaf48 = 0x400000d0e
data_16ab628 = 0xffffffff
data_16ab660 = "conclave"
data_16ab668 = 0x1c
data_16ab670 = TEXTURE_CARD_GEN_NOCTURNE_CONCLAVE
data_16ab698 = _vtable_for_UI2StateDecl + 0x10
data_16ab678 = SOUND_SOUND_CARDS_FX_LANDPLAY_CONCLAVE
void* x0_30 = UI2StateDeclTryLookup("n_Conclave")

if (x0_30 == 0)
    (*data_16ab698)(&data_16ab698, "n_Conclave")
    uint32_t x10_72 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ab698
    *UI2StateDeclI_counter = x10_72 + 1
    data_16ab6a0 = x11_31
else
    (*data_16ab698)(&data_16ab698, *(x0_30 + 0x10))

data_16ab6b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("n_Conclave")

if (x0_31 == 0)
    (*data_16ab6b0)(&data_16ab6b0, "n_Conclave")
    uint32_t x10_74 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ab6b0
    *UI2StateDeclI_counter = x10_74 + 1
    data_16ab6b8 = x11_32
else
    (*data_16ab6b0)(&data_16ab6b0, *(x0_31 + 0x10))

data_1141600
data_16ab6c8 = 0x400000d0f
data_1141620
data_16abd28 = data_11415d0
data_16abd98 = 8
__builtin_memset(&data_16abd38, 0, 0x50)
data_16ab6d0 = 4
data_16ab6d8 = Conclave
data_16abd88 = v4
data_16abda0 = 0x10000
data_16abda8 = 0xffffffff
data_16abde0 = "devils_workshop"
data_16abde8 = 8
data_16abdf0 = TEXTURE_CARD_GEN_NOCTURNE_DEVILSWORKSHOP
data_16abe18 = _vtable_for_UI2StateDecl + 0x10
data_16abdf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_DEVILS_WORKSHOP
void* x0_32 = UI2StateDeclTryLookup("n_Devils_Workshop")

if (x0_32 == 0)
    (*data_16abe18)(&data_16abe18, "n_Devils_Workshop")
    uint32_t x10_77 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16abe18
    *UI2StateDeclI_counter = x10_77 + 1
    data_16abe20 = x11_33
else
    (*data_16abe18)(&data_16abe18, *(x0_32 + 0x10))

data_16abe30 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("n_Devils_Workshop")

if (x0_33 == 0)
    (*data_16abe30)(&data_16abe30, "n_Devils_Workshop")
    uint32_t x10_79 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16abe30
    *UI2StateDeclI_counter = x10_79 + 1
    data_16abe38 = x11_34
else
    (*data_16abe30)(&data_16abe30, *(x0_33 + 0x10))

__builtin_memset(&data_16abe68, 0, 0x20)
data_16abe68 = 0xc
__builtin_memset(&data_16abe88, 0, 0xa0)
data_16abe48 = 0x400000d10
__builtin_memcpy(&data_16ac4a8, 
    "\x0a\x00\x00\x00\x00\x00\x00\x00\xc0\x5f\xa9\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"08\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16abe50 = 0x40000
data_16abe58 = DevilsWorkshop
data_16abe78:8.d = 0xd2b
data_16abf18:4.d = 0
__builtin_memcpy(&data_16ac508, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
__builtin_memset(&data_16ac4e8, 0, 0x20)
__builtin_memcpy(&data_16ac4c8, 
    "\xf0\x5f\xa9\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"d8\x5f\xa9\x00\x00\x00\x00\x00", 
    0x20)
data_16ac528 = 0xffffffff
data_16ac560 = "exorcist"
data_16ac568 = 0x1c
data_16ac570 = TEXTURE_CARD_GEN_NOCTURNE_EXORCIST
data_16ac598 = _vtable_for_UI2StateDecl + 0x10
data_16ac578 = SOUND_SOUND_CARDS_FX_LANDPLAY_EXORCIST
void* x0_34 = UI2StateDeclTryLookup("n_Exorcist")

if (x0_34 == 0)
    (*data_16ac598)(&data_16ac598, "n_Exorcist")
    uint32_t x10_82 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ac598
    *UI2StateDeclI_counter = x10_82 + 1
    data_16ac5a0 = x11_35
else
    (*data_16ac598)(&data_16ac598, *(x0_34 + 0x10))

data_16ac5b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("n_Exorcist")

if (x0_35 == 0)
    (*data_16ac5b0)(&data_16ac5b0, "n_Exorcist")
    uint32_t x10_84 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ac5b0
    *UI2StateDeclI_counter = x10_84 + 1
    data_16ac5b8 = x11_36
else
    (*data_16ac5b0)(&data_16ac5b0, *(x0_35 + 0x10))

int128_t v1_7
v1_7.q = 0x400000d11
data_16ac5d0 = 0x40000
data_16ac5d8 = Exorcist
__builtin_memset(&data_16ac5e8, 0, 0x20)
data_16ac5f8:8.d = 0xd28
__builtin_memset(&data_16ac608, 0, 0xa0)
data_16ac5e8 = 0xc
data_16ac5c8 = 0x400000d11
data_16ac6a8 = zx.o(0)
data_16ac6a8.d = 0xc
__builtin_memset(&data_16ac758, 0, 0x20)
data_16ac768 = 0xc
__builtin_memset(&data_16ac6b8, 0, 0xa0)
v1_7 = data_1141690
__builtin_memset(&data_16ac778, 0, 0xb0)
data_16ac6b8:8.d = 0xd2b
data_16ac778:8.d = 0xd2f
data_16ac758:4.d = 0
data_16ac818:4.d = 0
__builtin_memset(&data_16acc38, 0, 0x50)
data_16acc28 = v1_7
__builtin_memcpy(&data_16acc88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x12\x00\x00\x00\x"
"00\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_16acca8 = 0xffffffff
data_16acce0 = "necromancer"
data_16acce8 = 0x28
data_16accf0 = TEXTURE_CARD_GEN_NOCTURNE_NECROMANCER
data_16accf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_NECROMANCER
data_16acd18 = _vtable_for_UI2StateDecl + 0x10
void* x0_36 = UI2StateDeclTryLookup("n_Necromancer")

if (x0_36 == 0)
    (*data_16acd18)(&data_16acd18, "n_Necromancer")
    uint32_t x10_86 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16acd18
    *UI2StateDeclI_counter = x10_86 + 1
    data_16acd20 = x11_37
else
    (*data_16acd18)(&data_16acd18, *(x0_36 + 0x10))

data_16acd30 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("n_Necromancer")
int128_t v0_7
int128_t v4_6

if (x0_37 == 0)
    v0_7, v4_6 = (*data_16acd30)(&data_16acd30, "n_Necromancer")
    uint32_t x10_88 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16acd30
    *UI2StateDeclI_counter = x10_88 + 1
    data_16acd38 = x11_38
else
    v0_7, v4_6 = (*data_16acd30)(&data_16acd30, *(x0_37 + 0x10))
data_16acd50 = 4
data_16acd58 = Necromancer
v0_7.q = 0
v0_7:8.q = 0
__builtin_memset(&data_16acd68, 0, 0x20)
data_16acd78 = Necromancer_Setup
__builtin_memset(&data_16acd88, 0, 0xa0)
v0_7 = data_11416f0
data_16acd48 = 0x400000d12
data_16acd68 = 1
data_16ad368 = 1
__builtin_memset(&data_16ad3b8, 0, 0x50)
data_16ad3a8 = v0_7
__builtin_memcpy(&data_16ad408, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"12\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16ad428 = 0xffffffff
data_16ad460 = "shepherd"
data_16ad468 = 0x2d
data_16ad470 = TEXTURE_CARD_GEN_NOCTURNE_SHEPHERD
data_16ad498 = _vtable_for_UI2StateDecl + 0x10
data_16ad478 = SOUND_SOUND_CARDS_FX_LANDPLAY_SHEPHERD
void* x0_38 = UI2StateDeclTryLookup("n_Shepherd")

if (x0_38 == 0)
    (*data_16ad498)(&data_16ad498, "n_Shepherd")
    uint32_t x10_91 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ad498
    *UI2StateDeclI_counter = x10_91 + 1
    data_16ad4a0 = x11_39
else
    (*data_16ad498)(&data_16ad498, *(x0_38 + 0x10))

data_16ad4b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("n_Shepherd")

if (x0_39 == 0)
    (*data_16ad4b0)(&data_16ad4b0, "n_Shepherd")
    uint32_t x10_93 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ad4b0
    *UI2StateDeclI_counter = x10_93 + 1
    data_16ad4b8 = x11_40
else
    (*data_16ad4b0)(&data_16ad4b0, *(x0_39 + 0x10))

int128_t v0_8
v0_8.q = 0
v0_8:8.q = 0
__builtin_memset(&data_16ad4e8, 0, 0xc0)
data_16ad4e8 = 0xf
data_16ad4d0 = 4
data_16ad4d8 = Shepherd
__builtin_memcpy(&data_16adb88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_16ad4c8 = 0x400000d13
data_16ad4f8:8.d = 0xd24
data_16adbe0 = "skulk"
__builtin_memset(&data_16adbc0, 0, 0x20)
__builtin_memcpy(&data_16adba0, 
    "\x20\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16adbe8 = 0xd
data_16adbf0 = TEXTURE_CARD_GEN_NOCTURNE_SKULK
data_16adc18 = _vtable_for_UI2StateDecl + 0x10
data_16adbf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_SKULK
void* x0_40 = UI2StateDeclTryLookup("n_Skulk")

if (x0_40 == 0)
    (*data_16adc18)(&data_16adc18, "n_Skulk")
    uint32_t x10_96 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16adc18
    *UI2StateDeclI_counter = x10_96 + 1
    data_16adc20 = x11_41
else
    (*data_16adc18)(&data_16adc18, *(x0_40 + 0x10))

data_16adc30 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("n_Skulk")

if (x0_41 == 0)
    (*data_16adc30)(&data_16adc30, "n_Skulk")
    uint32_t x10_98 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16adc30
    *UI2StateDeclI_counter = x10_98 + 1
    data_16adc38 = x11_42
else
    (*data_16adc30)(&data_16adc30, *(x0_41 + 0x10))

__builtin_memset(&data_16adc70, 0, 0xb0)
data_16adc68 = 0x600000006
data_16adc50 = 0x100024
data_16adc58 = Skulk
data_16adc80 = Skulk_OnGain
data_16adc48 = 0x400000d14
data_16adc70:4.d = 1
data_16ae268 = 1
data_16add1c:4 = 0
data_16add10 = 0
data_16add1c = 0x100000000
__builtin_memcpy(&data_16ae308, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16ae328 = 0xffffffff
data_16ae360 = "cobbler"
data_16ae368 = 6
data_16ae370 = TEXTURE_CARD_GEN_NOCTURNE_COBBLER
data_16ae398 = _vtable_for_UI2StateDecl + 0x10
data_16ae378 = SOUND_SOUND_CARDS_FX_LANDPLAY_COBBLER
void* x0_42 = UI2StateDeclTryLookup("n_Cobbler")

if (x0_42 == 0)
    (*data_16ae398)(&data_16ae398, "n_Cobbler")
    uint32_t x10_101 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ae398
    *UI2StateDeclI_counter = x10_101 + 1
    data_16ae3a0 = x11_43
else
    (*data_16ae398)(&data_16ae398, *(x0_42 + 0x10))

data_16ae3b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("n_Cobbler")
int128_t v1_9
int128_t v2_3

if (x0_43 == 0)
    v1_9, v2_3 = (*data_16ae3b0)(&data_16ae3b0, "n_Cobbler")
    uint32_t x10_103 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ae3b0
    *UI2StateDeclI_counter = x10_103 + 1
    data_16ae3b8 = x11_44
else
    v1_9, v2_3 = (*data_16ae3b0)(&data_16ae3b0, *(x0_43 + 0x10))

data_16ae3d0 = 0x40080
data_16ae3d8 = Cobbler
data_16aea88 = v4
v1_9 = data_7e7310
v2_3 = data_7e7320
data_16ae9e8 = 1
data_16aea98 = 8
data_16ae3c8 = 0x500000d15
data_16aeaa0 = v1_9
data_16aeae0 = "crypt"
data_16aeab0 = v2_3
__builtin_memset(&data_16aeac0, 0, 0x20)
data_16aeae8 = 0x26
data_16aeaf0 = TEXTURE_CARD_GEN_NOCTURNE_CRYPT
data_16aeb18 = _vtable_for_UI2StateDecl + 0x10
data_16aeaf8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CRYPT
void* x0_44 = UI2StateDeclTryLookup("n_Crypt")

if (x0_44 == 0)
    (*data_16aeb18)(&data_16aeb18, "n_Crypt")
    uint32_t x10_106 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aeb18
    *UI2StateDeclI_counter = x10_106 + 1
    data_16aeb20 = x11_45
else
    (*data_16aeb18)(&data_16aeb18, *(x0_44 + 0x10))

data_16aeb30 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("n_Crypt")
int128_t v1_10
int128_t v2_4

if (x0_45 == 0)
    v1_10, v2_4 = (*data_16aeb30)(&data_16aeb30, "n_Crypt")
    uint32_t x10_108 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16aeb30
    *UI2StateDeclI_counter = x10_108 + 1
    data_16aeb38 = x11_46
else
    v1_10, v2_4 = (*data_16aeb30)(&data_16aeb30, *(x0_45 + 0x10))

data_16aeb50 = 0x40080
data_16aeb58 = Crypt
data_16af208 = v4
v1_10 = data_7e7350
v2_4 = data_7e7360
data_16af168 = 1
data_16af218 = 0x12
data_16aeb48 = 0x500000d16
data_16af220 = v1_10
data_16af260 = "cursed_village"
data_16af230 = v2_4
__builtin_memset(&data_16af240, 0, 0x20)
data_16af268 = 0x1c
data_16af270 = TEXTURE_CARD_GEN_NOCTURNE_CURSED_VILLAGE
data_16af298 = _vtable_for_UI2StateDecl + 0x10
data_16af278 = SOUND_SOUND_CARDS_FX_LANDPLAY_CURSED_VILLAGE
void* x0_46 = UI2StateDeclTryLookup("n_Cursed_Village")

if (x0_46 == 0)
    (*data_16af298)(&data_16af298, "n_Cursed_Village")
    uint32_t x10_111 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16af298
    *UI2StateDeclI_counter = x10_111 + 1
    data_16af2a0 = x11_47
else
    (*data_16af298)(&data_16af298, *(x0_46 + 0x10))

data_16af2b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("n_Cursed_Village")

if (x0_47 == 0)
    (*data_16af2b0)(&data_16af2b0, "n_Cursed_Village")
    uint32_t x10_113 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16af2b0
    *UI2StateDeclI_counter = x10_113 + 1
    data_16af2b8 = x11_48
else
    (*data_16af2b0)(&data_16af2b0, *(x0_47 + 0x10))

__builtin_memset(&data_16af2f0, 0, 0xb0)
data_16af2e8 = 0x600000006
data_16af2d0 = 0x100004
data_16af2d8 = CursedVillage
data_16af300 = CurseVillage_OnGain
data_16af2c8 = 0x500000d17
data_16af2f0:4.d = 1
data_16af8e8 = 1
data_16af39c:4 = 0
data_16af390 = 0
data_16af39c = 0x100000000
__builtin_memcpy(&data_16af988, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16af9a8 = 0xffffffff
data_16af9e0 = "den_of_sin"
data_16af9e8 = 0x29
data_16af9f0 = TEXTURE_CARD_GEN_NOCTURNE_DEN_OF_SIN
data_16afa18 = _vtable_for_UI2StateDecl + 0x10
data_16af9f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_DEN_OF_SIN
void* x0_48 = UI2StateDeclTryLookup("n_Den_of_Sin")

if (x0_48 == 0)
    (*data_16afa18)(&data_16afa18, "n_Den_of_Sin")
    uint32_t x10_116 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16afa18
    *UI2StateDeclI_counter = x10_116 + 1
    data_16afa20 = x11_49
else
    (*data_16afa18)(&data_16afa18, *(x0_48 + 0x10))

data_16afa30 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("n_Den_of_Sin")

if (x0_49 == 0)
    (*data_16afa30)(&data_16afa30, "n_Den_of_Sin")
    uint32_t x10_118 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16afa30
    *UI2StateDeclI_counter = x10_118 + 1
    data_16afa38 = x11_50
else
    (*data_16afa30)(&data_16afa30, *(x0_49 + 0x10))

__builtin_memset(&data_16afa68, 0, 0xc0)
data_16afa50 = 0x40080
data_16afa58 = DenOfSin
data_16afa78:8.d = 0x3ea
data_16afa48 = 0x500000d18
data_16afa68 = 5
data_16b0068 = 1
__builtin_memcpy(&data_16b0108, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x07\x00\x00\x00\x"
"01\x00\x00\x20\x00\x00\x00\x00", 
    0x20)
data_16b0128 = 0xffffffff
data_16b0160 = "idol"
data_16b0168 = 0x37
data_16b0170 = TEXTURE_CARD_GEN_NOCTURNE_IDOL
data_16b0198 = _vtable_for_UI2StateDecl + 0x10
data_16b0178 = SOUND_SOUND_CARDS_FX_LANDPLAY_IDOL
void* x0_50 = UI2StateDeclTryLookup("n_Idol")

if (x0_50 == 0)
    (*data_16b0198)(&data_16b0198, "n_Idol")
    uint32_t x10_121 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b0198
    *UI2StateDeclI_counter = x10_121 + 1
    data_16b01a0 = x11_51
else
    (*data_16b0198)(&data_16b0198, *(x0_50 + 0x10))

data_16b01b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("n_Idol")

if (x0_51 == 0)
    (*data_16b01b0)(&data_16b01b0, "n_Idol")
    uint32_t x10_123 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b01b0
    *UI2StateDeclI_counter = x10_123 + 1
    data_16b01b8 = x11_52
else
    (*data_16b01b0)(&data_16b01b0, *(x0_51 + 0x10))

data_16b01c8 = 0x500000d19
data_11417a0
__builtin_memset(&data_16b0858, 0, 0x30)
__builtin_memcpy(&data_16b0828, 
    "\x19\x00\x00\x00\x00\x00\x00\x00\x48\x66\xa9\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"1b\x00\x00\x00\x00\x00\x00\x00\x24\x66\xa9\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
data_16b0898 = 7
data_16b01d0 = 0x80022
data_16b01d8 = Idol
data_16b0888 = v4
data_16b08a0 = 0x2010
data_16b08a8 = 0xffffffff
data_16b08e0 = "pooka"
data_16b08e8 = 0x14
data_16b08f0 = TEXTURE_CARD_GEN_NOCTURNE_POOKA
data_16b0918 = _vtable_for_UI2StateDecl + 0x10
data_16b08f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_POOKA
void* x0_52 = UI2StateDeclTryLookup("n_Pooka")

if (x0_52 == 0)
    (*data_16b0918)(&data_16b0918, "n_Pooka")
    uint32_t x10_126 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b0918
    *UI2StateDeclI_counter = x10_126 + 1
    data_16b0920 = x11_53
else
    (*data_16b0918)(&data_16b0918, *(x0_52 + 0x10))

data_16b0930 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("n_Pooka")
int128_t v0_9
int128_t v2_5
int128_t v5

if (x0_53 == 0)
    v0_9, v2_5, v5 = (*data_16b0930)(&data_16b0930, "n_Pooka")
    uint32_t x10_128 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b0930
    *UI2StateDeclI_counter = x10_128 + 1
    data_16b0938 = x11_54
else
    v0_9, v2_5, v5 = (*data_16b0930)(&data_16b0930, *(x0_53 + 0x10))
v0_9.q = 0
v0_9:8.q = 0
__builtin_memset(&data_16b0968, 0, 0x20)
data_16b0968 = 0xf
__builtin_memset(&data_16b0988, 0, 0xa0)
v0_9 = data_11417b0
v2_5 = data_11417c0
data_16b0948 = 0x500000d1a
data_16b0fb8 = v2_5
data_16b0950 = 4
data_16b0958 = Pooka
data_16b0978:8.d = 0xd26
__builtin_memcpy(&data_16b1008, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16b0fa8 = v0_9
__builtin_memset(&data_16b0fc8, 0, 0x40)
data_16b1028 = 0xffffffff
data_16b1060 = "sacred_grove"
data_16b1068 = 0x2a
data_16b1070 = TEXTURE_CARD_GEN_NOCTURNE_SACRED_GROVE
data_16b1098 = _vtable_for_UI2StateDecl + 0x10
data_16b1078 = SOUND_SOUND_CARDS_FX_LANDPLAY_SACRED_GROVE
void* x0_54 = UI2StateDeclTryLookup("n_Sacred_Grove")

if (x0_54 == 0)
    (*data_16b1098)(&data_16b1098, "n_Sacred_Grove")
    uint32_t x10_131 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b1098
    *UI2StateDeclI_counter = x10_131 + 1
    data_16b10a0 = x11_55
else
    (*data_16b1098)(&data_16b1098, *(x0_54 + 0x10))

data_16b10b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("n_Sacred_Grove")

if (x0_55 == 0)
    (*data_16b10b0)(&data_16b10b0, "n_Sacred_Grove")
    uint32_t x10_133 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b10b0
    *UI2StateDeclI_counter = x10_133 + 1
    data_16b10b8 = x11_56
else
    (*data_16b10b0)(&data_16b10b0, *(x0_55 + 0x10))

data_16b10d0 = 0x80004
data_16b10d8 = SacredGrove
__builtin_memcpy(&data_16b1788, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16b10c8 = 0x500000d1b
data_16b17a8 = 0xffffffff
data_16b17e0 = "tormentor"
data_16b17e8 = 8
data_16b17f0 = TEXTURE_CARD_GEN_NOCTURNE_TORMENTOR
data_16b1818 = _vtable_for_UI2StateDecl + 0x10
data_16b17f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_TORMENTOR
void* x0_56 = UI2StateDeclTryLookup("n_Tormentor")

if (x0_56 == 0)
    (*data_16b1818)(&data_16b1818, "n_Tormentor")
    uint32_t x10_136 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b1818
    *UI2StateDeclI_counter = x10_136 + 1
    data_16b1820 = x11_57
else
    (*data_16b1818)(&data_16b1818, *(x0_56 + 0x10))

data_16b1830 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("n_Tormentor")

if (x0_57 == 0)
    (*data_16b1830)(&data_16b1830, "n_Tormentor")
    uint32_t x10_138 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b1830
    *UI2StateDeclI_counter = x10_138 + 1
    data_16b1838 = x11_58
else
    (*data_16b1830)(&data_16b1830, *(x0_57 + 0x10))

__builtin_memset(&data_16b1868, 0, 0xc0)
data_16b1868 = 0xc
data_16b1848 = 0x500000d1c
data_16b1850 = 0x100024
data_16b1858 = Tormentor
data_16b1878:8.d = 0xd2b
data_16b1918:4.d = 0
__builtin_memcpy(&data_16b1f08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"30\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_16b1f28 = 0xffffffff
data_16b1f60 = "tragic_hero"
data_16b1f68 = 6
data_16b1f70 = TEXTURE_CARD_GEN_NOCTURNE_TRAGIC_HERO
data_16b1f78 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRAGIC_HERO
data_16b1f98 = _vtable_for_UI2StateDecl + 0x10
void* x0_58 = UI2StateDeclTryLookup("n_Tragic_Hero")

if (x0_58 == 0)
    (*data_16b1f98)(&data_16b1f98, "n_Tragic_Hero")
    uint32_t x10_140 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b1f98
    *UI2StateDeclI_counter = x10_140 + 1
    data_16b1fa0 = x11_59
else
    (*data_16b1f98)(&data_16b1f98, *(x0_58 + 0x10))

data_16b1fb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("n_Tragic_Hero")

if (x0_59 == 0)
    (*data_16b1fb0)(&data_16b1fb0, "n_Tragic_Hero")
    uint32_t x10_142 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b1fb0
    *UI2StateDeclI_counter = x10_142 + 1
    data_16b1fb8 = x11_60
else
    (*data_16b1fb0)(&data_16b1fb0, *(x0_59 + 0x10))

data_1141840
data_16b1fc8 = 0x500000d1d
data_1141860
data_16b2628 = data_1141810
data_16b2698 = 8
__builtin_memset(&data_16b2638, 0, 0x50)
data_16b1fd0 = 4
data_16b1fd8 = TragicHero
data_16b2688 = v4
data_16b26a0 = 0x32000
data_16b26a8 = 0xffffffff
data_16b26e0 = "vampire"
data_16b26e8 = 0x2a
data_16b26f0 = TEXTURE_CARD_GEN_NOCTURNE_VAMPIRE
data_16b2718 = _vtable_for_UI2StateDecl + 0x10
data_16b26f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_VAMPIRE
void* x0_60 = UI2StateDeclTryLookup("n_Vampire")

if (x0_60 == 0)
    (*data_16b2718)(&data_16b2718, "n_Vampire")
    uint32_t x10_145 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b2718
    *UI2StateDeclI_counter = x10_145 + 1
    data_16b2720 = x11_61
else
    (*data_16b2718)(&data_16b2718, *(x0_60 + 0x10))

data_16b2730 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("n_Vampire")

if (x0_61 == 0)
    (*data_16b2730)(&data_16b2730, "n_Vampire")
    uint32_t x10_147 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b2730
    *UI2StateDeclI_counter = x10_147 + 1
    data_16b2738 = x11_62
else
    (*data_16b2730)(&data_16b2730, *(x0_61 + 0x10))

__builtin_memset(&data_16b2768, 0, 0xc0)
data_16b2750 = 0x140020
data_16b2758 = Vampire
data_16b2768 = 0xc
data_16b2778:8.d = 0xd2a
data_16b2818:4.d = 0x40
__builtin_memcpy(&data_16b2e08, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16b2748 = 0x500000d1e
data_16b2e28 = 0xffffffff
data_16b2e60 = "werewolf"
data_16b2e68 = 0x11
data_16b2e70 = TEXTURE_CARD_GEN_NOCTURNE_WEREWOLF
data_16b2e98 = _vtable_for_UI2StateDecl + 0x10
data_16b2e78 = SOUND_SOUND_CARDS_FX_LANDPLAY_WEREWOLF
void* x0_62 = UI2StateDeclTryLookup("n_Werewolf")

if (x0_62 == 0)
    (*data_16b2e98)(&data_16b2e98, "n_Werewolf")
    uint32_t x10_150 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b2e98
    *UI2StateDeclI_counter = x10_150 + 1
    data_16b2ea0 = x11_63
else
    (*data_16b2e98)(&data_16b2e98, *(x0_62 + 0x10))

data_16b2eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("n_Werewolf")

if (x0_63 == 0)
    (*data_16b2eb0)(&data_16b2eb0, "n_Werewolf")
    uint32_t x10_152 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b2eb0
    *UI2StateDeclI_counter = x10_152 + 1
    data_16b2eb8 = x11_64
else
    (*data_16b2eb0)(&data_16b2eb0, *(x0_63 + 0x10))

data_16b2ec8 = 0x500000d1f
data_16b2ed0 = 0x140024
data_16b2ed8 = Werewolf
__builtin_memcpy(&data_16b3588, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x80\x00\x00\x00\x00\x00", 
    0x20)
data_16b35a8 = 0xffffffff
data_16b35e0 = "raider"
data_16b35e8 = 0x29
data_16b35f0 = TEXTURE_CARD_GEN_NOCTURNE_RAIDER
data_16b3618 = _vtable_for_UI2StateDecl + 0x10
data_16b35f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_RAIDER
void* x0_64 = UI2StateDeclTryLookup("n_Raider")

if (x0_64 == 0)
    (*data_16b3618)(&data_16b3618, "n_Raider")
    uint32_t x10_155 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b3618
    *UI2StateDeclI_counter = x10_155 + 1
    data_16b3620 = x11_65
else
    (*data_16b3618)(&data_16b3618, *(x0_64 + 0x10))

data_16b3630 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("n_Raider")

if (x0_65 == 0)
    (*data_16b3630)(&data_16b3630, "n_Raider")
    uint32_t x10_157 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b3630
    *UI2StateDeclI_counter = x10_157 + 1
    data_16b3638 = x11_66
else
    (*data_16b3630)(&data_16b3630, *(x0_65 + 0x10))

data_16b3650 = 0x400a0
data_16b3658 = Raider
data_16b3c68 = 1
data_16b3d08 = v4
data_16b3d18 = 0
data_16b3648 = 0x600000d20
data_16b3d20 = 0x100000000
data_16b3d60 = "haunted_mirror"
data_16b3d1c = 0
data_16b3d68 = 0xe
data_16b3d70 = TEXTURE_CARD_GEN_NOCTURNE_HAUNTEDMIRROR
data_16b3d98 = _vtable_for_UI2StateDecl + 0x10
data_16b3d78 = SOUND_SOUND_CARDS_FX_LANDPLAY_HAUNTED_MIRROR
void* x0_66 = UI2StateDeclTryLookup("n_Haunted_Mirror")

if (x0_66 == 0)
    (*data_16b3d98)(&data_16b3d98, "n_Haunted_Mirror")
    uint32_t x10_160 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b3d98
    *UI2StateDeclI_counter = x10_160 + 1
    data_16b3da0 = x11_67
else
    (*data_16b3d98)(&data_16b3d98, *(x0_66 + 0x10))

data_16b3db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("n_Haunted_Mirror")

if (x0_67 == 0)
    (*data_16b3db0)(&data_16b3db0, "n_Haunted_Mirror")
    uint32_t x10_162 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b3db0
    *UI2StateDeclI_counter = x10_162 + 1
    data_16b3db8 = x11_68
else
    (*data_16b3db0)(&data_16b3db0, *(x0_67 + 0x10))

data_16b3dc8 = 0xd21
data_16b3dd0 = 0x200002
data_16b3dd8 = HauntedMirror
int128_t v0_10
v0_10.q = 0
v0_10:8.q = 0
data_16b3df0 = zx.o(0)
data_16b3df0:4.d = 2
data_16b3e00 = zx.o(0)
data_16b3e00.q = HauntedMirror_OnTrash
data_16b3e90 = zx.o(0)
data_16b3e90.q = HauntedMirror_OnTrash_Test
__builtin_memset(&data_16b3ea0, 0, 0xc8)
__builtin_memset(&data_16b3e10, 0, 0x80)
data_16b3de8 = 0x600000006
data_16b3e90:0xc = 0x100000003
v0_10 = data_1141890
__builtin_memcpy(&data_16b4428, 
    "\x1c\x00\x00\x00\x00\x00\x00\x00\x28\x6d\xa9\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16b4448 = v0_10
data_16b3ea8 = 0xc
data_16b3eb8:8.d = 0xd2f
data_16b43e8 = 1
data_16b3f58:4.d = 0
__builtin_memset(&data_16b4458, 0, 0x30)
data_16b4488 = v4
data_16b4498 = 0
data_16b44a0 = 0x100000000
data_16b44e0 = "magic_lamp"
data_16b449c = 0
data_16b44e8 = 0x37
data_16b44f0 = TEXTURE_CARD_GEN_NOCTURNE_LAMP
data_16b4518 = _vtable_for_UI2StateDecl + 0x10
data_16b44f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_MAGIC_LAMP
void* x0_68 = UI2StateDeclTryLookup("n_Magic_Lamp")

if (x0_68 == 0)
    (*data_16b4518)(&data_16b4518, "n_Magic_Lamp")
    uint32_t x10_165 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b4518
    *UI2StateDeclI_counter = x10_165 + 1
    data_16b4520 = x11_69
else
    (*data_16b4518)(&data_16b4518, *(x0_68 + 0x10))

data_16b4530 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("n_Magic_Lamp")

if (x0_69 == 0)
    (*data_16b4530)(&data_16b4530, "n_Magic_Lamp")
    uint32_t x10_167 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b4530
    *UI2StateDeclI_counter = x10_167 + 1
    data_16b4538 = x11_70
else
    (*data_16b4530)(&data_16b4530, *(x0_69 + 0x10))

data_16b4548 = 0xd22
__builtin_memset(&data_16b4568, 0, 0x20)
data_16b4568 = 0xc
__builtin_memset(&data_16b4588, 0, 0xa0)
data_16b4550 = 0x200002
data_16b4558 = MagicLamp
__builtin_memcpy(&data_16b4ba8, 
    "\x1c\x00\x00\x00\x00\x00\x00\x00\xc4\x6d\xa9\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16b4578:8.d = 0xd29
data_16b4618:4.d = 0
data_16b4c08 = v4
data_16b4c18 = 0
__builtin_memset(&data_16b4bc8, 0, 0x40)
data_16b4c20 = 0x100000000
data_16b4c60 = "goat"
data_16b4c1c = 0
data_16b4c68 = 8
data_16b4c70 = TEXTURE_CARD_GEN_NOCTURNE_GOAT
data_16b4c98 = _vtable_for_UI2StateDecl + 0x10
data_16b4c78 = SOUND_SOUND_CARDS_FX_LANDPLAY_GOAT
void* x0_70 = UI2StateDeclTryLookup("n_Goat")

if (x0_70 == 0)
    (*data_16b4c98)(&data_16b4c98, "n_Goat")
    uint32_t x10_170 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b4c98
    *UI2StateDeclI_counter = x10_170 + 1
    data_16b4ca0 = x11_71
else
    (*data_16b4c98)(&data_16b4c98, *(x0_70 + 0x10))

data_16b4cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("n_Goat")

if (x0_71 == 0)
    (*data_16b4cb0)(&data_16b4cb0, "n_Goat")
    uint32_t x10_172 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b4cb0
    *UI2StateDeclI_counter = x10_172 + 1
    data_16b4cb8 = x11_72
else
    (*data_16b4cb0)(&data_16b4cb0, *(x0_71 + 0x10))

data_16b4cd0 = 0x200002
data_16b4cd8 = Goat
data_16b5388 = v4
data_16b5398 = 0
data_16b4cc8 = 0x200000d23
data_16b53a0 = 0x100000000
data_16b53e0 = "pasture"
data_16b539c = 0
data_16b53e8 = 0x2d
data_16b53f0 = TEXTURE_CARD_GEN_NOCTURNE_PASTURE
data_16b5418 = _vtable_for_UI2StateDecl + 0x10
data_16b53f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_PASTURE
void* x0_72 = UI2StateDeclTryLookup("n_Pasture")

if (x0_72 == 0)
    (*data_16b5418)(&data_16b5418, "n_Pasture")
    uint32_t x10_175 = *UI2StateDeclI_counter
    uint64_t x11_73 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b5418
    *UI2StateDeclI_counter = x10_175 + 1
    data_16b5420 = x11_73
else
    (*data_16b5418)(&data_16b5418, *(x0_72 + 0x10))

data_16b5430 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("n_Pasture")
int128_t v0_11
int128_t v2_7

if (x0_73 == 0)
    v0_11, v2_7 = (*data_16b5430)(&data_16b5430, "n_Pasture")
    uint32_t x10_177 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b5430
    *UI2StateDeclI_counter = x10_177 + 1
    data_16b5438 = x11_74
else
    v0_11, v2_7 = (*data_16b5430)(&data_16b5430, *(x0_73 + 0x10))
v0_11.q = 0x200000d24
data_7e73c0
data_16b5448 = 0x200000d24
__builtin_memset(&data_16b5ac8, 0, 0x40)
data_7e73d0
data_7e73e0
v0_11 = data_7e73a0
data_16b5aa8 = data_7e7390
data_16b5b18 = 0
data_16b5450 = 0x20000a
data_16b5458 = Pasture
data_16b5460 = Pasture_VP
data_16b5b08 = v4
data_16b5ab8 = v0_11
data_16b5b20 = 0x100000000
data_16b5b60 = "pouch"
data_16b5b1c = 0
data_16b5b68 = 0x2a
data_16b5b70 = TEXTURE_CARD_GEN_NOCTURNE_POUCH
data_16b5b98 = _vtable_for_UI2StateDecl + 0x10
data_16b5b78 = SOUND_SOUND_CARDS_FX_LANDPLAY_POUCH
void* x0_74 = UI2StateDeclTryLookup("n_Pouch")

if (x0_74 == 0)
    (*data_16b5b98)(&data_16b5b98, "n_Pouch")
    uint32_t x10_180 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b5b98
    *UI2StateDeclI_counter = x10_180 + 1
    data_16b5ba0 = x11_75
else
    (*data_16b5b98)(&data_16b5b98, *(x0_74 + 0x10))

data_16b5bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("n_Pouch")

if (x0_75 == 0)
    (*data_16b5bb0)(&data_16b5bb0, "n_Pouch")
    uint32_t x10_182 = *UI2StateDeclI_counter
    uint64_t x11_76 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b5bb0
    *UI2StateDeclI_counter = x10_182 + 1
    data_16b5bb8 = x11_76
else
    (*data_16b5bb0)(&data_16b5bb0, *(x0_75 + 0x10))

data_16b5bd0 = 0x200002
data_16b5bd8 = Pouch
data_16b6288 = v4
data_16b6298 = 0
data_16b5bc8 = 0x200000d25
data_16b62a0 = 0x100000000
data_16b62e0 = "cursed_gold"
data_16b629c = 0
data_16b62e8 = 0x14
data_16b62f0 = TEXTURE_CARD_GEN_NOCTURNE_CURSEDGOLD
data_16b6318 = _vtable_for_UI2StateDecl + 0x10
data_16b62f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_CURSED_GOLD
void* x0_76 = UI2StateDeclTryLookup("n_Cursed_Gold")

if (x0_76 == 0)
    (*data_16b6318)(&data_16b6318, "n_Cursed_Gold")
    uint32_t x10_185 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b6318
    *UI2StateDeclI_counter = x10_185 + 1
    data_16b6320 = x11_77
else
    (*data_16b6318)(&data_16b6318, *(x0_76 + 0x10))

data_16b6330 = _vtable_for_UI2StateDecl + 0x10
void* x0_77 = UI2StateDeclTryLookup("n_Cursed_Gold")

if (x0_77 == 0)
    (*data_16b6330)(&data_16b6330, "n_Cursed_Gold")
    uint32_t x10_187 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b6330
    *UI2StateDeclI_counter = x10_187 + 1
    data_16b6338 = x11_78
else
    (*data_16b6330)(&data_16b6330, *(x0_77 + 0x10))

data_1141960
data_16b6348 = 0x400000d26
data_1141980
data_16b69a8 = data_1141930
data_16b6a18 = 0
__builtin_memset(&data_16b69b8, 0, 0x50)
data_16b6350 = 0x200002
data_16b6358 = CursedGold
data_16b6a08 = v4
data_16b6a20 = 0x100000000
data_16b6a60 = "lucky_coin"
data_16b6a1c = 0
data_16b6a68 = 8
data_16b6a70 = TEXTURE_CARD_GEN_NOCTURNE_LUCKYCOIN
data_16b6a98 = _vtable_for_UI2StateDecl + 0x10
data_16b6a78 = SOUND_SOUND_CARDS_FX_LANDPLAY_LUCKY_COIN
void* x0_78 = UI2StateDeclTryLookup("n_Lucky_Coin")

if (x0_78 == 0)
    (*data_16b6a98)(&data_16b6a98, "n_Lucky_Coin")
    uint32_t x10_190 = *UI2StateDeclI_counter
    uint64_t x11_79 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b6a98
    *UI2StateDeclI_counter = x10_190 + 1
    data_16b6aa0 = x11_79
else
    (*data_16b6a98)(&data_16b6a98, *(x0_78 + 0x10))

data_16b6ab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_79 = UI2StateDeclTryLookup("n_Lucky_Coin")

if (x0_79 == 0)
    (*data_16b6ab0)(&data_16b6ab0, "n_Lucky_Coin")
    uint32_t x10_192 = *UI2StateDeclI_counter
    uint64_t x11_80 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b6ab0
    *UI2StateDeclI_counter = x10_192 + 1
    data_16b6ab8 = x11_80
else
    (*data_16b6ab0)(&data_16b6ab0, *(x0_79 + 0x10))

data_16b6ad0 = 0x200002
data_16b6ad8 = LuckyCoin
data_16b7188 = v4
data_16b7198 = 0
data_16b6ac8 = 0x400000d27
data_16b71a0 = 0x100000000
data_16b71e0 = "will_o_wisp"
data_16b719c = 0
data_16b71e8 = 0x1d
data_16b71f0 = TEXTURE_CARD_GEN_NOCTURNE_WILL_O_WISP
data_16b7218 = _vtable_for_UI2StateDecl + 0x10
data_16b71f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_WILL_O_WISP
void* x0_80 = UI2StateDeclTryLookup("n_Will_o_Wisp")

if (x0_80 == 0)
    (*data_16b7218)(&data_16b7218, "n_Will_o_Wisp")
    uint32_t x10_195 = *UI2StateDeclI_counter
    uint64_t x11_81 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b7218
    *UI2StateDeclI_counter = x10_195 + 1
    data_16b7220 = x11_81
else
    (*data_16b7218)(&data_16b7218, *(x0_80 + 0x10))

data_16b7230 = _vtable_for_UI2StateDecl + 0x10
void* x0_81 = UI2StateDeclTryLookup("n_Will_o_Wisp")

if (x0_81 == 0)
    (*data_16b7230)(&data_16b7230, "n_Will_o_Wisp")
    uint32_t x10_197 = *UI2StateDeclI_counter
    uint64_t x11_82 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b7230
    *UI2StateDeclI_counter = x10_197 + 1
    data_16b7238 = x11_82
else
    (*data_16b7230)(&data_16b7230, *(x0_81 + 0x10))

int128_t v0_12
v0_12.q = 0
v0_12:8.q = 0
__builtin_memset(&data_16b7268, 0, 0xc0)
v0_12.q = 0x8000000000d28
data_16b7250 = 0x1000000400004
data_16b7258 = WillOWisp
data_16b7248 = 0x8000000000d28
data_16b7268 = 0xb
data_16b72f8:8.d = 1
data_16b7908 = v4
data_16b7918 = 0
data_16b7278:8 = 0xc00000000
data_16b7920 = 0x100000000
data_16b7960 = "wish"
data_16b791c = 0
data_16b7968 = 0x27
data_16b7970 = TEXTURE_CARD_GEN_NOCTURNE_WISH
data_16b7978 = SOUND_SOUND_CARDS_FX_LANDPLAY_WISH
data_16b7980 = SOUND_SOUND_CARDS_FX_GAIN_WISH
data_16b7998 = _vtable_for_UI2StateDecl + 0x10
void* x0_82 = UI2StateDeclTryLookup("n_Wish")

if (x0_82 == 0)
    (*data_16b7998)(&data_16b7998, "n_Wish")
    uint32_t x10_199 = *UI2StateDeclI_counter
    uint64_t x11_83 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b7998
    *UI2StateDeclI_counter = x10_199 + 1
    data_16b79a0 = x11_83
else
    (*data_16b7998)(&data_16b7998, *(x0_82 + 0x10))

data_16b79b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_83 = UI2StateDeclTryLookup("n_Wish")

if (x0_83 == 0)
    (*data_16b79b0)(&data_16b79b0, "n_Wish")
    uint32_t x10_201 = *UI2StateDeclI_counter
    uint64_t x11_84 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b79b0
    *UI2StateDeclI_counter = x10_201 + 1
    data_16b79b8 = x11_84
else
    (*data_16b79b0)(&data_16b79b0, *(x0_83 + 0x10))

__builtin_memset(&data_16b79e8, 0, 0xc0)
data_16b79d0 = 0x1000000000004
data_16b79d8 = Wish
data_16b79e8 = 0xb
data_16b7a78:8.d = 1
data_16b79f8:8 = 0xc00000000
data_16b8088 = v4
data_16b8098 = 0
data_16b79c8 = 0x8000000000d29
data_16b80a0 = 0x100000000
data_16b80e0 = &data_797e32
data_16b809c = 0
data_16b80e8 = 0x2a
data_16b80f0 = TEXTURE_CARD_GEN_NOCTURNE_BAT
data_16b8118 = _vtable_for_UI2StateDecl + 0x10
data_16b80f8 = SOUND_SOUND_CARDS_FX_LANDPLAY_BAT
void* x0_84 = UI2StateDeclTryLookup("n_Bat")

if (x0_84 == 0)
    (*data_16b8118)(&data_16b8118, "n_Bat")
    uint32_t x10_204 = *UI2StateDeclI_counter
    uint64_t x11_85 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b8118
    *UI2StateDeclI_counter = x10_204 + 1
    data_16b8120 = x11_85
else
    (*data_16b8118)(&data_16b8118, *(x0_84 + 0x10))

data_16b8130 = _vtable_for_UI2StateDecl + 0x10
void* x0_85 = UI2StateDeclTryLookup("n_Bat")

if (x0_85 == 0)
    (*data_16b8130)(&data_16b8130, "n_Bat")
    uint32_t x10_206 = *UI2StateDeclI_counter
    uint64_t x11_86 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b8130
    *UI2StateDeclI_counter = x10_206 + 1
    data_16b8138 = x11_86
else
    (*data_16b8130)(&data_16b8130, *(x0_85 + 0x10))

data_11419c0
data_16b8148 = 0x8000200000d2a
data_11419e0
data_16b87a8 = data_1141990
data_16b8818 = 0
__builtin_memset(&data_16b87b8, 0, 0x50)
data_16b8150 = 0x1000000040000
data_16b8158 = Bat
data_16b8808 = v4
data_16b8860 = &data_7267e9
data_16b8820 = 0x100000000
data_16b881c = 0
data_16b8868 = 8
data_16b8870 = TEXTURE_CARD_GEN_NOCTURNE_IMP
data_16b8898 = _vtable_for_UI2StateDecl + 0x10
data_16b8878 = SOUND_SOUND_CARDS_FX_LANDPLAY_IMP
void* x0_86 = UI2StateDeclTryLookup("n_Imp")

if (x0_86 == 0)
    (*data_16b8898)(&data_16b8898, "n_Imp")
    uint32_t x10_209 = *UI2StateDeclI_counter
    uint64_t x11_87 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b8898
    *UI2StateDeclI_counter = x10_209 + 1
    data_16b88a0 = x11_87
else
    (*data_16b8898)(&data_16b8898, *(x0_86 + 0x10))

data_16b88b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_87 = UI2StateDeclTryLookup("n_Imp")
int128_t v0_13
int128_t v4_8

if (x0_87 == 0)
    v0_13, v4_8 = (*data_16b88b0)(&data_16b88b0, "n_Imp")
    uint32_t x10_211 = *UI2StateDeclI_counter
    uint64_t x11_88 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b88b0
    *UI2StateDeclI_counter = x10_211 + 1
    data_16b88b8 = x11_88
else
    v0_13, v4_8 = (*data_16b88b0)(&data_16b88b0, *(x0_87 + 0x10))
data_16b88d0 = 0x1000000400004
data_16b88d8 = Imp
v0_13.q = 0
v0_13:8.q = 0
__builtin_memset(&data_16b88e8, 0, 0xc0)
v0_13 = data_11419f0
data_16b88c8 = 0x8000200000d2b
data_16b88f8:8 = 0xd00000000
__builtin_memset(&data_16b8f38, 0, 0x50)
data_16b8f28 = v0_13
data_16b88e8 = 0xb
data_16b8978:8.d = 1
data_16b8f88 = v4
data_16b8f98 = 0
data_16b8fa0 = 0x100000000
data_16b8fe0 = "zombie_apprentice"
data_16b8f9c = 0
data_16b8fe8 = 0x28
data_16b8ff0 = TEXTURE_CARD_GEN_NOCTURNE_ZOMBIEAPPRENTICE
data_16b9018 = _vtable_for_UI2StateDecl + 0x10
data_16b8ff8 = SOUND_SOUND_CARDS_FX_LANDPLAY_ZOMBIE_APPRENTICE
void* x0_88 = UI2StateDeclTryLookup("n_Zombie_Apprentice")

if (x0_88 == 0)
    (*data_16b9018)(&data_16b9018, "n_Zombie_Apprentice")
    uint32_t x10_214 = *UI2StateDeclI_counter
    uint64_t x11_89 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b9018
    *UI2StateDeclI_counter = x10_214 + 1
    data_16b9020 = x11_89
else
    (*data_16b9018)(&data_16b9018, *(x0_88 + 0x10))

data_16b9030 = _vtable_for_UI2StateDecl + 0x10
void* x0_89 = UI2StateDeclTryLookup("n_Zombie_Apprentice")
int128_t v0_14
int128_t v2_10

if (x0_89 == 0)
    v0_14, v2_10 = (*data_16b9030)(&data_16b9030, "n_Zombie_Apprentice")
    uint32_t x10_216 = *UI2StateDeclI_counter
    uint64_t x11_90 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b9030
    *UI2StateDeclI_counter = x10_216 + 1
    data_16b9038 = x11_90
else
    v0_14, v2_10 = (*data_16b9030)(&data_16b9030, *(x0_89 + 0x10))
v0_14.q = 0x300000d2c
data_1141a80
data_16b9048 = 0x300000d2c
__builtin_memset(&data_16b96c8, 0, 0x40)
data_1141a90
data_1141aa0
v0_14 = data_1141a60
data_16b96a8 = data_1141a50
data_16b9718 = 0
data_16b9050 = 0x1000000800004
data_16b9058 = ZombieApprentice
data_16b9708 = v4
data_16b96b8 = v0_14
data_16b9720 = 0x100000000
data_16b9760 = "zombie_mason"
data_16b971c = 0
data_16b9768 = 0x28
data_16b9770 = TEXTURE_CARD_GEN_NOCTURNE_ZOMBIEMASON
data_16b9798 = _vtable_for_UI2StateDecl + 0x10
data_16b9778 = SOUND_SOUND_CARDS_FX_LANDPLAY_ZOMBIE_MASON
void* x0_90 = UI2StateDeclTryLookup("n_Zombie_Mason")

if (x0_90 == 0)
    (*data_16b9798)(&data_16b9798, "n_Zombie_Mason")
    uint32_t x10_219 = *UI2StateDeclI_counter
    uint64_t x11_91 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b9798
    *UI2StateDeclI_counter = x10_219 + 1
    data_16b97a0 = x11_91
else
    (*data_16b9798)(&data_16b9798, *(x0_90 + 0x10))

data_16b97b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_91 = UI2StateDeclTryLookup("n_Zombie_Mason")

if (x0_91 == 0)
    (*data_16b97b0)(&data_16b97b0, "n_Zombie_Mason")
    uint32_t x10_221 = *UI2StateDeclI_counter
    uint64_t x11_92 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b97b0
    *UI2StateDeclI_counter = x10_221 + 1
    data_16b97b8 = x11_92
else
    (*data_16b97b0)(&data_16b97b0, *(x0_91 + 0x10))

data_1141ae0
data_16b97c8 = 0x300000d2d
data_1141b00
data_16b9e28 = data_1141ab0
data_16b9e98 = 0
__builtin_memset(&data_16b9e38, 0, 0x50)
data_16b97d0 = 0x1000000800004
data_16b97d8 = ZombieMason
data_16b9e88 = v4
data_16b9ea0 = 0x100000000
data_16b9ee0 = "zombie_spy"
data_16b9e9c = 0
data_16b9ee8 = 0x28
data_16b9ef0 = TEXTURE_CARD_GEN_NOCTURNE_ZOMBIESPY
data_16b9f18 = _vtable_for_UI2StateDecl + 0x10
data_16b9ef8 = SOUND_SOUND_CARDS_FX_LANDPLAY_ZOMBIE_SPY
void* x0_92 = UI2StateDeclTryLookup("n_Zombie_Spy")

if (x0_92 == 0)
    (*data_16b9f18)(&data_16b9f18, "n_Zombie_Spy")
    uint32_t x10_224 = *UI2StateDeclI_counter
    uint64_t x11_93 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b9f18
    *UI2StateDeclI_counter = x10_224 + 1
    data_16b9f20 = x11_93
else
    (*data_16b9f18)(&data_16b9f18, *(x0_92 + 0x10))

data_16b9f30 = _vtable_for_UI2StateDecl + 0x10
void* x0_93 = UI2StateDeclTryLookup("n_Zombie_Spy")

if (x0_93 == 0)
    (*data_16b9f30)(&data_16b9f30, "n_Zombie_Spy")
    uint32_t x10_226 = *UI2StateDeclI_counter
    uint64_t x11_94 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16b9f30
    *UI2StateDeclI_counter = x10_226 + 1
    data_16b9f38 = x11_94
else
    (*data_16b9f30)(&data_16b9f30, *(x0_93 + 0x10))

data_16b9f50 = 0x1000000800004
data_16b9f58 = ZombieSpy
data_16ba608 = v4
data_16ba618 = 0
data_16b9f48 = 0x300000d2e
data_16ba620 = 0x100000000
data_16ba660 = "ghost"
data_16ba61c = 0
data_16ba668 = 0xe
data_16ba670 = TEXTURE_CARD_GEN_NOCTURNE_GHOST
data_16ba678 = SOUND_SOUND_CARDS_FX_LANDPLAY_GHOST
data_16ba680 = SOUND_SOUND_CARDS_FX_GAIN_GHOST
data_16ba698 = _vtable_for_UI2StateDecl + 0x10
void* x0_94 = UI2StateDeclTryLookup("n_Ghost")

if (x0_94 == 0)
    (*data_16ba698)(&data_16ba698, "n_Ghost")
    uint32_t x10_228 = *UI2StateDeclI_counter
    uint64_t x11_95 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ba698
    *UI2StateDeclI_counter = x10_228 + 1
    data_16ba6a0 = x11_95
else
    (*data_16ba698)(&data_16ba698, *(x0_94 + 0x10))

data_16ba6b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_95 = UI2StateDeclTryLookup("n_Ghost")
int128_t v0_15
int128_t v4_9

if (x0_95 == 0)
    v0_15, v4_9 = (*data_16ba6b0)(&data_16ba6b0, "n_Ghost")
    uint32_t x10_230 = *UI2StateDeclI_counter
    uint64_t x11_96 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16ba6b0
    *UI2StateDeclI_counter = x10_230 + 1
    data_16ba6b8 = x11_96
else
    v0_15, v4_9 = (*data_16ba6b0)(&data_16ba6b0, *(x0_95 + 0x10))
data_16ba6d0 = 0x1000000440080
data_16ba6d8 = Ghost
v0_15.q = 0
v0_15:8.q = 0
__builtin_memset(&data_16ba6e8, 0, 0xc0)
v0_15 = data_1141b10
data_16ba6c8 = 0x8000400000d2f
data_16ba6f8:8 = 0x600000000
__builtin_memset(&data_16bad38, 0, 0x50)
data_16bad28 = v0_15
data_16ba6e8 = 0xb
data_16ba778:8.d = 1
data_16bace8 = 1
data_16bad88 = v4
data_16bad98 = 0
data_16bada0 = 0x100000000
data_16bade0 = "boons"
data_16bad9c = 0
data_16bade8 = 0
data_16bae18 = _vtable_for_UI2StateDecl + 0x10
void* x0_96 = UI2StateDeclTryLookup("n_Boons")

if (x0_96 == 0)
    (*data_16bae18)(&data_16bae18, "n_Boons")
    uint32_t x10_232 = *UI2StateDeclI_counter
    uint64_t x11_97 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bae18
    *UI2StateDeclI_counter = x10_232 + 1
    data_16bae20 = x11_97
else
    (*data_16bae18)(&data_16bae18, *(x0_96 + 0x10))

data_16bae30 = _vtable_for_UI2StateDecl + 0x10
void* x0_97 = UI2StateDeclTryLookup("n_Boons")

if (x0_97 == 0)
    (*data_16bae30)(&data_16bae30, "n_Boons")
    uint32_t x10_234 = *UI2StateDeclI_counter
    uint64_t x11_98 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bae30
    *UI2StateDeclI_counter = x10_234 + 1
    data_16bae38 = x11_98
else
    (*data_16bae30)(&data_16bae30, *(x0_97 + 0x10))

int128_t v0_16
v0_16.q = 0x10000000000d30
data_16bae48 = 0x10000000000d30
data_16bae50 = 0x1000000000000
v0_16.q = 0
v0_16:8.q = 0
__builtin_memset(&data_16bae68, 0, 0x20)
data_16bae78:8 = Boons_Setup
data_16bae68 = 0xa
__builtin_memset(&data_16bae88, 0, 0x160)
data_16baf28 = 0xc
data_16baf38:8.d = 0xd28
data_16bafd8:4.d = 0
data_16bb508 = v4
data_16bb518 = 0
data_16bb520 = 0x100000000
data_16bb560 = "the_earths_gift"
data_16bb51c = 0
data_16bb568 = 0x1d
data_16bb570 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_1
data_16bb598 = _vtable_for_UI2StateDecl + 0x10
data_16bb578 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_EARTHS_GIFT
void* x0_98 = UI2StateDeclTryLookup("n_The_Earths_Gift")

if (x0_98 == 0)
    (*data_16bb598)(&data_16bb598, "n_The_Earths_Gift")
    uint32_t x10_237 = *UI2StateDeclI_counter
    uint64_t x11_99 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bb598
    *UI2StateDeclI_counter = x10_237 + 1
    data_16bb5a0 = x11_99
else
    (*data_16bb598)(&data_16bb598, *(x0_98 + 0x10))

data_16bb5b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_99 = UI2StateDeclTryLookup("n_The_Earths_Gift")

if (x0_99 == 0)
    (*data_16bb5b0)(&data_16bb5b0, "n_The_Earths_Gift")
    uint32_t x10_239 = *UI2StateDeclI_counter
    uint64_t x11_100 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bb5b0
    *UI2StateDeclI_counter = x10_239 + 1
    data_16bb5b8 = x11_100
else
    (*data_16bb5b0)(&data_16bb5b0, *(x0_99 + 0x10))

data_16bb5d0 = 0x1000000
data_16bb5d8 = TheEarthsGift
data_16bbc88 = v4
data_16bbc98 = 0
data_16bb5c8 = 0x10000000000d31
data_16bbca0 = 0x100000000
data_16bbce0 = "the_fields_gift"
data_16bbc9c = 0
data_16bbce8 = 0x1d
data_16bbcf0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_4
data_16bbd18 = _vtable_for_UI2StateDecl + 0x10
data_16bbcf8 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_FIELDS_GIFT
void* x0_100 = UI2StateDeclTryLookup("n_The_Fields_Gift")

if (x0_100 == 0)
    (*data_16bbd18)(&data_16bbd18, "n_The_Fields_Gift")
    uint32_t x10_242 = *UI2StateDeclI_counter
    uint64_t x11_101 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bbd18
    *UI2StateDeclI_counter = x10_242 + 1
    data_16bbd20 = x11_101
else
    (*data_16bbd18)(&data_16bbd18, *(x0_100 + 0x10))

data_16bbd30 = _vtable_for_UI2StateDecl + 0x10
void* x0_101 = UI2StateDeclTryLookup("n_The_Fields_Gift")

if (x0_101 == 0)
    (*data_16bbd30)(&data_16bbd30, "n_The_Fields_Gift")
    uint32_t x10_244 = *UI2StateDeclI_counter
    uint64_t x11_102 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bbd30
    *UI2StateDeclI_counter = x10_244 + 1
    data_16bbd38 = x11_102
else
    (*data_16bbd30)(&data_16bbd30, *(x0_101 + 0x10))

data_16bbd50 = 0x1000000
data_16bbd58 = TheFieldsGift
data_16bc408 = v4
data_16bc418 = 0
data_16bbd48 = 0x10000000000d32
data_16bc420 = 0x100000000
data_16bc460 = "the_flames_gift"
data_16bc41c = 0
data_16bc468 = 0x1d
data_16bc470 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_7
data_16bc498 = _vtable_for_UI2StateDecl + 0x10
data_16bc478 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_FLAMES_GIFT
void* x0_102 = UI2StateDeclTryLookup("n_The_Flames_Gift")

if (x0_102 == 0)
    (*data_16bc498)(&data_16bc498, "n_The_Flames_Gift")
    uint32_t x10_247 = *UI2StateDeclI_counter
    uint64_t x11_103 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bc498
    *UI2StateDeclI_counter = x10_247 + 1
    data_16bc4a0 = x11_103
else
    (*data_16bc498)(&data_16bc498, *(x0_102 + 0x10))

data_16bc4b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_103 = UI2StateDeclTryLookup("n_The_Flames_Gift")

if (x0_103 == 0)
    (*data_16bc4b0)(&data_16bc4b0, "n_The_Flames_Gift")
    uint32_t x10_249 = *UI2StateDeclI_counter
    uint64_t x11_104 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bc4b0
    *UI2StateDeclI_counter = x10_249 + 1
    data_16bc4b8 = x11_104
else
    (*data_16bc4b0)(&data_16bc4b0, *(x0_103 + 0x10))

data_16bc4d0 = 0x1000000
data_16bc4d8 = TheFlamesGift
data_16bcb88 = v4
data_16bcb98 = 0
data_16bc4c8 = 0x10000000000d33
data_16bcba0 = 0x100000000
data_16bcbe0 = "the_forests_gift"
data_16bcb9c = 0
data_16bcbe8 = 0x1d
data_16bcbf0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_9
data_16bcc18 = _vtable_for_UI2StateDecl + 0x10
data_16bcbf8 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_FORESTS_GIFT
void* x0_104 = UI2StateDeclTryLookup("n_The_Forests_Gift")

if (x0_104 == 0)
    (*data_16bcc18)(&data_16bcc18, "n_The_Forests_Gift")
    uint32_t x10_252 = *UI2StateDeclI_counter
    uint64_t x11_105 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bcc18
    *UI2StateDeclI_counter = x10_252 + 1
    data_16bcc20 = x11_105
else
    (*data_16bcc18)(&data_16bcc18, *(x0_104 + 0x10))

data_16bcc30 = _vtable_for_UI2StateDecl + 0x10
void* x0_105 = UI2StateDeclTryLookup("n_The_Forests_Gift")

if (x0_105 == 0)
    (*data_16bcc30)(&data_16bcc30, "n_The_Forests_Gift")
    uint32_t x10_254 = *UI2StateDeclI_counter
    uint64_t x11_106 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bcc30
    *UI2StateDeclI_counter = x10_254 + 1
    data_16bcc38 = x11_106
else
    (*data_16bcc30)(&data_16bcc30, *(x0_105 + 0x10))

data_16bcc50 = 0x1000000
data_16bcc58 = TheForestsGift
data_16bd308 = v4
data_16bd318 = 0
data_16bcc48 = 0x10000000000d34
data_16bd320 = 0x100000000
data_16bd360 = "the_moons_gift"
data_16bd31c = 0
data_16bd368 = 0x1d
data_16bd370 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_12
data_16bd398 = _vtable_for_UI2StateDecl + 0x10
data_16bd378 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_MOONS_GIFT
void* x0_106 = UI2StateDeclTryLookup("n_The_Moons_Gift")

if (x0_106 == 0)
    (*data_16bd398)(&data_16bd398, "n_The_Moons_Gift")
    uint32_t x10_257 = *UI2StateDeclI_counter
    uint64_t x11_107 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bd398
    *UI2StateDeclI_counter = x10_257 + 1
    data_16bd3a0 = x11_107
else
    (*data_16bd398)(&data_16bd398, *(x0_106 + 0x10))

data_16bd3b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_107 = UI2StateDeclTryLookup("n_The_Moons_Gift")

if (x0_107 == 0)
    (*data_16bd3b0)(&data_16bd3b0, "n_The_Moons_Gift")
    uint32_t x10_259 = *UI2StateDeclI_counter
    uint64_t x11_108 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bd3b0
    *UI2StateDeclI_counter = x10_259 + 1
    data_16bd3b8 = x11_108
else
    (*data_16bd3b0)(&data_16bd3b0, *(x0_107 + 0x10))

data_1141ba0
data_16bd3c8 = 0x10000000000d35
data_1141bc0
data_16bda28 = data_1141b70
data_16bda98 = 0
__builtin_memset(&data_16bda38, 0, 0x50)
data_16bd3d0 = 0x1000000
data_16bd3d8 = TheMoonsGift
data_16bda88 = v4
data_16bdae0 = "the_mountains_gift"
data_16bdaa0 = 0x100000000
data_16bda9c = 0
data_16bdae8 = 0x1d
data_16bdaf0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_14
data_16bdb18 = _vtable_for_UI2StateDecl + 0x10
data_16bdaf8 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_MOUNTAINS_GIFT
void* x0_108 = UI2StateDeclTryLookup("n_The_Mountains_Gift")

if (x0_108 == 0)
    (*data_16bdb18)(&data_16bdb18, "n_The_Mountains_Gift")
    uint32_t x10_262 = *UI2StateDeclI_counter
    uint64_t x11_109 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bdb18
    *UI2StateDeclI_counter = x10_262 + 1
    data_16bdb20 = x11_109
else
    (*data_16bdb18)(&data_16bdb18, *(x0_108 + 0x10))

data_16bdb30 = _vtable_for_UI2StateDecl + 0x10
void* x0_109 = UI2StateDeclTryLookup("n_The_Mountains_Gift")

if (x0_109 == 0)
    (*data_16bdb30)(&data_16bdb30, "n_The_Mountains_Gift")
    uint32_t x10_264 = *UI2StateDeclI_counter
    uint64_t x11_110 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bdb30
    *UI2StateDeclI_counter = x10_264 + 1
    data_16bdb38 = x11_110
else
    (*data_16bdb30)(&data_16bdb30, *(x0_109 + 0x10))

data_16bdb50 = 0x1000000
data_16bdb58 = TheMountainsGift
data_16be208 = v4
data_16be218 = 0
data_16bdb48 = 0x10000000000d36
data_16be220 = 0x100000000
data_16be260 = "the_rivers_gift"
data_16be21c = 0
data_16be268 = 0x1d
data_16be270 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_16
data_16be298 = _vtable_for_UI2StateDecl + 0x10
data_16be278 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_RIVERS_GIFT
void* x0_110 = UI2StateDeclTryLookup("n_The_Rivers_Gift")

if (x0_110 == 0)
    (*data_16be298)(&data_16be298, "n_The_Rivers_Gift")
    uint32_t x10_267 = *UI2StateDeclI_counter
    uint64_t x11_111 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16be298
    *UI2StateDeclI_counter = x10_267 + 1
    data_16be2a0 = x11_111
else
    (*data_16be298)(&data_16be298, *(x0_110 + 0x10))

data_16be2b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_111 = UI2StateDeclTryLookup("n_The_Rivers_Gift")

if (x0_111 == 0)
    (*data_16be2b0)(&data_16be2b0, "n_The_Rivers_Gift")
    uint32_t x10_269 = *UI2StateDeclI_counter
    uint64_t x11_112 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16be2b0
    *UI2StateDeclI_counter = x10_269 + 1
    data_16be2b8 = x11_112
else
    (*data_16be2b0)(&data_16be2b0, *(x0_111 + 0x10))

data_16be2d0 = 0x1000000
data_16be2d8 = TheRiversGift
data_16be8e8 = 1
data_16be988 = v4
data_16be998 = 0
data_16be2c8 = 0x10000000000d37
data_16be9a0 = 0x100000000
data_16be9e0 = "the_seas_gift"
data_16be99c = 0
data_16be9e8 = 0x1d
data_16be9f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_18
data_16bea18 = _vtable_for_UI2StateDecl + 0x10
data_16be9f8 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_SEAS_GIFT
void* x0_112 = UI2StateDeclTryLookup("n_The_Seas_Gift")

if (x0_112 == 0)
    (*data_16bea18)(&data_16bea18, "n_The_Seas_Gift")
    uint32_t x10_272 = *UI2StateDeclI_counter
    uint64_t x11_113 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bea18
    *UI2StateDeclI_counter = x10_272 + 1
    data_16bea20 = x11_113
else
    (*data_16bea18)(&data_16bea18, *(x0_112 + 0x10))

data_16bea30 = _vtable_for_UI2StateDecl + 0x10
void* x0_113 = UI2StateDeclTryLookup("n_The_Seas_Gift")

if (x0_113 == 0)
    (*data_16bea30)(&data_16bea30, "n_The_Seas_Gift")
    uint32_t x10_274 = *UI2StateDeclI_counter
    uint64_t x11_114 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bea30
    *UI2StateDeclI_counter = x10_274 + 1
    data_16bea38 = x11_114
else
    (*data_16bea30)(&data_16bea30, *(x0_113 + 0x10))

data_16bea50 = 0x1000000
data_16bea58 = TheSeasGift
data_16bf108 = v4
data_16bf118 = 0
data_16bea48 = 0x10000000000d38
data_16bf120 = 0x100000000
data_16bf160 = "the_skys_gift"
data_16bf11c = 0
data_16bf168 = 0x1d
data_16bf170 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_20
data_16bf198 = _vtable_for_UI2StateDecl + 0x10
data_16bf178 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_SKYS_GIFT
void* x0_114 = UI2StateDeclTryLookup("n_The_Skys_Gift")

if (x0_114 == 0)
    (*data_16bf198)(&data_16bf198, "n_The_Skys_Gift")
    uint32_t x10_277 = *UI2StateDeclI_counter
    uint64_t x11_115 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bf198
    *UI2StateDeclI_counter = x10_277 + 1
    data_16bf1a0 = x11_115
else
    (*data_16bf198)(&data_16bf198, *(x0_114 + 0x10))

data_16bf1b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_115 = UI2StateDeclTryLookup("n_The_Skys_Gift")

if (x0_115 == 0)
    (*data_16bf1b0)(&data_16bf1b0, "n_The_Skys_Gift")
    uint32_t x10_279 = *UI2StateDeclI_counter
    uint64_t x11_116 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bf1b0
    *UI2StateDeclI_counter = x10_279 + 1
    data_16bf1b8 = x11_116
else
    (*data_16bf1b0)(&data_16bf1b0, *(x0_115 + 0x10))

data_16bf1d0 = 0x1000000
data_16bf1d8 = TheSkysGift
data_16bf888 = v4
data_16bf898 = 0
data_16bf1c8 = 0x10000000000d39
data_16bf8a0 = 0x100000000
data_16bf8e0 = "the_suns_gift"
data_16bf89c = 0
data_16bf8e8 = 0x1d
data_16bf8f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_22
data_16bf918 = _vtable_for_UI2StateDecl + 0x10
data_16bf8f8 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_SUNS_GIFT
void* x0_116 = UI2StateDeclTryLookup("n_The_Suns_Gift")

if (x0_116 == 0)
    (*data_16bf918)(&data_16bf918, "n_The_Suns_Gift")
    uint32_t x10_282 = *UI2StateDeclI_counter
    uint64_t x11_117 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bf918
    *UI2StateDeclI_counter = x10_282 + 1
    data_16bf920 = x11_117
else
    (*data_16bf918)(&data_16bf918, *(x0_116 + 0x10))

data_16bf930 = _vtable_for_UI2StateDecl + 0x10
void* x0_117 = UI2StateDeclTryLookup("n_The_Suns_Gift")

if (x0_117 == 0)
    (*data_16bf930)(&data_16bf930, "n_The_Suns_Gift")
    uint32_t x10_284 = *UI2StateDeclI_counter
    uint64_t x11_118 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16bf930
    *UI2StateDeclI_counter = x10_284 + 1
    data_16bf938 = x11_118
else
    (*data_16bf930)(&data_16bf930, *(x0_117 + 0x10))

data_16bf950 = 0x1000000
data_16bf958 = TheSunsGift
data_16c0008 = v4
data_16c0018 = 0
data_16bf948 = 0x10000000000d3a
data_16c0020 = 0x100000000
data_16c0060 = "the_swamps_gift"
data_16c001c = 0
data_16c0068 = 0x1d
data_16c0070 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_24
data_16c0098 = _vtable_for_UI2StateDecl + 0x10
data_16c0078 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_SWAMPS_GIFT
void* x0_118 = UI2StateDeclTryLookup("n_The_Swamps_Gift")

if (x0_118 == 0)
    (*data_16c0098)(&data_16c0098, "n_The_Swamps_Gift")
    uint32_t x10_287 = *UI2StateDeclI_counter
    uint64_t x11_119 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c0098
    *UI2StateDeclI_counter = x10_287 + 1
    data_16c00a0 = x11_119
else
    (*data_16c0098)(&data_16c0098, *(x0_118 + 0x10))

data_16c00b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_119 = UI2StateDeclTryLookup("n_The_Swamps_Gift")

if (x0_119 == 0)
    (*data_16c00b0)(&data_16c00b0, "n_The_Swamps_Gift")
    uint32_t x10_289 = *UI2StateDeclI_counter
    uint64_t x11_120 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c00b0
    *UI2StateDeclI_counter = x10_289 + 1
    data_16c00b8 = x11_120
else
    (*data_16c00b0)(&data_16c00b0, *(x0_119 + 0x10))

data_16c00d0 = 0x1000000
data_16c00d8 = TheSwampsGift
data_16c0788 = v4
data_16c0798 = 0
data_16c00c8 = 0x10000000000d3b
data_16c07a0 = 0x100000000
data_16c07e0 = "the_winds_gift"
data_16c079c = 0
data_16c07e8 = 0x1d
data_16c07f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_BOON_CARDS_26
data_16c0818 = _vtable_for_UI2StateDecl + 0x10
data_16c07f8 = SOUND_SOUND_CARDS_FX_RECEIVE_BOON_THE_WINDS_GIFT
void* x0_120 = UI2StateDeclTryLookup("n_The_Winds_Gift")

if (x0_120 == 0)
    (*data_16c0818)(&data_16c0818, "n_The_Winds_Gift")
    uint32_t x10_292 = *UI2StateDeclI_counter
    uint64_t x11_121 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c0818
    *UI2StateDeclI_counter = x10_292 + 1
    data_16c0820 = x11_121
else
    (*data_16c0818)(&data_16c0818, *(x0_120 + 0x10))

data_16c0830 = _vtable_for_UI2StateDecl + 0x10
void* x0_121 = UI2StateDeclTryLookup("n_The_Winds_Gift")

if (x0_121 == 0)
    (*data_16c0830)(&data_16c0830, "n_The_Winds_Gift")
    uint32_t x10_294 = *UI2StateDeclI_counter
    uint64_t x11_122 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c0830
    *UI2StateDeclI_counter = x10_294 + 1
    data_16c0838 = x11_122
else
    (*data_16c0830)(&data_16c0830, *(x0_121 + 0x10))

data_16c0850 = 0x1000000
data_16c0858 = TheWindsGift
data_16c0f08 = v4
data_16c0f18 = 0
data_16c0848 = 0x10000000000d3c
data_16c0f20 = 0x100000000
data_16c0f60 = "hexes"
data_16c0f1c = 0
data_16c0f68 = 0
data_16c0f98 = _vtable_for_UI2StateDecl + 0x10
void* x0_122 = UI2StateDeclTryLookup("n_Hexes")

if (x0_122 == 0)
    (*data_16c0f98)(&data_16c0f98, "n_Hexes")
    uint32_t x10_296 = *UI2StateDeclI_counter
    uint64_t x11_123 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c0f98
    *UI2StateDeclI_counter = x10_296 + 1
    data_16c0fa0 = x11_123
else
    (*data_16c0f98)(&data_16c0f98, *(x0_122 + 0x10))

data_16c0fb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_123 = UI2StateDeclTryLookup("n_Hexes")

if (x0_123 == 0)
    (*data_16c0fb0)(&data_16c0fb0, "n_Hexes")
    uint32_t x10_298 = *UI2StateDeclI_counter
    uint64_t x11_124 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c0fb0
    *UI2StateDeclI_counter = x10_298 + 1
    data_16c0fb8 = x11_124
else
    (*data_16c0fb0)(&data_16c0fb0, *(x0_123 + 0x10))

__builtin_memset(&data_16c0fe8, 0, 0xc0)
data_16c0fd0 = 0x1000000000000
data_16c0fe8 = 0xa
data_16c0ff8:8 = Hexes_Setup
data_16c1688 = v4
data_16c1698 = 0
data_16c0fc8 = 0x10000000000d3d
data_16c16a0 = 0x100000000
data_16c16e0 = "bad_omens"
data_16c169c = 0
data_16c16e8 = 0x17
data_16c16f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_1
data_16c1718 = _vtable_for_UI2StateDecl + 0x10
data_16c16f8 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_BAD_OMENS
void* x0_124 = UI2StateDeclTryLookup("n_Bad_Omens")

if (x0_124 == 0)
    (*data_16c1718)(&data_16c1718, "n_Bad_Omens")
    uint32_t x10_301 = *UI2StateDeclI_counter
    uint64_t x11_125 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c1718
    *UI2StateDeclI_counter = x10_301 + 1
    data_16c1720 = x11_125
else
    (*data_16c1718)(&data_16c1718, *(x0_124 + 0x10))

data_16c1730 = _vtable_for_UI2StateDecl + 0x10
void* x0_125 = UI2StateDeclTryLookup("n_Bad_Omens")

if (x0_125 == 0)
    (*data_16c1730)(&data_16c1730, "n_Bad_Omens")
    uint32_t x10_303 = *UI2StateDeclI_counter
    uint64_t x11_126 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c1730
    *UI2StateDeclI_counter = x10_303 + 1
    data_16c1738 = x11_126
else
    (*data_16c1730)(&data_16c1730, *(x0_125 + 0x10))

data_16c1750 = 0x2000000
data_16c1758 = BadOmens
data_16c1e08 = v4
data_16c1e18 = 0
data_16c1748 = 0x10000000000d3e
data_16c1e20 = 0x100000000
data_16c1e60 = "delusion"
data_16c1e1c = 0
data_16c1e68 = 0xf
data_16c1e70 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_3
data_16c1e78 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_DELUSION
data_16c1e98 = _vtable_for_UI2StateDecl + 0x10
void* x0_126 = UI2StateDeclTryLookup("n_Delusion")

if (x0_126 == 0)
    (*data_16c1e98)(&data_16c1e98, "n_Delusion")
    uint32_t x10_305 = *UI2StateDeclI_counter
    uint64_t x11_127 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c1e98
    *UI2StateDeclI_counter = x10_305 + 1
    data_16c1ea0 = x11_127
else
    (*data_16c1e98)(&data_16c1e98, *(x0_126 + 0x10))

data_16c1eb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_127 = UI2StateDeclTryLookup("n_Delusion")

if (x0_127 == 0)
    (*data_16c1eb0)(&data_16c1eb0, "n_Delusion")
    uint32_t x10_307 = *UI2StateDeclI_counter
    uint64_t x11_128 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c1eb0
    *UI2StateDeclI_counter = x10_307 + 1
    data_16c1eb8 = x11_128
else
    (*data_16c1eb0)(&data_16c1eb0, *(x0_127 + 0x10))

data_16c1ed0 = 0x2000000
data_16c1ed8 = Delusion
data_16c2588 = v4
data_16c2598 = 0
data_16c1ec8 = 0x10000000000d3f
data_16c25a0 = 0x100000000
data_16c25e0 = "envy"
data_16c259c = 0
data_16c25e8 = 0x17
data_16c25f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_5
data_16c25f8 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_ENVY
data_16c2618 = _vtable_for_UI2StateDecl + 0x10
void* x0_128 = UI2StateDeclTryLookup("n_Envy")

if (x0_128 == 0)
    (*data_16c2618)(&data_16c2618, "n_Envy")
    uint32_t x10_309 = *UI2StateDeclI_counter
    uint64_t x11_129 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c2618
    *UI2StateDeclI_counter = x10_309 + 1
    data_16c2620 = x11_129
else
    (*data_16c2618)(&data_16c2618, *(x0_128 + 0x10))

data_16c2630 = _vtable_for_UI2StateDecl + 0x10
void* x0_129 = UI2StateDeclTryLookup("n_Envy")

if (x0_129 == 0)
    (*data_16c2630)(&data_16c2630, "n_Envy")
    uint32_t x10_311 = *UI2StateDeclI_counter
    uint64_t x11_130 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c2630
    *UI2StateDeclI_counter = x10_311 + 1
    data_16c2638 = x11_130
else
    (*data_16c2630)(&data_16c2630, *(x0_129 + 0x10))

data_16c2650 = 0x2000000
data_16c2658 = Envy
data_16c2d08 = v4
data_16c2d18 = 0
data_16c2648 = 0x10000000000d40
data_16c2d20 = 0x100000000
data_16c2d60 = "famine"
data_16c2d1c = 0
data_16c2d68 = 0x2a
data_16c2d70 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_7
data_16c2d98 = _vtable_for_UI2StateDecl + 0x10
data_16c2d78 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_FAMINE
void* x0_130 = UI2StateDeclTryLookup("n_Famine")

if (x0_130 == 0)
    (*data_16c2d98)(&data_16c2d98, "n_Famine")
    uint32_t x10_314 = *UI2StateDeclI_counter
    uint64_t x11_131 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c2d98
    *UI2StateDeclI_counter = x10_314 + 1
    data_16c2da0 = x11_131
else
    (*data_16c2d98)(&data_16c2d98, *(x0_130 + 0x10))

data_16c2db0 = _vtable_for_UI2StateDecl + 0x10
void* x0_131 = UI2StateDeclTryLookup("n_Famine")

if (x0_131 == 0)
    (*data_16c2db0)(&data_16c2db0, "n_Famine")
    uint32_t x10_316 = *UI2StateDeclI_counter
    uint64_t x11_132 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c2db0
    *UI2StateDeclI_counter = x10_316 + 1
    data_16c2db8 = x11_132
else
    (*data_16c2db0)(&data_16c2db0, *(x0_131 + 0x10))

data_16c2dd0 = 0x2000000
data_16c2dd8 = Famine
data_16c3488 = v4
data_16c3498 = 0
data_16c2dc8 = 0x10000000000d41
data_16c34a0 = 0x100000000
data_16c34e0 = "fear"
data_16c349c = 0
data_16c34e8 = 0xf
data_16c34f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_9
data_16c3518 = _vtable_for_UI2StateDecl + 0x10
data_16c34f8 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_FEAR
void* x0_132 = UI2StateDeclTryLookup("n_Fear")

if (x0_132 == 0)
    (*data_16c3518)(&data_16c3518, "n_Fear")
    uint32_t x10_319 = *UI2StateDeclI_counter
    uint64_t x11_133 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c3518
    *UI2StateDeclI_counter = x10_319 + 1
    data_16c3520 = x11_133
else
    (*data_16c3518)(&data_16c3518, *(x0_132 + 0x10))

data_16c3530 = _vtable_for_UI2StateDecl + 0x10
void* x0_133 = UI2StateDeclTryLookup("n_Fear")

if (x0_133 == 0)
    (*data_16c3530)(&data_16c3530, "n_Fear")
    uint32_t x10_321 = *UI2StateDeclI_counter
    uint64_t x11_134 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c3530
    *UI2StateDeclI_counter = x10_321 + 1
    data_16c3538 = x11_134
else
    (*data_16c3530)(&data_16c3530, *(x0_133 + 0x10))

data_16c3550 = 0x2000000
data_16c3558 = Fear
data_16c3c08 = v4
data_16c3c18 = 0
data_16c3548 = 0x10000000000d42
data_16c3c20 = 0x100000000
data_16c3c60 = "greed"
data_16c3c1c = 0
data_16c3c68 = 8
data_16c3c70 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_11
data_16c3c98 = _vtable_for_UI2StateDecl + 0x10
data_16c3c78 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_GREED
void* x0_134 = UI2StateDeclTryLookup("n_Greed")

if (x0_134 == 0)
    (*data_16c3c98)(&data_16c3c98, "n_Greed")
    uint32_t x10_324 = *UI2StateDeclI_counter
    uint64_t x11_135 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c3c98
    *UI2StateDeclI_counter = x10_324 + 1
    data_16c3ca0 = x11_135
else
    (*data_16c3c98)(&data_16c3c98, *(x0_134 + 0x10))

data_16c3cb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_135 = UI2StateDeclTryLookup("n_Greed")

if (x0_135 == 0)
    (*data_16c3cb0)(&data_16c3cb0, "n_Greed")
    uint32_t x10_326 = *UI2StateDeclI_counter
    uint64_t x11_136 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c3cb0
    *UI2StateDeclI_counter = x10_326 + 1
    data_16c3cb8 = x11_136
else
    (*data_16c3cb0)(&data_16c3cb0, *(x0_135 + 0x10))

data_16c3cd0 = 0x2000000
data_16c3cd8 = Greed
data_16c4388 = v4
data_16c4398 = 0
data_16c3cc8 = 0x10000000000d43
data_16c43a0 = 0x100000000
data_16c43e0 = "haunting"
data_16c439c = 0
data_16c43e8 = 0x1b
data_16c43f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_13
data_16c4418 = _vtable_for_UI2StateDecl + 0x10
data_16c43f8 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_HAUNTING
void* x0_136 = UI2StateDeclTryLookup("n_Haunting")

if (x0_136 == 0)
    (*data_16c4418)(&data_16c4418, "n_Haunting")
    uint32_t x10_329 = *UI2StateDeclI_counter
    uint64_t x11_137 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c4418
    *UI2StateDeclI_counter = x10_329 + 1
    data_16c4420 = x11_137
else
    (*data_16c4418)(&data_16c4418, *(x0_136 + 0x10))

data_16c4430 = _vtable_for_UI2StateDecl + 0x10
void* x0_137 = UI2StateDeclTryLookup("n_Haunting")

if (x0_137 == 0)
    (*data_16c4430)(&data_16c4430, "n_Haunting")
    uint32_t x10_331 = *UI2StateDeclI_counter
    uint64_t x11_138 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c4430
    *UI2StateDeclI_counter = x10_331 + 1
    data_16c4438 = x11_138
else
    (*data_16c4430)(&data_16c4430, *(x0_137 + 0x10))

data_16c4450 = 0x2000000
data_16c4458 = Haunting
data_16c4b08 = v4
data_16c4b18 = 0
data_16c4448 = 0x10000000000d44
data_16c4b20 = 0x100000000
data_16c4b60 = "locusts"
data_16c4b1c = 0
data_16c4b68 = 6
data_16c4b70 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_15
data_16c4b98 = _vtable_for_UI2StateDecl + 0x10
data_16c4b78 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_LOCUSTS
void* x0_138 = UI2StateDeclTryLookup("n_Locusts")

if (x0_138 == 0)
    (*data_16c4b98)(&data_16c4b98, "n_Locusts")
    uint32_t x10_334 = *UI2StateDeclI_counter
    uint64_t x11_139 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c4b98
    *UI2StateDeclI_counter = x10_334 + 1
    data_16c4ba0 = x11_139
else
    (*data_16c4b98)(&data_16c4b98, *(x0_138 + 0x10))

data_16c4bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_139 = UI2StateDeclTryLookup("n_Locusts")

if (x0_139 == 0)
    (*data_16c4bb0)(&data_16c4bb0, "n_Locusts")
    uint32_t x10_336 = *UI2StateDeclI_counter
    uint64_t x11_140 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c4bb0
    *UI2StateDeclI_counter = x10_336 + 1
    data_16c4bb8 = x11_140
else
    (*data_16c4bb0)(&data_16c4bb0, *(x0_139 + 0x10))

data_16c4bd0 = 0x2000000
data_16c4bd8 = Locusts
data_16c5288 = v4
data_16c5298 = 0
data_16c4bc8 = 0x10000000000d45
data_16c52a0 = 0x100000000
data_16c52e0 = "misery"
data_16c529c = 0
data_16c52e8 = 0x1b
data_16c52f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_17
data_16c52f8 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_MISERY
data_16c5318 = _vtable_for_UI2StateDecl + 0x10
void* x0_140 = UI2StateDeclTryLookup("n_Misery")

if (x0_140 == 0)
    (*data_16c5318)(&data_16c5318, "n_Misery")
    uint32_t x10_338 = *UI2StateDeclI_counter
    uint64_t x11_141 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c5318
    *UI2StateDeclI_counter = x10_338 + 1
    data_16c5320 = x11_141
else
    (*data_16c5318)(&data_16c5318, *(x0_140 + 0x10))

data_16c5330 = _vtable_for_UI2StateDecl + 0x10
void* x0_141 = UI2StateDeclTryLookup("n_Misery")

if (x0_141 == 0)
    (*data_16c5330)(&data_16c5330, "n_Misery")
    uint32_t x10_340 = *UI2StateDeclI_counter
    uint64_t x11_142 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c5330
    *UI2StateDeclI_counter = x10_340 + 1
    data_16c5338 = x11_142
else
    (*data_16c5330)(&data_16c5330, *(x0_141 + 0x10))

data_16c5350 = 0x2000000
data_16c5358 = Misery
data_16c5a08 = v4
data_16c5a18 = 0
data_16c5348 = 0x10000000000d46
data_16c5a20 = 0x100000000
data_16c5a60 = "plague"
data_16c5a1c = 0
data_16c5a68 = 0x1d
data_16c5a70 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_19
data_16c5a98 = _vtable_for_UI2StateDecl + 0x10
data_16c5a78 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_PLAGUE
void* x0_142 = UI2StateDeclTryLookup("n_Plague")

if (x0_142 == 0)
    (*data_16c5a98)(&data_16c5a98, "n_Plague")
    uint32_t x10_343 = *UI2StateDeclI_counter
    uint64_t x11_143 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c5a98
    *UI2StateDeclI_counter = x10_343 + 1
    data_16c5aa0 = x11_143
else
    (*data_16c5a98)(&data_16c5a98, *(x0_142 + 0x10))

data_16c5ab0 = _vtable_for_UI2StateDecl + 0x10
void* x0_143 = UI2StateDeclTryLookup("n_Plague")

if (x0_143 == 0)
    (*data_16c5ab0)(&data_16c5ab0, "n_Plague")
    uint32_t x10_345 = *UI2StateDeclI_counter
    uint64_t x11_144 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c5ab0
    *UI2StateDeclI_counter = x10_345 + 1
    data_16c5ab8 = x11_144
else
    (*data_16c5ab0)(&data_16c5ab0, *(x0_143 + 0x10))

data_16c5ad0 = 0x2000000
data_16c5ad8 = Plague
data_16c6188 = v4
data_16c6198 = 0
data_16c5ac8 = 0x10000000000d47
data_16c61a0 = 0x100000000
data_16c61e0 = "poverty"
data_16c619c = 0
data_16c61e8 = 0x1b
data_16c61f0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_21
data_16c6218 = _vtable_for_UI2StateDecl + 0x10
data_16c61f8 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_POVERTY
void* x0_144 = UI2StateDeclTryLookup("n_Poverty")

if (x0_144 == 0)
    (*data_16c6218)(&data_16c6218, "n_Poverty")
    uint32_t x10_348 = *UI2StateDeclI_counter
    uint64_t x11_145 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c6218
    *UI2StateDeclI_counter = x10_348 + 1
    data_16c6220 = x11_145
else
    (*data_16c6218)(&data_16c6218, *(x0_144 + 0x10))

data_16c6230 = _vtable_for_UI2StateDecl + 0x10
void* x0_145 = UI2StateDeclTryLookup("n_Poverty")

if (x0_145 == 0)
    (*data_16c6230)(&data_16c6230, "n_Poverty")
    uint32_t x10_350 = *UI2StateDeclI_counter
    uint64_t x11_146 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c6230
    *UI2StateDeclI_counter = x10_350 + 1
    data_16c6238 = x11_146
else
    (*data_16c6230)(&data_16c6230, *(x0_145 + 0x10))

data_16c6250 = 0x2000000
data_16c6258 = Poverty
data_16c6908 = v4
data_16c6918 = 0
data_16c6248 = 0x10000000000d48
data_16c6920 = 0x100000000
data_16c6960 = &data_79bcc6
data_16c691c = 0
data_16c6968 = 0x1d
data_16c6970 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_23
data_16c6998 = _vtable_for_UI2StateDecl + 0x10
data_16c6978 = SOUND_SOUND_CARDS_FX_RECEIVE_HEX_WAR
void* x0_146 = UI2StateDeclTryLookup("n_War")

if (x0_146 == 0)
    (*data_16c6998)(&data_16c6998, "n_War")
    uint32_t x10_353 = *UI2StateDeclI_counter
    uint64_t x11_147 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c6998
    *UI2StateDeclI_counter = x10_353 + 1
    data_16c69a0 = x11_147
else
    (*data_16c6998)(&data_16c6998, *(x0_146 + 0x10))

data_16c69b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_147 = UI2StateDeclTryLookup("n_War")

if (x0_147 == 0)
    (*data_16c69b0)(&data_16c69b0, "n_War")
    uint32_t x10_355 = *UI2StateDeclI_counter
    uint64_t x11_148 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c69b0
    *UI2StateDeclI_counter = x10_355 + 1
    data_16c69b8 = x11_148
else
    (*data_16c69b0)(&data_16c69b0, *(x0_147 + 0x10))

data_16c69d0 = 0x2000000
data_16c69d8 = War
data_16c7088 = v4
data_16c7098 = 0
data_16c69c8 = 0x10000000000d49
data_16c70a0 = 0x100000000
data_16c70e0 = "lost_in_the_woods"
data_16c709c = 0
data_16c70e8 = 8
data_16c70f0 = TEXTURE_CARD_GEN_NOCTURNE_LOST_IN_THE_WOOD
data_16c7118 = _vtable_for_UI2StateDecl + 0x10
data_16c70f8 = SOUND_SOUND_CARDS_FX_TAKE_STATE_LOST_IN_THE_WOODS
void* x0_148 = UI2StateDeclTryLookup("n_Lost_in_the_Woods")

if (x0_148 == 0)
    (*data_16c7118)(&data_16c7118, "n_Lost_in_the_Woods")
    uint32_t x10_358 = *UI2StateDeclI_counter
    uint64_t x11_149 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c7118
    *UI2StateDeclI_counter = x10_358 + 1
    data_16c7120 = x11_149
else
    (*data_16c7118)(&data_16c7118, *(x0_148 + 0x10))

data_16c7130 = _vtable_for_UI2StateDecl + 0x10
void* x0_149 = UI2StateDeclTryLookup("n_Lost_in_the_Woods")

if (x0_149 == 0)
    (*data_16c7130)(&data_16c7130, "n_Lost_in_the_Woods")
    uint32_t x10_360 = *UI2StateDeclI_counter
    uint64_t x11_150 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c7130
    *UI2StateDeclI_counter = x10_360 + 1
    data_16c7138 = x11_150
else
    (*data_16c7130)(&data_16c7130, *(x0_149 + 0x10))

int128_t v0_17
v0_17.q = 0
v0_17:8.q = 0
__builtin_memset(&data_16c7170, 0, 0xb0)
v0_17.q = 0x10000000000d4a
data_16c7150 = 0x40000000
data_16c7148 = 0x10000000000d4a
data_16c7170:4.d = 1
data_16c7180 = LostInTheWoods_StartOfTurn
data_16c7768 = 1
data_16c721c:4 = 0
data_16c7210 = 0
data_16c721c = 0x100000000
data_16c7808 = v4
data_16c7818 = 0
data_16c7168 = 0x400000006
data_16c7820 = 0x100000000
data_16c7860 = "deluded"
data_16c781c = 0
data_16c7868 = 0xf
data_16c7870 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_3
data_16c7878 = SOUND_SOUND_CARDS_FX_TAKE_STATE_DELUDED
data_16c7898 = _vtable_for_UI2StateDecl + 0x10
void* x0_150 = UI2StateDeclTryLookup("n_Deluded")

if (x0_150 == 0)
    (*data_16c7898)(&data_16c7898, "n_Deluded")
    uint32_t x10_363 = *UI2StateDeclI_counter
    uint64_t x11_151 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c7898
    *UI2StateDeclI_counter = x10_363 + 1
    data_16c78a0 = x11_151
else
    (*data_16c7898)(&data_16c7898, *(x0_150 + 0x10))

data_16c78b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_151 = UI2StateDeclTryLookup("n_Deluded")

if (x0_151 == 0)
    (*data_16c78b0)(&data_16c78b0, "n_Deluded")
    uint32_t x10_365 = *UI2StateDeclI_counter
    uint64_t x11_152 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c78b0
    *UI2StateDeclI_counter = x10_365 + 1
    data_16c78b8 = x11_152
else
    (*data_16c78b0)(&data_16c78b0, *(x0_151 + 0x10))

__builtin_memset(&data_16c78f0, 0, 0xb0)
data_16c78d0 = 0x40000000
data_16c7900 = Deluded_StartOfBuy
data_16c7ee8 = 1
data_16c799c:4 = 0
data_16c78e8 = 0x400000006
data_16c78f0:4.d = 0
data_16c7990 = 0
data_16c799c = 0x100000000
data_16c7f88 = v4
data_16c7f98 = 0
data_16c78c8 = 0x10000000000d4b
data_16c7fa0 = 0x100000000
data_16c7fe0 = "envious"
data_16c7f9c = 0
data_16c7fe8 = 0x17
data_16c7ff0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_5
data_16c7ff8 = SOUND_SOUND_CARDS_FX_TAKE_STATE_ENVIOUS
data_16c8018 = _vtable_for_UI2StateDecl + 0x10
void* x0_152 = UI2StateDeclTryLookup("n_Envious")

if (x0_152 == 0)
    (*data_16c8018)(&data_16c8018, "n_Envious")
    uint32_t x10_368 = *UI2StateDeclI_counter
    uint64_t x11_153 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c8018
    *UI2StateDeclI_counter = x10_368 + 1
    data_16c8020 = x11_153
else
    (*data_16c8018)(&data_16c8018, *(x0_152 + 0x10))

data_16c8030 = _vtable_for_UI2StateDecl + 0x10
void* x0_153 = UI2StateDeclTryLookup("n_Envious")

if (x0_153 == 0)
    (*data_16c8030)(&data_16c8030, "n_Envious")
    uint32_t x10_370 = *UI2StateDeclI_counter
    uint64_t x11_154 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c8030
    *UI2StateDeclI_counter = x10_370 + 1
    data_16c8038 = x11_154
else
    (*data_16c8030)(&data_16c8030, *(x0_153 + 0x10))

__builtin_memset(&data_16c8070, 0, 0xb0)
data_16c8050 = 0x40000000
data_16c8080 = Envious_StartOfBuy
data_16c8668 = 1
data_16c811c:4 = 0
data_16c8068 = 0x400000006
data_16c8070:4.d = 0
data_16c8110 = 0
data_16c811c = 0x100000000
data_16c8708 = v4
data_16c8718 = 0
data_16c8048 = 0x10000000000d4c
data_16c8720 = 0x100000000
data_16c8760 = "miserable"
data_16c871c = 0
data_16c8768 = 0x1b
data_16c8770 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_17
data_16c8778 = SOUND_SOUND_CARDS_FX_TAKE_STATE_MISERABLE
data_16c8798 = _vtable_for_UI2StateDecl + 0x10
void* x0_154 = UI2StateDeclTryLookup("n_Miserable")

if (x0_154 == 0)
    (*data_16c8798)(&data_16c8798, "n_Miserable")
    uint32_t x10_373 = *UI2StateDeclI_counter
    uint64_t x11_155 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c8798
    *UI2StateDeclI_counter = x10_373 + 1
    data_16c87a0 = x11_155
else
    (*data_16c8798)(&data_16c8798, *(x0_154 + 0x10))

data_16c87b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_155 = UI2StateDeclTryLookup("n_Miserable")

if (x0_155 == 0)
    (*data_16c87b0)(&data_16c87b0, "n_Miserable")
    uint32_t x10_375 = *UI2StateDeclI_counter
    uint64_t x11_156 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c87b0
    *UI2StateDeclI_counter = x10_375 + 1
    data_16c87b8 = x11_156
else
    (*data_16c87b0)(&data_16c87b0, *(x0_155 + 0x10))

data_16c87d0 = 0x40000000
data_16c87e0 = Miserable_VP
data_16c8e88 = v4
data_16c8e98 = 0
data_16c87c8 = 0x10000000000d4d
data_16c8ea0 = 0x100000000
data_16c8ee0 = "twice_miserable"
data_16c8e9c = 0
data_16c8ee8 = 0x1b
data_16c8ef0 = TEXTURE_CARD_GEN_NOCTURNE_NOCTURNE_HEX_CARDS_17
data_16c8ef8 = SOUND_SOUND_CARDS_FX_TAKE_STATE_TWICE_MISERABLE
data_16c8f18 = _vtable_for_UI2StateDecl + 0x10
void* x0_156 = UI2StateDeclTryLookup("n_Twice_Miserable")

if (x0_156 == 0)
    (*data_16c8f18)(&data_16c8f18, "n_Twice_Miserable")
    uint32_t x10_377 = *UI2StateDeclI_counter
    uint64_t x11_157 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c8f18
    *UI2StateDeclI_counter = x10_377 + 1
    data_16c8f20 = x11_157
else
    (*data_16c8f18)(&data_16c8f18, *(x0_156 + 0x10))

data_16c8f30 = _vtable_for_UI2StateDecl + 0x10
void* x0_157 = UI2StateDeclTryLookup("n_Twice_Miserable")

if (x0_157 == 0)
    (*data_16c8f30)(&data_16c8f30, "n_Twice_Miserable")
    uint32_t x10_379 = *UI2StateDeclI_counter
    uint64_t x11_158 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c8f30
    *UI2StateDeclI_counter = x10_379 + 1
    data_16c8f38 = x11_158
else
    (*data_16c8f30)(&data_16c8f30, *(x0_157 + 0x10))

data_16c8f50 = 0x40000000
data_16c8f60 = TwiceMiserable_VP
data_16c8f48 = 0x10000000000d4e
__builtin_memcpy(&data_16c9608, 
    "\x00\x00\x00\x00\x0f\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"20\x01\x00\x00\x00\x00\x00\x00", 
    0x20)
data_16c9628 = 0xffffffff
data_16c9660 = "tracker"
data_16c9668 = 0x2a
data_16c9670 = TEXTURE_CARD_GEN_NOCTURNE_TRACKER
data_16c9678 = SOUND_SOUND_CARDS_FX_LANDPLAY_TRACKER
data_16c9698 = _vtable_for_UI2StateDecl + 0x10
void* x0_158 = UI2StateDeclTryLookup("n22_Tracker")

if (x0_158 == 0)
    (*data_16c9698)(&data_16c9698, "n22_Tracker")
    uint32_t x10_381 = *UI2StateDeclI_counter
    uint64_t x11_160 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c9698
    *UI2StateDeclI_counter = x10_381 + 1
    data_16c96a0 = x11_160
else
    (*data_16c9698)(&data_16c9698, *(x0_158 + 0x10))

data_16c96b0 = _vtable_for_UI2StateDecl + 0x10
void* x0_159 = UI2StateDeclTryLookup("n_Tracker")
int64_t result

if (x0_159 == 0)
    result = (*data_16c96b0)(&data_16c96b0, "n_Tracker")
    uint32_t x10_383 = *UI2StateDeclI_counter
    uint64_t x11_161 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_16c96b0
    *UI2StateDeclI_counter = x10_383 + 1
    data_16c96b8 = x11_161
else
    result = (*data_16c96b0)(&data_16c96b0, *(x0_159 + 0x10))

data_16c96c8 = 0x200000d05
data_16c96d0 = 0x80004
data_16c96d8 = Tracker22
__builtin_memset(&data_16c96e8, 0, 0x20)
data_16c96e8 = 0xf
data_16c96f8:8.d = 0xd25
__builtin_memset(&data_16c9708, 0, 0xa0)
data_16c9ce8 = 1
return result
