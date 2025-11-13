// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj
// 地址: 0xf177a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != arg3)
    uint32_t x8_1 = zx.d(*arg2)
    bool entry_x5
    
    if (x8_1 == 0x2a)
        std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 0, 
            -ffffffffffffffff, arg4, zx.q(arg5), entry_x5)
        return &arg2[1]
    
    if (&arg2[1] != arg3 && x8_1 == 0x5c)
        uint32_t x8_2 = zx.d(arg2[1])
        char const* x9_3
        
        if (x8_2 == 0x7b)
            x9_3 = &arg2[2]
        else
            x9_3 = arg2
        
        if (x9_3 != arg2)
            if (x9_3 != arg3)
                uint32_t x8_5 = zx.d(arg2[zx.q(x8_2 == 0x7b ? 1 : 0) << 1])
                
                if ((x8_5 & 0xf8) == 0x30 || (x8_5 & 0xfe) == 0x38)
                    void* x10_3 = &x9_3[1]
                    int32_t x8_6 = x8_5 - 0x30
                    
                    if (x10_3 == arg3)
                    label_f17894:
                        x10_3 = arg3
                    else
                        while (true)
                            uint32_t x13_1 = zx.d(*x10_3)
                            
                            if ((x13_1 & 0xf8) != 0x30 && (x13_1 & 0xfe) != 0x38)
                                break
                            
                            if (x8_6 s>= 0xccccccc)
                                goto label_f17a04
                            
                            x10_3 += 1
                            x8_6 = x13_1 + x8_6 * 0xa - 0x30
                            
                            if (arg3 == x10_3)
                                goto label_f17894
                    
                    if (x10_3 != x9_3)
                        if (x10_3 == arg3)
                        label_f179dc:
                            sub_f17118()
                            noreturn
                        
                        uint32_t x11_1 = zx.d(*x10_3)
                        void* x9_5 = x10_3 + 1
                        
                        if (x11_1 != 0x2c)
                            if (x9_5 != arg3 && x11_1 == 0x5c)
                                void* x19_2
                                
                                if (zx.d(*(x10_3 + 1)) == 0x7d)
                                    x19_2 = x10_3 + 2
                                else
                                    x19_2 = x10_3
                                
                                if (x19_2 != x10_3)
                                    uint64_t x1_1 = sx.q(x8_6)
                                    std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(
                                        arg1, x1_1, x1_1, arg4, zx.q(arg5), entry_x5)
                                    return x19_2
                            
                            goto label_f179dc
                        
                        if (x9_5 == arg3)
                            goto label_f179dc
                        
                        uint32_t x12_1 = zx.d(*x9_5)
                        int32_t x10_4
                        
                        if ((x12_1 & 0xf8) == 0x30 || (x12_1 & 0xfe) == 0x38)
                            x9_5 = x10_3 + 2
                            
                            if (x9_5 == arg3)
                                goto label_f179dc
                            
                            x10_4 = x12_1 - 0x30
                            
                            while (true)
                                uint32_t x13_2 = zx.d(*x9_5)
                                
                                if ((x13_2 & 0xf8) != 0x30 && (x13_2 & 0xfe) != 0x38)
                                    break
                                
                                if (x10_4 s>= 0xccccccc)
                                    goto label_f17a04
                                
                                x9_5 += 1
                                x10_4 = x13_2 + x10_4 * 0xa - 0x30
                                
                                if (arg3 == x9_5)
                                    goto label_f179dc
                        else
                            x10_4 = -1
                        
                        if (x9_5 == arg3 || x9_5 + 1 == arg3 || zx.d(*x9_5) != 0x5c)
                            goto label_f179dc
                        
                        void* x19_1
                        
                        if (zx.d(*(x9_5 + 1)) == 0x7d)
                            x19_1 = x9_5 + 2
                        else
                            x19_1 = x9_5
                        
                        if (x19_1 == x9_5)
                            goto label_f179dc
                        
                        if (x10_4 == 0xffffffff)
                            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(
                                arg1, sx.q(x8_6), -ffffffffffffffff, arg4, zx.q(arg5), entry_x5)
                            return x19_1
                        
                        if (x10_4 s>= x8_6)
                            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(
                                arg1, sx.q(x8_6), sx.q(x10_4), arg4, zx.q(arg5), entry_x5)
                            return x19_1
            
        label_f17a04:
            sub_f170d0()
            noreturn

return arg2
