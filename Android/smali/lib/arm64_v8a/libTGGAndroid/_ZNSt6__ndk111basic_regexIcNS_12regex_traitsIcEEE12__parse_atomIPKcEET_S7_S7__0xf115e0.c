// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_
// 地址: 0xf115e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x2

if (arg2 == entry_x2)
    return arg2

uint32_t x9_1 = zx.d(*arg2)
uint64_t x8_1 = zx.q(x9_1 - 0x28)

if (x8_1.d u> 0x34)
    if (x9_1 != 0x7b)
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_pattern_character<char const*>(
            arg1, arg2) __tailcall
    
    sub_f130fc()
    noreturn

switch (x8_1)
    case 0
        if (&arg2[1] == entry_x2)
            sub_f11c7c()
            noreturn
        
        char const* x21
        void* x23_2
        
        if (&arg2[2] == entry_x2 || zx.d(arg2[1]) != 0x3f || zx.d(arg2[2]) != 0x3a)
            if ((zx.d(arg1[0x18]) & 2) == 0)
                void** x0_6 = operator new(0x18)
                void* x9_5 = *(arg1 + 0x38)
                int32_t x8_14 = *(arg1 + 0x1c) + 1
                *(arg1 + 0x1c) = x8_14
                int64_t x10_4 = *(x9_5 + 8)
                x0_6[2].d = x8_14
                *x0_6 = _vtable_for_std::__ndk1::__begin_marked_subexpression<char> + 0x10
                x0_6[1] = x10_4
                *(x9_5 + 8) = x0_6
                *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
            
            int32_t x24_1 = *(arg1 + 0x1c)
            x23_2 = &arg1[0x24]
            *x23_2 += 1
            char* x0_8 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ecma_exp<char const*>(
                arg1, &arg2[1])
            
            if (x0_8 == entry_x2)
                sub_f11c7c()
                noreturn
            
            x21 = x0_8
            
            if (zx.d(*x0_8) != 0x29)
                sub_f11c7c()
                noreturn
            
            if ((zx.d(arg1[0x18]) & 2) == 0)
                void** x0_9 = operator new(0x18)
                void* x8_21 = *(arg1 + 0x38)
                int64_t x9_6 = *(x8_21 + 8)
                x0_9[2].d = x24_1
                *x0_9 = _vtable_for_std::__ndk1::__end_marked_subexpression<char> + 0x10
                x0_9[1] = x9_6
                *(x8_21 + 8) = x0_9
                *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
            
            *x23_2 -= 1
        else
            x23_2 = &arg1[0x24]
            *x23_2 += 1
            char* x0_1 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ecma_exp<char const*>(
                arg1, &arg2[3])
            
            if (x0_1 == entry_x2)
                sub_f11c7c()
                noreturn
            
            x21 = x0_1
            
            if (zx.d(*x0_1) != 0x29)
                sub_f11c7c()
                noreturn
            
            *x23_2 -= 1
        return &x21[1]
    case 1, 4, 5, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
            0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
            0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_pattern_character<char const*>(
            arg1, arg2) __tailcall
    case 2, 3, 0x17
        sub_f130fc()
        noreturn
    case 6
        void** x0_2 = operator new(0x10)
        void* x8_7 = *(arg1 + 0x38)
        int64_t x9_3 = *(x8_7 + 8)
        *x0_2 = _vtable_for_std::__ndk1::__match_any_but_newline<char> + 0x10
        x0_2[1] = x9_3
        *(x8_7 + 8) = x0_2
        *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
        return &arg2[1]
    case 0x33
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_bracket_expression<char const*>(
            arg1, arg2) __tailcall
    case 0x34
        if (&arg2[1] == entry_x2)
            sub_f131d4()
            noreturn
        
        uint32_t x8_11 = zx.d(arg2[1])
        int32_t x1_3 = x8_11 - 0x30
        
        if (x8_11 == 0x30)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &arg2[2]
        
        char const* x23_3
        
        if (x8_11 - 0x31 u> 8)
        label_f118b4:
            char* x0_15 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_character_class_escape<char const*>(
                arg1, &arg2[1])
            x23_3 = x0_15
            
            if (x0_15 == &arg2[1])
                char* x0_17 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_character_escape<char const*>(
                    arg1, &arg2[1], entry_x2)
                
                if (x0_17 == &arg2[1])
                    return arg2
                
                return x0_17
        else
            x23_3 = &arg2[2]
            
            if (x23_3 == entry_x2)
                x23_3 = entry_x2
                
                if (x1_3 u> *(arg1 + 0x1c))
                label_f118ec:
                    sub_f137c8()
                    noreturn
            else
                while (true)
                    uint32_t x10_7 = zx.d(*x23_3)
                    
                    if (x10_7 - 0x30 u> 9)
                        break
                    
                    if (x1_3 u>= 0x19999999)
                        goto label_f118ec
                    
                    x23_3 = &x23_3[1]
                    x1_3 = x10_7 + x1_3 * 0xa - 0x30
                    
                    if (entry_x2 == x23_3)
                        x23_3 = entry_x2
                        break
                
                if (x1_3 == 0 || x1_3 u> *(arg1 + 0x1c))
                    goto label_f118ec
            
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_back_ref(arg1
                .d)
            
            if (x23_3 == &arg2[1])
                goto label_f118b4
        
        return x23_3
