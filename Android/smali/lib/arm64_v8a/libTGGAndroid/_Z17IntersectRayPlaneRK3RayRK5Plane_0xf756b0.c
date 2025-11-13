// 函数: _Z17IntersectRayPlaneRK3RayRK5Plane
// 地址: 0xf756b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg2
float v1 = *(arg2 + 4)
float v2 = *(arg2 + 8)
float v3 = *(arg1 + 0xc) * v0 + *(arg1 + 0x10) * v1 + *(arg1 + 0x14) * v2

if (fabs(v3) >= float.s(0x3727c5ac))
    return zx.q(v3 * (*(arg2 + 0xc) + v0 * *arg1 + v1 * *(arg1 + 4) + v2 * *(arg1 + 8)) <= 0f ? 1
        : 0)

return 0
