// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE
// 地址: 0xf1579c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_24 = 0x5d3d

if (arg3 - arg2 s>= 2 && arg3 - 1 != arg2)
    char const* i = arg2
    
    do
        if (zx.d(*i) == 0x3d)
            int64_t x10_2 = 1
            
            while (true)
                if (x10_2 == 2)
                    if (i == arg3)
                        break
                    
                    std::__ndk1::regex_traits<char>::__lookup_collatename<char const*>(arg1, arg2, 
                        i.b)
                    char var_40
                    uint64_t x8_2 = zx.q(var_40)
                    uint64_t var_38
                    void* var_30
                    void* x1
                    uint64_t x8_3
                    
                    if ((x8_2.d & 1) != 0)
                        x8_3 = var_38
                        
                        if (x8_3 == 0)
                            sub_f1634c()
                            noreturn
                        
                        x1 = var_30
                    else
                        if (x8_2.d u< 2)
                            sub_f1634c()
                            noreturn
                        
                        x1 = &var_40 | 1
                        x8_3 = x8_2 u>> 1
                    
                    std::__ndk1::regex_traits<char>::__transform_primary<std::__ndk1::__wrap_iter<char*> >(
                        arg1, x1, x1.b + x8_3.b)
                    char var_58
                    uint64_t x8_4 = zx.q(var_58)
                    uint64_t x8_5
                    uint64_t var_50
                    
                    if ((x8_4.d & 1) == 0)
                        x8_5 = x8_4 u>> 1
                    else
                        x8_5 = var_50
                    void* entry_x3
                    
                    if (x8_5 == 0)
                        uint64_t x8_8 = zx.q(var_40)
                        uint64_t x9_3
                        
                        if ((x8_8.d & 1) == 0)
                            x9_3 = x8_8 u>> 1
                        else
                            x9_3 = var_38
                        
                        if (x9_3 == 2)
                            int32_t temp0_1 = x8_8.d & 1
                            void* x8_11
                            
                            if (temp0_1 == 0)
                                x8_11 = &var_40 | 1
                            else
                                x8_11 = var_30
                            
                            void* x9_6
                            
                            if (temp0_1 == 0)
                                x9_6 = &var_40 | 2
                            else
                                x9_6 = var_30 + 1
                            
                            int64_t x24
                            void* x25
                            sub_f161e8(entry_x3, zx.d(*x8_11), zx.d(*x9_6), x24, x25)
                        else
                            if (x9_3 != 1)
                                sub_f1634c()
                                noreturn
                            
                            void* x8_9
                            
                            if ((x8_8.d & 1) == 0)
                                x8_9 = &var_40 | 1
                            else
                                x8_9 = var_30
                            
                            sub_f13f08(entry_x3, zx.d(*x8_9))
                    else
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            * x21_2 = *(entry_x3 + 0x90)
                        
                        if (x21_2 == *(entry_x3 + 0x98))
                            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                                entry_x3 + 0x88)
                        else
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                x21_2)
                            *(entry_x3 + 0x90) = x21_2 + 0x18
                    void* var_48
                    
                    if ((zx.d(var_58) & 1) != 0)
                        operator delete(var_48)
                    
                    if ((zx.d(var_40) & 1) != 0)
                        operator delete(var_30)
                    
                    return &i[2]
                
                uint32_t x11_1 = zx.d(i[x10_2])
                uint32_t x12_1 = zx.d(*(&var_24 + x10_2))
                x10_2 += 1
                
                if (x11_1 != x12_1)
                    goto label_f157dc
            
            break
        
    label_f157dc:
        i = &i[1]
    while (i != arg3 - 1)

sub_f15264()
noreturn
