// 函数: _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5flushEv
// 地址: 0x10a8064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t* entry_result
void** result = entry_result
void* x8_1 = *entry_result

if (*(entry_result + *(x8_1 - 0x18) + 0x28) != 0)
    char var_48_1 = 0
    void** result_1 = result
    void* x9_4 = result + *(x8_1 - 0x18)
    
    if (*(x9_4 + 0x20) == 0)
        if (*(x9_4 + 0x88) != 0)
            std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
            x8_1 = *result
        
        char var_48_2 = 1
        
        if ((*(**(result + *(x8_1 - 0x18) + 0x28) + 0x30))() == 0xffffffff)
            void* x8_8 = result + *(*result - 0x18)
            int32_t x9_6 = *(x8_8 + 0x20) | 1
            bool cond:0_1 = (*(x8_8 + 0x24) & x9_6) != 0
            *(x8_8 + 0x20) = x9_6
            
            if (cond:0_1)
                sub_10b053c()
                noreturn
    
    std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
