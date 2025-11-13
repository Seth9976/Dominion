// 函数: sub_fbff18
// 地址: 0xfbff18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = sx.q(arg3 - arg2.d)

if (strncmp(*(arg1 + 0x38), arg2, x20) == 0)
    return 7

if (strncmp(*(arg1 + 0x30), arg2, x20) == 0)
    return 6

if (strncmp(*(arg1 + 0x28), arg2, x20) == 0)
    return 5

if (strncmp(*(arg1 + 0x20), arg2, x20) == 0)
    return 4

if (strncmp(*(arg1 + 0x18), arg2, x20) == 0)
    return 3

if (strncmp(*(arg1 + 0x10), arg2, x20) == 0)
    return 2

return zx.q(strncmp(*(arg1 + 8), arg2, x20) == 0 ? 1 : 0)
