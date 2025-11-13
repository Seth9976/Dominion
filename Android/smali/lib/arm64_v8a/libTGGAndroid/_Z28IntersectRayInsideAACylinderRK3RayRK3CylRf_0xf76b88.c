// 函数: _Z28IntersectRayInsideAACylinderRK3RayRK3CylRf
// 地址: 0xf76b88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg1 + 0xc)
float v2 = *(arg1 + 0x10)
float v0 = v1 * v1 + v2 * v2

if (not(v0 >= float.s(0x3727c5ac)))
    return 0

float v16 = *(arg2 + 0xc)
float v6 = *arg1 - *arg2
float v5 = *(arg1 + 4) - *(arg2 + 4)
float v3 = v6 * v6 + v5 * v5
float v4 = v16 * v16

if (not(v3 <= v4))
    return 0

v1 = v6 * v1 + v5 * v2
v1 = v1 + v1
*arg3 = (sqrt(v1 * v1 + v0 * fconvert.s(-4f) * (v3 - v4)) - v1) / (v0 + v0)
return 1
