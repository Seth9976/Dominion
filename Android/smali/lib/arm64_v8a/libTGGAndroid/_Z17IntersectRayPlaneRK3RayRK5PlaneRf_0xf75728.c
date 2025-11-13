// 函数: _Z17IntersectRayPlaneRK3RayRK5PlaneRf
// 地址: 0xf75728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *arg2
float v2 = *(arg2 + 4)
float v3 = *(arg2 + 8)
float v0 = *(arg1 + 0xc) * v1 + *(arg1 + 0x10) * v2 + *(arg1 + 0x14) * v3

if (not(fabs(v0) >= float.s(0x3727c5ac)))
    return 0

v2 = *(arg2 + 0xc) + v1 * *arg1 + v2 * *(arg1 + 4) + v3 * *(arg1 + 8)
v1 = v0 * v2

if (not(v1 > 0f))
    *arg3 = fneg(v2) / v0

return zx.q(v1 <= 0f ? 1 : 0)
