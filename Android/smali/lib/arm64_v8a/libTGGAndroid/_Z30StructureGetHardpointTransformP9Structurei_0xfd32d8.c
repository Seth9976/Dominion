// 函数: _Z30StructureGetHardpointTransformP9Structurei
// 地址: 0xfd32d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 8)
Structure* x21 = arg1
int64_t* x8
int128_t v16
int128_t v19

if (x19 == 0)
    arg1, v16, v19 = AssetPtrGetNull(2)
    x19 = arg1
    x8 = *x19
    
    if (x8 == 0)
        arg1, v16, v19 = AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        arg1, v16, v19 = AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

int64_t x13 = sx.q(arg2)
*(x19 + 0x24) += 1
void* x12 = **x8
void* x8_2 = *(x21 + 0x38)
int64_t x10 = *(x12 + 0x28)
float* x11 = x10 + (x13 << 6)
int32_t x14_1

if (x8_2 != 0)
    x14_1 = x11[0xe]

float v0
float v1
float v2
float v3
float v4
float v5
float v6
float v7
float v20
float v21
float v22
float v23
float v24
float v25
float v26

if (x8_2 == 0 || (x14_1 & 0x80000000) != 0 || x14_1 s>= *(x12 + 0x10))
    v2 = x11[6]
    v16.d = x11[8]
    v0 = x11[4]
    v1 = x11[5]
    v3 = *x11
    v4 = x11[1]
    v6 = x11[2]
    v7 = x11[3]
    v5 = x11[7] f+ v16.d + x11[9]
    v16.d = float.s(0x3eaaaaab)
    v5 = v5 f* v16.d
else
    void* x10_1 = x10 + (x13 << 6)
    v0 = *(x10_1 + 0x1c)
    v1 = *(x10_1 + 0x20)
    v2 = *(x10_1 + 0x24)
    float var_ec
    float var_e8
    float var_e4
    float var_e0
    float var_dc
    float var_d8
    float var_d4
    Mat4 var_d0
    float var_90
    float v18
    
    if (v0 * v0 + v1 * v1 + v2 * v2 >= float.s(0x2edbe6fe))
        v4 = *(x10_1 + 4)
        v5 = *(x10_1 + 8)
        v6 = *x11
        v7 = *(x10_1 + 0xc)
        v16.d = *(x10_1 + 0x10)
        v18 = *(x10_1 + 0x18)
        v20 = v4 + v4
        v22 = v6 + v6
        v3 = fconvert.s(1f)
        v7 = v7 + v7
        v23 = v4 * v20
        v24 = v4 * v22
        v26 = v5 * v22
        v22 = v6 * v22
        v21 = v5 * (v5 + v5)
        v25 = v5 * v7
        v4 = v4 * v7
        v5 = v20 * v5
        v6 = v6 * v7
        v7 = v3 - v23
        v3 = v3 - v22
        int128_t var_60_2 = data_71cfa0
        v19.d = v24 - v25
        v22 = v5 - v6
        v5 = v5 + v6
        v6 = v7 - v21
        v7 = v1 f* v19.d
        v19.d = v2 * (v26 + v4)
        int32_t var_88_2 = v19.d
        int32_t var_84_2 = v16.d
        float var_78_2 = v2 * v22
        float var_74_2 = *(x10_1 + 0x14)
        float var_70_2 = v0 * (v26 - v4)
        float var_6c_2 = v1 * v5
        var_90 = v0 * v6
        float var_8c_2 = v7
        float var_80_2 = v0 * (v24 + v25)
        float var_7c_2 = v1 * (v3 - v21)
        float var_68_2 = v2 * (v3 - v23)
        float var_64_2 = v18
        Mat4Multiply(*(x8_2 + 0x20) + (sx.q(x11[0xe]) << 6), &var_90)
        arg1, v16, v19 = TransformFromMat4(&var_d0)
        float var_f0
        v5 = var_f0
        v3 = var_ec
        v4 = var_e8
        v6 = var_e4
        v7 = var_e0
        v0 = var_dc
        v1 = var_d8
        v2 = var_d4
    else
        v0 = *x11
        v1 = *(x10_1 + 4)
        v2 = *(x10_1 + 8)
        v3 = *(x10_1 + 0xc)
        v6 = *(x10_1 + 0x18)
        float v17 = v1 + v1
        v19.d = v0 + v0
        v7 = fconvert.s(1f)
        v3 = v3 + v3
        v20 = v1 * v17
        v21 = v1 f* v19.d
        v23 = v19.d f* v2
        v19.d = v0 f* v19.d
        v18 = v2 * (v2 + v2)
        v22 = v2 * v3
        v1 = v1 * v3
        v2 = v17 * v2
        v0 = v0 * v3
        v3 = v7 - v20
        v7 = v7 f- v19.d
        int128_t var_60_1 = data_71cfa0
        v16.d = v21 - v22
        v19.d = v2 - v0
        float var_88_1 = v23 + v1
        float var_84_1 = *(x10_1 + 0x10)
        int32_t var_78_1 = v19.d
        float var_74_1 = *(x10_1 + 0x14)
        float var_70_1 = v23 - v1
        float var_6c_1 = v2 + v0
        var_90 = v3 - v18
        int32_t var_8c_1 = v16.d
        float var_80_1 = v21 + v22
        float var_7c_1 = v7 - v18
        float var_68_1 = v7 - v20
        float var_64_1 = v6
        Mat4Multiply(*(x8_2 + 0x20) + (sx.q(x11[0xe]) << 6), &var_90)
        arg1, v16, v19 = TransformFromMat4(&var_d0)
        v3 = var_ec
        v4 = var_e8
        v6 = var_e4
        v7 = var_e0
        v0 = var_dc
        v1 = var_d8
        v2 = var_d4
        v5 = 0f

v20 = *(x21 + 0x1c)
v21 = *(x21 + 0x24)
v23 = *(x21 + 0x28)
v22 = *(x21 + 0x20)
v19.d = *(x21 + 0x2c)
v25 = v20 * v20
v24 = v23 * v23
v26 = v20 * v22
float v27 = v21 * v23
float v28 = v22 * v23
float v29 = v20 * v21
float v30 = v22 * v21
float v31 = v20 * v23
int64_t v8
v8.d = v7 * v23
int64_t v9
v9.d = v3 * v20
int64_t v10
v10.d = v3 * v23
int64_t v11
v11.d = v26 - v27
v26 = v26 + v27
v27 = v25 + v24
v24 = v24 - v25
v25 = v29 + v28
v28 = v29 - v28
v29 = v30 - v31
v30 = v30 + v31
v8.d = v8.d f- v9.d
v9.d = v4 * v23
v31 = v7 * v20 f+ v10.d
v10.d = v7 * v22
v7 = v7 * v21 + v6 * v23
v23 = v2 + v2
v25 = v23 * v25
v23 = v23 * v29
v29 = v0 + v0
v9.d = v10.d f+ v9.d
v10.d = v1 + v1
v26 = v29 * v26
v28 = v29 * v28
v29 = v22 * v22
v27 = v27 - v29
v11.d = v10.d f* v11.d
v30 = v10.d f* v30
v10.d = v29 + v24
v24 = v24 - v29
v29 = v8.d f- v4 * v22
v8.d = v6 * v22
v31 = v8.d f+ v31
v8.d = v6 * v21
v6 = v6 * v20
v20 = v4 * v20
v4 = v4 * v21
v22 = v3 * v22
v3 = v3 * v21
v21 = v21 * v21
v16.d = *(x21 + 0x10)
v2 = *(x21 + 0x18) + v19.d f* (v28 + v30 + v2 * (v21 + v24))
v1 = *(x21 + 0x14) + v19.d f* (v23 + v26 + v1 * (v10.d f- v21))
float* entry_x8
entry_x8[2] = v3 f+ v9.d - v6
entry_x8[3] = v20 + v7 - v22
entry_x8[6] = v1
entry_x8[7] = v2
entry_x8[4] = v29 f- v8.d
entry_x8[5] = v16.d f+ v19.d f* (v25 + v11.d f+ v0 * (v27 - v21))
*entry_x8 = v5 f* v19.d
entry_x8[1] = v31 - v4
*(x19 + 0x24) -= 1
