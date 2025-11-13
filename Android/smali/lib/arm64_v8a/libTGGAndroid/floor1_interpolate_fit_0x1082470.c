// 函数: floor1_interpolate_fit
// 地址: 0x1082470
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* result = nullptr

if (arg3 != 0 && arg4 != 0)
    int64_t x23_1 = sx.q(*(arg2 + 0x504))
    int64_t x22_1 = x23_1 << 2
    uint128_t v0_1
    uint128_t v1_1
    int128_t v2_1
    uint128_t v3_1
    uint128_t v4_1
    int128_t v5_1
    uint128_t v6_1
    result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1 = _vorbis_block_alloc(arg1, x22_1)
    
    if (x23_1.d s>= 1)
        int64_t i_4 = 0
        
        if (x23_1.d u< 4)
            goto label_1082608
        
        void* x10_1 = result + x22_1
        
        if (((result u< arg3 + x22_1 ? 1 : 0) & (x10_1 u> arg3 ? 1 : 0) & 1) != 0)
            i_4 = 0
        label_1082608:
            int64_t x12_2 = i_4 << 2
            int32_t* x10_5 = arg3 + x12_2
            int32_t* x11_4 = arg4 + x12_2
            void* x12_3 = result + x12_2
            int64_t i_2 = x23_1 - i_4
            int64_t i
            
            do
                int32_t x13_5 = ((*x11_4 & 0x7fff) * arg5 + (*x10_5 & 0x7fff) * (0x10000 - arg5)
                    + 0x8000) s>> 0x10
                *x12_3 = x13_5
                
                if ((zx.d(*(x10_5 + 1)) & 0x80) != 0 && (zx.d(*(x11_4 + 1)) & 0x80) != 0)
                    *x12_3 = x13_5 | 0x8000
                
                x10_5 = &x10_5[1]
                x11_4 = &x11_4[1]
                i = i_2
                i_2 -= 1
                x12_3 += 4
            while (i != 1)
        else
            i_4 = 0
            
            if (((result u< arg4 + x22_1 ? 1 : 0) & (x10_1 u> arg4 ? 1 : 0) & 1) != 0)
                goto label_1082608
            
            i_4 = x23_1 & 0xfffffffffffffffc
            v0_1.d = 0x10000 - arg5
            v0_1:4.d = 0x10000 - arg5
            v0_1:8.d = 0x10000 - arg5
            v0_1:0xc.d = 0x10000 - arg5
            v1_1.d = arg5
            v1_1:4.d = arg5
            v1_1:8.d = arg5
            v1_1:0xc.d = arg5
            v2_1.d = 0x7fff
            v2_1:4.d = 0x7fff
            v2_1:8.d = 0x7fff
            v2_1:0xc.d = 0x7fff
            v3_1.d = 0x8000
            v3_1:4.d = 0x8000
            v3_1:8.d = 0x8000
            v3_1:0xc.d = 0x8000
            int128_t* x10_4 = arg4
            int128_t* x11_3 = arg3
            int128_t* result_1 = result
            int64_t i_3 = i_4
            int64_t i_1
            
            do
                v4_1.d = (vmlaq_s32(vmulq_s32(*x11_3 & v2_1, v0_1), *x10_4 & v2_1, v1_1) + v3_1).d
                    s>> 0x10
                v4_1:4.d s>>= 0x10
                v4_1:8.d s>>= 0x10
                v4_1:0xc.d s>>= 0x10
                *result_1 = v4_1
                v6_1 = *x10_4
                uint128_t v5_3 = vtstq_u32(*x11_3, v3_1)
                uint128_t v6_2 = vtstq_u32(v6_1, v3_1)
                int128_t v5_4 = vmovn_s32(v5_3)
                v5_1 = vmovn_s32(v6_2) & v5_4
                
                if ((zx.d(v5_1.w) & 1) == 0)
                    if ((zx.d(v5_1:2.w) & 1) != 0)
                        goto label_1082554
                    
                    goto label_10825cc
                
                *result_1 = v4_1.d | 0x8000
                
                if ((zx.d(v5_1:2.w) & 1) != 0)
                label_1082554:
                    *(result_1 + 4) = v4_1:4.d | 0x8000
                    
                    if ((zx.d(v5_1:4.w) & 1) == 0)
                        goto label_10825d4
                    
                    goto label_1082568
                
            label_10825cc:
                
                if ((zx.d(v5_1:4.w) & 1) != 0)
                label_1082568:
                    *(result_1 + 8) = v4_1:8.d | 0x8000
                    
                    if ((zx.d(v5_1:6.w) & 1) != 0)
                        *(result_1 + 0xc) = v4_1:0xc.d | 0x8000
                else
                label_10825d4:
                    
                    if ((zx.d(v5_1:6.w) & 1) != 0)
                        *(result_1 + 0xc) = v4_1:0xc.d | 0x8000
                
                i_1 = i_3
                i_3 -= 4
                result_1 = &result_1[1]
                x11_3 = &x11_3[1]
                x10_4 = &x10_4[1]
            while (i_1 != 4)
            
            if (i_4 != x23_1)
                goto label_1082608

return result
