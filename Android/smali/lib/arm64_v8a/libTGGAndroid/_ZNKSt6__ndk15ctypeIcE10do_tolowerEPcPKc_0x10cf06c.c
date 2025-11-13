// 函数: _ZNKSt6__ndk15ctypeIcE10do_tolowerEPcPKc
// 地址: 0x10cf06c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x19 = arg2
char* entry_x2

if (arg2 == entry_x2)
    return x19

do
    uint32_t x24_1 = sx.d(*x19)
    
    if ((x24_1 & 0x80000000) == 0)
        if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
        
        int32_t x0_1 = isupper_l(x24_1 & 0xff, data_24bad00)
        uint32_t x8_1 = zx.d(*x19)
        
        if (x0_1 == 0)
            x24_1 = x8_1
        else
            x24_1 = x8_1 + 0x20
    
    *x19 = x24_1.b
    x19 = &x19[1]
while (entry_x2 != x19)

return entry_x2
