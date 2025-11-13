// 函数: _Z12DrawLayoutUIRK4Mat4RK4Vec29UI2Handle
// 地址: 0x1027b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
Mat4* x0 = *gpRenderAppData + 0x124
int128_t v1 = *(x0 + 0x20)
int128_t v0 = *(x0 + 0x30)
int128_t v2 = *x0
int128_t v3 = *(x0 + 0x10)
Mat4Multiply(x0, arg1)
float v2_1 = fconvert.s(1f)
float v7 = *V1
float v16 = *(V1 + 4)
float v4 = *QI
float v3_1 = *(QI + 4)
float v5 = *(QI + 8)
float v6 = *(QI + 0xc)
float v17 = *(V1 + 8)
float v18 = v3_1 + v3_1
float v20 = v4 + v4
v6 = v6 + v6
float v21 = v3_1 * v18
float v22 = v3_1 * v20
float v24 = v5 * v20
v20 = v4 * v20
float v19 = v5 * (v5 + v5)
float v23 = v5 * v6
v3_1 = v3_1 * v6
v5 = v18 * v5
v4 = v4 * v6
v6 = v2_1 - v21
v2_1 = v2_1 - v20
int64_t var_fc = 0
int64_t var_104 = 0
float var_128 = v17 * (v24 + v3_1)
int32_t var_124 = *arg2
float var_118 = v17 * (v5 - v4)
int32_t var_114 = *(arg2 + 4)
float var_110 = v7 * (v24 - v3_1)
float var_10c = v16 * (v5 + v4)
float var_130 = v7 * (v6 - v19)
float var_12c = v16 * (v22 - v23)
float var_120 = v7 * (v22 + v23)
float var_11c = v16 * (v2_1 - v19)
float var_108 = v17 * (v2_1 - v21)
int32_t var_f4 = 0x3f800000
void var_f0
int64_t result
int128_t v0_2
int128_t v1_2
int128_t v2_2
int128_t v3_2
result, v0_2, v1_2, v2_2, v3_2 = Mat4Multiply(&var_f0, &var_130)
uint64_t x8_1 = *gpRenderAppData
int128_t var_90
*(x8_1 + 0x144) = var_90
int128_t var_80
*(x8_1 + 0x154) = var_80
int128_t var_b0
*(x8_1 + 0x124) = var_b0
int128_t var_a0
*(x8_1 + 0x134) = var_a0

if (x19 != 0)
    result, v0_2, v1_2, v2_2, v3_2 = UI2DrawInt(*gUI2 + mulu.dp.d(x19 & 0xffff, 0x19a8))
    x8_1 = *gpRenderAppData

*(x8_1 + 0x144) = v1
*(x8_1 + 0x154) = v0
*(x8_1 + 0x124) = v2
*(x8_1 + 0x134) = v3
return result
