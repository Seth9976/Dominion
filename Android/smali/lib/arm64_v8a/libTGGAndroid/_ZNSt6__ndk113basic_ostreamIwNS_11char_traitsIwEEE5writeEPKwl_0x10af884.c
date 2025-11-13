// 函数: _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5writeEPKwl
// 地址: 0x10af884
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
char var_58 = 0
wchar_t const* var_50 = arg1
void* x8_3 = arg1 + *(*arg1 - 0x18)
int32_t x23 = *(x8_3 + 0x20)

if (x23 == 0)
    if (*(x8_3 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
    
    char var_58_1 = 1
    int64_t entry_x2
    
    if (entry_x2 != 0 && x23 == 0)
        int64_t* x0_2 = *(arg1 + *(*arg1 - 0x18) + 0x28)
        
        if ((*(*x0_2 + 0x60))(x0_2, arg2, entry_x2) != entry_x2)
            void* x8_12 = arg1 + *(*arg1 - 0x18)
            int32_t x9_3 = *(x8_12 + 0x20) | 1
            bool cond:0_1 = (*(x8_12 + 0x24) & x9_3) == 0
            *(x8_12 + 0x20) = x9_3
            
            if (not(cond:0_1))
                sub_10b053c()
                noreturn

std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry()

if (*(x22 + 0x28) == x8)
    return arg1

__stack_chk_fail()
noreturn
