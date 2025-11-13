// 函数: _Z17IntersectLineLineRK3RayS1_Rf
// 地址: 0xf76aa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v4 = *(arg1 + 0x10)
float v3 = *(arg1 + 0x14)
float v1 = *(arg2 + 0x10)
float v0 = *(arg2 + 0x14)
float v2 = *(arg2 + 0xc)
float v5 = *(arg1 + 0xc)
float v16 = v3 * v2
v3 = v4 * v0 - v3 * v1
float v6 = v16 - v0 * v5
v4 = v1 * v5 - v4 * v2
v5 = v4 * v4 + v3 * v3 + v6 * v6

if (not(v5 < float.s(0x2edbe6fe)))
    float v7 = *arg2 - *arg1
    v16 = *(arg2 + 4) - *(arg1 + 4)
    float v17 = *(arg2 + 8) - *(arg1 + 8)
    *arg3 = (v0 * v3 * v16 + v4 * v1 * v7 - v0 * v6 * v7 + v2 * v6 * v17 - v4 * v2 * v16
        - v1 * v3 * v17) / v5

return zx.q(v5 >= float.s(0x2edbe6fe) ? 1 : 0)
