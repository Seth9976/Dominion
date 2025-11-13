// 函数: _Z19HasSpineSlotBindingR3UI2S0_R16UI2InheritedData
// 地址: 0x1021684
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
uint32_t x22 = *(arg1 + 0x13c0)

if (x22 != 0)
    int64_t* x23_1 = *(arg1 + 0x1688)
    int64_t* x8_1 = *x23_1
    
    if (x8_1 == 0)
        if (x23_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x23_1, false, true)
        x8_1 = *x23_1
    
    int64_t* x0_4 = AttribMapGetDef(*gUI2AttribTable, **x8_1 + sx.q(*(arg1 + 0x1690)) * 0x18, 
        *macro_ptr_SpineSlotMappings, 0x110)
    
    if (x0_4 != 0)
        int64_t* x23_2 = x0_4
        int32_t x8_12
        
        if (x0_4[1].d s< 1)
        label_1021788:
            x8_12 = 0
        else
            int64_t x26_1 = 0
            int64_t x27_1 = 0
            
            while (true)
                x0_4 = strcmp(*(*x23_2 + x26_1 + 8), XString::operator char const*())
                
                if (x0_4.d == 0)
                    float var_a8
                    int128_t v0_1
                    x0_4, v0_1 = SpineGetSlotInfoByName(x22, *(*x23_2 + x26_1), &var_a8)
                    
                    if ((x0_4.d & 1) != 0)
                        float v1_1 = *(arg2 + 0x175c)
                        float v2_1 = *(arg2 + 0x1760)
                        float v19_1 = *(arg1 + 0x16c0)
                        float v20_1 = *(arg1 + 0x16b4)
                        float v21_1 = *(arg1 + 0x16b8)
                        float v22_1 = *(arg1 + 0x16bc)
                        float var_90
                        float v27_1 = v1_1 / var_90
                        float v6_1 = *QI
                        float v4_1 = *(QI + 4)
                        float v5_1 = *(QI + 8)
                        float v18_1 = *(QI + 0xc)
                        float var_8c
                        float v3_1 = v2_1 / var_8c
                        v0_1.d = fconvert.s(1f)
                        float v17_1 = fconvert.s(-0.5f)
                        float v25_1 = fconvert.s(0.5f)
                        float v29_1 = *VZ
                        float v30_1 = *(VZ + 4)
                        float v31_1 = *(VZ + 8)
                        v1_1 = v1_1 * v17_1
                        v2_1 = v2_1 * v17_1
                        
                        if (v27_1 > v3_1)
                            v3_1 = v27_1
                        
                        float var_9c
                        v17_1 = sqrt((var_9c f+ v0_1.d) * v25_1)
                        
                        if (v3_1 == 0f)
                            v3_1 = v0_1.d
                        
                        v25_1 = sqrt((v0_1.d f- var_9c) * v25_1)
                        
                        if (*(arg1 + 0x143c) == 9)
                            v0_1.d = v3_1
                        else
                            v0_1.d = v0_1.d
                        
                        float v7_1 = var_a8
                        __builtin_memset(arg3 + 0x20, 0, 0xc0)
                        v27_1 = v29_1 * v25_1
                        float v28_1 = v30_1 * v25_1
                        v25_1 = v25_1 * v31_1
                        float var_a0
                        
                        if (var_a0 < 0f)
                            v17_1 = fneg(v17_1)
                        
                        v30_1 = v28_1 * v21_1
                        v31_1 = v25_1 * v22_1
                        v8.d = v27_1 * v19_1
                        v9.d = v28_1 * v22_1
                        v3_1 = v25_1 * v21_1
                        float v24_1 = v28_1 * v19_1
                        float var_98
                        v0_1.d = var_98 f/ v0_1.d
                        float v23_1 = v25_1 * v20_1
                        v25_1 = v19_1 * v25_1
                        v28_1 = v28_1 * v20_1
                        v19_1 = v17_1 * v19_1 - v27_1 * v20_1 - v30_1 - v31_1
                        v3_1 = v8.d f+ v17_1 * v20_1 f+ v9.d - v3_1
                        v20_1 = v23_1 + v24_1 + v17_1 * v21_1 - v27_1 * v22_1
                        v17_1 = v27_1 * v21_1 + v25_1 + v17_1 * v22_1 - v28_1
                        v21_1 = v19_1 * v19_1
                        v22_1 = v3_1 * v3_1
                        v23_1 = v3_1 * v20_1
                        v24_1 = v19_1 * v17_1
                        v25_1 = v19_1 * v20_1
                        float v26_1 = v3_1 * v17_1
                        v27_1 = v20_1 * v17_1
                        v28_1 = v19_1 * v3_1
                        v8.d = v23_1 - v24_1
                        v23_1 = v23_1 + v24_1
                        v24_1 = v21_1 + v22_1
                        v21_1 = v21_1 - v22_1
                        v22_1 = v25_1 + v26_1
                        v25_1 = v26_1 - v25_1
                        v26_1 = v27_1 - v28_1
                        v27_1 = v28_1 + v27_1
                        v29_1 = v18_1 * v19_1 - v6_1 * v3_1
                        v30_1 = v4_1 * v19_1
                        v28_1 = v6_1 * v19_1 + v18_1 * v3_1
                        v31_1 = v18_1 * v20_1
                        v18_1 = v5_1 * v19_1 + v18_1 * v17_1
                        v19_1 = v1_1 + v1_1
                        v30_1 = v30_1 + v31_1
                        v31_1 = v2_1 + v2_1
                        v23_1 = v19_1 * v23_1
                        v19_1 = v19_1 * v25_1
                        v25_1 = v20_1 * v20_1
                        v24_1 = v24_1 - v25_1
                        v8.d = v31_1 f* v8.d
                        v27_1 = v31_1 * v27_1
                        v31_1 = v25_1 + v21_1
                        v21_1 = v21_1 - v25_1
                        v25_1 = v29_1 - v4_1 * v20_1
                        v29_1 = v5_1 * v20_1
                        v20_1 = v6_1 * v20_1
                        v6_1 = v6_1 * v17_1 + v30_1
                        v30_1 = v5_1 * v17_1
                        v5_1 = v5_1 * v3_1
                        v3_1 = v4_1 * v3_1
                        v4_1 = v4_1 * v17_1
                        v17_1 = v17_1 * v17_1
                        v28_1 = v29_1 + v28_1
                        v29_1 = 0f
                        *(arg3 + 8) = v6_1 - v5_1
                        *(arg3 + 0xc) = v3_1 + v18_1 - v20_1
                        *arg3 = v0_1.d
                        *(arg3 + 4) = v28_1 - v4_1
                        v3_1 = v0_1.d f* (v19_1 + v27_1 - (v17_1 + v21_1) * v29_1)
                        v1_1 = v0_1.d f* (v8.d f+ v1_1 * (v24_1 - v17_1) - v22_1 * v29_1)
                        v0_1.d = v0_1.d f* (v23_1 + v2_1 * (v31_1 - v17_1) - v26_1 * v29_1)
                        int32_t var_a4
                        v0_1.d = var_a4 f+ v0_1.d
                        *(arg3 + 0xe0) = 0
                        *(arg3 + 0x10) = v25_1 - v30_1
                        *(arg3 + 0x14) = v7_1 + v1_1
                        *(arg3 + 0x18) = v0_1.d
                        *(arg3 + 0x1c) = v3_1 + v29_1
                        int128_t var_88
                        *(arg3 + 0x54) = var_88
                        int128_t var_78
                        *(arg3 + 0x64) = var_78
                        *(arg3 + 0xe0) = 0
                        int32_t var_68
                        *(arg3 + 0x78) = var_68
                    
                    x8_12 = 1
                    break
                
                x27_1 += 1
                x26_1 += 0x10
                
                if (x27_1 s>= sx.q(x23_2[1].d))
                    goto label_1021788
        
        return zx.q(x8_12) & zx.q(x0_4.d)

return 0
