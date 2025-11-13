// 函数: _Z11CalcOverlapRK4BBoxS1_
// 地址: 0xfa443c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
float v1 = *(arg1 + 4)
float v2 = *arg2
float v3 = *(arg2 + 4)
float v5 = *(arg1 + 8)
float v4 = *(arg1 + 0xc)
float v7 = *(arg2 + 8)
float v6 = *(arg2 + 0xc)

if (not(v0 > v2))
    v0 = v2

v2 = v4 < v6 ? v4 : v6

v4 = *(arg1 + 0x10)
v6 = *(arg1 + 0x14)
v0 = v2 - v0

if (not(v1 > v3))
    v1 = v3

v2 = *(arg2 + 0x10)
v3 = *(arg2 + 0x14)

if (v4 < v2)
    v2 = v4

v4 = v5 > v7 ? v5 : v7

v1 = v2 - v1
v2 = 0f

if (v6 < v3)
    v3 = v6

vmax_f32(v0, v2)
vmax_f32(v1, v2)
vmax_f32(v3 - v4, v2)
