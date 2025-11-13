// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_
// 地址: 0xf10b04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(arg1 + 0x38)
char* x0 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_expression<char const*>(
    arg1, arg2)

if (x0 != arg2)
    char* x21_1
    
    do
        x21_1 = x0
        x0 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_expression<char const*>(
            arg1, x21_1)
    while (x0 != x21_1)
    
    if (x21_1 != arg2)
        char* entry_x2
        
        if (x21_1 == entry_x2)
            return entry_x2
        
        while (true)
            if (zx.d(*x21_1) != 0x7c)
                return x21_1
            
            void* x27_1 = *(arg1 + 0x38)
            void* x22_1 = &x21_1[1]
            char* x0_3 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_expression<char const*>(
                arg1, x22_1)
            
            if (x0_3 == x22_1)
                break
            
            do
                x21_1 = x0_3
                x0_3 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_expression<char const*>(
                    arg1, x21_1)
            while (x0_3 != x21_1)
            
            if (x21_1 == x22_1)
                break
            
            void** x0_5 = operator new(0x18)
            int64_t x8_2 = *(x27_1 + 8)
            int64_t x9_1 = *(x23 + 8)
            *x0_5 = _vtable_for_std::__ndk1::__alternate<char> + 0x10
            x0_5[1] = x9_1
            x0_5[2] = x8_2
            *(x23 + 8) = x0_5
            *(x27_1 + 8) = 0
            void** x0_6 = operator new(0x10)
            int64_t x8_4 = *(*(arg1 + 0x38) + 8)
            *x0_6 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
            x0_6[1] = x8_4
            *(x27_1 + 8) = x0_6
            *(*(arg1 + 0x38) + 8) = 0
            void** x0_7 = operator new(0x10)
            int64_t x8_6 = *(x27_1 + 8)
            *x0_7 = _vtable_for_std::__ndk1::__empty_non_own_state<char> + 0x10
            x0_7[1] = x8_6
            *(*(arg1 + 0x38) + 8) = x0_7
            *(arg1 + 0x38) = *(x27_1 + 8)
            
            if (x21_1 == entry_x2)
                return entry_x2

sub_f17564()
noreturn
