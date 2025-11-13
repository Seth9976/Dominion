// 函数: _Z15MoveToAnimStartR12MoveAnimDataP6XAssetPKcS4_
// 地址: 0x9f25fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x0 = *arg1

if (x0 != 0)
    SpineDestroy(x0)

uint32_t x0_2 = SpineCreate(arg2, nullptr)
*arg1 = x0_2
*(arg1 + 8) = arg4
int64_t result = SpinePlayInterpolated(x0_2, arg3, arg4, arg1 + 0x10, arg1 + 0x54, arg1 + 0x98)
*(arg1 + 0x9c) = 0
return result
