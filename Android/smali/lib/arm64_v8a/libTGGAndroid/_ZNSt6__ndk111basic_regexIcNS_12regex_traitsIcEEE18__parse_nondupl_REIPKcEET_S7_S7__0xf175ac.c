// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_
// 地址: 0xf175ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_one_char_or_coll_elem_RE<char const*>(
    arg1, arg2)
void* x22 = x0
std::__ndk1::__owns_one_state<char>* entry_x2

if (x0 == arg2 && x22 != entry_x2)
    if (&arg2[1] == entry_x2 || zx.d(*arg2) != 0x5c)
        return arg2
    
    void* x22_1
    
    if (zx.d(arg2[1]) == 0x28)
        x22_1 = &arg2[2]
    else
        x22_1 = arg2
    
    if (x22_1 == arg2)
        if (zx.d(*arg2) == 0x5c)
            uint32_t x8_15 = zx.d(arg2[1])
            
            if (((x8_15 & 0xf8) == 0x30 || (x8_15 & 0xfe) == 0x38) && x8_15 - 0x31 u<= 8)
                if (x8_15 - 0x30 u> *(arg1 + 0x1c))
                    sub_f137c8()
                    noreturn
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_back_ref(
                    arg1.d)
                return &arg2[2]
        
        return arg2
    
    if ((zx.d(arg1[0x18]) & 2) == 0)
        void** x0_1 = operator new(0x18)
        void* x9_3 = *(arg1 + 0x38)
        int32_t x8_4 = *(arg1 + 0x1c) + 1
        *(arg1 + 0x1c) = x8_4
        int64_t x10_2 = *(x9_3 + 8)
        x0_1[2].d = x8_4
        *x0_1 = _vtable_for_std::__ndk1::__begin_marked_subexpression<char> + 0x10
        x0_1[1] = x10_2
        *(x9_3 + 8) = x0_1
        *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
    
    int32_t x23_1 = *(arg1 + 0x1c)
    
    while (true)
        if (x22_1 != entry_x2)
            void* x21_1 = x22_1
            uint32_t x22_2 = (*(arg1 + 0x38)).d
            int32_t x24_1 = *(arg1 + 0x1c)
            char* x0_3 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_nondupl_RE<char const*>(
                arg1, x21_1)
            
            if (x0_3 != x21_1)
                *(arg1 + 0x1c)
                void* x0_5 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_RE_dupl_symbol<char const*>(
                    arg1, x0_3, entry_x2, x22_2, x24_1 + 1)
                x22_1 = x0_5
                
                if (x0_5 != x21_1)
                    continue
            
            if (x21_1 != entry_x2 && x21_1 + 1 != entry_x2 && zx.d(*x21_1) == 0x5c)
                if (zx.d(*(x21_1 + 1)) == 0x29)
                    x22 = x21_1 + 2
                else
                    x22 = x21_1
                
                if (x22 != x21_1)
                    break
        
        sub_f11c7c()
        noreturn
    
    if ((zx.d(arg1[0x18]) & 2) == 0)
        void** x0_6 = operator new(0x18)
        void* x8_12 = *(arg1 + 0x38)
        int64_t x9_5 = *(x8_12 + 8)
        x0_6[2].d = x23_1
        *x0_6 = _vtable_for_std::__ndk1::__end_marked_subexpression<char> + 0x10
        x0_6[1] = x9_5
        *(x8_12 + 8) = x0_6
        *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)

return x22
