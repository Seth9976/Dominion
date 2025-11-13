// 函数: _ZNKSt6__ndk17codecvtIwc9mbstate_tE6do_outERS1_PKwS5_RS5_PcS7_RS7_
// 地址: 0x10d0598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
char* s_1 = arg6
mbstate_t& x21 = arg1
wchar_t const*& x22 = arg3

if (arg3 != arg4)
    x22 = arg3
    
    while (*x22 != 0)
        x22 += 4
        
        if (arg4 == x22)
            x22 = arg4
            break

char** entry_x7
*entry_x7 = s_1
*arg5 = arg3
uint64_t result

if (s_1 == arg7 || arg3 == arg4)
label_10d0840:
    result = zx.q(arg3 != arg4 ? 1 : 0)
else
    char s
    wchar_t** x8_4 = &s | 1
    mbstate_t& var_90_1 = x21
    
    while (true)
        int64_t x8_5 = *arg2
        mbstate_t ps
        ps.__count = x8_5.d
        ps.__value.__wch = x8_5:4.d
        struct __mbstate_t newloc
        newloc.__count = x21->__offset(0x10).d
        newloc.__value.__wch = x21->__offset(0x14).d
        locale_t newloc_1
        int32_t x5
        size_t len
        ssize_t x7
        newloc_1, x5, len, x7 = uselocale(newloc)
        size_t x0_1 = wcsnrtombs(s_1, arg5, (x22 - arg3) s>> 2, arg7 - s_1, arg2, x5, len, x7, x8_4)
        
        if (newloc_1 != 0)
            uselocale(newloc_1)
        
        if (x0_1 != 0)
            if (x0_1 == -1)
                *entry_x7 = s_1
                wchar_t const* i = arg3
                
                if (arg3 != *arg5)
                    do
                        struct __mbstate_t newloc_4
                        newloc_4.__count = var_90_1->__offset(0x10).d
                        newloc_4.__value.__wch = var_90_1->__offset(0x14).d
                        wchar_t const wc = *i
                        locale_t newloc_5 = uselocale(newloc_4)
                        size_t x0_7 = wcrtomb(s_1, wc, &ps)
                        
                        if (newloc_5 != 0)
                            uselocale(newloc_5)
                        
                        if (x0_7 == -1)
                            break
                        
                        i = &i[1]
                        s_1 = &(*entry_x7)[x0_7]
                        *entry_x7 = s_1
                    while (i != *arg5)
                
                result = 2
                *arg5 = i
                break
            
            s_1 = &(*entry_x7)[x0_1]
            *entry_x7 = s_1
            
            if (s_1 == arg7)
                arg3 = *arg5
                goto label_10d0840
            
            if (x22 == arg4)
                x21 = var_90_1
                x22 = arg4
                arg3 = *arg5
            label_10d0794:
                
                if (s_1 == arg7)
                    goto label_10d0840
                
                if (arg3 == arg4)
                    goto label_10d0840
                
                continue
            else
                x21 = var_90_1
                struct __mbstate_t newloc_2
                newloc_2.__count = x21->__offset(0x10).d
                newloc_2.__value.__wch = x21->__offset(0x14).d
                locale_t newloc_3 = uselocale(newloc_2)
                size_t x0_4 = wcrtomb(&s, 0, arg2)
                
                if (newloc_3 != 0)
                    uselocale(newloc_3)
                
                if (x0_4 == -1)
                    result = 2
                    break
                
                char* x9_1 = *entry_x7
                
                if (x0_4 u<= arg7 - x9_1)
                    if (x0_4 != 0)
                        char s_2 = s
                        *entry_x7 = &x9_1[1]
                        int64_t i_2 = x0_4 - 1
                        *x9_1 = s_2
                        
                        if (x0_4 != 1)
                            wchar_t** x9_2 = x8_4
                            int64_t i_1
                            
                            do
                                char* x10_1 = *entry_x7
                                char x11_1 = *x9_2
                                x9_2 += 1
                                i_1 = i_2
                                i_2 -= 1
                                *entry_x7 = &x10_1[1]
                                *x10_1 = x11_1
                            while (i_1 != 1)
                    
                    x22 = arg4
                    arg3 = *arg5 + 4
                    wchar_t const* x8_11 = arg3
                    *arg5 = arg3
                    
                    if (arg3 != arg4)
                        while (true)
                            if (*x8_11 == 0)
                                x22 = x8_11
                                break
                            
                            x8_11 = &x8_11[1]
                            
                            if (arg4 == x8_11)
                                x22 = arg4
                                break
                    
                    s_1 = *entry_x7
                    goto label_10d0794
        
        result = 1
        break

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
