// 函数: _Z15IntersectRayTriRK3RayRK3Tri
// 地址: 0xf75e98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v7 = *arg2
float v16 = *(arg2 + 4)
float v17 = *(arg2 + 8)
float v1 = *(arg1 + 0x10)
float v0 = *(arg1 + 0x14)
float v2 = *(arg1 + 0xc)
float v3 = *(arg2 + 0x18) - v7
float v4 = *(arg2 + 0x1c) - v16
float v6 = *(arg2 + 0x20) - v17
float v19 = v1 * v6 - v4 * v0
float v21 = v3 * v0 - v6 * v2
float v20 = v4 * v2 - v3 * v1
float v5 = (*(arg2 + 0x14) - v17) * v20 + (*(arg2 + 0xc) - v7) * v19 + (*(arg2 + 0x10) - v16) * v21

if (not(fabs(v5) >= float.s(0x38d1b717)))
    return 0

v5 = fconvert.s(1f) / v5
float v18 = *arg1 - v7
v16 = *(arg1 + 4) - v16
v17 = *(arg1 + 8) - v17
v7 = v5 * (v19 * v18 + v21 * v16 + v20 * v17)

if (v7 < float.s(0xb8d1b717) || v7 > float.s(0x3f800347))
    return 0

v0 = v5 * (v0 * (v4 * v18 - v3 * v16) + v2 * (v6 * v16 - v4 * v17) + v1 * (v3 * v17 - v6 * v18))
return zx.q(v0 >= float.s(0xb8d1b717) ? 1 : 0) & zx.q(v7 + v0 <= float.s(0x3f800347) ? 1 : 0)
