// 函数: _Z29DrawParentedImageColorClippedP6XAssetRK4Mat3ffRK11SpriteColorR11ClipRegion2
// 地址: 0xfce1fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RectF var_40
RectF var_30
int64_t result = GetClippedUVs(arg1, arg6, &var_30, &var_40, arg3, arg4)

if ((result.d & 1) == 0)
    return result

return DrawParentedRectsParams(arg1, arg2, &var_30, &var_40, arg5, nullptr)
