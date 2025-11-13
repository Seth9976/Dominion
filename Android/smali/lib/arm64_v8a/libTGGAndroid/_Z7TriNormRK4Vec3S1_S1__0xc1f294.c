// 函数: _Z7TriNormRK4Vec3S1_S1_
// 地址: 0xc1f294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *arg1
float v3 = *(arg1 + 4)
float v6 = *(arg1 + 8)
float v0 = *arg2 - v2
v2 = *arg3 - v2
float v1 = *(arg2 + 4) - v3
float v4 = *(arg2 + 8) - v6
v3 = *(arg3 + 4) - v3
float v5 = *(arg3 + 8) - v6
v6 = v1 * v5
float v7 = v4 * v3
v4 = v4 * v2
v5 = v0 * v5
v3 = v0 * v3
v2 = v1 * v2
v0 = v6 - v7
v1 = v4 - v5
v2 = v3 - v2

if (v2 * v2 + v0 * v0 + v1 * v1 >= float.s(0x3727c5ac))
    return 

*VZ
*(VZ + 4)
*(VZ + 8)
