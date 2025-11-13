// 函数: _Z15SpriteDrawRectsRK5RectFS1_RK11SpriteColorP6XAssetS6_
// 地址: 0xfc9ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = data_24225b0
int128_t var_60 = data_24225a0
int32_t var_50 = x8
float var_40
float var_30
int64_t result = ApplyClipping(arg1, arg2, &var_60, &var_30, &var_40)

if ((result.d & 1) == 0)
    return result

float v1_1 = var_30
float v4_1 = var_40
uint64_t x8_1 = *gpRenderAppData
float v16_1 = *(x8_1 + 0x124)
float v17_1 = *(x8_1 + 0x128)
float v19_1 = *(x8_1 + 0x134)
float v20_1 = *(x8_1 + 0x138)
float v22_1 = *(x8_1 + 0x144)
float v23_1 = *(x8_1 + 0x148)
float v18_1 = *(x8_1 + 0x130)
float v21_1 = *(x8_1 + 0x140)
float v24_1 = *(x8_1 + 0x150)
float var_b0 = v4_1
float var_3c
float var_ac_1 = var_3c
int32_t var_38
int32_t var_a8_1 = var_38
float var_a4_1 = var_3c
float var_a0_1 = v4_1
int32_t var_34
int32_t var_9c_1 = var_34
v4_1 = v16_1 * v1_1
float var_2c
float v5_1 = v17_1 * var_2c
float v25_1 = v1_1 * v19_1
float v26_1 = var_2c * v20_1
v1_1 = v1_1 * v22_1
float v3_1 = var_2c * v23_1
float var_28
v16_1 = v16_1 * var_28
v19_1 = var_28 * v19_1
float v2_1 = var_28 * v22_1
float var_24
v17_1 = v17_1 * var_24
v20_1 = var_24 * v20_1
float v0_1 = var_24 * v23_1
float var_90 = v18_1 + v4_1 + v5_1
float var_8c_1 = v21_1 + v25_1 + v26_1
float var_88_1 = v24_1 + v1_1 + v3_1
float var_84_1 = v18_1 + v16_1 + v5_1
float var_80_1 = v21_1 + v19_1 + v26_1
float var_7c_1 = v24_1 + v2_1 + v3_1
float var_78_1 = v18_1 + v4_1 + v17_1
float var_74_1 = v21_1 + v25_1 + v20_1
float var_70_1 = v24_1 + v1_1 + v0_1
float var_6c_1 = v18_1 + v16_1 + v17_1
float var_68_1 = v21_1 + v19_1 + v20_1
float var_64_1 = v24_1 + v2_1 + v0_1
int32_t var_98_1 = var_38
int32_t var_94_1 = var_34
XAsset* var_c0_1 = arg5
int64_t var_b8_1 = 0
return Draw3DQuadFullComplete(&var_90, &var_b0, arg3, 0, &var_90, VZ, arg4, nullptr)
