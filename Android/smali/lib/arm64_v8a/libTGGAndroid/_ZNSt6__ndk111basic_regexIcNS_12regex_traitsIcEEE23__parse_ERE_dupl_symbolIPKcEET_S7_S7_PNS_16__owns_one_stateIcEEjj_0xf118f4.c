// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj
// 地址: 0xf118f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != arg3)
    uint32_t x9_1 = zx.d(*arg2)
    int32_t x8_2 = *(arg1 + 0x18) & 0x1f0
    std::__ndk1::__owns_one_state<char>* x2
    uint64_t x4
    bool entry_x5
    bool x5
    void* x19_1
    void* x19_4
    
    if (x9_1 == 0x3f)
        x19_4 = &arg2[1]
        
        if (x19_4 == arg3 || x8_2 != 0 || zx.d(*x19_4) != 0x3f)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 0, 
                1, arg4, zx.q(arg5), entry_x5)
            return x19_4
        
        x19_1 = &arg2[2]
        x4 = zx.q(arg5)
        x5 = entry_x5
        x2 = 1
    label_f11aac:
        std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 0, x2, 
            arg4, x4, x5)
        return x19_1
    
    uint64_t x1
    uint64_t x1_1
    uint64_t x4_1
    bool x5_1
    void* x19
    
    if (x9_1 == 0x7b)
        if (&arg2[1] == arg3)
        label_f11c74:
            sub_f170d0()
            noreturn
        
        uint32_t x9_2 = zx.d(arg2[1])
        
        if ((x9_2 & 0xf8) != 0x30 && (x9_2 & 0xfe) != 0x38)
            goto label_f11c74
        
        void* x10_3 = &arg2[2]
        int32_t x9_3 = x9_2 - 0x30
        
        if (x10_3 == arg3)
        label_f119e4:
            x10_3 = arg3
        else
            while (true)
                uint32_t x14_1 = zx.d(*x10_3)
                
                if ((x14_1 & 0xf8) != 0x30 && (x14_1 & 0xfe) != 0x38)
                    break
                
                if (x9_3 s>= 0xccccccc)
                    goto label_f11c74
                
                x10_3 += 1
                x9_3 = x14_1 + x9_3 * 0xa - 0x30
                
                if (arg3 == x10_3)
                    goto label_f119e4
        
        if (x10_3 == &arg2[1])
            goto label_f11c74
        
        if (x10_3 == arg3)
            sub_f17118()
            noreturn
        
        uint32_t x11_2 = zx.d(*x10_3)
        
        if (x11_2 != 0x2c)
            if (x11_2 != 0x7d)
                goto label_f11c74
            
            if (x8_2 != 0 || x10_3 + 1 == arg3 || zx.d(*(x10_3 + 1)) != 0x3f)
                uint64_t x1_2 = sx.q(x9_3)
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 
                    x1_2, x1_2, arg4, zx.q(arg5), entry_x5)
                return x10_3 + 1
            
            x1 = sx.q(x9_3)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, x1, 
                x1, arg4, zx.q(arg5), entry_x5)
            return x10_3 + 2
        
        if (x10_3 + 1 == arg3)
            goto label_f11c74
        
        uint32_t x13_1 = zx.d(*(x10_3 + 1))
        
        if (x13_1 == 0x7d)
            x19 = x10_3 + 2
            
            if (x8_2 != 0 || x19 == arg3 || zx.d(*x19) != 0x3f)
                x1_1 = sx.q(x9_3)
                x4_1 = zx.q(arg5)
                x5_1 = entry_x5
                goto label_f11ad0
            
            x19_1 = x10_3 + 3
            x1 = sx.q(x9_3)
            x4 = zx.q(arg5)
            x5 = entry_x5
            goto label_f11950
        
        if ((x13_1 & 0xf8) != 0x30 && (x13_1 & 0xfe) != 0x38)
            sub_f17118()
            noreturn
        
        void* x11_5 = x10_3 + 2
        int32_t x10_4 = x13_1 - 0x30
        
        if (x11_5 == arg3)
        label_f11bf4:
            x11_5 = arg3
        else
            while (true)
                uint32_t x15_3 = zx.d(*x11_5)
                
                if ((x15_3 & 0xf8) != 0x30 && (x15_3 & 0xfe) != 0x38)
                    break
                
                if (x10_4 s>= 0xccccccc)
                    goto label_f11c74
                
                x11_5 += 1
                x10_4 = x15_3 + x10_4 * 0xa - 0x30
                
                if (arg3 == x11_5)
                    goto label_f11bf4
        
        if (x11_5 == x10_3 + 1 || x11_5 == arg3 || zx.d(*x11_5) != 0x7d)
            sub_f17118()
            noreturn
        
        if (x10_4 s< x9_3)
            goto label_f11c74
        
        x19 = x11_5 + 1
        
        if (x8_2 != 0 || x19 == arg3 || zx.d(*x19) != 0x3f)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 
                sx.q(x9_3), sx.q(x10_4), arg4, zx.q(arg5), entry_x5)
            return x19
        
        std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 
            sx.q(x9_3), sx.q(x10_4), arg4, zx.q(arg5), entry_x5)
        return x11_5 + 2
    
    if (x9_1 == 0x2a)
        x19_4 = &arg2[1]
        
        if (x19_4 == arg3 || x8_2 != 0 || zx.d(*x19_4) != 0x3f)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 0, 
                -ffffffffffffffff, arg4, zx.q(arg5), entry_x5)
            return x19_4
        
        x19_1 = &arg2[2]
        x4 = zx.q(arg5)
        x5 = entry_x5
        x2 = -ffffffffffffffff
        goto label_f11aac
    
    if (x9_1 == 0x2b)
        x19 = &arg2[1]
        
        if (x19 == arg3 || x8_2 != 0 || zx.d(*x19) != 0x3f)
            x4_1 = zx.q(arg5)
            x5_1 = entry_x5
            x1_1 = 1
        label_f11ad0:
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, 
                x1_1, -ffffffffffffffff, arg4, x4_1, x5_1)
            return x19
        
        x19_1 = &arg2[2]
        x4 = zx.q(arg5)
        x5 = entry_x5
        x1 = 1
    label_f11950:
        std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(arg1, x1, 
            -ffffffffffffffff, arg4, x4, x5)
        return x19_1

return arg2
