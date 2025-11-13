// 函数: _ZNKSt6__ndk15ctypeIwE10do_toupperEPwPKw
// 地址: 0x10ce9dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t const* x19 = arg2
wchar_t* entry_x2

if (arg2 == entry_x2)
    return x19

do
    wchar_t const __saved_x0 = *x19
    
    if (__saved_x0 u<= 0x7f)
        if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
        
        int32_t x0_1 = islower_l(__saved_x0, data_24bad00)
        wchar_t const __saved_x0_1 = *x19
        
        if (x0_1 == 0)
            __saved_x0 = __saved_x0_1
        else
            __saved_x0 = __saved_x0_1 - 0x20
    
    *x19 = __saved_x0
    x19 = &x19[1]
while (entry_x2 != x19)

return entry_x2
