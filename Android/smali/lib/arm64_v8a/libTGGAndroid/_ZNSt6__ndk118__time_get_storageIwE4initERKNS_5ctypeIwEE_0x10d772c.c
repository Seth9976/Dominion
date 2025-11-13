// 函数: _ZNSt6__ndk118__time_get_storageIwE4initERKNS_5ctypeIwEE
// 地址: 0x10d772c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t x26 = 0
void var_254
void* var_2d0 = &var_254
struct tm tp
tp.tm_zone = 0
tp.tm_mon = 0
tp.tm_year = 0
tp.tm_wday = 0
tp.tm_yday = 0
tp.tm_isdst = 0
tp.tm_gmtoff = 0
tp.tm_sec = 0
tp.tm_min = 0
tp.tm_hour = 0
tp.tm_mday = 0
mbstate_t ps
ps.__count = 0
ps.__value.__wch = 0

while (true)
    tp.tm_wday = x26.d
    char s[0x64]
    strftime_l(&s, 0x64, "%A", &tp, *arg1)
    __builtin_memset(&ps, 0, 8)
    char const* var_2c8 = &s
    locale_t newloc = uselocale(*arg1)
    wchar_t var_264
    size_t x0_3
    int128_t v0_1
    int128_t v1_1
    x0_3, v0_1, v1_1 = mbsrtowcs(&var_264, &var_2c8, 0x64, &ps)
    
    if (newloc != 0)
        v0_1, v1_1 = uselocale(newloc)
    
    if (x0_3 == -1)
        break
    
    uint64_t x8_3 = zx.q(*(arg1 + x26 * 0x18 + 8))
    uint64_t x1_2
    uint64_t x3_3
    
    if ((x8_3.d & 1) != 0)
        x8_3 = *(arg1 + x26 * 0x18 + 8)
        x1_2 = (x8_3 & 0xfffffffffffffffe) - 1
        
        if (x0_3 u> x1_2)
            x3_3 = *(arg1 + x26 * 0x18 + 0x10)
            v0_1, v1_1 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                arg1 + x26 * 0x18 + 8, x1_2, x0_3 - x1_2, x3_3, 0, x3_3)
            x8_3 = zx.q(*(arg1 + x26 * 0x18 + 8))
    else if (x0_3 u> 4)
        x3_3 = x8_3 u>> 1
        x1_2 = 4
        v0_1, v1_1 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            arg1 + x26 * 0x18 + 8, x1_2, x0_3 - x1_2, x3_3, 0, x3_3)
        x8_3 = zx.q(*(arg1 + x26 * 0x18 + 8))
    void var_260
    void* x9_3
    void* x10_1
    
    if ((x8_3.d & 1) != 0)
        x10_1 = *(arg1 + x26 * 0x18 + 0x18)
        
        if (x0_3 != 0)
        label_10d7884:
            wchar_t* i = &var_264
            
            if ((x0_3 << 2) - 4 u< 0x1c || (x10_1 u< &var_260 + (x0_3 << 2) - 4
                    && &var_264 u< x10_1 + (x0_3 << 2) - 4 + 4))
                x9_3 = x10_1
            label_10d78c0:
                
                do
                    uint32_t x11_4 = *i
                    i = &i[1]
                    *x9_3 = x11_4
                    x9_3 += 4
                while (&(&var_264)[x0_3] != i)
            else
                void* x14_1 = var_2d0
                int64_t i_18 = ((((x0_3 << 2) - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                x9_3 = x10_1 + (i_18 << 2)
                i = &(&var_264)[i_18]
                void* x10_5 = x10_1 + 0x10
                int64_t i_12 = i_18
                int64_t i_1
                
                do
                    v0_1 = *(x14_1 - 0x10)
                    v1_1 = *x14_1
                    x14_1 += 0x20
                    i_1 = i_12
                    i_12 -= 8
                    *(x10_5 - 0x10) = v0_1
                    *x10_5 = v1_1
                    x10_5 += 0x20
                while (i_1 != 8)
                
                if ((((x0_3 << 2) - 4) u>> 2) + 1 != i_18)
                    goto label_10d78c0
        else
            x9_3 = x10_1
    else
        x10_1 = arg1 + x26 * 0x18 + 0xc
        
        if (x0_3 != 0)
            goto label_10d7884
        
        x9_3 = x10_1
    *x9_3 = 0
    
    if ((zx.d(*(arg1 + x26 * 0x18 + 8)) & 1) != 0)
        *(arg1 + x26 * 0x18 + 0x10) = x0_3
    else
        *(arg1 + x26 * 0x18 + 8) = (x0_3.d << 1).b
    
    strftime_l(&s, 0x64, "%a", &tp, *arg1)
    __builtin_memset(&ps, 0, 8)
    var_2c8 = &s
    locale_t newloc_1 = uselocale(*arg1)
    size_t x0_9
    int128_t v0_2
    int128_t v1_2
    x0_9, v0_2, v1_2 = mbsrtowcs(&var_264, &var_2c8, 0x64, &ps)
    
    if (newloc_1 != 0)
        v0_2, v1_2 = uselocale(newloc_1)
    
    if (x0_9 == -1)
        break
    
    uint64_t x8_10 = zx.q(*(arg1 + (x26 + 7) * 0x18 + 8))
    uint64_t x1_4
    uint64_t x3_6
    
    if ((x8_10.d & 1) != 0)
        x8_10 = *(arg1 + (x26 + 7) * 0x18 + 8)
        x1_4 = (x8_10 & 0xfffffffffffffffe) - 1
        
        if (x0_9 u> x1_4)
            x3_6 = *(arg1 + (x26 + 7) * 0x18 + 0x10)
            v0_2, v1_2 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                arg1 + (x26 + 7) * 0x18 + 8, x1_4, x0_9 - x1_4, x3_6, 0, x3_6)
            x8_10 = zx.q(*(arg1 + (x26 + 7) * 0x18 + 8))
    else if (x0_9 u> 4)
        x3_6 = x8_10 u>> 1
        x1_4 = 4
        v0_2, v1_2 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            arg1 + (x26 + 7) * 0x18 + 8, x1_4, x0_9 - x1_4, x3_6, 0, x3_6)
        x8_10 = zx.q(*(arg1 + (x26 + 7) * 0x18 + 8))
    void* x9_6
    void* x10_3
    
    if ((x8_10.d & 1) != 0)
        x10_3 = *(arg1 + (x26 + 7) * 0x18 + 0x18)
        
        if (x0_9 != 0)
        label_10d79c4:
            wchar_t* i_2 = &var_264
            
            if ((x0_9 << 2) - 4 u< 0x1c || (x10_3 u< &var_260 + (x0_9 << 2) - 4
                    && &var_264 u< x10_3 + (x0_9 << 2) - 4 + 4))
                x9_6 = x10_3
            label_10d7a00:
                
                do
                    uint32_t x11_8 = *i_2
                    i_2 = &i_2[1]
                    *x9_6 = x11_8
                    x9_6 += 4
                while (&(&var_264)[x0_9] != i_2)
            else
                void* x14_2 = var_2d0
                int64_t i_19 = ((((x0_9 << 2) - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                x9_6 = x10_3 + (i_19 << 2)
                i_2 = &(&var_264)[i_19]
                void* x10_6 = x10_3 + 0x10
                int64_t i_13 = i_19
                int64_t i_3
                
                do
                    v0_2 = *(x14_2 - 0x10)
                    v1_2 = *x14_2
                    x14_2 += 0x20
                    i_3 = i_13
                    i_13 -= 8
                    *(x10_6 - 0x10) = v0_2
                    *x10_6 = v1_2
                    x10_6 += 0x20
                while (i_3 != 8)
                
                if ((((x0_9 << 2) - 4) u>> 2) + 1 != i_19)
                    goto label_10d7a00
        else
            x9_6 = x10_3
    else
        x10_3 = arg1 + (x26 + 7) * 0x18 + 0xc
        
        if (x0_9 != 0)
            goto label_10d79c4
        
        x9_6 = x10_3
    *x9_6 = 0
    
    if ((zx.d(*(arg1 + (x26 + 7) * 0x18 + 8)) & 1) == 0)
        *(arg1 + (x26 + 7) * 0x18 + 8) = (x0_9.d << 1).b
    else
        *(arg1 + (x26 + 7) * 0x18 + 0x10) = x0_9
    
    x26 += 1
    
    if (x26 == 7)
        int64_t x26_1 = 0
        void* var_2d0_1 = &var_254
        
        while (true)
            tp.tm_mon = x26_1.d
            strftime_l(&s, 0x64, "%B", &tp, *arg1)
            __builtin_memset(&ps, 0, 8)
            var_2c8 = &s
            locale_t newloc_2 = uselocale(*arg1)
            size_t x0_15
            int128_t v0_3
            int128_t v1_3
            x0_15, v0_3, v1_3 = mbsrtowcs(&var_264, &var_2c8, 0x64, &ps)
            
            if (newloc_2 != 0)
                v0_3, v1_3 = uselocale(newloc_2)
            
            if (x0_15 == -1)
                goto label_10d8240
            
            void* x9_7 = arg1 + x26_1 * 0x18
            uint64_t x8_21 = zx.q(*(x9_7 + 0x158))
            uint64_t x1_6
            uint64_t x3_9
            
            if ((x8_21.d & 1) != 0)
                x8_21 = *(x9_7 + 0x158)
                x1_6 = (x8_21 & 0xfffffffffffffffe) - 1
                
                if (x0_15 u> x1_6)
                    x3_9 = *(arg1 + x26_1 * 0x18 + 0x160)
                    v0_3, v1_3 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                        x9_7 + 0x158, x1_6, x0_15 - x1_6, x3_9, 0, x3_9)
                    x8_21 = zx.q(*(x9_7 + 0x158))
            else if (x0_15 u> 4)
                x3_9 = x8_21 u>> 1
                x1_6 = 4
                v0_3, v1_3 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                    x9_7 + 0x158, x1_6, x0_15 - x1_6, x3_9, 0, x3_9)
                x8_21 = zx.q(*(x9_7 + 0x158))
            void* x9_10
            void* x10_7
            
            if ((x8_21.d & 1) != 0)
                x10_7 = *(arg1 + x26_1 * 0x18 + 0x168)
                
                if (x0_15 != 0)
                label_10d7bd0:
                    wchar_t* i_4 = &var_264
                    
                    if ((x0_15 << 2) - 4 u< 0x1c || (x10_7 u< &var_260 + (x0_15 << 2) - 4
                            && &var_264 u< x10_7 + (x0_15 << 2) - 4 + 4))
                        x9_10 = x10_7
                    label_10d7c0c:
                        
                        do
                            uint32_t x11_14 = *i_4
                            i_4 = &i_4[1]
                            *x9_10 = x11_14
                            x9_10 += 4
                        while (&(&var_264)[x0_15] != i_4)
                    else
                        void* x14_3 = var_2d0_1
                        int64_t i_20 = ((((x0_15 << 2) - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                        x9_10 = x10_7 + (i_20 << 2)
                        i_4 = &(&var_264)[i_20]
                        void* x10_11 = x10_7 + 0x10
                        int64_t i_14 = i_20
                        int64_t i_5
                        
                        do
                            v0_3 = *(x14_3 - 0x10)
                            v1_3 = *x14_3
                            x14_3 += 0x20
                            i_5 = i_14
                            i_14 -= 8
                            *(x10_11 - 0x10) = v0_3
                            *x10_11 = v1_3
                            x10_11 += 0x20
                        while (i_5 != 8)
                        
                        if ((((x0_15 << 2) - 4) u>> 2) + 1 != i_20)
                            goto label_10d7c0c
                else
                    x9_10 = x10_7
            else
                x10_7 = x9_7 + 0x15c
                
                if (x0_15 != 0)
                    goto label_10d7bd0
                
                x9_10 = x10_7
            *x9_10 = 0
            
            if ((zx.d(*(x9_7 + 0x158)) & 1) != 0)
                *(arg1 + x26_1 * 0x18 + 0x160) = x0_15
            else
                *(x9_7 + 0x158) = (x0_15.d << 1).b
            
            strftime_l(&s, 0x64, "%b", &tp, *arg1)
            __builtin_memset(&ps, 0, 8)
            var_2c8 = &s
            locale_t newloc_3 = uselocale(*arg1)
            size_t x0_21
            int128_t v0_4
            int128_t v1_4
            x0_21, v0_4, v1_4 = mbsrtowcs(&var_264, &var_2c8, 0x64, &ps)
            
            if (newloc_3 != 0)
                v0_4, v1_4 = uselocale(newloc_3)
            
            if (x0_21 == -1)
                goto label_10d8240
            
            void* x9_11 = arg1 + (x26_1 + 0xc) * 0x18
            uint64_t x8_28 = zx.q(*(x9_11 + 0x158))
            uint64_t x1_8
            uint64_t x3_12
            
            if ((x8_28.d & 1) != 0)
                x8_28 = *(x9_11 + 0x158)
                x1_8 = (x8_28 & 0xfffffffffffffffe) - 1
                
                if (x0_21 u> x1_8)
                    x3_12 = *(arg1 + (x26_1 + 0xc) * 0x18 + 0x160)
                    v0_4, v1_4 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                        x9_11 + 0x158, x1_8, x0_21 - x1_8, x3_12, 0, x3_12)
                    x8_28 = zx.q(*(x9_11 + 0x158))
            else if (x0_21 u> 4)
                x3_12 = x8_28 u>> 1
                x1_8 = 4
                v0_4, v1_4 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                    x9_11 + 0x158, x1_8, x0_21 - x1_8, x3_12, 0, x3_12)
                x8_28 = zx.q(*(x9_11 + 0x158))
            void* x9_14
            void* x10_9
            
            if ((x8_28.d & 1) != 0)
                x10_9 = *(arg1 + (x26_1 + 0xc) * 0x18 + 0x168)
                
                if (x0_21 != 0)
                label_10d7d14:
                    wchar_t* i_6 = &var_264
                    
                    if ((x0_21 << 2) - 4 u< 0x1c || (x10_9 u< &var_260 + (x0_21 << 2) - 4
                            && &var_264 u< x10_9 + (x0_21 << 2) - 4 + 4))
                        x9_14 = x10_9
                    label_10d7d50:
                        
                        do
                            uint32_t x11_18 = *i_6
                            i_6 = &i_6[1]
                            *x9_14 = x11_18
                            x9_14 += 4
                        while (&(&var_264)[x0_21] != i_6)
                    else
                        void* x14_4 = var_2d0_1
                        int64_t i_21 = ((((x0_21 << 2) - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                        x9_14 = x10_9 + (i_21 << 2)
                        i_6 = &(&var_264)[i_21]
                        void* x10_12 = x10_9 + 0x10
                        int64_t i_15 = i_21
                        int64_t i_7
                        
                        do
                            v0_4 = *(x14_4 - 0x10)
                            v1_4 = *x14_4
                            x14_4 += 0x20
                            i_7 = i_15
                            i_15 -= 8
                            *(x10_12 - 0x10) = v0_4
                            *x10_12 = v1_4
                            x10_12 += 0x20
                        while (i_7 != 8)
                        
                        if ((((x0_21 << 2) - 4) u>> 2) + 1 != i_21)
                            goto label_10d7d50
                else
                    x9_14 = x10_9
            else
                x10_9 = x9_11 + 0x15c
                
                if (x0_21 != 0)
                    goto label_10d7d14
                
                x9_14 = x10_9
            *x9_14 = 0
            
            if ((zx.d(*(x9_11 + 0x158)) & 1) == 0)
                *(x9_11 + 0x158) = (x0_21.d << 1).b
            else
                *(arg1 + (x26_1 + 0xc) * 0x18 + 0x160) = x0_21
            
            x26_1 += 1
            
            if (x26_1 == 0xc)
                tp.tm_hour = 1
                strftime_l(&s, 0x64, "%p", &tp, *arg1)
                char const* var_2b0 = &s
                __builtin_memset(&ps, 0, 8)
                locale_t newloc_4 = uselocale(*arg1)
                size_t x0_27
                int128_t v0_5
                int128_t v1_5
                x0_27, v0_5, v1_5 = mbsrtowcs(&var_264, &var_2b0, 0x64, &ps)
                
                if (newloc_4 != 0)
                    v0_5, v1_5 = uselocale(newloc_4)
                
                if (x0_27 == -1)
                    break
                
                uint64_t x8_38 = zx.q(*(arg1 + 0x398))
                uint64_t x1_10
                uint64_t x3_15
                
                if ((x8_38.d & 1) != 0)
                    x8_38 = *(arg1 + 0x398)
                    x1_10 = (x8_38 & 0xfffffffffffffffe) - 1
                    
                    if (x0_27 u> x1_10)
                        x3_15 = *(arg1 + 0x3a0)
                        v0_5, v1_5 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                            arg1 + 0x398, x1_10, x0_27 - x1_10, x3_15, 0, x3_15)
                        x8_38 = zx.q(*(arg1 + 0x398))
                else if (x0_27 u> 4)
                    x3_15 = x8_38 u>> 1
                    x1_10 = 4
                    v0_5, v1_5 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                        arg1 + 0x398, x1_10, x0_27 - x1_10, x3_15, 0, x3_15)
                    x8_38 = zx.q(*(arg1 + 0x398))
                void* x9_17
                void* __offset(std::__ndk1::ctype<wchar_t>, 0x39c) x11_21
                
                if ((x8_38.d & 1) != 0)
                    x11_21 = *(arg1 + 0x3a8)
                    
                    if (x0_27 != 0)
                    label_10d7ed4:
                        int64_t x10_13 = x0_27 << 2
                        wchar_t* i_8
                        
                        if (x10_13 - 4 u< 0x1c
                                || (x11_21 u< &(&var_264)[x0_27] && &var_264 u< x11_21 + x10_13))
                            x9_17 = x11_21
                            i_8 = &var_264
                        label_10d7f1c:
                            
                            do
                                uint32_t x11_22 = *i_8
                                i_8 = &i_8[1]
                                *x9_17 = x11_22
                                x9_17 += 4
                            while (&(&var_264)[x0_27] != i_8)
                        else
                            int64_t i_22 = (((x10_13 - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                            void* x14_5 = &var_254
                            x9_17 = x11_21 + (i_22 << 2)
                            i_8 = &(&var_264)[i_22]
                            void* __offset(std::__ndk1::ctype<wchar_t>, 0x3ac) x11_25 =
                                x11_21 + 0x10
                            int64_t i_16 = i_22
                            int64_t i_9
                            
                            do
                                v0_5 = *(x14_5 - 0x10)
                                v1_5 = *x14_5
                                x14_5 += 0x20
                                i_9 = i_16
                                i_16 -= 8
                                *(x11_25 - 0x10) = v0_5
                                *x11_25 = v1_5
                                x11_25 += 0x20
                            while (i_9 != 8)
                            
                            if (((x10_13 - 4) u>> 2) + 1 != i_22)
                                goto label_10d7f1c
                    else
                        x9_17 = x11_21
                else
                    x11_21 = arg1 + 0x39c
                    
                    if (x0_27 != 0)
                        goto label_10d7ed4
                    
                    x9_17 = x11_21
                *x9_17 = 0
                
                if ((zx.d(*(arg1 + 0x398)) & 1) != 0)
                    *(arg1 + 0x3a0) = x0_27
                else
                    *(arg1 + 0x398) = (x0_27.d << 1).b
                
                tp.tm_hour = 0xd
                strftime_l(&s, 0x64, "%p", &tp, *arg1)
                var_2b0 = &s
                __builtin_memset(&ps, 0, 8)
                locale_t newloc_5 = uselocale(*arg1)
                size_t x0_33
                int128_t v0_6
                int128_t v1_6
                x0_33, v0_6, v1_6 = mbsrtowcs(&var_264, &var_2b0, 0x64, &ps)
                
                if (newloc_5 != 0)
                    v0_6, v1_6 = uselocale(newloc_5)
                
                if (x0_33 == -1)
                    break
                
                uint64_t x8_42 = zx.q(*(arg1 + 0x3b0))
                uint64_t x1_12
                uint64_t x3_18
                
                if ((x8_42.d & 1) != 0)
                    x8_42 = *(arg1 + 0x3b0)
                    x1_12 = (x8_42 & 0xfffffffffffffffe) - 1
                    
                    if (x0_33 u> x1_12)
                        x3_18 = *(arg1 + 0x3b8)
                        v0_6, v1_6 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                            arg1 + 0x3b0, x1_12, x0_33 - x1_12, x3_18, 0, x3_18)
                        x8_42 = zx.q(*(arg1 + 0x3b0))
                else if (x0_33 u> 4)
                    x3_18 = x8_42 u>> 1
                    x1_12 = 4
                    v0_6, v1_6 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                        arg1 + 0x3b0, x1_12, x0_33 - x1_12, x3_18, 0, x3_18)
                    x8_42 = zx.q(*(arg1 + 0x3b0))
                void* x9_20
                void* __offset(std::__ndk1::ctype<wchar_t>, 0x3b4) x11_23
                
                if ((x8_42.d & 1) != 0)
                    x11_23 = *(arg1 + 0x3c0)
                    
                    if (x0_33 != 0)
                    label_10d8010:
                        int64_t x10_15 = x0_33 << 2
                        wchar_t* i_10
                        
                        if (x10_15 - 4 u< 0x1c
                                || (x11_23 u< &(&var_264)[x0_33] && &var_264 u< x11_23 + x10_15))
                            x9_20 = x11_23
                            i_10 = &var_264
                        label_10d8058:
                            
                            do
                                uint32_t x11_24 = *i_10
                                i_10 = &i_10[1]
                                *x9_20 = x11_24
                                x9_20 += 4
                            while (&(&var_264)[x0_33] != i_10)
                        else
                            int64_t i_23 = (((x10_15 - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                            void* x14_6 = &var_254
                            x9_20 = x11_23 + (i_23 << 2)
                            i_10 = &(&var_264)[i_23]
                            void* __offset(std::__ndk1::ctype<wchar_t>, 0x3c4) x11_26 =
                                x11_23 + 0x10
                            int64_t i_17 = i_23
                            int64_t i_11
                            
                            do
                                v0_6 = *(x14_6 - 0x10)
                                v1_6 = *x14_6
                                x14_6 += 0x20
                                i_11 = i_17
                                i_17 -= 8
                                *(x11_26 - 0x10) = v0_6
                                *x11_26 = v1_6
                                x11_26 += 0x20
                            while (i_11 != 8)
                            
                            if (((x10_15 - 4) u>> 2) + 1 != i_23)
                                goto label_10d8058
                    else
                        x9_20 = x11_23
                else
                    x11_23 = arg1 + 0x3b4
                    
                    if (x0_33 != 0)
                        goto label_10d8010
                    
                    x9_20 = x11_23
                *x9_20 = 0
                
                if ((zx.d(*(arg1 + 0x3b0)) & 1) != 0)
                    *(arg1 + 0x3b8) = x0_33
                else
                    *(arg1 + 0x3b0) = (x0_33.d << 1).b
                
                std::__ndk1::__time_get_storage<wchar_t>::__analyze(arg1.b, 0x63)
                
                if ((zx.d(*(arg1 + 0x3c8)) & 1) != 0)
                    operator delete(*(arg1 + 0x3d8))
                
                int128_t v0_7 = var_2c8.o
                int64_t var_2b8
                *(arg1 + 0x3d8) = var_2b8
                *(arg1 + 0x3c8) = v0_7
                std::__ndk1::__time_get_storage<wchar_t>::__analyze(arg1.b, 0x72)
                
                if ((zx.d(*(arg1 + 0x3e0)) & 1) != 0)
                    operator delete(*(arg1 + 0x3f0))
                
                int128_t v0_8 = var_2c8.o
                *(arg1 + 0x3f0) = var_2b8
                *(arg1 + 0x3e0) = v0_8
                std::__ndk1::__time_get_storage<wchar_t>::__analyze(arg1.b, 0x78)
                
                if ((zx.d(*(arg1 + 0x3f8)) & 1) != 0)
                    operator delete(*(arg1 + 0x408))
                
                int128_t v0_9 = var_2c8.o
                *(arg1 + 0x408) = var_2b8
                *(arg1 + 0x3f8) = v0_9
                int64_t result
                int128_t v0_10
                result, v0_10 = std::__ndk1::__time_get_storage<wchar_t>::__analyze(arg1.b, 0x58)
                
                if ((zx.d(*(arg1 + 0x410)) & 1) != 0)
                    result, v0_10 = operator delete(*(arg1 + 0x420))
                
                v0_10 = var_2c8.o
                *(arg1 + 0x420) = var_2b8
                *(arg1 + 0x410) = v0_10
                
                if (*(x8 + 0x28) == x8_1)
                    return result
                
                goto label_10d8244
        
        break

label_10d8240:
std::__ndk1::__throw_runtime_error("locale not supported")
label_10d8244:
__stack_chk_fail()
noreturn
