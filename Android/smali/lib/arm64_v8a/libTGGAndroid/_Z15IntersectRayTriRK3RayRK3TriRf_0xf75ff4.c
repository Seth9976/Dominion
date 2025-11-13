// 函数: _Z15IntersectRayTriRK3RayRK3TriRf
// 地址: 0xf75ff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v18 = *arg2
float v19 = *(arg2 + 4)
float v20 = *(arg2 + 8)
float v4 = *(arg1 + 0x10)
float v3 = *(arg1 + 0x14)
float v6 = *(arg1 + 0xc)
float v7 = *(arg2 + 0xc) - v18
float v16 = *(arg2 + 0x10) - v19
float v17 = *(arg2 + 0x14) - v20
float v2 = *(arg2 + 0x18) - v18
float v1 = *(arg2 + 0x1c) - v19
float v0 = *(arg2 + 0x20) - v20
float v23 = v4 * v0 - v1 * v3
float v24 = v2 * v3 - v0 * v6
float v22 = v1 * v6 - v2 * v4
float v5 = v17 * v22 + v7 * v23 + v16 * v24

if (not(fabs(v5) >= float.s(0x38d1b717)))
    return 0

v5 = fconvert.s(1f) / v5
float v21 = *arg1 - v18
v19 = *(arg1 + 4) - v19
v20 = *(arg1 + 8) - v20
v18 = v5 * (v23 * v21 + v24 * v19 + v22 * v20)
uint64_t result = 0

if (not(v18 < float.s(0xb8d1b717)) && not(v18 > float.s(0x3f800347)))
    v24 = v17 * v21
    v21 = v16 * v21
    v17 = v17 * v19 - v16 * v20
    v16 = v7 * v20 - v24
    v7 = v21 - v7 * v19
    v3 = v5 * (v3 * v7 + v6 * v17 + v4 * v16)
    result = 0
    
    if (not(v3 < float.s(0xb8d1b717)) && not(v18 + v3 > float.s(0x3f800347)))
        v0 = v5 * (v0 * v7 + v2 * v17 + v1 * v16)
        result = zx.q(v0 >= 0f ? 1 : 0)
        *arg3 = v0

return result
