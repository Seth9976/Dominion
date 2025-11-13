// 函数: _Z13Draw3DSubMeshP10DefSubMeshRK9TransformP6XAssetS5_P9Structure
// 地址: 0xc98510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg2 + 8)
float v3 = *(arg2 + 0xc)
float v0 = *arg2
float v4 = *(arg2 + 4)
float v5 = *(arg2 + 0x10)
int32_t v6 = *(arg2 + 0x14)
float v18 = v2 + v2
float v20 = v4 + v4
float v1 = fconvert.s(1f)
int32_t v7 = *(arg2 + 0x18)
int32_t v16 = *(arg2 + 0x1c)
v5 = v5 + v5
float v21 = v2 * v18
float v22 = v2 * v20
float v24 = v3 * v20
v20 = v4 * v20
float v19 = v3 * (v3 + v3)
float v23 = v3 * v5
v2 = v2 * v5
v3 = v18 * v3
v4 = v4 * v5
v5 = v1 - v21
v1 = v1 - v20
int128_t var_20 = data_71cfa0
int128_t v17
v17.d = v22 - v23
v20 = v3 - v4
v3 = v3 + v4
v4 = v5 - v19
v5 = v0 f* v17.d
v17.d = v0 * (v24 + v2)
XAsset* var_8 = arg4
int32_t var_48 = v17.d
int32_t var_44 = v6
float var_38 = v0 * v20
int32_t var_34 = v7
float var_30 = v0 * (v24 - v2)
float var_2c = v0 * v3
float var_50 = v0 * v4
float var_4c = v5
float var_40 = v0 * (v22 + v23)
float var_3c = v0 * (v1 - v19)
float var_28 = v0 * (v1 - v21)
int32_t var_24 = v16
return Draw3DSubMeshMatrix(arg1, &var_50, arg3, &var_8, 1, arg5)
