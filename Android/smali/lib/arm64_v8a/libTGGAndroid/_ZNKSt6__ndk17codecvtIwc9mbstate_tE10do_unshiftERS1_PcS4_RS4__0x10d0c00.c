// 函数: _ZNKSt6__ndk17codecvtIwc9mbstate_tE10do_unshiftERS1_PcS4_RS4_
// 地址: 0x10d0c00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char** entry_x4
*entry_x4 = arg3
struct __mbstate_t newloc
newloc.__count = arg1->__offset(0x10).d
newloc.__value.__wch = arg1->__offset(0x14).d
locale_t newloc_1 = uselocale(newloc)
char s
size_t x0_1 = wcrtomb(&s, 0, arg2)

if (newloc_1 != 0)
    uselocale(newloc_1)

int64_t result

if (x0_1 + 1 u>= 2)
    char* x9_1 = *entry_x4
    
    if (x0_1 - 1 u<= arg4 - x9_1)
        if (x0_1 != 1)
            char s_1 = s
            *entry_x4 = &x9_1[1]
            int64_t i_1 = x0_1 - 2
            *x9_1 = s_1
            
            if (x0_1 != 2)
                char* x9_2 = &s | 1
                int64_t i
                
                do
                    char* x10_2 = *entry_x4
                    char x11_1 = *x9_2
                    x9_2 = &x9_2[1]
                    i = i_1
                    i_1 -= 1
                    *entry_x4 = &x10_2[1]
                    *x10_2 = x11_1
                while (i != 1)
        
        result = 0
    else
        result = 1
else
    result = 2

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
