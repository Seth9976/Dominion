// 函数: _ZNKSt6__ndk112ctype_bynameIwE9do_narrowEPKwS3_cPc
// 地址: 0x10d01ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t const* x19 = arg2

if (arg2 == arg3)
    return x19

char* entry_x4
char* x20_1 = entry_x4
wchar_t* x21_1 = arg3

do
    wchar_t const c = *x19
    locale_t newloc = uselocale(*(arg1 + 0x10))
    int32_t x0_2 = wctob(c)
    
    if (newloc != 0)
        uselocale(newloc)
    
    x19 = &x19[1]
    char x8_1
    
    if (x0_2 == 0xffffffff)
        x8_1 = arg4.b
    else
        x8_1 = x0_2.b
    
    *x20_1 = x8_1
    x20_1 = &x20_1[1]
while (x21_1 != x19)

return x21_1
