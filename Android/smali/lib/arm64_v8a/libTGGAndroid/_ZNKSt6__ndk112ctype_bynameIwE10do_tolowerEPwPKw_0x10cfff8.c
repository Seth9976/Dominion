// 函数: _ZNKSt6__ndk112ctype_bynameIwE10do_tolowerEPwPKw
// 地址: 0x10cfff8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t const* x19 = arg2
wchar_t* entry_x2

if (arg2 == entry_x2)
    return x19

do
    *x19 = towlower_l(*x19, *(arg1 + 0x10))
    x19 = &x19[1]
while (entry_x2 != x19)

return entry_x2
