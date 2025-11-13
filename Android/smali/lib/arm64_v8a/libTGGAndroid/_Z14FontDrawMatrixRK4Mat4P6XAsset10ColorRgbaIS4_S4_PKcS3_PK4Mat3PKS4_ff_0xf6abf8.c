// 函数: _Z14FontDrawMatrixRK4Mat4P6XAsset10ColorRgbaIS4_S4_PKcS3_PK4Mat3PKS4_ff
// 地址: 0xf6abf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int128_t entry_v11
int64_t var_80 = entry_v11.q
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q
int128_t v10 = arg10
XAsset* var_1f8 = arg7
XAsset* x19 = arg2
int32_t var_a4 = arg5
FontCheckAtlas(arg2)
int64_t* x8

if (x19 == 0)
    x19 = AssetPtrGetNull(0x12)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
void* x28 = *x8
uint64_t result
int128_t v0
float128 v1
int128_t v2
int128_t v3
int128_t v7
int128_t v19
int128_t v21
int128_t v24
int128_t v25
int128_t v26
int128_t v27
result, v0, v1, v2, v3, v7, v19, v21, v24, v25, v26, v27 = SpriteGetShakeOffset()
int32_t var_210 = v1.d
float var_20c = v0.d
v2 = *(arg1 + 0x10)
XAsset* x25_1 = x19
float128 var_d0 = *(arg1 + 0x20)
int128_t var_c0 = *(arg1 + 0x30)
int128_t var_f0 = *arg1

if (var_1f8 != 0)
label_f6acac:
    
    if (*(x28 + 0x1c) s<= 0)
        *(x25_1 + 0x24) -= 1
    else
    label_f6acb8:
        v0.d = fconvert.s(1f)
        v0:4.d = fconvert.s(1f)
        int64_t i = 0
        int32_t var_218_1 = v10.d
        
        do
            int64_t x20_1 = *(x28 + 0x20)
            int64_t* x8_7 = x20_1 + i * 0x30
            int64_t* x9_2 = x8_7[1]
            int64_t* x26_1
            
            if (x9_2 == 0)
                x26_1 = *x8_7
            else
                x26_1 = x9_2
            
            int64_t* x8_9 = *x26_1
            
            if (x8_9 == 0)
                if (x26_1[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                result, v1, v3, v7, v19, v21, v24, v25, v26, v27 =
                    AssetCatalogLoadAsset(x26_1, false, true)
                x8_9 = *x26_1
            
            int64_t* x8_12 = **x8_9
            
            if (x8_12 == 0)
                break
            
            entry_v8.q = *x8_12
            uint64_t result_3 = *gSpriteWhite
            bool z_1
            
            if (*(x28 + 0x1c) == 2)
                z_1 = i == 0
            else
                z_1 = false
            
            int32_t x8_14
            
            x8_14 = z_1 ? arg4 : arg3
            
            int32_t var_f4 = x8_14
            uint64_t result_1 = result_3
            uint32_t x9_7
            
            if (zx.d(*(x20_1 + i * 0x30 + 0x28)) == 0)
                result, v1, v3, v7, v19, v21, v24, v25, v26, v27 = SpriteColorSet(&var_f4, &var_a4)
                result_1 = result
                x9_7 = zx.d(*arg6)
                
                if (x9_7 != 0)
                label_f6adc0:
                    v1.q = v0.q
                    char const* x21_1 = arg6
                    int32_t x19_1 = 0
                    uint128_t v0_2
                    v0_2:8.q = vdiv_f32(v1, vcvt_f32_u32(entry_v8)).q
                    entry_v11.d = 0f
                    uint128_t var_1f0_1 = v0_2
                    
                    while (true)
                        int32_t j = x9_7 & 0xff
                        
                        if ((x9_7 & 0x80) != 0)
                            if ((j & 0xe0) == 0xc0)
                                j = (zx.d(x21_1[1]) & 0x3f) | (0x1f & j) << 6
                            else if ((x9_7 & 0xf0) == 0xe0)
                                j = (((0xfffff03f & (j & 0xf) << 0xc)
                                    | (0x3f & zx.d(x21_1[1])) << 6) & 0xffffffc0)
                                    | (zx.d(x21_1[2]) & 0x3f)
                            else if ((j & 0xf8) == 0xf0)
                                j = (((0xfffff03f & ((0xfffc0fff & (j & 7) << 0x12)
                                    | (0x3f & zx.d(x21_1[1])) << 0xc)) | (0x3f & zx.d(x21_1[2])) << 6)
                                    & 0xffffffc0) | (zx.d(x21_1[3]) & 0x3f)
                        
                        entry_v8.d = fconvert.s(1f)
                        
                        if (not(v10.d f<= 0f))
                            result, v0_2, v1, v3, v7, v19, v21, v24, v25, v26, v27 = MyIsLower(j)
                            
                            if (((j != 0x20 ? 1 : 0) & (result.d ^ 1) & 1) == 0)
                                result, v0_2, v1, v3, v7, v19, v21, v24, v25, v26, v27 =
                                    MyToUpper(j)
                                j = result.d
                                entry_v8 = v10
                        
                        int32_t x8_33
                        int64_t x20_2
                        
                        if (j s> 0x7f)
                            uint64_t j_1 = zx.q(j)
                            int32_t* x8_36 =
                                *(*(x28 + 0x38) + ((zx.q(*(x28 + 0x40)) & (j_1 | j_1 u>> 4)) << 3))
                            
                            if (x8_36 != 0)
                                while (*x8_36 != j)
                                    x8_36 = *(x8_36 + 8)
                                    
                                    if (x8_36 == 0)
                                        goto label_f6adf0
                                
                                x8_33 = x8_36[1]
                                x20_2 = *(x20_1 + i * 0x30 + 0x20)
                                
                                if (x20_2 == 0)
                                    goto label_f6adf0
                                
                                goto label_f6af5c
                            
                        label_f6adf0:
                            int32_t x9_8 = sx.d(*x21_1)
                            
                            if ((x9_8 & 0x80000000) != 0)
                                int32_t x8_20 = x9_8 & 0xff
                                
                                if ((x8_20 & 0xe0) == 0xc0)
                                    x21_1 = &x21_1[1]
                                else if ((x9_8 & 0xf0) == 0xe0)
                                    x21_1 = &x21_1[2]
                                else if ((x8_20 & 0xf8) == 0xf0)
                                    x21_1 = &x21_1[3]
                            
                            x9_7 = zx.d(x21_1[1])
                            x21_1 = &x21_1[1]
                            
                            if (x9_7 == 0)
                                break
                        else
                            x8_33 = *(x28 + (sx.q(j) << 2) + 0x48)
                            
                            if (x8_33 == 0xffffffff)
                                goto label_f6adf0
                            
                            x20_2 = *(x20_1 + i * 0x30 + 0x20)
                            
                            if (x20_2 == 0)
                                goto label_f6adf0
                            
                        label_f6af5c:
                            int64_t x25_2 = sx.q(x8_33)
                            void* x8_37 = x20_2 + x25_2 * 0x24
                            int32_t var_1d4_1 = entry_v8.d
                            uint128_t v0_3 = vrev64q_s32(*(x8_37 + 4))
                            float128 v0_5 = vmulq_f32(var_1f0_1, vextq_s8(v0_3, v0_3, 0xc), 0)
                            uint128_t v1_1 = vextq_s8(v0_5, v0_5, 8)
                            float128 var_118_1 = v0_5
                            float128 v2_1
                            v2_1.d = v1_1.d
                            v0_5:4.d = v1_1:4.d
                            int64_t var_120 = v2_1.q
                            int64_t var_108_1 = v0_5.q
                            entry_v9 = entry_v11
                            v12.d = *(x28 + 4)
                            entry_v11.d = *(x8_37 + 0x14)
                            entry_v8.d = *(x8_37 + 0x18)
                            v14.d = *(x8_37 + 0xc)
                            v10.d = *(x8_37 + 0x10)
                            v15.d = *(x8_37 + 4)
                            v13.d = *(x8_37 + 8)
                            
                            if (arg9 != 0 && zx.d(*(x20_1 + i * 0x30 + 0x28)) == 0)
                                uint64_t result_2
                                result_2, v0_5, v1_1, v2_1, v3, v7, v19, v21, v24, v25, v26, v27 =
                                    SpriteColorSet(arg9 + (sx.q(x19_1) << 2), &var_a4)
                                result_1 = result_2
                            
                            v1_1.d = entry_v9.d f+ entry_v11.d
                            entry_v11 = entry_v9
                            entry_v9.d = var_1d4_1
                            v2_1.d = v14.d f- v15.d
                            v3.d = v10.d f- v13.d
                            v13.d = var_20c f+ v1_1.d
                            v1_1.d = entry_v9.d f* v2_1.d
                            v0_5.d = float.s(v12.d)
                            v1_1.d = v13.d f+ v1_1.d
                            float v4_1 = v0_5.d f- entry_v8.d
                            entry_v8.d = var_20c f+ v1_1.d
                            v1_1.d = var_210
                            v2_1.d = entry_v9.d f* v4_1
                            v0_5.d = v0_5.d f- v2_1.d
                            v10.d = v1_1.d f+ v0_5.d
                            v0_5.d = entry_v9.d f* v3.d
                            v0_5.d = v10.d f+ v0_5.d
                            v14.d = v1_1.d f+ v0_5.d
                            float v5_1
                            float v6_1
                            float v16_1
                            float v17_1
                            float v18_1
                            float v20_1
                            float v22_1
                            float v23_1
                            float v28_1
                            
                            if (arg8 == 0)
                                v1_1.d = var_f0.d
                                v2_1.d = var_f0:4.d
                                v4_1 = v2.d
                                v5_1 = v2:4.d
                                v16_1 = var_d0.d
                                v17_1 = var_d0:4.d
                                v3.d = var_f0:8.d
                                v0_5.d = var_f0:0xc.d
                                v7.d = v2:0xc.d
                                v19.d = var_d0:0xc.d
                                v20_1 = v13.d f* v1_1.d
                                v21.d = v10.d f* v2_1.d
                                v26.d = 0f
                                v22_1 = v13.d f* v4_1
                                v23_1 = v10.d f* v5_1
                                v24.d = v13.d f* v16_1
                                v25.d = v10.d f* v17_1
                                v1_1.d = entry_v8.d f* v1_1.d
                                v4_1 = entry_v8.d f* v4_1
                                v16_1 = entry_v8.d f* v16_1
                                v2_1.d = v14.d f* v2_1.d
                                v5_1 = v14.d f* v5_1
                                v17_1 = v14.d f* v17_1
                                v3.d = v3.d f* v26.d
                                v6_1 = v2:8.d f* v26.d
                                v18_1 = var_d0:8.d f* v26.d
                                v26.d = v20_1 f+ v21.d
                                v27.d = v22_1 + v23_1
                                v28_1 = v24.d f+ v25.d
                                v21.d = v1_1.d f+ v21.d
                                v25.d = v16_1 f+ v25.d
                                v20_1 = v20_1 f+ v2_1.d
                                v22_1 = v22_1 + v5_1
                                v24.d = v24.d f+ v17_1
                                v1_1.d = v1_1.d f+ v2_1.d
                                v2_1.d = v4_1 + v5_1
                                v5_1 = v26.d f+ v3.d
                                v21.d = v21.d f+ v3.d
                                v23_1 = v4_1 + v23_1 + v6_1
                                v25.d = v25.d f+ v18_1
                                v20_1 = v20_1 f+ v3.d
                                v22_1 = v22_1 + v6_1
                                v24.d = v24.d f+ v18_1
                                v1_1.d = v1_1.d f+ v3.d
                                v2_1.d = v2_1.d f+ v6_1
                                v3.d = v16_1 + v17_1 + v18_1
                                v4_1 = v0_5.d f+ v5_1
                                v5_1 = v7.d f+ v27.d f+ v6_1
                                v6_1 = v19.d f+ v28_1 + v18_1
                                v16_1 = v0_5.d f+ v21.d
                                v17_1 = v7.d f+ v23_1
                                v18_1 = v19.d f+ v25.d
                                v20_1 = v0_5.d f+ v20_1
                                v21.d = v7.d f+ v22_1
                                v22_1 = v19.d f+ v24.d
                                v0_5.d = v0_5.d f+ v1_1.d
                                v1_1.d = v7.d f+ v2_1.d
                                v2_1.d = v19.d f+ v3.d
                            else
                                void* x8_43 = arg8 + muls.dp.d(x19_1, 0x24)
                                v16_1 = fconvert.s(0.5f)
                                v0_5.q = *M3I
                                v3.d = *(M3I + 8)
                                v4_1 = *(M3I + 0x14)
                                v5_1 = (entry_v8.d f- v13.d) * v16_1
                                v6_1 = (v14.d f- v10.d) * v16_1
                                v16_1 = *x8_43
                                v17_1 = *(x8_43 + 4)
                                v21.d = *(x8_43 + 8)
                                v20_1 = *(x8_43 + 0xc)
                                v22_1 = *(x8_43 + 0x10)
                                v23_1 = *(x8_43 + 0x14)
                                v1_1.q = *(M3I + 0xc)
                                v5_1 = v13.d f+ v5_1
                                v6_1 = v10.d f+ v6_1
                                v18_1 = *(x8_43 + 0x18)
                                v19.d = *(x8_43 + 0x1c)
                                v24.d = *(x8_43 + 0x20)
                                v25.d = v5_1 f+ v3.d
                                v26.d = v6_1 + v4_1
                                v3.d = v3.d f- v5_1
                                v4_1 = v4_1 - v6_1
                                int128_t var_1b0_1 = data_71a7f0
                                v7.d = v17_1 f* v0_5.d
                                v27.d = v22_1 f* v0_5:4.d
                                v2_1.q = *(M3I + 0x18)
                                v5_1 = v16_1 f* v0_5.d + v20_1 f* v0_5:4.d
                                v7.d = v7.d f+ v27.d
                                v27.d = v17_1 f* v1_1.d
                                v28_1 = v21.d f* v0_5.d + v23_1 f* v0_5:4.d
                                v6_1 = v16_1 f* v1_1.d + v20_1 f* v1_1:4.d
                                v27.d = v27.d f+ v22_1 f* v1_1:4.d
                                float v29_1 = v21.d f* v1_1.d + v23_1 f* v1_1:4.d
                                float v30_1 = *(M3I + 0x20)
                                v16_1 = v16_1 f* v2_1.d + v20_1 f* v2_1:4.d
                                v21.d = v21.d f* v2_1.d
                                v17_1 = v17_1 f* v2_1.d + v22_1 f* v2_1:4.d
                                v22_1 = v25.d f* v19.d
                                v21.d = v21.d f+ v23_1 f* v2_1:4.d
                                v23_1 = v26.d f* v18_1
                                v5_1 = v5_1 + v25.d f* v18_1
                                v20_1 = v26.d f* v19.d
                                v19.d = v30_1 f* v19.d
                                v25.d = v25.d f* v24.d
                                v26.d = v26.d f* v24.d
                                v24.d = v30_1 f* v24.d
                                v7.d = v7.d f+ v22_1
                                v6_1 = v6_1 + v23_1
                                v20_1 = v27.d f+ v20_1
                                v16_1 = v16_1 + v30_1 * v18_1
                                v17_1 = v17_1 f+ v19.d
                                v22_1 = v28_1 f+ v25.d
                                v23_1 = v29_1 f+ v26.d
                                v18_1 = v21.d f+ v24.d
                                v19.d = v0_5.d f* v5_1
                                v19:4.d = v0_5:4.d f* v5_1
                                v21.d = v1_1.d f* v7.d
                                v21:4.d = v1_1:4.d f* v7.d
                                v5_1 = v3.d f* v5_1
                                v7.d = v4_1 f* v7.d
                                v25.d = v0_5.d f* v6_1
                                v25:4.d = v0_5:4.d f* v6_1
                                v26.d = v1_1.d f* v20_1
                                v26:4.d = v1_1:4.d f* v20_1
                                v6_1 = v3.d f* v6_1
                                v0_5.d = v0_5.d f* v16_1
                                v0_5:4.d = v0_5:4.d f* v16_1
                                v1_1.d = v1_1.d f* v17_1
                                v1_1:4.d = v1_1:4.d f* v17_1
                                v3.d = v3.d f* v16_1
                                v24.d = v2_1.d f* v22_1
                                v24:4.d = v2_1:4.d f* v22_1
                                v27.d = v2_1.d f* v23_1
                                v27:4.d = v2_1:4.d f* v23_1
                                v2_1.d = v2_1.d f* v18_1
                                v2_1:4.d = v2_1:4.d f* v18_1
                                int128_t v17_2 = vadd_f32(v19, v21)
                                int128_t v7_1 = vadd_f32(v25, v26)
                                int128_t v0_6 = vadd_f32(v0_5, v1_1)
                                v1_1.d = v3.d f+ v4_1 * v17_1
                                double v3_1 = vadd_f32(v17_2, v24)
                                double v5_2 = vadd_f32(v7_1, v27)
                                double v0_7 = vadd_f32(v0_6, v2_1)
                                v1_1.d = v1_1.d f+ v30_1 * v18_1
                                int32_t var_1c8_1 = 0
                                int32_t var_1b8_1 = 0
                                int32_t var_198_1 = 0
                                double var_1d0 = v3_1
                                float var_1c4_1 = v5_1 f+ v7.d + v30_1 * v22_1
                                double var_1c0_1 = v5_2
                                float var_1b4_1 = v6_1 + v4_1 * v20_1 + v30_1 * v23_1
                                double var_1a0_1 = v0_7
                                int32_t var_194_1 = v1_1.d
                                v0_5, v1_1, v2_1, v21 = Mat4Multiply(&var_f0, &var_1d0)
                                int32_t var_190
                                v0_5.d = var_190
                                int32_t var_18c
                                v1_1.d = var_18c
                                int32_t var_188
                                v2_1.d = var_188
                                v20_1 = v13.d f* v0_5.d
                                v21.d = v10.d f* v1_1.d
                                float v26_1 = 0f
                                float var_180
                                v22_1 = v13.d f* var_180
                                float var_17c
                                float v23_2 = v10.d f* var_17c
                                float var_170
                                float v24_1 = v13.d f* var_170
                                float var_16c
                                float v25_1 = v10.d f* var_16c
                                v0_5.d = entry_v8.d f* v0_5.d
                                v4_1 = entry_v8.d f* var_180
                                v16_1 = entry_v8.d f* var_170
                                v1_1.d = v14.d f* v1_1.d
                                v5_1 = v14.d f* var_17c
                                v17_1 = v14.d f* var_16c
                                v2_1.d = v2_1.d f* v26_1
                                float var_178
                                v6_1 = var_178 * v26_1
                                float var_168
                                v18_1 = var_168 * v26_1
                                v26_1 = v20_1 f+ v21.d
                                float v27_1 = v22_1 + v23_2
                                float v28_2 = v24_1 + v25_1
                                v21.d = v0_5.d f+ v21.d
                                v25_1 = v16_1 + v25_1
                                v20_1 = v20_1 f+ v1_1.d
                                v22_1 = v22_1 + v5_1
                                v0_5.d = v0_5.d f+ v1_1.d
                                v1_1.d = v4_1 + v5_1
                                v5_1 = v26_1 f+ v2_1.d
                                v21.d = v21.d f+ v2_1.d
                                v23_2 = v4_1 + v23_2 + v6_1
                                v20_1 = v20_1 f+ v2_1.d
                                v22_1 = v22_1 + v6_1
                                v24_1 = v24_1 + v17_1 + v18_1
                                v0_5.d = v0_5.d f+ v2_1.d
                                v1_1.d = v1_1.d f+ v6_1
                                v2_1.d = v16_1 + v17_1 + v18_1
                                float var_184
                                v4_1 = var_184 + v5_1
                                float var_174
                                v5_1 = var_174 + v27_1 + v6_1
                                float var_164
                                v6_1 = var_164 + v28_2 + v18_1
                                v16_1 = var_184 f+ v21.d
                                v17_1 = var_174 + v23_2
                                v18_1 = var_164 + v25_1 + v18_1
                                v20_1 = var_184 + v20_1
                                v21.d = var_174 + v22_1
                                v22_1 = var_164 + v24_1
                                v0_5.d = var_184 f+ v0_5.d
                                v1_1.d = var_174 f+ v1_1.d
                                v2_1.d = var_164 f+ v2_1.d
                            float var_150 = v4_1
                            float var_14c_1 = v5_1
                            float var_148_1 = v6_1
                            float var_144_1 = v16_1
                            float var_140_1 = v17_1
                            float var_13c_1 = v18_1
                            float var_138_1 = v20_1
                            int32_t var_134_1 = v21.d
                            float var_130_1 = v22_1
                            int32_t var_12c_1 = v0_5.d
                            int32_t var_128_1 = v1_1.d
                            int32_t var_124_1 = v2_1.d
                            result, v0_2, v1, v3, v7, v19, v21, v24, v25, v26, v27 =
                                SpriteDrawVerts(&var_150, &var_120, &result_1, false, x26_1, 
                                var_1f8)
                            v10.d = var_218_1
                            int32_t x9_16 = sx.d(*x21_1)
                            void* x8_45
                            int32_t x9_17
                            int32_t x10_4
                            
                            if ((x9_16 & 0x80000000) != 0)
                                int32_t x8_46 = x9_16 & 0xff
                                
                                if ((x8_46 & 0xe0) == 0xc0)
                                    x21_1 = &x21_1[1]
                                    x8_45 = &x21_1[1]
                                    x10_4 = sx.d(*x8_45)
                                    x9_17 = x10_4 & 0xff
                                    
                                    if ((x10_4 & 0x80000000) != 0)
                                        goto label_f6b44c
                                else if ((x9_16 & 0xf0) != 0xe0)
                                    if ((x8_46 & 0xf8) == 0xf0)
                                        x21_1 = &x21_1[3]
                                    
                                    x8_45 = &x21_1[1]
                                    x10_4 = sx.d(*x8_45)
                                    x9_17 = x10_4 & 0xff
                                    
                                    if ((x10_4 & 0x80000000) != 0)
                                        goto label_f6b44c
                                else
                                    x21_1 = &x21_1[2]
                                    x8_45 = &x21_1[1]
                                    x10_4 = sx.d(*x8_45)
                                    x9_17 = x10_4 & 0xff
                                    
                                    if ((x10_4 & 0x80000000) != 0)
                                        goto label_f6b44c
                            else
                                x8_45 = &x21_1[1]
                                x10_4 = sx.d(*x8_45)
                                x9_17 = x10_4 & 0xff
                                
                                if ((x10_4 & 0x80000000) != 0)
                                label_f6b44c:
                                    
                                    if ((x9_17 & 0xe0) == 0xc0)
                                        x9_17 = (zx.d(x21_1[2]) & 0x3f) | (0x1f & x9_17) << 6
                                    else if ((x10_4 & 0xf0) == 0xe0)
                                        x9_17 = (((0xfffff03f & (x9_17 & 0xf) << 0xc)
                                            | (0x3f & zx.d(x21_1[2])) << 6) & 0xffffffc0)
                                            | (zx.d(x21_1[3]) & 0x3f)
                                    else if ((x9_17 & 0xf8) == 0xf0)
                                        x9_17 = (((0xfffff03f & ((0xfffc0fff & (x9_17 & 7) << 0x12)
                                            | (0x3f & zx.d(x21_1[2])) << 0xc))
                                            | (0x3f & zx.d(x21_1[3])) << 6) & 0xffffffc0)
                                            | (zx.d(x21_1[4]) & 0x3f)
                            int32_t x10_14 = *(x20_2 + x25_2 * 0x24 + 0x1c)
                            int64_t x12_2
                            
                            if (x9_17 != 0)
                                x12_2 = sx.q(*(x20_2 + x25_2 * 0x24 + 0x20))
                            
                            if (x9_17 == 0 || x12_2.d == 0xffffffff)
                                x25_1 = x19
                            else
                                int64_t x13_1 = sx.q(*(x28 + 0x28))
                                x25_1 = x19
                                
                                if (x12_2.d s< x13_1.d)
                                    void* x11_7 = *(x28 + 0x30) + x12_2 * 0xc + 8
                                    int64_t x12_3 = x13_1 - x12_2
                                    
                                    while (*(x11_7 - 8) == j)
                                        if (*(x11_7 - 4) == x9_17)
                                            x10_14 += *x11_7
                                            break
                                        
                                        int64_t temp1_1 = x12_3
                                        x12_3 -= 1
                                        x11_7 += 0xc
                                        
                                        if (temp1_1 == 1)
                                            break
                            
                            v0_2.d = *(x28 + 0x10)
                            v1.d = float.s(x10_14)
                            x19_1 += 1
                            v0_2.d = v0_2.d f+ v1.d
                            v1.d = arg11
                            v0_2.d = v0_2.d f+ v1.d
                            v0_2.d = entry_v9.d f* v0_2.d
                            entry_v11.d = entry_v11.d f+ v0_2.d
                            x9_7 = zx.d(*x8_45)
                            x21_1 = x8_45
                            
                            if (x9_7 == 0)
                                break
            else
                x9_7 = zx.d(*arg6)
                
                if (x9_7 != 0)
                    goto label_f6adc0
            i += 1
        while (i s< sx.q(*(x28 + 0x1c)))
        
        if (x25_1 != 0)
            *(x25_1 + 0x24) -= 1
else
    XAsset* x8_3 = *(*gpRenderAppData + 0x3b8)
    var_1f8 = x8_3
    
    if (x8_3 != 0)
        goto label_f6acac
    
    if ((zx.d(data_23eef88) & 1) == 0)
        result, v0, v1, v3, v7, v19, v21, v24, v25, v26, v27 = __cxa_guard_acquire(&data_23eef88)
        
        if (result.d != 0)
            data_23eef80 = AssetPtrFromPath("sys/sprite_3d.material", 5)
            result, v0, v1, v3, v7, v19, v21, v24, v25, v26, v27 =
                __cxa_guard_release(&data_23eef88)
            x25_1 = x19
    
    var_1f8 = data_23eef80
    
    if (*(x28 + 0x1c) s> 0)
        goto label_f6acb8
    
    *(x25_1 + 0x24) -= 1

entry_v9.q = var_70
entry_v8.q = var_68
entry_v11.q = var_80
return result
