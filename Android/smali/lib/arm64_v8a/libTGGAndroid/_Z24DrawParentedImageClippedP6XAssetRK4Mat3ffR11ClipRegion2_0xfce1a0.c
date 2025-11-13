// 函数: _Z24DrawParentedImageClippedP6XAssetRK4Mat3ffR11ClipRegion2
// 地址: 0xfce1a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RectF var_40
RectF var_30
int64_t result = GetClippedUVs(arg1, arg5, &var_30, &var_40, arg3, arg4)

if ((result.d & 1) == 0)
    return result

return DrawParentedRectsParams(arg1, arg2, &var_30, &var_40, gSpriteWhite, nullptr)
