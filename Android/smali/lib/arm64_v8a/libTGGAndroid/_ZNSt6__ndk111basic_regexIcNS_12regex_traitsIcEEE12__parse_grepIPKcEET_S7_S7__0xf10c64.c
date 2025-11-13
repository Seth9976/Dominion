// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_
// 地址: 0xf10c64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(arg1 + 0x38)
char* entry_result
char const* entry_result_2

if (arg2 != entry_result)
    entry_result_2 = arg2
    
    while (zx.d(*entry_result_2) != 0xa)
        entry_result_2 = &entry_result_2[1]
        
        if (entry_result == entry_result_2)
            entry_result_2 = entry_result
            break

char const* entry_result_3

if (arg2 == entry_result || entry_result_2 == arg2)
    void** x0_1 = operator new(0x10)
    int64_t x8_2 = *(x23 + 8)
    *x0_1 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
    x0_1[1] = x8_2
    *(x23 + 8) = x0_1
    *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
    
    if (arg2 != entry_result)
        entry_result_3 = &arg2[1]
    else
        entry_result_3 = arg2
    
    if (entry_result_3 != entry_result)
    label_f10dcc:
        
        do
            char* entry_result_1 = entry_result_3
            
            while (zx.d(*entry_result_1) != 0xa)
                entry_result_1 = &entry_result_1[1]
                
                if (entry_result == entry_result_1)
                    entry_result_1 = entry_result
                    break
            
            void* x27_1 = *(arg1 + 0x38)
            
            if (entry_result_1 == entry_result_3)
                void** x0_2 = operator new(0x10)
                int64_t x8_5 = *(x27_1 + 8)
                *x0_2 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
                x0_2[1] = x8_5
                *(x27_1 + 8) = x0_2
                *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
            else
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_basic_reg_exp<char const*>(
                    arg1, entry_result_3)
            
            void** x0_3 = operator new(0x18)
            int64_t x8_8 = *(x27_1 + 8)
            int64_t x9_2 = *(x23 + 8)
            *x0_3 = _vtable_for_std::__ndk1::__alternate<char> + 0x10
            x0_3[1] = x9_2
            x0_3[2] = x8_8
            *(x23 + 8) = x0_3
            *(x27_1 + 8) = 0
            void** x0_4 = operator new(0x10)
            int64_t x8_10 = *(*(arg1 + 0x38) + 8)
            *x0_4 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
            x0_4[1] = x8_10
            *(x27_1 + 8) = x0_4
            *(*(arg1 + 0x38) + 8) = 0
            void** x0_5 = operator new(0x10)
            int64_t x8_12 = *(x27_1 + 8)
            
            if (entry_result_1 != entry_result)
                entry_result_3 = &entry_result_1[1]
            else
                entry_result_3 = entry_result_1
            
            *x0_5 = _vtable_for_std::__ndk1::__empty_non_own_state<char> + 0x10
            x0_5[1] = x8_12
            *(*(arg1 + 0x38) + 8) = x0_5
            *(arg1 + 0x38) = *(x27_1 + 8)
        while (entry_result_3 != entry_result)
else
    std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_basic_reg_exp<char const*>(
        arg1, arg2)
    
    if (entry_result_2 != entry_result)
        entry_result_3 = &entry_result_2[1]
    else
        entry_result_3 = entry_result_2
    
    if (entry_result_3 != entry_result)
        goto label_f10dcc
return entry_result
