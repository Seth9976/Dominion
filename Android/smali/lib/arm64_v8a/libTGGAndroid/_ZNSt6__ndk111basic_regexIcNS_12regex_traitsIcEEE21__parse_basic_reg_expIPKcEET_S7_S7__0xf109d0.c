// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_
// 地址: 0xf109d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x22 = arg2
std::__ndk1::__owns_one_state<char>* entry_x2

if (arg2 == entry_x2)
    return x22

if (zx.d(*x22) == 0x5e)
    void** x0 = operator new(0x10)
    void* x8_2 = *(arg1 + 0x38)
    x22 = &x22[1]
    int64_t x9_1 = *(x8_2 + 8)
    *x0 = _vtable_for_std::__ndk1::__l_anchor<char> + 0x10
    x0[1] = x9_1
    *(x8_2 + 8) = x0
    *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)

if (x22 != entry_x2)
    while (x22 != entry_x2)
        char const* x21_1 = x22
        uint32_t x22_1 = (*(arg1 + 0x38)).d
        int32_t x23_1 = *(arg1 + 0x1c)
        char* x0_2 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_nondupl_RE<char const*>(
            arg1, x21_1)
        
        if (x0_2 != x21_1)
            *(arg1 + 0x1c)
            char* x0_4 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_RE_dupl_symbol<char const*>(
                arg1, x0_2, entry_x2, x22_1, x23_1 + 1)
            x22 = x0_4
            
            if (x0_4 != x21_1)
                continue
        
        if (&x21_1[1] != entry_x2 || zx.d(*x21_1) != 0x24)
            if (x21_1 != entry_x2)
                sub_f17564()
                noreturn
            
            break
        
        void** x0_5 = operator new(0x10)
        void* x8_8 = *(arg1 + 0x38)
        int64_t x9_2 = *(x8_8 + 8)
        *x0_5 = _vtable_for_std::__ndk1::__r_anchor<char> + 0x10
        x0_5[1] = x9_2
        *(x8_8 + 8) = x0_5
        *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
        break

return entry_x2
