// 函数: _Z25BoneTransformIntersectRayRK13BoneTransformRK3RayRf
// 地址: 0xfd422c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *arg2
float v5 = *arg1
float v16 = *(arg1 + 4)
float v17 = *(arg1 + 8)
float v7 = *(arg1 + 0xc)
v0.d = v0.d f- *(arg1 + 0x10)
float v1 = *(arg2 + 4) - *(arg1 + 0x14)
float v2 = *(arg2 + 8) - *(arg1 + 0x18)
float v3 = v7 * v7
float v4 = v5 * v5
float v6 = v16 * v16
float v21 = v5 * v16
float v22 = v7 * v17
float v23 = v5 * v17
float v24 = v7 * v16
v5 = v7 * v5
v7 = v3 + v4
v3 = v3 - v4
float v20 = v17 * v17
v16 = v16 * v17
float v29 = v3 + v6
v17 = v1 + v1
float v25 = v21 + v22
float v28 = v0.d f+ v0.d
v21 = v21 - v22
v4 = v5 + v16
v22 = v24 + v23
v5 = v16 - v5
v3 = v3 - v6
v6 = v7 - v6 - v20
v7 = v29 - v20
float v26 = v2 + v2
float v27 = v23 - v24
v3 = v3 + v20
v0.d = v0.d f* v6
v0.d = v0.d f+ v17 * v25
v0.d = v26 * v27 f+ v0.d
float var_24 = v26 * v4 + v28 * v21 + v1 * v7
float var_20 = v2 * v3 + v28 * v22 + v17 * v5
int32_t var_28 = v0.d
v0.d = *(arg2 + 0xc)
v1 = *(arg2 + 0x10)
v2 = *(arg2 + 0x14)
int128_t v18
v18.q = *V1
float v19 = *(V1 + 8)
int32_t x8 = *(V0 + 8)
v6 = v6 f* v0.d
v16 = v1 + v1
v0.d = v0.d f+ v0.d
v17 = v2 + v2
v20 = v21 f* v0.d
v0.d = v22 f* v0.d
v0.d = v0.d f+ v5 * v16
v0.d = v3 * v2 f+ v0.d
int64_t var_40 = *V0
int32_t var_38 = x8
float var_1c = v6 + v25 * v16 + v27 * v17
float var_18 = v20 + v7 * v1 + v4 * v17
int32_t var_14 = v0.d
v0.q = *(arg1 + 0x1c)
v1 = *(arg1 + 0x24)
double var_34 = vmul_f32(v18, v0, 0)
float var_2c = v19 * v1
return zx.q(IntersectRayBBox(&var_28, &var_40, arg3)) & 1
