// 函数: sub_cacaec
// 地址: 0xcacaec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x13 = arg4 u>> 3
int32_t x17 = arg3[1]
int32_t x0 = arg3[2]
int32_t x1 = arg3[3]
int32_t x4 = *((x13 << 4) + 0x84a260)
int32_t x5 = *((x13 << 4) + 0x84a264)
int32_t x6 = *((x13 << 4) + 0x84a268)
int32_t x13_2 = *((x13 << 4) + 0x84a26c)
int32_t result_1 = _byteswap(*arg3)
int32_t temp0 = _byteswap(x17)
int64_t x14_3 = (x13 - 1) u% 3
int32_t temp0_1 = _byteswap(x0)
int32_t temp0_2 = _byteswap(x1)
int32_t x17_1 = x4 ^ result_1
int32_t x0_1 = x5 ^ temp0
int32_t x1_1 = x6 ^ temp0_1
int32_t x3_1 = x13_2 ^ temp0_2
uint32_t x13_3 = zx.d(x14_3.b + 1)
int32_t x16_5 = *(&data_849680 + ((zx.q(x17_1 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x17_1 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x17_1 u>> 8) & 0xff) << 2))
int32_t x16_6 = x16_5 ^ *(&data_849e80 + ((zx.q(x17_1) & 0xff) << 2))
int32_t x6_4 = *(&data_849680 + ((zx.q(x0_1 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x0_1 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x0_1 u>> 8) & 0xff) << 2))
int32_t x15_6 = *(&data_849680 + ((zx.q(x1_1 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x1_1 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x1_1 u>> 8) & 0xff) << 2))
int32_t x4_6 = *(&data_849680 + ((zx.q(x3_1 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x3_1 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x3_1 u>> 8) & 0xff) << 2))
int32_t x15_7 = x15_6 ^ *(&data_849e80 + ((zx.q(x1_1) & 0xff) << 2))
int32_t x0_4 = x4_6 ^ *(&data_849e80 + ((zx.q(x3_1) & 0xff) << 2))
int32_t x17_7 = x6_4 ^ *(&data_849e80 + ((zx.q(x0_1) & 0xff) << 2)) ^ x15_7
int32_t x15_8 = x0_4 ^ x15_7
int32_t x1_4 = x17_7 ^ x16_6
int32_t temp0_3 = _byteswap(x15_8 ^ x16_6)
int32_t temp0_4 = _byteswap(x0_4 ^ x17_7)
int32_t x17_9 = ror.d(x15_8 ^ x1_4, 0x10)
int32_t x0_6 = x17_9 ^ ror.d(temp0_3, 0x10)
int32_t x16_9 = x17_9 ^ temp0_4
int32_t x17_10 = x0_6 ^ x1_4
int32_t fp = x16_9 ^ x1_4
int32_t var_68

if (arg4 == 0x20 || arg4 == 0x18)
    int32_t x3_2 = arg3[5]
    int32_t temp0_5 = _byteswap(arg3[4])
    fp ^= _byteswap(x3_2)
    var_68 = temp0_5 ^ x17_10
else
    var_68 = x17_10

int32_t x26 = x0_6 ^ temp0_4
int32_t x25 = x17_10 ^ x16_9

if (arg4 == 0x20)
    int32_t x16_10 = arg3[7]
    x25 ^= _byteswap(arg3[6])
    x26 ^= _byteswap(x16_10)

int32_t x17_11 = *(&data_84a280 + (zx.q(x13_3 u% 3) << 4))
int32_t x0_7 = *((zx.q(x13_3 u% 3) << 4) + 0x84a284)
int32_t x15_13 = *((x14_3 << 4) + 0x84a284) ^ fp
int32_t x13_6 = *(&data_84a280 + (x14_3 << 4)) ^ var_68
int32_t x16_13 = *((x14_3 << 4) + 0x84a288) ^ x25
int32_t x14_6 = *((x14_3 << 4) + 0x84a28c) ^ x26
int32_t x2_3 = *(&data_849e80 + ((zx.q(x13_6 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849a80 + (zx.q(x13_6 u>> 0x18) << 2))
    ^ *(&data_849280 + ((zx.q(x13_6 u>> 8) & 0xff) << 2))
int32_t x4_9 = *(&data_849e80 + ((zx.q(x15_13 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849a80 + (zx.q(x15_13 u>> 0x18) << 2))
    ^ *(&data_849280 + ((zx.q(x15_13 u>> 8) & 0xff) << 2))
int32_t x5_8 = *(&data_849e80 + ((zx.q(x16_13 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849a80 + (zx.q(x16_13 u>> 0x18) << 2))
    ^ *(&data_849280 + ((zx.q(x16_13 u>> 8) & 0xff) << 2))
int32_t x3_9 = *(&data_849e80 + ((zx.q(x14_6 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849a80 + (zx.q(x14_6 u>> 0x18) << 2))
    ^ *(&data_849280 + ((zx.q(x14_6 u>> 8) & 0xff) << 2))
int32_t x16_16 = x5_8 ^ *(&data_849680 + ((zx.q(x16_13) & 0xff) << 2))
int32_t x13_9 = x2_3 ^ *(&data_849680 + ((zx.q(x13_6) & 0xff) << 2))
int32_t x14_9 = x3_9 ^ *(&data_849680 + ((zx.q(x14_6) & 0xff) << 2))
int32_t x15_17 = x4_9 ^ *(&data_849680 + ((zx.q(x15_13) & 0xff) << 2)) ^ x16_16
int32_t x16_17 = x14_9 ^ x16_16
int32_t x2_4 = x15_17 ^ x13_9
int32_t x14_10 = x14_9 ^ x15_17
int32_t x15_18 = x16_17 ^ x2_4
int32_t x14_12 = (0xff00ff00 & x14_10 << 8) | (0xff00ff & x14_10 u>> 8)
int32_t x2_5 = ror.d(x2_4, 0x10)
int32_t x13_12 = _byteswap(x16_17 ^ x13_9) ^ x15_18
int32_t x15_19 = x14_12 ^ x15_18
int32_t x4_10 = x2_5 ^ temp0 ^ x15_19
int32_t x2_6 = x13_12 ^ x2_5
int32_t x3_11 = x2_6 ^ result_1
int32_t x2_7 = x13_12 ^ temp0_2 ^ x14_12
int32_t x15_20 = x2_6 ^ temp0_1 ^ x15_19
int32_t x13_14 = x3_11 ^ x17_11
int32_t x14_13 = x4_10 ^ x0_7
int32_t x12_2 = x2_7 ^ *((zx.q(x13_3 u% 3) << 4) + 0x84a28c)
int32_t x15_21 = x15_20 ^ *((zx.q(x13_3 u% 3) << 4) + 0x84a288)
int32_t x16_26 = *(&data_849680 + ((zx.q(x14_13 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x14_13 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x14_13 u>> 8) & 0xff) << 2))
int32_t x9_1 = *(&data_849680 + ((zx.q(x12_2 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x12_2 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x12_2 u>> 8) & 0xff) << 2))
int32_t x8_2 = *(&data_849680 + ((zx.q(x15_21 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x15_21 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x15_21 u>> 8) & 0xff) << 2))
int32_t x15_24 = *(&data_849680 + ((zx.q(x13_14 u>> 0x10) & 0xff) << 2))
    ^ *(&data_849280 + (zx.q(x13_14 u>> 0x18) << 2))
    ^ *(&data_849a80 + ((zx.q(x13_14 u>> 8) & 0xff) << 2))
int32_t x9_2 = x9_1 ^ *(&data_849e80 + ((zx.q(x12_2) & 0xff) << 2))
int32_t x8_3 = x8_2 ^ *(&data_849e80 + ((zx.q(x15_21) & 0xff) << 2))
int32_t x13_17 = x15_24 ^ *(&data_849e80 + ((zx.q(x13_14) & 0xff) << 2))
int32_t x10_1 = x16_26 ^ *(&data_849e80 + ((zx.q(x14_13) & 0xff) << 2)) ^ x8_3
int32_t x8_4 = x9_2 ^ x8_3
int32_t x11_1 = x10_1 ^ x13_17
int32_t x10_2 = x8_4 ^ x13_17
int32_t temp0_10 = _byteswap(x9_2 ^ x10_1)
int32_t x8_6 = ror.d(x8_4 ^ x11_1, 0x10)
int32_t x10_5 = ((0xff00ff00 & x10_2 << 8) | (0xff00ff & x10_2 u>> 8)) ^ x8_6
int32_t x8_7 = x8_6 ^ temp0_10
int32_t x9_5 = x10_5 ^ x11_1
int32_t x26_1 = x11_1 ^ fp ^ x8_7
int32_t x11_2 = x9_5 ^ var_68
int32_t x9_6 = x8_7 ^ x25 ^ x9_5
int32_t x8_9 = temp0_10 ^ x26 ^ x10_5

if (arg4 == 0x18)
    int64_t x8_12 = *arg1
    int64_t x10_7 = arg1[1] - x8_12
    
    if (x10_7 s>> 2 u<= 0x3b)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if (x10_7 != 0xf0)
        arg1[1] = x8_12 + 0xf0
else if (arg4 == 0x10)
    int64_t x8_10 = *arg1
    int64_t x10_6 = arg1[1] - x8_10
    
    if (x10_6 s>> 2 u<= 0x33)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if (x10_6 != 0xd0)
        arg1[1] = x8_10 + 0xd0
else if (arg4 == 0x20)
    int64_t x8_13 = *arg1
    int64_t x10_8 = arg1[1] - x8_13
    
    if (x10_8 s>> 2 u<= 0x43)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if (x10_8 != 0x110)
        arg1[1] = x8_13 + 0x110

int32_t* x8_15 = *arg1
*x8_15 = result_1 ^ var_68 u>> 0x13 ^ x26 << 0xd
x8_15[1] = temp0 ^ fp u>> 0x13 ^ var_68 << 0xd
x8_15[2] = temp0_1 ^ fp << 0xd ^ x25 u>> 0x13
x8_15[3] = temp0_2 ^ x26 u>> 0x13 ^ x25 << 0xd
void* x8_16 = *arg1
*(x8_16 + 0x10) = var_68 ^ x3_11 u>> 0x13 ^ x2_7 << 0xd
*(x8_16 + 0x14) = fp ^ x3_11 << 0xd ^ x4_10 u>> 0x13
*(x8_16 + 0x18) = x25 ^ x15_20 u>> 0x13 ^ x4_10 << 0xd
*(x8_16 + 0x1c) = x26 ^ x2_7 u>> 0x13 ^ x15_20 << 0xd
void* x8_17 = *arg1
*(x8_17 + 0x20) = x3_11 ^ x11_2 u>> 0x13 ^ x8_9 << 0xd
*(x8_17 + 0x24) = x4_10 ^ x26_1 u>> 0x13 ^ x11_2 << 0xd
*(x8_17 + 0x28) = x15_20 ^ x26_1 << 0xd ^ x9_6 u>> 0x13
*(x8_17 + 0x2c) = x2_7 ^ x8_9 u>> 0x13 ^ x9_6 << 0xd
void* x8_18 = *arg1
*(x8_18 + 0x30) = ((temp0_2 << 0x20 | result_1) u>> 0x13).d ^ x11_2
*(x8_18 + 0x34) = ((result_1 << 0x20 | temp0) u>> 0x13).d ^ x26_1
*(x8_18 + 0x38) = ((temp0 << 0x20 | temp0_1) u>> 0x13).d ^ x9_6
*(x8_18 + 0x3c) = ((temp0_1 << 0x20 | temp0_2) u>> 0x13).d ^ x8_9
void* x8_19 = *arg1
*(x8_19 + 0x40) = result_1 ^ var_68 u>> 0x1f ^ x26 << 1
*(x8_19 + 0x44) = temp0 ^ fp u>> 0x1f ^ var_68 << 1
*(x8_19 + 0x48) = temp0_1 ^ fp << 1 ^ x25 u>> 0x1f
*(x8_19 + 0x4c) = temp0_2 ^ x26 u>> 0x1f ^ x25 << 1
void* x8_20 = *arg1
*(x8_20 + 0x50) = var_68 ^ x3_11 u>> 0x1f ^ x2_7 << 1
*(x8_20 + 0x54) = fp ^ x3_11 << 1 ^ x4_10 u>> 0x1f
*(x8_20 + 0x58) = x25 ^ x15_20 u>> 0x1f ^ x4_10 << 1
*(x8_20 + 0x5c) = x26 ^ x2_7 u>> 0x1f ^ x15_20 << 1
void* x8_21 = *arg1
*(x8_21 + 0x60) = x3_11 ^ x11_2 u>> 0x1f ^ x8_9 << 1
*(x8_21 + 0x64) = x4_10 ^ x26_1 u>> 0x1f ^ x11_2 << 1
int32_t result = result_1
*(x8_21 + 0x68) = x15_20 ^ x26_1 << 1 ^ x9_6 u>> 0x1f
*(x8_21 + 0x6c) = x2_7 ^ x8_9 u>> 0x1f ^ x9_6 << 1
void* x8_22 = *arg1
*(x8_22 + 0x70) = ((temp0_2 << 0x20 | result_1) u>> 0x1f).d ^ x11_2
*(x8_22 + 0x74) = ((result_1 << 0x20 | temp0) u>> 0x1f).d ^ x26_1
*(x8_22 + 0x78) = ((temp0 << 0x20 | temp0_1) u>> 0x1f).d ^ x9_6
*(x8_22 + 0x7c) = ((temp0_1 << 0x20 | temp0_2) u>> 0x1f).d ^ x8_9
void* x8_23 = *arg1
*(x8_23 + 0x80) = result_1 ^ fp << 0x1d ^ x25 u>> 3
*(x8_23 + 0x84) = temp0 ^ x26 u>> 3 ^ x25 << 0x1d
*(x8_23 + 0x88) = temp0_1 ^ var_68 u>> 3 ^ x26 << 0x1d
*(x8_23 + 0x8c) = temp0_2 ^ fp u>> 3 ^ var_68 << 0x1d
void* x8_24 = *arg1
*(x8_24 + 0x90) = var_68 ^ x15_20 u>> 3 ^ x4_10 << 0x1d
*(x8_24 + 0x94) = fp ^ x2_7 u>> 3 ^ x15_20 << 0x1d
*(x8_24 + 0x98) = x25 ^ x3_11 u>> 3 ^ x2_7 << 0x1d
*(x8_24 + 0x9c) = x26 ^ x3_11 << 0x1d ^ x4_10 u>> 3
void* x8_25 = *arg1
*(x8_25 + 0xa0) = x3_11 ^ x26_1 << 0x1d ^ x9_6 u>> 3
*(x8_25 + 0xa4) = x4_10 ^ x8_9 u>> 3 ^ x9_6 << 0x1d
*(x8_25 + 0xa8) = x15_20 ^ x11_2 u>> 3 ^ x8_9 << 0x1d
*(x8_25 + 0xac) = x2_7 ^ x26_1 u>> 3 ^ x11_2 << 0x1d
void* x8_26 = *arg1
*(x8_26 + 0xb0) = ((temp0 << 0x20 | temp0_1) u>> 3).d ^ x11_2
*(x8_26 + 0xb4) = ((temp0_1 << 0x20 | temp0_2) u>> 3).d ^ x26_1
*(x8_26 + 0xb8) = ((temp0_2 << 0x20 | result) u>> 3).d ^ x9_6
*(x8_26 + 0xbc) = ((result << 0x20 | temp0) u>> 3).d ^ x8_9
void* x8_27 = *arg1
*(x8_27 + 0xc0) = result ^ fp u>> 1 ^ var_68 << 0x1f
*(x8_27 + 0xc4) = temp0 ^ fp << 0x1f ^ x25 u>> 1
*(x8_27 + 0xc8) = temp0_1 ^ x26 u>> 1 ^ x25 << 0x1f
*(x8_27 + 0xcc) = temp0_2 ^ var_68 u>> 1 ^ x26 << 0x1f

if (arg4 == 0x20 || arg4 == 0x18)
    void* x8_28 = *arg1
    *(x8_28 + 0xd0) = var_68 ^ x3_11 << 0x1f ^ x4_10 u>> 1
    *(x8_28 + 0xd4) = fp ^ x15_20 u>> 1 ^ x4_10 << 0x1f
    *(x8_28 + 0xd8) = x25 ^ x2_7 u>> 1 ^ x15_20 << 0x1f
    *(x8_28 + 0xdc) = x26 ^ x3_11 u>> 1 ^ x2_7 << 0x1f
    void* x8_29 = *arg1
    *(x8_29 + 0xe0) = x3_11 ^ x26_1 u>> 1 ^ x11_2 << 0x1f
    *(x8_29 + 0xe4) = x4_10 ^ x26_1 << 0x1f ^ x9_6 u>> 1
    *(x8_29 + 0xe8) = x15_20 ^ x8_9 u>> 1 ^ x9_6 << 0x1f
    *(x8_29 + 0xec) = x2_7 ^ x11_2 u>> 1 ^ x8_9 << 0x1f
    
    if (arg4 == 0x20)
        void* x8_30 = *arg1
        *(x8_30 + 0xf0) = ((result << 0x20 | temp0) u>> 1).d ^ x11_2
        *(x8_30 + 0xf4) = ((temp0 << 0x20 | temp0_1) u>> 1).d ^ x26_1
        *(x8_30 + 0xf8) = ((temp0_1 << 0x20 | temp0_2) u>> 1).d ^ x9_6
        *(x8_30 + 0xfc) = ((temp0_2 << 0x20 | result) u>> 1).d ^ x8_9
        void* x8_31 = *arg1
        *(x8_31 + 0x100) = result ^ fp u>> 0xd ^ var_68 << 0x13
        *(x8_31 + 0x104) = temp0 ^ fp << 0x13 ^ x25 u>> 0xd
        *(x8_31 + 0x108) = temp0_1 ^ x26 u>> 0xd ^ x25 << 0x13
        *(x8_31 + 0x10c) = temp0_2 ^ var_68 u>> 0xd ^ x26 << 0x13

int32_t* x10_47 = *arg2
void* x8_32 = arg2[1]
int64_t x9_49 = (arg1[1] - *arg1) s>> 2
int64_t x11_22 = (x8_32 - x10_47) s>> 2

if (x9_49 u> x11_22)
    result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    x10_47 = *arg2
    x8_32 = arg2[1]
else if (x9_49 u< x11_22)
    x8_32 = &x10_47[x9_49]
    arg2[1] = x8_32

if (x8_32 == x10_47)
label_cad5bc:
    int64_t x8_33 = 0
    int64_t i
    
    do
        int64_t x9_51 = x8_33 << 2
        void* x10_69 = &x10_47[x8_33]
        int32_t x11_37 = *(x10_69 + 0x10)
        *(x10_69 + 0x10) = ror.d(x11_37, 8) ^ ror.d(x11_37, 0x10) ^ ror.d(x11_37, 0x18)
        void* x10_71 = *arg2 + x9_51
        int32_t x11_39 = *(x10_71 + 0x14)
        *(x10_71 + 0x14) = ror.d(x11_39, 8) ^ ror.d(x11_39, 0x10) ^ ror.d(x11_39, 0x18)
        void* x10_73 = *arg2 + x9_51
        int32_t x11_41 = *(x10_73 + 0x18)
        *(x10_73 + 0x18) = ror.d(x11_41, 8) ^ ror.d(x11_41, 0x10) ^ ror.d(x11_41, 0x18)
        void* x10_75 = *arg2 + x9_51
        int32_t x11_43 = *(x10_75 + 0x1c)
        *(x10_75 + 0x1c) = ror.d(x11_43, 8) ^ ror.d(x11_43, 0x10) ^ ror.d(x11_43, 0x18)
        void* x10_77 = *arg2 + x9_51
        *(x10_77 + 0x14) ^= *(x10_77 + 0x18)
        void* x10_79 = *arg2 + x9_51
        *(x10_79 + 0x18) ^= *(x10_79 + 0x1c)
        void* x10_81 = *arg2 + x9_51
        *(x10_81 + 0x10) ^= *(x10_81 + 0x14)
        void* x10_83 = *arg2 + x9_51
        *(x10_83 + 0x1c) ^= *(x10_83 + 0x14)
        void* x10_85 = *arg2 + x9_51
        *(x10_85 + 0x18) ^= *(x10_85 + 0x10)
        void* x10_87 = *arg2 + x9_51
        *(x10_87 + 0x14) ^= *(x10_87 + 0x18)
        void* x10_89 = *arg2 + x9_51
        int32_t x11_57 = *(x10_89 + 0x14)
        *(x10_89 + 0x14) = (0xff00ff00 & x11_57 << 8) | (0xff00ff & x11_57 u>> 8)
        void* x10_91 = *arg2 + x9_51
        *(x10_91 + 0x18) = ror.d(*(x10_91 + 0x18), 0x10)
        void* x10_93 = *arg2 + x9_51
        *(x10_93 + 0x1c) = _byteswap(*(x10_93 + 0x1c))
        void* x10_95 = *arg2 + x9_51
        *(x10_95 + 0x14) ^= *(x10_95 + 0x18)
        void* x10_97 = *arg2 + x9_51
        *(x10_97 + 0x18) ^= *(x10_97 + 0x1c)
        void* x10_99 = *arg2 + x9_51
        *(x10_99 + 0x10) ^= *(x10_99 + 0x14)
        void* x10_101 = *arg2 + x9_51
        *(x10_101 + 0x1c) ^= *(x10_101 + 0x14)
        void* x10_103 = *arg2 + x9_51
        *(x10_103 + 0x18) ^= *(x10_103 + 0x10)
        void* x9_52 = *arg2 + x9_51
        *(x9_52 + 0x14) ^= *(x9_52 + 0x18)
        x10_47 = *arg2
        i = x8_33 + 8
        x8_33 += 4
    while (i != ((arg2[1] - x10_47) s>> 2) - 4)
else
    int64_t i_1 = 0
    int64_t x9_50 = -4
    void* x11_36
    
    do
        int64_t x12_20 = *arg1
        int64_t x11_23 = arg1[1]
        int64_t x13_29 = x11_23 - x12_20
        int64_t x14_27
        
        x14_27 = x13_29 s>= 0 ? x13_29 : -1
        
        int64_t x11_24 = x12_20 - x11_23
        int64_t x14_28
        
        x14_28 = x14_27 s< 1 ? x14_27 : 1
        
        int64_t x11_25
        
        x11_25 = x11_24 s> x13_29 ? x11_24 : x13_29
        
        int64_t x12_21 = i_1 << 2
        i_1 += 4
        x10_47[i_1] = *(x12_20 + ((x9_50 + x14_28 * (x11_25 u>> 2)) << 2))
        int64_t x11_29 = *arg1
        int64_t x10_48 = arg1[1]
        int64_t x13_30 = x10_48 - x11_29
        int64_t x14_29
        
        x14_29 = x13_30 s>= 0 ? x13_30 : -1
        
        int64_t x10_49 = x11_29 - x10_48
        int64_t x14_30
        
        x14_30 = x14_29 s< 1 ? x14_29 : 1
        
        int64_t x10_50
        
        x10_50 = x10_49 s> x13_30 ? x10_49 : x13_30
        
        *(*arg2 + x12_21 + 4) = *(x11_29 + ((x9_50 + x14_30 * (x10_50 u>> 2)) << 2) + 4)
        int64_t x11_31 = *arg1
        int64_t x10_55 = arg1[1]
        int64_t x13_32 = x10_55 - x11_31
        int64_t x14_31
        
        x14_31 = x13_32 s>= 0 ? x13_32 : -1
        
        int64_t x10_56 = x11_31 - x10_55
        int64_t x14_32
        
        x14_32 = x14_31 s< 1 ? x14_31 : 1
        
        int64_t x10_57
        
        x10_57 = x10_56 s> x13_32 ? x10_56 : x13_32
        
        *(*arg2 + x12_21 + 8) = *(x11_31 + ((x9_50 + x14_32 * (x10_57 u>> 2)) << 2) + 8)
        int64_t x11_33 = *arg1
        int64_t x10_62 = arg1[1]
        int64_t x13_34 = x10_62 - x11_33
        int64_t x14_33
        
        x14_33 = x13_34 s>= 0 ? x13_34 : -1
        
        int64_t x10_63 = x11_33 - x10_62
        int64_t x14_34
        
        x14_34 = x14_33 s< 1 ? x14_33 : 1
        
        int64_t x10_64
        
        x10_64 = x10_63 s> x13_34 ? x10_63 : x13_34
        
        int32_t x10_68 = *(x11_33 + ((x9_50 + x14_34 * (x10_64 u>> 2)) << 2) + 0xc)
        x9_50 -= 4
        *(*arg2 + x12_21 + 0xc) = x10_68
        x10_47 = *arg2
        x11_36 = arg2[1] - x10_47
    while (i_1 != x11_36 s>> 2)
    
    if (x11_36 != 0x20)
        goto label_cad5bc

return result
