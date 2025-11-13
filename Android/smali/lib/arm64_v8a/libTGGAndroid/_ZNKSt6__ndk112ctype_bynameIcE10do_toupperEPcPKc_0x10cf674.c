// 函数: _ZNKSt6__ndk112ctype_bynameIcE10do_toupperEPcPKc
// 地址: 0x10cf674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x19 = arg2
char* entry_x2

if (arg2 == entry_x2)
    return x19

do
    *x19 = toupper_l(zx.d(*x19), *(arg1 + 0x20))
    x19 = &x19[1]
while (entry_x2 != x19)

return entry_x2
