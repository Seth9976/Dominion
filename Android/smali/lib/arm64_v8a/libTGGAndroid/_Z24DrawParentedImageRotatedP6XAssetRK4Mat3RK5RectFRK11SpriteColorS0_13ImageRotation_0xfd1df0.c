// 函数: _Z24DrawParentedImageRotatedP6XAssetRK4Mat3RK5RectFRK11SpriteColorS0_13ImageRotation
// 地址: 0xfd1df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg6 == 0)
    return DrawParentedRectsParams(arg1, arg2, arg3, RECT1, arg4, arg5) __tailcall

int32_t v0 = *RECT1
int32_t v1 = *(RECT1 + 4)
int32_t v2 = *(RECT1 + 8)
int32_t v3 = *(RECT1 + 0xc)
int32_t var_50 = v0
int32_t var_4c = v1
int32_t var_48 = v2
int32_t var_44 = v1
int32_t var_40 = v0
int32_t var_3c = v3
int32_t var_38 = v2
int32_t var_34 = v3
ImageRotationUVS(zx.q(arg6), &var_50)
void* x8 = *gpSpriteAppData
DefVertPosXY* x0_2
Vec2* x1_2
float var_70

if (*(x8 + 0x38) == 0)
    float v0_1 = *arg3
    float v1_1 = *(arg3 + 4)
    float v2_1 = *(arg3 + 8)
    float v3_1 = *(arg3 + 0xc)
    float v4_1 = *arg2
    float v5_1 = *(arg2 + 4)
    float v6_1 = *(arg2 + 8)
    float v7_1 = *(arg2 + 0xc)
    float v16_1 = *(arg2 + 0x10)
    float v17_1 = *(arg2 + 0x14)
    x0_2 = &var_70
    float v18_1 = v4_1 * v0_1
    float v19_1 = v5_1 * v1_1
    v0_1 = v0_1 * v7_1
    v1_1 = v1_1 * v16_1
    v4_1 = v4_1 * v2_1
    v2_1 = v2_1 * v7_1
    v5_1 = v5_1 * v3_1
    v3_1 = v3_1 * v16_1
    var_70 = v6_1 + v18_1 + v19_1
    float var_6c_2 = v17_1 + v0_1 + v1_1
    float var_68_2 = v6_1 + v4_1 + v19_1
    float var_64_2 = v17_1 + v2_1 + v1_1
    float var_60_2 = v6_1 + v18_1 + v5_1
    float var_5c_2 = v17_1 + v0_1 + v3_1
    float var_58_2 = v6_1 + v4_1 + v5_1
    float var_54_2 = v17_1 + v2_1 + v3_1
    x1_2 = &var_50
else
    Vec2 var_a0
    float var_80
    int64_t result = GetClippedRectUVs(arg3, &var_50, x8 + 0x28, &var_80, &var_a0)
    
    if ((result.d & 1) == 0)
        return result
    
    float v0_2 = var_80
    float v4_2 = *arg2
    float v5_2 = *(arg2 + 4)
    float v6_2 = *(arg2 + 8)
    float v7_2 = *(arg2 + 0xc)
    float v16_2 = *(arg2 + 0x10)
    float v17_2 = *(arg2 + 0x14)
    x0_2 = &var_70
    float v18_2 = v4_2 * v0_2
    float var_7c
    float v19_2 = v5_2 * var_7c
    v0_2 = v0_2 * v7_2
    float v1_2 = var_7c * v16_2
    float var_78
    v4_2 = v4_2 * var_78
    float v2_2 = var_78 * v7_2
    float var_74
    v5_2 = v5_2 * var_74
    float v3_2 = var_74 * v16_2
    x1_2 = &var_a0
    var_70 = v6_2 + v18_2 + v19_2
    float var_6c_1 = v17_2 + v0_2 + v1_2
    float var_68_1 = v6_2 + v4_2 + v19_2
    float var_64_1 = v17_2 + v2_2 + v1_2
    float var_60_1 = v6_2 + v18_2 + v5_2
    float var_5c_1 = v17_2 + v0_2 + v3_2
    float var_58_1 = v6_2 + v4_2 + v5_2
    float var_54_1 = v17_2 + v2_2 + v3_2
return SpriteDrawVertsInt<DefVertPosXY>(x0_2, x1_2, arg4, false, arg1, arg5)
