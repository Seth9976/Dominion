// 函数: _Z10LinesCrossRK4Vec2S1_S1_S1_
// 地址: 0xc19314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg2
float v1 = *(arg2 + 4)
float v5 = *arg1
float v4 = *(arg1 + 4)
float v2 = *arg3
float v3 = *(arg3 + 4)
float v6 = *arg4
float v7 = *(arg4 + 4)
float v17 = v1 - v4
float v16 = v0 - v5

if (not((v17 * (v2 - v5) - v16 * (v3 - v4)) * (v17 * (v6 - v5) - v16 * (v7 - v4)) <= 0f))
    return 0

v6 = v6 - v2
v7 = v7 - v3
return zx.q(((v5 - v2) * v7 - (v4 - v3) * v6) * ((v0 - v2) * v7 - (v1 - v3) * v6) <= 0f ? 1 : 0)
