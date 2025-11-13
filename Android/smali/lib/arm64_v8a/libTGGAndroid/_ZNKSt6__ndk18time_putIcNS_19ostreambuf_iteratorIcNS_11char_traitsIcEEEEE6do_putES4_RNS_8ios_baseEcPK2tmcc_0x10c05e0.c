// 函数: _ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcPK2tmcc
// 地址: 0x10c05e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
std::__ndk1::ios_base& result = arg2
char format = 0x25
char var_9f = arg6
char entry_x6
char var_9e = entry_x6
char var_9d = 0

if (zx.d(entry_x6) != 0)
    char var_9f_1 = entry_x6
    char var_9e_1 = arg6

char s[0x64]
size_t i_2 = strftime_l(&s, 0x64, &format, arg5, *(arg1 + 0x10))

if (i_2 != 0)
    size_t i_1 = i_2
    char (* x22_1)[0x64] = &s
    size_t i
    
    do
        if (result != 0)
            char* x8_3 = *(result + 0x30)
            char x1 = *x22_1
            
            if (x8_3 == *(result + 0x38))
                if ((*(*result + 0x68))(result, x1) == 0xffffffff)
                    result = nullptr
            else
                *(result + 0x30) = &x8_3[1]
                *x8_3 = x1
        
        i = i_1
        i_1 -= 1
        x22_1 = &(*x22_1)[1]
    while (i != 1)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
