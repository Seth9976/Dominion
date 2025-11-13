// 函数: _ZNKSt6__ndk17codecvtIwc9mbstate_tE9do_lengthERS1_PKcS5_m
// 地址: 0x10d0e10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = 0
int64_t entry_x4

if (arg3 != arg4 && entry_x4 != 0)
    char const* s = arg3
    x19 = 0
    int64_t x27_1 = 1
    bool cond:1_1
    
    do
        struct __mbstate_t newloc
        newloc.__count = arg1->__offset(0x10).d
        newloc.__value.__wch = arg1->__offset(0x14).d
        locale_t newloc_1 = uselocale(newloc)
        size_t x25_2 = mbrlen(s, arg4 - s, arg2)
        
        if (newloc_1 != 0)
            uselocale(newloc_1)
        
        int32_t x8_2
        
        if (x25_2 == 0)
            x25_2 = 1
            x8_2 = 1
        else
            if (x25_2 + 2 u< 2)
                break
            
            x8_2 = x25_2.d
        
        s = &s[x25_2]
        x19 += x8_2
        
        if (s == arg4)
            break
        
        cond:1_1 = x27_1 u< entry_x4
        x27_1 += 1
    while (cond:1_1)

return zx.q(x19)
