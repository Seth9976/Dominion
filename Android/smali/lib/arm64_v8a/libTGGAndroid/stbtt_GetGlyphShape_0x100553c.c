// 函数: stbtt_GetGlyphShape
// 地址: 0x100553c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22_1
int128_t var_a0

if (*(arg1 + 0x4c) == 0)
    int64_t x19_1 = *(arg1 + 8)
    int32_t x0_7
    uint128_t v0_1
    uint128_t v1_1
    uint128_t v2_1
    uint128_t v3_1
    uint128_t v4_1
    uint128_t v5_1
    x0_7, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = sub_1006190(arg1, arg2)
    *arg3 = 0
    
    if ((x0_7 & 0x80000000) != 0)
        x22_1 = 0
    else
        int16_t* x8_3 = x19_1 + zx.q(x0_7)
        uint64_t x24_1 = _byteswap(zx.q(*x8_3) << 0x30)
        int32_t x19_2 = sx.d((x24_1.d).w)
        int64_t* var_148_1
        int64_t x0_9
        
        if (x19_2 s< 1)
            var_148_1 = arg3
            
            if ((x19_2 & 0x80000000) != 0)
                x0_9 = 0
                x22_1 = 0
                void* x20_3 = &x8_3[5]
                
                while (true)
                    var_a0.q = 0
                    uint32_t x19_8 = zx.d(*(x20_3 + 1))
                    
                    if ((x19_8 & 2) == 0)
                        void* x0_21
                        int32_t x1_12
                        int32_t* x2_10
                        int32_t* x3_3
                        int32_t* x4_6
                        int32_t* x5_8
                        x0_21, x1_12, x2_10, x3_3, x4_6, x5_8 = __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0x729, 
                            "int stbtt__GetGlyphShapeTT(const stbtt_fontinfo *, int, stbtt_vertex **)", 
                            &data_75c628)
                        return stbtt_GetGlyphBox(x0_21, x1_12, x2_10, x3_3, x4_6, x5_8) __tailcall
                    
                    int64_t x9_10
                    
                    if ((x19_8 & 1) != 0)
                        uint16_t x9_12
                        v0_1.d = float.s(sx.d(x9_12))
                        v1_1.d = float.s(_byteswap(zx.d(*(x20_3 + 6))) s>> 0x10)
                        x9_10 = 8
                    else
                        char x8_7
                        v0_1.d = float.s(sx.d(x8_7))
                        v1_1.d = float.s(sx.d(*(x20_3 + 5)))
                        x9_10 = 6
                    
                    uint32_t x8_11 = zx.d(*(x20_3 + 2))
                    x20_3 += x9_10
                    uint128_t var_100_1 = v1_1
                    uint128_t var_f0_1 = v0_1
                    uint128_t var_140_1
                    uint128_t var_130_1
                    uint128_t var_120_1
                    uint128_t var_110_1
                    
                    if ((x19_8 & 8) != 0)
                        uint32_t x9_14 = zx.d(*x20_3)
                        x20_3 += 2
                        v0_1.d = float.s(0x38800000)
                        v1_1.d = float.s(_byteswap(x9_14) s>> 0x10)
                        v1_1.d = v1_1.d f* v0_1.d
                        v0_1.d = 0f
                        var_120_1 = v1_1
                        var_110_1 = v0_1
                        v0_1.d = 0f
                        var_140_1 = v0_1
                        var_130_1 = v1_1
                    else if ((x19_8 & 0x40) != 0)
                        v0_1.d = float.s(0x38800000)
                        v1_1.d = 0f
                        var_110_1 = v1_1
                        int32_t x9_19
                        v1_1.d = float.s(x9_19)
                        v2_1.d = float.s(_byteswap(zx.d(*(x20_3 + 2))) s>> 0x10)
                        v1_1.d = v1_1.d f* v0_1.d
                        v0_1.d = v2_1.d f* v0_1.d
                        var_130_1 = v1_1
                        var_120_1 = v0_1
                        v0_1.d = 0f
                        x20_3 += 4
                        var_140_1 = v0_1
                    else if ((x19_8 & 0x80) != 0)
                        uint32_t x10_12 = zx.d(*(x20_3 + 2))
                        v0_1.d = float.s(_byteswap(zx.d(*x20_3)) s>> 0x10)
                        uint32_t x9_23 = zx.d(*(x20_3 + 4))
                        v1_1.d = float.s(_byteswap(x10_12) s>> 0x10)
                        uint32_t x10_15 = zx.d(*(x20_3 + 6))
                        v2_1.d = float.s(_byteswap(x9_23) s>> 0x10)
                        v3_1.d = float.s(0x38800000)
                        v4_1.d = float.s(_byteswap(x10_15) s>> 0x10)
                        v5_1.d = v0_1.d f* v3_1.d
                        v0_1.d = v1_1.d f* v3_1.d
                        var_140_1 = v0_1
                        var_130_1 = v5_1
                        v1_1.d = v2_1.d f* v3_1.d
                        v0_1.d = v4_1.d f* v3_1.d
                        x20_3 += 8
                        var_120_1 = v0_1
                        var_110_1 = v1_1
                    else
                        v0_1.d = 0f
                        var_110_1 = v0_1
                        v0_1.d = 0f
                        v1_1.d = fconvert.s(1f)
                        var_140_1 = v0_1
                        v0_1.d = fconvert.s(1f)
                        var_130_1 = v0_1
                        var_120_1 = v1_1
                    
                    int32_t x0_11
                    uint128_t v6_1
                    uint128_t v7_1
                    uint128_t v18_1
                    uint128_t v19_1
                    int128_t v20_1
                    uint128_t v21_1
                    int128_t v22_1
                    uint128_t v25_1
                    uint128_t v26_1
                    uint128_t v27_1
                    uint128_t v28_1
                    uint128_t v29_1
                    uint128_t v30_1
                    x0_11, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v18_1, v19_1, v20_1, 
                        v21_1, v22_1, v25_1, v26_1, v27_1, v28_1, v29_1, v30_1 = stbtt_GetGlyphShape(
                        arg1, zx.q(_byteswap(x8_11 << 0x10)), &var_a0, v0_1, v1_1)
                    
                    if (x0_11 s< 1)
                        if ((x19_8 & 0x20) == 0)
                            goto label_1005fd0_1
                    else
                        void* x23_2 = var_a0.q
                        v0_1.d = var_130_1.d f* var_130_1.d
                        v1_1.d = var_140_1.d f* var_140_1.d
                        v2_1.d = var_110_1.d f* var_110_1.d
                        v3_1.d = var_120_1.d f* var_120_1.d
                        v0_1.d = v1_1.d f+ v0_1.d
                        v1_1.d = v3_1.d f+ v2_1.d
                        v0_1.d = sqrt(v0_1.d)
                        v1_1.d = sqrt(v1_1.d)
                        uint64_t x8_13 = zx.q(x0_11)
                        int64_t i_10
                        
                        if (x0_11 u>= 5)
                            v26_1 = var_100_1
                            v25_1 = var_f0_1
                            int64_t x9_29
                            
                            if ((x8_13 & 3) == 0)
                                x9_29 = 4
                            else
                                x9_29 = x8_13 & 3
                            
                            i_10 = x8_13 - x9_29
                            v2_1 = vdupq_laneq_s32(var_130_1, 0)
                            v3_1 = vdupq_laneq_s32(var_110_1, 0)
                            v4_1 = vdupq_laneq_s32(v25_1, 0)
                            v5_1 = vdupq_laneq_s32(v0_1, 0)
                            v6_1 = vdupq_laneq_s32(var_140_1, 0)
                            v7_1 = vdupq_laneq_s32(var_120_1, 0)
                            uint128_t v16_1 = vdupq_laneq_s32(v26_1, 0)
                            uint128_t v17_1 = vdupq_laneq_s32(v1_1, 0)
                            void* x10_16 = x23_2 + 0x1c
                            int64_t i_7 = i_10
                            int64_t i
                            
                            do
                                v19_1 = *(x10_16 - 0xc)
                                v18_1 = *(x10_16 - 0x1c)
                                v20_1 = data_71acf0
                                v22_1 = data_71c290
                                v21_1 = *(x10_16 + 4)
                                vdupq_laneq_s16(v18_1, 3)
                                int32_t x12_13 = *(x10_16 + 0x14)
                                vqtbl2q_s8(v18_1, v19_1, v20_1)
                                vqtbl2q_s8(v18_1, v19_1, v22_1)
                                uint128_t v23_1
                                v23_1.w = v18_1:4.w
                                int64_t v24_1
                                v24_1:2.w = v19_1:4.w
                                uint64_t v18_2 = vdup_laneq_s16(v21_1, 5)
                                uint128_t v19_2 = vdup_laneq_s16(v21_1, 6)
                                uint128_t v20_2
                                v20_2:6.w = v18_2:6.w
                                vextq_s8(v21_1, v21_1, 8)
                                uint128_t v18_3
                                v18_3:4.w = v21_1.w
                                int64_t v22_2
                                v22_2:6.w = v19_2:6.w
                                int128_t v18_4 = vext_s8(v18_3, v23_1, 4)
                                v24_1:4.w = v21_1:2.w
                                v19_2.d = sx.d(v20_2.w)
                                v19_2:4.d = sx.d(v20_2:2.w)
                                v19_2:8.d = sx.d(v20_2:4.w)
                                v19_2:0xc.d = sx.d(v20_2:6.w)
                                v20_2.d = sx.d(v22_2.w)
                                v20_2:4.d = sx.d(v22_2:2.w)
                                v20_2:8.d = sx.d(v22_2:4.w)
                                v20_2:0xc.d = sx.d(v22_2:6.w)
                                uint128_t v18_5 = vext_s8(v18_4, v18_4, 4)
                                v24_1:6.w = x12_13
                                float128 v19_3 = vcvtq_f32_s32(v19_2)
                                float128 v20_3 = vcvtq_f32_s32(v20_2)
                                float128 v21_2 = vmulq_f32(v2_1, v19_3, 0)
                                float128 v22_3 = vmulq_f32(v3_1, v20_3, 0)
                                float128 v19_4 = vmulq_f32(v6_1, v19_3, 0)
                                float128 v20_4 = vmulq_f32(v7_1, v20_3, 0)
                                v18_5.d = sx.d(v18_5.w)
                                v18_5:4.d = sx.d(v18_5:2.w)
                                v18_5:8.d = sx.d(v18_5:4.w)
                                v18_5:0xc.d = sx.d(v18_5:6.w)
                                v23_1.d = sx.d(v24_1.w)
                                v23_1:4.d = sx.d(v24_1:2.w)
                                v23_1:8.d = sx.d(v24_1:4.w)
                                v23_1:0xc.d = sx.d(v24_1:6.w)
                                float128 v21_3 = vaddq_f32(v21_2, v22_3)
                                float128 v19_5 = vaddq_f32(v19_4, v20_4)
                                float128 v18_6 = vcvtq_f32_s32(v18_5)
                                float128 v20_5 = vcvtq_f32_s32(v23_1)
                                float128 v21_4 = vaddq_f32(v4_1, v21_3)
                                float128 v22_4 = vmulq_f32(v2_1, v18_6, 0)
                                float128 v23_2 = vmulq_f32(v3_1, v20_5, 0)
                                float128 v18_7 = vmulq_f32(v6_1, v18_6, 0)
                                float128 v20_6 = vmulq_f32(v7_1, v20_5, 0)
                                float128 v19_6 = vaddq_f32(v16_1, v19_5)
                                float128 v21_5 = vmulq_f32(v5_1, v21_4, 0)
                                float128 v22_5 = vaddq_f32(v22_4, v23_2)
                                float128 v18_8 = vaddq_f32(v18_7, v20_6)
                                float128 v19_7 = vmulq_f32(v17_1, v19_6, 0)
                                uint128_t v20_7 = vcvtq_s32_f32(v21_5)
                                float128 v21_6 = vaddq_f32(v4_1, v22_5)
                                float128 v18_9 = vaddq_f32(v16_1, v18_8)
                                uint128_t v19_8 = vcvtq_s32_f32(v19_7)
                                float128 v21_7 = vmulq_f32(v5_1, v21_6, 0)
                                float128 v18_10 = vmulq_f32(v17_1, v18_9, 0)
                                int128_t v20_8 = vmovn_s32(v20_7)
                                int128_t v19_9 = vmovn_s32(v19_8)
                                uint128_t v21_8 = vcvtq_s32_f32(v21_7)
                                uint128_t v18_11 = vcvtq_s32_f32(v18_10)
                                int128_t v23_3 = vtrn2_s16(v20_8, v19_9)
                                v21_1 = vmovn_s32(v21_8)
                                int128_t v18_12 = vmovn_s32(v18_11)
                                int128_t v22_6 = vzip1_s16(v20_8, v19_9)
                                int128_t v19_10 = vzip2_s16(v20_8, v19_9)
                                int128_t v20_9 = vext_s8(v23_3, v20_8, 4)
                                int128_t v20_10 = vext_s8(vzip2_s16(v21_1, v18_12), v20_9, 4)
                                int128_t v22_7 =
                                    vext_s8(vext_s8(v21_1, vzip1_s16(v21_1, v18_12), 4), v22_6, 4)
                                int128_t v24_6 = vext_s8(v21_1, vtrn2_s16(v21_1, v18_12), 4)
                                v21_1:6.w = v18_12:4.w
                                int128_t v23_4 = vext_s8(v24_6, v23_3, 4)
                                uint64_t v18_13 = vext_s8(v20_10, v20_10, 4)
                                v19_1 = vext_s8(v21_1, v19_10, 4)
                                v20_1 = vext_s8(v22_7, v22_7, 4)
                                v22_1 = vext_s8(v23_4, v23_4, 4)
                                *(x10_16 + 0xe) = v18_13
                                v18_1 = vext_s8(v19_1, v19_1, 4)
                                i = i_7
                                i_7 -= 4
                                *(x10_16 - 0x1c) = v20_1.q
                                *(x10_16 - 0xe) = v22_1.q
                                *x10_16 = v18_1.q
                                x10_16 += 0x38
                            while (i != 4)
                        else
                            v26_1 = var_100_1
                            v25_1 = var_f0_1
                            i_10 = 0
                        
                        void* x10_18 = x23_2 + i_10 * 0xe + 4
                        int64_t i_6 = x8_13 - i_10
                        int64_t i_1
                        
                        do
                            v2_1.w = *(x10_18 - 4)
                            v3_1.w = *(x10_18 - 2)
                            v4_1.w = *x10_18
                            v5_1.w = *(x10_18 + 2)
                            v2_1.d = sx.d(v2_1.w)
                            v2_1:4.d = sx.d(v2_1:2.w)
                            v2_1:8.d = sx.d(v2_1:4.w)
                            v2_1:0xc.d = sx.d(v2_1:6.w)
                            v3_1.d = sx.d(v3_1.w)
                            v3_1:4.d = sx.d(v3_1:2.w)
                            v3_1:8.d = sx.d(v3_1:4.w)
                            v3_1:0xc.d = sx.d(v3_1:6.w)
                            v4_1.d = sx.d(v4_1.w)
                            v4_1:4.d = sx.d(v4_1:2.w)
                            v4_1:8.d = sx.d(v4_1:4.w)
                            v4_1:0xc.d = sx.d(v4_1:6.w)
                            v5_1.d = sx.d(v5_1.w)
                            v5_1:4.d = sx.d(v5_1:2.w)
                            v5_1:8.d = sx.d(v5_1:4.w)
                            v5_1:0xc.d = sx.d(v5_1:6.w)
                            v2_1.d = float.s(v2_1.d)
                            v3_1.d = float.s(v3_1.d)
                            v4_1.d = float.s(v4_1.d)
                            v5_1.d = float.s(v5_1.d)
                            v6_1.d = var_130_1.d f* v2_1.d
                            v7_1.d = var_110_1.d f* v3_1.d
                            v2_1.d = var_140_1.d f* v2_1.d
                            v3_1.d = var_120_1.d f* v3_1.d
                            v6_1.d = v6_1.d f+ v7_1.d
                            v7_1.d = var_130_1.d f* v4_1.d
                            v2_1.d = v2_1.d f+ v3_1.d
                            v3_1.d = var_110_1.d f* v5_1.d
                            v4_1.d = var_140_1.d f* v4_1.d
                            v5_1.d = var_120_1.d f* v5_1.d
                            v4_1.d = v4_1.d f+ v5_1.d
                            v5_1.d = v25_1.d f+ v6_1.d
                            v3_1.d = v7_1.d f+ v3_1.d
                            v2_1.d = v26_1.d f+ v2_1.d
                            v5_1.d = v0_1.d f* v5_1.d
                            v3_1.d = v25_1.d f+ v3_1.d
                            v2_1.d = v1_1.d f* v2_1.d
                            v4_1.d = v26_1.d f+ v4_1.d
                            v3_1.d = v0_1.d f* v3_1.d
                            *(x10_18 - 4) = vcvts_s32_f32(v5_1.d)
                            v4_1.d = v1_1.d f* v4_1.d
                            *(x10_18 - 2) = vcvts_s32_f32(v2_1.d)
                            *x10_18 = vcvts_s32_f32(v3_1.d)
                            i_1 = i_6
                            i_6 -= 1
                            *(x10_18 + 2) = vcvts_s32_f32(v4_1.d)
                            x10_18 += 0xe
                        while (i_1 != 1)
                        int32_t x24_4 = x0_11 + x22_1
                        int64_t x0_13 = malloc(muls.dp.d(x24_4, 0xe))
                        
                        if (x0_13 == 0)
                            if (x0_9 != 0)
                                free(x0_9)
                            
                            free(x23_2)
                            x22_1 = 0
                            break
                        
                        var_f0_1.q = x20_3
                        
                        if (x22_1 s>= 1)
                            memcpy(x0_13, x0_9, mulu.dp.d(x22_1, 0xe))
                        
                        memcpy(x0_13 + muls.dp.d(x22_1, 0xe), x23_2, muls.dp.d(x0_11, 0xe))
                        
                        if (x0_9 != 0)
                            free(x0_9)
                        
                        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = free(x23_2)
                        x20_3 = var_f0_1.q
                        x22_1 = x24_4
                        x0_9 = x0_13
                        
                        if ((x19_8 & 0x20) == 0)
                            goto label_1005fd0_1
            else
                x22_1 = 0
            label_1005fd0:
                *var_148_1 = 0
        else
            uint64_t x8_4 = zx.q(x19_2.w)
            void* x25_1 = &x8_3[5 + x8_4]
            char x27_1 = *x25_1
            uint64_t x26_1 = zx.q(*(x25_1 + 1))
            uint64_t x23_1 = _byteswap(zx.q(*(x25_1 - 2)) << 0x30)
            x0_9 = malloc(((1 | (0xffff & x8_4) << 1) + x23_1) * 0xe)
            
            if (x0_9 == 0)
                x22_1 = 0
            else
                uint64_t i_5 = zx.q(x23_1.d + 1)
                uint32_t x10_2 = 0
                uint32_t x11_1 = 0
                void* x9_4 = x25_1 + ((-0xff01 & x26_1) | zx.q(x27_1) << 8) + 2
                uint8_t* x12_2 = x0_9 + x24_1 * 0x1c + 0xc
                uint64_t i_9 = i_5
                uint64_t i_2
                
                do
                    if ((x11_1 & 0xff) != 0)
                        x11_1 -= 1
                    else
                        x10_2 = zx.d(*x9_4)
                        
                        if ((x10_2 & 8) != 0)
                            x11_1 = zx.d(*(x9_4 + 1))
                            x9_4 += 2
                        else
                            x11_1 = 0
                            x9_4 += 1
                    
                    i_2 = i_9
                    i_9 -= 1
                    *x12_2 = x10_2.b
                    x12_2 = &x12_2[0xe]
                while (i_2 != 1)
                int32_t x10_3 = 0
                void* x11_4 = x0_9 + zx.q(x19_2.w) * 0x1c
                uint64_t i_8 = i_5
                uint64_t i_3
                
                do
                    uint32_t x13_3 = zx.d(*(x11_4 + 0xc))
                    
                    if ((x13_3 & 2) != 0)
                        uint32_t x14_3 = zx.d(*x9_4)
                        x9_4 += 1
                        uint32_t x13_2
                        
                        if ((x13_3 & 0x10) == 0)
                            x13_2 = neg.d(x14_3)
                        else
                            x13_2 = x14_3
                        
                        x10_3 += x13_2
                    else if ((x13_3 & 0x10) == 0)
                        uint32_t x13_4 = zx.d(*x9_4)
                        x9_4 += 2
                        x10_3 += _byteswap(x13_4 << 0x10)
                    
                    i_3 = i_8
                    i_8 -= 1
                    *x11_4 = x10_3.w
                    x11_4 += 0xe
                while (i_3 != 1)
                int32_t x10_4 = 0
                char* x11_7 = x0_9 + zx.q(x19_2.w) * 0x1c + 0xc
                uint64_t i_4
                
                do
                    uint32_t x12_4 = zx.d(*x11_7)
                    
                    if ((x12_4 & 4) != 0)
                        uint32_t x13_7 = zx.d(*x9_4)
                        x9_4 += 1
                        uint32_t x12_3
                        
                        if ((x12_4 & 0x20) == 0)
                            x12_3 = neg.d(x13_7)
                        else
                            x12_3 = x13_7
                        
                        x10_4 += x12_3
                    else if ((x12_4 & 0x20) == 0)
                        uint32_t x12_5 = zx.d(*x9_4)
                        x9_4 += 2
                        x10_4 += _byteswap(x12_5 << 0x10)
                    
                    *(x11_7 - 0xa) = x10_4.w
                    i_4 = i_5
                    i_5 -= 1
                    x11_7 = &x11_7[0xe]
                while (i_4 != 1)
                int32_t x12_8 = 0
                int32_t x11_8 = 0
                int32_t x5_1 = 0
                int32_t x20_2 = 0
                int32_t x1_3 = 0
                int16_t x16_1 = 0
                int16_t x17_1 = 0
                int32_t x9_5 = 0
                int32_t x10_5 = 0
                int32_t x4_1 = 0
                int32_t x6_1 = 0
                int32_t x7_1
                bool cond:8_1
                
                do
                    int32_t x7_2 = x12_8 + (x8_4 << 1).d
                    int16_t* x2_3 = x0_9 + muls.dp.d(x7_2, 0xe)
                    uint32_t x19_3 = zx.d(x2_3[6].b)
                    int32_t x3_1 = sx.d(*x2_3)
                    int32_t x2_2 = sx.d(x2_3[1])
                    
                    if (x5_1 == x12_8)
                        if (x12_8 != 0)
                            int64_t x4_3
                            int16_t x5_5
                            
                            if (x4_1 == 0)
                                x4_3 = sx.q(i_5.d)
                                
                                if (x6_1 == 0)
                                    x5_5 = 0
                                    int16_t* x6_7 = x0_9 + x4_3 * 0xe
                                    *(x0_9 + muls.dp.d(i_5.d, 0xe) + 0xc) = 2
                                    *x6_7 = x17_1
                                    x6_7[1] = x16_1
                                    x6_7[2] = 0
                                else
                                    int16_t* x5_7 = x0_9 + x4_3 * 0xe
                                    *(x0_9 + muls.dp.d(i_5.d, 0xe) + 0xc) = 3
                                    *x5_7 = x17_1
                                    x5_7[1] = x16_1
                                    x5_7[2] = x10_5.w
                                    x5_5 = x9_5.w
                            else
                                if (x6_1 != 0)
                                    uint16_t* x4_2 = x0_9 + muls.dp.d(i_5.d, 0xe)
                                    i_5 = zx.q(i_5.d + 1)
                                    x4_2[6].b = 3
                                    x4_2[2] = x10_5.w
                                    *x4_2 = ((x1_3 + x10_5) u>> 1).w
                                    x4_2[1] = ((x20_2 + x9_5) u>> 1).w
                                    x4_2[3] = x9_5.w
                                
                                int16_t* x5_4 = x0_9 + muls.dp.d(i_5.d, 0xe)
                                x4_3 = sx.q(i_5.d)
                                x5_4[6].b = 3
                                *x5_4 = x17_1
                                x5_4[1] = x16_1
                                x5_4[2] = x1_3.w
                                x5_5 = x20_2.w
                            
                            i_5 = zx.q(i_5.d + 1)
                            *(x0_9 + x4_3 * 0xe + 6) = x5_5
                        
                        if ((x19_3 & 1) != 0)
                            x17_1 = x3_1.w
                            x16_1 = x2_2.w
                            x3_1 = x1_3
                            x2_2 = x20_2
                        else
                            int16_t* x17_2 = x0_9 + (sx.q(x7_2) + 1) * 0xe
                            int32_t x17_3 = sx.d(*x17_2)
                            void* x16_5 = x0_9 + (sx.q(x7_2) + 1) * 0xe
                            
                            if ((zx.d(x17_2[6].b) & 1) != 0)
                                x16_1 = *(x16_5 + 2)
                                x17_1 = x17_3.w & 0xffff
                                x12_8 += 1
                            else
                                x17_1 = ((x17_3 + x3_1) s>> 1).w
                                x16_1 = ((sx.d(*(x16_5 + 2)) + x2_2) s>> 1).w
                        
                        int16_t* x1_4 = x0_9 + muls.dp.d(i_5.d, 0xe)
                        x7_1 = 1
                        x1_4[6].b = 1
                        *x1_4 = x17_1
                        x1_4[1] = x16_1
                        *(x1_4 + 4) = 0
                        i_5 = zx.q(i_5.d + 1)
                        x6_1 = 0
                        x4_1 = not.d(x19_3) & 1
                        x5_1 = _byteswap(zx.d(x8_3[5 + sx.q(x11_8)]) << 0x10) + 1
                        x11_8 += 1
                        x1_3 = x3_1
                        x20_2 = x2_2
                    else if ((x19_3 & 1) != 0)
                        int16_t x7_3 = x2_2.w & 0xffff
                        int16_t x3_2 = x3_1.w & 0xffff
                        int64_t x2_5 = sx.q(i_5.d)
                        int16_t x19_7
                        
                        if (x6_1 == 0)
                            x19_7 = 0
                            int16_t* x6_6 = x0_9 + x2_5 * 0xe
                            *(x0_9 + muls.dp.d(i_5.d, 0xe) + 0xc) = 2
                            *x6_6 = x3_2
                            x6_6[1] = x7_3
                            x6_6[2] = 0
                        else
                            int16_t* x6_5 = x0_9 + x2_5 * 0xe
                            *(x0_9 + muls.dp.d(i_5.d, 0xe) + 0xc) = 3
                            *x6_5 = x3_2
                            x6_5[1] = x7_3
                            x6_5[2] = x10_5.w
                            x19_7 = x9_5.w
                        
                        x6_1 = 0
                        i_5 = zx.q(i_5.d + 1)
                        x7_1 = 1
                        *(x0_9 + x2_5 * 0xe + 6) = x19_7
                    else
                        x7_1 = 0
                        
                        if (x6_1 == 0)
                            x6_1 = 1
                            x10_5 = x3_1
                            x9_5 = x2_2
                        else
                            int16_t* x6_4 = x0_9 + muls.dp.d(i_5.d, 0xe)
                            x6_4[2] = x10_5.w
                            i_5 = zx.q(i_5.d + 1)
                            x6_4[6].b = 3
                            x6_4[3] = x9_5.w
                            *x6_4 = ((x10_5 + x3_1) u>> 1).w
                            x6_4[1] = ((x9_5 + x2_2) u>> 1).w
                            x6_1 = 1
                            x10_5 = x3_1
                            x9_5 = x2_2
                    
                    cond:8_1 = x12_8 s>= x23_1.d
                    x12_8 += 1
                while (not(cond:8_1))
                var_148_1 = arg3
                int64_t x11_11
                
                if (x4_1 == 0)
                    x11_11 = sx.q(i_5.d)
                    
                    if ((x7_1 & 1) == 0)
                        *(x0_9 + muls.dp.d(i_5.d, 0xe) + 0xc) = 3
                        int16_t* x12_14 = x0_9 + x11_11 * 0xe
                        *x12_14 = x17_1
                        x12_14[1] = x16_1
                        x12_14[2] = x10_5.w
                        x20_2 = x9_5
                    else
                        x20_2 = 0
                        *(x0_9 + muls.dp.d(i_5.d, 0xe) + 0xc) = 2
                        int16_t* x9_8 = x0_9 + x11_11 * 0xe
                        *x9_8 = x17_1
                        x9_8[1] = x16_1
                        x9_8[2] = 0
                else
                    if ((x7_1 & 1) == 0)
                        int16_t* x13_8 = x0_9 + muls.dp.d(i_5.d, 0xe)
                        i_5 = zx.q(i_5.d + 1)
                        x13_8[6].b = 3
                        *x13_8 = ((x1_3 + x10_5) u>> 1).w
                        x13_8[1] = ((x20_2 + x9_5) u>> 1).w
                        x13_8[2] = x10_5.w
                        x13_8[3] = x9_5.w
                    
                    x11_11 = sx.q(i_5.d)
                    int16_t* x9_7 = x0_9 + muls.dp.d(i_5.d, 0xe)
                    x9_7[6].b = 3
                    *x9_7 = x17_1
                    x9_7[1] = x16_1
                    x9_7[2] = x1_3.w
                
                *(x0_9 + x11_11 * 0xe + 6) = x20_2.w
                x22_1 = i_5.d + 1
            label_1005fd0_1:
                *var_148_1 = x0_9
else
    int32_t var_b0_1 = 0
    __builtin_memset(&var_a0, 0, 0x34)
    var_a0.d = 1
    int128_t var_e0
    __builtin_memset(&var_e0, 0, 0x30)
    int32_t x0_1
    int32_t x20_1
    void* x21_1
    int128_t v8
    int128_t v8_1
    int128_t v9
    int128_t v9_1
    int128_t v10
    int128_t v10_1
    x0_1, x20_1, x21_1, v8_1, v9_1, v10_1 = sub_100bc78(arg1, arg2, &var_a0, v8, v9, v10)
    
    if (x0_1 == 0)
        x22_1 = 0
        *arg3 = 0
    else
        int32_t var_70
        int64_t x0_3 = malloc(sx.q(var_70) * 0xe)
        *arg3 = x0_3
        int128_t var_c0
        var_c0:8.q = x0_3
        
        if (sub_100bc78(x21_1, x20_1, &var_e0, v8_1, v9_1, v10_1) == 0)
            x22_1 = 0
            *arg3 = 0
        else
            x22_1 = var_b0_1
            
            if (x22_1 != var_70)
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                    0x8e1, 
                    "int stbtt__GetGlyphShapeT2(const stbtt_fontinfo *, int, stbtt_vertex **)", 
                    "output_ctx.num_vertices == count_ctx.num_vertices")
                x22_1 = 0
                *arg3 = 0
return zx.q(x22_1)
