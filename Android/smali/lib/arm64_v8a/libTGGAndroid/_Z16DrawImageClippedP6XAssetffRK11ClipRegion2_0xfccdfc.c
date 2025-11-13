// 函数: _Z16DrawImageClippedP6XAssetffRK11ClipRegion2
// 地址: 0xfccdfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RectF var_50
RectF var_40
int64_t result = GetClippedUVs(arg1, arg4, &var_40, &var_50, arg2, arg3)

if ((result.d & 1) != 0)
    uint64_t x8_1 = *gpSpriteAppData
    
    if (*(x8_1 + 0x38) == 0)
        return DrawImageParamsBase(arg1, &var_40, &var_50, gSpriteWhite, nullptr)
    
    RectF var_30
    RectF var_20
    result = GetClippedUVs(&var_40, &var_50, x8_1 + 0x28, &var_20, &var_30)
    
    if ((result.d & 1) != 0)
        return DrawImageParamsBase(arg1, &var_20, &var_30, gSpriteWhite, nullptr)

return result
