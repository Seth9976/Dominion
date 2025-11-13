// 函数: _Z10DrawSlopesR7MapDataRK5Bin2D
// 地址: 0xc1ed3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_80 = v11
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
MapData& x20 = arg1
int64_t x21 = 0
int64_t v10
v10.d = fconvert.s(1f)
int64_t v12
v12.d = fconvert.s(0.5f)
int64_t v13
v13.d = fconvert.s(-0.5f)
int64_t v14
v14.d = fconvert.s(-2f)
int64_t v15
v15.d = 0f
void* __offset(MapData, 0xfffd4) x9 = arg1 + 0xfffd4
float var_c4 = *TWO_PI
uint32_t var_a4 = *COLOR_COAST
bool cond:0_1

do
    v8.d = *(x20 + x21 * 0xc + 0x18)
    
    if (not(v8.d f<= 0f))
        v9.d = *(x20 + x21 * 0xc + 0x10)
        
        if (not(v9.d f< float.s(0x3ccccccd)) && not(v9.d f> float.s(0x3ffccccd)))
            v11.d = *(x20 + x21 * 0xc + 0x14)
            
            if (not(v11.d f< float.s(0x3ccccccd)) && not(v11.d f> float.s(0x3f79999a)))
                float var_b0 = v9.d
                int32_t var_ac_1 = v11.d
                
                if ((Bin2DQuery(arg2, &var_b0, 5, float.s(0x3c23d70a)).d & 1) == 0)
                    int64_t x9_2 = sx.q(*(x20 + 0x10 + (x21 << 2) + 0xeffc0))
                    int32_t i = *(x20 + 0x10 + (x9_2 << 2) + 0xfffc0)
                    float v1_1 = *V20
                    float v0 = *(V20 + 4)
                    float v2_1
                    
                    if (i == 0xffffffff)
                        v2_1 = 0f
                    else
                        int64_t x8_4 = 0
                        
                        do
                            void* x11_2 = x20 + muls.dp.d(i, 0xc)
                            i = *(x9 + (x9_2 << 2) + (x8_4 << 2))
                            x8_4 += 1
                            v2_1 = *(x11_2 + 0x18) f- v8.d
                            float v3_1 = *(x11_2 + 0x10) f- v9.d
                            float v4_1 = *(x11_2 + 0x14) f- v11.d
                            float v5_1 = v3_1 * v2_1
                            v3_1 = v10.d f/ (v3_1 * v3_1 + v4_1 * v4_1)
                            v1_1 = v1_1 + v5_1 * v3_1
                            v0 = v0 + v4_1 * v2_1 * v3_1
                        while (i != 0xffffffff)
                        
                        v2_1 = float.s(x8_4.d)
                    
                    v2_1 = v10.d f/ v2_1
                    v8.d = v1_1 * v2_1
                    
                    if (not(fabs(v8.d) < float.s(0x3e4ccccd)))
                        v9.d = v0 * v2_1
                        v11.d =
                            RandomRange(x20, fconvert.s(1f), fconvert.s(2f)) f* float.s(0x3a000000)
                        float v0_3 = atanf(v8.d)
                        v11.d = v11.d f* (v0_3 * v0_3 * float.s(0xbe4ccccd) f+ v10.d)
                        Vec2* x2_1
                        v0, arg1, x2_1 = expf(v9.d f/ float.s(0x42c80000))
                        v0 = v0 f* v11.d
                        float v1_4 = v8.d f* v0
                        var_a4:3.b = 0xff
                        float var_b8
                        float v2_3
                        
                        if (fabs(v1_4) <= float.s(0x3a800000))
                            v2_3 = *(x20 + x21 * 0xc + 0x10)
                            float v4_2 = *(x20 + x21 * 0xc + 0x14)
                            float v5_2 = float.s(0x44800000)
                            float v6_1 = v2_3 - v0
                            v0 = v0 + v2_3
                            v2_3 = v1_4 + v4_2
                            float v3_2 = float.s(0x3a800000)
                            v1_4 = v4_2 - v1_4
                            v4_2 = v6_1 * v5_2
                            v2_3 = v2_3 * v5_2
                            var_b0 = v4_2
                            float var_ac_3 = v2_3
                            v2_3 = v2_3 * v3_2
                            v0 = v0 * v5_2
                            v1_4 = v1_4 * v5_2
                            var_b8 = v0
                            float var_b4_2 = v1_4
                            
                            if (not(v2_3 > float.s(0x3f79999a)))
                                v3_2 = v4_2 * v3_2
                                
                                if (not(v3_2 < float.s(0x3ccccccd))
                                        && not(v3_2 > float.s(0x3ffccccd))
                                        && not(v2_3 < float.s(0x3ccccccd)))
                                    v2_3 = float.s(0x3a800000)
                                    v1_4 = v1_4 * v2_3
                                    
                                    if (not(v1_4 > float.s(0x3f79999a)))
                                        v0 = v0 * v2_3
                                        
                                        if (not(v0 < float.s(0x3ccccccd))
                                                && not(v0 > float.s(0x3ffccccd))
                                                && not(v1_4 < float.s(0x3ccccccd)))
                                            Line2Draw(&var_b0, &var_b8, x2_1, &var_a4, 
                                                *MATERIAL_EFFECTS_CHART_SPINETINT_ZWRITE, 
                                                *TEXTURE_UI_ART_CAMPAIGN_MAP_STROKE, 
                                                float.s(0x3e8ccccd))
                        else
                            float temp0_1 = vrndm_f32(fabs(v1_4 * float.s(0x45000000)))
                            
                            if (temp0_1 < 0f)
                                v2_3 = v13.d
                            else
                                v2_3 = v12.d
                            
                            uint32_t temp0_2 = vcvts_s32_f32(temp0_1 + v2_3)
                            
                            if (temp0_2 s>= 1)
                                v11.d = v0 / float.s(temp0_2)
                                float var_c8_1 = v8.d f* v11.d
                                float x_1 = RandomUnit(x20)
                                int64_t x0_4
                                int64_t x1_1
                                int32_t n
                                float v0_4
                                x0_4, x1_1, n, v0_4 = RandomUnit(x20)
                                v12.d = var_c4
                                v13.d = float.s(0x3727c5ac)
                                float x
                                
                                x = x_1 == 0f ? v13.d : x_1
                                
                                float v0_7 = cosf(x0_4, x1_1, n, v0_4 f* v12.d)
                                    * sqrt(logf(x) f* v14.d) f+ v15.d
                                v14.d = float.s(0x3a000000)
                                v15.d = v0_7 f* v14.d
                                int64_t v0_8 = RandomUnit(x20)
                                int64_t x0_7
                                int64_t x1_2
                                int32_t n_1
                                float v0_9
                                x0_7, x1_2, n_1, v0_9 = RandomUnit(x20)
                                
                                if (v0_8.d f== 0f)
                                    v8.d = v13.d
                                else
                                    v8.d = v0_8.d
                                
                                int64_t v0_10 = cosf(x0_7, x1_2, n_1, v12.d f* v0_9)
                                Vec2* x2_2
                                v0, arg1, x2_2 = logf(v8.d)
                                float v1_5 = *(x20 + x21 * 0xc + 0x10) f+ v15.d
                                v0 = *(x20 + x21 * 0xc + 0x14)
                                    + (v0_10.d f* sqrt(v0 * fconvert.s(-2f)) + 0f) f* v14.d
                                float v5_3 = float.s(0x44800000)
                                float v3_3 = float.s(0x3a800000)
                                float v7_2 = v0 - var_c8_1
                                float v4_3 = (v1_5 f- v11.d) * v5_3
                                float v2_4 = (var_c8_1 + v0) * v5_3
                                var_b0 = v4_3
                                float var_ac_2 = v2_4
                                v2_4 = v2_4 * v3_3
                                v0 = (v11.d f+ v1_5) * v5_3
                                v1_5 = v7_2 * v5_3
                                var_b8 = v0
                                float var_b4_1 = v1_5
                                
                                if (not(v2_4 > float.s(0x3f79999a)))
                                    v3_3 = v4_3 * v3_3
                                    
                                    if (not(v3_3 < float.s(0x3ccccccd))
                                            && not(v3_3 > float.s(0x3ffccccd))
                                            && not(v2_4 < float.s(0x3ccccccd)))
                                        v2_4 = float.s(0x3a800000)
                                        v1_5 = v1_5 * v2_4
                                        
                                        if (not(v1_5 > float.s(0x3f79999a)))
                                            v0 = v0 * v2_4
                                            
                                            if (not(v0 < float.s(0x3ccccccd))
                                                    && not(v0 > float.s(0x3ffccccd))
                                                    && not(v1_5 < float.s(0x3ccccccd)))
                                                Line2Draw(&var_b0, &var_b8, x2_2, &var_a4, 
                                                    *MATERIAL_EFFECTS_CHART_SPINETINT_ZWRITE, 
                                                    *TEXTURE_UI_ART_CAMPAIGN_MAP_STROKE, 
                                                    float.s(0x3e8ccccd))
                                
                                v12.d = fconvert.s(0.5f)
                                v13.d = fconvert.s(-0.5f)
                                v14.d = fconvert.s(-2f)
                                v15.d = 0f
    
    cond:0_1 = x21 u>= 0x3ffe
    x21 += 2
while (not(cond:0_1))
