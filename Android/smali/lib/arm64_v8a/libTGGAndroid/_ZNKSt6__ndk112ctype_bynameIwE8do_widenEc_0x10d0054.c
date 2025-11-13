// 函数: _ZNKSt6__ndk112ctype_bynameIwE8do_widenEc
// 地址: 0x10d0054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

locale_t newloc = uselocale(*(arg1 + 0x10))
char entry_x1
wint_t x0_2 = btowc(zx.d(entry_x1))

if (newloc != 0)
    uselocale(newloc)

return zx.q(x0_2)
