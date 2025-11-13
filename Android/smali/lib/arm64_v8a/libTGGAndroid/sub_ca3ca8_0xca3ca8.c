// 函数: sub_ca3ca8
// 地址: 0xca3ca8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_70 = arg6.q
int64_t var_68 = arg5.q
int32_t* x21 = arg1
uint64_t x26 = arg2 u>> 2

if ((arg2 & 0xfffffffffffffff4) != 0x10 && x26 != 8)
    Botan::assertion_failure("X == 4 || X == 6 || X == 8", &data_793a18, "aes_key_schedule", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x228d)
    Botan::assertion_failure("rounds == 10 || rounds == 12 || rounds == 14", &data_793a18, 
        "aes_key_schedule", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2292)
    return Botan::AES_128::clear() __tailcall

if (x26 != 6 && ((x26 + 6) & 0xfffffffffffffffb) != 0xa)
    Botan::assertion_failure("rounds == 10 || rounds == 12 || rounds == 14", &data_793a18, 
        "aes_key_schedule", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2292)
    return Botan::AES_128::clear() __tailcall

int64_t x8_2 = *arg3
int64_t x9_4 = (arg3[1] - x8_2) s>> 2
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
uint128_t v5
uint128_t v6
uint128_t v7

if (arg2 + 0x1c u> x9_4)
    arg1, v0, v1, v2, v3, v4, v5, v6, v7 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg3)
else if (arg2 + 0x1c u< x9_4)
    arg3[1] = x8_2 + ((arg2 + 0x1c) << 2)

int64_t x8_4 = *arg4
int64_t x9_7 = (arg4[1] - x8_4) s>> 2

if (arg2 + 0x1c u> x9_7)
    arg1, v0, v1, v2, v3, v4, v5, v6, v7 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg4)
else if (arg2 + 0x1c u< x9_7)
    arg4[1] = x8_4 + ((arg2 + 0x1c) << 2)

if (x26 != 0)
    int64_t x8_6 = 0
    
    do
        x8_6 += 1
        (*arg3)[x8_6] = _byteswap(x21[x8_6])
    while (x26 != x8_6)

int64_t x8_7 = (arg2 + 0x1c) & 0xfffffffffffffffc

if (x26 u< x8_7)
    v1 = data_71af70
    v0.q = 0x200000003
    data_71bb30
    uint64_t x23_1 = x26 << 2
    int64_t x25_1 = x26 + 1
    int64_t fp_1 = 1
    int64_t x21_1 = x23_1 + 4
    int128_t var_c0
    __builtin_memcpy(&var_c0, 
        "\x80\x80\x80\x80\x40\x40\x40\x40\x20\x20\x20\x20\x10\x10\x10\x10\x07\x00\x00\x00\x06\x00\x00\x"
    "00\x05\x00\x00\x00\x04\x00\x00\x00", 
        0x20)
    v1 = vnegq_s32(v1)
    arg5 = vneg_s32(v0)
    arg6.b = 1
    arg6:1.b = 1
    arg6:2.b = 1
    arg6:3.b = 1
    arg6:4.b = 1
    arg6:5.b = 1
    arg6:6.b = 1
    arg6:7.b = 1
    uint64_t x22_1 = x26
    uint128_t var_a0_1 = v1
    uint64_t var_d0_1 = x23_1
    
    do
        int64_t x9_9 = *arg3
        uint64_t x8_11 = x22_1 - x26
        uint64_t x24_1 = x22_1 << 2
        int32_t x8_12 = *(x9_9 + (x8_11 << 2))
        int32_t x9_11 = *(x24_1 + x9_9 - 4)
        v0.d = x9_11
        v0:4.d = x9_11
        v0:8.d = x9_11
        v0:0xc.d = x9_11
        int32_t x10_4 = *(&data_849224 + ((x8_11 u/ x26) << 2))
        v1.b = 1
        v1:1.b = 1
        v1:2.b = 1
        v1:3.b = 1
        v1:4.b = 1
        v1:5.b = 1
        v1:6.b = 1
        v1:7.b = 1
        v1:8.b = 1
        v1:9.b = 1
        v1:0xa.b = 1
        v1:0xb.b = 1
        v1:0xc.b = 1
        v1:0xd.b = 1
        v1:0xe.b = 1
        v1:0xf.b = 1
        uint128_t var_90 = vshlq_u32(v0, var_a0_1) & v1
        uint128_t v0_2
        v0_2.d = x9_11
        v0_2:4.d = x9_11
        int64_t var_80_1 = (vshl_u32(v0_2, arg5) & arg6).q
        sub_ef08c8(&var_90)
        int32_t x8_20 = (var_90:4.d << 6 & 0x40404040) | (var_90.d << 7 & 0x80808080)
            | (var_90:8.d << 5 & 0x20202020) | (var_90:0xc.d << 4 & 0x10101010)
            | (0x8080808 & var_80_1.d << 3)
        *(*arg3 + x24_1) = x10_4 ^ x8_12 ^ ror.d(
            x8_20 | (0x4040404 & var_80_1:4.d << 2) | (0x2020202 & (0x1010101 & x9_11 u>> 1) << 1)
                | (x9_11 & 0x1010101), 
            0x18)
        
        if (x26 != 1)
            int64_t i_5 = x26 - 1
            int64_t x8_25 = fp_1
            int64_t x9_23 = x21_1
            
            if (x26 != 8)
                int64_t i
                
                do
                    int32_t* x11_3 = *arg3
                    
                    if (x26 + x8_25 u>= (arg3[1] - x11_3) s>> 2)
                        break
                    
                    int32_t x12_3 = x11_3[x8_25]
                    i = i_5
                    i_5 -= 1
                    x8_25 += 1
                    *(x11_3 + x9_23) = x12_3
                    int32_t* x11_5 = *arg3 + x9_23
                    x9_23 += 4
                    *x11_5 ^= x11_5[-1]
                while (i != 1)
            else
                int64_t i_1 = 0
                int64_t x24_2 = x25_1
                
                do
                    int64_t x8_28 = *arg3
                    
                    if (x24_2 u>= (arg3[1] - x8_28) s>> 2)
                        break
                    
                    void* x8_30 = x8_28 + x23_1 + i_1
                    *(x8_30 + 4) = *(x8_30 - 0x1c)
                    int64_t x9_29 = *arg3
                    int32_t x8_26 = *(x9_29 + x23_1 + i_1)
                    
                    if (i_1 == 0xc)
                        v0.d = x8_26
                        v0:4.d = x8_26
                        v0:8.d = x8_26
                        v0:0xc.d = x8_26
                        v1.d = x8_26
                        v1:4.d = x8_26
                        int128_t v1_1 = vshl_u32(v1, arg5)
                        v2.b = 1
                        v2:1.b = 1
                        v2:2.b = 1
                        v2:3.b = 1
                        v2:4.b = 1
                        v2:5.b = 1
                        v2:6.b = 1
                        v2:7.b = 1
                        v2:8.b = 1
                        v2:9.b = 1
                        v2:0xa.b = 1
                        v2:0xb.b = 1
                        v2:0xc.b = 1
                        v2:0xd.b = 1
                        v2:0xe.b = 1
                        v2:0xf.b = 1
                        var_90 = vshlq_u32(v0, var_a0_1) & v2
                        int64_t var_80_2 = (v1_1 & arg6).q
                        sub_ef08c8(&var_90)
                        int128_t var_b0
                        uint128_t v0_7 = vshlq_u32(var_90, var_b0) & var_c0
                        uint128_t v0_8 = vorrq_s8(v0_7, vdupq_laneq_s64(v0_7, 1))
                        int32_t x8_36 = vorrq_s8(v0_8, vdupq_laneq_s32(v0_8, 1)).d
                            | (0x8080808 & var_80_2.d << 3) | (0x4040404 & var_80_2:4.d << 2)
                        x9_29 = *arg3
                        x8_26 = x8_36 | (0x2020202 & (0x1010101 & x8_26 u>> 1) << 1)
                            | (x8_26 & 0x1010101)
                    
                    void* x9_25 = x9_29 + x23_1 + i_1
                    i_1 += 4
                    x24_2 += 1
                    *(x9_25 + 4) ^= x8_26
                while (i_1 != 0x1c)
        
        x22_1 += x26
        fp_1 += x26
        x25_1 += x26
        x21_1 += var_d0_1
        x23_1 += var_d0_1
    while (x22_1 u< x8_7)

int64_t x8_39 = (x26 + 6) << 2

if (x8_7 != 0)
    int64_t x9_34 = 0
    int64_t i_2 = 0
    uint64_t x12_6 = x26 << 4
    
    do
        int64_t x14_1 = i_2 << 2
        i_2 -= 4
        *(*arg4 + x9_34) = *(*arg3 + x12_6 + x14_1 + 0x60)
        *(*arg4 + x9_34 + 4) = *(*arg3 + x12_6 + x14_1 + 0x64)
        *(*arg4 + x9_34 + 8) = *(*arg3 + x12_6 + x14_1 + 0x68)
        void* x14_2 = *arg4 + x9_34
        x9_34 += 0x10
        *(x14_2 + 0xc) = *(*arg3 + x12_6 + x14_1 + 0x6c)
    while (neg.q((arg2 + 0x1c) & 0xfffffffffffffffc) != i_2)

int64_t i_4 = x8_39 - 4

if (x8_39 != 4)
    int64_t x9_35 = 0x10
    v0.b = 0xfe
    v0:1.b = 0xfe
    v0:2.b = 0xfe
    v0:3.b = 0xfe
    v0:4.b = 0xfe
    v0:5.b = 0xfe
    v0:6.b = 0xfe
    v0:7.b = 0xfe
    v0:8.b = 0xfe
    v0:9.b = 0xfe
    v0:0xa.b = 0xfe
    v0:0xb.b = 0xfe
    v0:0xc.b = 0xfe
    v0:0xd.b = 0xfe
    v0:0xe.b = 0xfe
    v0:0xf.b = 0xfe
    v1.b = 1
    v1:1.b = 1
    v1:2.b = 1
    v1:3.b = 1
    v1:4.b = 1
    v1:5.b = 1
    v1:6.b = 1
    v1:7.b = 1
    v1:8.b = 1
    v1:9.b = 1
    v1:0xa.b = 1
    v1:0xb.b = 1
    v1:0xc.b = 1
    v1:0xd.b = 1
    v1:0xe.b = 1
    v1:0xf.b = 1
    v2.d = 0x1b
    v2:4.d = 0x1b
    v2:8.d = 0x1b
    v2:0xc.d = 0x1b
    int64_t i_3
    
    do
        int128_t* x10_17 = *arg4
        i_3 = i_4
        i_4 -= 4
        v3 = *(x10_17 + x9_35)
        v5.d = v3.d u>> 7
        v5:4.d = v3:4.d u>> 7
        v5:8.d = v3:8.d u>> 7
        v5:0xc.d = v3:0xc.d u>> 7
        v4.d = v3.d << 1
        v4:4.d = v3:4.d << 1
        v4:8.d = v3:8.d << 1
        v4:0xc.d = v3:0xc.d << 1
        uint128_t v4_2 = vmulq_s32(v5 & v1, v2) ^ (v4 & v0)
        v6.d = v4_2.d u>> 7
        v6:4.d = v4_2:4.d u>> 7
        v6:8.d = v4_2:8.d u>> 7
        v6:0xc.d = v4_2:0xc.d u>> 7
        uint128_t v5_2
        v5_2.d = v4_2.d << 1
        v5_2:4.d = v4_2:4.d << 1
        v5_2:8.d = v4_2:8.d << 1
        v5_2:0xc.d = v4_2:0xc.d << 1
        uint128_t v5_4 = vmulq_s32(v6 & v1, v2) ^ (v5_2 & v0)
        v7.d = v5_4.d u>> 7
        v7:4.d = v5_4:4.d u>> 7
        v7:8.d = v5_4:8.d u>> 7
        v7:0xc.d = v5_4:0xc.d u>> 7
        uint128_t v6_2
        v6_2.d = v5_4.d << 1
        v6_2:4.d = v5_4:4.d << 1
        v6_2:8.d = v5_4:8.d << 1
        v6_2:0xc.d = v5_4:0xc.d << 1
        uint128_t v6_4 = vmulq_s32(v7 & v1, v2) ^ (v6_2 & v0)
        uint128_t v3_1 = v6_4 ^ v3
        uint128_t v4_3 = v3_1 ^ v4_2
        uint128_t v5_5 = v3_1 ^ v5_4
        v7.d = v3_1.d u>> 8
        v7:4.d = v3_1:4.d u>> 8
        v7:8.d = v3_1:8.d u>> 8
        v7:0xc.d = v3_1:0xc.d u>> 8
        v3_1.d <<= 0x18
        v3_1:4.d <<= 0x18
        v3_1:8.d <<= 0x18
        v3_1:0xc.d <<= 0x18
        uint128_t v3_2 = vorrq_s8(v3_1, v7)
        v7.d = v5_5.d u>> 0x10
        v7:4.d = v5_5:4.d u>> 0x10
        v7:8.d = v5_5:8.d u>> 0x10
        v7:0xc.d = v5_5:0xc.d u>> 0x10
        v5_5.d <<= 0x10
        v5_5:4.d <<= 0x10
        v5_5:8.d <<= 0x10
        v5_5:0xc.d <<= 0x10
        uint128_t v16_1
        v16_1.d = v4_3.d u>> 0x18
        v16_1:4.d = v4_3:4.d u>> 0x18
        v16_1:8.d = v4_3:8.d u>> 0x18
        v16_1:0xc.d = v4_3:0xc.d u>> 0x18
        v4_3.d <<= 8
        v4_3:4.d <<= 8
        v4_3:8.d <<= 8
        v4_3:0xc.d <<= 8
        *(x10_17 + x9_35) = v5_4 ^ v4_2 ^ v6_4 ^ v3_2 ^ vorrq_s8(v5_5, v7) ^ vorrq_s8(v4_3, v16_1)
        x9_35 += 0x10
    while (i_3 != 4)

arg6.q = var_70
arg5.q = var_68
