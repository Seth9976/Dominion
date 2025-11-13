// 函数: _ZNKSt6__ndk112ctype_bynameIwE8do_widenEPKcS3_Pw
// 地址: 0x10d00c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x19 = arg2

if (arg2 == arg3)
    return x19

wint_t* entry_x3
wint_t* x21_1 = entry_x3

do
    uint32_t c = zx.d(*x19)
    locale_t newloc = uselocale(*(arg1 + 0x10))
    wint_t x0_2 = btowc(c)
    
    if (newloc != 0)
        uselocale(newloc)
    
    x19 = &x19[1]
    *x21_1 = x0_2
    x21_1 = &x21_1[1]
while (arg3 != x19)

return arg3
