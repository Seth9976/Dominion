// 函数: _Z15Draw3DStructureP6XAssetRK9TransformS0_
// 地址: 0xc9a008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg2 + 8)
float v3 = *(arg2 + 0xc)
float v0 = *arg2
float v4 = *(arg2 + 4)
float v5 = *(arg2 + 0x10)
float v18 = v2 + v2
float v20 = v4 + v4
float v1 = fconvert.s(1f)
int32_t v16 = *(arg2 + 0x1c)
int128_t v17 = data_71cfa0
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
float var_48 = v0 * (v24 + v2)
int32_t var_44 = *(arg2 + 0x14)
float var_38 = v0 * (v3 - v4)
int32_t var_34 = *(arg2 + 0x18)
float var_30 = v0 * (v24 - v2)
float var_2c = v0 * (v3 + v4)
float var_50 = v0 * (v5 - v19)
float var_4c = v0 * (v22 - v23)
float var_40 = v0 * (v22 + v23)
float var_3c = v0 * (v1 - v19)
float var_28 = v0 * (v1 - v21)
int32_t var_24 = v16
int128_t var_20 = v17
return Draw3DStructureMatrix(arg1, &var_50, arg3, nullptr, nullptr)
