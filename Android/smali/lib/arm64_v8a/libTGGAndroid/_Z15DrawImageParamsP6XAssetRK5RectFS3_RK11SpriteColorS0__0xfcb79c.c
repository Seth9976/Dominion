// 函数: _Z15DrawImageParamsP6XAssetRK5RectFS3_RK11SpriteColorS0_
// 地址: 0xfcb79c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpSpriteAppData

if (*(x8 + 0x38) == 0)
    return DrawImageParamsBase(arg1, arg2, arg3, arg4, arg5) __tailcall

RectF var_40
RectF var_30
int64_t result = GetClippedUVs(arg2, arg3, x8 + 0x28, &var_30, &var_40)

if ((result.d & 1) == 0)
    return result

return DrawImageParamsBase(arg1, &var_30, &var_40, arg4, arg5)
