// 函数: _ZN5Botan7Salsa208hsalsa20EPjPKj
// 地址: 0xe0ea80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t const x10 = *arg2
int32_t x8 = arg2[1]
int32_t x11 = arg2[2]
int32_t x15 = arg2[3]
int32_t x5 = arg2[4]
int32_t x13 = arg2[5]
int32_t x9 = arg2[6]
int32_t x12 = arg2[7]
int32_t x14 = arg2[8]
int32_t x6 = arg2[9]
int32_t x2 = arg2[0xa]
int32_t x16 = arg2[0xb]
int32_t x3 = arg2[0xc]
int32_t x4 = arg2[0xd]
int32_t x7 = arg2[0xe]
int32_t x1 = arg2[0xf]
int64_t i_1 = 0xa
int64_t i

do
    int32_t x5_1 = x5 ^ ror.d(x3 + x10, 0x19)
    int32_t x6_1 = x6 ^ ror.d(x13 + x8, 0x19)
    int32_t x7_1 = x7 ^ ror.d(x2 + x9, 0x19)
    int32_t x15_1 = x15 ^ ror.d(x1 + x16, 0x19)
    int32_t x14_1 = x14 ^ ror.d(x5_1 + x10, 0x17)
    int32_t x4_1 = x4 ^ ror.d(x6_1 + x13, 0x17)
    int32_t x11_1 = x11 ^ ror.d(x7_1 + x2, 0x17)
    int32_t x12_1 = x12 ^ ror.d(x15_1 + x1, 0x17)
    int32_t x3_1 = x3 ^ ror.d(x14_1 + x5_1, 0x13)
    int32_t x8_1 = x8 ^ ror.d(x4_1 + x6_1, 0x13)
    int32_t x9_1 = x9 ^ ror.d(x11_1 + x7_1, 0x13)
    int32_t x16_1 = x16 ^ ror.d(x12_1 + x15_1, 0x13)
    int32_t x10_1 = x10 ^ ror.d(x3_1 + x14_1, 0xe)
    int32_t x13_1 = x13 ^ ror.d(x8_1 + x4_1, 0xe)
    int32_t x2_1 = x2 ^ ror.d(x9_1 + x11_1, 0xe)
    int32_t x1_1 = x1 ^ ror.d(x16_1 + x12_1, 0xe)
    x8 = x8_1 ^ ror.d(x10_1 + x15_1, 0x19)
    x9 = x9_1 ^ ror.d(x13_1 + x5_1, 0x19)
    x16 = x16_1 ^ ror.d(x2_1 + x6_1, 0x19)
    x3 = x3_1 ^ ror.d(x1_1 + x7_1, 0x19)
    x11 = x11_1 ^ ror.d(x8 + x10_1, 0x17)
    x12 = x12_1 ^ ror.d(x9 + x13_1, 0x17)
    x14 = x14_1 ^ ror.d(x16 + x2_1, 0x17)
    x4 = x4_1 ^ ror.d(x3 + x1_1, 0x17)
    x15 = x15_1 ^ ror.d(x11 + x8, 0x13)
    x5 = x5_1 ^ ror.d(x12 + x9, 0x13)
    x6 = x6_1 ^ ror.d(x14 + x16, 0x13)
    x7 = x7_1 ^ ror.d(x4 + x3, 0x13)
    x10 = x10_1 ^ ror.d(x15 + x11, 0xe)
    x13 = x13_1 ^ ror.d(x5 + x12, 0xe)
    x2 = x2_1 ^ ror.d(x6 + x14, 0xe)
    i = i_1
    i_1 -= 1
    x1 = x1_1 ^ ror.d(x7 + x4, 0xe)
while (i != 1)
*arg1 = x10
arg1[1] = x13
arg1[2] = x2
arg1[3] = x1
arg1[4] = x9
arg1[5] = x12
arg1[6] = x14
arg1[7] = x6
