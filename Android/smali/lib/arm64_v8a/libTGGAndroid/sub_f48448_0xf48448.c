// 函数: sub_f48448
// 地址: 0xf48448
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(*(arg1 + arg2))
int32_t x0

if (arg2 == 0)
    x0 = 0
else
    x0 = sub_f48448(arg1, arg2 - 1)

return zx.q(x0 + (x20 << arg2 << 3).d)
