// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_
// 地址: 0xf17a08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (arg2 != entry_x2)
    uint32_t x1 = zx.d(*arg2)
    
    if (&arg2[1] != entry_x2 || x1 != 0x24)
        uint64_t x8_2 = zx.q(x1 - 0x2e)
        
        if (x8_2.d u> 0x2e || (1 << x8_2 & 0x600000000001) == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &arg2[1]
        
        if (x1 == 0x5c && &arg2[1] != entry_x2)
            uint64_t x8_4 = zx.q(zx.d(arg2[1]) - 0x24)
            
            if (x8_4.d u<= 0x3a && (1 << x8_4 & 0x580000000000441) != 0)
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[2]
        
        if (zx.d(*arg2) == 0x2e)
            void** x0_4 = operator new(0x10)
            void* x8_7 = *(arg1 + 0x38)
            int64_t x9_1 = *(x8_7 + 8)
            *x0_4 = _vtable_for_std::__ndk1::__match_any<char> + 0x10
            x0_4[1] = x9_1
            *(x8_7 + 8) = x0_4
            *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
            return &arg2[1]

return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_bracket_expression<char const*>(
    arg1, arg2) __tailcall
