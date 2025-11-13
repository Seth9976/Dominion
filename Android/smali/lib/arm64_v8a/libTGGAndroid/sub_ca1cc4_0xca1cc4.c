// 函数: sub_ca1cc4
// 地址: 0xca1cc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_80 = arg8.q
int64_t var_78 = arg7.q
int64_t var_70 = arg6.q
int64_t var_68 = arg5.q
void* x9 = *arg4
int64_t x8_2 = (arg4[1] - x9) s>> 2

if (x8_2 u> 0x3c || (1 << x8_2 & 0x1010100000000000) == 0)
    uint8_t* x0_27
    uint8_t* x1_32
    uint64_t x2_10
    x0_27, x1_32, x2_10 = Botan::assertion_failure(
        "EK.size() == 44 || EK.size() == 52 || EK.size() == 60", "Key was set", "aes_encrypt_n", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x21e4)
    return Botan::AES_128::decrypt_n(x0_27, x1_32, x2_10) __tailcall

uint64_t x10_2 = (x8_2 - 4) u>> 2
int64_t x20 = arg3
void* x21 = arg2
void* x22 = arg1
int128_t v0
v0.q = 0
v0:8.q = 0
int64_t i_15 = 0
int128_t var_220
__builtin_memset(&var_220, 0, 0x1a0)
int128_t var_210
int32_t result

if (x10_2 - 1 u< 4)
label_ca1fe0:
    int64_t i_8 = i_15 - x10_2 + 1
    void* x10_4 = x9 + (i_15 << 4) + 0x1c
    void* x11_3 = &(&var_220)[i_15 * 2 + 1]
    int64_t i
    
    do
        int32_t x12_6 = *(x10_4 - 0xc)
        int32_t x13_3 = *(x10_4 - 8)
        int32_t x14_2 = *(x10_4 - 4)
        int32_t x15_3 = *x10_4
        i = i_8
        i_8 += 1
        x10_4 += 0x10
        int32_t x16_4 = (x12_6 ^ x13_3 u>> 1) & 0x55555555
        int32_t x17_3 = (x14_2 ^ x15_3 u>> 1) & 0x55555555
        int32_t x13_4 = x13_3 ^ x16_4 << 1
        int32_t x12_7 = x16_4 ^ x12_6
        int32_t x15_4 = x15_3 ^ x17_3 << 1
        int32_t x14_3 = x17_3 ^ x14_2
        int32_t x16_6 = (x12_7 ^ x14_3 u>> 2) & 0x33333333
        int32_t x17_5 = (x13_4 ^ x15_4 u>> 2) & 0x33333333
        int32_t x14_4 = x14_3 ^ x16_6 << 2
        int32_t x12_8 = x16_6 ^ x12_7
        int32_t x15_5 = x15_4 ^ x17_5 << 2
        int32_t x13_5 = x17_5 ^ x13_4
        int32_t x16_8 = (x12_8 ^ x12_8 u>> 4) & 0xf0f0f0f
        int32_t x17_7 = (x13_5 ^ x13_5 u>> 4) & 0xf0f0f0f
        int32_t x0_1 = (x14_4 ^ x14_4 u>> 4) & 0xf0f0f0f
        int32_t x1_2 = (x15_5 ^ x15_5 u>> 4) & 0xf0f0f0f
        result = x15_5 ^ x1_2 << 4
        *x11_3 = x12_8 ^ x16_8 << 4
        *(x11_3 + 4) = x13_5 ^ x17_7 << 4
        *(x11_3 - 0x10) = x16_8 ^ x12_8
        *(x11_3 - 0xc) = x17_7 ^ x13_5
        *(x11_3 + 8) = x14_4 ^ x0_1 << 4
        *(x11_3 + 0xc) = result
        *(x11_3 - 8) = x0_1 ^ x14_4
        *(x11_3 - 4) = x1_2 ^ x15_5
        x11_3 += 0x20
    while (i u< -1)
else
    int64_t x2 = (x10_2 - 2) << 5
    int64_t x15_1 = &var_220 | 0xc
    int32_t x12_2 = 0 != (x10_2 - 2) u>> 0x3b ? 1 : 0
    int64_t x16_1 = &var_220 | 8
    int64_t x3 = &var_220 | 4
    result = x16_1 + x2 u< x16_1 ? 1 : 0
    
    if (&var_210:0xc + x2 u< &var_210:0xc || (x12_2 & 1) != 0 || x15_1 + x2 u< x15_1
            || (x12_2 & 1) != 0 || (result & 1) != 0 || (x12_2 & 1) != 0
            || &var_210:8 + x2 u< &var_210:8 || (x12_2 & 1) != 0 || x3 + x2 u< x3
            || (x12_2 & 1) != 0 || &var_210:4 + x2 u< &var_210:4 || (x12_2 & 1) != 0
            || &(&var_220)[(x10_2 - 2) * 2] u< &var_220 || (x12_2 & 1) != 0
            || &(&var_210)[(x10_2 - 2) * 2] u< &var_210 || (x12_2 & 1) != 0)
        goto label_ca1fe0
    
    int32_t* x12_3 = x9 + 0x10
    int128_t* x13_2 = &var_220
    v0.b = 0x55
    v0:1.b = 0x55
    v0:2.b = 0x55
    v0:3.b = 0x55
    v0:4.b = 0x55
    v0:5.b = 0x55
    v0:6.b = 0x55
    v0:7.b = 0x55
    v0:8.b = 0x55
    v0:9.b = 0x55
    v0:0xa.b = 0x55
    v0:0xb.b = 0x55
    v0:0xc.b = 0x55
    v0:0xd.b = 0x55
    v0:0xe.b = 0x55
    v0:0xf.b = 0x55
    i_15 = (x10_2 - 1) & 0xfffffffffffffffc
    int128_t v1
    v1.b = 0x33
    v1:1.b = 0x33
    v1:2.b = 0x33
    v1:3.b = 0x33
    v1:4.b = 0x33
    v1:5.b = 0x33
    v1:6.b = 0x33
    v1:7.b = 0x33
    v1:8.b = 0x33
    v1:9.b = 0x33
    v1:0xa.b = 0x33
    v1:0xb.b = 0x33
    v1:0xc.b = 0x33
    v1:0xd.b = 0x33
    v1:0xe.b = 0x33
    v1:0xf.b = 0x33
    int128_t v2
    v2.b = 0xf
    v2:1.b = 0xf
    v2:2.b = 0xf
    v2:3.b = 0xf
    v2:4.b = 0xf
    v2:5.b = 0xf
    v2:6.b = 0xf
    v2:7.b = 0xf
    v2:8.b = 0xf
    v2:9.b = 0xf
    v2:0xa.b = 0xf
    v2:0xb.b = 0xf
    v2:0xc.b = 0xf
    v2:0xd.b = 0xf
    v2:0xe.b = 0xf
    v2:0xf.b = 0xf
    int64_t i_11 = i_15
    int64_t i_1
    
    do
        uint128_t v3
        v3.d = *x12_3
        uint128_t v4
        v4.d = x12_3[1]
        uint128_t v5
        v5.d = x12_3[2]
        uint128_t v6
        v6.d = x12_3[3]
        v3:4.d = x12_3[4]
        v4:4.d = x12_3[5]
        v5:4.d = x12_3[6]
        v6:4.d = x12_3[7]
        v3:8.d = x12_3[8]
        v4:8.d = x12_3[9]
        v5:8.d = x12_3[0xa]
        v6:8.d = x12_3[0xb]
        v3:0xc.d = x12_3[0xc]
        v4:0xc.d = x12_3[0xd]
        v5:0xc.d = x12_3[0xe]
        v6:0xc.d = x12_3[0xf]
        x12_3 = &x12_3[0x10]
        i_1 = i_11
        i_11 -= 4
        uint128_t v7
        v7.d = v4.d u>> 1
        v7:4.d = v4:4.d u>> 1
        v7:8.d = v4:8.d u>> 1
        v7:0xc.d = v4:0xc.d u>> 1
        uint128_t v16
        v16.d = v6.d u>> 1
        v16:4.d = v6:4.d u>> 1
        v16:8.d = v6:8.d u>> 1
        v16:0xc.d = v6:0xc.d u>> 1
        int128_t v7_2 = (v7 ^ v3) & v0
        int128_t v16_2 = (v16 ^ v5) & v0
        uint128_t v17
        v17.d = v7_2.d << 1
        v17:4.d = v7_2:4.d << 1
        v17:8.d = v7_2:8.d << 1
        v17:0xc.d = v7_2:0xc.d << 1
        uint128_t v18
        v18.d = v16_2.d << 1
        v18:4.d = v16_2:4.d << 1
        v18:8.d = v16_2:8.d << 1
        v18:0xc.d = v16_2:0xc.d << 1
        int128_t v16_3 = v16_2 ^ v5
        int128_t v7_3 = v7_2 ^ v3
        uint128_t v17_1 = v17 ^ v4
        uint128_t v3_1 = v18 ^ v6
        v4.d = v16_3.d u>> 2
        v4:4.d = v16_3:4.d u>> 2
        v4:8.d = v16_3:8.d u>> 2
        v4:0xc.d = v16_3:0xc.d u>> 2
        v5.d = v3_1.d u>> 2
        v5:4.d = v3_1:4.d u>> 2
        v5:8.d = v3_1:8.d u>> 2
        v5:0xc.d = v3_1:0xc.d u>> 2
        int128_t v4_2 = (v4 ^ v7_3) & v1
        v6.d = v4_2.d << 2
        v6:4.d = v4_2:4.d << 2
        v6:8.d = v4_2:8.d << 2
        v6:0xc.d = v4_2:0xc.d << 2
        int128_t v4_3 = v4_2 ^ v7_3
        int128_t v5_2 = (v5 ^ v17_1) & v1
        int128_t v6_1 = v6 ^ v16_3
        v7_3.d = v5_2.d << 2
        v7_3:4.d = v5_2:4.d << 2
        v7_3:8.d = v5_2:8.d << 2
        v7_3:0xc.d = v5_2:0xc.d << 2
        int128_t v5_3 = v5_2 ^ v17_1
        v16_3.d = v4_3.d u>> 4
        v16_3:4.d = v4_3:4.d u>> 4
        v16_3:8.d = v4_3:8.d u>> 4
        v16_3:0xc.d = v4_3:0xc.d u>> 4
        int128_t v3_2 = v7_3 ^ v3_1
        int128_t v7_4 = v16_3 ^ v4_3
        v16_3.d = v5_3.d u>> 4
        v16_3:4.d = v5_3:4.d u>> 4
        v16_3:8.d = v5_3:8.d u>> 4
        v16_3:0xc.d = v5_3:0xc.d u>> 4
        v17_1.d = v6_1.d u>> 4
        v17_1:4.d = v6_1:4.d u>> 4
        v17_1:8.d = v6_1:8.d u>> 4
        v17_1:0xc.d = v6_1:0xc.d u>> 4
        int128_t v7_5 = v7_4 & v2
        v18.d = v3_2.d u>> 4
        v18:4.d = v3_2:4.d u>> 4
        v18:8.d = v3_2:8.d u>> 4
        v18:0xc.d = v3_2:0xc.d u>> 4
        uint128_t v19
        v19.d = v7_5.d << 4
        v19:4.d = v7_5:4.d << 4
        v19:8.d = v7_5:8.d << 4
        v19:0xc.d = v7_5:0xc.d << 4
        int128_t v16_5 = (v16_3 ^ v5_3) & v2
        uint128_t v7_6 = v7_5 ^ v4_3
        int128_t v17_3 = (v17_1 ^ v6_1) & v2
        uint128_t v4_4 = v19 ^ v4_3
        v19.d = v16_5.d << 4
        v19:4.d = v16_5:4.d << 4
        v19:8.d = v16_5:8.d << 4
        v19:0xc.d = v16_5:0xc.d << 4
        int128_t v18_2 = (v18 ^ v3_2) & v2
        uint128_t v16_6 = v16_5 ^ v5_3
        uint128_t v20
        v20.d = v17_3.d << 4
        v20:4.d = v17_3:4.d << 4
        v20:8.d = v17_3:8.d << 4
        v20:0xc.d = v17_3:0xc.d << 4
        uint128_t v17_4 = v17_3 ^ v6_1
        uint128_t v5_4 = v19 ^ v5_3
        v19.d = v18_2.d << 4
        v19:4.d = v18_2:4.d << 4
        v19:8.d = v18_2:8.d << 4
        v19:0xc.d = v18_2:0xc.d << 4
        uint128_t v18_3 = v18_2 ^ v3_2
        uint128_t v21_1 = vtrn2q_s32(v7_6, v16_6)
        uint128_t v23_1 = vzip1q_s32(v17_4, v18_3)
        uint128_t v24_1 = vtrn2q_s32(v17_4, v18_3)
        v6 = v20 ^ v6_1
        uint128_t v20_1 = vzip1q_s32(v7_6, v16_6)
        uint128_t v16_7 = vzip2q_s32(v7_6, v16_6)
        uint128_t v3_3 = v19 ^ v3_2
        uint128_t v22_1 = vtrn2q_s32(v4_4, v5_4)
        uint128_t v7_7 = vextq_s8(v21_1, v7_6, 8)
        uint128_t v25_1 = vzip2q_s32(v17_4, v18_3)
        uint128_t v23_2 = vextq_s8(v17_4, v23_1, 8)
        uint128_t v24_2 = vextq_s8(v17_4, v24_1, 8)
        uint128_t v19_1 = vzip1q_s32(v4_4, v5_4)
        uint128_t v5_5 = vzip2q_s32(v4_4, v5_4)
        uint128_t v7_8 = vextq_s8(v25_1, v7_7, 8)
        uint128_t v25_2 = vzip1q_s32(v6, v3_3)
        uint128_t v20_2 = vextq_s8(v23_2, v20_1, 8)
        uint128_t v23_3 = vtrn2q_s32(v6, v3_3)
        uint128_t v4_5 = vextq_s8(v22_1, v4_4, 8)
        uint128_t v21_2 = vextq_s8(v24_2, v21_1, 8)
        uint128_t v24_3 = vzip2q_s32(v6, v3_3)
        uint128_t v25_3 = vextq_s8(v6, v25_2, 8)
        uint128_t v23_4 = vextq_s8(v6, v23_3, 8)
        uint128_t v4_6 = vextq_s8(v24_3, v4_5, 8)
        v17_4:0xc.d = v18_3:8.d
        v6:0xc.d = v3_3:8.d
        v7 = vextq_s8(v7_8, v7_8, 8)
        v18 = vextq_s8(v25_3, v19_1, 8)
        v19 = vextq_s8(v23_4, v22_1, 8)
        uint128_t v3_4 = vextq_s8(v4_6, v4_6, 8)
        uint128_t v4_7 = vextq_s8(v17_4, v16_7, 8)
        v5 = vextq_s8(v6, v5_5, 8)
        v20 = vextq_s8(v20_2, v20_2, 8)
        uint128_t v21_3 = vextq_s8(v21_2, v21_2, 8)
        v16 = vextq_s8(v18, v18, 8)
        v17 = vextq_s8(v19, v19, 8)
        v4 = vextq_s8(v4_7, v4_7, 8)
        x13_2[6] = v7
        x13_2[7] = v3_4
        v3 = vextq_s8(v5, v5, 8)
        x13_2[2] = v21_3
        x13_2[3] = v17
        *x13_2 = v20
        x13_2[1] = v16
        x13_2[4] = v4
        x13_2[5] = v3
        x13_2 = &x13_2[8]
    while (i_1 != 4)
    
    if (x10_2 - 1 != i_15)
        goto label_ca1fe0

if (x20 != 0)
    int64_t x11_4 = (x8_2 - 4) & 0xfffffffffffffffc
    v0.q = 0x800000010
    arg5.q = 0x1800000010
    int32_t var_240
    int32_t* x11_5 = &var_240 | 4
    arg6.d = 0x223311
    arg6:4.d = 0x223311
    arg7.w = 0x55
    arg7:2.w = 0x55
    arg7:4.w = 0x55
    arg7:6.w = 0x55
    arg8 = vneg_s32(v0)
    int32_t var_238
    int32_t* var_248_1 = &var_238
    int64_t x19_1
    int64_t temp7_1
    
    do
        x19_1 = x20 != 1 ? 2 : 1
        
        size_t x23_1 = x19_1 << 4
        size_t x2_2
        
        if (x20 == 1)
            x2_2 = 0x20 - x23_1
        else
            x2_2 = 0
        
        int64_t x24_1 = x19_1 << 2
        memset(&(&var_240)[x19_1 * 4], 0, x2_2)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_5
        int128_t v4_8
        int128_t v5_6
        int128_t v6_2
        int128_t v7_9
        int128_t v16_8
        int128_t v17_5
        int128_t v18_4
        int128_t v19_2
        int128_t v20_3
        v0_1, v1_1, v2_1, v3_5, v4_8, v5_6, v6_2, v7_9, v16_8, v17_5, v18_4, v19_2, v20_3 =
            memcpy(&var_240, x22, x23_1)
        int32_t var_234
        int64_t x8_9
        
        if (x24_1 == 4)
            x8_9 = 0
        label_ca2204:
            int64_t i_9 = x8_9 - x24_1
            void* x8_11 = &var_248_1[x8_9]
            int64_t i_2
            
            do
                int32_t x11_8 = *(x8_11 - 4)
                int32_t x12_14 = *x8_11
                int32_t x13_8 = *(x8_11 + 4)
                i_2 = i_9
                i_9 += 4
                int32_t temp0_1 = _byteswap(*(x8_11 - 8))
                int32_t temp0_2 = _byteswap(x11_8)
                int32_t temp0_3 = _byteswap(x12_14)
                int32_t temp0_4 = _byteswap(x13_8)
                *(x8_11 - 8) = temp0_1
                *(x8_11 - 4) = temp0_2
                *x8_11 = temp0_3
                *(x8_11 + 4) = temp0_4
                x8_11 += 0x10
            while (i_2 != -4)
        else
            int64_t x11_6 = (x24_1 - 4) << 2
            int32_t x10_5 = 0 != (x24_1 - 4) u>> 0x3e ? 1 : 0
            x8_9 = 0
            
            if (x11_6 u> not.q(&var_234) || (x10_5 & 1) != 0 || x11_6 u> not.q(&var_238)
                    || (x10_5 & 1) != 0 || x11_6 u> not.q(x11_5) || (x10_5 & 1) != 0
                    || x11_6 u> not.q(&var_240) || (x10_5 & 1) != 0)
                goto label_ca2204
            
            int64_t i_14 = (((x24_1 - 4) u>> 2) + 1) & 0x7ffffffffffffffe
            x8_9 = i_14 << 2
            int32_t* x11_7 = &var_240
            int64_t i_10 = i_14
            int64_t i_3
            
            do
                v0_1.d = *x11_7
                v1_1.d = x11_7[1]
                v2_1.d = x11_7[2]
                v3_5.d = x11_7[3]
                v0_1:4.d = x11_7[4]
                v1_1:4.d = x11_7[5]
                v2_1:4.d = x11_7[6]
                v3_5:4.d = x11_7[7]
                i_3 = i_10
                i_10 -= 2
                v4_8 = vrev32_s8(v0_1)
                v5_6 = vrev32_s8(v1_1)
                v6_2 = vrev32_s8(v2_1)
                v7_9 = vrev32_s8(v3_5)
                *x11_7 = v4_8.d
                x11_7[1] = v5_6.d
                x11_7[2] = v6_2.d
                x11_7[3] = v7_9.d
                x11_7[4] = v4_8:4.d
                x11_7[5] = v5_6:4.d
                x11_7[6] = v6_2:4.d
                x11_7[7] = v7_9:4.d
                x11_7 = &x11_7[8]
            while (i_3 != 2)
            
            if (((x24_1 - 4) u>> 2) + 1 != i_14)
                goto label_ca2204
        int32_t* x8_12 = *arg4
        int32_t x15_8 = *x8_12
        int32_t x16_10 = x8_12[1]
        int32_t x17_9 = x8_12[2]
        int32_t x8_13 = x8_12[3]
        int64_t i_13 = x10_2 - 1
        int32_t x9_4 = var_240 ^ x15_8
        int32_t var_23c
        int32_t x10_10 = var_23c ^ x16_10
        int32_t var_230
        int32_t x13_11 = var_230 ^ x15_8
        int32_t var_22c
        int32_t x14_8 = var_22c ^ x16_10
        int32_t x11_11 = var_238 ^ x17_9
        int32_t x12_17 = var_234 ^ x8_13
        int128_t* x24_2 = &var_210
        int32_t var_228
        int32_t x15_10 = var_228 ^ x17_9
        int32_t var_224
        int32_t x8_14 = var_224 ^ x8_13
        int32_t x16_13 = (x9_4 ^ x10_10 u>> 1) & 0x55555555
        int32_t x10_11 = x10_10 ^ x16_13 << 1
        int32_t x9_5 = x16_13 ^ x9_4
        int32_t x16_15 = (x11_11 ^ x12_17 u>> 1) & 0x55555555
        int32_t x12_18 = x12_17 ^ x16_15 << 1
        int32_t x11_12 = x16_15 ^ x11_11
        int32_t x16_17 = (x13_11 ^ x14_8 u>> 1) & 0x55555555
        int32_t x14_9 = x14_8 ^ x16_17 << 1
        int32_t x13_12 = x16_17 ^ x13_11
        int32_t x16_19 = (x15_10 ^ x8_14 u>> 1) & 0x55555555
        int32_t x8_15 = x8_14 ^ x16_19 << 1
        int32_t x15_11 = x16_19 ^ x15_10
        int32_t x16_21 = (x9_5 ^ x11_12 u>> 2) & 0x33333333
        int32_t x11_13 = x11_12 ^ x16_21 << 2
        int32_t x9_6 = x16_21 ^ x9_5
        int32_t x16_23 = (x10_11 ^ x12_18 u>> 2) & 0x33333333
        int32_t x12_19 = x12_18 ^ x16_23 << 2
        int32_t x10_12 = x16_23 ^ x10_11
        int32_t x16_25 = (x13_12 ^ x15_11 u>> 2) & 0x33333333
        int32_t x15_12 = x15_11 ^ x16_25 << 2
        int32_t x13_13 = x16_25 ^ x13_12
        int32_t x16_27 = (x14_9 ^ x8_15 u>> 2) & 0x33333333
        int32_t x8_16 = x8_15 ^ x16_27 << 2
        int32_t x14_10 = x16_27 ^ x14_9
        int32_t x16_29 = (x9_6 ^ x13_13 u>> 4) & 0xf0f0f0f
        int32_t x16_31 = (x10_12 ^ x14_10 u>> 4) & 0xf0f0f0f
        int32_t x14_11 = x14_10 ^ x16_31 << 4
        int32_t x10_13 = x16_31 ^ x10_12
        int32_t x16_33 = (x11_13 ^ x15_12 u>> 4) & 0xf0f0f0f
        int32_t x16_35 = (x12_19 ^ x8_16 u>> 4) & 0xf0f0f0f
        int32_t x8_17 = x8_16 ^ x16_35 << 4
        int32_t var_230_1 = x13_13 ^ x16_29 << 4
        var_240 = x16_29 ^ x9_6
        int32_t var_228_1 = x15_12 ^ x16_33 << 4
        var_238 = x16_33 ^ x11_13
        var_234 = x16_35 ^ x12_19
        int64_t i_4
        
        do
            sub_ef08c8(&var_240)
            v0_1.q = var_240.q
            v1_1.q = var_238.q
            v2_1.q = var_230_1.q
            i_4 = i_13
            i_13 -= 1
            v3_5.d = v0_1.d u>> 2
            v3_5:4.d = v0_1:4.d u>> 2
            v4_8.d = v1_1.d u>> 2
            v4_8:4.d = v1_1:4.d u>> 2
            v5_6.d = v2_1.d u>> 2
            v5_6:4.d = v2_1:4.d u>> 2
            int128_t v3_7 = (v3_5 ^ v0_1) & arg6
            int32_t x10_15 = (var_228_1 ^ var_228_1 u>> 2) & 0x223311
            int128_t v4_10 = (v4_8 ^ v1_1) & arg6
            int128_t v5_8 = (v5_6 ^ v2_1) & arg6
            int32_t x11_15 = v3_7:4.d
            int128_t v0_2 = v3_7 ^ v0_1
            int32_t x13_15 = v4_10:4.d
            int32_t x9_10 = x10_15 ^ var_228_1 ^ x10_15 << 2
            v3_7.d = float.s(v3_7.d << 2)
            int128_t v1_2 = v4_10 ^ v1_1
            int32_t x15_14 = v5_8:4.d
            v4_10.d = float.s(v4_10.d << 2)
            v3_7:4.d = x11_15 << 2
            int128_t v2_2 = v5_8 ^ v2_1
            v5_8.d = float.s(v5_8.d << 2)
            v4_10:4.d = x13_15 << 2
            v5_8:4.d = x15_14 << 2
            int128_t v0_3 = v0_2 ^ v3_7
            int128_t v1_3 = v1_2 ^ v4_10
            int128_t v2_3 = v2_2 ^ v5_8
            v3_7.d = v0_3.d u>> 1
            v3_7:4.d = v0_3:4.d u>> 1
            v4_10.d = v1_3.d u>> 1
            v4_10:4.d = v1_3:4.d u>> 1
            v5_8.d = v2_3.d u>> 1
            v5_8:4.d = v2_3:4.d u>> 1
            int128_t v3_9 = (v3_7 ^ v0_3) & arg7
            int128_t v4_12 = (v4_10 ^ v1_3) & arg7
            int128_t v5_10 = (v5_8 ^ v2_3) & arg7
            int128_t v0_4 = v3_9 ^ v0_3
            v3_9.d <<= 1
            v3_9:4.d <<= 1
            int128_t v1_4 = v4_12 ^ v1_3
            v4_12.d <<= 1
            v4_12:4.d <<= 1
            int128_t v2_4 = v5_10 ^ v2_3
            v5_10.d <<= 1
            v5_10:4.d <<= 1
            uint128_t v0_5 = v0_4 ^ v3_9
            uint128_t v3_10 = v1_4 ^ v4_12
            uint128_t v1_5 = v2_4 ^ v5_10
            v6_2.d = v0_5.d u>> 8
            v6_2:4.d = v0_5:4.d u>> 8
            v7_9.d = v0_5.d << 0x18
            v7_9:4.d = v0_5:4.d << 0x18
            v16_8.d = v0_5.d u>> 0x10
            v16_8:4.d = v0_5:4.d u>> 0x10
            v17_5.d = v0_5.d << 0x10
            v17_5:4.d = v0_5:4.d << 0x10
            v18_4.d = v3_10.d u>> 8
            v18_4:4.d = v3_10:4.d u>> 8
            v19_2.d = v3_10.d << 0x18
            v19_2:4.d = v3_10:4.d << 0x18
            v20_3.d = v3_10.d u>> 0x10
            v20_3:4.d = v3_10:4.d u>> 0x10
            int128_t v6_3 = vorr_s8(v7_9, v6_2)
            v7_9.d = v3_10.d << 0x10
            v7_9:4.d = v3_10:4.d << 0x10
            int128_t v16_9 = vorr_s8(v17_5, v16_8)
            v17_5.d = v1_5.d u>> 8
            v17_5:4.d = v1_5:4.d u>> 8
            v18_4 = vorr_s8(v19_2, v18_4)
            v19_2.d = v1_5.d << 0x18
            v19_2:4.d = v1_5:4.d << 0x18
            int32_t x10_19 = (x9_10 ^ x9_10 u>> 1) & 0x550055
            int128_t v7_10 = vorr_s8(v7_9, v20_3)
            v20_3.d = v1_5.d u>> 0x10
            v20_3:4.d = v1_5:4.d u>> 0x10
            int128_t v17_6 = vorr_s8(v19_2, v17_5)
            v19_2.d = v1_5.d << 0x10
            v19_2:4.d = v1_5:4.d << 0x10
            vdupq_laneq_s32(v1_5, 1)
            v19_2 = vorr_s8(v19_2, v20_3)
            uint128_t v4_13
            v4_13:4.d = x10_19 ^ x9_10
            uint128_t v20_4
            v20_4:4.d = x10_19 << 1
            uint128_t v2_5 = v1_5 ^ v0_5
            int128_t v5_11 = vdup_laneq_s32(v0_5, 1)
            uint128_t v4_14 = v4_13 ^ v20_4
            int128_t v20_5 = vzip1_s32(v0_5, v3_10)
            int128_t v16_10 = vdup_laneq_s32(v3_10, 1)
            v20_3 = v5_11 ^ v20_5
            int128_t v5_12 = vzip1_s32(v5_11, v3_10)
            int128_t v3_11 = vzip1_s32(v3_10, v2_5)
            int32_t x11_18 = (x8_17 ^ x8_17 u>> 2) & 0x223311
            int128_t v2_6 = vzip1_s32(v16_10, v2_5)
            int128_t v3_12 = v16_10 ^ v3_11
            v7_9 = v7_10 ^ v18_4
            int128_t v16_11 = v19_2 ^ v17_6
            v17_6.d = v20_3.d u>> 0x18
            v17_6:4.d = v20_3:4.d u>> 0x18
            v18_4.d = v20_3.d << 8
            v18_4:4.d = v20_3:4.d << 8
            int32_t x9_12 = v4_14:4.d
            int32_t x8_20 = x11_18 ^ x8_17 ^ x11_18 << 2
            int128_t v5_14 = v16_9 ^ v6_3 ^ v5_12 ^ vorr_s8(v18_4, v17_6)
            int128_t v17_7
            v17_7.d = v3_12.d u>> 0x18
            v17_7:4.d = v3_12:4.d u>> 0x18
            v3_12.d <<= 8
            v3_12:4.d <<= 8
            int128_t v2_7 = v7_9 ^ v2_6
            int128_t v6_4
            v6_4.q = x24_2[-1].q
            v7_9.q = *(x24_2 - 8)
            uint128_t v1_6 = v4_14 ^ v1_5
            v3_5 = vorr_s8(v3_12, v17_7)
            v17_7.d = float.s(ror.d(x9_12, 8))
            int32_t x11_20 = (x8_20 ^ x8_20 u>> 1) & 0x550055
            v17_5 = vzip1_s32(v17_7, v0_5)
            int32_t x10_22 = v0_5.d
            v0_5.d = v1_6.d u>> 0x18
            v0_5:4.d = v1_6:4.d u>> 0x18
            v1_6.d <<= 8
            v1_6:4.d <<= 8
            int128_t v2_8 = v2_7 ^ v3_5
            int128_t v0_6 = vorr_s8(v1_6, v0_5)
            v1_6.q = *x24_2
            v3_5.q = *(x24_2 + 8)
            x24_2 = &x24_2[2]
            int32_t x8_22 = x11_20 ^ x8_20 ^ x11_20 << 1
            vdupq_laneq_s32(v4_14, 1)
            uint128_t v4_15
            v4_15:4.d = x8_22
            int32_t x8_23 = x8_22 ^ x10_22
            v6_2 = vshl_u32(v4_15, arg8)
            int128_t v4_17 = vorr_s8(vshl_u32(v4_15, arg5), v6_2)
            v6_2.d = float.s(x8_23 ^ x9_12)
            v0_1 = v16_11 ^ v4_14 ^ v0_6 ^ v1_6
            v6_2:4.d = x8_23
            v1_6.d = float.s(x8_23)
            var_240.q = (v5_14 ^ v6_4).q
            var_238.q = (v2_8 ^ v7_9).q
            v1_6:4.d = ror.d(x8_22, 0x10)
            int128_t v2_9
            v2_9.d = v6_2.d u>> 0x18
            v2_9:4.d = v6_2:4.d u>> 0x18
            v5_6.d = v6_2.d << 8
            v5_6:4.d = v6_2:4.d << 8
            var_230_1.q = v0_1.q
            var_228_1.q = (v4_17 ^ v17_5 ^ v1_6 ^ vorr_s8(v5_6, v2_9) ^ v3_5).q
        while (i_4 != 1)
        sub_ef08c8(&var_240)
        int32_t x8_24 = var_240
        int32_t x10_23 = var_238
        int32_t x11_22 = var_234
        int32_t x1_5 = (x10_13 ^ x10_13 u>> 2) & 0x223311
        int32_t x9_16 = x1_5 ^ x10_13 ^ x1_5 << 2
        int32_t x1_7 = (var_230_1 ^ var_230_1 u>> 2) & 0x223311
        int32_t x0_7 = (x8_24 ^ x8_24 u>> 2) & 0x223311
        int32_t x12_25 = x1_7 ^ var_230_1 ^ x1_7 << 2
        int32_t x1_9 = (x8_17 ^ x8_17 u>> 2) & 0x223311
        int32_t x8_26 = x0_7 ^ x8_24 ^ x0_7 << 2
        int32_t x2_5 = (x10_23 ^ x10_23 u>> 2) & 0x223311
        int32_t x0_9 = (x11_22 ^ x11_22 u>> 2) & 0x223311
        int32_t x15_17 = x1_9 ^ x8_17 ^ x1_9 << 2
        int32_t x1_11 = (x9_16 ^ x9_16 u>> 1) & 0x550055
        int32_t x10_25 = x2_5 ^ x10_23 ^ x2_5 << 2
        int32_t x11_24 = x0_9 ^ x11_22 ^ x0_9 << 2
        int32_t x2_7 = (x14_11 ^ x14_11 u>> 2) & 0x223311
        int32_t x9_18 = x1_11 ^ x9_16 ^ x1_11 << 1
        int32_t x1_13 = (x11_24 ^ x11_24 u>> 1) & 0x550055
        int32_t x13_18 = x2_7 ^ x14_11 ^ x2_7 << 2
        int32_t x11_26 = x1_13 ^ x11_24 ^ x1_13 << 1
        int32_t x1_15 = (x13_18 ^ x13_18 u>> 1) & 0x550055
        int32_t x0_11 = (var_228_1 ^ var_228_1 u>> 2) & 0x223311
        int32_t x13_20 = x1_15 ^ x13_18 ^ x1_15 << 1
        int32_t x1_17 = (x15_17 ^ x15_17 u>> 1) & 0x550055
        int32_t x14_16 = x0_11 ^ var_228_1 ^ x0_11 << 2
        int32_t x15_19 = x1_17 ^ x15_17 ^ x1_17 << 1
        int32_t x0_13 = (x8_26 ^ x8_26 u>> 1) & 0x550055
        int32_t x8_27 = x0_13 ^ x8_26
        int32_t x1_19 = (x10_25 ^ x10_25 u>> 1) & 0x550055
        int32_t x10_26 = x1_19 ^ x10_25
        int32_t x8_29 = (x8_27 ^ x9_18 u>> 1) & 0x55555555
        int32_t x9_19 = x9_18 ^ x8_29 << 1
        int32_t x8_30 = x8_29 ^ x8_27 ^ x0_13 << 1
        int32_t x10_28 = (x10_26 ^ x11_26 u>> 1) & 0x55555555
        int32_t x11_27 = x11_26 ^ x10_28 << 1
        int32_t x10_29 = x10_28 ^ x10_26 ^ x1_19 << 1
        int32_t x0_16 = (x12_25 ^ x12_25 u>> 1) & 0x550055
        int32_t x1_22 = (x14_16 ^ x14_16 u>> 1) & 0x550055
        int32_t x12_26 = x0_16 ^ x12_25
        int32_t x14_17 = x1_22 ^ x14_16
        int32_t x12_28 = (x12_26 ^ x13_20 u>> 1) & 0x55555555
        int32_t x14_19 = (x14_17 ^ x15_19 u>> 1) & 0x55555555
        int32_t x13_21 = x13_20 ^ x12_28 << 1
        int32_t x12_29 = x12_28 ^ x12_26 ^ x0_16 << 1
        int32_t x15_20 = x15_19 ^ x14_19 << 1
        int32_t x14_20 = x14_19 ^ x14_17 ^ x1_22 << 1
        int32_t x0_19 = (x8_30 ^ x10_29 u>> 2) & 0x33333333
        int32_t x10_30 = x10_29 ^ x0_19 << 2
        int32_t x8_31 = x0_19 ^ x8_30
        int64_t x17_10 = *arg4
        int32_t x0_21 = (x12_29 ^ x14_20 u>> 2) & 0x33333333
        int32_t x12_30 = x0_21 ^ x12_29
        int32_t x14_21 = x14_20 ^ x0_21 << 2
        int32_t x0_23 = (x8_31 ^ x12_30 u>> 4) & 0xf0f0f0f
        int32_t x2_9 = *(x17_10 + (x11_4 << 2))
        int32_t x0_25 = (x10_30 ^ x14_21 u>> 4) & 0xf0f0f0f
        int32_t x1_25 = (x9_19 ^ x11_27 u>> 2) & 0x33333333
        int32_t x11_28 = x11_27 ^ x1_25 << 2
        int32_t x9_20 = x1_25 ^ x9_19
        int32_t x8_33 = x0_23 ^ x8_31 ^ x2_9
        int32_t x1_27 = (x13_21 ^ x15_20 u>> 2) & 0x33333333
        var_240 = x8_33
        int32_t x13_22 = x1_27 ^ x13_21
        result = *(x17_10 + ((x11_4 | 1) << 2))
        int32_t x15_21 = x15_20 ^ x1_27 << 2
        int32_t x1_29 = (x9_20 ^ x13_22 u>> 4) & 0xf0f0f0f
        var_23c = x1_29 ^ x9_20 ^ result
        int32_t x9_24 = *(x17_10 + ((x11_4 | 2) << 2))
        int32_t x1_31 = (x11_28 ^ x15_21 u>> 4) & 0xf0f0f0f
        var_238 = x0_25 ^ x10_30 ^ x9_24
        int32_t x10_34 = *(x17_10 + (((x8_2 - 4) | 3) << 2))
        int64_t x16_40 = (x23_1 - 8) u>> 2 | 1
        int32_t temp0_5 = _byteswap(x8_33)
        var_22c = x13_22 ^ x1_29 << 4 ^ result
        var_228 = x14_21 ^ x0_25 << 4 ^ x9_24
        int64_t i_12 = x16_40 - 3
        var_234 = x1_31 ^ x11_28 ^ x10_34
        var_230 = x12_30 ^ x0_23 << 4 ^ x2_9
        var_224 = x15_21 ^ x1_31 << 4 ^ x10_34
        *x21 = temp0_5
        int64_t i_7 = x23_1 - 4
        int32_t* x9_27
        void* x10_36
        
        if (x16_40 != 3)
            if (x21 + 4 u< &var_248_1[x19_1 * 4] - 8)
                x9_27 = x11_5
                x10_36 = x21
            
            if (x21 + 4 u>= &var_248_1[x19_1 * 4] - 8 || x21 + x23_1 u<= x11_5)
                int32_t* x12_33 = &var_234
                int64_t x10_41 = i_12 << 2
                i_7 -= x10_41
                x9_27 = &x11_5[i_12]
                x10_36 = x21 + x10_41
                void* x11_30 = x21 + 0xc
                int64_t i_5
                
                do
                    v0_1.q = *(x12_33 - 8)
                    v1_1.q = *x12_33
                    i_5 = i_12
                    i_12 -= 4
                    x12_33 = &x12_33[4]
                    v0_1 = vrev32_s8(v0_1)
                    v1_1 = vrev32_s8(v1_1)
                    *(x11_30 - 8) = v0_1.q
                    *x11_30 = v1_1.q
                    x11_30 += 0x10
                while (i_5 != 4)
        else
            x9_27 = x11_5
            x10_36 = x21
        
        void* x10_42 = x10_36 + 4
        int64_t i_6
        
        do
            int32_t x11_31 = *x9_27
            x9_27 = &x9_27[1]
            i_6 = i_7
            i_7 -= 4
            *x10_42 = _byteswap(x11_31)
            x10_42 += 4
        while (i_6 != 4)
        x22 += x23_1
        temp7_1 = x20
        x20 -= x19_1
        x21 += x23_1
    while (temp7_1 != x19_1)

arg6.q = var_70
arg5.q = var_68
arg8.q = var_80
arg7.q = var_78
return result
