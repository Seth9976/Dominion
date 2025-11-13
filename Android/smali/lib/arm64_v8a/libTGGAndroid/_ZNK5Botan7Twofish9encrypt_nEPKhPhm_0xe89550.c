// 函数: _ZNK5Botan7Twofish9encrypt_nEPKhPhm
// 地址: 0xe89550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)

if (x8 == *(arg1 + 0x10))
    uint8_t* x0_11
    uint8_t* x1_12
    uint64_t x2
    x0_11, x1_12, x2 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Twofish::decrypt_n(x0_11, x1_12, x2) __tailcall

int64_t entry_x3

if (entry_x3 u>= 2)
    while (true)
        int32_t* x10_1 = *(arg1 + 0x20)
        int32_t x4_1 = *x10_1
        int32_t x5_1 = x10_1[1]
        int32_t x6_1 = x10_1[2]
        int32_t x7_1 = x10_1[3]
        int64_t i = 0
        int32_t x14_1 = x4_1 ^ *arg2
        int32_t x13_2 = x4_1 ^ *(arg2 + 0x10)
        int32_t x11_2 = x5_1 ^ *(arg2 + 4)
        int32_t x12_2 = x5_1 ^ *(arg2 + 0x14)
        int32_t x5_2 = x6_1 ^ *(arg2 + 8)
        int32_t x17_2 = x6_1 ^ *(arg2 + 0x18)
        int32_t x16_2 = x7_1 ^ *(arg2 + 0xc)
        int32_t x15_2 = x7_1 ^ *(arg2 + 0x1c)
        
        do
            int32_t x7_5 = *(x8 + ((0x100 | zx.q((x14_1 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x14_1) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x14_1 & 0xff0000) u>> 0x10)) << 2))
            int32_t x19_6 = *(x8 + ((0x100 | (zx.q(x11_2) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x11_2 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x11_2 & 0xff00) u>> 8)) << 2))
            int32_t x20_5 = *(x8 + ((0x100 | zx.q((x13_2 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x13_2) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x13_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x21_6 = *(x8 + ((0x100 | (zx.q(x12_2) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x12_2 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x12_2 & 0xff00) u>> 8)) << 2))
            void* x6_2 = &x10_1[0xb] + i
            int32_t x19_7 = x19_6 ^ *(x8 + ((0x300 | zx.q((x11_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x22_8 = *(x6_2 - 0xc)
            int32_t x23_6 = *(x6_2 - 8)
            int32_t x21_7 = x21_6 ^ *(x8 + ((0x300 | zx.q((x12_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x7_7 =
                x19_7 + (x7_5 ^ *(x8 + ((0x300 | zx.q((x14_1 & 0xff000000) u>> 0x18)) << 2)))
            int32_t x20_7 =
                x21_7 + (x20_5 ^ *(x8 + ((0x300 | zx.q((x13_2 & 0xff000000) u>> 0x18)) << 2)))
            x16_2 = (x19_7 + x23_6 + x7_7) ^ ror.d(x16_2, 0x1f)
            x15_2 = (x21_7 + x23_6 + x20_7) ^ ror.d(x15_2, 0x1f)
            x5_2 = ror.d((x7_7 + x22_8) ^ x5_2, 1)
            x17_2 = ror.d((x20_7 + x22_8) ^ x17_2, 1)
            int32_t x20_12 = *(x8 + ((0x100 | (zx.q(x16_2) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x16_2 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x16_2 & 0xff00) u>> 8)) << 2))
            int32_t x19_13 = *(x8 + ((0x100 | (zx.q(x15_2) & 0xff)) << 2))
                ^ *(x8 + (zx.q(x15_2 u>> 0x18) << 2))
                ^ *(x8 + ((0x200 | zx.q((x15_2 & 0xff00) u>> 8)) << 2))
            int32_t x21_13 = *(x8 + ((0x100 | zx.q((x5_2 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x5_2) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x5_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x20_13 = x20_12 ^ *(x8 + ((0x300 | zx.q((x16_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x7_12 = *(x8 + ((0x100 | zx.q((x17_2 & 0xff00) u>> 8)) << 2))
                ^ *(x8 + ((zx.q(x17_2) & 0xff) << 2))
                ^ *(x8 + ((0x200 | zx.q((x17_2 & 0xff0000) u>> 0x10)) << 2))
            uint64_t x6_3 = zx.q(*(x6_2 - 4))
            int32_t x22_17 = *x6_3
            int32_t x19_14 = x19_13 ^ *(x8 + ((0x300 | zx.q((x15_2 & 0xff0000) u>> 0x10)) << 2))
            int32_t x21_15 =
                x20_13 + (x21_13 ^ *(x8 + ((0x300 | zx.q((x5_2 & 0xff000000) u>> 0x18)) << 2)))
            int32_t x7_14 =
                x19_14 + (x7_12 ^ *(x8 + ((0x300 | zx.q((x17_2 & 0xff000000) u>> 0x18)) << 2)))
            i += 0x10
            x11_2 = (x20_13 + x22_17 + x21_15) ^ ror.d(x11_2, 0x1f)
            x14_1 = ror.d((x21_15 + x6_3.d) ^ x14_1, 1)
            x13_2 = ror.d((x7_14 + x6_3.d) ^ x13_2, 1)
            x12_2 = (x19_14 + x22_17 + x7_14) ^ ror.d(x12_2, 0x1f)
        while (i != 0x80)
        
        int32_t x8_1 = x10_1[4]
        int32_t x9_1 = x10_1[5]
        entry_x3 -= 2
        arg2 = &arg2[0x20]
        int32_t x15_3 = x10_1[6]
        int32_t x10_2 = x10_1[7]
        *arg3 = x8_1 ^ x5_2
        *(arg3 + 4) = x9_1 ^ x16_2
        *(arg3 + 8) = x15_3 ^ x14_1
        *(arg3 + 0xc) = x10_2 ^ x11_2
        *(arg3 + 0x10) = x8_1 ^ x17_2
        *(arg3 + 0x14) = x9_1 ^ x15_2
        *(arg3 + 0x18) = x15_3 ^ x13_2
        *(arg3 + 0x1c) = x10_2 ^ x12_2
        arg3 += 0x20
        
        if (entry_x3 u< 2)
            break
        
        x8 = *(arg1 + 8)

if (entry_x3 == 0)
    return 

int32_t* x8_3 = *(arg1 + 0x20)
int64_t i_1 = 0
int32_t x9_4 = *x8_3 ^ *arg2
int32_t x11_5 = x8_3[1] ^ *(arg2 + 4)
int64_t x14_5 = *(arg1 + 8)
int32_t x13_6 = x8_3[2] ^ *(arg2 + 8)
int32_t x12_5 = x8_3[3] ^ *(arg2 + 0xc)

do
    int32_t x17_7 = *(x14_5 + ((0x100 | zx.q((x9_4 & 0xff00) u>> 8)) << 2))
        ^ *(x14_5 + ((zx.q(x9_4) & 0xff) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x9_4 & 0xff0000) u>> 0x10)) << 2))
    void* x16_5 = &x8_3[0xb] + i_1
    int32_t x3_3 = *(x14_5 + ((0x100 | (zx.q(x11_5) & 0xff)) << 2))
        ^ *(x14_5 + (zx.q(x11_5 u>> 0x18) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x11_5 & 0xff00) u>> 8)) << 2))
    int32_t x1_4 = x3_3 ^ *(x14_5 + ((0x300 | zx.q((x11_5 & 0xff0000) u>> 0x10)) << 2))
    int32_t x17_9 = x1_4 + (x17_7 ^ *(x14_5 + ((0x300 | zx.q((x9_4 & 0xff000000) u>> 0x18)) << 2)))
    x12_5 = (x1_4 + *(x16_5 - 8) + x17_9) ^ ror.d(x12_5, 0x1f)
    x13_6 = ror.d((x17_9 + *(x16_5 - 0xc)) ^ x13_6, 1)
    int32_t x17_14 = *(x14_5 + ((0x100 | (zx.q(x12_5) & 0xff)) << 2))
        ^ *(x14_5 + (zx.q(x12_5 u>> 0x18) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x12_5 & 0xff00) u>> 8)) << 2))
    int32_t x0_9 = *(x14_5 + ((0x100 | zx.q((x13_6 & 0xff00) u>> 8)) << 2))
        ^ *(x14_5 + ((zx.q(x13_6) & 0xff) << 2))
        ^ *(x14_5 + ((0x200 | zx.q((x13_6 & 0xff0000) u>> 0x10)) << 2))
    int32_t x17_15 = x17_14 ^ *(x14_5 + ((0x300 | zx.q((x12_5 & 0xff0000) u>> 0x10)) << 2))
    i_1 += 0x10
    int32_t x17_16 =
        x17_15 + (x0_9 ^ *(x14_5 + ((0x300 | zx.q((x13_6 & 0xff000000) u>> 0x18)) << 2)))
    x9_4 = ror.d((x17_16 + *(x16_5 - 4)) ^ x9_4, 1)
    x11_5 = (x17_15 + *x16_5 + x17_16) ^ ror.d(x11_5, 0x1f)
while (i_1 != 0x80)

int32_t x12_6 = x8_3[5] ^ x12_5
int32_t x9_6 = x8_3[6] ^ x9_4
int32_t x8_5 = x8_3[7] ^ x11_5
*arg3 = x8_3[4] ^ x13_6
*(arg3 + 4) = x12_6
*(arg3 + 8) = x9_6
*(arg3 + 0xc) = x8_5
