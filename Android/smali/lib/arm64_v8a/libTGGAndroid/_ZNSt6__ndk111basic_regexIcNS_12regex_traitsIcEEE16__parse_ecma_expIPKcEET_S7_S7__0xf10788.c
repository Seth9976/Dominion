// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_
// 地址: 0xf10788
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = *(arg1 + 0x38)
char const* x0 = arg2
std::__ndk1::__owns_one_state<char>* entry_x2
char const* x21_1

do
    x21_1 = x0
    x0 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_assertion<char const*>(
        arg1, x21_1)
    
    if (x0 == x21_1)
        int32_t x23_1 = (*(arg1 + 0x38)).d
        int32_t x25_1 = *(arg1 + 0x1c)
        char* x0_3 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_atom<char const*>(
            arg1, x21_1)
        
        if (x0_3 == x21_1)
            break
        
        *(arg1 + 0x1c)
        x0 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(
            arg1, x0_3, entry_x2, x23_1, x25_1 + 1)
while (x0 != x21_1)

if (x21_1 == arg2)
    void** x0_5 = operator new(0x10)
    void* x8_2 = *(arg1 + 0x38)
    int64_t x9_1 = *(x8_2 + 8)
    *x0_5 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
    x0_5[1] = x9_1
    *(x8_2 + 8) = x0_5
    *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)

while (x21_1 != entry_x2)
    if (zx.d(*x21_1) != 0x7c)
        return x21_1
    
    void* x28_1 = *(arg1 + 0x38)
    void* fp_1 = &x21_1[1]
    void* x0_9 = fp_1
    
    do
        x21_1 = x0_9
        x0_9 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_assertion<char const*>(
            arg1, x21_1)
        
        if (x0_9 == x21_1)
            uint32_t x22_1 = (*(arg1 + 0x38)).d
            int32_t x25_2 = *(arg1 + 0x1c)
            char* x0_13 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_atom<char const*>(
                arg1, x21_1)
            
            if (x0_13 == x21_1)
                break
            
            *(arg1 + 0x1c)
            x0_9 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(
                arg1, x0_13, entry_x2, x22_1, x25_2 + 1)
    while (x0_9 != x21_1)
    
    if (x21_1 == fp_1)
        void** x0_14 = operator new(0x10)
        void* x8_15 = *(arg1 + 0x38)
        int64_t x9_4 = *(x8_15 + 8)
        *x0_14 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
        x0_14[1] = x9_4
        *(x8_15 + 8) = x0_14
        *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
    
    void** x0_6 = operator new(0x18)
    int64_t x8_6 = *(x28_1 + 8)
    int64_t x9_2 = *(x24 + 8)
    *x0_6 = _vtable_for_std::__ndk1::__alternate<char> + 0x10
    x0_6[1] = x9_2
    x0_6[2] = x8_6
    *(x24 + 8) = x0_6
    *(x28_1 + 8) = 0
    void** x0_7 = operator new(0x10)
    int64_t x8_8 = *(*(arg1 + 0x38) + 8)
    *x0_7 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
    x0_7[1] = x8_8
    *(x28_1 + 8) = x0_7
    *(*(arg1 + 0x38) + 8) = 0
    void** x0_8 = operator new(0x10)
    int64_t x8_10 = *(x28_1 + 8)
    *x0_8 = _vtable_for_std::__ndk1::__empty_non_own_state<char> + 0x10
    x0_8[1] = x8_10
    *(*(arg1 + 0x38) + 8) = x0_8
    *(arg1 + 0x38) = *(x28_1 + 8)

return entry_x2
