// 函数: _ZNKSt6__ndk112ctype_bynameIwE9do_narrowEwc
// 地址: 0x10d0170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

locale_t newloc = uselocale(*(arg1 + 0x10))
int32_t x0_2 = wctob(arg2.d)

if (newloc != 0)
    uselocale(newloc)

int32_t entry_x2

if (x0_2 == 0xffffffff)
    return zx.q(entry_x2)
return zx.q(x0_2)
