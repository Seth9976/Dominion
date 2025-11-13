// 函数: _ZN5Botan7Salsa2010salsa_coreEPhPKjm
// 地址: 0xe0ebc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg3.d & 1) != 0)
    uint8_t* x0
    uint8_t* x1
    uint64_t x2
    x0, x1, x2 = Botan::assertion_failure("rounds % 2 == 0", &data_793a18, "salsa_core", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x10b23)
    return Botan::Salsa20::cipher(x0, x1, x2) __tailcall

uint32_t const x10 = *arg2
int32_t x15 = arg2[1]
int32_t x4 = arg2[2]
int32_t x5 = arg2[3]
int32_t x20 = arg2[4]
int32_t x3 = arg2[5]
int32_t x12 = arg2[6]
int32_t x16 = arg2[7]
int32_t x17 = arg2[8]
int32_t x19 = arg2[9]
int32_t x14 = arg2[0xa]
int32_t x8 = arg2[0xb]
int32_t x9 = arg2[0xc]
int32_t x13 = arg2[0xd]
int32_t x7 = arg2[0xe]
int32_t x11 = arg2[0xf]
uint32_t const x6 = x10
uint64_t i_1 = arg3 u>> 1

if (i_1 != 0)
    uint64_t i
    
    do
        int32_t x20_1 = x20 ^ ror.d(x9 + x6, 0x19)
        int32_t x19_1 = x19 ^ ror.d(x3 + x15, 0x19)
        int32_t x7_1 = x7 ^ ror.d(x14 + x12, 0x19)
        int32_t x5_1 = x5 ^ ror.d(x11 + x8, 0x19)
        int32_t x17_1 = x17 ^ ror.d(x20_1 + x6, 0x17)
        int32_t x13_1 = x13 ^ ror.d(x19_1 + x3, 0x17)
        int32_t x4_1 = x4 ^ ror.d(x7_1 + x14, 0x17)
        int32_t x16_1 = x16 ^ ror.d(x5_1 + x11, 0x17)
        int32_t x9_1 = x9 ^ ror.d(x17_1 + x20_1, 0x13)
        int32_t x15_1 = x15 ^ ror.d(x13_1 + x19_1, 0x13)
        int32_t x12_1 = x12 ^ ror.d(x4_1 + x7_1, 0x13)
        int32_t x8_1 = x8 ^ ror.d(x16_1 + x5_1, 0x13)
        int32_t x6_1 = x6 ^ ror.d(x9_1 + x17_1, 0xe)
        int32_t x3_1 = x3 ^ ror.d(x15_1 + x13_1, 0xe)
        int32_t x14_1 = x14 ^ ror.d(x12_1 + x4_1, 0xe)
        int32_t x11_1 = x11 ^ ror.d(x8_1 + x16_1, 0xe)
        x15 = x15_1 ^ ror.d(x6_1 + x5_1, 0x19)
        x12 = x12_1 ^ ror.d(x3_1 + x20_1, 0x19)
        x8 = x8_1 ^ ror.d(x14_1 + x19_1, 0x19)
        x9 = x9_1 ^ ror.d(x11_1 + x7_1, 0x19)
        x4 = x4_1 ^ ror.d(x15 + x6_1, 0x17)
        x16 = x16_1 ^ ror.d(x12 + x3_1, 0x17)
        x17 = x17_1 ^ ror.d(x8 + x14_1, 0x17)
        x13 = x13_1 ^ ror.d(x9 + x11_1, 0x17)
        x5 = x5_1 ^ ror.d(x4 + x15, 0x13)
        x20 = x20_1 ^ ror.d(x16 + x12, 0x13)
        x19 = x19_1 ^ ror.d(x17 + x8, 0x13)
        x7 = x7_1 ^ ror.d(x13 + x9, 0x13)
        x6 = x6_1 ^ ror.d(x5 + x4, 0xe)
        x3 = x3_1 ^ ror.d(x20 + x16, 0xe)
        x14 = x14_1 ^ ror.d(x19 + x17, 0xe)
        i = i_1
        i_1 -= 1
        x11 = x11_1 ^ ror.d(x7 + x13, 0xe)
    while (i != 1)

*arg1 = x6 + x10
*(arg1 + 4) = arg2[1] + x15
*(arg1 + 8) = arg2[2] + x4
*(arg1 + 0xc) = arg2[3] + x5
*(arg1 + 0x10) = arg2[4] + x20
*(arg1 + 0x14) = arg2[5] + x3
*(arg1 + 0x18) = arg2[6] + x12
*(arg1 + 0x1c) = arg2[7] + x16
*(arg1 + 0x20) = arg2[8] + x17
*(arg1 + 0x24) = arg2[9] + x19
*(arg1 + 0x28) = arg2[0xa] + x14
*(arg1 + 0x2c) = arg2[0xb] + x8
*(arg1 + 0x30) = arg2[0xc] + x9
*(arg1 + 0x34) = arg2[0xd] + x13
*(arg1 + 0x38) = arg2[0xe] + x7
*(arg1 + 0x3c) = arg2[0xf] + x11
