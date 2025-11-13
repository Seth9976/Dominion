// 函数: _ZNK5Botan7Twofish9decrypt_nEPKhPhm
// 地址: 0xe899f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)

if (x8 == *(arg1 + 0x10))
    uint8_t* x0_11
    uint64_t x1_8
    x0_11, x1_8 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Twofish::key_schedule(x0_11, x1_8) __tailcall

int64_t entry_x3

if (entry_x3 u>= 2)
    while (true)
        int32_t* x10_1 = *(arg1 + 0x20)
        int32_t x4_1 = x10_1[4]
        int32_t x5_1 = x10_1[5]
        int32_t x6_1 = x10_1[6]
        int32_t x7_1 = x10_1[7]
        int64_t i = 0
        int32_t x12_1 = x4_1 ^ *arg2
        int32_t x11_2 = x4_1 ^ *(arg2 + 0x10)
        int32_t x14_2 = x5_1 ^ *(arg2 + 4)
        int32_t x13_2 = x5_1 ^ *(arg2 + 0x14)
        int32_t x15_2 = x6_1 ^ *(arg2 + 8)
        int32_t x17_2 = x7_1 ^ *(arg2 + 0xc)
        int32_t x16_2 = x6_1 ^ *(arg2 + 0x18)
        int32_t x4_3 = x7_1 ^ *(arg2 + 0x1c)
        
        do
            int32_t x6_5 = *(x8 + ((0x100 | zx.q((x12_1 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x12_1) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x12_1 & 0xff0000) u>> 0x10)) << 2))
            int32_t x19_5 = *(x8 + ((0x100 | zx.q((x11_2 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x11_2) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x11_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x7_6 = *(x8 + ((0x100 | (zx.q(x14_2) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x14_2 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x14_2 & 0xff00) u>> 8)) << 2))
            void* x5_3 = x10_1 + i
            int32_t x7_7 = x7_6 ^ *(x8 + ((0x300 | zx.q((x14_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x23_6 = *(x5_3 + 0x98)
            int32_t x24_7 = *(x5_3 + 0x9c)
            int32_t x21_6 = *(x8 + ((0x100 | (zx.q(x13_2) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x13_2 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x13_2 & 0xff00) u>> 8)) << 2))
            int32_t x6_7 =
                x7_7 + (x6_5 ^ *(x8 + ((0x300 | zx.q((x12_1 & 0xff000000) u>> 0x18)) << 2)))
            x15_2 = (x6_7 + x23_6) ^ ror.d(x15_2, 0x1f)
            int32_t x21_7 = x21_6 ^ *(x8 + ((0x300 | zx.q((x13_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x19_7 =
                x21_7 + (x19_5 ^ *(x8 + ((0x300 | zx.q((x11_2 & 0xff000000) u>> 0x18)) << 2)))
            x16_2 = (x19_7 + x23_6) ^ ror.d(x16_2, 0x1f)
            x17_2 = ror.d((x7_7 + x24_7 + x6_7) ^ x17_2, 1)
            int32_t x7_13 = *(x8 + ((0x100 | zx.q((x15_2 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x15_2) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x15_2 & 0xff0000) u>> 0x10)) << 2))
            x4_3 = ror.d((x21_7 + x24_7 + x19_7) ^ x4_3, 1)
            int32_t x19_12 = *(x8 + ((0x100 | zx.q((x16_2 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x16_2) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x16_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x6_11 = *(x8 + ((0x100 | (zx.q(x17_2) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x17_2 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x17_2 & 0xff00) u>> 8)) << 2))
            int32_t x21_14 = *(x8 + ((0x100 | (zx.q(x4_3) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x4_3 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x4_3 & 0xff00) u>> 8)) << 2))
            int32_t x20_12 = x21_14 ^ *(x8 + ((0x300 | zx.q((x4_3 & 0xff0000) u>> 0x10)) << 2))
            int32_t x21_15 = *(x5_3 + 0x90)
            int32_t x5_4 = *(x5_3 + 0x94)
            int32_t x6_12 = x6_11 ^ *(x8 + ((0x300 | zx.q((x17_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x7_15 =
                x6_12 + (x7_13 ^ *(x8 + ((0x300 | zx.q((x15_2 & 0xff000000) u>> 0x18)) << 2)))
            int32_t x19_14 =
                x20_12 + (x19_12 ^ *(x8 + ((0x300 | zx.q((x16_2 & 0xff000000) u>> 0x18)) << 2)))
            i -= 0x10
            x12_1 = (x7_15 + x21_15) ^ ror.d(x12_1, 0x1f)
            x11_2 = (x19_14 + x21_15) ^ ror.d(x11_2, 0x1f)
            x14_2 = ror.d((x6_12 + x5_4 + x7_15) ^ x14_2, 1)
            x13_2 = ror.d((x20_12 + x5_4 + x19_14) ^ x13_2, 1)
        while (i != -0x80)
        
        int32_t x8_1 = *x10_1
        int32_t x9_1 = x10_1[1]
        entry_x3 -= 2
        arg2 = &arg2[0x20]
        int32_t x17_4 = x10_1[2]
        int32_t x10_2 = x10_1[3]
        *arg3 = x8_1 ^ x15_2
        *(arg3 + 4) = x9_1 ^ x17_2
        *(arg3 + 0x10) = x8_1 ^ x16_2
        *(arg3 + 0x14) = x9_1 ^ x4_3
        *(arg3 + 8) = x17_4 ^ x12_1
        *(arg3 + 0xc) = x10_2 ^ x14_2
        *(arg3 + 0x18) = x17_4 ^ x11_2
        *(arg3 + 0x1c) = x10_2 ^ x13_2
        arg3 += 0x20
        
        if (entry_x3 u< 2)
            break
        
        x8 = *(arg1 + 8)

if (entry_x3 == 0)
    return 

int32_t* x8_3 = *(arg1 + 0x20)
int64_t x14_5 = *(arg1 + 8)
int64_t i_1 = 0
int32_t x10_5 = x8_3[4] ^ *arg2
int32_t x11_5 = x8_3[5] ^ *(arg2 + 4)
int32_t x12_4 = x8_3[6] ^ *(arg2 + 8)
int32_t x13_5 = x8_3[7] ^ *(arg2 + 0xc)

do
    int32_t x16_8 = *(x14_5 + ((0x100 | zx.q((x10_5 & 0xff00) u>> 8)) << 2))
        ^ *(x14_5 + ((zx.q(x10_5) & 0xff) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x10_5 & 0xff0000) u>> 0x10)) << 2))
    void* x15_5 = x8_3 + i_1
    int32_t x1_3 = *(x14_5 + ((0x100 | (zx.q(x11_5) & 0xff)) << 2))
        ^ *(x14_5 + (zx.q(x11_5 u>> 0x18) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x11_5 & 0xff00) u>> 8)) << 2))
    int32_t x0_5 = x1_3 ^ *(x14_5 + ((0x300 | zx.q((x11_5 & 0xff0000) u>> 0x10)) << 2))
    int32_t x16_10 =
        x0_5 + (x16_8 ^ *(x14_5 + ((0x300 | zx.q((x10_5 & 0xff000000) u>> 0x18)) << 2)))
    x12_4 = (x16_10 + *(x15_5 + 0x98)) ^ ror.d(x12_4, 0x1f)
    x13_5 = ror.d((x0_5 + *(x15_5 + 0x9c) + x16_10) ^ x13_5, 1)
    int32_t x16_15 = *(x14_5 + ((0x100 | zx.q((x12_4 & 0xff00) u>> 8)) << 2))
        ^ *(x14_5 + ((zx.q(x12_4) & 0xff) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x12_4 & 0xff0000) u>> 0x10)) << 2))
    int32_t x0_10 = *(x14_5 + ((0x100 | (zx.q(x13_5) & 0xff)) << 2))
        ^ *(x14_5 + (zx.q(x13_5 u>> 0x18) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x13_5 & 0xff00) u>> 8)) << 2))
    arg1 = zx.q(x0_10) ^ zx.q(*(x14_5 + ((0x300 | zx.q((x13_5 & 0xff0000) u>> 0x10)) << 2)))
    int32_t x16_17 =
        arg1.d + (x16_15 ^ *(x14_5 + ((0x300 | zx.q((x12_4 & 0xff000000) u>> 0x18)) << 2)))
    i_1 -= 0x10
    x10_5 = (x16_17 + *(x15_5 + 0x90)) ^ ror.d(x10_5, 0x1f)
    x11_5 = ror.d((arg1.d + *(x15_5 + 0x94) + x16_17) ^ x11_5, 1)
while (i_1 != -0x80)

int32_t x12_5 = x8_3[1] ^ x13_5
int32_t x10_6 = x8_3[2] ^ x10_5
int32_t x8_5 = x8_3[3] ^ x11_5
*arg3 = *x8_3 ^ x12_4
*(arg3 + 4) = x12_5
*(arg3 + 8) = x10_6
*(arg3 + 0xc) = x8_5
