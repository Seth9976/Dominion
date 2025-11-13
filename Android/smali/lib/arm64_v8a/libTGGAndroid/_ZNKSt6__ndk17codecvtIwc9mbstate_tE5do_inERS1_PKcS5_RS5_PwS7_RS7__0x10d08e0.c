// 函数: _ZNKSt6__ndk17codecvtIwc9mbstate_tE5do_inERS1_PKcS5_RS5_PwS7_RS7_
// 地址: 0x10d08e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
wchar_t* pwc = arg6
char const* s = arg3
char const*& s_1 = arg3

if (arg3 != arg4)
    s_1 = s
    
    while (zx.d(*s_1) != 0)
        s_1 += 1
        
        if (arg4 == s_1)
            s_1 = arg4
            break

wchar_t** entry_x7
*entry_x7 = pwc
*arg5 = s
uint64_t result

if (pwc == arg7 || s == arg4)
label_10d0b58:
    result = zx.q(s != arg4 ? 1 : 0)
else
    while (true)
        int64_t x8_5 = *arg2
        mbstate_t ps
        ps.__count = x8_5.d
        ps.__value.__wch = x8_5:4.d
        struct __mbstate_t newloc
        newloc.__count = arg1->__offset(0x10).d
        newloc.__value.__wch = arg1->__offset(0x14).d
        locale_t newloc_1
        int32_t x5
        size_t len
        ssize_t x7
        newloc_1, x5, len, x7 = uselocale(newloc)
        size_t x0_1 = mbsnrtowcs(pwc, arg5, s_1 - s, (arg7 - pwc) s>> 2, arg2, x5, len, x7, x8)
        
        if (newloc_1 != 0)
            uselocale(newloc_1)
        
        if (x0_1 == -1)
            *entry_x7 = pwc
            
            if (s == *arg5)
            label_10d0b40:
                *arg5 = s
                goto label_10d0b58
            
            while (true)
                struct __mbstate_t newloc_4
                newloc_4.__count = arg1->__offset(0x10).d
                newloc_4.__value.__wch = arg1->__offset(0x14).d
                locale_t newloc_5 = uselocale(newloc_4)
                size_t x24_2 = mbrtowc(pwc, s, s_1 - s, &ps)
                
                if (newloc_5 != 0)
                    uselocale(newloc_5)
                
                if (x24_2 == 0)
                    x24_2 = 1
                else
                    if (x24_2 == -2)
                        result = 1
                        *arg5 = s
                        break
                    
                    if (x24_2 == -1)
                        result = 2
                        *arg5 = s
                        break
                
                s = &s[x24_2]
                pwc = &(*entry_x7)[1]
                *entry_x7 = pwc
                
                if (s == *arg5)
                    goto label_10d0b40
            
            break
        
        void* pwc_1 = &(*entry_x7)[x0_1]
        *entry_x7 = pwc_1
        
        if (pwc_1 == arg7)
            s = *arg5
            goto label_10d0b58
        
        s = *arg5
        
        if (s_1 == arg4)
            s_1 = arg4
        else
            struct __mbstate_t newloc_2
            newloc_2.__count = arg1->__offset(0x10).d
            newloc_2.__value.__wch = arg1->__offset(0x14).d
            locale_t newloc_3 = uselocale(newloc_2)
            size_t x0_4 = mbrtowc(pwc_1, s, 1, arg2)
            
            if (newloc_3 != 0)
                uselocale(newloc_3)
            
            if (x0_4 != 0)
                result = 2
                break
            
            char** x9_1 = arg5
            *entry_x7 = &(*entry_x7)[1]
            s = &(*x9_1)[1]
            s_1 = s
            *x9_1 = s
            
            if (s == arg4)
                s = arg4
                goto label_10d0b58
            
            while (zx.d(*s_1) != 0)
                s_1 += 1
                
                if (arg4 == s_1)
                    s_1 = arg4
                    break
        
        pwc = *entry_x7
        
        if (pwc == arg7)
            goto label_10d0b58
        
        if (s == arg4)
            goto label_10d0b58

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
