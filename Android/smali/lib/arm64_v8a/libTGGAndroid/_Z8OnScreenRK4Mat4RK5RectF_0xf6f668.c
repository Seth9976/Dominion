// 函数: _Z8OnScreenRK4Mat4RK5RectF
// 地址: 0xf6f668
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0
float v1
float v2
int32_t v3
v0, v1, v2, v3 = RectScreen()
float v16 = *(arg1 + 4)

if (not(v16 == 0f))
    return 1

float v4_1 = *(arg1 + 0x10)
float v5_1 = *(arg1 + 0x14)
float v18_1 = *(arg2 + 8)
float v19_1 = *(arg2 + 0xc)
float v6_1 = *(arg1 + 0x1c)
float v17_1 = 0f
float v7_1 = *(arg1 + 0x18) * v17_1

if (not(v1 > v6_1 + v7_1 + v4_1 * v18_1 + v5_1 * v19_1))
    float v21_1 = *arg1
    float v20_1 = *arg2
    v1 = *(arg2 + 4)
    float v22_1 = *(arg1 + 0xc)
    v17_1 = *(arg1 + 8) * v17_1
    
    if (not(v2 < v22_1 + v16 * v1 + v20_1 * v21_1 + v17_1)
            && not(v0 > v22_1 + v17_1 + v21_1 * v18_1 + v16 * v19_1))
        return zx.q(v3 f>= v6_1 + v20_1 * v4_1 + v1 * v5_1 + v7_1 ? 1 : 0)

return 0
