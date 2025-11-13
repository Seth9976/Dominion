// 函数: sub_a1b9b4
// 地址: 0xa1b9b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
v0, v1 = memset(0x14d1c60, 0, 0x24900)
data_71b500
data_7ad920
__builtin_memcpy(&data_14d1c68, 
    "\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x21\x00\x00\x00\x00\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
v1 = data_7ad950
data_14d1c98 = data_7ad940
data_14d1cb8 = "bauble"
data_14d1cc0 = 0x37
data_14d1cc8 = TEXTURE_CARD_GEN_ALLIES_BAUBLE
data_14d1cd0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_BAUBLE
data_14d1ca8 = v1
data_14d1cf0 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("ay_bauble")

if (x0 == 0)
    (*data_14d1cf0)(&data_14d1cf0, "ay_bauble")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d1cf0
    *UI2StateDeclI_counter = x10_1 + 1
    data_14d1cf8 = x11_1
else
    (*data_14d1cf0)(&data_14d1cf0, *(x0 + 0x10))

data_14d1d08 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("ay_bauble")

if (x0_1 == 0)
    (*data_14d1d08)(&data_14d1d08, "ay_bauble")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d1d08
    *UI2StateDeclI_counter = x10_3 + 1
    data_14d1d10 = x11_2
else
    (*data_14d1d08)(&data_14d1d08, *(x0_1 + 0x10))

data_14d2340 = 1
int128_t v1_1 = data_71c2d0
data_14d1d28 = 0x80000002
data_14d1d30 = Bauble
data_14d1d20 = 0x200001000
__builtin_memcpy(&data_14d23e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"43\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d2400 = 0xffffffff
data_14d2438 = "sycophant"
data_14d2440 = 0xd
data_14d2448 = TEXTURE_CARD_GEN_ALLIES_SYCOPHANT
data_14d2470 = _vtable_for_UI2StateDecl + 0x10
data_14d2450 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SYCOPHANT
void* x0_2 = UI2StateDeclTryLookup("ay_sycophant")

if (x0_2 == 0)
    (*data_14d2470)(&data_14d2470, "ay_sycophant")
    uint32_t x10_6 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d2470
    *UI2StateDeclI_counter = x10_6 + 1
    data_14d2478 = x11_3
else
    (*data_14d2470)(&data_14d2470, *(x0_2 + 0x10))

data_14d2488 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("ay_sycophant")

if (x0_3 == 0)
    (*data_14d2488)(&data_14d2488, "ay_sycophant")
    uint32_t x10_8 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d2488
    *UI2StateDeclI_counter = x10_8 + 1
    data_14d2490 = x11_4
else
    (*data_14d2488)(&data_14d2488, *(x0_3 + 0x10))

int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
data_14d24a8 = 0x80000004
data_14d24b0 = Sycophant
__builtin_memset(&data_14d24c8, 0, 0xb8)
data_14d24c0 = 0x600000006
data_14d24c8:4.d = 1
data_14d24d8 = Sycophant_OnGainTrash
data_14d2568 = 0
data_14d24a0 = 0x200001001
data_14d2574 = 0x100000000
__builtin_memset(&data_14d2588, 0, 0xb8)
data_14d2580 = 0x600000006
data_14d2588:4.d = 2
v0_1 = data_1127148
data_14d2598 = Sycophant_OnGainTrash
data_14d2628 = 0
__builtin_memset(&data_14d2b10, 0, 0x50)
data_14d2b00 = v0_1
data_14d2ac0 = 1
data_14d2634 = 0x100000000
__builtin_memcpy(&data_14d2b60, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14d2bb8 = "importer"
__builtin_memset(&data_14d2b98, 0, 0x20)
__builtin_memcpy(&data_14d2b78, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d2bc0 = 0x1b
int128_t var_e0
__builtin_memset(&var_e0, 0, 0x20)
int128_t var_c0
__builtin_memcpy(&var_c0, 
    "\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x"
"ff\xff\xff\xff\x00\x00\x00\x00", 
    0x20)
data_14d2bc8 = TEXTURE_CARD_GEN_ALLIES_IMPORTER
data_14d2bd0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_IMPORTER
data_14d2bf0 = _vtable_for_UI2StateDecl + 0x10
void* x0_4 = UI2StateDeclTryLookup("ay_importer")

if (x0_4 == 0)
    (*data_14d2bf0)(&data_14d2bf0, "ay_importer")
    uint32_t x10_10 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d2bf0
    *UI2StateDeclI_counter = x10_10 + 1
    data_14d2bf8 = x11_5
else
    (*data_14d2bf0)(&data_14d2bf0, *(x0_4 + 0x10))

data_14d2c08 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("ay_importer")

if (x0_5 == 0)
    (*data_14d2c08)(&data_14d2c08, "ay_importer")
    uint32_t x10_12 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d2c08
    *UI2StateDeclI_counter = x10_12 + 1
    data_14d2c10 = x11_6
else
    (*data_14d2c08)(&data_14d2c08, *(x0_5 + 0x10))

data_14d2c28 = 0x80000084
data_14d2c30 = Importer
int128_t v0_2
v0_2.q = 0
v0_2:8.q = 0
__builtin_memset(&data_14d2c40, 0, 0xc0)
data_14d2c50 = Importer_Setup
__builtin_memcpy(&data_14d32e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14d2c20 = 0x300001002
data_14d2c40 = 1
data_14d3240 = 1
data_14d3338 = "merchant_camp"
__builtin_memset(&data_14d3318, 0, 0x20)
__builtin_memcpy(&data_14d32f8, 
    "\x05\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d3340 = 0x1d
data_14d3348 = TEXTURE_CARD_GEN_ALLIES_MERCHANT_CAMP
data_14d3370 = _vtable_for_UI2StateDecl + 0x10
data_14d3350 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_MERCHANT_CAMP
void* x0_6 = UI2StateDeclTryLookup("ay_merchant_camp")

if (x0_6 == 0)
    (*data_14d3370)(&data_14d3370, "ay_merchant_camp")
    uint32_t x10_15 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d3370
    *UI2StateDeclI_counter = x10_15 + 1
    data_14d3378 = x11_7
else
    (*data_14d3370)(&data_14d3370, *(x0_6 + 0x10))

data_14d3388 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("ay_merchant_camp")

if (x0_7 == 0)
    (*data_14d3388)(&data_14d3388, "ay_merchant_camp")
    uint32_t x10_17 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d3388
    *UI2StateDeclI_counter = x10_17 + 1
    data_14d3390 = x11_8
else
    (*data_14d3388)(&data_14d3388, *(x0_7 + 0x10))

int128_t v0_3
v0_3.q = 0
v0_3:8.q = 0
__builtin_memset(&data_14d33c8, 0, 0xb0)
v0_3.q = 0x300001003
data_14d33a8 = 4
data_14d33b0 = MerchantCamp
data_14d33c8:4.d = 3
data_14d33a0 = 0x300001003
data_14d33d8 = MerchantCamp_OnDiscardFromPlay
data_14d39c0 = 1
data_14d33c0 = 0x600000006
data_14d3474:4 = 0
data_14d3468 = 0
__builtin_memcpy(&data_14d3a60, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"40\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d3474 = 0x100000003
data_14d3a80 = 0xffffffff
data_14d3ab8 = "sentinel"
data_14d3ac0 = 6
data_14d3ac8 = TEXTURE_CARD_GEN_ALLIES_SENTINEL
data_14d3af0 = _vtable_for_UI2StateDecl + 0x10
data_14d3ad0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SENTINEL
void* x0_8 = UI2StateDeclTryLookup("ay_sentinel")

if (x0_8 == 0)
    (*data_14d3af0)(&data_14d3af0, "ay_sentinel")
    uint32_t x10_20 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d3af0
    *UI2StateDeclI_counter = x10_20 + 1
    data_14d3af8 = x11_9
else
    (*data_14d3af0)(&data_14d3af0, *(x0_8 + 0x10))

data_14d3b08 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("ay_sentinel")

if (x0_9 == 0)
    (*data_14d3b08)(&data_14d3b08, "ay_sentinel")
    uint32_t x10_22 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d3b08
    *UI2StateDeclI_counter = x10_22 + 1
    data_14d3b10 = x11_10
else
    (*data_14d3b08)(&data_14d3b08, *(x0_9 + 0x10))

int128_t v0_4
v0_4.q = 0x300001004
data_14d3b20 = 0x300001004
data_14d3b28 = 4
data_14d3b30 = Sentinel
__builtin_memcpy(&data_14d41e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d4200 = 0xffffffff
data_14d4238 = "underling"
data_14d4240 = 8
data_14d4248 = TEXTURE_CARD_GEN_ALLIES_UNDERLING
data_14d4270 = _vtable_for_UI2StateDecl + 0x10
data_14d4250 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_UNDERLING
void* x0_10 = UI2StateDeclTryLookup("ay_underling")

if (x0_10 == 0)
    (*data_14d4270)(&data_14d4270, "ay_underling")
    uint32_t x10_25 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d4270
    *UI2StateDeclI_counter = x10_25 + 1
    data_14d4278 = x11_11
else
    (*data_14d4270)(&data_14d4270, *(x0_10 + 0x10))

data_14d4288 = _vtable_for_UI2StateDecl + 0x10
void* x0_11 = UI2StateDeclTryLookup("ay_underling")

if (x0_11 == 0)
    (*data_14d4288)(&data_14d4288, "ay_underling")
    uint32_t x10_27 = *UI2StateDeclI_counter
    uint64_t x11_12 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d4288
    *UI2StateDeclI_counter = x10_27 + 1
    data_14d4290 = x11_12
else
    (*data_14d4288)(&data_14d4288, *(x0_11 + 0x10))

data_14d42a8 = 0x80000004
data_14d42b0 = Underling
__builtin_memcpy(&data_14d4960, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"00\x20\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d42a0 = 0x300001005
data_14d4980 = 0xffffffff
data_14d49b8 = "broker"
data_14d49c0 = 8
data_14d49c8 = TEXTURE_CARD_GEN_ALLIES_BROKER
data_14d49f0 = _vtable_for_UI2StateDecl + 0x10
data_14d49d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_BROKER
void* x0_12 = UI2StateDeclTryLookup("ay_broker")

if (x0_12 == 0)
    (*data_14d49f0)(&data_14d49f0, "ay_broker")
    uint32_t x10_30 = *UI2StateDeclI_counter
    uint64_t x11_13 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d49f0
    *UI2StateDeclI_counter = x10_30 + 1
    data_14d49f8 = x11_13
else
    (*data_14d49f0)(&data_14d49f0, *(x0_12 + 0x10))

data_14d4a08 = _vtable_for_UI2StateDecl + 0x10
void* x0_13 = UI2StateDeclTryLookup("ay_broker")

if (x0_13 == 0)
    (*data_14d4a08)(&data_14d4a08, "ay_broker")
    uint32_t x10_32 = *UI2StateDeclI_counter
    uint64_t x11_14 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d4a08
    *UI2StateDeclI_counter = x10_32 + 1
    data_14d4a10 = x11_14
else
    (*data_14d4a08)(&data_14d4a08, *(x0_13 + 0x10))

int128_t v0_5
v0_5.q = 0x400001006
data_14d4a20 = 0x400001006
data_14d4a28 = 0x80000004
data_14d4a30 = Broker
__builtin_memcpy(&data_14d50e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"02\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14d5100 = 0xffffffff
data_14d5138 = "carpenter"
data_14d5140 = 8
data_14d5148 = TEXTURE_CARD_GEN_ALLIES_CARPENTER
data_14d5170 = _vtable_for_UI2StateDecl + 0x10
data_14d5150 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_CARPENTER
void* x0_14 = UI2StateDeclTryLookup("ay_carpenter")

if (x0_14 == 0)
    (*data_14d5170)(&data_14d5170, "ay_carpenter")
    uint32_t x10_35 = *UI2StateDeclI_counter
    uint64_t x11_15 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d5170
    *UI2StateDeclI_counter = x10_35 + 1
    data_14d5178 = x11_15
else
    (*data_14d5170)(&data_14d5170, *(x0_14 + 0x10))

data_14d5188 = _vtable_for_UI2StateDecl + 0x10
void* x0_15 = UI2StateDeclTryLookup("ay_carpenter")

if (x0_15 == 0)
    (*data_14d5188)(&data_14d5188, "ay_carpenter")
    uint32_t x10_37 = *UI2StateDeclI_counter
    uint64_t x11_16 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d5188
    *UI2StateDeclI_counter = x10_37 + 1
    data_14d5190 = x11_16
else
    (*data_14d5188)(&data_14d5188, *(x0_15 + 0x10))

data_14d51a8 = 4
data_14d51b0 = Carpenter
__builtin_memcpy(&data_14d5860, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_14d51a0 = 0x400001007
data_14d5880 = 0xffffffff
data_14d58b8 = "courier"
data_14d58c0 = 0x1d
data_14d58c8 = TEXTURE_CARD_GEN_ALLIES_COURIER
data_14d58f0 = _vtable_for_UI2StateDecl + 0x10
data_14d58d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_COURIER
void* x0_16 = UI2StateDeclTryLookup("ay_courier")

if (x0_16 == 0)
    (*data_14d58f0)(&data_14d58f0, "ay_courier")
    uint32_t x10_40 = *UI2StateDeclI_counter
    uint64_t x11_17 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d58f0
    *UI2StateDeclI_counter = x10_40 + 1
    data_14d58f8 = x11_17
else
    (*data_14d58f0)(&data_14d58f0, *(x0_16 + 0x10))

data_14d5908 = _vtable_for_UI2StateDecl + 0x10
void* x0_17 = UI2StateDeclTryLookup("ay_courier")

if (x0_17 == 0)
    (*data_14d5908)(&data_14d5908, "ay_courier")
    uint32_t x10_42 = *UI2StateDeclI_counter
    uint64_t x11_18 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d5908
    *UI2StateDeclI_counter = x10_42 + 1
    data_14d5910 = x11_18
else
    (*data_14d5908)(&data_14d5908, *(x0_17 + 0x10))

int128_t v0_6
v0_6.q = 0x400001008
data_14d5920 = 0x400001008
data_14d5928 = 4
data_14d5930 = Courier
__builtin_memcpy(&data_14d5fe0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d6000 = 0xffffffff
data_14d6038 = "innkeeper"
data_14d6040 = 0x1d
data_14d6048 = TEXTURE_CARD_GEN_ALLIES_INNKEEPER
data_14d6070 = _vtable_for_UI2StateDecl + 0x10
data_14d6050 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_INNKEEPER
void* x0_18 = UI2StateDeclTryLookup("ay_innkeeper")

if (x0_18 == 0)
    (*data_14d6070)(&data_14d6070, "ay_innkeeper")
    uint32_t x10_45 = *UI2StateDeclI_counter
    uint64_t x11_19 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d6070
    *UI2StateDeclI_counter = x10_45 + 1
    data_14d6078 = x11_19
else
    (*data_14d6070)(&data_14d6070, *(x0_18 + 0x10))

data_14d6088 = _vtable_for_UI2StateDecl + 0x10
void* x0_19 = UI2StateDeclTryLookup("ay_innkeeper")

if (x0_19 == 0)
    (*data_14d6088)(&data_14d6088, "ay_innkeeper")
    uint32_t x10_47 = *UI2StateDeclI_counter
    uint64_t x11_20 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d6088
    *UI2StateDeclI_counter = x10_47 + 1
    data_14d6090 = x11_20
else
    (*data_14d6088)(&data_14d6088, *(x0_19 + 0x10))

data_14d60a0 = 0x400001009
data_14d60a8 = 4
data_14d60b0 = Innkeeper
__builtin_memcpy(&data_14d6760, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x0c\x00\x00\x00\x"
"08\x00\x04\x00\x00\x00\x00\x00", 
    0x20)
data_14d6780 = 0xffffffff
data_14d67b8 = "royal_galley"
data_14d67c0 = 6
data_14d67c8 = TEXTURE_CARD_GEN_ALLIES_ROYAL_GALLEY
data_14d67f0 = _vtable_for_UI2StateDecl + 0x10
data_14d67d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_ROYAL_GALLEY
void* x0_20 = UI2StateDeclTryLookup("ay_royal_galley")

if (x0_20 == 0)
    (*data_14d67f0)(&data_14d67f0, "ay_royal_galley")
    uint32_t x10_50 = *UI2StateDeclI_counter
    uint64_t x11_21 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d67f0
    *UI2StateDeclI_counter = x10_50 + 1
    data_14d67f8 = x11_21
else
    (*data_14d67f0)(&data_14d67f0, *(x0_20 + 0x10))

data_14d6808 = _vtable_for_UI2StateDecl + 0x10
void* x0_21 = UI2StateDeclTryLookup("ay_royal_galley")

if (x0_21 == 0)
    (*data_14d6808)(&data_14d6808, "ay_royal_galley")
    uint32_t x10_52 = *UI2StateDeclI_counter
    uint64_t x11_22 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d6808
    *UI2StateDeclI_counter = x10_52 + 1
    data_14d6810 = x11_22
else
    (*data_14d6808)(&data_14d6808, *(x0_21 + 0x10))

data_14d6828 = 0x84
data_14d6830 = RoyalGalley
data_14d6e40 = 1
__builtin_memcpy(&data_14d6ee0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"2d\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d6820 = 0x40000100a
data_14d6f00 = 0xffffffff
data_14d6f38 = "town"
data_14d6f40 = 0x1d
data_14d6f48 = TEXTURE_CARD_GEN_ALLIES_TOWN
data_14d6f70 = _vtable_for_UI2StateDecl + 0x10
data_14d6f50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_TOWN
void* x0_22 = UI2StateDeclTryLookup("ay_town")

if (x0_22 == 0)
    (*data_14d6f70)(&data_14d6f70, "ay_town")
    uint32_t x10_55 = *UI2StateDeclI_counter
    uint64_t x11_23 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d6f70
    *UI2StateDeclI_counter = x10_55 + 1
    data_14d6f78 = x11_23
else
    (*data_14d6f70)(&data_14d6f70, *(x0_22 + 0x10))

data_14d6f88 = _vtable_for_UI2StateDecl + 0x10
void* x0_23 = UI2StateDeclTryLookup("ay_town")

if (x0_23 == 0)
    (*data_14d6f88)(&data_14d6f88, "ay_town")
    uint32_t x10_57 = *UI2StateDeclI_counter
    uint64_t x11_24 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d6f88
    *UI2StateDeclI_counter = x10_57 + 1
    data_14d6f90 = x11_24
else
    (*data_14d6f88)(&data_14d6f88, *(x0_23 + 0x10))

int128_t v0_7
v0_7.q = 0x40000100b
data_14d6fa0 = 0x40000100b
data_14d6fa8 = 4
data_14d6fb0 = Town
__builtin_memcpy(&data_14d7660, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x08\x00\x00\x00\x00", 
    0x20)
data_14d7680 = 0xffffffff
data_14d76b8 = "barbarian"
data_14d76c0 = 0x1d
data_14d76c8 = TEXTURE_CARD_GEN_ALLIES_BARBARIAN
data_14d76f0 = _vtable_for_UI2StateDecl + 0x10
data_14d76d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_BARBARIAN
void* x0_24 = UI2StateDeclTryLookup("ay_barbarian")

if (x0_24 == 0)
    (*data_14d76f0)(&data_14d76f0, "ay_barbarian")
    uint32_t x10_60 = *UI2StateDeclI_counter
    uint64_t x11_25 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d76f0
    *UI2StateDeclI_counter = x10_60 + 1
    data_14d76f8 = x11_25
else
    (*data_14d76f0)(&data_14d76f0, *(x0_24 + 0x10))

data_14d7708 = _vtable_for_UI2StateDecl + 0x10
void* x0_25 = UI2StateDeclTryLookup("ay_barbarian")

if (x0_25 == 0)
    (*data_14d7708)(&data_14d7708, "ay_barbarian")
    uint32_t x10_62 = *UI2StateDeclI_counter
    uint64_t x11_26 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d7708
    *UI2StateDeclI_counter = x10_62 + 1
    data_14d7710 = x11_26
else
    (*data_14d7708)(&data_14d7708, *(x0_25 + 0x10))

int128_t v0_8
v0_8.q = 0x50000100c
data_14d7728 = 0x24
data_14d7730 = Barbarian
data_14d7720 = 0x50000100c
data_14d7d40 = 1
__builtin_memcpy(&data_14d7de0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00\x"
"4c\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d7e00 = 0xffffffff
data_14d7e38 = "capital_city"
data_14d7e40 = 0x26
data_14d7e48 = TEXTURE_CARD_GEN_ALLIES_CAPITAL_CITY
data_14d7e70 = _vtable_for_UI2StateDecl + 0x10
data_14d7e50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_CAPITAL_CITY
void* x0_26 = UI2StateDeclTryLookup("ay_capital_city")

if (x0_26 == 0)
    (*data_14d7e70)(&data_14d7e70, "ay_capital_city")
    uint32_t x10_65 = *UI2StateDeclI_counter
    uint64_t x11_27 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d7e70
    *UI2StateDeclI_counter = x10_65 + 1
    data_14d7e78 = x11_27
else
    (*data_14d7e70)(&data_14d7e70, *(x0_26 + 0x10))

data_14d7e88 = _vtable_for_UI2StateDecl + 0x10
void* x0_27 = UI2StateDeclTryLookup("ay_capital_city")
int128_t v1_6
int128_t v2

if (x0_27 == 0)
    v1_6, v2 = (*data_14d7e88)(&data_14d7e88, "ay_capital_city")
    uint32_t x10_67 = *UI2StateDeclI_counter
    uint64_t x11_28 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d7e88
    *UI2StateDeclI_counter = x10_67 + 1
    data_14d7e90 = x11_28
else
    v1_6, v2 = (*data_14d7e88)(&data_14d7e88, *(x0_27 + 0x10))

data_14d8560 = v1_1
v1_6 = data_7ad9a0
v2 = data_7ad9b0
data_14d7ea8 = 4
data_14d7eb0 = CapitalCity
data_14d8570 = 9
data_14d7ea0 = 0x50000100d
data_14d8578 = v1_6
data_14d85b8 = "contract"
data_14d8588 = v2
__builtin_memset(&data_14d8598, 0, 0x20)
data_14d85c0 = 0x26
data_14d85c8 = TEXTURE_CARD_GEN_ALLIES_CONTRACT
data_14d85f0 = _vtable_for_UI2StateDecl + 0x10
data_14d85d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_CONTRACT
void* x0_28 = UI2StateDeclTryLookup("ay_contract")

if (x0_28 == 0)
    (*data_14d85f0)(&data_14d85f0, "ay_contract")
    uint32_t x10_70 = *UI2StateDeclI_counter
    uint64_t x11_29 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d85f0
    *UI2StateDeclI_counter = x10_70 + 1
    data_14d85f8 = x11_29
else
    (*data_14d85f0)(&data_14d85f0, *(x0_28 + 0x10))

data_14d8608 = _vtable_for_UI2StateDecl + 0x10
void* x0_29 = UI2StateDeclTryLookup("ay_contract")

if (x0_29 == 0)
    (*data_14d8608)(&data_14d8608, "ay_contract")
    uint32_t x10_72 = *UI2StateDeclI_counter
    uint64_t x11_30 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d8608
    *UI2StateDeclI_counter = x10_72 + 1
    data_14d8610 = x11_30
else
    (*data_14d8608)(&data_14d8608, *(x0_29 + 0x10))

int128_t v0_9
v0_9.q = 0x50000100e
data_14d8628 = 0x80000082
data_14d8630 = Contract
data_14d8620 = 0x50000100e
data_14d8c40 = 1
__builtin_memcpy(&data_14d8ce0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"10\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d8d00 = 0xffffffff
data_14d8d38 = "emissary"
data_14d8d40 = 0x1b
data_14d8d48 = TEXTURE_CARD_GEN_ALLIES_EMISSARY
data_14d8d70 = _vtable_for_UI2StateDecl + 0x10
data_14d8d50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_EMISSARY
void* x0_30 = UI2StateDeclTryLookup("ay_emissary")

if (x0_30 == 0)
    (*data_14d8d70)(&data_14d8d70, "ay_emissary")
    uint32_t x10_75 = *UI2StateDeclI_counter
    uint64_t x11_31 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d8d70
    *UI2StateDeclI_counter = x10_75 + 1
    data_14d8d78 = x11_31
else
    (*data_14d8d70)(&data_14d8d70, *(x0_30 + 0x10))

data_14d8d88 = _vtable_for_UI2StateDecl + 0x10
void* x0_31 = UI2StateDeclTryLookup("ay_emissary")
int128_t v0_10
int128_t v2_1

if (x0_31 == 0)
    v0_10, v2_1 = (*data_14d8d88)(&data_14d8d88, "ay_emissary")
    uint32_t x10_77 = *UI2StateDeclI_counter
    uint64_t x11_32 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d8d88
    *UI2StateDeclI_counter = x10_77 + 1
    data_14d8d90 = x11_32
else
    v0_10, v2_1 = (*data_14d8d88)(&data_14d8d88, *(x0_31 + 0x10))
v0_10.q = 0x50000100f
data_11271d8
data_14d8da0 = 0x50000100f
__builtin_memset(&data_14d9420, 0, 0x40)
data_11271e8
v0_10 = data_11271b8
data_14d9400 = data_11271a8
data_14d93c0 = 1
data_14d8da8 = 0x80000004
data_14d8db0 = Emissary
__builtin_memcpy(&data_14d9460, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"21\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d9410 = v0_10
data_14d9480 = 0xffffffff
data_14d94b8 = "galleria"
data_14d94c0 = 8
data_14d94c8 = TEXTURE_CARD_GEN_ALLIES_GALLERIA
data_14d94f0 = _vtable_for_UI2StateDecl + 0x10
data_14d94d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_GALLERIA
void* x0_32 = UI2StateDeclTryLookup("ay_galleria")

if (x0_32 == 0)
    (*data_14d94f0)(&data_14d94f0, "ay_galleria")
    uint32_t x10_80 = *UI2StateDeclI_counter
    uint64_t x11_33 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d94f0
    *UI2StateDeclI_counter = x10_80 + 1
    data_14d94f8 = x11_33
else
    (*data_14d94f0)(&data_14d94f0, *(x0_32 + 0x10))

data_14d9508 = _vtable_for_UI2StateDecl + 0x10
void* x0_33 = UI2StateDeclTryLookup("ay_galleria")

if (x0_33 == 0)
    (*data_14d9508)(&data_14d9508, "ay_galleria")
    uint32_t x10_82 = *UI2StateDeclI_counter
    uint64_t x11_34 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d9508
    *UI2StateDeclI_counter = x10_82 + 1
    data_14d9510 = x11_34
else
    (*data_14d9508)(&data_14d9508, *(x0_33 + 0x10))

data_14d9528 = 4
data_14d9530 = Galleria
data_14d9b40 = 1
__builtin_memcpy(&data_14d9be0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14d9520 = 0x500001010
data_14d9c00 = 0xffffffff
data_14d9c38 = "guildmaster"
data_14d9c40 = 0xd
data_14d9c48 = TEXTURE_CARD_GEN_ALLIES_GUILDMASTER
data_14d9c70 = _vtable_for_UI2StateDecl + 0x10
data_14d9c50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_GUILDMASTER
void* x0_34 = UI2StateDeclTryLookup("ay_guildmaster")

if (x0_34 == 0)
    (*data_14d9c70)(&data_14d9c70, "ay_guildmaster")
    uint32_t x10_85 = *UI2StateDeclI_counter
    uint64_t x11_35 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d9c70
    *UI2StateDeclI_counter = x10_85 + 1
    data_14d9c78 = x11_35
else
    (*data_14d9c70)(&data_14d9c70, *(x0_34 + 0x10))

data_14d9c88 = _vtable_for_UI2StateDecl + 0x10
void* x0_35 = UI2StateDeclTryLookup("ay_guildmaster")
int128_t v0_11
int128_t v2_2
int128_t v1_9

if (x0_35 == 0)
    v0_11, v1_9, v2_2 = (*data_14d9c88)(&data_14d9c88, "ay_guildmaster")
    uint32_t x10_87 = *UI2StateDeclI_counter
    uint64_t x11_36 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14d9c88
    *UI2StateDeclI_counter = x10_87 + 1
    data_14d9c90 = x11_36
else
    v0_11, v1_9, v2_2 = (*data_14d9c88)(&data_14d9c88, *(x0_35 + 0x10))
v0_11.q = 0x500001011
data_14da2c0 = 1
data_14d9ca8 = 0x80000004
data_14d9cb0 = Guildmaster
data_14da360 = v1_1
data_14d9ca0 = 0x500001011
v0_11 = data_7ad9e0
v2_2 = data_7ad9f0
data_14da370 = 0x90000000a
data_14da378 = v0_11
data_14da3b8 = "highwayman"
data_14da388 = v2_2
__builtin_memset(&data_14da398, 0, 0x20)
data_14da3c0 = 0xe
data_14da3c8 = TEXTURE_CARD_GEN_ALLIES_HIGHWAYMAN
data_14da3d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_HIGHWAYMAN
data_14da3d8 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_REPLACEMENT_HIGHWAYMAN
data_14da3f0 = _vtable_for_UI2StateDecl + 0x10
void* x0_36 = UI2StateDeclTryLookup("ay_highwayman")

if (x0_36 == 0)
    (*data_14da3f0)(&data_14da3f0, "ay_highwayman")
    uint32_t x10_89 = *UI2StateDeclI_counter
    uint64_t x11_37 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14da3f0
    *UI2StateDeclI_counter = x10_89 + 1
    data_14da3f8 = x11_37
else
    (*data_14da3f0)(&data_14da3f0, *(x0_36 + 0x10))

data_14da408 = _vtable_for_UI2StateDecl + 0x10
void* x0_37 = UI2StateDeclTryLookup("ay_highwayman")

if (x0_37 == 0)
    (*data_14da408)(&data_14da408, "ay_highwayman")
    uint32_t x10_91 = *UI2StateDeclI_counter
    uint64_t x11_38 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14da408
    *UI2StateDeclI_counter = x10_91 + 1
    data_14da410 = x11_38
else
    (*data_14da408)(&data_14da408, *(x0_37 + 0x10))

data_14da428 = 0xa4
data_14da430 = Highwayman
data_14da440 = zx.o(0)
data_14da440.d = 9
__builtin_memset(&data_14da450, 0, 0x20)
data_14da450:8 = Highaymwan_Replacement
__builtin_memset(&data_14da470, 0, 0x90)
data_14da420 = 0x500001012
data_14daae0 = v1_1
data_14da4e0:8 = Highaymwan_ReplacementTest
data_14daaf0 = 2
__builtin_memset(&data_14daa60, 0, 0x20)
__builtin_memcpy(&data_14daa40, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x26\x00\x00\x00\x00\x00\x00\x00\x"
"9a\xe6\x74\x00\x00\x00\x00\x00", 
    0x20)
data_14daaf8 = 0x12
data_14dab00 = 0xffffffff
data_14dab38 = "hunter"
data_14dab40 = 0x1d
data_14dab48 = TEXTURE_CARD_GEN_ALLIES_HUNTER
data_14dab70 = _vtable_for_UI2StateDecl + 0x10
data_14dab50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_HUNTER
void* x0_38 = UI2StateDeclTryLookup("ay_hunter")

if (x0_38 == 0)
    (*data_14dab70)(&data_14dab70, "ay_hunter")
    uint32_t x10_94 = *UI2StateDeclI_counter
    uint64_t x11_39 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dab70
    *UI2StateDeclI_counter = x10_94 + 1
    data_14dab78 = x11_39
else
    (*data_14dab70)(&data_14dab70, *(x0_38 + 0x10))

data_14dab88 = _vtable_for_UI2StateDecl + 0x10
void* x0_39 = UI2StateDeclTryLookup("ay_hunter")

if (x0_39 == 0)
    (*data_14dab88)(&data_14dab88, "ay_hunter")
    uint32_t x10_96 = *UI2StateDeclI_counter
    uint64_t x11_40 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dab88
    *UI2StateDeclI_counter = x10_96 + 1
    data_14dab90 = x11_40
else
    (*data_14dab88)(&data_14dab88, *(x0_39 + 0x10))

data_14daba0 = 0x500001013
data_14daba8 = 4
data_14dabb0 = Hunter
__builtin_memcpy(&data_14db260, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x20\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14db280 = 0xffffffff
data_14db2b8 = "modify"
data_14db2c0 = 0x26
data_14db2c8 = TEXTURE_CARD_GEN_ALLIES_MODIFY
data_14db2f0 = _vtable_for_UI2StateDecl + 0x10
data_14db2d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_MODIFY
void* x0_40 = UI2StateDeclTryLookup("ay_modify")

if (x0_40 == 0)
    (*data_14db2f0)(&data_14db2f0, "ay_modify")
    uint32_t x10_99 = *UI2StateDeclI_counter
    uint64_t x11_41 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14db2f0
    *UI2StateDeclI_counter = x10_99 + 1
    data_14db2f8 = x11_41
else
    (*data_14db2f0)(&data_14db2f0, *(x0_40 + 0x10))

data_14db308 = _vtable_for_UI2StateDecl + 0x10
void* x0_41 = UI2StateDeclTryLookup("ay_modify")
int128_t v0_12
int128_t v2_3
int128_t v1_11

if (x0_41 == 0)
    v0_12, v1_11, v2_3 = (*data_14db308)(&data_14db308, "ay_modify")
    uint32_t x10_101 = *UI2StateDeclI_counter
    uint64_t x11_42 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14db308
    *UI2StateDeclI_counter = x10_101 + 1
    data_14db310 = x11_42
else
    v0_12, v1_11, v2_3 = (*data_14db308)(&data_14db308, *(x0_41 + 0x10))
v0_12.q = 0x500001014
data_14db328 = 4
data_14db330 = Modify
data_14db9e0 = v1_1
data_14db320 = 0x500001014
v0_12 = data_7ada20
v2_3 = data_7ada30
data_14db9f0 = 0x200000011
data_14db9f8 = v0_12
data_14dba38 = "skirmisher"
data_14dba08 = v2_3
__builtin_memset(&data_14dba18, 0, 0x20)
data_14dba40 = 8
data_14dba48 = TEXTURE_CARD_GEN_ALLIES_SKIRMISHER
data_14dba70 = _vtable_for_UI2StateDecl + 0x10
data_14dba50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SKIRMISHER
void* x0_42 = UI2StateDeclTryLookup("ay_skirmisher")

if (x0_42 == 0)
    (*data_14dba70)(&data_14dba70, "ay_skirmisher")
    uint32_t x10_104 = *UI2StateDeclI_counter
    uint64_t x11_43 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dba70
    *UI2StateDeclI_counter = x10_104 + 1
    data_14dba78 = x11_43
else
    (*data_14dba70)(&data_14dba70, *(x0_42 + 0x10))

data_14dba88 = _vtable_for_UI2StateDecl + 0x10
void* x0_43 = UI2StateDeclTryLookup("ay_skirmisher")

if (x0_43 == 0)
    (*data_14dba88)(&data_14dba88, "ay_skirmisher")
    uint32_t x10_106 = *UI2StateDeclI_counter
    uint64_t x11_44 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dba88
    *UI2StateDeclI_counter = x10_106 + 1
    data_14dba90 = x11_44
else
    (*data_14dba88)(&data_14dba88, *(x0_43 + 0x10))

data_14dbaa8 = 0x24
data_14dbab0 = Skirmisher
data_14dc0c0 = 1
__builtin_memcpy(&data_14dc160, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x09\x00\x00\x00\x00\x00", 
    0x20)
data_14dbaa0 = 0x500001015
data_14dc180 = 0xffffffff
data_14dc1b8 = "specialist"
data_14dc1c0 = 8
data_14dc1c8 = TEXTURE_CARD_GEN_ALLIES_SPECIALIST
data_14dc1f0 = _vtable_for_UI2StateDecl + 0x10
data_14dc1d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SPECIALIST
void* x0_44 = UI2StateDeclTryLookup("ay_specialist")

if (x0_44 == 0)
    (*data_14dc1f0)(&data_14dc1f0, "ay_specialist")
    uint32_t x10_109 = *UI2StateDeclI_counter
    uint64_t x11_45 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dc1f0
    *UI2StateDeclI_counter = x10_109 + 1
    data_14dc1f8 = x11_45
else
    (*data_14dc1f0)(&data_14dc1f0, *(x0_44 + 0x10))

data_14dc208 = _vtable_for_UI2StateDecl + 0x10
void* x0_45 = UI2StateDeclTryLookup("ay_specialist")

if (x0_45 == 0)
    (*data_14dc208)(&data_14dc208, "ay_specialist")
    uint32_t x10_111 = *UI2StateDeclI_counter
    uint64_t x11_46 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dc208
    *UI2StateDeclI_counter = x10_111 + 1
    data_14dc210 = x11_46
else
    (*data_14dc208)(&data_14dc208, *(x0_45 + 0x10))

data_14dc228 = 4
data_14dc230 = Specialist
__builtin_memcpy(&data_14dc8e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"0a\x00\x01\x00\x00\x00\x00\x00", 
    0x20)
data_14dc220 = 0x500001016
data_14dc900 = 0xffffffff
data_14dc938 = "swap"
data_14dc940 = 0xf
data_14dc948 = TEXTURE_CARD_GEN_ALLIES_SWAP
data_14dc970 = _vtable_for_UI2StateDecl + 0x10
data_14dc950 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SWAP
void* x0_46 = UI2StateDeclTryLookup("ay_swap")

if (x0_46 == 0)
    (*data_14dc970)(&data_14dc970, "ay_swap")
    uint32_t x10_114 = *UI2StateDeclI_counter
    uint64_t x11_47 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dc970
    *UI2StateDeclI_counter = x10_114 + 1
    data_14dc978 = x11_47
else
    (*data_14dc970)(&data_14dc970, *(x0_46 + 0x10))

data_14dc988 = _vtable_for_UI2StateDecl + 0x10
void* x0_47 = UI2StateDeclTryLookup("ay_swap")

if (x0_47 == 0)
    (*data_14dc988)(&data_14dc988, "ay_swap")
    uint32_t x10_116 = *UI2StateDeclI_counter
    uint64_t x11_48 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dc988
    *UI2StateDeclI_counter = x10_116 + 1
    data_14dc990 = x11_48
else
    (*data_14dc988)(&data_14dc988, *(x0_47 + 0x10))

data_14dc9a8 = 4
data_14dc9b0 = Swap
__builtin_memcpy(&data_14dd060, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x"
"30\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14dc9a0 = 0x500001017
data_14dd080 = 0xffffffff
data_14dd0b8 = "marquis"
data_14dd0c0 = 0xf
data_14dd0c8 = TEXTURE_CARD_GEN_ALLIES_MARQUIS
data_14dd0f0 = _vtable_for_UI2StateDecl + 0x10
data_14dd0d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_MARQUIS
void* x0_48 = UI2StateDeclTryLookup("ay_marquis")

if (x0_48 == 0)
    (*data_14dd0f0)(&data_14dd0f0, "ay_marquis")
    uint32_t x10_119 = *UI2StateDeclI_counter
    uint64_t x11_49 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dd0f0
    *UI2StateDeclI_counter = x10_119 + 1
    data_14dd0f8 = x11_49
else
    (*data_14dd0f0)(&data_14dd0f0, *(x0_48 + 0x10))

data_14dd108 = _vtable_for_UI2StateDecl + 0x10
void* x0_49 = UI2StateDeclTryLookup("ay_marquis")

if (x0_49 == 0)
    (*data_14dd108)(&data_14dd108, "ay_marquis")
    uint32_t x10_121 = *UI2StateDeclI_counter
    uint64_t x11_50 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dd108
    *UI2StateDeclI_counter = x10_121 + 1
    data_14dd110 = x11_50
else
    (*data_14dd108)(&data_14dd108, *(x0_49 + 0x10))

data_1127278
data_14dd120 = 0x600001018
data_1127258
data_14dd780 = data_1127248
__builtin_memset(&data_14dd790, 0, 0x50)
data_14dd128 = 4
data_14dd130 = Marquis
__builtin_memcpy(&data_14dd7e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00", 
    0x18)
data_14dd838 = "augurs"
data_14dd7f8 = 0x100000000
data_14dd840 = 0x13
data_14dd848 = TEXTURE_CARD_GEN_ALLIES_AUGURS
data_14dd870 = _vtable_for_UI2StateDecl + 0x10
void* x0_50 = UI2StateDeclTryLookup("ay_augurs")

if (x0_50 == 0)
    (*data_14dd870)(&data_14dd870, "ay_augurs")
    uint32_t x10_123 = *UI2StateDeclI_counter
    uint64_t x11_51 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dd870
    *UI2StateDeclI_counter = x10_123 + 1
    data_14dd878 = x11_51
else
    (*data_14dd870)(&data_14dd870, *(x0_50 + 0x10))

data_14dd888 = _vtable_for_UI2StateDecl + 0x10
void* x0_51 = UI2StateDeclTryLookup("ay_augurs")

if (x0_51 == 0)
    (*data_14dd888)(&data_14dd888, "ay_augurs")
    uint32_t x10_125 = *UI2StateDeclI_counter
    uint64_t x11_52 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dd888
    *UI2StateDeclI_counter = x10_125 + 1
    data_14dd890 = x11_52
else
    (*data_14dd888)(&data_14dd888, *(x0_51 + 0x10))

__builtin_memset(&data_14dd8c0, 0, 0xc0)
data_14dd8a8 = 0x100000004
data_14dd8c0 = 0xa
data_14dd8d0:8 = QuadPile<4122, 4123, 4124, 4125>
data_14ddf60 = v1_1
data_14ddf70 = 0
data_14dd8a0 = 0x300001019
data_14ddf78 = 0x20
data_14ddf74 = 0
data_14ddf80 = 0xffffffff
data_14ddfb8 = "herb_gatherer"
data_14ddfc0 = 0x13
data_14ddfc8 = TEXTURE_CARD_GEN_ALLIES_HERB_GATHERER
data_14ddff0 = _vtable_for_UI2StateDecl + 0x10
data_14ddfd0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_HERB_GATHERER
void* x0_52 = UI2StateDeclTryLookup("ay_herb_gatherer")

if (x0_52 == 0)
    (*data_14ddff0)(&data_14ddff0, "ay_herb_gatherer")
    uint32_t x10_128 = *UI2StateDeclI_counter
    uint64_t x11_53 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ddff0
    *UI2StateDeclI_counter = x10_128 + 1
    data_14ddff8 = x11_53
else
    (*data_14ddff0)(&data_14ddff0, *(x0_52 + 0x10))

data_14de008 = _vtable_for_UI2StateDecl + 0x10
void* x0_53 = UI2StateDeclTryLookup("ay_herb_gatherer")

if (x0_53 == 0)
    (*data_14de008)(&data_14de008, "ay_herb_gatherer")
    uint32_t x10_130 = *UI2StateDeclI_counter
    uint64_t x11_54 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14de008
    *UI2StateDeclI_counter = x10_130 + 1
    data_14de010 = x11_54
else
    (*data_14de008)(&data_14de008, *(x0_53 + 0x10))

data_14de028 = 0x1000100000004
data_14de030 = HerbGatherer
data_14de6e0 = v1_1
data_14de6f0 = 0
data_14de020 = 0x30000101a
data_14de6f8 = 0x12000
data_14de6f4 = 0
data_14de700 = 0xffffffff
data_14de738 = "acolyte"
data_14de740 = 0x13
data_14de748 = TEXTURE_CARD_GEN_ALLIES_ACOLYTE
data_14de770 = _vtable_for_UI2StateDecl + 0x10
data_14de750 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_ACOLYTE
void* x0_54 = UI2StateDeclTryLookup("ay_acolyte")

if (x0_54 == 0)
    (*data_14de770)(&data_14de770, "ay_acolyte")
    uint32_t x10_133 = *UI2StateDeclI_counter
    uint64_t x11_55 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14de770
    *UI2StateDeclI_counter = x10_133 + 1
    data_14de778 = x11_55
else
    (*data_14de770)(&data_14de770, *(x0_54 + 0x10))

data_14de788 = _vtable_for_UI2StateDecl + 0x10
void* x0_55 = UI2StateDeclTryLookup("ay_acolyte")

if (x0_55 == 0)
    (*data_14de788)(&data_14de788, "ay_acolyte")
    uint32_t x10_135 = *UI2StateDeclI_counter
    uint64_t x11_56 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14de788
    *UI2StateDeclI_counter = x10_135 + 1
    data_14de790 = x11_56
else
    (*data_14de788)(&data_14de788, *(x0_55 + 0x10))

data_14de7a8 = 0x1000100000004
data_14de7b0 = Acolyte
data_14dee60 = v1_1
data_14dee70 = 0
data_14de7a0 = 0x40000101b
data_14dee74 = 0
data_14dee78 = 0x2000000a
data_14dee80 = 0xffffffff
data_14deeb8 = "sorceress"
data_14deec0 = 0x13
data_14deec8 = TEXTURE_CARD_GEN_ALLIES_SORCERESS
data_14deef0 = _vtable_for_UI2StateDecl + 0x10
data_14deed0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SORCERESS
void* x0_56 = UI2StateDeclTryLookup("ay_sorceress")

if (x0_56 == 0)
    (*data_14deef0)(&data_14deef0, "ay_sorceress")
    uint32_t x10_138 = *UI2StateDeclI_counter
    uint64_t x11_57 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14deef0
    *UI2StateDeclI_counter = x10_138 + 1
    data_14deef8 = x11_57
else
    (*data_14deef0)(&data_14deef0, *(x0_56 + 0x10))

data_14def08 = _vtable_for_UI2StateDecl + 0x10
void* x0_57 = UI2StateDeclTryLookup("ay_sorceress")

if (x0_57 == 0)
    (*data_14def08)(&data_14def08, "ay_sorceress")
    uint32_t x10_140 = *UI2StateDeclI_counter
    uint64_t x11_58 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14def08
    *UI2StateDeclI_counter = x10_140 + 1
    data_14def10 = x11_58
else
    (*data_14def08)(&data_14def08, *(x0_57 + 0x10))

data_11272d8
data_14def20 = 0x50000101c
data_11272f8
data_14df580 = data_11272a8
data_14df5f0 = 0
__builtin_memset(&data_14df590, 0, 0x50)
data_14def28 = 0x1000100000024
data_14def30 = Sorceress
data_14df5e0 = v1_1
data_14df5f8 = 0x112
data_14df5f4 = 0
data_14df600 = 0xffffffff
data_14df638 = "sibyl"
data_14df640 = 0x13
data_14df648 = TEXTURE_CARD_GEN_ALLIES_SIBYL
data_14df670 = _vtable_for_UI2StateDecl + 0x10
data_14df650 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SIBYL
void* x0_58 = UI2StateDeclTryLookup("ay_sibyl")

if (x0_58 == 0)
    (*data_14df670)(&data_14df670, "ay_sibyl")
    uint32_t x10_143 = *UI2StateDeclI_counter
    uint64_t x11_59 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14df670
    *UI2StateDeclI_counter = x10_143 + 1
    data_14df678 = x11_59
else
    (*data_14df670)(&data_14df670, *(x0_58 + 0x10))

data_14df688 = _vtable_for_UI2StateDecl + 0x10
void* x0_59 = UI2StateDeclTryLookup("ay_sibyl")

if (x0_59 == 0)
    (*data_14df688)(&data_14df688, "ay_sibyl")
    uint32_t x10_145 = *UI2StateDeclI_counter
    uint64_t x11_60 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14df688
    *UI2StateDeclI_counter = x10_145 + 1
    data_14df690 = x11_60
else
    (*data_14df688)(&data_14df688, *(x0_59 + 0x10))

data_14df6a8 = 0x1000100000004
data_14df6b0 = Sibyl
__builtin_memcpy(&data_14dfd60, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14df6a0 = 0x60000101d
data_14dfdb8 = "clashes"
data_14dfdc0 = 0x14
data_14dfdc8 = TEXTURE_CARD_GEN_ALLIES_CLASHES
data_14dfdf0 = _vtable_for_UI2StateDecl + 0x10
void* x0_60 = UI2StateDeclTryLookup("ay_clashes")

if (x0_60 == 0)
    (*data_14dfdf0)(&data_14dfdf0, "ay_clashes")
    uint32_t x10_147 = *UI2StateDeclI_counter
    uint64_t x11_61 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dfdf0
    *UI2StateDeclI_counter = x10_147 + 1
    data_14dfdf8 = x11_61
else
    (*data_14dfdf0)(&data_14dfdf0, *(x0_60 + 0x10))

data_14dfe08 = _vtable_for_UI2StateDecl + 0x10
void* x0_61 = UI2StateDeclTryLookup("ay_clashes")

if (x0_61 == 0)
    (*data_14dfe08)(&data_14dfe08, "ay_clashes")
    uint32_t x10_149 = *UI2StateDeclI_counter
    uint64_t x11_62 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14dfe08
    *UI2StateDeclI_counter = x10_149 + 1
    data_14dfe10 = x11_62
else
    (*data_14dfe08)(&data_14dfe08, *(x0_61 + 0x10))

__builtin_memset(&data_14dfe40, 0, 0xc0)
data_14dfe28 = 0x200000004
data_14dfe50:8 = QuadPile<4127, 4128, 4129, 4130>
data_14dfe40 = 0xa
data_14e04e0 = v1_1
data_14e04f0 = 0
data_14dfe20 = 0x30000101e
data_14e04f8 = 0xa
data_14e04f4 = 0
data_14e0500 = 0xffffffff
data_14e0538 = "battle_plan"
data_14e0540 = 0x14
data_14e0548 = TEXTURE_CARD_GEN_ALLIES_BATTLE_PLAN
data_14e0570 = _vtable_for_UI2StateDecl + 0x10
data_14e0550 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_BATTLE_PLAN
void* x0_62 = UI2StateDeclTryLookup("ay_battle_plan")

if (x0_62 == 0)
    (*data_14e0570)(&data_14e0570, "ay_battle_plan")
    uint32_t x10_152 = *UI2StateDeclI_counter
    uint64_t x11_63 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e0570
    *UI2StateDeclI_counter = x10_152 + 1
    data_14e0578 = x11_63
else
    (*data_14e0570)(&data_14e0570, *(x0_62 + 0x10))

data_14e0588 = _vtable_for_UI2StateDecl + 0x10
void* x0_63 = UI2StateDeclTryLookup("ay_battle_plan")
int128_t v0_14
int128_t v2_6

if (x0_63 == 0)
    v0_14, v2_6 = (*data_14e0588)(&data_14e0588, "ay_battle_plan")
    uint32_t x10_154 = *UI2StateDeclI_counter
    uint64_t x11_64 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e0588
    *UI2StateDeclI_counter = x10_154 + 1
    data_14e0590 = x11_64
else
    v0_14, v2_6 = (*data_14e0588)(&data_14e0588, *(x0_63 + 0x10))
v0_14.q = 0x30000101f
data_1127338
data_14e05a0 = 0x30000101f
__builtin_memset(&data_14e0c20, 0, 0x40)
data_1127348
data_1127358
v0_14 = data_1127318
data_14e0c00 = data_1127308
data_14e0c70 = 0
data_14e05a8 = 0x1000200000004
data_14e05b0 = BattlePlan
data_14e0c60 = v1_1
data_14e0c10 = v0_14
data_14e0c78 = 0x800001
data_14e0c74 = 0
data_14e0c80 = 0xffffffff
data_14e0cb8 = "archer"
data_14e0cc0 = 0x14
data_14e0cc8 = TEXTURE_CARD_GEN_ALLIES_ARCHER
data_14e0cf0 = _vtable_for_UI2StateDecl + 0x10
data_14e0cd0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_ARCHER
void* x0_64 = UI2StateDeclTryLookup("ay_archer")

if (x0_64 == 0)
    (*data_14e0cf0)(&data_14e0cf0, "ay_archer")
    uint32_t x10_157 = *UI2StateDeclI_counter
    uint64_t x11_65 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e0cf0
    *UI2StateDeclI_counter = x10_157 + 1
    data_14e0cf8 = x11_65
else
    (*data_14e0cf0)(&data_14e0cf0, *(x0_64 + 0x10))

data_14e0d08 = _vtable_for_UI2StateDecl + 0x10
void* x0_65 = UI2StateDeclTryLookup("ay_archer")
int128_t v1_22
int128_t v2_7

if (x0_65 == 0)
    v1_22, v2_7 = (*data_14e0d08)(&data_14e0d08, "ay_archer")
    uint32_t x10_159 = *UI2StateDeclI_counter
    uint64_t x11_66 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e0d08
    *UI2StateDeclI_counter = x10_159 + 1
    data_14e0d10 = x11_66
else
    v1_22, v2_7 = (*data_14e0d08)(&data_14e0d08, *(x0_65 + 0x10))

data_14e13e0 = v1_1
v1_22 = data_7ada60
v2_7 = data_7ada70
data_14e0d28 = 0x1000200000024
data_14e0d30 = Archer
data_14e13f0 = 0
data_14e0d20 = 0x400001020
data_14e13f8 = v1_22
data_14e1438 = "warlord"
data_14e1408 = v2_7
__builtin_memset(&data_14e1418, 0, 0x20)
data_14e13f4 = 0
data_14e1440 = 0x14
data_14e1448 = TEXTURE_CARD_GEN_ALLIES_WARLORD
data_14e1470 = _vtable_for_UI2StateDecl + 0x10
data_14e1450 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_WARLORD
void* x0_66 = UI2StateDeclTryLookup("ay_warlord")

if (x0_66 == 0)
    (*data_14e1470)(&data_14e1470, "ay_warlord")
    uint32_t x10_162 = *UI2StateDeclI_counter
    uint64_t x11_67 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e1470
    *UI2StateDeclI_counter = x10_162 + 1
    data_14e1478 = x11_67
else
    (*data_14e1470)(&data_14e1470, *(x0_66 + 0x10))

data_14e1488 = _vtable_for_UI2StateDecl + 0x10
void* x0_67 = UI2StateDeclTryLookup("ay_warlord")
int128_t v1_23
int128_t v2_8

if (x0_67 == 0)
    v1_23, v2_8 = (*data_14e1488)(&data_14e1488, "ay_warlord")
    uint32_t x10_164 = *UI2StateDeclI_counter
    uint64_t x11_68 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e1488
    *UI2StateDeclI_counter = x10_164 + 1
    data_14e1490 = x11_68
else
    v1_23, v2_8 = (*data_14e1488)(&data_14e1488, *(x0_67 + 0x10))

data_14e14a8 = 0x10002000000a4
data_14e14b0 = Warlord
data_14e1b60 = v1_1
v1_23 = data_7adaa0
v2_8 = data_7adab0
data_14e1ac0 = 1
data_14e1b70 = 0
data_14e14a0 = 0x500001021
data_14e1b78 = v1_23
data_14e1bb8 = "territory"
data_14e1b88 = v2_8
__builtin_memset(&data_14e1b98, 0, 0x20)
data_14e1b74 = 0
data_14e1bc0 = 0x14
data_14e1bc8 = TEXTURE_CARD_GEN_ALLIES_TERRITORY
data_14e1bf0 = _vtable_for_UI2StateDecl + 0x10
data_14e1bd0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_TERRITORY
void* x0_68 = UI2StateDeclTryLookup("ay_territory")

if (x0_68 == 0)
    (*data_14e1bf0)(&data_14e1bf0, "ay_territory")
    uint32_t x10_167 = *UI2StateDeclI_counter
    uint64_t x11_69 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e1bf0
    *UI2StateDeclI_counter = x10_167 + 1
    data_14e1bf8 = x11_69
else
    (*data_14e1bf0)(&data_14e1bf0, *(x0_68 + 0x10))

data_14e1c08 = _vtable_for_UI2StateDecl + 0x10
void* x0_69 = UI2StateDeclTryLookup("ay_territory")

if (x0_69 == 0)
    (*data_14e1c08)(&data_14e1c08, "ay_territory")
    uint32_t x10_169 = *UI2StateDeclI_counter
    uint64_t x11_70 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e1c08
    *UI2StateDeclI_counter = x10_169 + 1
    data_14e1c10 = x11_70
else
    (*data_14e1c08)(&data_14e1c08, *(x0_69 + 0x10))

int128_t v0_15
v0_15.q = 0
v0_15:8.q = 0
__builtin_memset(&data_14e1c48, 0, 0xb0)
data_14e1c40 = 0x600000006
data_14e1c20 = 0x600001022
v0_15 = data_7adae0
data_14e22f0 = 0xb
data_14e2280 = v0_15
data_7adb10
__builtin_memset(&data_14e22b0, 0, 0x30)
data_14e1c28 = 0x1000200000008
data_14e1c38 = Territory_VP
data_14e1c48:4.d = 1
data_14e2240 = 1
data_14e1c58 = Territory_OnGain
data_14e1cf4:4 = 0
data_14e1ce8 = 0
data_14e1cf4 = 0x100000000
data_14e22e0 = v1_1
__builtin_memset(&data_14e2290, 0, 0x20)
data_14e22f8 = 0x100000000
data_14e2338 = "forts"
data_14e2340 = 0x10
data_14e2348 = TEXTURE_CARD_GEN_ALLIES_FORTS
data_14e2370 = _vtable_for_UI2StateDecl + 0x10
void* x0_70 = UI2StateDeclTryLookup("ay_forts")

if (x0_70 == 0)
    (*data_14e2370)(&data_14e2370, "ay_forts")
    uint32_t x10_171 = *UI2StateDeclI_counter
    uint64_t x11_71 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e2370
    *UI2StateDeclI_counter = x10_171 + 1
    data_14e2378 = x11_71
else
    (*data_14e2370)(&data_14e2370, *(x0_70 + 0x10))

data_14e2388 = _vtable_for_UI2StateDecl + 0x10
void* x0_71 = UI2StateDeclTryLookup("ay_forts")
int128_t v0_16
int128_t v2_9

if (x0_71 == 0)
    v0_16, v2_9 = (*data_14e2388)(&data_14e2388, "ay_forts")
    uint32_t x10_173 = *UI2StateDeclI_counter
    uint64_t x11_72 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e2388
    *UI2StateDeclI_counter = x10_173 + 1
    data_14e2390 = x11_72
else
    v0_16, v2_9 = (*data_14e2388)(&data_14e2388, *(x0_71 + 0x10))

v0_16.q = 0
v0_16:8.q = 0
data_14e23a8 = 0x400000004
__builtin_memset(&data_14e23c0, 0, 0xc0)
data_14e23c0 = 0xa
data_14e2a60 = v1_1
v2_9 = data_7adb60
v0_16 = data_7adb70
data_14e23d0:8 = QuadPile<4132, 4133, 4134, 4135>
data_14e2a70 = 0
data_14e23a0 = 0x300001023
data_14e2aa8 = v0_16
data_14e2ab8 = "tent"
data_14e2a98 = v2_9
data_14e2a74 = 0
__builtin_memcpy(&data_14e2a78, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14e2ac0 = 0x10
data_14e2ac8 = TEXTURE_CARD_GEN_ALLIES_TENT
data_14e2af0 = _vtable_for_UI2StateDecl + 0x10
data_14e2ad0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_TENT
void* x0_72 = UI2StateDeclTryLookup("ay_tent")

if (x0_72 == 0)
    (*data_14e2af0)(&data_14e2af0, "ay_tent")
    uint32_t x10_176 = *UI2StateDeclI_counter
    uint64_t x11_73 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e2af0
    *UI2StateDeclI_counter = x10_176 + 1
    data_14e2af8 = x11_73
else
    (*data_14e2af0)(&data_14e2af0, *(x0_72 + 0x10))

data_14e2b08 = _vtable_for_UI2StateDecl + 0x10
void* x0_73 = UI2StateDeclTryLookup("ay_tent")

if (x0_73 == 0)
    (*data_14e2b08)(&data_14e2b08, "ay_tent")
    uint32_t x10_178 = *UI2StateDeclI_counter
    uint64_t x11_74 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e2b08
    *UI2StateDeclI_counter = x10_178 + 1
    data_14e2b10 = x11_74
else
    (*data_14e2b08)(&data_14e2b08, *(x0_73 + 0x10))

__builtin_memset(&data_14e2b48, 0, 0xb0)
data_14e2b40 = 0x600000006
data_14e2b28 = 0x1000400000004
data_14e2b30 = Tent
data_14e2b58 = Tent_OnDiscardFromPlay
data_14e31e0 = v1_1
data_14e2b20 = 0x300001024
data_14e2b48:4.d = 3
data_14e3140 = 1
data_14e2bf4:4 = 0
data_14e2be8 = 0
data_14e2bf4 = 0x100000003
data_14e31f0 = 0
__builtin_memset(&data_14e3218, 0, 0x20)
data_14e3238 = "garrison"
data_14e31f4 = 0
__builtin_memcpy(&data_14e31f8, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14e3240 = 0x10
data_14e3248 = TEXTURE_CARD_GEN_ALLIES_GARRISON
data_14e3270 = _vtable_for_UI2StateDecl + 0x10
data_14e3250 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_GARRISON
void* x0_74 = UI2StateDeclTryLookup("ay_garrison")

if (x0_74 == 0)
    (*data_14e3270)(&data_14e3270, "ay_garrison")
    uint32_t x10_181 = *UI2StateDeclI_counter
    uint64_t x11_75 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e3270
    *UI2StateDeclI_counter = x10_181 + 1
    data_14e3278 = x11_75
else
    (*data_14e3270)(&data_14e3270, *(x0_74 + 0x10))

data_14e3288 = _vtable_for_UI2StateDecl + 0x10
void* x0_75 = UI2StateDeclTryLookup("ay_garrison")
int128_t v0_17
int128_t v1_25

if (x0_75 == 0)
    v0_17, v1_25 = (*data_14e3288)(&data_14e3288, "ay_garrison")
    uint32_t x10_183 = *UI2StateDeclI_counter
    uint64_t x11_76 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e3288
    *UI2StateDeclI_counter = x10_183 + 1
    data_14e3290 = x11_76
else
    v0_17, v1_25 = (*data_14e3288)(&data_14e3288, *(x0_75 + 0x10))

v0_17.q = 0x400001025
data_1127368
data_14e32a0 = 0x400001025
__builtin_memcpy(&data_14e38c0, 
    "\x25\x00\x00\x00\x00\x00\x00\x00\x18\x3a\x79\x00\x00\x00\x00\x00\x24\x00\x00\x00\x00\x00\x00\x00\x"
"34\xfc\x79\x00\x00\x00\x00\x00", 
    0x20)
v1_25 = data_1127398
data_14e38e0 = data_1127388
data_14e3970 = 0
data_14e32a8 = 0x1000400000084
data_14e32b0 = Garrison
data_14e3960 = v1_1
data_14e38f0 = v1_25
data_14e3978 = 0x10000
data_14e3974 = 0
data_14e3980 = 0xffffffff
data_14e39b8 = "hill_fort"
data_14e39c0 = 0x10
data_14e39c8 = TEXTURE_CARD_GEN_ALLIES_HILL_FORT
data_14e39f0 = _vtable_for_UI2StateDecl + 0x10
data_14e39d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_HILL_FORT
void* x0_76 = UI2StateDeclTryLookup("ay_hill_fort")

if (x0_76 == 0)
    (*data_14e39f0)(&data_14e39f0, "ay_hill_fort")
    uint32_t x10_186 = *UI2StateDeclI_counter
    uint64_t x11_77 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e39f0
    *UI2StateDeclI_counter = x10_186 + 1
    data_14e39f8 = x11_77
else
    (*data_14e39f0)(&data_14e39f0, *(x0_76 + 0x10))

data_14e3a08 = _vtable_for_UI2StateDecl + 0x10
void* x0_77 = UI2StateDeclTryLookup("ay_hill_fort")
int128_t v1_26
int128_t v2_10

if (x0_77 == 0)
    v1_26, v2_10 = (*data_14e3a08)(&data_14e3a08, "ay_hill_fort")
    uint32_t x10_188 = *UI2StateDeclI_counter
    uint64_t x11_78 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e3a08
    *UI2StateDeclI_counter = x10_188 + 1
    data_14e3a10 = x11_78
else
    v1_26, v2_10 = (*data_14e3a08)(&data_14e3a08, *(x0_77 + 0x10))

data_14e40e0 = v1_1
v1_26 = data_7adbc0
v2_10 = data_7adbd0
data_14e3a28 = 0x1000400000004
data_14e3a30 = HillFort
data_14e40f0 = 0
data_14e3a20 = 0x500001026
data_14e40f8 = v1_26
data_14e4138 = "stronghold"
data_14e4108 = v2_10
__builtin_memset(&data_14e4118, 0, 0x20)
data_14e40f4 = 0
data_14e4140 = 0x10
data_14e4148 = TEXTURE_CARD_GEN_ALLIES_STRONGHOLD
data_14e4170 = _vtable_for_UI2StateDecl + 0x10
data_14e4150 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_STRONGHOLD
void* x0_78 = UI2StateDeclTryLookup("ay_stronghold")

if (x0_78 == 0)
    (*data_14e4170)(&data_14e4170, "ay_stronghold")
    uint32_t x10_191 = *UI2StateDeclI_counter
    uint64_t x11_79 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e4170
    *UI2StateDeclI_counter = x10_191 + 1
    data_14e4178 = x11_79
else
    (*data_14e4170)(&data_14e4170, *(x0_78 + 0x10))

data_14e4188 = _vtable_for_UI2StateDecl + 0x10
void* x0_79 = UI2StateDeclTryLookup("ay_stronghold")

if (x0_79 == 0)
    (*data_14e4188)(&data_14e4188, "ay_stronghold")
    uint32_t x10_193 = *UI2StateDeclI_counter
    uint64_t x11_80 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e4188
    *UI2StateDeclI_counter = x10_193 + 1
    data_14e4190 = x11_80
else
    (*data_14e4188)(&data_14e4188, *(x0_79 + 0x10))

int128_t v0_18
v0_18.q = 0x600001027
data_14e41a0 = 0x600001027
data_14e41b8 = Stronghold_VP
data_14e41a8 = 0x100040000008c
data_14e41b0 = Stronghold
data_14e47c0 = 1
__builtin_memcpy(&data_14e4860, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14e48b8 = "odysseys"
data_14e48c0 = 0x1d
data_14e48c8 = TEXTURE_CARD_GEN_ALLIES_ODYSSEYS
data_14e48f0 = _vtable_for_UI2StateDecl + 0x10
void* x0_80 = UI2StateDeclTryLookup("ay_odysseys")

if (x0_80 == 0)
    (*data_14e48f0)(&data_14e48f0, "ay_odysseys")
    uint32_t x10_195 = *UI2StateDeclI_counter
    uint64_t x11_81 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e48f0
    *UI2StateDeclI_counter = x10_195 + 1
    data_14e48f8 = x11_81
else
    (*data_14e48f0)(&data_14e48f0, *(x0_80 + 0x10))

data_14e4908 = _vtable_for_UI2StateDecl + 0x10
void* x0_81 = UI2StateDeclTryLookup("ay_odysseys")

if (x0_81 == 0)
    (*data_14e4908)(&data_14e4908, "ay_odysseys")
    uint32_t x10_197 = *UI2StateDeclI_counter
    uint64_t x11_82 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e4908
    *UI2StateDeclI_counter = x10_197 + 1
    data_14e4910 = x11_82
else
    (*data_14e4908)(&data_14e4908, *(x0_81 + 0x10))

__builtin_memset(&data_14e4940, 0, 0xc0)
data_14e4928 = 0x800000004
data_14e4940 = 0xa
data_14e4950:8 = QuadPile<4137, 4138, 4139, 4140>
data_14e4fe0 = v1_1
data_14e4ff0 = 0
data_14e4920 = 0x300001028
data_14e4ff8 = 0x4a
data_14e4ff4 = 0
data_14e5000 = 0xffffffff
data_14e5038 = "old_map"
data_14e5040 = 0x1d
data_14e5048 = TEXTURE_CARD_GEN_ALLIES_OLD_MAP
data_14e5070 = _vtable_for_UI2StateDecl + 0x10
data_14e5050 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_OLD_MAP
void* x0_82 = UI2StateDeclTryLookup("ay_old_map")

if (x0_82 == 0)
    (*data_14e5070)(&data_14e5070, "ay_old_map")
    uint32_t x10_200 = *UI2StateDeclI_counter
    uint64_t x11_83 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e5070
    *UI2StateDeclI_counter = x10_200 + 1
    data_14e5078 = x11_83
else
    (*data_14e5070)(&data_14e5070, *(x0_82 + 0x10))

data_14e5088 = _vtable_for_UI2StateDecl + 0x10
void* x0_83 = UI2StateDeclTryLookup("ay_old_map")

if (x0_83 == 0)
    (*data_14e5088)(&data_14e5088, "ay_old_map")
    uint32_t x10_202 = *UI2StateDeclI_counter
    uint64_t x11_84 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e5088
    *UI2StateDeclI_counter = x10_202 + 1
    data_14e5090 = x11_84
else
    (*data_14e5088)(&data_14e5088, *(x0_83 + 0x10))

data_14e50a8 = 0x1000800000004
data_14e50b0 = OldMap
data_14e5760 = v1_1
data_14e5770 = 0
data_14e50a0 = 0x300001029
data_14e5778 = 0x40000000
data_14e5774 = 0
data_14e5780 = 0xffffffff
data_14e57b8 = "voyage"
data_14e57c0 = 0x1d
data_14e57c8 = TEXTURE_CARD_GEN_ALLIES_VOYAGE
data_14e57f0 = _vtable_for_UI2StateDecl + 0x10
data_14e57d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_VOYAGE
void* x0_84 = UI2StateDeclTryLookup("ay_voyage")

if (x0_84 == 0)
    (*data_14e57f0)(&data_14e57f0, "ay_voyage")
    uint32_t x10_205 = *UI2StateDeclI_counter
    uint64_t x11_85 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e57f0
    *UI2StateDeclI_counter = x10_205 + 1
    data_14e57f8 = x11_85
else
    (*data_14e57f0)(&data_14e57f0, *(x0_84 + 0x10))

data_14e5808 = _vtable_for_UI2StateDecl + 0x10
void* x0_85 = UI2StateDeclTryLookup("ay_voyage")
int128_t v0_19
int128_t v2_11

if (x0_85 == 0)
    v0_19, v2_11 = (*data_14e5808)(&data_14e5808, "ay_voyage")
    uint32_t x10_207 = *UI2StateDeclI_counter
    uint64_t x11_86 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e5808
    *UI2StateDeclI_counter = x10_207 + 1
    data_14e5810 = x11_86
else
    v0_19, v2_11 = (*data_14e5808)(&data_14e5808, *(x0_85 + 0x10))
v0_19.q = 0x40000102a
data_11273d8
data_14e5820 = 0x40000102a
__builtin_memset(&data_14e5ea0, 0, 0x40)
data_11273e8
data_11273f8
v0_19 = data_11273b8
data_14e5e80 = data_11273a8
data_14e5e40 = 1
data_14e5ef0 = 0
data_14e5828 = 0x1000800000084
data_14e5830 = Voyage
data_14e5ee0 = v1_1
data_14e5e90 = v0_19
data_14e5ef8 = 0x10000
data_14e5ef4 = 0
data_14e5f00 = 0xffffffff
data_14e5f38 = "sunken_treasure"
data_14e5f40 = 0x1d
data_14e5f48 = TEXTURE_CARD_GEN_ALLIES_SUNKEN_TREASURE
data_14e5f70 = _vtable_for_UI2StateDecl + 0x10
data_14e5f50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SUNKEN_TREASURE
void* x0_86 = UI2StateDeclTryLookup("ay_sunken_treasure")

if (x0_86 == 0)
    (*data_14e5f70)(&data_14e5f70, "ay_sunken_treasure")
    uint32_t x10_210 = *UI2StateDeclI_counter
    uint64_t x11_87 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e5f70
    *UI2StateDeclI_counter = x10_210 + 1
    data_14e5f78 = x11_87
else
    (*data_14e5f70)(&data_14e5f70, *(x0_86 + 0x10))

data_14e5f88 = _vtable_for_UI2StateDecl + 0x10
void* x0_87 = UI2StateDeclTryLookup("ay_sunken_treasure")

if (x0_87 == 0)
    (*data_14e5f88)(&data_14e5f88, "ay_sunken_treasure")
    uint32_t x10_212 = *UI2StateDeclI_counter
    uint64_t x11_88 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e5f88
    *UI2StateDeclI_counter = x10_212 + 1
    data_14e5f90 = x11_88
else
    (*data_14e5f88)(&data_14e5f88, *(x0_87 + 0x10))

data_14e5fa8 = 0x1000800000002
data_14e5fb0 = SunkenTreasure
data_14e6660 = v1_1
data_14e6670 = 0
data_14e5fa0 = 0x50000102b
data_14e6678 = 0x10012
data_14e6674 = 0
data_14e6680 = 0xffffffff
data_14e66b8 = "distant_shore"
data_14e66c0 = 0x1d
data_14e66c8 = TEXTURE_CARD_GEN_ALLIES_DISTANT_SHORE
data_14e66f0 = _vtable_for_UI2StateDecl + 0x10
data_14e66d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_DISTANT_SHORE
void* x0_88 = UI2StateDeclTryLookup("ay_distant_shore")

if (x0_88 == 0)
    (*data_14e66f0)(&data_14e66f0, "ay_distant_shore")
    uint32_t x10_215 = *UI2StateDeclI_counter
    uint64_t x11_89 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e66f0
    *UI2StateDeclI_counter = x10_215 + 1
    data_14e66f8 = x11_89
else
    (*data_14e66f0)(&data_14e66f0, *(x0_88 + 0x10))

data_14e6708 = _vtable_for_UI2StateDecl + 0x10
void* x0_89 = UI2StateDeclTryLookup("ay_distant_shore")

if (x0_89 == 0)
    (*data_14e6708)(&data_14e6708, "ay_distant_shore")
    uint32_t x10_217 = *UI2StateDeclI_counter
    uint64_t x11_90 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e6708
    *UI2StateDeclI_counter = x10_217 + 1
    data_14e6710 = x11_90
else
    (*data_14e6708)(&data_14e6708, *(x0_89 + 0x10))

data_14e6728 = 0x100080000000c
data_14e6730 = DistantShore
data_14e6738 = DistantShore_VP
__builtin_memcpy(&data_14e6de0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14e6720 = 0x60000102c
data_14e6e38 = "townsfolk"
data_14e6e40 = 0x1d
data_14e6e48 = TEXTURE_CARD_GEN_ALLIES_TOWNSFOLK
data_14e6e70 = _vtable_for_UI2StateDecl + 0x10
void* x0_90 = UI2StateDeclTryLookup("ay_townsfolk")

if (x0_90 == 0)
    (*data_14e6e70)(&data_14e6e70, "ay_townsfolk")
    uint32_t x10_219 = *UI2StateDeclI_counter
    uint64_t x11_91 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e6e70
    *UI2StateDeclI_counter = x10_219 + 1
    data_14e6e78 = x11_91
else
    (*data_14e6e70)(&data_14e6e70, *(x0_90 + 0x10))

data_14e6e88 = _vtable_for_UI2StateDecl + 0x10
void* x0_91 = UI2StateDeclTryLookup("ay_townsfolk")

if (x0_91 == 0)
    (*data_14e6e88)(&data_14e6e88, "ay_townsfolk")
    uint32_t x10_221 = *UI2StateDeclI_counter
    uint64_t x11_92 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e6e88
    *UI2StateDeclI_counter = x10_221 + 1
    data_14e6e90 = x11_92
else
    (*data_14e6e88)(&data_14e6e88, *(x0_91 + 0x10))

__builtin_memset(&data_14e6ec0, 0, 0xc0)
data_14e6ea8 = 0x1000000004
data_14e6ec0 = 0xa
data_14e7570 = 0
data_14e6ed0:8 = QuadPile<4142, 4143, 4144, 4145>
data_14e7560 = v1_1
data_14e6ea0 = 0x20000102d
data_14e7578 = 0x1000b
data_14e7574 = 0
data_14e7580 = 0xffffffff
data_14e75b8 = "town_crier"
data_14e75c0 = 0x1d
data_14e75c8 = TEXTURE_CARD_GEN_ALLIES_TOWN_CRIER
data_14e75f0 = _vtable_for_UI2StateDecl + 0x10
data_14e75d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_TOWN_CRIER
void* x0_92 = UI2StateDeclTryLookup("ay_town_crier")

if (x0_92 == 0)
    (*data_14e75f0)(&data_14e75f0, "ay_town_crier")
    uint32_t x10_224 = *UI2StateDeclI_counter
    uint64_t x11_93 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e75f0
    *UI2StateDeclI_counter = x10_224 + 1
    data_14e75f8 = x11_93
else
    (*data_14e75f0)(&data_14e75f0, *(x0_92 + 0x10))

data_14e7608 = _vtable_for_UI2StateDecl + 0x10
void* x0_93 = UI2StateDeclTryLookup("ay_town_crier")

if (x0_93 == 0)
    (*data_14e7608)(&data_14e7608, "ay_town_crier")
    uint32_t x10_226 = *UI2StateDeclI_counter
    uint64_t x11_94 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e7608
    *UI2StateDeclI_counter = x10_226 + 1
    data_14e7610 = x11_94
else
    (*data_14e7608)(&data_14e7608, *(x0_93 + 0x10))

data_14e7628 = 0x1001000000004
data_14e7630 = TownCrier
data_14e7ce0 = v1_1
data_14e7cf0 = 0
data_14e7620 = 0x20000102e
data_14e7cf8 = 0x1a
data_14e7cf4 = 0
data_14e7d00 = 0xffffffff
data_14e7d38 = "blacksmith"
data_14e7d40 = 0x1d
data_14e7d48 = TEXTURE_CARD_GEN_ALLIES_BLACKSMITH
data_14e7d70 = _vtable_for_UI2StateDecl + 0x10
data_14e7d50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_BLACKSMITH
void* x0_94 = UI2StateDeclTryLookup("ay_blacksmith")

if (x0_94 == 0)
    (*data_14e7d70)(&data_14e7d70, "ay_blacksmith")
    uint32_t x10_229 = *UI2StateDeclI_counter
    uint64_t x11_95 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e7d70
    *UI2StateDeclI_counter = x10_229 + 1
    data_14e7d78 = x11_95
else
    (*data_14e7d70)(&data_14e7d70, *(x0_94 + 0x10))

data_14e7d88 = _vtable_for_UI2StateDecl + 0x10
void* x0_95 = UI2StateDeclTryLookup("ay_blacksmith")

if (x0_95 == 0)
    (*data_14e7d88)(&data_14e7d88, "ay_blacksmith")
    uint32_t x10_231 = *UI2StateDeclI_counter
    uint64_t x11_96 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e7d88
    *UI2StateDeclI_counter = x10_231 + 1
    data_14e7d90 = x11_96
else
    (*data_14e7d88)(&data_14e7d88, *(x0_95 + 0x10))

data_14e7da8 = 0x1001000000004
data_14e7db0 = Blacksmith
data_14e8460 = v1_1
data_14e8470 = 0
data_14e7da0 = 0x30000102f
data_14e8478 = 0xa
data_14e8474 = 0
data_14e8480 = 0xffffffff
data_14e84b8 = "miller"
data_14e84c0 = 0x1d
data_14e84c8 = TEXTURE_CARD_GEN_ALLIES_MILLER
data_14e84f0 = _vtable_for_UI2StateDecl + 0x10
data_14e84d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_MILLER
void* x0_96 = UI2StateDeclTryLookup("ay_Miller")

if (x0_96 == 0)
    (*data_14e84f0)(&data_14e84f0, "ay_Miller")
    uint32_t x10_234 = *UI2StateDeclI_counter
    uint64_t x11_97 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e84f0
    *UI2StateDeclI_counter = x10_234 + 1
    data_14e84f8 = x11_97
else
    (*data_14e84f0)(&data_14e84f0, *(x0_96 + 0x10))

data_14e8508 = _vtable_for_UI2StateDecl + 0x10
void* x0_97 = UI2StateDeclTryLookup("ay_Miller")

if (x0_97 == 0)
    (*data_14e8508)(&data_14e8508, "ay_Miller")
    uint32_t x10_236 = *UI2StateDeclI_counter
    uint64_t x11_98 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e8508
    *UI2StateDeclI_counter = x10_236 + 1
    data_14e8510 = x11_98
else
    (*data_14e8508)(&data_14e8508, *(x0_97 + 0x10))

data_14e8528 = 0x1001000000004
data_14e8530 = Miller
data_14e8be0 = v1_1
data_14e8bf0 = 0
data_14e8520 = 0x400001030
data_14e8bf8 = 0x40001
data_14e8bf4 = 0
data_14e8c00 = 0xffffffff
data_14e8c38 = "elder"
data_14e8c40 = 0x1d
data_14e8c48 = TEXTURE_CARD_GEN_ALLIES_ELDER
data_14e8c70 = _vtable_for_UI2StateDecl + 0x10
data_14e8c50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_ELDER
void* x0_98 = UI2StateDeclTryLookup("ay_elder")

if (x0_98 == 0)
    (*data_14e8c70)(&data_14e8c70, "ay_elder")
    uint32_t x10_239 = *UI2StateDeclI_counter
    uint64_t x11_99 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e8c70
    *UI2StateDeclI_counter = x10_239 + 1
    data_14e8c78 = x11_99
else
    (*data_14e8c70)(&data_14e8c70, *(x0_98 + 0x10))

data_14e8c88 = _vtable_for_UI2StateDecl + 0x10
void* x0_99 = UI2StateDeclTryLookup("ay_elder")

if (x0_99 == 0)
    (*data_14e8c88)(&data_14e8c88, "ay_elder")
    uint32_t x10_241 = *UI2StateDeclI_counter
    uint64_t x11_100 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e8c88
    *UI2StateDeclI_counter = x10_241 + 1
    data_14e8c90 = x11_100
else
    (*data_14e8c88)(&data_14e8c88, *(x0_99 + 0x10))

data_14e8ca8 = 0x1001000000004
data_14e8cb0 = Elder
__builtin_memcpy(&data_14e9360, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14e8ca0 = 0x500001031
data_14e93b8 = "wizards"
data_14e93c0 = 0x14
data_14e93c8 = TEXTURE_CARD_GEN_ALLIES_WIZARDS
data_14e93f0 = _vtable_for_UI2StateDecl + 0x10
void* x0_100 = UI2StateDeclTryLookup("ay_wizards")

if (x0_100 == 0)
    (*data_14e93f0)(&data_14e93f0, "ay_wizards")
    uint32_t x10_243 = *UI2StateDeclI_counter
    uint64_t x11_101 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e93f0
    *UI2StateDeclI_counter = x10_243 + 1
    data_14e93f8 = x11_101
else
    (*data_14e93f0)(&data_14e93f0, *(x0_100 + 0x10))

data_14e9408 = _vtable_for_UI2StateDecl + 0x10
void* x0_101 = UI2StateDeclTryLookup("ay_wizards")

if (x0_101 == 0)
    (*data_14e9408)(&data_14e9408, "ay_wizards")
    uint32_t x10_245 = *UI2StateDeclI_counter
    uint64_t x11_102 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e9408
    *UI2StateDeclI_counter = x10_245 + 1
    data_14e9410 = x11_102
else
    (*data_14e9408)(&data_14e9408, *(x0_101 + 0x10))

__builtin_memset(&data_14e9440, 0, 0xc0)
data_14e9428 = 0x2080000004
data_14e9440 = 0xa
data_14e9450:8 = QuadPile<4147, 4148, 4149, 4150>
data_14e9ae0 = v1_1
data_14e9af0 = 0
data_14e9420 = 0x300001032
data_14e9af8 = 0x2000
data_14e9af4 = 0
data_14e9b00 = 0xffffffff
data_14e9b38 = "student"
data_14e9b40 = 0x14
data_14e9b48 = TEXTURE_CARD_GEN_ALLIES_STUDENT
data_14e9b70 = _vtable_for_UI2StateDecl + 0x10
data_14e9b50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_STUDENT
void* x0_102 = UI2StateDeclTryLookup("ay_student")

if (x0_102 == 0)
    (*data_14e9b70)(&data_14e9b70, "ay_student")
    uint32_t x10_248 = *UI2StateDeclI_counter
    uint64_t x11_103 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e9b70
    *UI2StateDeclI_counter = x10_248 + 1
    data_14e9b78 = x11_103
else
    (*data_14e9b70)(&data_14e9b70, *(x0_102 + 0x10))

data_14e9b88 = _vtable_for_UI2StateDecl + 0x10
void* x0_103 = UI2StateDeclTryLookup("ay_student")
int128_t v0_20
int128_t v1_38

if (x0_103 == 0)
    v0_20, v1_38 = (*data_14e9b88)(&data_14e9b88, "ay_student")
    uint32_t x10_250 = *UI2StateDeclI_counter
    uint64_t x11_104 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14e9b88
    *UI2StateDeclI_counter = x10_250 + 1
    data_14e9b90 = x11_104
else
    v0_20, v1_38 = (*data_14e9b88)(&data_14e9b88, *(x0_103 + 0x10))
v0_20.q = 0x300001033
data_14e9ba0 = 0x300001033
data_14e9ba8 = 0x1002080000004
data_14e9bb0 = Student
data_14ea260 = v1_1
data_14ea270 = 0
int128_t var_b0
data_14ea278 = var_b0
v0_20 = var_c0
data_14ea2b8 = "conjurer"
data_14ea288 = v0_20
data_14ea274 = 0
int128_t var_d0
data_14ea298 = var_d0
data_14ea2a8 = var_e0
data_14ea2c0 = 0x14
data_14ea2c8 = TEXTURE_CARD_GEN_ALLIES_CONJURER
data_14ea2f0 = _vtable_for_UI2StateDecl + 0x10
data_14ea2d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_CONJURER
void* x0_104 = UI2StateDeclTryLookup("ay_conjurer")

if (x0_104 == 0)
    (*data_14ea2f0)(&data_14ea2f0, "ay_conjurer")
    uint32_t x10_253 = *UI2StateDeclI_counter
    uint64_t x11_105 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ea2f0
    *UI2StateDeclI_counter = x10_253 + 1
    data_14ea2f8 = x11_105
else
    (*data_14ea2f0)(&data_14ea2f0, *(x0_104 + 0x10))

data_14ea308 = _vtable_for_UI2StateDecl + 0x10
void* x0_105 = UI2StateDeclTryLookup("ay_conjurer")

if (x0_105 == 0)
    (*data_14ea308)(&data_14ea308, "ay_conjurer")
    uint32_t x10_255 = *UI2StateDeclI_counter
    uint64_t x11_106 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ea308
    *UI2StateDeclI_counter = x10_255 + 1
    data_14ea310 = x11_106
else
    (*data_14ea308)(&data_14ea308, *(x0_105 + 0x10))

data_14ea940 = 1
data_14ea328 = 0x1002000000084
data_14ea330 = Conjurer
data_14ea9e0 = v1_1
data_14ea9f0 = 0
data_14ea320 = 0x400001034
data_14ea9f8 = 0x2000000a
data_14ea9f4 = 0
data_14eaa00 = 0xffffffff
data_14eaa38 = "sorcerer"
data_14eaa40 = 0x14
data_14eaa48 = TEXTURE_CARD_GEN_ALLIES_SORCERER
data_14eaa70 = _vtable_for_UI2StateDecl + 0x10
data_14eaa50 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_SORCERER
void* x0_106 = UI2StateDeclTryLookup("ay_sorcerer")

if (x0_106 == 0)
    (*data_14eaa70)(&data_14eaa70, "ay_sorcerer")
    uint32_t x10_258 = *UI2StateDeclI_counter
    uint64_t x11_107 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eaa70
    *UI2StateDeclI_counter = x10_258 + 1
    data_14eaa78 = x11_107
else
    (*data_14eaa70)(&data_14eaa70, *(x0_106 + 0x10))

data_14eaa88 = _vtable_for_UI2StateDecl + 0x10
void* x0_107 = UI2StateDeclTryLookup("ay_sorcerer")
int128_t v0_21
int128_t v1_40
int128_t v2_12
int128_t v3

if (x0_107 == 0)
    v0_21, v1_40, v2_12, v3 = (*data_14eaa88)(&data_14eaa88, "ay_sorcerer")
    uint32_t x10_260 = *UI2StateDeclI_counter
    uint64_t x11_108 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eaa88
    *UI2StateDeclI_counter = x10_260 + 1
    data_14eaa90 = x11_108
else
    v0_21, v1_40, v2_12, v3 = (*data_14eaa88)(&data_14eaa88, *(x0_107 + 0x10))
v0_21.q = 0x500001035
data_1127428
data_1127438
data_14eaaa0 = 0x500001035
__builtin_memset(&data_14eb120, 0, 0x20)
data_1127448
data_1127458
data_14eaaa8 = 0x1002000000024
data_14eaab0 = Sorcerer
__builtin_memset(&data_14eb140, 0, 0x20)
v2_12 = data_1127418
data_14eb100 = data_1127408
v1_40 = data_7adc60
v0_21 = data_7adc70
data_14eb160 = v1_1
data_14eb170 = 0
data_14eb110 = v2_12
data_14eb1a8 = v0_21
data_14eb1b8 = "lich"
data_14eb198 = v1_40
data_14eb174 = 0
__builtin_memcpy(&data_14eb178, 
    "\x14\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_14eb1c0 = 0x14
data_14eb1c8 = TEXTURE_CARD_GEN_ALLIES_LICH
data_14eb1f0 = _vtable_for_UI2StateDecl + 0x10
data_14eb1d0 = SOUND_SOUND_CARDS_ALLIES_FX_LANDPLAY_LICH
void* x0_108 = UI2StateDeclTryLookup("ay_lich")

if (x0_108 == 0)
    (*data_14eb1f0)(&data_14eb1f0, "ay_lich")
    uint32_t x10_263 = *UI2StateDeclI_counter
    uint64_t x11_109 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eb1f0
    *UI2StateDeclI_counter = x10_263 + 1
    data_14eb1f8 = x11_109
else
    (*data_14eb1f0)(&data_14eb1f0, *(x0_108 + 0x10))

data_14eb208 = _vtable_for_UI2StateDecl + 0x10
void* x0_109 = UI2StateDeclTryLookup("ay_lich")

if (x0_109 == 0)
    (*data_14eb208)(&data_14eb208, "ay_lich")
    uint32_t x10_265 = *UI2StateDeclI_counter
    uint64_t x11_110 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eb208
    *UI2StateDeclI_counter = x10_265 + 1
    data_14eb210 = x11_110
else
    (*data_14eb208)(&data_14eb208, *(x0_109 + 0x10))

__builtin_memset(&data_14eb248, 0, 0xb0)
data_14eb240 = 0x600000006
data_14eb228 = 0x1002000000004
data_14eb230 = Lich
data_14eb248:4.d = 2
data_14eb258 = Lich_OnTrash
data_14eb840 = 1
data_14eb2f4:4 = 0
data_14eb2e8 = 0
data_14eb2f4 = 0x100000000
__builtin_memcpy(&data_14eb8e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14eb220 = 0x600001036
data_14eb938 = "architects_guild"
data_14eb940 = 0x2a
data_14eb948 = TEXTURE_CARD_GEN_ALLIES_ARCHITECTS_GUILD
data_14eb970 = _vtable_for_UI2StateDecl + 0x10
data_14eb950 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_ARCHITECTS_GUILD
void* x0_110 = UI2StateDeclTryLookup("ay_architects_guild")

if (x0_110 == 0)
    (*data_14eb970)(&data_14eb970, "ay_architects_guild")
    uint32_t x10_268 = *UI2StateDeclI_counter
    uint64_t x11_111 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eb970
    *UI2StateDeclI_counter = x10_268 + 1
    data_14eb978 = x11_111
else
    (*data_14eb970)(&data_14eb970, *(x0_110 + 0x10))

data_14eb988 = _vtable_for_UI2StateDecl + 0x10
void* x0_111 = UI2StateDeclTryLookup("ay_architects_guild")

if (x0_111 == 0)
    (*data_14eb988)(&data_14eb988, "ay_architects_guild")
    uint32_t x10_270 = *UI2StateDeclI_counter
    uint64_t x11_112 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eb988
    *UI2StateDeclI_counter = x10_270 + 1
    data_14eb990 = x11_112
else
    (*data_14eb988)(&data_14eb988, *(x0_111 + 0x10))

int128_t v0_22
v0_22.q = 0
v0_22:8.q = 0
data_14eb9a8 = 0x4000000000
__builtin_memset(&data_14eb9c8, 0, 0xb8)
v0_22.d = 1
v0_22:4.d = 1
data_14eba74 = 0x100000001
data_14eb9d8 = ArchitectsGuild_OnGain
data_14eba68 = ArchitectsGuild_Test
__builtin_memcpy(&data_14ec060, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14ebfc0 = 1
data_14eb9c8:4.d = 0
data_14eb9a0 = 0x200001037
data_14eb9c0 = 0x200000006
data_14ec0b8 = "band_of_nomads"
data_14ec0c0 = 0x11
data_14ec0c8 = TEXTURE_CARD_GEN_ALLIES_BAND_OF_NOMADS
data_14ec0f0 = _vtable_for_UI2StateDecl + 0x10
data_14ec0d0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_BAND_OF_NOMADS
void* x0_112 = UI2StateDeclTryLookup("ay_band_of_nomads")

if (x0_112 == 0)
    (*data_14ec0f0)(&data_14ec0f0, "ay_band_of_nomads")
    uint32_t x10_273 = *UI2StateDeclI_counter
    uint64_t x11_113 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ec0f0
    *UI2StateDeclI_counter = x10_273 + 1
    data_14ec0f8 = x11_113
else
    (*data_14ec0f0)(&data_14ec0f0, *(x0_112 + 0x10))

data_14ec108 = _vtable_for_UI2StateDecl + 0x10
void* x0_113 = UI2StateDeclTryLookup("ay_band_of_nomads")

if (x0_113 == 0)
    (*data_14ec108)(&data_14ec108, "ay_band_of_nomads")
    uint32_t x10_275 = *UI2StateDeclI_counter
    uint64_t x11_114 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ec108
    *UI2StateDeclI_counter = x10_275 + 1
    data_14ec110 = x11_114
else
    (*data_14ec108)(&data_14ec108, *(x0_113 + 0x10))

int128_t v0_23
v0_23.q = 0
v0_23:8.q = 0
__builtin_memset(&data_14ec148, 0, 0xb8)
v0_23.d = 1
v0_23:4.d = 1
data_14ec1f4 = 0x100000001
v0_23.q = 0x100001038
data_14ec128 = 0x4000000000
data_14ec120 = 0x100001038
data_14ec158 = BandOfNomads_OnGain
data_14ec1e8 = BandOfNomads_Test
data_14ec740 = 1
data_14ec140 = 0x200000006
data_14ec148:4.d = 0
__builtin_memcpy(&data_14ec7e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14ec838 = "cave_dwellers"
data_14ec840 = 6
data_14ec848 = TEXTURE_CARD_GEN_ALLIES_CAVE_DWELLERS
data_14ec870 = _vtable_for_UI2StateDecl + 0x10
data_14ec850 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_CAVE_DWELLERS
void* x0_114 = UI2StateDeclTryLookup("ay_cave_dwellers")

if (x0_114 == 0)
    (*data_14ec870)(&data_14ec870, "ay_cave_dwellers")
    uint32_t x10_278 = *UI2StateDeclI_counter
    uint64_t x11_115 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ec870
    *UI2StateDeclI_counter = x10_278 + 1
    data_14ec878 = x11_115
else
    (*data_14ec870)(&data_14ec870, *(x0_114 + 0x10))

data_14ec888 = _vtable_for_UI2StateDecl + 0x10
void* x0_115 = UI2StateDeclTryLookup("ay_cave_dwellers")

if (x0_115 == 0)
    (*data_14ec888)(&data_14ec888, "ay_cave_dwellers")
    uint32_t x10_280 = *UI2StateDeclI_counter
    uint64_t x11_116 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ec888
    *UI2StateDeclI_counter = x10_280 + 1
    data_14ec890 = x11_116
else
    (*data_14ec888)(&data_14ec888, *(x0_115 + 0x10))

__builtin_memset(&data_14ec8c8, 0, 0xb0)
data_14ec8a8 = 0x4000000000
data_14ec8c8:4.d = 7
data_14ecf70 = 0x18
data_14ec8d8 = CaveDwellers_StartOfTurn
data_14ecec0 = 1
data_14ec974:4 = 0
data_14ec8c0 = 0x200000006
data_14ec968 = 0
data_14ecf60 = v1_1
data_14ec8a0 = 0x100001039
data_14ec974 = 0x100000101
data_14ecf78 = 0x100000000
data_14ecfb8 = "city_state"
data_14ecfc0 = 0x28
data_14ecfc8 = TEXTURE_CARD_GEN_ALLIES_CITY_STATE
data_14ecff0 = _vtable_for_UI2StateDecl + 0x10
data_14ecfd0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_CITY_STATE
void* x0_116 = UI2StateDeclTryLookup("ay_city_state")

if (x0_116 == 0)
    (*data_14ecff0)(&data_14ecff0, "ay_city_state")
    uint32_t x10_283 = *UI2StateDeclI_counter
    uint64_t x11_117 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ecff0
    *UI2StateDeclI_counter = x10_283 + 1
    data_14ecff8 = x11_117
else
    (*data_14ecff0)(&data_14ecff0, *(x0_116 + 0x10))

data_14ed008 = _vtable_for_UI2StateDecl + 0x10
void* x0_117 = UI2StateDeclTryLookup("ay_city_state")

if (x0_117 == 0)
    (*data_14ed008)(&data_14ed008, "ay_city_state")
    uint32_t x10_285 = *UI2StateDeclI_counter
    uint64_t x11_118 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ed008
    *UI2StateDeclI_counter = x10_285 + 1
    data_14ed010 = x11_118
else
    (*data_14ed008)(&data_14ed008, *(x0_117 + 0x10))

__builtin_memset(&data_14ed048, 0, 0xb8)
data_14ed0f4 = 0x100000001
data_14ed028 = 0x4000000000
data_14ed058 = CityState_OnGain
data_14ed0e8 = CityState_Test
data_14ed640 = 1
data_14ed040 = 0x200000006
data_14ed048:4.d = 0
__builtin_memcpy(&data_14ed6e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14ed020 = 0x20000103a
data_14ed738 = "coastal_haven"
data_14ed740 = 0x28
data_14ed748 = TEXTURE_CARD_GEN_ALLIES_COASTAL_HAVEN
data_14ed770 = _vtable_for_UI2StateDecl + 0x10
data_14ed750 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_COASTAL_HAVEN
void* x0_118 = UI2StateDeclTryLookup("ay_coastal_haven")

if (x0_118 == 0)
    (*data_14ed770)(&data_14ed770, "ay_coastal_haven")
    uint32_t x10_288 = *UI2StateDeclI_counter
    uint64_t x11_119 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ed770
    *UI2StateDeclI_counter = x10_288 + 1
    data_14ed778 = x11_119
else
    (*data_14ed770)(&data_14ed770, *(x0_118 + 0x10))

data_14ed788 = _vtable_for_UI2StateDecl + 0x10
void* x0_119 = UI2StateDeclTryLookup("ay_coastal_haven")

if (x0_119 == 0)
    (*data_14ed788)(&data_14ed788, "ay_coastal_haven")
    uint32_t x10_290 = *UI2StateDeclI_counter
    uint64_t x11_120 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ed788
    *UI2StateDeclI_counter = x10_290 + 1
    data_14ed790 = x11_120
else
    (*data_14ed788)(&data_14ed788, *(x0_119 + 0x10))

__builtin_memset(&data_14ed7c8, 0, 0xb8)
data_14ed874 = 0x100000001
data_14ed7a8 = 0x4000000000
data_14ed7c8:4.d = 8
data_14ed7a0 = 0x10000103b
data_14ed7d8 = CoastalHaven_OnDiscardHand
data_14ed868 = CoastalHaven_OnDiscardHand_Test
data_14eddc0 = 1
data_14ed7c0 = 0x200000006
__builtin_memcpy(&data_14ede60, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14edeb8 = "circle_of_witches"
data_14edec0 = 0x11
data_14edec8 = TEXTURE_CARD_GEN_ALLIES_CIRCLE_OF_WITCHES
data_14edef0 = _vtable_for_UI2StateDecl + 0x10
data_14eded0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_CIRCLE_OF_WITCHES
void* x0_120 = UI2StateDeclTryLookup("ay_circle_of_witches")

if (x0_120 == 0)
    (*data_14edef0)(&data_14edef0, "ay_circle_of_witches")
    uint32_t x10_293 = *UI2StateDeclI_counter
    uint64_t x11_121 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14edef0
    *UI2StateDeclI_counter = x10_293 + 1
    data_14edef8 = x11_121
else
    (*data_14edef0)(&data_14edef0, *(x0_120 + 0x10))

data_14edf08 = _vtable_for_UI2StateDecl + 0x10
void* x0_121 = UI2StateDeclTryLookup("ay_circle_of_witches")
int128_t v0_24
int128_t v2_13
int128_t v4_1

if (x0_121 == 0)
    v0_24, v2_13, v4_1 = (*data_14edf08)(&data_14edf08, "ay_circle_of_witches")
    uint32_t x10_295 = *UI2StateDeclI_counter
    uint64_t x11_122 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14edf08
    *UI2StateDeclI_counter = x10_295 + 1
    data_14edf10 = x11_122
else
    v0_24, v2_13, v4_1 = (*data_14edf08)(&data_14edf08, *(x0_121 + 0x10))
v0_24.q = 0
v0_24:8.q = 0
data_14edf28 = 0x4000000000
data_14edf48 = zx.o(0)
data_14edf48:4.d = 9
data_14edfe8 = zx.o(0)
v2_13.d = 1
v2_13:4.d = 1
data_14edf58 = zx.o(0)
data_14edfe8.q = CircleOfWitches_Test
data_14edff8 = 0
__builtin_memset(&data_14edf68, 0, 0x80)
data_14edfe8:0xc = 0x100000001
v0_24 = data_1127468
v2_13 = data_1127478
data_14edf20 = 0x30000103c
data_14ee590 = v2_13
data_14ee580 = v0_24
data_14edf58.q = CircleOfWitches_OnPlay
data_14ee540 = 1
data_14edf40 = 0x200000006
__builtin_memcpy(&data_14ee5e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
__builtin_memset(&data_14ee5a0, 0, 0x40)
data_14ee638 = "crafters_guild"
data_14ee640 = 0x2a
data_14ee648 = TEXTURE_CARD_GEN_ALLIES_CRAFTERS_GUILD
data_14ee670 = _vtable_for_UI2StateDecl + 0x10
data_14ee650 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_CRAFTERS_GUILD
void* x0_122 = UI2StateDeclTryLookup("ay_crafters_guild")

if (x0_122 == 0)
    (*data_14ee670)(&data_14ee670, "ay_crafters_guild")
    uint32_t x10_298 = *UI2StateDeclI_counter
    uint64_t x11_123 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ee670
    *UI2StateDeclI_counter = x10_298 + 1
    data_14ee678 = x11_123
else
    (*data_14ee670)(&data_14ee670, *(x0_122 + 0x10))

data_14ee688 = _vtable_for_UI2StateDecl + 0x10
void* x0_123 = UI2StateDeclTryLookup("ay_crafters_guild")

if (x0_123 == 0)
    (*data_14ee688)(&data_14ee688, "ay_crafters_guild")
    uint32_t x10_300 = *UI2StateDeclI_counter
    uint64_t x11_124 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ee688
    *UI2StateDeclI_counter = x10_300 + 1
    data_14ee690 = x11_124
else
    (*data_14ee688)(&data_14ee688, *(x0_123 + 0x10))

__builtin_memset(&data_14ee6c8, 0, 0xb8)
data_14ee774 = 0x100000001
data_14ee6a8 = 0x4000000000
data_14eed60 = v1_1
data_14ee6c8:4.d = 7
data_14ee6d8 = CraftersGuild_StartOfTurn
data_14eecc0 = 1
data_14ee6c0 = 0x200000006
data_14ee768 = 0
data_14eed70 = 3
data_14ee6a0 = 0x20000103d
data_14eed78 = 0x100000000
data_14eedb8 = "desert_guides"
data_14eedc0 = 0x2a
data_14eedc8 = TEXTURE_CARD_GEN_ALLIES_DESERT_GUIDES
data_14eedf0 = _vtable_for_UI2StateDecl + 0x10
data_14eedd0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_DESERT_GUIDES
void* x0_124 = UI2StateDeclTryLookup("ay_desert_guides")

if (x0_124 == 0)
    (*data_14eedf0)(&data_14eedf0, "ay_desert_guides")
    uint32_t x10_303 = *UI2StateDeclI_counter
    uint64_t x11_125 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eedf0
    *UI2StateDeclI_counter = x10_303 + 1
    data_14eedf8 = x11_125
else
    (*data_14eedf0)(&data_14eedf0, *(x0_124 + 0x10))

data_14eee08 = _vtable_for_UI2StateDecl + 0x10
void* x0_125 = UI2StateDeclTryLookup("ay_desert_guides")

if (x0_125 == 0)
    (*data_14eee08)(&data_14eee08, "ay_desert_guides")
    uint32_t x10_305 = *UI2StateDeclI_counter
    uint64_t x11_126 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14eee08
    *UI2StateDeclI_counter = x10_305 + 1
    data_14eee10 = x11_126
else
    (*data_14eee08)(&data_14eee08, *(x0_125 + 0x10))

__builtin_memset(&data_14eee48, 0, 0xb0)
data_14eee28 = 0x4000000000
data_14eee48:4.d = 7
data_14eee58 = DesertGuides_StartOfTurn
data_14ef440 = 1
data_14eeef4:4 = 0
data_14eee40 = 0x200000006
data_14eeee8 = 0
data_14eeef4 = 0x100000101
__builtin_memcpy(&data_14ef4e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14eee20 = 0x10000103e
data_14ef538 = "family_of_inventors"
data_14ef540 = 0x2a
data_14ef548 = TEXTURE_CARD_GEN_ALLIES_FAMILY_OF_INVENTORS
data_14ef570 = _vtable_for_UI2StateDecl + 0x10
data_14ef550 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_FAMILY_OF_INVENTORS
void* x0_126 = UI2StateDeclTryLookup("ay_family_of_inventors")

if (x0_126 == 0)
    (*data_14ef570)(&data_14ef570, "ay_family_of_inventors")
    uint32_t x10_308 = *UI2StateDeclI_counter
    uint64_t x11_127 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ef570
    *UI2StateDeclI_counter = x10_308 + 1
    data_14ef578 = x11_127
else
    (*data_14ef570)(&data_14ef570, *(x0_126 + 0x10))

data_14ef588 = _vtable_for_UI2StateDecl + 0x10
void* x0_127 = UI2StateDeclTryLookup("ay_family_of_inventors")

if (x0_127 == 0)
    (*data_14ef588)(&data_14ef588, "ay_family_of_inventors")
    uint32_t x10_310 = *UI2StateDeclI_counter
    uint64_t x11_128 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ef588
    *UI2StateDeclI_counter = x10_310 + 1
    data_14ef590 = x11_128
else
    (*data_14ef588)(&data_14ef588, *(x0_127 + 0x10))

__builtin_memset(&data_14ef5c8, 0, 0xb8)
data_14ef674 = 0x100000001
data_14ef5a8 = 0x4000000000
data_14ef5c8:4.d = 3
data_14ef5d8 = FamilyOfInventors_StartOfBuy
data_14efbc0 = 1
data_14ef5c0 = 0x200000006
data_14ef668 = 0
__builtin_memcpy(&data_14efc60, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14ef5a0 = 0x10000103f
data_14efcb8 = "fellowship_of_scribes"
data_14efcc0 = 0xe
data_14efcc8 = TEXTURE_CARD_GEN_ALLIES_FELLOWSHIP_OF_SCRIBES
data_14efcf0 = _vtable_for_UI2StateDecl + 0x10
data_14efcd0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_FELLOWSHIP_OF_SCRIBES
void* x0_128 = UI2StateDeclTryLookup("ay_fellowship_of_scribes")

if (x0_128 == 0)
    (*data_14efcf0)(&data_14efcf0, "ay_fellowship_of_scribes")
    uint32_t x10_313 = *UI2StateDeclI_counter
    uint64_t x11_129 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14efcf0
    *UI2StateDeclI_counter = x10_313 + 1
    data_14efcf8 = x11_129
else
    (*data_14efcf0)(&data_14efcf0, *(x0_128 + 0x10))

data_14efd08 = _vtable_for_UI2StateDecl + 0x10
void* x0_129 = UI2StateDeclTryLookup("ay_fellowship_of_scribes")

if (x0_129 == 0)
    (*data_14efd08)(&data_14efd08, "ay_fellowship_of_scribes")
    uint32_t x10_315 = *UI2StateDeclI_counter
    uint64_t x11_130 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14efd08
    *UI2StateDeclI_counter = x10_315 + 1
    data_14efd10 = x11_130
else
    (*data_14efd08)(&data_14efd08, *(x0_129 + 0x10))

__builtin_memset(&data_14efd48, 0, 0xb8)
data_14efdf4 = 0x100000001
data_14efd28 = 0x4000000000
data_14efd48:4.d = 9
data_14efd58 = FellowshipOfScribes_OnPlay
data_14efde8 = FellowshipOfScribes_Test
__builtin_memcpy(&data_14f03e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f0340 = 1
data_14efd40 = 0x200000006
data_14efd20 = 0x100001040
data_14f0438 = "forest_dwellers"
data_14f0440 = 6
data_14f0448 = TEXTURE_CARD_GEN_ALLIES_FOREST_DWELLERS
data_14f0470 = _vtable_for_UI2StateDecl + 0x10
data_14f0450 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_FOREST_DWELLERS
void* x0_130 = UI2StateDeclTryLookup("ay_forest_dwellers")

if (x0_130 == 0)
    (*data_14f0470)(&data_14f0470, "ay_forest_dwellers")
    uint32_t x10_318 = *UI2StateDeclI_counter
    uint64_t x11_131 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f0470
    *UI2StateDeclI_counter = x10_318 + 1
    data_14f0478 = x11_131
else
    (*data_14f0470)(&data_14f0470, *(x0_130 + 0x10))

data_14f0488 = _vtable_for_UI2StateDecl + 0x10
void* x0_131 = UI2StateDeclTryLookup("ay_forest_dwellers")

if (x0_131 == 0)
    (*data_14f0488)(&data_14f0488, "ay_forest_dwellers")
    uint32_t x10_320 = *UI2StateDeclI_counter
    uint64_t x11_132 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f0488
    *UI2StateDeclI_counter = x10_320 + 1
    data_14f0490 = x11_132
else
    (*data_14f0488)(&data_14f0488, *(x0_131 + 0x10))

__builtin_memset(&data_14f04c8, 0, 0xb8)
data_14f0574 = 0x100000001
data_14f04a8 = 0x4000000000
data_14f04d8 = ForestDwellers_StartOfTurn
data_14f04a0 = 0x100001041
data_14f04c8:4.d = 7
data_14f0ac0 = 1
data_14f04c0 = 0x200000006
data_14f0568 = 0
__builtin_memcpy(&data_14f0b60, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f0bb8 = "gang_of_pickpockets"
data_14f0bc0 = 0xe
data_14f0bc8 = TEXTURE_CARD_GEN_ALLIES_GANG_OF_PICKPOCKETS
data_14f0bf0 = _vtable_for_UI2StateDecl + 0x10
data_14f0bd0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_GANG_OF_PICKPOCKETS
void* x0_132 = UI2StateDeclTryLookup("ay_gang_of_pickpockets")

if (x0_132 == 0)
    (*data_14f0bf0)(&data_14f0bf0, "ay_gang_of_pickpockets")
    uint32_t x10_323 = *UI2StateDeclI_counter
    uint64_t x11_133 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f0bf0
    *UI2StateDeclI_counter = x10_323 + 1
    data_14f0bf8 = x11_133
else
    (*data_14f0bf0)(&data_14f0bf0, *(x0_132 + 0x10))

data_14f0c08 = _vtable_for_UI2StateDecl + 0x10
void* x0_133 = UI2StateDeclTryLookup("ay_gang_of_pickpockets")

if (x0_133 == 0)
    (*data_14f0c08)(&data_14f0c08, "ay_gang_of_pickpockets")
    uint32_t x10_325 = *UI2StateDeclI_counter
    uint64_t x11_134 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f0c08
    *UI2StateDeclI_counter = x10_325 + 1
    data_14f0c10 = x11_134
else
    (*data_14f0c08)(&data_14f0c08, *(x0_133 + 0x10))

__builtin_memset(&data_14f0c48, 0, 0xb0)
data_14f0c28 = 0x4000000000
data_14f0c48:4.d = 7
data_14f0c58 = GangOfPickpockets_StartOfTurn
data_14f1240 = 1
data_14f0cf4:4 = 0
data_14f0c40 = 0x200000006
data_14f0ce8 = 0
data_14f0cf4 = 0x100000000
__builtin_memcpy(&data_14f12e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f0c20 = -0xffffefbe
data_14f1338 = "island_folk"
data_14f1340 = 6
data_14f1348 = TEXTURE_CARD_GEN_ALLIES_ISLAND_FOLK
data_14f1370 = _vtable_for_UI2StateDecl + 0x10
data_14f1350 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_ISLAND_FOLK
void* x0_134 = UI2StateDeclTryLookup("ay_island_folk")

if (x0_134 == 0)
    (*data_14f1370)(&data_14f1370, "ay_island_folk")
    uint32_t x10_328 = *UI2StateDeclI_counter
    uint64_t x11_135 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f1370
    *UI2StateDeclI_counter = x10_328 + 1
    data_14f1378 = x11_135
else
    (*data_14f1370)(&data_14f1370, *(x0_134 + 0x10))

data_14f1388 = _vtable_for_UI2StateDecl + 0x10
void* x0_135 = UI2StateDeclTryLookup("ay_island_folk")
int128_t v0_25
int128_t v2_14
int128_t v5

if (x0_135 == 0)
    v0_25, v2_14, v5 = (*data_14f1388)(&data_14f1388, "ay_island_folk")
    uint32_t x10_330 = *UI2StateDeclI_counter
    uint64_t x11_136 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f1388
    *UI2StateDeclI_counter = x10_330 + 1
    data_14f1390 = x11_136
else
    v0_25, v2_14, v5 = (*data_14f1388)(&data_14f1388, *(x0_135 + 0x10))
v0_25.q = 0
v0_25:8.q = 0
data_14f13a8 = 0x4000000000
data_14f13c8 = zx.o(0)
data_14f13c8:4.d = 6
data_14f1468 = zx.o(0)
v2_14.d = 1
v2_14:4.d = 1
data_14f13d8 = zx.o(0)
data_14f1468.q = IslandFolk_Test
data_14f1478 = 0
__builtin_memset(&data_14f13e8, 0, 0x80)
data_14f1468:0xc = 0x100000001
v0_25 = data_11274c8
v2_14 = data_11274d8
data_14f13a0 = 0x500001043
data_14f1a10 = v2_14
data_14f1a70 = 9
data_14f13d8.q = IslandFolk_EndOfTurn
data_14f19c0 = 1
data_14f13c0 = 0x200000006
data_14f1a60 = v1_1
data_14f1a00 = v0_25
__builtin_memset(&data_14f1a20, 0, 0x40)
data_14f1a78 = 0x100000000
data_14f1ab8 = "league_of_bankers"
data_14f1ac0 = 0x2a
data_14f1ac8 = TEXTURE_CARD_GEN_ALLIES_LEAGUE_OF_BANKERS
data_14f1af0 = _vtable_for_UI2StateDecl + 0x10
data_14f1ad0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_LEAGUE_OF_BANKERS
void* x0_136 = UI2StateDeclTryLookup("ay_league_of_bankers")

if (x0_136 == 0)
    (*data_14f1af0)(&data_14f1af0, "ay_league_of_bankers")
    uint32_t x10_333 = *UI2StateDeclI_counter
    uint64_t x11_137 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f1af0
    *UI2StateDeclI_counter = x10_333 + 1
    data_14f1af8 = x11_137
else
    (*data_14f1af0)(&data_14f1af0, *(x0_136 + 0x10))

data_14f1b08 = _vtable_for_UI2StateDecl + 0x10
void* x0_137 = UI2StateDeclTryLookup("ay_league_of_bankers")
int128_t v0_26
int128_t v2_15
int128_t v4_2

if (x0_137 == 0)
    v0_26, v2_15, v4_2 = (*data_14f1b08)(&data_14f1b08, "ay_league_of_bankers")
    uint32_t x10_335 = *UI2StateDeclI_counter
    uint64_t x11_138 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f1b08
    *UI2StateDeclI_counter = x10_335 + 1
    data_14f1b10 = x11_138
else
    v0_26, v2_15, v4_2 = (*data_14f1b08)(&data_14f1b08, *(x0_137 + 0x10))
data_14f1b28 = 0x4000000000
v0_26.q = 0
v0_26:8.q = 0
data_14f1b58 = zx.o(0)
data_14f1b58.q = LeagueOfBankers_StartOfBuy
data_14f1b48 = zx.o(0)
__builtin_memset(&data_14f1b68, 0, 0x90)
v0_26 = data_1127528
v2_15 = data_1127538
data_14f1b20 = 0x400001044
data_14f2190 = v2_15
data_14f2180 = v0_26
data_14f1b48:4.d = 3
data_14f2140 = 1
data_14f1bf4:4 = 0
data_14f1b40 = 0x200000006
data_14f1be8 = 0
data_14f1bf4 = 0x100000000
__builtin_memcpy(&data_14f21e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
__builtin_memset(&data_14f21a0, 0, 0x40)
data_14f2238 = "league_of_shopkeepers"
data_14f2240 = 0x28
data_14f2248 = TEXTURE_CARD_GEN_ALLIES_LEAGUE_OF_SHOPKEEPERS
data_14f2270 = _vtable_for_UI2StateDecl + 0x10
data_14f2250 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_LEAGUE_OF_SHOPKEEPERS
void* x0_138 = UI2StateDeclTryLookup("ay_league_of_shopkeepers")

if (x0_138 == 0)
    (*data_14f2270)(&data_14f2270, "ay_league_of_shopkeepers")
    uint32_t x10_338 = *UI2StateDeclI_counter
    uint64_t x11_139 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f2270
    *UI2StateDeclI_counter = x10_338 + 1
    data_14f2278 = x11_139
else
    (*data_14f2270)(&data_14f2270, *(x0_138 + 0x10))

data_14f2288 = _vtable_for_UI2StateDecl + 0x10
void* x0_139 = UI2StateDeclTryLookup("ay_league_of_shopkeepers")
int128_t v0_27
int128_t v2_16
int128_t v3_1
int128_t v5_1

if (x0_139 == 0)
    v0_27, v2_16, v3_1, v5_1 = (*data_14f2288)(&data_14f2288, "ay_league_of_shopkeepers")
    uint32_t x10_340 = *UI2StateDeclI_counter
    uint64_t x11_140 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f2288
    *UI2StateDeclI_counter = x10_340 + 1
    data_14f2290 = x11_140
else
    v0_27, v2_16, v3_1, v5_1 = (*data_14f2288)(&data_14f2288, *(x0_139 + 0x10))
v0_27.q = 0
v0_27:8.q = 0
data_14f22a8 = 0x4000000000
data_14f22c8 = zx.o(0)
data_14f22c8:4.d = 9
data_14f2368 = zx.o(0)
__builtin_memset(&data_14f22d8, 0, 0x20)
data_14f2368.q = LeagueOfShopkeepers_Test
__builtin_memset(&data_14f22f8, 0, 0x70)
v0_27 = data_1127588
v2_16 = data_1127598
v3_1 = data_11275a8.o
data_14f22a0 = 0x500001045
data_14f2910 = v2_16
data_14f22d8 = LeagueOfShopkeepers_OnPlay
data_14f28c0 = 1
data_14f2378 = 0
data_14f22c0 = 0x200000006
data_14f2368:0xc = 0x100000000
__builtin_memcpy(&data_14f2960, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f2900 = v0_27
__builtin_memset(&data_14f2930, 0, 0x30)
data_14f2920 = v3_1
data_14f29b8 = "market_towns"
data_14f29c0 = 0x28
data_14f29c8 = TEXTURE_CARD_GEN_ALLIES_MARKET_TOWNS
data_14f29f0 = _vtable_for_UI2StateDecl + 0x10
data_14f29d0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_MARKET_TOWNS
void* x0_140 = UI2StateDeclTryLookup("ay_market_towns")

if (x0_140 == 0)
    (*data_14f29f0)(&data_14f29f0, "ay_market_towns")
    uint32_t x10_343 = *UI2StateDeclI_counter
    uint64_t x11_141 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f29f0
    *UI2StateDeclI_counter = x10_343 + 1
    data_14f29f8 = x11_141
else
    (*data_14f29f0)(&data_14f29f0, *(x0_140 + 0x10))

data_14f2a08 = _vtable_for_UI2StateDecl + 0x10
void* x0_141 = UI2StateDeclTryLookup("ay_market_towns")

if (x0_141 == 0)
    (*data_14f2a08)(&data_14f2a08, "ay_market_towns")
    uint32_t x10_345 = *UI2StateDeclI_counter
    uint64_t x11_142 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f2a08
    *UI2StateDeclI_counter = x10_345 + 1
    data_14f2a10 = x11_142
else
    (*data_14f2a08)(&data_14f2a08, *(x0_141 + 0x10))

__builtin_memset(&data_14f2a48, 0, 0xb0)
data_14f2a28 = 0x4000000000
data_14f2a48:4.d = 3
data_14f2a58 = MarketTowns_StartOfTurn
data_14f2ae8 = MarketTowns_Test
data_14f3040 = 1
data_14f2af4:4 = 0
data_14f2a40 = 0x200000006
data_14f2af4 = 0x100000101
__builtin_memcpy(&data_14f30e0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f2a20 = 0x100001046
data_14f3138 = "mountain_folk"
data_14f3140 = 6
data_14f3148 = TEXTURE_CARD_GEN_ALLIES_MOUNTAIN_FOLK
data_14f3170 = _vtable_for_UI2StateDecl + 0x10
data_14f3150 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_MOUNTAIN_FOLK
void* x0_142 = UI2StateDeclTryLookup("ay_mountain_folk")

if (x0_142 == 0)
    (*data_14f3170)(&data_14f3170, "ay_mountain_folk")
    uint32_t x10_348 = *UI2StateDeclI_counter
    uint64_t x11_143 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f3170
    *UI2StateDeclI_counter = x10_348 + 1
    data_14f3178 = x11_143
else
    (*data_14f3170)(&data_14f3170, *(x0_142 + 0x10))

data_14f3188 = _vtable_for_UI2StateDecl + 0x10
void* x0_143 = UI2StateDeclTryLookup("ay_mountain_folk")

if (x0_143 == 0)
    (*data_14f3188)(&data_14f3188, "ay_mountain_folk")
    uint32_t x10_350 = *UI2StateDeclI_counter
    uint64_t x11_144 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f3188
    *UI2StateDeclI_counter = x10_350 + 1
    data_14f3190 = x11_144
else
    (*data_14f3188)(&data_14f3188, *(x0_143 + 0x10))

__builtin_memset(&data_14f31c8, 0, 0xb8)
data_14f3274 = 0x100000001
data_14f31a8 = 0x4000000000
data_14f31c8:4.d = 7
data_14f31d8 = MountainFolk_StartOfTurn
data_14f37c0 = 1
data_14f31c0 = 0x200000006
data_14f3268 = 0
__builtin_memcpy(&data_14f3860, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f31a0 = 0x500001047
data_14f38b8 = "order_of_astrologers"
data_14f38c0 = 6
data_14f38c8 = TEXTURE_CARD_GEN_ALLIES_ORDER_OF_ASTROLOGERS
data_14f38f0 = _vtable_for_UI2StateDecl + 0x10
data_14f38d0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_ORDER_OF_ASTROLOGERS
void* x0_144 = UI2StateDeclTryLookup("ay_order_of_astrologers")

if (x0_144 == 0)
    (*data_14f38f0)(&data_14f38f0, "ay_order_of_astrologers")
    uint32_t x10_353 = *UI2StateDeclI_counter
    uint64_t x11_145 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f38f0
    *UI2StateDeclI_counter = x10_353 + 1
    data_14f38f8 = x11_145
else
    (*data_14f38f0)(&data_14f38f0, *(x0_144 + 0x10))

data_14f3908 = _vtable_for_UI2StateDecl + 0x10
void* x0_145 = UI2StateDeclTryLookup("ay_order_of_astrologers")

if (x0_145 == 0)
    (*data_14f3908)(&data_14f3908, "ay_order_of_astrologers")
    uint32_t x10_355 = *UI2StateDeclI_counter
    uint64_t x11_146 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f3908
    *UI2StateDeclI_counter = x10_355 + 1
    data_14f3910 = x11_146
else
    (*data_14f3908)(&data_14f3908, *(x0_145 + 0x10))

__builtin_memset(&data_14f3948, 0, 0xb8)
data_14f39f4 = 0x100000001
data_14f3928 = 0x4000000000
data_14f3948:4.d = 0xa
data_14f3958 = OrderOfAstrologers_OnShuffle
data_14f39e8 = OrderOfAstrologers_OnShuffle_Test
data_14f3f40 = 1
data_14f3940 = 0x200000006
__builtin_memcpy(&data_14f3fe0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f3920 = 0x100001048
data_14f4038 = "order_of_masons"
data_14f4040 = 6
data_14f4048 = TEXTURE_CARD_GEN_ALLIES_ORDER_OF_MASONS
data_14f4070 = _vtable_for_UI2StateDecl + 0x10
data_14f4050 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_ORDER_OF_MASONS
void* x0_146 = UI2StateDeclTryLookup("ay_order_of_masons")

if (x0_146 == 0)
    (*data_14f4070)(&data_14f4070, "ay_order_of_masons")
    uint32_t x10_358 = *UI2StateDeclI_counter
    uint64_t x11_147 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f4070
    *UI2StateDeclI_counter = x10_358 + 1
    data_14f4078 = x11_147
else
    (*data_14f4070)(&data_14f4070, *(x0_146 + 0x10))

data_14f4088 = _vtable_for_UI2StateDecl + 0x10
void* x0_147 = UI2StateDeclTryLookup("ay_order_of_masons")

if (x0_147 == 0)
    (*data_14f4088)(&data_14f4088, "ay_order_of_masons")
    uint32_t x10_360 = *UI2StateDeclI_counter
    uint64_t x11_148 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f4088
    *UI2StateDeclI_counter = x10_360 + 1
    data_14f4090 = x11_148
else
    (*data_14f4088)(&data_14f4088, *(x0_147 + 0x10))

__builtin_memset(&data_14f40c8, 0, 0xb8)
data_14f4174 = 0x100000001
data_14f40a8 = 0x4000000000
data_14f40c8:4.d = 0xa
data_14f40a0 = 0x100001049
data_14f40d8 = OrderOfMasons_OnShuffle
data_14f4168 = OrderOfMasons_OnShuffle_Test
data_14f46c0 = 1
data_14f40c0 = 0x200000006
__builtin_memcpy(&data_14f4760, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f47b8 = "peaceful_cult"
data_14f47c0 = 0x2a
data_14f47c8 = TEXTURE_CARD_GEN_ALLIES_PEACEFUL_CULT
data_14f47f0 = _vtable_for_UI2StateDecl + 0x10
data_14f47d0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_PEACEFUL_CULT
void* x0_148 = UI2StateDeclTryLookup("ay_peaceful_cult")

if (x0_148 == 0)
    (*data_14f47f0)(&data_14f47f0, "ay_peaceful_cult")
    uint32_t x10_363 = *UI2StateDeclI_counter
    uint64_t x11_149 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f47f0
    *UI2StateDeclI_counter = x10_363 + 1
    data_14f47f8 = x11_149
else
    (*data_14f47f0)(&data_14f47f0, *(x0_148 + 0x10))

data_14f4808 = _vtable_for_UI2StateDecl + 0x10
void* x0_149 = UI2StateDeclTryLookup("ay_peaceful_cult")

if (x0_149 == 0)
    (*data_14f4808)(&data_14f4808, "ay_peaceful_cult")
    uint32_t x10_365 = *UI2StateDeclI_counter
    uint64_t x11_150 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f4808
    *UI2StateDeclI_counter = x10_365 + 1
    data_14f4810 = x11_150
else
    (*data_14f4808)(&data_14f4808, *(x0_149 + 0x10))

__builtin_memset(&data_14f4848, 0, 0xb8)
data_14f48f4 = 0x100000001
data_14f4828 = 0x4000000000
data_14f4848:4.d = 3
data_14f4820 = 0x10000104a
data_14f4858 = PeacefulCult_StartOfBuy
data_14f48e8 = PeacefulCult_Test
data_14f4e40 = 1
data_14f4840 = 0x200000006
__builtin_memcpy(&data_14f4ee0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f4f38 = "plateau_shepherds"
data_14f4f40 = 0x2d
data_14f4f48 = TEXTURE_CARD_GEN_ALLIES_PLATEAU_SHEPHERDS
data_14f4f70 = _vtable_for_UI2StateDecl + 0x10
data_14f4f50 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_PLATEAU_SHEPHERDS
void* x0_150 = UI2StateDeclTryLookup("ay_plateau_shepherds")

if (x0_150 == 0)
    (*data_14f4f70)(&data_14f4f70, "ay_plateau_shepherds")
    uint32_t x10_368 = *UI2StateDeclI_counter
    uint64_t x11_151 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f4f70
    *UI2StateDeclI_counter = x10_368 + 1
    data_14f4f78 = x11_151
else
    (*data_14f4f70)(&data_14f4f70, *(x0_150 + 0x10))

data_14f4f88 = _vtable_for_UI2StateDecl + 0x10
void* x0_151 = UI2StateDeclTryLookup("ay_plateau_shepherds")
int128_t v0_28
int128_t v2_17
int128_t v5_2

if (x0_151 == 0)
    v0_28, v2_17, v5_2 = (*data_14f4f88)(&data_14f4f88, "ay_plateau_shepherds")
    uint32_t x10_370 = *UI2StateDeclI_counter
    uint64_t x11_152 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f4f88
    *UI2StateDeclI_counter = x10_370 + 1
    data_14f4f90 = x11_152
else
    v0_28, v2_17, v5_2 = (*data_14f4f88)(&data_14f4f88, *(x0_151 + 0x10))
v0_28.q = 0
v0_28:8.q = 0
data_14f4fa8 = 0x4000000000
__builtin_memset(&data_14f4fc0, 0, 0x20)
data_14f4fc0 = 8
__builtin_memset(&data_14f4fe0, 0, 0xa0)
v0_28 = data_11275e8
v2_17 = data_11275f8
data_14f4fa0 = 0x10000104b
data_14f5610 = v2_17
data_14f5670 = 2
data_14f4fd0:8 = PlateauShepherds_OnScoring
data_14f5660 = v1_1
data_14f5600 = v0_28
__builtin_memset(&data_14f5620, 0, 0x40)
data_14f5678 = 0x100000000
data_14f56b8 = "trappers_lodge"
data_14f56c0 = 0x28
data_14f56c8 = TEXTURE_CARD_GEN_ALLIES_TRAPPERS_LODGE
data_14f56f0 = _vtable_for_UI2StateDecl + 0x10
data_14f56d0 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_TRAPPERS_LODGE
void* x0_152 = UI2StateDeclTryLookup("ay_trappers_lodge")

if (x0_152 == 0)
    (*data_14f56f0)(&data_14f56f0, "ay_trappers_lodge")
    uint32_t x10_373 = *UI2StateDeclI_counter
    uint64_t x11_153 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f56f0
    *UI2StateDeclI_counter = x10_373 + 1
    data_14f56f8 = x11_153
else
    (*data_14f56f0)(&data_14f56f0, *(x0_152 + 0x10))

data_14f5708 = _vtable_for_UI2StateDecl + 0x10
void* x0_153 = UI2StateDeclTryLookup("ay_trappers_lodge")

if (x0_153 == 0)
    (*data_14f5708)(&data_14f5708, "ay_trappers_lodge")
    uint32_t x10_375 = *UI2StateDeclI_counter
    uint64_t x11_154 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f5708
    *UI2StateDeclI_counter = x10_375 + 1
    data_14f5710 = x11_154
else
    (*data_14f5708)(&data_14f5708, *(x0_153 + 0x10))

__builtin_memset(&data_14f5748, 0, 0xb8)
data_14f57f4 = 0x100000001
data_14f5728 = 0x4000000000
data_14f5758 = TrappersLodge_OnGain
data_14f57e8 = TrappersLodge_Test
data_14f5d40 = 1
data_14f5740 = 0x200000006
data_14f5748:4.d = 0
__builtin_memcpy(&data_14f5de0, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x18\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
data_14f5720 = 0x10000104c
data_14f5e38 = "woodworkers_guild"
data_14f5e40 = 0x28
data_14f5e48 = TEXTURE_CARD_GEN_ALLIES_WOODWORKERS_GUILD
data_14f5e70 = _vtable_for_UI2StateDecl + 0x10
data_14f5e50 = SOUND_SOUND_CARDS_ALLIES_FX_ACTIVATE_ALLY_WOODWORKERS_GUILD
void* x0_154 = UI2StateDeclTryLookup("ay_woodworkers_guild")

if (x0_154 == 0)
    (*data_14f5e70)(&data_14f5e70, "ay_woodworkers_guild")
    uint32_t x10_378 = *UI2StateDeclI_counter
    uint64_t x11_155 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f5e70
    *UI2StateDeclI_counter = x10_378 + 1
    data_14f5e78 = x11_155
else
    (*data_14f5e70)(&data_14f5e70, *(x0_154 + 0x10))

data_14f5e88 = _vtable_for_UI2StateDecl + 0x10
void* x0_155 = UI2StateDeclTryLookup("ay_woodworkers_guild")
int64_t result

if (x0_155 == 0)
    result = (*data_14f5e88)(&data_14f5e88, "ay_woodworkers_guild")
    uint32_t x10_380 = *UI2StateDeclI_counter
    uint64_t x11_156 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f5e88
    *UI2StateDeclI_counter = x10_380 + 1
    data_14f5e90 = x11_156
else
    result = (*data_14f5e88)(&data_14f5e88, *(x0_155 + 0x10))

__builtin_memset(&data_14f5ec8, 0, 0xb0)
data_14f5ea8 = 0x4000000000
data_14f5ec8:4.d = 3
data_14f5ed8 = WoodworkersGuild_StartOfBuy
data_14f5ec0 = 0x200000006
data_14f5f68 = WoodworkersGuild_Test
data_14f5f74:4 = 0
data_14f5f74 = 0x100000001
data_14f5ea0 = 0x10000104d
data_14f64c0 = 1
return result
