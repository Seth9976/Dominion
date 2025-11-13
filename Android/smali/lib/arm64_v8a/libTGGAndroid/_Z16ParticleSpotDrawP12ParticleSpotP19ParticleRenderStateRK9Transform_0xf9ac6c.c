// 函数: _Z16ParticleSpotDrawP12ParticleSpotP19ParticleRenderStateRK9Transform
// 地址: 0xf9ac6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int128_t entry_v12
int64_t var_88 = entry_v12.q
int128_t entry_v11
int64_t var_80 = entry_v11.q
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
void* x21 = *(arg1 + 0x30)
ParticleSpot* x22 = arg1
int64_t* x20 = **(x21 + 0x300)
int64_t* x8_1 = *x20

if (x8_1 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8_1 = *x20

int64_t x26 = sx.q(*(x21 + 0x2f0))
int64_t x27 = **x8_1
void* x20_1 = x27 + x26 * 0x168
uint32_t x21_1 = zx.d(*(x20_1 + 0xe2))

if (*(x20_1 + 0x150) != 0 || *(x27 + x26 * 0x168 + 0x148) != 0 || *(x27 + x26 * 0x168 + 0x158) != 0
        || x21_1 != 0 || *(x27 + x26 * 0x168 + 0x140) != 0)
    void* x24_1 = *(*gpGameData + 0x20)
    *(x24_1 + 0x34) += 1
    void* x28_1 = *(*(x22 + 0x30) + 0x300)
    int32_t x8_11 = *(x28_1 + 0x88)
    
    if (((x8_11 & 1) == 0 || zx.d(*(x22 + 0x44)) == 0)
            && ((x8_11 & 2) == 0 || zx.d(*(x22 + 0x44)) != 0))
        ParticleEmitter* x0_4
        int128_t v0_1
        x0_4, v0_1 = ParticleCalcColor(x22, arg2)
        int32_t var_a4 = x0_4.d
        int64_t var_120
        
        if (x21_1 == 0)
            ParticleEmitter* var_b0
            
            if (zx.d(*(x27 + x26 * 0x168 + 0xe7)) == 0)
                x0_4, v0_1 = SpriteColorSet(x0_4.d & 0xff, zx.d((x0_4 u>> 8).b), 
                    zx.d((x0_4 u>> 0x10).b), zx.d((x0_4 u>> 0x18).b))
                var_b0 = x0_4
            else
                var_b0.d = x0_4.d & 0xff000000
                var_b0:4.d = x0_4.d | 0xff000000
            
            float v3_1 = *(arg2 + 0x68)
            float v6_1 = *(arg2 + 0x6c)
            float v4_1 = *(arg2 + 0x70)
            float v5_1 = *(arg2 + 0x74)
            float v17_1 = *(arg2 + 0x78)
            v0_1.d = *(arg2 + 0x7c)
            float v1_1 = *(arg2 + 0x80)
            float v2_1 = *(arg2 + 0x84)
            float var_d0 = v3_1
            float var_cc_1 = v6_1
            float var_c8_1 = v4_1
            float var_c4_1 = v5_1
            float var_c0_1 = v17_1
            float var_bc_1 = v0_1.d
            float var_b8_1 = v1_1
            float var_b4_1 = v2_1
            float v7_1 = *arg3
            int32_t v16_1 = *(arg3 + 0x14)
            
            if (v7_1 != *TI || v16_1 f!= *(TI + 0x14) || *(arg3 + 0x18) != *(TI + 0x18)
                    || *(arg3 + 0x1c) != *(TI + 0x1c) || *(arg3 + 0x10) != *(TI + 0x10)
                    || *(arg3 + 4) != *(TI + 4) || *(arg3 + 8) != *(TI + 8)
                    || not(*(arg3 + 0xc) == *(TI + 0xc)))
                float v19_1 = *(arg3 + 0xc)
                float v21_1 = *(arg3 + 0x10)
                float v18_1 = *(arg3 + 4)
                float v20_1 = *(arg3 + 8)
                float v22_1 = v21_1 * v21_1
                float v23_1 = v18_1 * v18_1
                float v24_1 = v18_1 * v20_1
                float v25_1 = v21_1 * v19_1
                float v26_1 = v21_1 * v20_1
                float v27_1 = v18_1 * v19_1
                float v28_1 = v20_1 * v19_1
                float v29_1 = v21_1 * v18_1
                v8.d = v6_1 * v21_1
                v9.d = v24_1 - v25_1
                v24_1 = v24_1 + v25_1
                v25_1 = v22_1 + v23_1
                v22_1 = v22_1 - v23_1
                v23_1 = v26_1 + v27_1
                v26_1 = v27_1 - v26_1
                v27_1 = v28_1 - v29_1
                v28_1 = v29_1 + v28_1
                float v30_1 = v17_1 * v21_1 - v6_1 * v18_1
                float v31_1 = v4_1 * v21_1
                v29_1 = v8.d f+ v17_1 * v18_1
                v8.d = v17_1 * v20_1
                v17_1 = v5_1 * v21_1 + v17_1 * v19_1
                v21_1 = v2_1 + v2_1
                v23_1 = v21_1 * v23_1
                v21_1 = v21_1 * v27_1
                v27_1 = v0_1.d f+ v0_1.d
                v31_1 = v31_1 f+ v8.d
                v8.d = v1_1 + v1_1
                v24_1 = v27_1 * v24_1
                v26_1 = v27_1 * v26_1
                v27_1 = v20_1 * v20_1
                v25_1 = v25_1 - v27_1
                v9.d = v8.d f* v9.d
                v28_1 = v8.d f* v28_1
                v8.d = v22_1 + v27_1
                v22_1 = v22_1 - v27_1
                v27_1 = v30_1 - v4_1 * v20_1
                v30_1 = v5_1 * v20_1
                v20_1 = v6_1 * v20_1
                v6_1 = v6_1 * v19_1
                v29_1 = v29_1 + v30_1
                v30_1 = v4_1 * v18_1
                v18_1 = v5_1 * v18_1
                v5_1 = v5_1 * v19_1
                v4_1 = v4_1 * v19_1
                v19_1 = v19_1 * v19_1
                v8.d = v8.d f- v19_1
                v0_1.d = v0_1.d f* (v25_1 - v19_1)
                v0_1.d = v0_1.d f+ v9.d
                v0_1.d = v23_1 f+ v0_1.d
                v0_1.d = v7_1 f* v0_1.d
                v2_1 = *(arg3 + 0x1c) + v7_1 * (v2_1 * (v22_1 + v19_1) + v26_1 + v28_1)
                v0_1.d = v16_1 f+ v0_1.d
                v1_1 = *(arg3 + 0x18) + v7_1 * (v21_1 + v24_1 + v1_1 f* v8.d)
                var_d0 = v3_1 * v7_1
                var_cc_1 = v29_1 - v4_1
                var_c8_1 = v6_1 + v31_1 - v18_1
                var_c4_1 = v30_1 + v17_1 - v20_1
                var_c0_1 = v27_1 - v5_1
                var_bc_1 = v0_1.d
                var_b8_1 = v1_1
                var_b4_1 = v2_1
            
            ParticleUpdateMatrixForWrapping(x0_4, arg2, &var_d0, &var_b0)
            
            if (zx.d(var_b0:3.b) != 0)
                int32_t x3_3 = *(x27 + x26 * 0x168 + 0xf8)
                int32_t x9_4 = *(x22 + 0x38)
                int32_t x8_23 = *(x22 + 0x3c)
                int32_t x2_2 = *(x27 + x26 * 0x168 + 0xfc)
                int32_t x10_3
                
                if (x8_23 s< x2_2)
                    x10_3 = x8_23
                else
                    x10_3 = x2_2 - 1
                
                int32_t x0_7
                
                x0_7 = x8_23 s< 0 ? 0 : x10_3
                
                int32_t x8_25
                
                if (x9_4 s< x3_3)
                    x8_25 = x9_4
                else
                    x8_25 = x3_3 - 1
                
                int32_t x1_5
                
                x1_5 = x9_4 s< 0 ? 0 : x8_25
                
                int32_t v0_3
                int32_t v1_2
                int32_t v2_2
                int32_t v3_2
                v0_3, v1_2, v2_2, v3_2 = SpriteUVFromStrip(x0_7, x1_5, x2_2, x3_3)
                int32_t var_e0 = v0_3
                XAsset* x0_8 = *(x20_1 + 0x150)
                XAsset* x0_9
                
                if (x0_8 == 0)
                    x0_9 = *(x27 + x26 * 0x168 + 0x148)
                else
                    x0_9 = MaterialFn_EmitMaterial(x0_8)
                
                XAsset* x10_4 = *(x28_1 + 0x30)
                XAsset* x9_5 = *(x28_1 + 0x38)
                int128_t* fp_1 = x27 + x26 * 0x168
                XAsset* x21_2
                
                x21_2 = x9_5 == 0 ? x0_9 : x9_5
                
                XAsset* x20_3
                
                if (x10_4 == 0)
                    x20_3 = *(fp_1 + 0x158)
                else
                    x20_3 = x10_4
                
                *(x24_1 + 0x38) += 1
                int128_t v0_4
                int128_t v1_3
                int128_t v2_3
                int128_t v3_3
                int128_t v4_2
                int128_t v16_2
                int128_t v17_2
                int128_t v30_2
                int128_t v31_2
                v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2, v30_2, v31_2 = GameGetTimeSimulation()
                v1_3.d = *(*(x22 + 0x30) + 0x308)
                v0_4.d = v0_4.d f- v1_3.d
                *(gDraw3DData + 0x564) = v0_4.d
                v1_3.d = 0f
                
                if (zx.d(*(x28_1 + 0x9c)) == 0)
                    v0_4.d = v1_3.d
                else
                    v0_4.d = v0_4.d
                
                *(gDraw3DData + 0x564) = v0_4.d
                double var_250
                int64_t var_244
                int32_t var_23c
                float128 var_210
                double var_1d0
                int64_t var_1a8
                float var_1a0
                float var_160
                int64_t var_154
                int64_t var_148
                int64_t var_140
                float var_134
                int64_t var_118
                float v5_2
                float v6_2
                float v7_2
                float v18_2
                float v19_2
                float v20_2
                float v21_2
                float v22_2
                float v24_2
                float v25_2
                float v26_2
                
                if (fp_1[0x14].q == 0)
                    if (zx.d(*(x28_1 + 0x9c)) != 0)
                        fp_1 = &var_210
                        
                        if (x21_2 != 0)
                            goto label_f9b95c
                        
                        if (zx.d(*(x27 + x26 * 0x168 + 0xe9)) != 0)
                            if ((zx.d(data_2421df0) & 1) == 0)
                                goto label_f9cdec
                            
                            goto label_f9b1fc
                        
                        if ((zx.d(data_2421e00) & 1) == 0)
                            int32_t x0_46
                            x0_46, v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                __cxa_guard_acquire(&data_2421e00)
                            
                            if (x0_46 != 0)
                                data_2421df8 = AssetPtrFromPath("sys/particle_3d.material", 5)
                                v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                    __cxa_guard_release(&data_2421e00)
                                fp_1 = &var_210
                        
                        x21_2 = data_2421df8
                        goto label_f9b95c
                    
                    if (x21_2 == 0)
                        if (zx.d(*(x27 + x26 * 0x168 + 0xe9)) == 0)
                            x21_2 = nullptr
                        else
                            if ((zx.d(data_2421e10) & 1) == 0)
                                int32_t x0_44
                                x0_44, v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2, v30_2, v31_2 =
                                    __cxa_guard_acquire(&data_2421e10)
                                
                                if (x0_44 != 0)
                                    data_2421e08 =
                                        AssetPtrFromPath("sys\SpriteAdditive.material", 5)
                                    v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2, v30_2, v31_2 =
                                        __cxa_guard_release(&data_2421e10)
                            
                            x21_2 = data_2421e08
                    
                    v0_4.d = *(x22 + 0x24)
                    
                    if (v0_4.d f!= 0f)
                        v1_3.d = fconvert.s(0.5f)
                        v0_4.d = v0_4.d f* v1_3.d
                        float cosp
                        float sinp
                        v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2, v30_2, v31_2 =
                            sincosf(&sinp, &cosp, v0_4.d)
                        v14.d = cosp
                        v0_4.d = sinp
                        v1_3.d = *VZ
                        v2_3.d = *(VZ + 4)
                        v3_3.d = *(VZ + 8)
                        v8.d = v0_4.d f* v1_3.d
                        v9.d = v0_4.d f* v2_3.d
                        v10.d = v0_4.d f* v3_3.d
                    else
                        v8.d = *QI
                        v9.d = *(QI + 4)
                        v10.d = *(QI + 8)
                        v14.d = *(QI + 0xc)
                    
                    v13.d = *V0
                    v30_2.d = *(V0 + 4)
                    v16_2.d = *(V0 + 8)
                    
                    if (*(x27 + x26 * 0x168 + 0x160) == 4)
                        v3_3.d = *(x22 + 0xc)
                        v4_2.d = *(x22 + 0x10)
                        v5_2 = *(x22 + 0x14)
                        v0_4.d = v3_3.d f* v3_3.d
                        v1_3.d = v4_2.d f* v4_2.d
                        v2_3.d = v5_2 * v5_2
                        v0_4.d = v0_4.d f+ v1_3.d
                        v0_4.d = v0_4.d f+ v2_3.d
                        v6_2 = sqrt(v0_4.d)
                        v0_4.d = float.s(0x3727c5ac)
                        float v1_11 = v13.d
                        float v2_10 = v30_2.d
                        float v0_15 = v16_2.d
                        
                        if (not(v6_2 f< v0_4.d))
                            v0_15 = fconvert.s(1f)
                            v1_11 = v0_15 / (v6_2 + float.s(0x3727c5ac))
                            v2_10 = v3_3.d f* v1_11
                            v3_3.d = v4_2.d f* v1_11
                            v4_2.d = v5_2 * v1_11
                            v0_15 =
                                v0_15 / sqrt(v4_2.d f* v4_2.d + v2_10 * v2_10 + v3_3.d f* v3_3.d)
                            v1_11 = v2_10 * v0_15
                            v2_10 = v3_3.d f* v0_15
                            v0_15 = v4_2.d f* v0_15
                        
                        var_160 = v1_11
                        float var_15c_2 = v2_10
                        float var_158_4 = v0_15
                        v4_2.d = *(VZ + 4)
                        v3_3.d = *(VZ + 8)
                        v5_2 = *VZ
                        v6_2 = v2_10 f* v3_3.d
                        v7_2 = v1_11 f* v3_3.d
                        v1_11 = v1_11 f* v4_2.d
                        v3_3.d = v0_15 f* v4_2.d
                        v4_2.d = v2_10 * v5_2
                        v3_3.d = v6_2 f- v3_3.d
                        v2_10 = v0_15 * v5_2 - v7_2
                        v1_11 = v1_11 f- v4_2.d
                        v4_2.d = v3_3.d f* v3_3.d
                        v4_2.d = v4_2.d f+ v2_10 * v2_10
                        v4_2.d = v1_11 * v1_11 f+ v4_2.d
                        v6_2 = sqrt(v4_2.d)
                        v4_2.d = float.s(0x3727c5ac)
                        float v0_16 = v13.d
                        float v4_8 = v30_2.d
                        float v5_8 = v16_2.d
                        
                        if (not(v6_2 f< v4_2.d))
                            v0_16 = fconvert.s(1f)
                            v4_8 = v0_16 / (v6_2 + float.s(0x3727c5ac))
                            v3_3.d = v3_3.d f* v4_8
                            v2_10 = v2_10 * v4_8
                            v1_11 = v1_11 * v4_8
                            v5_8 = v0_16 / sqrt(v1_11 * v1_11 + v3_3.d f* v3_3.d + v2_10 * v2_10)
                            v0_16 = v3_3.d f* v5_8
                            v4_8 = v2_10 * v5_8
                            v5_8 = v1_11 * v5_8
                        
                        var_120.d = v0_16
                        var_120:4.d = v4_8
                        var_118.d = v5_8
                        v0_4, v1_3, v2_3, v3_3, v4_2, v17_2, v31_2 =
                            QuatFromBasisChange(VFWD, VRIGHT, &var_160, &var_120)
                        var_cc_1 = v0_4.d
                        var_c8_1 = v1_3.d
                        var_c4_1 = v2_3.d
                        var_c0_1 = v3_3.d
                    
                    void* x8_64 = x27 + x26 * 0x168
                    v3_3.d = *(x8_64 + 0x108)
                    v4_2.d = *(x8_64 + 0x10c)
                    float var_270_1
                    float var_26c_1
                    
                    if (v3_3.d f!= 0f || v4_2.d f!= 0f)
                        v0_4.d = v14.d f* v14.d
                        v1_3.d = v8.d f* v8.d
                        v7_2 = v8.d f* v9.d
                        v16_2.d = v10.d f* v14.d
                        v17_2.d = v9.d f* v14.d
                        v18_2 = v8.d f* v10.d
                        v19_2 = v9.d f* v10.d
                        v20_2 = v8.d f* v14.d
                        v2_3.d = v9.d f* v9.d
                        v6_2 = v4_2.d f+ v4_2.d
                        v21_2 = v7_2 f- v16_2.d
                        v7_2 = v7_2 f+ v16_2.d
                        v16_2.d = v1_3.d f+ v0_4.d
                        v0_4.d = v0_4.d f- v1_3.d
                        v22_2 = v18_2 f+ v17_2.d
                        v1_3.d = v18_2 f- v17_2.d
                        v17_2.d = v19_2 - v20_2
                        v18_2 = v19_2 + v20_2
                        v19_2 = v3_3.d f+ v3_3.d
                        v5_2 = v10.d f* v10.d
                        v1_3.d = v1_3.d f* v19_2
                        v16_2.d = v16_2.d f- v2_3.d
                        v20_2 = v21_2 * v6_2
                        v6_2 = v18_2 * v6_2
                        v18_2 = v2_3.d f+ v0_4.d
                        v2_3.d = v0_4.d f- v2_3.d
                        v6_2 = v1_3.d f+ v6_2
                        v0_4.d = *arg2
                        v1_3.d = *(arg2 + 4)
                        v16_2.d = v16_2.d f- v5_2
                        v18_2 = v18_2 - v5_2
                        v5_2 = v5_2 f+ v2_3.d
                        v2_3.d = *(arg2 + 8)
                        v7_2 = v7_2 * v19_2
                        v19_2 = 0f
                        v3_3.d = v16_2.d f* v3_3.d
                        v4_2.d = v18_2 f* v4_2.d
                        v17_2.d = v17_2.d f* v19_2
                        v3_3.d = v3_3.d f+ v20_2
                        v4_2.d = v7_2 f+ v4_2.d
                        v5_2 = v5_2 * v19_2 + v6_2
                        v3_3.d = v22_2 * v19_2 f+ v3_3.d
                        v4_2.d = v17_2.d f+ v4_2.d
                        v6_2 = v0_4.d f* v3_3.d
                        v30_2.d = v1_3.d f* v4_2.d
                        v3_3.d = v2_3.d f* v5_2
                        var_270_1 = v6_2
                        var_26c_1 = v3_3.d
                    else
                        v0_4.d = *arg2
                        v1_3.d = *(arg2 + 4)
                        v2_3.d = *(arg2 + 8)
                        var_270_1 = v13.d
                        var_26c_1 = v16_2.d
                    
                    v4_2.d = v9.d f+ v9.d
                    v6_2 = v8.d f+ v8.d
                    v7_2 = v14.d f+ v14.d
                    v24_2 = v9.d f* v4_2.d
                    v25_2 = v9.d f* v6_2
                    v26_2 = v10.d f* v7_2
                    float v27_2 = v6_2 f* v10.d
                    float v28_2 = v9.d f* v7_2
                    v6_2 = v8.d f* v6_2
                    v7_2 = v8.d f* v7_2
                    v8.d = fconvert.s(1f)
                    v5_2 = v10.d f* (v10.d f+ v10.d)
                    v4_2.d = v4_2.d f* v10.d
                    v9.d = v27_2 + v28_2
                    v10.d = v25_2 + v26_2
                    v14.d = v4_2.d f- v7_2
                    v15.d = v27_2 - v28_2
                    entry_v11.d = v4_2.d f+ v7_2
                    v13.d = v8.d f- v24_2 - v5_2
                    v17_2.d = var_c8_1
                    entry_v12.d = v25_2 - v26_2
                    v25_2 = v10.d f* v0_4.d
                    v26_2 = v15.d f* v0_4.d
                    v0_4.d = v13.d f* v0_4.d
                    var_118.d = v9.d f* v2_3.d
                    var_120.d = v0_4.d
                    v0_4.d = var_26c_1
                    v6_2 = v8.d f- v6_2
                    float var_294_1 = entry_v12.d
                    v4_2.d = entry_v12.d f* v1_3.d
                    v8.d = v6_2 - v5_2
                    v5_2 = v14.d f* v2_3.d
                    entry_v12.d = v6_2 - v24_2
                    v6_2 = entry_v11.d f* v1_3.d
                    v16_2.d = var_d0
                    v1_3.d = v8.d f* v1_3.d
                    v2_3.d = entry_v12.d f* v2_3.d
                    var_118:4.d = var_270_1
                    float var_108_2 = v5_2
                    float var_fc_2 = v6_2
                    v5_2 = v17_2.d f+ v17_2.d
                    v7_2 = var_cc_1 + var_cc_1
                    v31_2 = data_71cfa0
                    v3_3.d = fconvert.s(1f)
                    v20_2 = var_c0_1 + var_c0_1
                    int32_t var_10c_2 = v1_3.d
                    int32_t var_f8_2 = v2_3.d
                    int32_t var_f4_2 = v0_4.d
                    v0_4.d = v17_2.d f* v5_2
                    v1_3.d = var_c4_1 * (var_c4_1 + var_c4_1)
                    v2_3.d = v17_2.d f* v7_2
                    v6_2 = var_c4_1 * v7_2
                    var_120:4.d = v4_2.d
                    v4_2.d = var_c4_1 * v20_2
                    v17_2.d = v17_2.d f* v20_2
                    v5_2 = v5_2 * var_c4_1
                    v18_2 = var_cc_1 * v20_2
                    v19_2 = v3_3.d f- v0_4.d
                    v3_3.d = v3_3.d f- var_cc_1 * v7_2
                    v20_2 = v2_3.d f- v4_2.d
                    v24_2 = v6_2 f+ v17_2.d
                    v2_3.d = v2_3.d f+ v4_2.d
                    v4_2.d = v5_2 - v18_2
                    v6_2 = v6_2 f- v17_2.d
                    v7_2 = v19_2 f- v1_3.d
                    v1_3.d = v3_3.d f- v1_3.d
                    v0_4.d = v3_3.d f- v0_4.d
                    v17_2.d = v16_2.d f* v20_2
                    v2_3.d = v16_2.d f* v2_3.d
                    v4_2.d = v16_2.d f* v4_2.d
                    v3_3.d = v16_2.d f* v7_2
                    v1_3.d = v16_2.d f* v1_3.d
                    v0_4.d = v16_2.d f* v0_4.d
                    int32_t var_104_2 = v30_2.d
                    float var_100_2 = v26_2
                    float var_110_2 = v25_2
                    int128_t var_f0_2 = v31_2
                    float var_158_5 = v16_2.d f* v24_2
                    var_154.d = var_bc_1
                    var_148.d = v4_2.d
                    var_148:4.d = var_b8_1
                    var_140.d = v16_2.d f* v6_2
                    var_140:4.d = v16_2.d f* (v5_2 + v18_2)
                    var_160 = v3_3.d
                    int32_t var_15c_3 = v17_2.d
                    var_154:4.d = v2_3.d
                    int32_t var_14c_3 = v1_3.d
                    int32_t var_138_2 = v0_4.d
                    var_134 = var_b4_1
                    var_134:4.o = v31_2
                    Mat4Multiply(&var_160, &var_120)
                    int128_t v0_17
                    v0_17.q = var_1a0.q
                    int64_t var_1b8_1 = 0
                    var_1d0 = v0_17.q
                    int32_t var_194
                    int64_t var_1c8_1 = var_194.q
                    float var_18c
                    float var_1c0_1 = var_18c
                    float var_184
                    float var_1bc_1 = var_184
                    int32_t var_1b0_1 = 0x3f800000
                    
                    if (zx.d(*(x22 + 0x44)) != 0 && zx.d(*(x27 + x26 * 0x168 + 0xe8)) != 0)
                        int64_t v1_12
                        v1_12.d = fconvert.s(1f)
                        v0_17.d = fconvert.s(-1f)
                        v1_12.d = v30_2.d f+ v1_12.d
                        float v5_9 = *(arg2 + 8)
                        v0_17.d = var_270_1 f+ v0_17.d
                        float v3_9 = *arg2
                        float v4_9 = *(arg2 + 4)
                        var_210:8.d = v9.d f* v5_9
                        var_210:0xc.d = v0_17.d
                        var_210.d = v13.d f* v3_9
                        var_210:4.d = var_294_1 * v4_9
                        float var_200_1 = v10.d f* v3_9
                        float var_1fc_1 = v8.d f* v4_9
                        float var_1f8_1 = v14.d f* v5_9
                        int32_t var_1f4_1 = v1_12.d
                        float var_1f0_1 = v15.d f* v3_9
                        float var_1ec_1 = entry_v11.d f* v4_9
                        float var_1e8_1 = entry_v12.d f* v5_9
                        float var_1e4_1 = var_26c_1 + 0f
                        int128_t var_1e0_1 = v31_2
                        Mat4Multiply(&var_160, &var_210)
                        uint32_t x3_9 = zx.d(var_a4:3.b) u>> 2
                        int64_t var_238_1 = 0
                        int32_t var_230_1 = 0x3f800000
                        var_250 = var_250
                        int64_t var_248_1 = var_244
                        var_244:4.d = var_23c
                        int32_t var_234
                        int32_t var_23c_1 = var_234
                        var_1a8 = SpriteColorSet(0, 0, 0, x3_9)
                        DrawImageMatrixParams(x20_3, &var_250, &var_e0, &var_1a8, x21_2)
                    
                    if (x20_3 == 0)
                        x20_3 = AttribMapGetAssetPtr(*gMaterialAttribTable, 
                            MaterialGetAttribMap(x21_2), 0x53)
                    
                    DrawImageMatrixParams(x20_3, &var_1d0, &var_e0, &var_b0, x21_2)
                else
                    if (x21_2 == 0)
                        if ((zx.d(data_2421de0) & 1) == 0)
                            int32_t x0_39
                            x0_39, v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                __cxa_guard_acquire(&data_2421de0)
                            
                            if (x0_39 != 0)
                                data_2421dd8 = AssetPtrFromPath("sys/draw3d.material", 5)
                                v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                    __cxa_guard_release(&data_2421de0)
                        
                        x21_2 = data_2421dd8
                    
                    uint64_t x8_32 = zx.q(*(x27 + x26 * 0x168 + 0x160))
                    float var_15c
                    float var_110
                    float var_10c
                    float var_108
                    float v23_2
                    
                    if (x8_32.d u> 4)
                        uint64_t x8_63
                        
                        do
                            pthread_kill(pthread_self(), 6)
                            XNoReturn()
                        label_f9cdec:
                            int32_t x0_42
                            x0_42, v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                __cxa_guard_acquire(&data_2421df0)
                            
                            if (x0_42 != 0)
                                data_2421de8 =
                                    AssetPtrFromPath("sys/particle_3d_additive.material", 5)
                                v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                    __cxa_guard_release(&data_2421df0)
                                fp_1 = &var_210
                            
                        label_f9b1fc:
                            x21_2 = data_2421de8
                        label_f9b95c:
                            
                            if (zx.d(*(x27 + x26 * 0x168 + 0xea)) != 0
                                    || zx.d(*(x27 + x26 * 0x168 + 0xeb)) != 0)
                                int64_t x8_48 = zx.q(*(x22 + 0x288))
                                
                                if (x8_48.d s>= 2)
                                    if (zx.d(*(*(*(x22 + 0x30) + 0x300) + 0x9d)) == 0)
                                        v0_4.d = *arg3
                                        v1_3.d = *(arg3 + 4)
                                        v4_2.d = *(arg3 + 0x10)
                                        v2_3.d = *(arg3 + 8)
                                        v3_3.d = *(arg3 + 0xc)
                                        void* x8_47 = x22 + muls.dp.d(x8_48.d - 1, 0x24)
                                        v16_2.d = *(x8_47 + 0x48)
                                        v17_2.d = *(x8_47 + 0x4c)
                                        v19_2 = v4_2.d f* v4_2.d
                                        v20_2 = v1_3.d f* v1_3.d
                                        v21_2 = v2_3.d f* v2_3.d
                                        v22_2 = v3_3.d f* v3_3.d
                                        v23_2 = v1_3.d f* v2_3.d
                                        v24_2 = v4_2.d f* v3_3.d
                                        v25_2 = v4_2.d f* v2_3.d
                                        v26_2 = v1_3.d f* v3_3.d
                                        v2_3.d = v2_3.d f* v3_3.d
                                        v1_3.d = v4_2.d f* v1_3.d
                                        v3_3.d = v19_2 + v20_2
                                        v19_2 = v19_2 - v20_2
                                        v20_2 = v2_3.d f- v1_3.d
                                        v1_3.d = v1_3.d f+ v2_3.d
                                        v2_3.d = v16_2.d f* v0_4.d
                                        v16_2.d = v17_2.d f* v0_4.d
                                        v0_4.d = *(x8_47 + 0x50) f* v0_4.d
                                        v3_3.d = v3_3.d f- v21_2
                                        v17_2.d = v19_2 + v21_2
                                        v4_2.d = v23_2 - v24_2
                                        v23_2 = v23_2 + v24_2
                                        v24_2 = v25_2 + v26_2
                                        v25_2 = v26_2 - v25_2
                                        v18_2 = v19_2 - v21_2
                                        v3_3.d = v3_3.d f- v22_2
                                        v19_2 = v16_2.d f+ v16_2.d
                                        v21_2 = v0_4.d f+ v0_4.d
                                        v26_2 = v2_3.d f+ v2_3.d
                                        v17_2.d = v17_2.d f- v22_2
                                        v2_3.d = v2_3.d f* v3_3.d
                                        v3_3.d = v19_2 f* v4_2.d
                                        v16_2.d = v16_2.d f* v17_2.d
                                        v17_2.d = v21_2 * v20_2
                                        v1_3.d = v19_2 f* v1_3.d
                                        v4_2.d = v21_2 * v24_2
                                        v0_4.d = v0_4.d f* (v18_2 + v22_2)
                                        v2_3.d = v2_3.d f+ v3_3.d
                                        v3_3.d = v26_2 * v23_2 f+ v16_2.d
                                        v1_3.d = v26_2 * v25_2 f+ v1_3.d
                                        v2_3.d = v4_2.d f+ v2_3.d
                                        v3_3.d = v17_2.d f+ v3_3.d
                                        v0_4.d = v0_4.d f+ v1_3.d
                                        v1_3.d = *(arg3 + 0x14) f+ v2_3.d
                                        v2_3.d = *(arg3 + 0x18) f+ v3_3.d
                                        v0_4.d = *(arg3 + 0x1c) f+ v0_4.d
                                        var_120.d = v1_3.d
                                        var_120:4.d = v2_3.d
                                        var_118.d = v0_4.d
                                        arg1, v0_4, v1_3, v2_3, v3_3 =
                                            Draw3DQuadGroupStart(&var_120)
                                        x8_48 = zx.q(*(x22 + 0x288))
                                    
                                    if (zx.d(*(*(*(x22 + 0x30) + 0x300) + 0x9d)) != 0
                                            || x8_48.d s>= 2)
                                        void* __offset(ParticleSpot, 0x48) x2_5 = x22 + 0x48
                                        int64_t x9_9 = 1
                                    label_f9ba9c:
                                        v0_4.d = var_e0
                                        v1_3.d = v1_2
                                        v2_3.d = v2_2
                                        v3_3.d = v3_2
                                        var_160 = v0_4.d
                                        int32_t var_15c_1 = v1_3.d
                                        int32_t var_158_3 = v2_3.d
                                        var_154.d = v1_3.d
                                        var_154:4.d = v0_4.d
                                        int32_t var_14c_2 = v3_3.d
                                        var_148.d = v2_3.d
                                        var_148:4.d = v3_3.d
                                        v0_4.d = *(x2_5 + 0x1c)
                                        TrailSegment* x1_10
                                        
                                        if (x9_9 == 1)
                                            x1_10 = nullptr
                                        else
                                            x1_10 = x2_5 - 0x24
                                        
                                        TrailSegment* x4_1
                                        
                                        if (x9_9 == zx.q(x8_48.d - 1))
                                            x4_1 = nullptr
                                        else
                                            x4_1 = x2_5 + 0x48
                                        
                                        int64_t x25_3 = x9_9 + 1
                                        QuadFromSegments(&var_120, x1_10, x2_5, x2_5 + 0x24, x4_1, 
                                            v0_4.d)
                                        QuadTransform(arg3, &var_120)
                                        arg1, v0_4, v1_3, v2_3, v3_3 = Draw3DQuadParams(&var_120, 
                                            &var_160, &var_b0, x20_3, x21_2)
                                        x8_48 = sx.q(*(x22 + 0x288))
                                        x2_5 += 0x24
                                        x9_9 = x25_3
                                        
                                        if (x25_3 s< x8_48)
                                            goto label_f9ba9c
                                    
                                    if (zx.d(*(*(*(x22 + 0x30) + 0x300) + 0x9d)) != 0)
                                        goto label_f9b904
                                    
                                    Draw3DQuadGroupEnd()
                                    goto label_f9b904
                            
                            v0_4.d = var_e0
                            v1_3.d = v1_2
                            v2_3.d = v2_2
                            v3_3.d = v3_2
                            var_1a0 = v0_4.d
                            int32_t var_19c_3 = v1_3.d
                            int32_t var_194_1 = v1_3.d
                            data_86637c
                            data_86638c
                            int32_t var_190_1 = v0_4.d
                            data_86639c
                            int32_t var_198_3 = v2_3.d
                            int32_t var_18c_1 = v3_3.d
                            int32_t var_188_1 = v2_3.d
                            int32_t var_184_1 = v3_3.d
                            __builtin_memcpy(&fp_1[0xb], 
                                "\x00\x00\x00\xbf\x00\x00\x00\xbf\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x"
                            "00\x00\xbf\x00\x00\x00\x00\x00\x00\x00\xbf\x00\x00\x00\x3f\x00\x00\x00"
                            "00\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x00", 
                                0x30)
                            var_1a8 = *(x27 + x26 * 0x168 + 0x100)
                            
                            if (*(*(*(x22 + 0x30) + 0x300) + 0x30) != 0)
                                int64_t* x8_58 = *x20_3
                                
                                if (x8_58 == 0)
                                    if (*(x20_3 + 8) == 0x15)
                                        XString::GetString()
                                        XTrace("Unpreloaded sound %s")
                                    
                                    v0_4, v1_3, v2_3, v3_3, v4_2, v16_2 =
                                        AssetCatalogLoadAsset(x20_3, false, true)
                                    x8_58 = *x20_3
                                
                                int64_t* x8_61 = **x8_58
                                v1_3.d = x8_61[1].d
                                v0_4.d = *(x8_61 + 0xc)
                                v2_3.q = *x8_61
                                v0_4.d = v0_4.d f* v1_3.d
                                v1_3.q = *(x27 + x26 * 0x168 + 0xf8)
                                v2_3 = vcvt_f32_u32(v2_3)
                                v0_4.d = v2_3.d f* v0_4.d
                                v0_4:4.d = v2_3:4.d f* v0_4.d
                                v2_3.d = 0x3c23d70a
                                v2_3:4.d = 0x3c23d70a
                                int128_t v1_8 = vrev64_s32(v1_3)
                                var_1a8 = vdiv_f32(vmul_f32(v0_4, v2_3, 0), vcvt_f32_s32(v1_8)).q
                            
                            x8_63 = zx.q(*(x27 + x26 * 0x168 + 0x160))
                        while (x8_63.d u> 4)
                        
                        int64_t var_248
                        int64_t var_1c8
                        Vec3* x0_35
                        Vec3* x1_22
                        
                        switch (x8_63)
                            case 0
                                v1_3.d = fconvert.s(-0.5f)
                                v0_4.d = *CIRCLE_QUARTER
                                v0_4.d = v0_4.d f* v1_3.d
                                float cosp_1
                                float sinp_1
                                sincosf(&sinp_1, &cosp_1, v0_4.d)
                                v0_4.d = cosp_1
                                float sinp_3 = sinp_1
                                float v17_4 = v0_4.d f* var_c0_1
                                float v6_5 = *VX * sinp_3
                                float v7_5 = sinp_3 * *(VX + 4)
                                sinp_3 = sinp_3 * *(VX + 8)
                                float v18_4 = v0_4.d f* var_cc_1
                                float v19_3 = v0_4.d f* var_c8_1
                                v0_4.d = v0_4.d f* var_c4_1
                                v0_4.d = var_c0_1 * sinp_3 f+ v0_4.d
                                v0_4.d = v7_5 * var_cc_1 f+ v0_4.d
                                v0_4.d = v0_4.d f- v6_5 * var_c8_1
                                float var_cc_2 =
                                    v6_5 * var_c0_1 + v18_4 + sinp_3 * var_c8_1 - v7_5 * var_c4_1
                                float var_c8_2 =
                                    v7_5 * var_c0_1 + v19_3 + v6_5 * var_c4_1 - sinp_3 * var_cc_1
                                int32_t var_c4_2 = v0_4.d
                                float var_c0_2 =
                                    v17_4 - v6_5 * var_cc_1 - v7_5 * var_c8_1 - sinp_3 * var_c4_1
                            case 1
                                Draw3DGetEyePose(3)
                                float v2_9 = var_bc_1 - var_110
                                float v1_10 = var_b8_1 - var_10c
                                float v0_14 = var_b4_1 - var_108
                                float v3_8 = sqrt(v2_9 * v2_9 + v1_10 * v1_10 + v0_14 * v0_14)
                                float v4_7
                                float v5_7
                                
                                if (v3_8 >= float.s(0x3727c5ac))
                                    v4_7 = fconvert.s(1f)
                                    v3_8 = v4_7 / (v3_8 + float.s(0x3727c5ac))
                                    v2_9 = v2_9 * v3_8
                                    v5_7 = v1_10 * v3_8
                                    v0_14 = v0_14 * v3_8
                                    v3_8 = v4_7 / sqrt(v0_14 * v0_14 + v2_9 * v2_9 + v5_7 * v5_7)
                                    v1_10 = v2_9 * v3_8
                                    v2_9 = v5_7 * v3_8
                                    v0_14 = v0_14 * v3_8
                                else
                                    v1_10 = *V0
                                    v2_9 = *(V0 + 4)
                                    v0_14 = *(V0 + 8)
                                
                                var_210.d = v1_10
                                var_210:4.d = v2_9
                                var_210:8.d = v0_14
                                v4_7 = *(VZ + 4)
                                v3_8 = *(VZ + 8)
                                v5_7 = *VZ
                                float v6_7 = v2_9 * v3_8
                                float v7_7 = v1_10 * v3_8
                                v1_10 = v1_10 * v4_7
                                v3_8 = v0_14 * v4_7
                                v4_7 = v2_9 * v5_7
                                v3_8 = v6_7 - v3_8
                                v2_9 = v0_14 * v5_7 - v7_7
                                v1_10 = v1_10 - v4_7
                                v4_7 = sqrt(v1_10 * v1_10 + v3_8 * v3_8 + v2_9 * v2_9)
                                
                                if (v4_7 >= float.s(0x3727c5ac))
                                    v0_14 = fconvert.s(1f)
                                    v4_7 = v0_14 / (v4_7 + float.s(0x3727c5ac))
                                    v3_8 = v3_8 * v4_7
                                    v2_9 = v2_9 * v4_7
                                    v4_7 = v1_10 * v4_7
                                    v5_7 = v0_14 / sqrt(v4_7 * v4_7 + v3_8 * v3_8 + v2_9 * v2_9)
                                    v0_14 = v3_8 * v5_7
                                    v1_10 = v2_9 * v5_7
                                    v2_9 = v4_7 * v5_7
                                else
                                    v0_14 = *V0
                                    v1_10 = *(V0 + 4)
                                    v2_9 = *(V0 + 8)
                                
                                var_250.d = v0_14
                                var_250:4.d = v1_10
                                var_248.d = v2_9
                                x0_35 = VX
                                x1_22 = VZ
                                goto label_f9c7ec
                            case 2
                                var_cc_1.o = *QI
                            case 3
                                Draw3DGetEyePose(3)
                                int128_t v3_7
                                v3_7.d = var_110
                                float v5_6 = v3_7.d f- var_bc_1
                                v3_7.d = var_10c - var_b8_1
                                float v4_6 = var_108 - var_b4_1
                                float v16_5 = var_c8_1 * var_c4_1 - var_c0_1 * var_cc_1
                                float v7_6 = var_c8_1 * var_c0_1 + var_c4_1 * var_cc_1
                                float v2_8 = var_c0_1 * var_c0_1 + var_c4_1 * var_c4_1
                                    - var_c8_1 * var_c8_1 - var_cc_1 * var_cc_1
                                float v1_9 = v7_6 + v7_6
                                float v6_6 = sqrt(v5_6 * v5_6 + v3_7.d f* v3_7.d + v4_6 * v4_6)
                                float v0_13 = v16_5 + v16_5
                                var_210.d = v1_9
                                var_210:4.d = v0_13
                                var_210:8.d = v2_8
                                
                                if (v6_6 >= float.s(0x3727c5ac))
                                    v7_6 = fconvert.s(1f)
                                    v6_6 = v7_6 / (v6_6 + float.s(0x3727c5ac))
                                    v5_6 = v5_6 * v6_6
                                    v16_5 = v3_7.d f* v6_6
                                    v6_6 = v4_6 * v6_6
                                    v3_7.d = v5_6 * v5_6
                                    v3_7.d = v3_7.d f+ v16_5 * v16_5
                                    v3_7.d = v6_6 * v6_6 f+ v3_7.d
                                    v3_7.d = sqrt(v3_7.d)
                                    v7_6 = v7_6 f/ v3_7.d
                                    v3_7.d = v5_6 * v7_6
                                    v4_6 = v16_5 * v7_6
                                    v5_6 = v6_6 * v7_6
                                else
                                    v3_7.d = *V0
                                    v4_6 = *(V0 + 4)
                                    v5_6 = *(V0 + 8)
                                
                                v7_6 = v2_8 * v4_6
                                v16_5 = v2_8 f* v3_7.d
                                v4_6 = v1_9 * v4_6
                                v2_8 = v0_13 * v5_6 - v7_6
                                v1_9 = v16_5 - v1_9 * v5_6
                                v0_13 = v4_6 - v0_13 f* v3_7.d
                                v3_7.d = v2_8 * v2_8
                                v3_7.d = v3_7.d f+ v1_9 * v1_9
                                v3_7.d = v0_13 * v0_13 f+ v3_7.d
                                v3_7.d = sqrt(v3_7.d)
                                
                                if (v3_7.d f>= float.s(0x3727c5ac))
                                    v4_6 = fconvert.s(1f)
                                    v3_7.d = v3_7.d f+ float.s(0x3727c5ac)
                                    v3_7.d = v4_6 f/ v3_7.d
                                    v2_8 = v2_8 f* v3_7.d
                                    v1_9 = v1_9 f* v3_7.d
                                    v3_7.d = v0_13 f* v3_7.d
                                    v4_6 = v4_6 / sqrt(v3_7.d f* v3_7.d + v2_8 * v2_8 + v1_9 * v1_9)
                                    v0_13 = v2_8 * v4_6
                                    v1_9 = v1_9 * v4_6
                                    v2_8 = v3_7.d f* v4_6
                                else
                                    v0_13 = *V0
                                    v1_9 = *(V0 + 4)
                                    v2_8 = *(V0 + 8)
                                
                                var_250.d = v0_13
                                var_250:4.d = v1_9
                                var_248.d = v2_8
                                v3_7.q = *VY
                                v4_6 = *(VY + 8)
                                x1_22 = &var_1d0
                                var_1d0 = vneg_f32(v3_7)
                                var_1c8.d = fneg(v4_6)
                                x0_35 = VX
                            label_f9c7ec:
                                int32_t v1_14
                                int32_t v2_13
                                int32_t v3_11
                                v0_4, v1_14, v2_13, v3_11 =
                                    QuatFromBasisChange(x0_35, x1_22, &var_250, &var_210)
                                int32_t var_cc_4 = v0_4.d
                                int32_t var_c8_4 = v1_14
                                int32_t var_c4_4 = v2_13
                                int32_t var_c0_4 = v3_11
                            case 4
                                v3_3.d = *(x22 + 0xc)
                                v5_2 = *(x22 + 0x10)
                                v6_2 = *(x22 + 0x14)
                                v1_3.d = *VX
                                v2_3.d = *(VX + 4)
                                v4_2.d = *(VX + 8)
                                v0_4.d = v1_3.d f* v3_3.d
                                v0_4.d = v0_4.d f+ v2_3.d f* v5_2
                                v0_4.d = v0_4.d f+ v4_2.d f* v6_2
                                v0_4.d = v0_4.d f+ fconvert.s(1f)
                                
                                if (v0_4.d f>= float.s(0x3727c5ac))
                                    v7_2 = v2_3.d f* v6_2
                                    v16_2.d = v5_2 f* v4_2.d
                                    v4_2.d = v3_3.d f* v4_2.d
                                    v6_2 = v1_3.d f* v6_2
                                    v1_3.d = v1_3.d f* v5_2
                                    v2_3.d = v3_3.d f* v2_3.d
                                    v5_2 = v7_2 f- v16_2.d
                                    v3_3.d = v0_4.d f* v0_4.d
                                    v4_2.d = v4_2.d f- v6_2
                                    v1_3.d = v1_3.d f- v2_3.d
                                    v2_3.d = v5_2 * v5_2
                                    v2_3.d = v2_3.d f+ v3_3.d
                                    v2_3.d = v4_2.d f* v4_2.d f+ v2_3.d
                                    v2_3.d = v1_3.d f* v1_3.d f+ v2_3.d
                                    v6_2 = sqrt(v2_3.d)
                                    v0_4.d = v0_4.d f/ v6_2
                                    v2_3.d = v5_2 / v6_2
                                    v3_3.d = v4_2.d f/ v6_2
                                    v1_3.d = v1_3.d f/ v6_2
                                else
                                    v3_3.d = fabs(v1_3.d)
                                    v5_2 = fabs(v2_3.d)
                                    v7_2 = fneg(v2_3.d)
                                    v16_2.d = 0f
                                    v3_3.d f- v5_2
                                    bool cond:11_1 = v3_3.d f> v5_2
                                    
                                    if (v3_3.d f> v5_2)
                                        v2_3.d = fneg(v4_2.d)
                                    else
                                        v2_3.d = v16_2.d
                                    
                                    if (v3_3.d f> v5_2)
                                        v3_3.d = v16_2.d
                                    else
                                        v3_3.d = v4_2.d
                                    
                                    if (cond:11_1)
                                        v1_3.d = v1_3.d
                                    else
                                        v1_3.d = v7_2
                                
                                int32_t var_cc_3 = v2_3.d
                                int32_t var_c8_3 = v3_3.d
                                int32_t var_c4_3 = v1_3.d
                                int32_t var_c0_3 = v0_4.d
                        
                        v0_4.d = *(arg2 + 0xc)
                        
                        if (not(v0_4.d f== 0f))
                            int128_t v1_15
                            int128_t v3_12
                            v0_4, v1_15, v3_12 = Draw3DGetEyePose(3)
                            v0_4.q = *(x28_1 + 0x68)
                            v1_15.q = var_110.q
                            int32_t v2_14 = *(x28_1 + 0x70)
                            v3_12.d = var_108
                            int128_t v1_16 = vsub_f32(v0_4, v1_15)
                            v0_4.d = v2_14 f- v3_12.d
                            double v2_15 = vmul_f32(v1_16, v1_16, 0)
                            v3_12.d = v0_4.d f* v0_4.d
                            v2_15.d = v2_15.d f+ v2_15:4.d
                            v2_15.d = v2_15.d f+ v3_12.d
                            v2_15.d = sqrt(v2_15.d)
                            v3_12.d = float.s(0x3727c5ac)
                            
                            if (v2_15.d f>= v3_12.d)
                                v3_12.d = fconvert.s(1f)
                                v2_15.d = v2_15.d f+ float.s(0x3727c5ac)
                                v2_15.d = v3_12.d f/ v2_15.d
                                v1_16.d = v1_16.d f* v2_15.d
                                v1_16:4.d = v1_16:4.d f* v2_15.d
                                v0_4.d = v0_4.d f* v2_15.d
                                v2_15 = vmul_f32(v1_16, v1_16, 0)
                                v2_15.d = v2_15.d f+ v2_15:4.d
                                v2_15.d = v0_4.d f* v0_4.d f+ v2_15.d
                                v2_15.d = sqrt(v2_15.d)
                                v2_15.d = v3_12.d f/ v2_15.d
                                v1_16.d = v1_16.d f* v2_15.d
                                v1_16:4.d = v1_16:4.d f* v2_15.d
                                v0_4.d = v0_4.d f* v2_15.d
                            else
                                v1_16.q = *V0
                                v0_4.d = *(V0 + 8)
                            
                            v2_15.d = *(arg2 + 0xc)
                            v3_12.q = var_bc_1.q
                            v1_16.d = v1_16.d f* v2_15.d
                            v1_16:4.d = v1_16:4.d f* v2_15.d
                            v0_4.d = v0_4.d f* v2_15.d
                            var_bc_1.q = vadd_f32(v1_16, v3_12)
                            double v1_17
                            v1_17.d = var_b4_1
                            v0_4.d = v0_4.d f+ v1_17.d
                            int32_t var_b4_3 = v0_4.d
                        
                        v0_4.d = *(x22 + 0x24)
                        ComposeMatrixTransfrom(&var_120, &var_d0, &var_1a8, 
                            x27 + x26 * 0x168 + 0x108, arg2, v0_4.d)
                        float v4_11 = var_120.d
                        float v0_20 = var_160
                        float v3_13 = var_120:4.d
                        float var_26c_2 = var_118:4.d
                        float v22_4 = var_154.d
                        float var_274_2 = v4_11 * v0_20
                        float v23_4 = var_154:4.d
                        float v24_4 = var_148.d
                        float v26_3 = var_140:4.d
                        float var_294_2 = v0_20 * var_110
                        float var_100
                        float var_29c_1 = v0_20 * var_100
                        float v2_16 = var_118.d
                        float v25_3 = var_148:4.d
                        entry_v12.d = var_10c * v23_4
                        float var_fc
                        v10.d = var_fc * v23_4
                        v8.d = var_100 * v24_4
                        v0_20 = var_140.d
                        v13.d = v4_11 * v24_4
                        v14.d = v3_13 * v25_3
                        v15.d = var_110 * v24_4
                        v9.d = v4_11 * v26_3
                        entry_v11.d = v3_13 * v23_4
                        float v3_14 = v4_11 * v22_4 f+ entry_v11.d
                        entry_v11.d = var_110 * v22_4
                        entry_v12.d = entry_v11.d f+ entry_v12.d
                        entry_v11.d = var_100 * v22_4
                        v10.d = entry_v11.d f+ v10.d
                        entry_v11.d = v13.d f+ v14.d
                        float var_14c
                        float var_f8
                        float var_f4
                        float v16_7 = var_f4 + v10.d f+ var_f8 * var_14c
                        float var_158
                        var_160 = var_26c_2 + var_274_2 + v3_13 * var_15c + v2_16 * var_158
                        float var_104
                        float var_15c_4 =
                            var_104 + var_294_2 + var_15c * var_10c + var_158 * var_108
                        var_154.d = var_26c_2 + v3_14 + v2_16 * var_14c
                        var_154:4.d = var_104 + entry_v12.d f+ var_108 * var_14c
                        var_148.d = var_26c_2 + entry_v11.d f+ v2_16 * v0_20
                        var_148:4.d = var_104 + v15.d f+ var_10c * v25_3 + var_108 * v0_20
                        var_140.d = var_f4 + v8.d f+ var_fc * v25_3 + var_f8 * v0_20
                        float var_138
                        var_140:4.d = var_26c_2 + v9.d f+ v3_13 * var_138 + v2_16 * var_134
                        float var_138_3 =
                            var_104 + var_110 * v26_3 + var_10c * var_138 + var_108 * var_134
                        var_134 = var_f4 + var_100 * v26_3 + var_fc * var_138 + var_f8 * var_134
                        
                        if (*(arg2 + 0x5c) != *V20 || *(arg2 + 0x60) != *(V20 + 4))
                            int64_t x22_2 = 0
                            v8.d = 0f
                            v9.d = fconvert.s(0.5f)
                            int32_t* x25_4 = &var_210 | 4
                            v10.d = fconvert.s(-0.5f)
                        label_f9cbf8:
                            int128_t v0_21
                            int128_t v1_20
                            int128_t v2_17
                            int128_t v3_15
                            int128_t v5_11
                            int128_t v6_10
                            v0_21, v1_20, v2_17, v3_15, v5_11, v6_10 = Draw3DGetEyePose(3)
                            void* x8_72 = &var_160 + x22_2
                            v0_21.d = var_244:4.d
                            v1_20.q = var_23c.q
                            v2_17.d = *x8_72
                            v3_15.q = *(x8_72 + 4)
                            v0_21.d = v2_17.d f- v0_21.d
                            int128_t v1_21 = vsub_f32(v3_15, v1_20)
                            v2_17.d = *(arg2 + 0x5c)
                            v3_15.d = *(arg2 + 0x60)
                            v0_21.d = v0_21.d f* v0_21.d
                            int128_t v1_19 = vmul_f32(v1_21, v1_21, 0)
                            v0_21.d = v0_21.d f+ v1_19.d
                            v1_19.d = v1_19:4.d
                            v0_21.d = v0_21.d f+ v1_19.d
                            v0_21.d = sqrt(v0_21.d)
                            v0_21.d = v0_21.d f- v2_17.d
                            v1_19.d = v3_15.d f- v2_17.d
                            v1_19.d = v0_21.d f/ v1_19.d
                            v0_21.d = 0f
                            
                            if (not(v1_19.d f<= 0f))
                                v0_21.d = fconvert.s(1f)
                                
                                if (not(v1_19.d f>= v0_21.d))
                                    v0_21.d = v1_19.d f+ v8.d
                            
                            uint32_t x8_69 = zx.d(var_b0.b)
                            uint32_t x12_2 = zx.d(var_b0:2.b)
                            uint32_t x10_10 = zx.d(var_b0:1.b)
                            v1_19.d = float.s(zx.d(*(gDraw3DData + 0x38)) - x8_69)
                            v1_19.d = v0_21.d f* v1_19.d
                            v2_17.d = float.s(zx.d(*(gDraw3DData + 0x39)) - x10_10)
                            v3_15.d = float.s(zx.d(*(gDraw3DData + 0x3a)) - x12_2)
                            v2_17.d = v0_21.d f* v2_17.d
                            v0_21.d = v0_21.d f* v3_15.d
                            
                            if (v1_19.d f< 0f)
                                v3_15.d = v10.d
                            else
                                v3_15.d = v9.d
                            
                            v1_19.d = v1_19.d f+ v3_15.d
                            *x25_4 = var_b0:4.d
                            char temp0_1 = vcvts_s32_f32(v1_19.d)
                            
                            if (v2_17.d f< 0f)
                                v1_19.d = v10.d
                            else
                                v1_19.d = v9.d
                            
                            char x11_8 = var_b0:3.b
                            v1_19.d = v2_17.d f+ v1_19.d
                            
                            if (v0_21.d f< 0f)
                                v2_17.d = v10.d
                            else
                                v2_17.d = v9.d
                            
                            v0_21.d = v0_21.d f+ v2_17.d
                            uint32_t x9_20 = x10_10 + vcvts_s32_f32(v1_19.d)
                            char x10_12 = x12_2.b + vcvts_s32_f32(v0_21.d)
                            *(x25_4 - 1) = x11_8
                            *(x25_4 - 2) = x10_12
                            x25_4[-1].w = zx.w(x8_69.b + temp0_1) | ((0xffffff & x9_20) << 8).w
                            
                            if (x22_2 == 0x24)
                                v0_21.q = var_160.q
                                v1_19.q = *(fp_1 + 0xd4)
                                v2_17.q = var_148
                                v3_15.d = var_134
                                v5_11.q = *(fp_1 + 0xbc)
                                v6_10.d = var_f4 + var_29c_1 + var_15c * var_fc + var_158 * var_f8
                                int128_t v1_22 = vadd_f32(v0_21, v1_19)
                                int128_t v2_18 = vsub_f32(v2_17, v0_21)
                                int128_t v0_22 = vsub_f32(v5_11, v0_21)
                                v3_15.d = v6_10.d f+ v3_15.d
                                float v4_12 = var_140.d f- v6_10.d
                                v5_11.d = v16_7 f- v6_10.d
                                v6_10.d = 0x3f000000
                                v6_10:4.d = 0x3f000000
                                double v1_23 = vmul_f32(v1_22, v6_10, 0)
                                v6_10.d = fconvert.s(0.5f)
                                int128_t v7_11 = vrev64_s32(v0_22)
                                v6_10.d = v3_15.d f* v6_10.d
                                v3_15.d = v4_12 f* v0_22:4.d
                                v4_12 = v4_12 f* v0_22.d
                                v0_22.d = v5_11.d f* v2_18:4.d
                                v5_11.d = v5_11.d f* v2_18.d
                                uint128_t v2_19 = vmul_f32(v2_18, v7_11, 0)
                                var_250 = v1_23
                                v1_23.d = v0_22.d f- v3_15.d
                                v0_22.d = v4_12 f- v5_11.d
                                v5_11.d = v0_22.d f* v0_22.d
                                int128_t v2_20 = vsub_f32(v2_19, vdup_laneq_s32(v2_19, 1))
                                int128_t v3_16
                                v3_16.d = v1_23.d f* v1_23.d f+ v5_11.d
                                v3_16.d = vmul_f32(v2_20, v2_20, 0) f+ v3_16.d
                                v3_16.d = sqrt(v3_16.d)
                                var_248.d = v6_10.d
                                
                                if (v3_16.d f>= float.s(0x3727c5ac))
                                    v5_11.d = float.s(0x3727c5ac)
                                    float v4_13 = fconvert.s(1f)
                                    v3_16.d = v3_16.d f+ v5_11.d
                                    v3_16.d = v4_13 f/ v3_16.d
                                    v1_23.d = v1_23.d f* v3_16.d
                                    v5_11.d = v0_22.d f* v3_16.d
                                    v2_20.d = v3_16.d f* v2_20.d
                                    v0_22.d = v1_23.d f* v1_23.d
                                    v3_16.d = v5_11.d f* v5_11.d
                                    v0_22.d = v0_22.d f+ v3_16.d
                                    v3_16.d = v2_20.d f* v2_20.d
                                    v0_22.d = v3_16.d f+ v0_22.d
                                    v0_22.d = sqrt(v0_22.d)
                                    v3_16.d = v4_13 f/ v0_22.d
                                    v0_22.d = v1_23.d f* v3_16.d
                                    v1_23.d = v5_11.d f* v3_16.d
                                    v2_20.d = v2_20.d f* v3_16.d
                                else
                                    v0_22.d = *V0
                                    v1_23.d = *(V0 + 4)
                                    v2_20.d = *(V0 + 8)
                                
                                var_1d0.d = v0_22.d
                                var_1d0:4.d = v1_23.d
                                var_1c8.d = v2_20.d
                                XAsset* var_2d0_1 = x21_2
                                int64_t var_2c8_1 = 0
                                Draw3DQuadFull(&var_160, &var_1a0, &var_210, 1, &var_250, &var_1d0, 
                                    x20_3, nullptr)
                        else
                            Draw3DQuadParams(&var_160, &var_1a0, &var_b0, x20_3, x21_2)
                    else
                        Vec3* x0_11
                        Vec3* x1_7
                        
                        switch (x8_32)
                            case 1
                                Draw3DGetEyePose(3)
                                float v2_4 = var_110 - var_bc_1
                                float v1_4 = var_10c - var_b8_1
                                float v0_5 = var_108 - var_b4_1
                                float v3_4 = sqrt(v2_4 * v2_4 + v1_4 * v1_4 + v0_5 * v0_5)
                                float v4_3
                                float v5_3
                                
                                if (v3_4 >= float.s(0x3727c5ac))
                                    v4_3 = fconvert.s(1f)
                                    v3_4 = v4_3 / (v3_4 + float.s(0x3727c5ac))
                                    v2_4 = v2_4 * v3_4
                                    v5_3 = v1_4 * v3_4
                                    v0_5 = v0_5 * v3_4
                                    v3_4 = v4_3 / sqrt(v0_5 * v0_5 + v2_4 * v2_4 + v5_3 * v5_3)
                                    v1_4 = v2_4 * v3_4
                                    v2_4 = v5_3 * v3_4
                                    v0_5 = v0_5 * v3_4
                                else
                                    v1_4 = *V0
                                    v2_4 = *(V0 + 4)
                                    v0_5 = *(V0 + 8)
                                
                                var_160 = v1_4
                                var_15c = v2_4
                                float var_158_2 = v0_5
                                v4_3 = *(VZ + 4)
                                v3_4 = *(VZ + 8)
                                v5_3 = *VZ
                                float v6_3 = v2_4 * v3_4
                                float v7_3 = v1_4 * v3_4
                                v1_4 = v1_4 * v4_3
                                v3_4 = v0_5 * v4_3
                                v4_3 = v2_4 * v5_3
                                v3_4 = v6_3 - v3_4
                                v2_4 = v0_5 * v5_3 - v7_3
                                v1_4 = v1_4 - v4_3
                                v4_3 = sqrt(v1_4 * v1_4 + v3_4 * v3_4 + v2_4 * v2_4)
                                
                                if (v4_3 >= float.s(0x3727c5ac))
                                    v0_5 = fconvert.s(1f)
                                    v4_3 = v0_5 / (v4_3 + float.s(0x3727c5ac))
                                    v3_4 = v3_4 * v4_3
                                    v2_4 = v2_4 * v4_3
                                    v4_3 = v1_4 * v4_3
                                    v5_3 = v0_5 / sqrt(v4_3 * v4_3 + v3_4 * v3_4 + v2_4 * v2_4)
                                    v0_5 = v3_4 * v5_3
                                    v1_4 = v2_4 * v5_3
                                    v2_4 = v4_3 * v5_3
                                else
                                    v0_5 = *V0
                                    v1_4 = *(V0 + 4)
                                    v2_4 = *(V0 + 8)
                                
                                var_1a0 = v0_5
                                float var_19c_2 = v1_4
                                float var_198_2 = v2_4
                                x0_11 = VX
                                x1_7 = VY
                            label_f9b67c:
                                v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                    QuatFromBasisChange(x0_11, x1_7, &var_1a0, &var_160)
                                var_cc_1 = v0_4.d
                                var_c8_1 = v1_3.d
                                var_c4_1 = v2_3.d
                                var_c0_1 = v3_3.d
                            case 2
                                v1_3.d = fconvert.s(-0.5f)
                                v0_4.d = *CIRCLE_QUARTER
                                v0_4.d = v0_4.d f* v1_3.d
                                float cosp_2
                                float sinp_2
                                v0_4, v1_3, v2_3, v3_3, v4_2, v16_2, v17_2 =
                                    sincosf(&sinp_2, &cosp_2, v0_4.d)
                                v3_3.d = cosp_2
                                v0_4.d = sinp_2
                                v1_3.q = *VX
                                v2_3.d = *(VX + 8)
                                v1_3.d = v1_3.d f* v0_4.d
                                v1_3:4.d = v1_3:4.d f* v0_4.d
                                v0_4.d = v0_4.d f* v2_3.d
                                var_cc_1.q = v1_3.q
                                var_c4_1 = v0_4.d
                                var_c0_1 = v3_3.d
                            case 3
                                Draw3DGetEyePose(3)
                                float v5_4 = var_110 - var_bc_1
                                float v3_5 = var_10c - var_b8_1
                                float v4_4 = var_108 - var_b4_1
                                float v16_3 = var_c8_1 * var_c4_1 - var_c0_1 * var_cc_1
                                float v7_4 = var_c8_1 * var_c0_1 + var_c4_1 * var_cc_1
                                float v2_5 = var_c0_1 * var_c0_1 + var_c4_1 * var_c4_1
                                    - var_c8_1 * var_c8_1 - var_cc_1 * var_cc_1
                                float v1_5 = v7_4 + v7_4
                                float v6_4 = sqrt(v5_4 * v5_4 + v3_5 * v3_5 + v4_4 * v4_4)
                                float v0_6 = v16_3 + v16_3
                                var_160 = v1_5
                                var_15c = v0_6
                                float var_158_1 = v2_5
                                
                                if (v6_4 >= float.s(0x3727c5ac))
                                    v7_4 = fconvert.s(1f)
                                    v6_4 = v7_4 / (v6_4 + float.s(0x3727c5ac))
                                    v5_4 = v5_4 * v6_4
                                    v16_3 = v3_5 * v6_4
                                    v6_4 = v4_4 * v6_4
                                    v7_4 = v7_4 / sqrt(v6_4 * v6_4 + v5_4 * v5_4 + v16_3 * v16_3)
                                    v3_5 = v5_4 * v7_4
                                    v4_4 = v16_3 * v7_4
                                    v5_4 = v6_4 * v7_4
                                else
                                    v3_5 = *V0
                                    v4_4 = *(V0 + 4)
                                    v5_4 = *(V0 + 8)
                                
                                v7_4 = v2_5 * v4_4
                                v16_3 = v2_5 * v3_5
                                v4_4 = v1_5 * v4_4
                                v2_5 = v0_6 * v5_4 - v7_4
                                v1_5 = v16_3 - v1_5 * v5_4
                                v0_6 = v4_4 - v0_6 * v3_5
                                v3_5 = sqrt(v0_6 * v0_6 + v2_5 * v2_5 + v1_5 * v1_5)
                                
                                if (v3_5 >= float.s(0x3727c5ac))
                                    v4_4 = fconvert.s(1f)
                                    v3_5 = v4_4 / (v3_5 + float.s(0x3727c5ac))
                                    v2_5 = v2_5 * v3_5
                                    v1_5 = v1_5 * v3_5
                                    v3_5 = v0_6 * v3_5
                                    v4_4 = v4_4 / sqrt(v3_5 * v3_5 + v2_5 * v2_5 + v1_5 * v1_5)
                                    v0_6 = v2_5 * v4_4
                                    v1_5 = v1_5 * v4_4
                                    v2_5 = v3_5 * v4_4
                                else
                                    v0_6 = *V0
                                    v1_5 = *(V0 + 4)
                                    v2_5 = *(V0 + 8)
                                
                                var_1a0 = v0_6
                                float var_19c_1 = v1_5
                                float var_198_1 = v2_5
                                x0_11 = VX
                                x1_7 = VZ
                                goto label_f9b67c
                            case 4
                                v3_3.d = *(x22 + 0xc)
                                v5_2 = *(x22 + 0x10)
                                v6_2 = *(x22 + 0x14)
                                v1_3.d = *VX
                                v2_3.d = *(VX + 4)
                                v4_2.d = *(VX + 8)
                                v0_4.d = v1_3.d f* v3_3.d
                                v0_4.d = v0_4.d f+ v2_3.d f* v5_2
                                v0_4.d = v0_4.d f+ v4_2.d f* v6_2
                                v0_4.d = v0_4.d f+ fconvert.s(1f)
                                
                                if (v0_4.d f>= float.s(0x3727c5ac))
                                    v7_2 = v2_3.d f* v6_2
                                    v16_2.d = v5_2 f* v4_2.d
                                    v4_2.d = v3_3.d f* v4_2.d
                                    v6_2 = v1_3.d f* v6_2
                                    v1_3.d = v1_3.d f* v5_2
                                    v2_3.d = v3_3.d f* v2_3.d
                                    v5_2 = v7_2 f- v16_2.d
                                    v3_3.d = v0_4.d f* v0_4.d
                                    v4_2.d = v4_2.d f- v6_2
                                    v1_3.d = v1_3.d f- v2_3.d
                                    v2_3.d = v5_2 * v5_2
                                    v2_3.d = v2_3.d f+ v3_3.d
                                    v2_3.d = v4_2.d f* v4_2.d f+ v2_3.d
                                    v2_3.d = v1_3.d f* v1_3.d f+ v2_3.d
                                    v6_2 = sqrt(v2_3.d)
                                    v0_4.d = v0_4.d f/ v6_2
                                    v2_3.d = v5_2 / v6_2
                                    v3_3.d = v4_2.d f/ v6_2
                                    v1_3.d = v1_3.d f/ v6_2
                                else
                                    v3_3.d = fabs(v1_3.d)
                                    v5_2 = fabs(v2_3.d)
                                    v7_2 = fneg(v2_3.d)
                                    v16_2.d = 0f
                                    v3_3.d f- v5_2
                                    bool cond:5_1 = v3_3.d f> v5_2
                                    
                                    if (v3_3.d f> v5_2)
                                        v2_3.d = fneg(v4_2.d)
                                    else
                                        v2_3.d = v16_2.d
                                    
                                    if (v3_3.d f> v5_2)
                                        v3_3.d = v16_2.d
                                    else
                                        v3_3.d = v4_2.d
                                    
                                    if (cond:5_1)
                                        v1_3.d = v1_3.d
                                    else
                                        v1_3.d = v7_2
                                
                                var_cc_1 = v2_3.d
                                var_c8_1 = v3_3.d
                                var_c4_1 = v1_3.d
                                var_c0_1 = v0_4.d
                        
                        v0_4.d = *(arg2 + 0xc)
                        
                        if (v0_4.d f== 0f)
                            v0_4.d = var_bc_1
                            v2_3.d = var_b8_1
                            v1_3.d = var_b4_1
                        else
                            int128_t v0_7
                            int128_t v1_6
                            v0_7, v1_6, v3_3, v4_2, v16_2, v17_2 = Draw3DGetEyePose(3)
                            v0_7.q = *(x28_1 + 0x68)
                            v1_6.q = var_110.q
                            int32_t v2_6 = *(x28_1 + 0x70)
                            v3_3.d = var_108
                            v1_3 = vsub_f32(v0_7, v1_6)
                            v0_7.d = v2_6 f- v3_3.d
                            v2_3 = vmul_f32(v1_3, v1_3, 0)
                            v3_3.d = v0_7.d f* v0_7.d
                            v2_3.d = v2_3.d f+ v2_3:4.d
                            v2_3.d = v2_3.d f+ v3_3.d
                            v2_3.d = sqrt(v2_3.d)
                            v3_3.d = float.s(0x3727c5ac)
                            
                            if (v2_3.d f>= v3_3.d)
                                v4_2.d = float.s(0x3727c5ac)
                                v3_3.d = fconvert.s(1f)
                                v2_3.d = v2_3.d f+ v4_2.d
                                v2_3.d = v3_3.d f/ v2_3.d
                                v1_3.d = v1_3.d f* v2_3.d
                                v1_3:4.d = v1_3:4.d f* v2_3.d
                                v2_3.d = v0_7.d f* v2_3.d
                                v0_7 = vmul_f32(v1_3, v1_3, 0)
                                v4_2.d = v2_3.d f* v2_3.d
                                v0_7.d = v0_7.d f+ v0_7:4.d
                                v0_7.d = v4_2.d f+ v0_7.d
                                v0_7.d = sqrt(v0_7.d)
                                v3_3.d = v3_3.d f/ v0_7.d
                                v0_7.d = v1_3.d f* v3_3.d
                                v0_7:4.d = v1_3:4.d f* v3_3.d
                                v1_3.d = v2_3.d f* v3_3.d
                            else
                                v0_7.q = *V0
                                v1_3.d = *(V0 + 8)
                            
                            v2_3.d = *(arg2 + 0xc)
                            v3_3.q = var_bc_1.q
                            v0_7.d = v0_7.d f* v2_3.d
                            v0_7:4.d = v0_7:4.d f* v2_3.d
                            v1_3.d = v1_3.d f* v2_3.d
                            v0_4 = vadd_f32(v0_7, v3_3)
                            var_bc_1.q = v0_4.q
                            v3_3.d = var_b4_1
                            v2_3.d = v0_4:4.d
                            v1_3.d = v1_3.d f+ v3_3.d
                            int32_t var_b4_2 = v1_3.d
                        
                        v4_2.d = var_c8_1
                        v16_2.d = var_c0_1
                        v6_2 = var_d0
                        v18_2 = v4_2.d f+ v4_2.d
                        v20_2 = var_cc_1 + var_cc_1
                        v3_3.d = fconvert.s(1f)
                        v16_2.d = v16_2.d f+ v16_2.d
                        v21_2 = v4_2.d f* v18_2
                        v22_2 = v4_2.d f* v20_2
                        v24_2 = var_c4_1 * v20_2
                        v19_2 = var_c4_1 * (var_c4_1 + var_c4_1)
                        v23_2 = var_c4_1 f* v16_2.d
                        v4_2.d = v4_2.d f* v16_2.d
                        v5_2 = v18_2 * var_c4_1
                        v7_2 = var_cc_1 f* v16_2.d
                        v16_2.d = v3_3.d f- v21_2
                        v3_3.d = v3_3.d f- var_cc_1 * v20_2
                        v25_2 = v24_2 f+ v4_2.d
                        v20_2 = v5_2 - v7_2
                        v4_2.d = v24_2 f- v4_2.d
                        v5_2 = v5_2 + v7_2
                        v7_2 = v16_2.d f- v19_2
                        v19_2 = v3_3.d f- v19_2
                        v3_3.d = v3_3.d f- v21_2
                        v16_2.d = v6_2 * (v22_2 - v23_2)
                        v4_2.d = v6_2 f* v4_2.d
                        v3_3.d = v6_2 f* v3_3.d
                        var_118.d = v6_2 * v25_2
                        var_118:4.d = v0_4.d
                        float var_108_1 = v6_2 * v20_2
                        int32_t var_104_1 = v2_3.d
                        int32_t var_100_1 = v4_2.d
                        float var_fc_1 = v6_2 * v5_2
                        var_120.d = v6_2 * v7_2
                        var_120:4.d = v16_2.d
                        float var_110_1 = v6_2 * (v22_2 + v23_2)
                        float var_10c_1 = v6_2 * v19_2
                        int32_t var_f8_1 = v3_3.d
                        int32_t var_f4_1 = v1_3.d
                        int128_t var_f0_1 = data_71cfa0
                        v0_4.d = *arg2
                        v1_3.d = *(arg2 + 4)
                        v2_3.d = *(arg2 + 8)
                        var_160 = v0_4.d
                        int64_t var_154_1 = 0
                        var_15c.q = 0
                        int32_t var_14c_1 = v1_3.d
                        int64_t var_148_1 = 0
                        int64_t var_140_1 = 0
                        int32_t var_138_1 = v2_3.d
                        int64_t var_12c_1 = 0
                        int64_t var_134_1 = 0
                        int32_t var_124_1 = 0x3f800000
                        int128_t v0_8
                        float128 v1_7
                        v0_8, v1_7 = Mat4Multiply(&var_120, &var_160)
                        uint64_t x8_40 = zx.q(var_a4)
                        v1_7.d = 0x437f0000
                        v1_7:4.d = 0x437f0000
                        v1_7:8.d = 0x437f0000
                        v1_7:0xc.d = 0x437f0000
                        v0_8.d = float.s(x8_40.d)
                        v0_8:2.w = (x8_40 u>> 8).d
                        v0_8:4.w = (x8_40 u>> 0x10).d
                        v0_8:6.w = (x8_40 u>> 0x18).d
                        uint128_t v0_9
                        v0_9.d = zx.d((v0_8 & true).w)
                        v0_9:4.d = zx.d(v0_9:2.w)
                        v0_9:8.d = zx.d(v0_9:4.w)
                        v0_9:0xc.d = zx.d(v0_9:6.w)
                        var_210 = vdivq_f32(vcvtq_f32_u32(v0_9), v1_7)
                        Draw3DSetMaterialColor(&var_210)
                        Draw3DStructureMatrix(fp_1[0x14].q, &var_1a0, x21_2, x20_3, nullptr)
                        Draw3DSetMaterialColor(gRgbaWhite)
            label_f9b904:
                *(gDraw3DData + 0x564) = 0
        else
            v0_1.q = *(*gAppInterface + 0x28)
            var_120 = 0
            double var_118_1 = vcvt_f32_s32(v0_1)
            DrawRectSolid(&var_120, &var_a4)

entry_v11.q = var_80
entry_v12.q = var_88
