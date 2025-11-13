// 函数: _Z26AnimationCalcFinalPositionP13StructureAnimP13BoneTransform
// 地址: 0xc79bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t* x19 = *arg1
StructureAnim* x21 = arg1
int64_t* x8
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v21

if (x19 == 0)
    arg1, v0, v1, v2, v3, v21 = AssetPtrGetNull(2)
    x19 = arg1
    x8 = *x19
    
    if (x8 == 0)
        arg1, v0, v1, v2, v3, v21 = AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        arg1, v0, v1, v2, v3, v21 = AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
void* x22 = **x8
uint64_t x8_2 = zx.q(*(x22 + 0x10))

if (x8_2.d s>= 1)
    int128_t* x27_1 = *(x21 + 0x20)
    int32_t var_1c0
    int64_t* x16_1 = &var_1c0 | 4
    void var_194
    void* var_260_1 = &var_194
    void var_1a8
    void* var_258_1 = &var_1a8
    int32_t var_240
    int64_t* x9_2 = &var_240 | 4
    int64_t i = 0
    void* __offset(BoneTransform, 0x14) x24_1 = arg2 + 0x14
    v8.d = fconvert.s(1f)
    void var_1d4
    void* var_268_1 = &var_1d4
    int128_t* x21_1 = x27_1
    int128_t var_250_1 = data_71cfa0
    
    do
        float v4 = *(x24_1 - 0xc)
        v0.d = *(x24_1 - 8)
        v1.d = *(x24_1 - 0x14)
        v2.d = *(x24_1 - 0x10)
        void* x8_3 = *(x22 + 0x18)
        v3.d = v0.d f* v0.d
        v3.d = v3.d f+ v1.d f* v1.d
        v3.d = v3.d f+ v2.d f* v2.d
        v3.d = v3.d f+ v4 * v4
        float v5 = sqrt(v3.d)
        v3.d = v0.d f/ v5
        v0.d = v1.d f/ v5
        v2.d = v2.d f/ v5
        v1.d = v4 / v5
        *(x24_1 - 0x14) = v0.d
        *(x24_1 - 0x10) = v2.d
        *(x24_1 - 0xc) = v1.d
        *(x24_1 - 8) = v3.d
        int64_t x28_1 = sx.q(*(x8_3 + i + 0x6c))
        int32_t v6
        float v7
        float v16
        float v17
        int32_t v18
        int32_t v19
        int32_t v20
        float v22
        float v23
        float v24
        float v25
        
        if (x28_1.d == 0xffffffff)
            v6 = *(x24_1 + 8)
            v7 = *(x24_1 + 0xc)
            v4 = v2.d f+ v2.d
            v16 = v0.d f+ v0.d
            v3.d = v3.d f+ v3.d
            v21.d = v2.d f* v4
            v5 = v1.d f* (v1.d f+ v1.d)
            v22 = v16 f* v2.d
            v23 = v1.d f* v3.d
            v24 = v16 f* v1.d
            v2.d = v2.d f* v3.d
            v16 = v0.d f* v16
            v1.d = v4 f* v1.d
            v0.d = v0.d f* v3.d
            v4 = v22 - v23
            v25 = v24 f+ v2.d
            v22 = v22 + v23
            v23 = v1.d f- v0.d
            v2.d = v24 f- v2.d
            v0.d = v1.d f+ v0.d
            v17 = *(x24_1 + 0x10)
            v2.d = v6 f* v2.d
            v0.d = v7 f* v0.d
            v18 = *(x24_1 - 4)
            v19 = *x24_1
            v20 = *(x24_1 + 4)
            x21_1[2].d = v2.d
            *(x21_1 + 0x24) = v0.d
            v3.d = v8.d f- v21.d
            v16 = v8.d f- v16
            v1.d = v3.d f- v5
            v3.d = v16 - v5
            v5 = v16 f- v21.d
            v1.d = v6 f* v1.d
            v21.d = v6 f* v22
            v3.d = v7 f* v3.d
            *x21_1 = v1.d
            *(x21_1 + 4) = v7 * v4
            *(x21_1 + 8) = v17 * v25
            *(x21_1 + 0xc) = v18
            x21_1[1].d = v21.d
            *(x21_1 + 0x14) = v3.d
            *(x21_1 + 0x18) = v17 * v23
            *(x21_1 + 0x1c) = v19
            *(x21_1 + 0x28) = v5 * v17
            *(x21_1 + 0x2c) = v20
            x21_1[3] = var_250_1
        else
            int128_t var_100
            int32_t var_c0
            
            if (zx.d(*(arg2 + x28_1 * 0x2c + 0x28)) == 0)
                v0.d = *(x24_1 - 4)
                v1.d = *x24_1
                v2.d = *(x24_1 + 4)
                int64_t var_180 = 0x3f800000
                int32_t var_178_1 = 0
                int64_t var_170_1 = 0x3f80000000000000
                int32_t var_168_1 = 0
                int64_t var_160_1 = 0
                int32_t var_158_1 = 0x3f800000
                int128_t var_150_1 = var_250_1
                void* x8_7 = arg2 + x28_1 * 0x2c
                int32_t var_174_1 = v0.d
                int32_t var_164_1 = v1.d
                int32_t var_154_1 = v2.d
                v3.d = *V1
                v4 = *(V1 + 4)
                v0.d = *(x8_7 + 0x1c)
                v1.d = *(x8_7 + 0x20)
                v2.d = *(x8_7 + 0x24)
                v5 = *(V1 + 8)
                v0.d = v3.d f/ v0.d
                var_1c0 = v0.d
                *x16_1 = 0
                x16_1[1] = 0
                v1.d = v4 f/ v1.d
                int32_t var_1ac_1 = v1.d
                v2.d = v5 f/ v2.d
                *var_258_1 = 0
                *(var_258_1 + 8) = 0
                int32_t var_198_1 = v2.d
                *var_260_1 = 0
                *(var_260_1 + 8) = 0
                int32_t var_184_1 = 0x3f800000
                Mat4Multiply(&var_180, &var_1c0)
                float v1_1 = *(x24_1 - 0x14)
                float v0_1 = *(x24_1 - 0x10)
                float v2_1 = *(x24_1 - 0xc)
                float v3_1 = *(x24_1 - 8)
                int32_t var_1f4_1 = 0
                float v4_1 = v0_1 + v0_1
                float v6_1 = v1_1 + v1_1
                v3_1 = v3_1 + v3_1
                float v7_1 = v0_1 * v4_1
                float v16_1 = v0_1 * v6_1
                float v18_1 = v2_1 * v6_1
                v6_1 = v1_1 * v6_1
                float v5_1 = v2_1 * (v2_1 + v2_1)
                float v17_1 = v2_1 * v3_1
                v0_1 = v0_1 * v3_1
                v2_1 = v4_1 * v2_1
                v1_1 = v1_1 * v3_1
                v6_1 = v8.d f- v6_1
                int32_t var_1e4_1 = 0
                float var_1fc_1 = v16_1 - v17_1
                float var_1f8_1 = v18_1 + v0_1
                float var_1ec_1 = v6_1 - v5_1
                float var_1e8_1 = v2_1 - v1_1
                float var_1e0_1 = v18_1 - v0_1
                float var_1dc_1 = v2_1 + v1_1
                float var_200 = v8.d f- v7_1 - v5_1
                float var_1f0_1 = v16_1 + v17_1
                float var_1d8_1 = v6_1 - v7_1
                *var_268_1 = 0
                *(var_268_1 + 8) = 0
                int32_t var_1c4_1 = 0x3f800000
                void var_140
                Mat4Multiply(&var_140, &var_200)
                int32_t v1_2 = *(x24_1 + 0xc)
                int32_t v2_2 = *(x24_1 + 0x10)
                var_240 = *(x24_1 + 8)
                *x9_2 = 0
                x9_2[1] = 0
                int32_t var_22c_1 = v1_2
                int64_t var_228_1 = 0
                int64_t var_220_1 = 0
                int32_t var_218_1 = v2_2
                int64_t var_214_1 = 0
                int64_t var_20c_1 = 0
                int32_t var_204_1 = 0x3f800000
                Mat4Multiply(&var_100, &var_240)
            else
                v4 = v2.d f+ v2.d
                v6 = *(x24_1 + 8)
                v7 = *(x24_1 + 0xc)
                v16 = v0.d f+ v0.d
                v17 = *(x24_1 + 0x10)
                v3.d = v3.d f+ v3.d
                v18 = *(x24_1 - 4)
                v19 = *x24_1
                v20 = *(x24_1 + 4)
                int128_t var_90_1 = var_250_1
                v21.d = v2.d f* v4
                v22 = v16 f* v2.d
                v24 = v16 f* v1.d
                v16 = v0.d f* v16
                v5 = v1.d f* (v1.d f+ v1.d)
                v23 = v1.d f* v3.d
                v2.d = v2.d f* v3.d
                v1.d = v4 f* v1.d
                v0.d = v0.d f* v3.d
                v3.d = v8.d f- v21.d
                v16 = v8.d f- v16
                v4 = v22 - v23
                v25 = v24 f+ v2.d
                v22 = v22 + v23
                v23 = v1.d f- v0.d
                v2.d = v24 f- v2.d
                v0.d = v1.d f+ v0.d
                v1.d = v3.d f- v5
                v3.d = v16 - v5
                v5 = v16 f- v21.d
                v1.d = v6 f* v1.d
                v21.d = v6 f* v22
                v3.d = v7 f* v3.d
                v2.d = v6 f* v2.d
                v0.d = v7 f* v0.d
                var_c0 = v1.d
                float var_bc_1 = v7 * v4
                float var_b8_1 = v17 * v25
                int32_t var_b4_1 = v18
                int32_t var_b0_1 = v21.d
                int32_t var_ac_1 = v3.d
                float var_a8_1 = v17 * v23
                int32_t var_a4_1 = v19
                int32_t var_a0_1 = v2.d
                int32_t var_9c_1 = v0.d
                float var_98_1 = v5 * v17
                int32_t var_94_1 = v20
            
            arg1, v0, v1, v2, v3, v21 = Mat4Multiply(&x27_1[x28_1 * 4], &var_c0)
            v3 = var_100
            int128_t var_e0
            x21_1[2] = var_e0
            int128_t var_d0
            x21_1[3] = var_d0
            *x21_1 = v3
            int128_t var_f0
            x21_1[1] = var_f0
        i += 0xd8
        x21_1 = &x21_1[4]
        x24_1 += 0x2c
    while (x8_2 * 0xd8 != i)

if (x8_2.d s< 1 || x19 != 0)
    *(x19 + 0x24) -= 1
