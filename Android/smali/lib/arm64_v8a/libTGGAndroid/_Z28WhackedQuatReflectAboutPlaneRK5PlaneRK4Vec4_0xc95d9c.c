// 函数: _Z28WhackedQuatReflectAboutPlaneRK5PlaneRK4Vec4
// 地址: 0xc95d9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *arg2
float v0 = *(arg2 + 4)
float v2 = *(arg2 + 8)
float v3 = *(arg2 + 0xc)
float v4 = *arg1
float v5 = *(arg1 + 4)
float v6 = *(arg1 + 8)
float v7 = v0 * v1
float v16 = v2 * v3
float v17 = v0 * v0
float v18 = v2 * v2
float v19 = v3 * v3
float v20 = v0 * v2
v0 = v0 * v3
v3 = v1 * v3
v2 = v1 * v2
v1 = v1 * v1
v7 = v7 - v16
v16 = v17 - v18
v0 = v2 + v0
v2 = v20 + v3
v3 = v20 - v3
v0 = v0 + v0
v3 = v3 + v3
v17 = v18 - v17 - v1
v7 = v7 + v7
v1 = v16 + v19 - v1
v16 = v19 + v17
v2 = v2 + v2
v19 = v0 * v4 + v3 * v5 + v16 * v6
v17 = v7 * v4 + v1 * v5 + v2 * v6
v18 = v19 + v19
v17 = v17 + v17
v0 = v0 - v4 * v18
v3 = v3 - v5 * v18
v16 = v16 - v6 * v18
v4 = v7 - v4 * v17
v1 = v1 - v5 * v17
v5 = v2 - v6 * v17
v7 = v5 * v0
float var_30 = v4
float var_2c = v1
v0 = v1 * v0
v2 = v1 * v16 - v5 * v3
v1 = v7 - v16 * v4
v0 = v3 * v4 - v0
v3 = sqrt(v0 * v0 + v2 * v2 + v1 * v1)
float var_28 = v5

if (v3 >= float.s(0x3727c5ac))
    v4 = fconvert.s(1f)
    v3 = v4 / (v3 + float.s(0x3727c5ac))
    v2 = v2 * v3
    v1 = v1 * v3
    v3 = v0 * v3
    v4 = v4 / sqrt(v3 * v3 + v2 * v2 + v1 * v1)
    v0 = v2 * v4
    v1 = v1 * v4
    v2 = v3 * v4
else
    v0 = *V0
    v1 = *(V0 + 4)
    v2 = *(V0 + 8)

float var_20 = v0
float var_1c = v1
float var_18 = v2
return QuatFromBasisChange(VFWD, VRIGHT, &var_30, &var_20)
