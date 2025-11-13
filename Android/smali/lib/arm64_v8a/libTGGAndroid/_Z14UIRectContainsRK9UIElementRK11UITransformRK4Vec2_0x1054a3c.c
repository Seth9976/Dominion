// 函数: _Z14UIRectContainsRK9UIElementRK11UITransformRK4Vec2
// 地址: 0x1054a3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0
int128_t v0
int128_t v1
x0, v0, v1 = AppHasFocus()

if ((x0 & 1) != 0)
    v1 = *(arg1 + 0x30)
    int128_t var_40 = *(arg1 + 0x20)
    int128_t var_30_1 = v1
    float v0_1
    float v1_1
    float v2_1
    float v3_1
    v0_1, v1_1, v2_1, v3_1 =
        UIRectAligned(arg1 + 0x10, &var_40, arg2 + 0x4c, arg2 + 0x2c, arg2 + 0x3c)
    float v5_1 = *(arg2 + 0xc)
    float v7_1 = *(arg2 + 0x10)
    float v6_1 = *arg2
    float v18_1 = *(arg2 + 0x18)
    float v19_1 = *(arg1 + 0x98)
    float v20_1 = *(arg1 + 0x168)
    float temp0_1 = vmax_f32(v5_1, 0f)
    float v16_1 = fconvert.s(1f)
    float v4_1 = v7_1 + v16_1
    v7_1 = v4_1 * (v6_1 + v0_1 * temp0_1 - v18_1)
    v0_1 = *V20
    v2_1 = v4_1 * (v6_1 + v2_1 * temp0_1 - v18_1)
    v4_1 = v18_1 + v7_1
    v7_1 = v18_1 + v2_1
    v2_1 = *arg3
    v6_1 = v5_1 * *V21
    v7_1 = v7_1 - v4_1
    
    if (v4_1 + v19_1 * v7_1 + v0_1 + v6_1 * (v20_1 - v0_1) <= v2_1)
        v18_1 = *(arg2 + 4)
        float v21_1 = *(arg2 + 0x1c)
        v20_1 = v18_1 + v1_1 * temp0_1
        v18_1 = v18_1 + v3_1 * temp0_1
        v16_1 = *(arg2 + 0x14) + v16_1
        v3_1 = v5_1 * *(V21 + 4)
        v1_1 = *(V20 + 4)
        v5_1 = v21_1 + v16_1 * (v20_1 - v21_1)
        v18_1 = v21_1 + v16_1 * (v18_1 - v21_1)
        v16_1 = *(arg3 + 4)
        float v17_1 = v18_1 - v5_1
        
        if (not(v5_1 + v17_1 * *(arg1 + 0xa4) + v1_1 + v3_1 * (*(arg1 + 0x174) - v1_1) < v16_1) &&
                not(v5_1 + v17_1 * *(arg1 + 0x9c) + v1_1 + v3_1 * (*(arg1 + 0x16c) - v1_1) > v16_1) &&
                not(v4_1 + v7_1 * *(arg1 + 0xa0) + v0_1 + v6_1 * (*(arg1 + 0x170) - v0_1) < v2_1))
            return 1

return 0
