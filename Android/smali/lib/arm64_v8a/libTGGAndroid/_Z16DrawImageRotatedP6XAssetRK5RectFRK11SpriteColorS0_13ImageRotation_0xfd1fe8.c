// 函数: _Z16DrawImageRotatedP6XAssetRK5RectFRK11SpriteColorS0_13ImageRotation
// 地址: 0xfd1fe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int32_t var_70
int32_t var_50

if (arg5 == 0)
    void* x8_1 = *gpSpriteAppData
    
    if (*(x8_1 + 0x38) == 0)
        return DrawImageParamsBase(arg1, arg2, RECT1, arg3, arg4) __tailcall
    
    result = GetClippedUVs(arg2, RECT1, x8_1 + 0x28, &var_50, &var_70)
    
    if ((result.d & 1) != 0)
        return DrawImageParamsBase(arg1, &var_50, &var_70, arg3, arg4)
else
    int32_t v0 = *RECT1
    int32_t v1 = *(RECT1 + 4)
    int32_t v2 = *(RECT1 + 8)
    int32_t v3 = *(RECT1 + 0xc)
    var_50 = v0
    int32_t var_4c_1 = v1
    int32_t var_48_1 = v2
    int32_t var_44_1 = v1
    int32_t var_40_1 = v0
    int32_t var_3c_1 = v3
    int32_t var_38_1 = v2
    int32_t var_34_1 = v3
    ImageRotationUVS(zx.q(arg5), &var_50)
    void* x8 = *gpSpriteAppData
    DefVertPosXY* x0_2
    Vec2* x1_2
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    
    if (*(x8 + 0x38) == 0)
        v0_1 = *arg2
        v1_1 = *(arg2 + 4)
        v2_1 = *(arg2 + 8)
        v3_1 = *(arg2 + 0xc)
        x0_2 = &var_70
        x1_2 = &var_50
    label_fd20dc:
        var_70 = v0_1
        int32_t var_6c_1 = v1_1
        int32_t var_68_1 = v2_1
        int32_t var_64_1 = v1_1
        int32_t var_60_1 = v0_1
        int32_t var_5c_1 = v3_1
        int32_t var_58_1 = v2_1
        int32_t var_54_1 = v3_1
        return SpriteDrawVertsInt<DefVertPosXY>(x0_2, x1_2, arg3, false, arg1, arg4)
    
    Vec2 var_a0
    int32_t var_80
    result = GetClippedRectUVs(arg2, &var_50, x8 + 0x28, &var_80, &var_a0)
    
    if ((result.d & 1) != 0)
        v0_1 = var_80
        int32_t var_7c
        v1_1 = var_7c
        int32_t var_78
        v2_1 = var_78
        int32_t var_74
        v3_1 = var_74
        x0_2 = &var_70
        x1_2 = &var_a0
        goto label_fd20dc
return result
