// 函数: _ZN5Botan9Whirlpool10compress_nEPKhm
// 地址: 0xe92350
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 == 0)
    return 

uint64_t x19_1 = arg2
uint8_t const* x24_1 = arg1
int64_t x10_1 = 0
uint8_t const* var_128_1 = arg1

do
    int64_t* x22_1 = *(x24_1 + 0x38)
    int64_t x8_1 = *(x24_1 + 0x40)
    size_t x20_1 = x8_1 - x22_1
    
    if (x8_1 != x22_1)
        uint128_t v0_1
        uint128_t v1_1
        uint128_t v2_1
        uint128_t v3_1
        v0_1, v1_1, v2_1, v3_1 = memcpy(x22_1, x19_1, x20_1)
        int64_t x8_2 = x20_1 s>> 3 & 0xfffffffffffffffc
        
        if (x8_2 != 0)
            int64_t x9_1 = 0
            
            if (x8_2 == 4)
            label_e9245c:
                int64_t i_5 = x9_1 - x8_2
                void* x9_4 = &x22_1[x9_1 + 2]
                int64_t i
                
                do
                    uint64_t x12_3 = *(x9_4 - 8)
                    uint64_t x13_4 = *x9_4
                    uint64_t x14_2 = *(x9_4 + 8)
                    i = i_5
                    i_5 += 4
                    uint64_t x11_3 = _byteswap(*(x9_4 - 0x10))
                    uint64_t x12_4 = _byteswap(x12_3)
                    uint64_t x13_5 = _byteswap(x13_4)
                    uint64_t x14_3 = _byteswap(x14_2)
                    *(x9_4 - 0x10) = x11_3
                    *(x9_4 - 8) = x12_4
                    *x9_4 = x13_5
                    *(x9_4 + 8) = x14_3
                    x9_4 += 0x20
                while (i != -4)
            else
                int32_t x11_1 = 0 != (x8_2 - 4) u>> 0x3d ? 1 : 0
                
                if (&x22_1[x8_2 - 1] u< &x22_1[3] || (x11_1 & 1) != 0
                        || &x22_1[x8_2 - 2] u< &x22_1[2] || (x11_1 & 1) != 0
                        || &x22_1[x8_2 - 3] u< &x22_1[1] || (x11_1 & 1) != 0
                        || &x22_1[x8_2 - 4] u< x22_1 || (x11_1 & 1) != 0)
                    goto label_e9245c
                
                int64_t i_7 = (((x8_2 - 4) u>> 2) + 1) & 0x7ffffffffffffffe
                x9_1 = i_7 << 2
                int64_t i_6 = i_7
                int64_t* x13_3 = x22_1
                int64_t i_1
                
                do
                    v0_1.q = *x13_3
                    v1_1.q = x13_3[1]
                    v2_1.q = x13_3[2]
                    v3_1.q = x13_3[3]
                    v0_1:8.q = x13_3[4]
                    v1_1:8.q = x13_3[5]
                    v2_1:8.q = x13_3[6]
                    v3_1:8.q = x13_3[7]
                    i_1 = i_6
                    i_6 -= 2
                    uint128_t v4_1 = vrev64q_s8(v0_1)
                    uint128_t v5_1 = vrev64q_s8(v1_1)
                    uint128_t v6_1 = vrev64q_s8(v2_1)
                    uint128_t v7_1 = vrev64q_s8(v3_1)
                    *x13_3 = v4_1.q
                    x13_3[1] = v5_1.q
                    x13_3[2] = v6_1.q
                    x13_3[3] = v7_1.q
                    x13_3[4] = v4_1:8.q
                    x13_3[5] = v5_1:8.q
                    x13_3[6] = v6_1:8.q
                    x13_3[7] = v7_1:8.q
                    x13_3 = &x13_3[8]
                while (i_1 != 2)
                
                if (((x8_2 - 4) u>> 2) + 1 != i_7)
                    goto label_e9245c
        
        uint64_t i_4 = x20_1 u>> 3 & 3
        
        if (i_4 != 0)
            int64_t* x8_3 = &x22_1[x8_2]
            uint64_t i_2
            
            do
                i_2 = i_4
                i_4 -= 1
                *x8_3 = _byteswap(*x8_3)
                x8_3 = &x8_3[1]
            while (i_2 != 1)
    
    int64_t* x15_2 = *(x24_1 + 0x50)
    int64_t* x8_4 = *(x24_1 + 0x38)
    arg1 = nullptr
    int64_t x2_1 = *x15_2
    int64_t x3_1 = x15_2[1]
    int64_t x5_1 = x15_2[2]
    int64_t x6_1 = x15_2[3]
    int64_t x4_1 = x15_2[4]
    int64_t x22_2 = x15_2[5]
    int64_t x7_1 = x15_2[6]
    int64_t x1_1 = x15_2[7]
    int64_t x10_7 = *x8_4 ^ x2_1
    int64_t x17_2 = x8_4[2] ^ x5_1
    int64_t x24_2 = x8_4[1] ^ x3_1
    int64_t x13_7 = x8_4[3] ^ x6_1
    int64_t x12_5 = x8_4[4] ^ x4_1
    int64_t var_70_1 = x8_4[5] ^ x22_2
    int64_t x16_3 = x10_7
    int64_t var_78_1 = x8_4[6] ^ x7_1
    int64_t var_68_1 = x8_4[7] ^ x1_1
    int64_t x8_29
    int64_t x11_28
    int64_t x21_25
    int64_t x23_21
    int64_t x25_23
    int64_t x26_22
    int64_t lr_21
    void* i_3
    
    do
        int64_t x21_7 = *(Botan::Whirlpool::C1 + ((x2_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x3_1 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x1_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x7_1 u>> 0x20 & 0xff) << 3))
        int64_t x25_6 = *(Botan::Whirlpool::C1 + ((x5_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x6_1 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x3_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x2_1 u>> 0x20 & 0xff) << 3))
        int64_t x11_12 = *(Botan::Whirlpool::C1 + ((x4_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x22_2 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x6_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x5_1 u>> 0x20 & 0xff) << 3))
        int64_t x8_12 = *(Botan::Whirlpool::C1 + ((x1_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x2_1 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x7_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x22_2 u>> 0x20 & 0xff) << 3))
        int64_t x23_10 = *(Botan::Whirlpool::C1 + ((x7_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x1_1 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x22_2 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x4_1 u>> 0x20 & 0xff) << 3))
        int64_t x27_6 = *(Botan::Whirlpool::C1 + ((x3_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x5_1 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x2_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x1_1 u>> 0x20 & 0xff) << 3))
        int64_t x19_6 = *(Botan::Whirlpool::C1 + ((x6_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x4_1 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x5_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x3_1 u>> 0x20 & 0xff) << 3))
        int64_t x26_7 = *(Botan::Whirlpool::C1 + ((x22_2 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C0 + (x7_1 u>> 0x35 & 0x7f8))
            ^ *(Botan::Whirlpool::C2 + ((x4_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x6_1 u>> 0x20 & 0xff) << 3))
        int64_t lr_19 = x8_12 ^ *(Botan::Whirlpool::C4 + ((x4_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x6_1 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x5_1 u>> 8 & 0xff) << 3))
        int64_t x27_9 = x27_6 ^ *(Botan::Whirlpool::C4 + ((x7_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x22_2 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x4_1 u>> 8 & 0xff) << 3))
        int64_t x19_9 = x19_6 ^ *(Botan::Whirlpool::C4 + ((x2_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x1_1 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x7_1 u>> 8 & 0xff) << 3))
        int64_t x0_1 = x11_12 ^ *(Botan::Whirlpool::C4 + ((x3_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x2_1 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x1_1 u>> 8 & 0xff) << 3))
        int64_t x26_10 = x26_7 ^ *(Botan::Whirlpool::C4 + ((x5_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x3_1 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x2_1 u>> 8 & 0xff) << 3))
        int64_t fp_41 = x21_7 ^ *(Botan::Whirlpool::C4 + ((x22_2 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x4_1 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x6_1 u>> 8 & 0xff) << 3))
        int64_t x23_13 = x23_10 ^ *(Botan::Whirlpool::C4 + ((x6_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x5_1 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x3_1 u>> 8 & 0xff) << 3))
        int64_t x25_9 = x25_6 ^ *(Botan::Whirlpool::C4 + ((x1_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x7_1 u>> 0x10 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C6 + ((x22_2 u>> 8 & 0xff) << 3))
        int64_t x6_3 = fp_41 ^ *(Botan::Whirlpool::C7 + ((x5_1 & 0xff) << 3))
        int64_t fp_42 = x25_9 ^ *(Botan::Whirlpool::C7 + ((x4_1 & 0xff) << 3))
        int64_t x7_4 = x0_1 ^ *(Botan::Whirlpool::C7 + ((x7_1 & 0xff) << 3))
        int64_t x5_5 = x27_9 ^ *(Botan::Whirlpool::C7 + ((x6_1 & 0xff) << 3))
        int64_t x10_10 = x23_13 ^ *(Botan::Whirlpool::C7 + ((x2_1 & 0xff) << 3))
        int64_t x3_4 = x19_9 ^ *(Botan::Whirlpool::C7 + ((x22_2 & 0xff) << 3))
        int64_t x10_11 =
            lr_19 ^ *(Botan::Whirlpool::C7 + ((x3_1 & 0xff) << 3)) ^ *(&data_842ae8 + arg1)
        int64_t var_f0_1 = x3_4
        x7_1 = x26_10 ^ *(Botan::Whirlpool::C7 + ((x1_1 & 0xff) << 3))
        int64_t x23_19 = *(Botan::Whirlpool::C0 + (x24_2 u>> 0x35 & 0x7f8)) ^ x6_3
            ^ *(Botan::Whirlpool::C1 + ((x16_3 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((var_68_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((var_78_1 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((var_70_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x12_5 u>> 0x10 & 0xff) << 3))
        int64_t x25_18 = *(Botan::Whirlpool::C0 + (x13_7 u>> 0x35 & 0x7f8)) ^ fp_42
            ^ *(Botan::Whirlpool::C1 + ((x17_2 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((x24_2 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x16_3 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((var_68_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((var_78_1 u>> 0x10 & 0xff) << 3))
        int64_t x19_18 = *(Botan::Whirlpool::C0 + (var_70_1 u>> 0x35 & 0x7f8)) ^ x7_4
            ^ *(Botan::Whirlpool::C1 + ((x12_5 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((x13_7 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x17_2 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((x24_2 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x16_3 u>> 0x10 & 0xff) << 3))
        int64_t x26_21 = *(Botan::Whirlpool::C0 + (var_68_1 u>> 0x35 & 0x7f8)) ^ x10_10
            ^ *(Botan::Whirlpool::C1 + ((var_78_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((var_70_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x12_5 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((x13_7 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x17_2 u>> 0x10 & 0xff) << 3))
        int64_t x11_26 = *(Botan::Whirlpool::C0 + (x17_2 u>> 0x35 & 0x7f8)) ^ x5_5
            ^ *(Botan::Whirlpool::C1 + ((x24_2 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((x16_3 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((var_68_1 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((var_78_1 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((var_70_1 u>> 0x10 & 0xff) << 3))
        int64_t x9_9 = *(Botan::Whirlpool::C0 + (x16_3 u>> 0x35 & 0x7f8)) ^ x10_11
            ^ *(Botan::Whirlpool::C1 + ((var_68_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((var_78_1 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((var_70_1 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((x12_5 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x13_7 u>> 0x10 & 0xff) << 3))
        int64_t x21_23 = *(Botan::Whirlpool::C0 + (x12_5 u>> 0x35 & 0x7f8)) ^ x3_4
            ^ *(Botan::Whirlpool::C1 + ((x13_7 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((x17_2 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x24_2 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((x16_3 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((var_68_1 u>> 0x10 & 0xff) << 3))
        int64_t x20_13 = *(Botan::Whirlpool::C0 + (var_78_1 u>> 0x35 & 0x7f8)) ^ x7_1
            ^ *(Botan::Whirlpool::C1 + ((var_70_1 u>> 0x30 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C2 + ((x12_5 u>> 0x28 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C3 + ((x13_7 u>> 0x20 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C4 + ((x17_2 u>> 0x18 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C5 + ((x24_2 u>> 0x10 & 0xff) << 3))
        x25_23 = x23_19 ^ *(Botan::Whirlpool::C6 + ((x13_7 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + ((x17_2 & 0xff) << 3))
        x1_1 = x10_10
        x2_1 = x10_11
        x3_1 = x6_3
        x6_1 = fp_42
        x5_1 = x5_5
        x4_1 = x3_4
        x22_2 = x7_4
        i_3 = &arg1[8]
        x26_22 = x11_26 ^ *(Botan::Whirlpool::C6 + ((x12_5 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + (zx.q(x13_7.b) << 3))
        x23_21 = x25_18 ^ *(Botan::Whirlpool::C6 + ((var_70_1 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + ((x12_5 & 0xff) << 3))
        x21_25 = x21_23 ^ *(Botan::Whirlpool::C6 + ((var_78_1 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + ((var_70_1 & 0xff) << 3))
        lr_21 = x9_9 ^ *(Botan::Whirlpool::C6 + ((x17_2 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + ((x24_2 & 0xff) << 3))
        x11_28 = x19_18 ^ *(Botan::Whirlpool::C6 + ((var_68_1 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + ((var_78_1 & 0xff) << 3))
        x8_29 = x20_13 ^ *(Botan::Whirlpool::C6 + ((x16_3 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + ((var_68_1 & 0xff) << 3))
        arg1 = i_3
        int64_t x9_11 = x26_21 ^ *(Botan::Whirlpool::C6 + ((x24_2 u>> 8 & 0xff) << 3))
            ^ *(Botan::Whirlpool::C7 + (zx.q(x16_3.b) << 3))
        x12_5 = x21_25
        x13_7 = x23_21
        x17_2 = x26_22
        x24_2 = x25_23
        x16_3 = lr_21
        var_70_1 = x11_28
        var_68_1 = x9_11
        var_78_1 = x8_29
    while (i_3 != 0x50)
    x24_1 = var_128_1
    *x15_2 = x10_7 ^ lr_21
    void* x12_9 = *(x24_1 + 0x50)
    *(x12_9 + 8) ^= *(*(x24_1 + 0x38) + 8) ^ x25_23
    void* x12_10 = *(x24_1 + 0x50)
    *(x12_10 + 0x10) ^= *(*(x24_1 + 0x38) + 0x10) ^ x26_22
    void* x12_11 = *(x24_1 + 0x50)
    *(x12_11 + 0x18) ^= *(*(x24_1 + 0x38) + 0x18) ^ x23_21
    void* x12_12 = *(x24_1 + 0x50)
    *(x12_12 + 0x20) ^= *(*(x24_1 + 0x38) + 0x20) ^ x21_25
    void* x12_13 = *(x24_1 + 0x50)
    *(x12_13 + 0x28) ^= *(*(x24_1 + 0x38) + 0x28) ^ x11_28
    void* x11_29 = *(x24_1 + 0x50)
    *(x11_29 + 0x30) ^= *(*(x24_1 + 0x38) + 0x30) ^ x8_29
    void* x9_36 = *(x24_1 + 0x50)
    *(x9_36 + 0x38) ^= *(*(x24_1 + 0x38) + 0x38) ^ var_68_1
    x10_1 += 1
    x19_1 += *(x24_1 + 0x20) - *(x24_1 + 0x18)
while (x10_1 != entry_x2)
