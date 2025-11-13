// 函数: _Z23DrawParentedRectsParamsP6XAssetRK4Mat3RK5RectFS6_RK11SpriteColorS0_
// 地址: 0xfcc364
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float var_70
float var_60
int64_t result = GetClippedUVs(arg3, arg4, *gpSpriteAppData + 0x28, &var_60, &var_70)

if ((result.d & 1) == 0)
    return result

float v0_1 = var_60
float v2_1 = *arg2
float v3_1 = *(arg2 + 4)
float v4_1 = *(arg2 + 8)
float v5_1 = *(arg2 + 0xc)
float v6_1 = *(arg2 + 0x10)
float v7_1 = *(arg2 + 0x14)
float v18_1 = var_70
float v20_1 = v0_1 * v2_1
float var_5c
float v21_1 = var_5c * v3_1
v0_1 = v0_1 * v5_1
float v1_1 = var_5c * v6_1
float var_58
v2_1 = v2_1 * var_58
v5_1 = v5_1 * var_58
float var_54
v3_1 = v3_1 * var_54
v6_1 = v6_1 * var_54
uint64_t x8_1 = *gpSpriteAppData
float var_90 = v18_1
float var_6c
float var_8c_1 = var_6c
float var_68
float var_88_1 = var_68
float var_84_1 = var_6c
float var_80_1 = v18_1
float var_64
float var_7c_1 = var_64
float var_78_1 = var_68
float var_74_1 = var_64
float v17_1 = v0_1 + v1_1
v18_1 = v21_1 + v2_1
v1_1 = v1_1 + v5_1
float v19_1 = v20_1 + v3_1
v2_1 = v2_1 + v3_1
v3_1 = v5_1 + v6_1
v5_1 = *(x8_1 + 0x20)
float v16_1 = v7_1 + v17_1
v17_1 = v4_1 + v18_1
v18_1 = v4_1 + v19_1
v2_1 = v4_1 + v2_1
float var_50 = v4_1 + v20_1 + v21_1 + v5_1
v4_1 = *(x8_1 + 0x24)
float var_4c_1 = v16_1 + v4_1
float var_48_1 = v17_1 + v5_1
float var_44_1 = v7_1 + v1_1 + v4_1
float var_40_1 = v18_1 + v5_1
float var_3c_1 = v7_1 + v0_1 + v6_1 + v4_1
float var_38_1 = v2_1 + v5_1
float var_34_1 = v7_1 + v3_1 + v4_1
return SpriteDrawVertsInt<DefVertPosXY>(&var_50, &var_90, arg5, false, arg1, arg6)
