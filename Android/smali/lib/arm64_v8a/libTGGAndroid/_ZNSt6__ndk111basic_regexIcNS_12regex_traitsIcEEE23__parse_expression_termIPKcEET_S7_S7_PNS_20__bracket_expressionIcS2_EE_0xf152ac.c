// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE
// 地址: 0xf152ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x20 = arg2

if (arg2 != arg3)
    uint32_t x10_1 = zx.d(*x20)
    
    if (x10_1 != 0x5d)
        void* entry_x3
        void* x19_1 = entry_x3
        uint32_t x8_1 = 0
        uint64_t x9_1 = 0
        int64_t var_58
        __builtin_memset(&var_58, 0, 0x18)
        
        if (&x20[1] == arg3 || x10_1 != 0x5b)
            goto label_f153dc
        
        uint32_t x8_2 = zx.d(x20[1])
        void* var_48
        int32_t x21_2
        int16_t var_70
        
        if (x8_2 == 0x2e)
            char* x0_3 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_collating_symbol<char const*>(
                arg1, &x20[2], arg3)
            x8_1 = zx.d(var_58.b)
            uint64_t var_50
            x9_1 = var_50
            x20 = x0_3
        label_f153dc:
            void* x25_1 = zx.q(*(arg1 + 0x18))
            uint64_t x8_4
            
            if ((x8_1 & 1) == 0)
                x8_4 = zx.q(x8_1 u>> 1)
            else
                x8_4 = x9_1
            
            int64_t x24_1 = zx.q(x25_1.d) & 0x1f0
            char* x23_2
            
            if (x8_4 == 0)
                if ((x25_1.d & 0x1b0) != 0 || zx.d(*x20) != 0x5c)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        &var_58)
                    x23_2 = &x20[1]
                    
                    if (x23_2 != arg3)
                        goto label_f154b0
                    
                    goto label_f154bc
                
                char* x0_5
                
                if (x24_1.d == 0)
                    x0_5 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_class_escape<char const*>(
                        arg1, &x20[1], arg3, &var_58)
                else
                    x0_5 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_awk_escape<char const*>(
                        arg1, &x20[1], arg3)
                
                x23_2 = x0_5
                
                if (x23_2 == arg3)
                    goto label_f154bc
                
                goto label_f154b0
            
            x23_2 = x20
            
            if (x23_2 != arg3)
            label_f154b0:
                uint32_t x9_3 = zx.d(*x23_2)
                
                if (x9_3 == 0x5d)
                    goto label_f154bc
                
                if (&x23_2[1] == arg3 || x9_3 != 0x2d || zx.d(x23_2[1]) == 0x5d)
                    uint32_t x8_13 = zx.d(var_58.b)
                    
                    if ((x8_13 & 1) != 0)
                        if (var_50 != 0)
                            if (var_50 != 1)
                                sub_f161e8(x19_1, zx.d(*var_48), zx.d(*(var_48 + 1)), x24_1, x25_1)
                            else
                                sub_f13f08(x19_1, zx.d(*var_48))
                    else if (x8_13 u>= 2)
                        void* x8_15 = &var_58 | 1
                        
                        if ((x8_13 & 0xfe) == 2)
                            sub_f13f08(x19_1, zx.d(*x8_15))
                        else
                            sub_f161e8(x19_1, zx.d(*x8_15), zx.d(*(x8_15 + 1)), x24_1, x25_1)
                    
                    x21_2 = 1
                    x20 = x23_2
                else
                    x20 = &x23_2[2]
                    __builtin_memset(&var_70, 0, 0x18)
                    int128_t v0_1
                    int128_t v1_1
                    char* x0_14
                    
                    if (x20 != arg3 && zx.d(x23_2[1]) == 0x5b && zx.d(*x20) == 0x2e)
                        x0_14, v0_1, v1_1 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_collating_symbol<char const*>(
                            arg1, &x23_2[3], arg3)
                        x20 = x0_14
                    else if ((x25_1.d & 0x1b0) != 0 || zx.d(x23_2[1]) != 0x5c)
                        v0_1, v1_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                            &var_70)
                    else
                        if (x24_1.d == 0)
                            x0_14, v0_1, v1_1 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_class_escape<char const*>(
                                arg1, x20, arg3, &var_70)
                        else
                            x0_14, v0_1, v1_1 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_awk_escape<char const*>(
                                arg1, x20, arg3)
                        
                        x20 = x0_14
                    v0_1 = var_58.o
                    v1_1 = var_70.o
                    __builtin_memset(&var_70, 0, 0x30)
                    int128_t var_90 = v0_1
                    int128_t var_b0 = v1_1
                    sub_f15d38(x19_1, &var_90, &var_b0)
                    
                    if ((zx.d(var_b0.b) & 1) == 0)
                        if ((zx.d(var_90.b) & 1) != 0)
                            goto label_f156f4
                        
                        goto label_f156cc
                    
                    void* var_60
                    operator delete(var_60)
                    void* var_60_1
                    
                    if ((zx.d(var_90.b) & 1) == 0)
                    label_f156cc:
                        
                        if ((zx.d(var_70.b) & 1) != 0)
                            operator delete(var_60_1)
                    else
                    label_f156f4:
                        operator delete(var_48)
                        
                        if ((zx.d(var_70.b) & 1) != 0)
                            operator delete(var_60_1)
                    x21_2 = 1
            else
            label_f154bc:
                uint32_t x8_8 = zx.d(var_58.b)
                
                if ((x8_8 & 1) != 0)
                    if (var_50 != 0)
                        if (var_50 != 1)
                            sub_f161e8(x19_1, zx.d(*var_48), zx.d(*(var_48 + 1)), x24_1, x25_1)
                        else
                            sub_f13f08(x19_1, zx.d(*var_48))
                else if (x8_8 u>= 2)
                    void* x8_10 = &var_58 | 1
                    
                    if ((x8_8 & 0xfe) == 2)
                        sub_f13f08(x19_1, zx.d(*x8_10))
                    else
                        sub_f161e8(x19_1, zx.d(*x8_10), zx.d(*(x8_10 + 1)), x24_1, x25_1)
                
                x21_2 = 1
                x20 = x23_2
        else if (x8_2 == 0x3a)
            var_70 = 0x5d3a
            
            if (arg3 - &x20[2] s< 2 || arg3 - 1 == &x20[2])
            label_f15704:
                sub_f15264()
                noreturn
            
            void* x23_1 = &x20[2]
            
            while (zx.d(*x23_1) != 0x3a)
            label_f15374:
                x23_1 += 1
                
                if (x23_1 == arg3 - 1)
                    goto label_f15704
            
            int64_t i = 1
            
            while (i != 2)
                uint32_t x11_2 = zx.d(*(x23_1 + i))
                uint32_t x12_1 = zx.d(*(&var_70 + i))
                i += 1
                
                if (x11_2 != x12_1)
                    goto label_f15374
            
            if (x23_1 == arg3)
                goto label_f15704
            
            int16_t x0_8 = std::__ndk1::regex_traits<char>::__lookup_classname<char const*>(arg1, 
                &x20[2], x23_1.b, (*(arg1 + 0x18)).b & 1)
            
            if (zx.d(x0_8) == 0)
                sub_f167c4()
                noreturn
            
            x21_2 = 0
            *(x19_1 + 0xa0) |= x0_8
            x19_1 = x23_1 + 2
        else
            if (x8_2 != 0x3d)
                x9_1 = 0
                x8_1 = 0
                goto label_f153dc
            
            x19_1 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_equivalence_class<char const*>(
                arg1, &x20[2], arg3)
            x21_2 = 0
        
        if ((zx.d(var_58.b) & 1) != 0)
            operator delete(var_48)
        
        if ((x21_2 & 1) == 0)
            return x19_1

return x20
