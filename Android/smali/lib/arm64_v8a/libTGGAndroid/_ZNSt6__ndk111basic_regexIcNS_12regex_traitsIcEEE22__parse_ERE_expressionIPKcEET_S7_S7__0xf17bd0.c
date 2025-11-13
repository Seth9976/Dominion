// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_
// 地址: 0xf17bd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = (*(arg1 + 0x38)).d
int32_t x24 = *(arg1 + 0x1c)
char* x0 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ORD_CHAR_ERE<char const*>(
    arg1, arg2)
char* x1 = x0
char* x0_2

if (x0 == arg2)
    x0_2 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_QUOTED_CHAR_ERE<char const*>(
        arg1, arg2)
    x1 = x0_2

std::__ndk1::__owns_one_state<char>* entry_x2
struct vtable_for_std::__ndk1::__r_anchor<char>* const x8_2

if (x0 == arg2 && x0_2 == arg2)
    if (arg2 == entry_x2 || zx.d(*arg2) != 0x2e)
        x1 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_bracket_expression<char const*>(
            arg1, arg2)
        
        if (x1 == arg2 && x1 != entry_x2)
            goto label_f17c30
        
        goto label_f17d7c
    
    x8_2 = _vtable_for_std::__ndk1::__match_any<char>
label_f17c88:
    void** x0_3 = operator new(0x10)
    void* x8_4 = *(arg1 + 0x38)
    int64_t x9_1 = *(x8_4 + 8)
    *x0_3 = x8_2 + 0x10
    x0_3[1] = x9_1
    *(x8_4 + 8) = x0_3
    *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
    *(arg1 + 0x1c)
    return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(
        arg1, &arg2[1], entry_x2, x20, x24 + 1) __tailcall

if (x1 != arg2 || x1 == entry_x2)
label_f17d7c:
    
    if (x1 != arg2)
        *(arg1 + 0x1c)
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(
            arg1, x1, entry_x2, x20, x24 + 1) __tailcall
else
label_f17c30:
    uint32_t x8_1 = zx.d(*arg2)
    
    if (x8_1 == 0x5e)
        x8_2 = _vtable_for_std::__ndk1::__l_anchor<char>
        goto label_f17c88
    
    if (x8_1 == 0x28)
        if ((zx.d(arg1[0x18]) & 2) == 0)
            void** x0_4 = operator new(0x18)
            void* x9_2 = *(arg1 + 0x38)
            int32_t x8_9 = *(arg1 + 0x1c) + 1
            *(arg1 + 0x1c) = x8_9
            int64_t x10_1 = *(x9_2 + 8)
            x0_4[2].d = x8_9
            *x0_4 = _vtable_for_std::__ndk1::__begin_marked_subexpression<char> + 0x10
            x0_4[1] = x10_1
            *(x9_2 + 8) = x0_4
            *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
        
        int32_t x25_1 = *(arg1 + 0x1c)
        *(arg1 + 0x24) += 1
        char* x0_6 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_extended_reg_exp<char const*>(
            arg1, &arg2[1])
        
        if (x0_6 == entry_x2 || zx.d(*x0_6) != 0x29)
            sub_f11c7c()
            noreturn
        
        if ((zx.d(arg1[0x18]) & 2) == 0)
            void** x0_7 = operator new(0x18)
            void* x8_16 = *(arg1 + 0x38)
            int64_t x9_3 = *(x8_16 + 8)
            x0_7[2].d = x25_1
            *x0_7 = _vtable_for_std::__ndk1::__end_marked_subexpression<char> + 0x10
            x0_7[1] = x9_3
            *(x8_16 + 8) = x0_7
            *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
        
        x1 = &x0_6[1]
        *(arg1 + 0x24) -= 1
        goto label_f17d7c
    
    if (x8_1 == 0x24)
        x8_2 = _vtable_for_std::__ndk1::__r_anchor<char>
        goto label_f17c88

return arg2
