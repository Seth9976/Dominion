// 函数: _Z25Draw3DPersistantStructureP9StructureP6XAssetS2_
// 地址: 0xc9a0e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

StructureGetTransform(arg1)
int32_t x0_1
int128_t v17
x0_1, v17 = StructureIsAnimating(arg1)
float var_78
float v18 = var_78 + var_78
float var_7c
float v20 = var_7c + var_7c
XAsset* x0_2 = *(arg1 + 8)
float v1 = fconvert.s(1f)
v17 = data_71cfa0
float var_70
float v5 = var_70 + var_70
float v21 = var_78 * v18
float v22 = var_78 * v20
float var_74
float v24 = var_74 * v20
float v19 = var_74 * (var_74 + var_74)
float v23 = var_74 * v5
float v2 = var_78 * v5
float v3 = v18 * var_74
float v4 = var_7c * v5
v5 = v1 - v21
v1 = v1 - var_7c * v20
v18 = v22 - v23
v22 = v22 + v23
v20 = v3 - v4
v3 = v3 + v4
v4 = v5 - v19
Structure* x4

if ((x0_1 & 1) != 0)
    x4 = arg1
else
    x4 = nullptr

float var_80
float var_58 = var_80 * (v24 + v2)
int32_t var_6c
int32_t var_54 = var_6c
float var_48 = var_80 * v20
int32_t var_68
int32_t var_44 = var_68
float var_40 = var_80 * (v24 - v2)
float var_3c = var_80 * v3
float var_60 = var_80 * v4
float var_5c = var_80 * v18
float var_50 = var_80 * v22
float var_4c = var_80 * (v1 - v19)
float var_38 = var_80 * (v1 - v21)
int32_t var_64
int32_t var_34 = var_64
int128_t var_30 = v17
return Draw3DStructureMatrix(x0_2, &var_60, arg2, arg3, x4)
