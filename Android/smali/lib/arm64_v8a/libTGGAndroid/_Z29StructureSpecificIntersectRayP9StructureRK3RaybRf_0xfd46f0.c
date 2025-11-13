// 函数: _Z29StructureSpecificIntersectRayP9StructureRK3RaybRf
// 地址: 0xfd46f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t* x23 = *(arg1 + 8)
int64_t* x8
int128_t v0
int128_t v6

if (x23 == 0)
    int64_t* x0_7
    x0_7, v0, v6 = AssetPtrGetNull(2)
    x23 = x0_7
    x8 = *x23
    
    if (x8 == 0)
        v0, v6 = AssetCatalogLoadAsset(x23, false, true)
        x8 = *x23
else
    x8 = *x23
    
    if (x8 == 0)
        v0, v6 = AssetCatalogLoadAsset(x23, false, true)
        x8 = *x23

int32_t x9 = *(x23 + 0x24)
*(x23 + 0x24) = x9 + 1
void* x8_2 = **x8
int32_t x0_1

if (x8_2 == 0)
    x0_1 = 0
    *(x23 + 0x24) = x9
else
    float v3 = *(arg1 + 0x18)
    float v4 = *(arg1 + 0x1c)
    float v5 = *(arg1 + 0x20)
    v6.d = *(arg1 + 0x24)
    float v7 = *(arg1 + 0x28)
    float v2 = *(arg1 + 0x2c)
    v0.d = *(arg1 + 0x10)
    float v1 = *(arg1 + 0x14)
    float v17 = v4 * v4
    float var_b0 = v4
    float var_ac_1 = v5
    int32_t var_a8_1 = v6.d
    float var_a4_1 = v7
    float v18 = v5 * v5
    float v19 = v6.d f* v6.d
    float v20 = v4 * v5
    float v21 = v6.d f* v7
    float v22 = v5 * v7
    float v23 = v4 f* v6.d
    v5 = v5 f* v6.d
    v6.q = *(x8_2 + 0x40)
    float v16 = v7 * v7
    v4 = v4 * v7
    v7 = *(x8_2 + 0x48)
    float v24 = v17 + v16
    v16 = v16 - v17
    float v25 = v20 - v21
    float v26 = v23 + v22
    v20 = v20 + v21
    v17 = v5 - v4
    v21 = v23 - v22
    v4 = v5 + v4
    v22 = v18 + v16
    v16 = v16 - v18
    v5 = v24 - v18 - v19
    v18 = v22 - v19
    v16 = v19 + v16
    v19 = v2 f* v6.d
    v22 = v2 f* v6:4.d
    v23 = v2 * v7
    v5 = v5 * v19
    v24 = v22 + v22
    v19 = v19 + v19
    float v27 = v23 + v23
    v0.d = v0.d f+ v26 * v27 + v5 + v25 * v24
    int32_t var_a0_1 = v0.d
    float var_9c_1 = v1 + v20 * v19 + v18 * v22 + v17 * v27
    float var_98_1 = v3 + v16 * v23 + v21 * v19 + v4 * v24
    v0.q = *(x8_2 + 0x4c)
    v1 = *(x8_2 + 0x54)
    double v0_1
    v0_1.d = vsub_f32(v0, v6).d f* v2
    v0_1:4.d = v0_1:4.d f* v2
    double var_94_1 = v0_1
    float var_8c_1 = v2 * (v1 - v7)
    x0_1 = BoneTransformIntersectRay(&var_b0, arg2, arg4)
    *(x23 + 0x24) -= 1
    
    if ((x0_1 & arg3.d & 1) != 0)
        int64_t* x22_1 = *(arg1 + 8)
        int64_t* x8_5
        
        if (x22_1 == 0)
            x22_1 = AssetPtrGetNull(2)
            x8_5 = *x22_1
            
            if (x8_5 == 0)
                AssetCatalogLoadAsset(x22_1, false, true)
                x8_5 = *x22_1
        else
            x8_5 = *x22_1
            
            if (x8_5 == 0)
                AssetCatalogLoadAsset(x22_1, false, true)
                x8_5 = *x22_1
        
        int32_t x9_2 = *(x22_1 + 0x24)
        *(x22_1 + 0x24) = x9_2 + 1
        int32_t* x11_1 = **x8_5
        uint64_t x8_7
        
        if (x11_1 != 0)
            x8_7 = zx.q(*x11_1)
        
        if (x11_1 == 0 || x8_7.d s<= 0)
            x0_1 = 0
            *(x22_1 + 0x24) = x9_2
        else
            int64_t x12_1 = 0
            v8.d = 0f
            int32_t x9_3 = 1
            int32_t* var_c0_1 = x11_1
            
            while (true)
                int64_t x9_4 = *(x11_1 + 8)
                
                if (*(x9_4 + x12_1 * 0x150 + 0x28) s< 1)
                    goto label_fd48d4
                
                void* x8_8 = x9_4 + x12_1 * 0x150
                int64_t x26_1 = 0
                int32_t x19_1 = 1
                v9.d = 0f
                
                do
                    void* x9_5 = *(arg1 + 0x38)
                    int16_t* x10_3 = *(x8_8 + 0x30) + (x26_1 << 1)
                    uint64_t x8_10 = zx.q(*x10_3)
                    uint64_t x24_1 = zx.q(x10_3[1])
                    uint64_t x23_1 = zx.q(x10_3[2])
                    int64_t x10_4 = *(x8_8 + 0x20)
                    void* const x8_11
                    float v0_2
                    float v1_1
                    float v2_1
                    
                    if (x9_5 == 0)
                        float* x8_12 = x10_4 + x8_10 * 0x2c
                        v0_2 = *x8_12
                        v1_1 = x8_12[1]
                        v2_1 = x8_12[2]
                        x8_11 = nullptr
                    else
                        v0_2, v1_1, v2_1 =
                            StructureGetAnimatedVertexPosition(x10_4 + x8_10 * 0x34, *(x9_5 + 0xb0))
                        x8_11 = *(arg1 + 0x38)
                    
                    float v7_1 = *(arg1 + 0x28)
                    float v6_1 = *(arg1 + 0x2c)
                    float v5_1 = *(arg1 + 0x18)
                    float v16_1 = *(arg1 + 0x1c)
                    float v17_1 = *(arg1 + 0x20)
                    float v18_1 = *(arg1 + 0x24)
                    float v3_1 = *(arg1 + 0x10)
                    float v4_1 = *(arg1 + 0x14)
                    float v19_1 = v7_1 * v7_1
                    float v20_1 = v16_1 * v16_1
                    float v22_1 = v16_1 * v17_1
                    float v23_1 = v18_1 * v7_1
                    float v21_1 = v17_1 * v17_1
                    float v25_1 = v17_1 * v7_1
                    float v27_1 = v17_1 * v18_1
                    float v28_1 = v16_1 * v7_1
                    float v29_1 = v20_1 + v19_1
                    v7_1 = v22_1 - v23_1
                    v17_1 = v22_1 + v23_1
                    v22_1 = v19_1 - v20_1
                    v0_2 = v0_2 * v6_1
                    v1_1 = v1_1 * v6_1
                    v2_1 = v2_1 * v6_1
                    float v24_1 = v18_1 * v18_1
                    float v26_1 = v16_1 * v18_1
                    v18_1 = v27_1 - v28_1
                    v20_1 = v27_1 + v28_1
                    v23_1 = v29_1 - v21_1
                    v28_1 = v21_1 + v22_1
                    float v30_1 = v1_1 + v1_1
                    float v31_1 = v2_1 + v2_1
                    v16_1 = v26_1 + v25_1
                    v10.d = v0_2 + v0_2
                    v19_1 = v26_1 - v25_1
                    v21_1 = v22_1 - v21_1
                    v23_1 = v23_1 - v24_1
                    v22_1 = v28_1 - v24_1
                    v21_1 = v24_1 + v21_1
                    var_b0 = v3_1 + v16_1 * v31_1 + v7_1 * v30_1 + v0_2 * v23_1
                    float var_ac_2 = v4_1 + v18_1 * v31_1 + v17_1 f* v10.d + v1_1 * v22_1
                    float var_a8_2 = v5_1 + v2_1 * v21_1 + v19_1 f* v10.d + v20_1 * v30_1
                    int64_t x9_6 = *(x8_8 + 0x20)
                    void* const x8_13
                    
                    if (x8_11 == 0)
                        float* x8_14 = x9_6 + x24_1 * 0x2c
                        v0_2 = *x8_14
                        v1_1 = x8_14[1]
                        v2_1 = x8_14[2]
                        x8_13 = nullptr
                    else
                        v0_2, v1_1, v2_1 =
                            StructureGetAnimatedVertexPosition(x9_6 + x24_1 * 0x34, *(x8_11 + 0xb0))
                        v5_1 = *(arg1 + 0x18)
                        v7_1 = *(arg1 + 0x1c)
                        v18_1 = *(arg1 + 0x24)
                        v16_1 = *(arg1 + 0x28)
                        v17_1 = *(arg1 + 0x20)
                        v3_1 = *(arg1 + 0x10)
                        v4_1 = *(arg1 + 0x14)
                        v6_1 = *(arg1 + 0x2c)
                        x8_13 = *(arg1 + 0x38)
                        v19_1 = v16_1 * v16_1
                        v20_1 = v7_1 * v7_1
                        v22_1 = v7_1 * v17_1
                        v23_1 = v18_1 * v16_1
                        v21_1 = v17_1 * v17_1
                        v25_1 = v17_1 * v16_1
                        v26_1 = v7_1 * v18_1
                        v27_1 = v17_1 * v18_1
                        float v28_2 = v7_1 * v16_1
                        float v29_2 = v20_1 + v19_1
                        v7_1 = v22_1 - v23_1
                        v17_1 = v22_1 + v23_1
                        v22_1 = v19_1 - v20_1
                        v24_1 = v18_1 * v18_1
                        v16_1 = v26_1 + v25_1
                        v19_1 = v26_1 - v25_1
                        v23_1 = v29_2 - v21_1
                        v25_1 = v21_1 + v22_1
                        v21_1 = v22_1 - v21_1
                        v18_1 = v27_1 - v28_2
                        v20_1 = v27_1 + v28_2
                        v23_1 = v23_1 - v24_1
                        v22_1 = v25_1 - v24_1
                        v21_1 = v24_1 + v21_1
                    
                    v1_1 = v6_1 * v1_1
                    v0_2 = v6_1 * v0_2
                    v25_1 = v1_1 + v1_1
                    v2_1 = v6_1 * v2_1
                    v24_1 = v23_1 * v0_2
                    v0_2 = v0_2 + v0_2
                    v26_1 = v2_1 + v2_1
                    float var_a4_2 = v3_1 + v16_1 * v26_1 + v24_1 + v7_1 * v25_1
                    float var_a0_2 = v4_1 + v17_1 * v0_2 + v22_1 * v1_1 + v18_1 * v26_1
                    float var_9c_2 = v5_1 + v21_1 * v2_1 + v19_1 * v0_2 + v20_1 * v25_1
                    int64_t x9_7 = *(x8_8 + 0x20)
                    
                    if (x8_13 == 0)
                        float* x8_15 = x9_7 + x23_1 * 0x2c
                        v0_2 = *x8_15
                        v1_1 = x8_15[1]
                        v2_1 = x8_15[2]
                    else
                        v0_2, v1_1, v2_1 =
                            StructureGetAnimatedVertexPosition(x9_7 + x23_1 * 0x34, *(x8_13 + 0xb0))
                        v5_1 = *(arg1 + 0x18)
                        v7_1 = *(arg1 + 0x1c)
                        v18_1 = *(arg1 + 0x24)
                        v16_1 = *(arg1 + 0x28)
                        v17_1 = *(arg1 + 0x20)
                        v3_1 = *(arg1 + 0x10)
                        v4_1 = *(arg1 + 0x14)
                        v6_1 = *(arg1 + 0x2c)
                        v19_1 = v16_1 * v16_1
                        v20_1 = v7_1 * v7_1
                        v22_1 = v7_1 * v17_1
                        v23_1 = v18_1 * v16_1
                        v21_1 = v17_1 * v17_1
                        float v25_2 = v17_1 * v16_1
                        float v26_2 = v7_1 * v18_1
                        float v27_2 = v17_1 * v18_1
                        float v28_3 = v7_1 * v16_1
                        float v29_3 = v20_1 + v19_1
                        v7_1 = v22_1 - v23_1
                        v17_1 = v22_1 + v23_1
                        v22_1 = v19_1 - v20_1
                        float v24_2 = v18_1 * v18_1
                        v16_1 = v26_2 + v25_2
                        v19_1 = v26_2 - v25_2
                        v23_1 = v29_3 - v21_1
                        v25_2 = v21_1 + v22_1
                        v21_1 = v22_1 - v21_1
                        v18_1 = v27_2 - v28_3
                        v20_1 = v27_2 + v28_3
                        v23_1 = v23_1 - v24_2
                        v22_1 = v25_2 - v24_2
                        v21_1 = v24_2 + v21_1
                    
                    v0_2 = v6_1 * v0_2
                    v1_1 = v6_1 * v1_1
                    v2_1 = v6_1 * v2_1
                    v6_1 = v23_1 * v0_2
                    v23_1 = v1_1 + v1_1
                    v0_2 = v0_2 + v0_2
                    v1_1 = v22_1 * v1_1
                    v22_1 = v2_1 + v2_1
                    float var_98_2 = v3_1 + v16_1 * v22_1 + v6_1 + v7_1 * v23_1
                    var_94_1.d = v4_1 + v17_1 * v0_2 + v1_1 + v18_1 * v22_1
                    var_94_1:4.d = v5_1 + v21_1 * v2_1 + v19_1 * v0_2 + v20_1 * v23_1
                    float var_74
                    int32_t x0_6 = IntersectRayTri(arg2, &var_b0, &var_74)
                    v0_2 = var_74
                    x26_1 += 3
                    
                    if ((x0_6 & (x19_1 | (v0_2 f< v9.d ? 1 : 0)) & 1) != 0)
                        v9.d = v0_2
                    else
                        v9.d = v9.d
                    
                    x19_1 &= x0_6 ^ 1
                while (*(x9_4 + x12_1 * 0x150 + 0x28) s> x26_1.d)
                
                if ((x19_1 & 1) == 0)
                    x11_1 = var_c0_1
                    x8_7 = sx.q(*x11_1)
                    x12_1 += 1
                    
                    if (((x9_3 | (v9.d f< v8.d ? 1 : 0)) & 1) != 0)
                        v8.d = v9.d
                    else
                        v8.d = v8.d
                    
                    x9_3 = 0
                    
                    if (x12_1 s< x8_7)
                        continue
                else
                    x11_1 = var_c0_1
                    x8_7 = zx.q(*x11_1)
                label_fd48d4:
                    x12_1 += 1
                    
                    if (x12_1 s< sx.q(x8_7.d))
                        continue
                    else if ((x9_3 & 1) != 0)
                        if (x22_1 == 0)
                            x0_1 = 0
                        else
                            x0_1 = 0
                            *(x22_1 + 0x24) -= 1
                        
                        break
                
                *arg4 = v8.d
                
                if (x22_1 != 0)
                    *(x22_1 + 0x24) -= 1
                
                x0_1 = 1
                break

return zx.q(x0_1) & 1
