// 函数: sub_fdf27c
// 地址: 0xfdf27c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x23 = 0

if (arg4 - 1 u<= 3 && arg3 != 0 && arg2 != 0 && arg5 != 0)
    int32_t x8_1
    
    x8_1 = arg6 == 0 ? 0x5a : arg6
    
    int32_t x8_2
    
    x8_2 = x8_1 s< 0x64 ? x8_1 : 0x64
    
    int32_t x8_3
    
    x8_3 = x8_2 s> 1 ? x8_2 : 1
    
    uint32_t x9_1
    
    if (x8_3 s> 0x31)
        x9_1 = 0xc8 - (x8_3 << 1)
    else
        x9_1 = 0x1388 u/ x8_3
    
    char var_e8[0x40]
    char var_a8[0x40]
    
    for (int64_t i = 0; i != 0x40; )
        int64_t x0 = i << 2
        int64_t x1_3 = muls.dp.d(*(&data_868398 + x0) * x9_1 + 0x32, 0x51eb851f)
        int32_t x1_5 = (x1_3 s>> 0x25).d + (x1_3 u>> 0x3f).d
        int64_t x0_4 = muls.dp.d(*(&data_868498 + x0) * x9_1 + 0x32, 0x51eb851f)
        int32_t x1_6
        
        x1_6 = x1_5 s< 0xff ? x1_5 : 0xff
        
        int32_t x0_6 = (x0_4 s>> 0x25).d + (x0_4 u>> 0x3f).d
        uint64_t x2_2 = zx.q(*(&data_868598 + i))
        char x1_7
        
        x1_7 = x1_6 s> 1 ? x1_6.b : 1
        
        int32_t x0_7
        
        x0_7 = x0_6 s< 0xff ? x0_6 : 0xff
        
        i += 1
        char x0_8
        
        x0_8 = x0_7 s> 1 ? x0_7.b : 1
        
        var_a8[x2_2] = x1_7
        var_e8[x2_2] = x0_8
    
    float128 v0 = data_71bd80
    float128 v1 = data_71b640
    int64_t i_1 = 0
    void* const x11_1 = &data_86859b
    float128 v2
    v2.d = fconvert.s(1f)
    v2:4.d = fconvert.s(1f)
    v2:8.d = fconvert.s(1f)
    v2:0xc.d = fconvert.s(1f)
    int32_t var_3e8[0x40]
    int32_t var_2e8[0x40]
    
    do
        uint64_t x16_1 = zx.q(*(x11_1 - 3))
        uint64_t x17_1 = zx.q(*(x11_1 - 2))
        uint64_t x1_8 = zx.q(*(x11_1 - 1))
        uint64_t x2_3 = zx.q(*x11_1)
        float128 v3
        v3.d = 0x403504f3
        v3:4.d = 0x403504f3
        v3:8.d = 0x403504f3
        v3:0xc.d = 0x403504f3
        uint64_t x2_4 = zx.q(*(x11_1 + 1))
        uint64_t x7_1 = zx.q(*(x11_1 + 2))
        float128 v4
        v4.d = float.s(zx.d(var_a8[x16_1]))
        uint64_t x3_1 = zx.q(*(x11_1 + 3))
        float128 v5
        v5.d = float.s(zx.d(var_e8[x16_1]))
        uint64_t x4_1 = zx.q(*(x11_1 + 4))
        v4:2.w = zx.d(var_a8[x17_1])
        v5:2.w = zx.d(var_e8[x17_1])
        v4:4.w = zx.d(var_a8[x1_8])
        v5:4.w = zx.d(var_e8[x1_8])
        float128 v6
        v6.d = float.s(zx.d(var_a8[x2_4]))
        v6:2.w = zx.d(var_a8[x7_1])
        float128 v7
        v7.d = float.s(zx.d(var_e8[x2_4]))
        v6:4.w = zx.d(var_a8[x3_1])
        v4:6.w = zx.d(var_a8[x2_3])
        v7:2.w = zx.d(var_e8[x7_1])
        v6:6.w = zx.d(var_a8[x4_1])
        v7:4.w = zx.d(var_e8[x3_1])
        v5:6.w = zx.d(var_e8[x2_3])
        uint128_t v4_1
        v4_1.d = zx.d((v4 & true).w)
        v4_1:4.d = zx.d(v4_1:2.w)
        v4_1:8.d = zx.d(v4_1:4.w)
        v4_1:0xc.d = zx.d(v4_1:6.w)
        v7:6.w = zx.d(var_e8[x4_1])
        uint128_t v6_1
        v6_1.d = zx.d((v6 & true).w)
        v6_1:4.d = zx.d(v6_1:2.w)
        v6_1:8.d = zx.d(v6_1:4.w)
        v6_1:0xc.d = zx.d(v6_1:6.w)
        float128 v4_2 = vcvtq_f32_u32(v4_1)
        float128 v6_2 = vcvtq_f32_u32(v6_1)
        uint128_t v5_1
        v5_1.d = zx.d((v5 & true).w)
        v5_1:4.d = zx.d(v5_1:2.w)
        v5_1:8.d = zx.d(v5_1:4.w)
        v5_1:0xc.d = zx.d(v5_1:6.w)
        float128 v4_3 = vmulq_f32(v3, v4_2, 0)
        uint128_t v7_1
        v7_1.d = zx.d((v7 & true).w)
        v7_1:4.d = zx.d(v7_1:2.w)
        v7_1:8.d = zx.d(v7_1:4.w)
        v7_1:0xc.d = zx.d(v7_1:6.w)
        float128 v6_3 = vmulq_f32(v3, v6_2, 0)
        float128 v5_2 = vcvtq_f32_u32(v5_1)
        v7 = vcvtq_f32_u32(v7_1)
        float128 v4_4 = vmulq_f32(v4_3, v0, 0)
        float128 v6_4 = vmulq_f32(v6_3, v1, 0)
        v5 = vmulq_f32(v3, v5_2, 0)
        float128 v3_1 = vmulq_f32(v3, v7, 0)
        void* x16_3 = &var_2e8 + i_1
        float128 v4_5 = vdivq_f32(v2, v4_4)
        v6 = vdivq_f32(v2, v6_4)
        *x16_3 = v4_5
        *(x16_3 + 0x10) = v6
        int128_t* x16_4 = &var_3e8 + i_1
        i_1 += 0x20
        float128 v4_6 = vmulq_f32(v5, v0, 0)
        float128 v3_2 = vmulq_f32(v3_1, v1, 0)
        v4 = vdivq_f32(v2, v4_6)
        v3 = vdivq_f32(v2, v3_2)
        x11_1 += 8
        *x16_4 = v4
        x16_4[1] = v3
    while (i_1 != 0x100)
    
    int32_t var_1e8 = 0x1100c0ff
    char var_1e4_1 = 8
    uint8_t var_1e3_1 = (arg3 u>> 8).b
    uint8_t var_1e1_1 = (arg2 u>> 8).b
    v0.q = 0x301110200110103
    char var_1e2_1 = arg3.b
    char var_1e0_1 = arg2.b
    int32_t var_1d7_1 = 0xc4ff0111
    int16_t var_1d3_1 = 0xa201
    int64_t var_1df = 0x301110200110103
    char var_1d1_1 = 0
    (*arg1)(arg1[1], &data_8685d8, 0x19, v0)
    (*arg1)(arg1[1], &var_a8, 0x40)
    int64_t x8_6 = *arg1
    int64_t x0_13 = arg1[1]
    int32_t var_4f0[0x4]
    __builtin_memset(&var_4f0, 1, 1)
    x8_6(x0_13, &var_4f0, 1)
    (*arg1)(arg1[1], &var_e8, 0x40)
    (*arg1)(arg1[1], &var_1e8, 0x18)
    (*arg1)(arg1[1], &data_8671f9, 0x10)
    (*arg1)(arg1[1], &data_867209, 0xc)
    int64_t x8_11 = *arg1
    int64_t x0_18 = arg1[1]
    __builtin_memset(&var_4f0, 0x10, 1)
    x8_11(x0_18, &var_4f0, 1)
    (*arg1)(arg1[1], &data_867216, 0x10)
    (*arg1)(arg1[1], &data_867226, 0xa2)
    int64_t x8_14 = *arg1
    int64_t x0_21 = arg1[1]
    __builtin_memset(&var_4f0, 1, 1)
    x8_14(x0_21, &var_4f0, 1)
    (*arg1)(arg1[1], &data_8672c9, 0x10)
    (*arg1)(arg1[1], &data_8672d9, 0xc)
    int64_t x8_17 = *arg1
    int64_t x0_24 = arg1[1]
    __builtin_memset(&var_4f0, 0x11, 1)
    x8_17(x0_24, &var_4f0, 1)
    (*arg1)(arg1[1], &data_8672e6, 0x10)
    (*arg1)(arg1[1], &data_8672f6, 0xa2)
    uint128_t v0_1
    uint128_t v1_1
    uint128_t v4_7
    uint128_t v5_3
    float128 v16_1
    float128 v18_1
    uint128_t v19_1
    int128_t v20_1
    int128_t v21_1
    float128 v22_1
    float128 v23_1
    float128 v24_1
    float128 v25_1
    float128 v26_1
    float128 v27_1
    float128 v28_1
    float128 v29_1
    float128 v30_1
    v0_1, v1_1, v4_7, v5_3, v16_1, v18_1, v19_1, v20_1, v21_1, v22_1, v23_1, v24_1, v25_1, v26_1, 
        v27_1, v28_1, v29_1, v30_1 = (*arg1)(arg1[1], &data_8685f1, 0xe)
    int32_t x9_4 = arg4 s> 2 ? 1 : 0
    int64_t var_3f0 = 0
    
    if (arg3 s>= 1)
        int32_t x10_1 = x9_4 << 1
        v0_1.d = x9_4
        v0_1:4.d = x9_4
        v0_1:8.d = x9_4
        v0_1:0xc.d = x9_4
        int32_t var_6f8_1 = 0
        int32_t var_6f4_1 = arg2 * (arg3 - 1)
        int32_t x9_6 = arg2 << 3
        v1_1.d = arg2
        v1_1:4.d = arg2
        v1_1:8.d = arg2
        v1_1:0xc.d = arg2
        uint128_t var_630_1 = v0_1
        uint128_t var_620_1 = v1_1
        void var_4e0
        void* var_640_1 = &var_4e0
        void* var_638_1 = &var_1df:7
        v0_1.d = x10_1
        v0_1:4.d = x10_1
        v0_1:8.d = x10_1
        v0_1:0xc.d = x10_1
        uint128_t var_650_1 = v0_1
        data_71c940
        data_71ae50
        int32_t x26_1 = arg4 * arg2
        v0_1.d = 0x3e991687
        v0_1:4.d = 0x3e991687
        v0_1:8.d = 0x3e991687
        v0_1:0xc.d = 0x3e991687
        uint128_t var_680_1 = v0_1
        int128_t var_670
        __builtin_memcpy(&var_670, 
            "\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00\x01\x00\x"
        "00\x00\x02\x00\x00\x00\x03\x00\x00\x00", 
            0x20)
        v1_1.d = 0x3f1645a2
        v1_1:4.d = 0x3f1645a2
        v1_1:8.d = 0x3f1645a2
        v1_1:0xc.d = 0x3f1645a2
        v0_1.d = 0x3de978d5
        v0_1:4.d = 0x3de978d5
        v0_1:8.d = 0x3de978d5
        v0_1:0xc.d = 0x3de978d5
        v19_1.d = arg4
        v19_1:4.d = arg4
        v19_1:8.d = arg4
        v19_1:0xc.d = arg4
        int32_t var_5f8_1 = x26_1 * (arg3 - 1)
        uint128_t var_6a0_1 = v0_1
        uint128_t var_690_1 = v1_1
        v1_1.d = 0xbe2cca2e
        v1_1:4.d = 0xbe2cca2e
        v1_1:8.d = 0xbe2cca2e
        v1_1:0xc.d = 0xbe2cca2e
        v0_1.d = 0x3ea99ae9
        v0_1:4.d = 0x3ea99ae9
        v0_1:8.d = 0x3ea99ae9
        v0_1:0xc.d = 0x3ea99ae9
        int32_t x27_1 = 0
        int32_t x0_28 = 0
        int32_t x24_1 = 0
        int32_t x25_1 = 0
        uint128_t var_6d0_1 = v0_1
        uint128_t var_6c0_1 = v1_1
        v1_1.d = 0x3ed65e89
        v1_1:4.d = 0x3ed65e89
        v1_1:8.d = 0x3ed65e89
        v1_1:0xc.d = 0x3ed65e89
        v0_1.d = 0x3da685db
        v0_1:4.d = 0x3da685db
        v0_1:8.d = 0x3da685db
        v0_1:0xc.d = 0x3da685db
        void var_5e0
        void* var_6a8_1 = &var_5e0
        uint128_t var_6f0_1 = v0_1
        uint128_t var_6e0_1 = v1_1
        uint128_t var_610_1 = v19_1
        
        do
            if (arg2 s>= 1)
                int32_t fp_1 = 0
                
                do
                    v1_1.d = fp_1
                    v1_1:4.d = fp_1
                    v1_1:8.d = fp_1
                    v1_1:0xc.d = fp_1
                    uint32_t i_2 = *stbi__flip_vertically_on_write
                    int128_t var_660
                    uint128_t v0_2 = vorrq_s8(v1_1, var_660)
                    int32_t x5_2
                    
                    if (i_2 == 0)
                        v24_1 = var_680_1
                        v4_7 = var_670
                        void* x9_9 = var_6a8_1
                        uint128_t v2_3 = vcgtq_s32(var_620_1, v0_2)
                        uint128_t v1_3 = vorrq_s8(v1_1, v4_7)
                        int128_t v2_4 = vmulq_s32(var_620_1 + not.o(v0_2), v19_1) & not.o(v2_3)
                        void* x10_5 = var_640_1
                        void* x11_3 = var_638_1
                        int32_t x12_2 = var_5f8_1
                        int32_t x13_2 = var_6f8_1
                        v26_1 = var_6a0_1
                        v25_1 = var_690_1
                        v28_1 = var_6d0_1
                        v27_1 = var_6c0_1
                        v30_1 = var_6f0_1
                        v29_1 = var_6e0_1
                        float128 v4_14 = vcgtq_s32(var_620_1, v1_3)
                        int128_t v3_16 = vmulq_s32(var_620_1 + not.o(v1_3), v19_1) & not.o(v4_14)
                        v22_1.d = 0xc3000000
                        v22_1:4.d = 0xc3000000
                        v22_1:8.d = 0xc3000000
                        v22_1:0xc.d = 0xc3000000
                        v23_1.d = 0x3f000000
                        v23_1:4.d = 0x3f000000
                        v23_1:8.d = 0x3f000000
                        v23_1:0xc.d = 0x3f000000
                        x5_2 = x25_1
                        
                        do
                            v4_14.d = x13_2
                            v4_14:4.d = x13_2
                            v4_14:8.d = x13_2
                            v4_14:0xc.d = x13_2
                            int32_t x14_11
                            
                            if (x27_1 + i_2 s< arg3)
                                x14_11 = 0
                            else
                                x14_11 = x12_2
                            
                            uint128_t v5_10 = v4_14 i+ v0_2
                            uint128_t v6_14 = v4_14 i+ v1_3
                            v4_14.d = x14_11
                            v4_14:4.d = x14_11
                            v4_14:8.d = x14_11
                            v4_14:0xc.d = x14_11
                            uint128_t v7_15 = vmlaq_s32(v2_4 i+ v4_14, v5_10, v19_1)
                            v16_1.q = sx.q(v7_15.d)
                            v16_1:8.q = sx.q(v7_15:4.d)
                            uint32_t x0_38 = zx.d(*(arg5 + v16_1.q))
                            int128_t v17_6 = v7_15 + var_630_1
                            uint32_t x16_14 = zx.d(*(arg5 + v16_1:8.q))
                            v16_1.q = sx.q(v17_6.d)
                            v16_1:8.q = sx.q(v17_6:4.d)
                            uint128_t v4_16 = vmlaq_s32(v3_16 i+ v4_14, v6_14, v19_1)
                            v6_14.q = sx.q(v7_15:8.d)
                            v6_14:8.q = sx.q(v7_15:0xc.d)
                            uint64_t x17_13 = v6_14:8.q
                            uint64_t x15_10 = v6_14.q
                            v6_14.q = sx.q(v17_6:8.d)
                            v6_14:8.q = sx.q(v17_6:0xc.d)
                            uint64_t x2_13 = v16_1:8.q
                            uint32_t x3_10 = zx.d(*(arg5 + v16_1.q))
                            v16_1.d = float.s(x0_38)
                            v16_1:2.w = x16_14
                            uint32_t x16_16 = zx.d(*(arg5 + v6_14.q))
                            uint32_t x0_40 = zx.d(*(arg5 + v6_14:8.q))
                            v6_14.d = float.s(x3_10)
                            v6_14:2.w = zx.d(*(arg5 + x2_13))
                            uint128_t v7_16 = v7_15 + var_650_1
                            v16_1:4.w = zx.d(*(arg5 + x15_10))
                            v6_14:4.w = x16_16
                            v17_6.q = sx.q(v7_16:8.d)
                            v17_6:8.q = sx.q(v7_16:0xc.d)
                            v7_16.q = sx.q(v7_16.d)
                            v7_16:8.q = sx.q(v7_16:4.d)
                            v16_1:6.w = zx.d(*(arg5 + x17_13))
                            v6_14:6.w = x0_40
                            int64_t v16_10 = v16_1.q & true
                            v18_1.q = sx.q(v4_16.d)
                            v18_1:8.q = sx.q(v4_16:4.d)
                            uint128_t v5_11 = v4_16 + var_630_1
                            uint64_t x3_11 = v7_16:8.q
                            uint32_t x1_25 = zx.d(*(arg5 + v7_16.q))
                            v7_16.d = zx.d(v16_10.w)
                            v7_16:4.d = zx.d(v16_10:2.w)
                            v7_16:8.d = zx.d(v16_10:4.w)
                            v7_16:0xc.d = zx.d(v16_10:6.w)
                            uint128_t v6_15
                            v6_15.d = zx.d((v6_14 & true).w)
                            v6_15:4.d = zx.d(v6_15:2.w)
                            v6_15:8.d = zx.d(v6_15:4.w)
                            v6_15:0xc.d = zx.d(v6_15:6.w)
                            uint64_t x14_13 = v18_1:8.q
                            uint64_t x15_11 = v18_1.q
                            v18_1.q = sx.q(v5_11.d)
                            v18_1:8.q = sx.q(v5_11:4.d)
                            uint32_t x0_41 = zx.d(*(arg5 + x3_11))
                            float128 v7_17 = vcvtq_f32_u32(v7_16)
                            float128 v6_16 = vcvtq_f32_u32(v6_15)
                            uint32_t x4_7 = zx.d(*(arg5 + v17_6.q))
                            float128 v16_11 = vmulq_f32(v7_17, v24_1, 0)
                            float128 v18_8 = vmulq_f32(v6_16, v25_1, 0)
                            uint32_t x2_16 = zx.d(*(arg5 + v17_6:8.q))
                            float128 v17_7 = vmulq_f32(v7_17, v27_1, 0)
                            float128 v16_12 = vaddq_f32(v16_11, v18_8)
                            float128 v17_8 = vsubq_f32(v17_7, vmulq_f32(v6_16, v28_1, 0))
                            float128 v18_9
                            v18_9.d = float.s(x1_25)
                            v18_9:2.w = x0_41
                            v18_9:4.w = x4_7
                            v18_9:6.w = x2_16
                            uint128_t v18_10
                            v18_10.d = zx.d((v18_9 & true).w)
                            v18_10:4.d = zx.d(v18_10:2.w)
                            v18_10:8.d = zx.d(v18_10:4.w)
                            v18_10:0xc.d = zx.d(v18_10:6.w)
                            float128 v18_11 = vcvtq_f32_u32(v18_10)
                            float128 v6_18 =
                                vsubq_f32(vmulq_f32(v7_17, v23_1, 0), vmulq_f32(v6_16, v29_1, 0))
                            float128 v7_20 = vaddq_f32(v16_12, vmulq_f32(v18_11, v26_1, 0))
                            float128 v16_13 = vmulq_f32(v18_11, v23_1, 0)
                            float128 v18_12 = vmulq_f32(v18_11, v30_1, 0)
                            float128 v16_14 = vaddq_f32(v17_8, v16_13)
                            float128 v6_19 = vsubq_f32(v6_18, v18_12)
                            float128 v7_21 = vaddq_f32(v7_20, v22_1)
                            *(x10_5 - 0x10) = v16_14
                            *(x9_9 - 0x10) = v6_19
                            *(x11_3 - 0x10) = v7_21
                            uint128_t v6_20 = v4_16 + var_650_1
                            v7_21.q = sx.q(v6_20.d)
                            v7_21:8.q = sx.q(v6_20:4.d)
                            v17_8.d = float.s(zx.d(*(arg5 + v18_1.q)))
                            v16_14.d = float.s(zx.d(*(arg5 + x15_11)))
                            uint32_t x15_14 = zx.d(*(arg5 + v7_21:8.q))
                            v4_16.q = sx.q(v4_16:8.d)
                            v4_16:8.q = sx.q(v4_16:0xc.d)
                            v7_21.d = float.s(zx.d(*(arg5 + v7_21.q)))
                            uint64_t x17_20 = v4_16:8.q
                            v16_14:2.w = zx.d(*(arg5 + x14_13))
                            uint64_t x14_15 = v4_16.q
                            v4_16.q = sx.q(v5_11:8.d)
                            v4_16:8.q = sx.q(v5_11:0xc.d)
                            v7_21:2.w = x15_14
                            uint32_t x15_16 = zx.d(*(arg5 + v4_16.q))
                            v17_8:2.w = zx.d(*(arg5 + v18_1:8.q))
                            uint64_t x16_19 = v4_16:8.q
                            v4_16.q = sx.q(v6_20:8.d)
                            v4_16:8.q = sx.q(v6_20:0xc.d)
                            v17_8:4.w = x15_16
                            v16_14:4.w = zx.d(*(arg5 + x14_15))
                            v7_21:4.w = zx.d(*(arg5 + v4_16.q))
                            v16_14:6.w = zx.d(*(arg5 + x17_20))
                            v17_8:6.w = zx.d(*(arg5 + x16_19))
                            v7_21:6.w = zx.d(*(arg5 + v4_16:8.q))
                            int64_t v16_15 = v16_14.q & true
                            int64_t v17_9 = v17_8.q & true
                            int64_t v7_22 = v7_21.q & true
                            v4_16.d = zx.d(v16_15.w)
                            v4_16:4.d = zx.d(v16_15:2.w)
                            v4_16:8.d = zx.d(v16_15:4.w)
                            v4_16:0xc.d = zx.d(v16_15:6.w)
                            v5_11.d = zx.d(v17_9.w)
                            v5_11:4.d = zx.d(v17_9:2.w)
                            v5_11:8.d = zx.d(v17_9:4.w)
                            v5_11:0xc.d = zx.d(v17_9:6.w)
                            v6_20.d = zx.d(v7_22.w)
                            v6_20:4.d = zx.d(v7_22:2.w)
                            v6_20:8.d = zx.d(v7_22:4.w)
                            v6_20:0xc.d = zx.d(v7_22:6.w)
                            float128 v4_17 = vcvtq_f32_u32(v4_16)
                            float128 v5_12 = vcvtq_f32_u32(v5_11)
                            float128 v6_21 = vcvtq_f32_u32(v6_20)
                            float128 v7_23 = vmulq_f32(v4_17, v24_1, 0)
                            float128 v16_16 = vmulq_f32(v5_12, v25_1, 0)
                            float128 v17_10 = vmulq_f32(v6_21, v26_1, 0)
                            float128 v18_13 = vmulq_f32(v4_17, v27_1, 0)
                            float128 v7_24 = vaddq_f32(v7_23, v16_16)
                            float128 v16_17 = vmulq_f32(v5_12, v28_1, 0)
                            float128 v4_18 = vmulq_f32(v4_17, v23_1, 0)
                            float128 v5_13 = vmulq_f32(v5_12, v29_1, 0)
                            v16_1 = vsubq_f32(v18_13, v16_17)
                            v18_1 = vmulq_f32(v6_21, v23_1, 0)
                            float128 v6_22 = vmulq_f32(v6_21, v30_1, 0)
                            float128 v4_19 = vsubq_f32(v4_18, v5_13)
                            float128 v5_14 = vaddq_f32(v7_24, v17_10)
                            i_2 += 1
                            float128 v7_25 = vaddq_f32(v16_1, v18_1)
                            v4_14 = vsubq_f32(v4_19, v6_22)
                            float128 v5_15 = vaddq_f32(v5_14, v22_1)
                            x13_2 += arg2
                            x12_2 -= x26_1
                            *x10_5 = v7_25
                            x10_5 += 0x20
                            *x9_9 = v4_14
                            x9_9 += 0x20
                            *x11_3 = v5_15
                            x11_3 += 0x20
                        while (i_2 != 8)
                    else
                        v24_1 = var_680_1
                        v4_7 = var_670
                        void* x9_8 = var_6a8_1
                        uint128_t v2_1 = vcgtq_s32(var_620_1, v0_2)
                        uint128_t v1_2 = vorrq_s8(v1_1, v4_7)
                        uint128_t v2_2 = vmulq_s32(var_620_1 + not.o(v0_2), v19_1) & not.o(v2_1)
                        void* x10_4 = var_640_1
                        void* x11_2 = var_638_1
                        int32_t x12_1 = var_5f8_1
                        int32_t x13_1 = var_6f4_1
                        v26_1 = var_6a0_1
                        v25_1 = var_690_1
                        v28_1 = var_6d0_1
                        v27_1 = var_6c0_1
                        v30_1 = var_6f0_1
                        v29_1 = var_6e0_1
                        uint128_t v4_8 = vcgtq_s32(var_620_1, v1_2)
                        int32_t i_3 = 0
                        int128_t v3_9 = vmulq_s32(var_620_1 + not.o(v1_2), v19_1) & not.o(v4_8)
                        v22_1.d = 0xc3000000
                        v22_1:4.d = 0xc3000000
                        v22_1:8.d = 0xc3000000
                        v22_1:0xc.d = 0xc3000000
                        v23_1.d = 0x3f000000
                        v23_1:4.d = 0x3f000000
                        v23_1:8.d = 0x3f000000
                        v23_1:0xc.d = 0x3f000000
                        x5_2 = x25_1
                        
                        do
                            v4_8.d = x13_1
                            v4_8:4.d = x13_1
                            v4_8:8.d = x13_1
                            v4_8:0xc.d = x13_1
                            int32_t x14_2
                            
                            if (x27_1 + i_3 s< arg3)
                                x14_2 = 0
                            else
                                x14_2 = x12_1
                            
                            uint128_t v5_4 = v4_8 + v0_2
                            uint128_t v6_5 = v4_8 + v1_2
                            v4_8.d = x14_2
                            v4_8:4.d = x14_2
                            v4_8:8.d = x14_2
                            v4_8:0xc.d = x14_2
                            uint128_t v7_3 = vmlaq_s32(v2_2 + v4_8, v5_4, v19_1)
                            v16_1.q = sx.q(v7_3.d)
                            v16_1:8.q = sx.q(v7_3:4.d)
                            uint32_t x0_34 = zx.d(*(arg5 + v16_1.q))
                            int128_t v17_1 = v7_3 + var_630_1
                            uint32_t x16_6 = zx.d(*(arg5 + v16_1:8.q))
                            v16_1.q = sx.q(v17_1.d)
                            v16_1:8.q = sx.q(v17_1:4.d)
                            uint128_t v4_10 = vmlaq_s32(v3_9 + v4_8, v6_5, v19_1)
                            v6_5.q = sx.q(v7_3:8.d)
                            v6_5:8.q = sx.q(v7_3:0xc.d)
                            uint64_t x17_4 = v6_5:8.q
                            uint64_t x15_1 = v6_5.q
                            v6_5.q = sx.q(v17_1:8.d)
                            v6_5:8.q = sx.q(v17_1:0xc.d)
                            uint64_t x2_9 = v16_1:8.q
                            uint32_t x3_7 = zx.d(*(arg5 + v16_1.q))
                            v16_1.d = float.s(x0_34)
                            v16_1:2.w = x16_6
                            uint32_t x16_8 = zx.d(*(arg5 + v6_5.q))
                            uint32_t x0_36 = zx.d(*(arg5 + v6_5:8.q))
                            v6_5.d = float.s(x3_7)
                            v6_5:2.w = zx.d(*(arg5 + x2_9))
                            uint128_t v7_4 = v7_3 + var_650_1
                            v16_1:4.w = zx.d(*(arg5 + x15_1))
                            v6_5:4.w = x16_8
                            v17_1.q = sx.q(v7_4:8.d)
                            v17_1:8.q = sx.q(v7_4:0xc.d)
                            v7_4.q = sx.q(v7_4.d)
                            v7_4:8.q = sx.q(v7_4:4.d)
                            v16_1:6.w = zx.d(*(arg5 + x17_4))
                            v6_5:6.w = x0_36
                            int64_t v16_2 = v16_1.q & true
                            v18_1.q = sx.q(v4_10.d)
                            v18_1:8.q = sx.q(v4_10:4.d)
                            uint128_t v5_5 = v4_10 + var_630_1
                            uint64_t x3_8 = v7_4:8.q
                            uint32_t x1_22 = zx.d(*(arg5 + v7_4.q))
                            v7_4.d = zx.d(v16_2.w)
                            v7_4:4.d = zx.d(v16_2:2.w)
                            v7_4:8.d = zx.d(v16_2:4.w)
                            v7_4:0xc.d = zx.d(v16_2:6.w)
                            uint128_t v6_6
                            v6_6.d = zx.d((v6_5 & true).w)
                            v6_6:4.d = zx.d(v6_6:2.w)
                            v6_6:8.d = zx.d(v6_6:4.w)
                            v6_6:0xc.d = zx.d(v6_6:6.w)
                            uint64_t x14_4 = v18_1:8.q
                            uint64_t x15_2 = v18_1.q
                            v18_1.q = sx.q(v5_5.d)
                            v18_1:8.q = sx.q(v5_5:4.d)
                            uint32_t x0_37 = zx.d(*(arg5 + x3_8))
                            float128 v7_5 = vcvtq_f32_u32(v7_4)
                            float128 v6_7 = vcvtq_f32_u32(v6_6)
                            uint32_t x4_6 = zx.d(*(arg5 + v17_1.q))
                            float128 v16_3 = vmulq_f32(v7_5, v24_1, 0)
                            float128 v18_2 = vmulq_f32(v6_7, v25_1, 0)
                            uint32_t x2_12 = zx.d(*(arg5 + v17_1:8.q))
                            float128 v17_2 = vmulq_f32(v7_5, v27_1, 0)
                            float128 v16_4 = vaddq_f32(v16_3, v18_2)
                            float128 v17_3 = vsubq_f32(v17_2, vmulq_f32(v6_7, v28_1, 0))
                            float128 v18_3
                            v18_3.d = float.s(x1_22)
                            v18_3:2.w = x0_37
                            v18_3:4.w = x4_6
                            v18_3:6.w = x2_12
                            uint128_t v18_4
                            v18_4.d = zx.d((v18_3 & true).w)
                            v18_4:4.d = zx.d(v18_4:2.w)
                            v18_4:8.d = zx.d(v18_4:4.w)
                            v18_4:0xc.d = zx.d(v18_4:6.w)
                            float128 v18_5 = vcvtq_f32_u32(v18_4)
                            float128 v6_9 =
                                vsubq_f32(vmulq_f32(v7_5, v23_1, 0), vmulq_f32(v6_7, v29_1, 0))
                            float128 v7_8 = vaddq_f32(v16_4, vmulq_f32(v18_5, v26_1, 0))
                            float128 v16_5 = vmulq_f32(v18_5, v23_1, 0)
                            float128 v18_6 = vmulq_f32(v18_5, v30_1, 0)
                            float128 v16_6 = vaddq_f32(v17_3, v16_5)
                            float128 v6_10 = vsubq_f32(v6_9, v18_6)
                            float128 v7_9 = vaddq_f32(v7_8, v22_1)
                            *(x10_4 - 0x10) = v16_6
                            *(x9_8 - 0x10) = v6_10
                            *(x11_2 - 0x10) = v7_9
                            uint128_t v6_11 = v4_10 + var_650_1
                            v7_9.q = sx.q(v6_11.d)
                            v7_9:8.q = sx.q(v6_11:4.d)
                            v17_3.d = float.s(zx.d(*(arg5 + v18_1.q)))
                            v16_6.d = float.s(zx.d(*(arg5 + x15_2)))
                            uint32_t x15_5 = zx.d(*(arg5 + v7_9:8.q))
                            v4_10.q = sx.q(v4_10:8.d)
                            v4_10:8.q = sx.q(v4_10:0xc.d)
                            v7_9.d = float.s(zx.d(*(arg5 + v7_9.q)))
                            uint64_t x17_11 = v4_10:8.q
                            v16_6:2.w = zx.d(*(arg5 + x14_4))
                            uint64_t x14_6 = v4_10.q
                            v4_10.q = sx.q(v5_5:8.d)
                            v4_10:8.q = sx.q(v5_5:0xc.d)
                            v7_9:2.w = x15_5
                            uint32_t x15_7 = zx.d(*(arg5 + v4_10.q))
                            v17_3:2.w = zx.d(*(arg5 + v18_1:8.q))
                            uint64_t x16_11 = v4_10:8.q
                            v4_10.q = sx.q(v6_11:8.d)
                            v4_10:8.q = sx.q(v6_11:0xc.d)
                            v17_3:4.w = x15_7
                            v16_6:4.w = zx.d(*(arg5 + x14_6))
                            v7_9:4.w = zx.d(*(arg5 + v4_10.q))
                            v16_6:6.w = zx.d(*(arg5 + x17_11))
                            v17_3:6.w = zx.d(*(arg5 + x16_11))
                            v7_9:6.w = zx.d(*(arg5 + v4_10:8.q))
                            int64_t v16_7 = v16_6.q & true
                            int64_t v17_4 = v17_3.q & true
                            int64_t v7_10 = v7_9.q & true
                            v4_10.d = zx.d(v16_7.w)
                            v4_10:4.d = zx.d(v16_7:2.w)
                            v4_10:8.d = zx.d(v16_7:4.w)
                            v4_10:0xc.d = zx.d(v16_7:6.w)
                            v5_5.d = zx.d(v17_4.w)
                            v5_5:4.d = zx.d(v17_4:2.w)
                            v5_5:8.d = zx.d(v17_4:4.w)
                            v5_5:0xc.d = zx.d(v17_4:6.w)
                            v6_11.d = zx.d(v7_10.w)
                            v6_11:4.d = zx.d(v7_10:2.w)
                            v6_11:8.d = zx.d(v7_10:4.w)
                            v6_11:0xc.d = zx.d(v7_10:6.w)
                            float128 v4_11 = vcvtq_f32_u32(v4_10)
                            float128 v5_6 = vcvtq_f32_u32(v5_5)
                            float128 v6_12 = vcvtq_f32_u32(v6_11)
                            float128 v7_11 = vmulq_f32(v4_11, v24_1, 0)
                            float128 v16_8 = vmulq_f32(v5_6, v25_1, 0)
                            float128 v17_5 = vmulq_f32(v6_12, v26_1, 0)
                            float128 v18_7 = vmulq_f32(v4_11, v27_1, 0)
                            float128 v7_12 = vaddq_f32(v7_11, v16_8)
                            float128 v16_9 = vmulq_f32(v5_6, v28_1, 0)
                            float128 v4_12 = vmulq_f32(v4_11, v23_1, 0)
                            float128 v5_7 = vmulq_f32(v5_6, v29_1, 0)
                            v16_1 = vsubq_f32(v18_7, v16_9)
                            v18_1 = vmulq_f32(v6_12, v23_1, 0)
                            float128 v6_13 = vmulq_f32(v6_12, v30_1, 0)
                            float128 v4_13 = vsubq_f32(v4_12, v5_7)
                            float128 v5_8 = vaddq_f32(v7_12, v17_5)
                            i_3 += 1
                            float128 v7_13 = vaddq_f32(v16_1, v18_1)
                            v4_8 = vsubq_f32(v4_13, v6_13)
                            float128 v5_9 = vaddq_f32(v5_8, v22_1)
                            x13_1 -= arg2
                            x12_1 -= x26_1
                            *x10_4 = v7_13
                            x10_4 += 0x20
                            *x9_8 = v4_8
                            x9_8 += 0x20
                            *x11_2 = v5_9
                            x11_2 += 0x20
                        while (i_3 != 8)
                    
                    x25_1 = sub_fe97ac(arg1, &var_3f0:4, &var_3f0, &var_1e8, &var_2e8, x5_2, 
                        0x867398, 0x867b98)
                    x24_1 = sub_fe97ac(arg1, &var_3f0:4, &var_3f0, &var_4f0, &var_3e8, x24_1, 
                        0x867798, 0x867f98)
                    int32_t var_5f0[0x4]
                    x0_28, v0_1, v1_1, v4_7, v5_3, v16_1, v18_1, v19_1, v20_1, v21_1, v22_1, v23_1, 
                        v24_1, v25_1, v26_1, v27_1, v28_1, v29_1, v30_1 = sub_fe97ac(arg1, &var_3f0:4, 
                        &var_3f0, &var_5f0, &var_3e8, x0_28, 0x867798, 0x867f98)
                    v19_1 = var_610_1
                    fp_1 += 8
                while (fp_1 s< arg2)
            
            x27_1 += 8
            var_6f4_1 -= x9_6
            var_5f8_1 -= x26_1 << 3
            var_6f8_1 += x9_6
        while (x27_1 s< arg3)
        
        int32_t x8_29 = var_3f0.d
        
        if (x8_29 s>= 1)
            int32_t x20_2 = 0x7f << (0x11 - x8_29) | var_3f0:4.d
            int32_t i_4 = x8_29 + 0xf
            
            do
                var_1e8.b = (x20_2 u>> 0x10).b
                (*arg1)(arg1[1], &var_1e8, 1)
                
                if ((not.d(x20_2) & 0xff0000) == 0)
                    var_1e8.b = 0
                    (*arg1)(arg1[1], &var_1e8, 1)
                
                i_4 -= 8
                x20_2 <<= 8
            while (i_4 s> 0xf)
    
    var_1e8.b = 0xff
    x23 = 1
    (*arg1)(arg1[1], &var_1e8, 1)
    var_1e8.b = 0xd9
    (*arg1)(arg1[1], &var_1e8, 1)

if (*(x25 + 0x28) == x8)
    return zx.q(x23)

__stack_chk_fail()
noreturn
