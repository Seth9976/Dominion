// 函数: _Z18IntersectPlaneBBoxRK5PlaneRK4BBox
// 地址: 0xf761f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
float v1 = *(arg1 + 4)
float v2 = *arg2
float v3 = *(arg2 + 4)
float v5 = *(arg2 + 8)
float v4 = *(arg2 + 0xc)
float v6 = *(arg2 + 0x10)
float v7 = *(arg2 + 0x14)
v0 - 0f
float v16

v16 = v0 > 0f ? v2 : v4

if (v0 > 0f)
    v2 = v4

v1 - 0f
float v17

v17 = v1 > 0f ? v3 : v6

if (v1 > 0f)
    v3 = v6

v4 = *(arg1 + 8)
v6 = *(arg1 + 0xc)
v16 = v0 * v16
v0 = v0 * v2
v4 - 0f

v2 = v4 > 0f ? v5 : v7

if (v4 > 0f)
    v5 = v7

return zx.q(v6 + v16 + v1 * v17 + v4 * v2 <= 0f ? 1 : 0)
    & zx.q(v6 + v0 + v1 * v3 + v4 * v5 >= 0f ? 1 : 0)
