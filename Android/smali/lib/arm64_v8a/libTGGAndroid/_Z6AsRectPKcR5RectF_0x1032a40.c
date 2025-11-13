// 函数: _Z6AsRectPKcR5RectF
// 地址: 0x1032a40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = *RECT0
int64_t result
int64_t v0_1
result, v0_1 = sscanf(arg1, " %f %f %f %f", arg2, arg2 + 4, arg2 + 8, arg2 + 0xc)

if (result.d == 4)
    return 1

if (result.d == 2)
    *(arg2 + 8) = *arg2
    return 1

if (result.d != 1)
    return 0

v0_1.d = *arg2
*(arg2 + 4) = v0_1.d
*(arg2 + 8) = v0_1.d
*(arg2 + 0xc) = v0_1.d
return result
