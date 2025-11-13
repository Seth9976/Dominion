// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_
// 地址: 0xf17e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x2

if (arg2 != entry_x2 && &arg2[1] != entry_x2 && zx.d(*arg2) == 0x5c)
    uint32_t x1 = zx.d(arg2[1])
    uint64_t x9_2 = zx.q(x1 - 0x24)
    
    if (x9_2.d u> 0x59)
    label_f17ebc:
        
        if ((*(arg1 + 0x18) & 0x1f0) == 0x40)
            return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_awk_escape<char const*>(
                arg1, &arg2[1], entry_x2) __tailcall
        
        if (((x1 & 0xf8) == 0x30 || (x1 & 0xfe) == 0x38) && x1 - 0x31 u<= 8)
            if (x1 - 0x30 u> *(arg1 + 0x1c))
                sub_f137c8()
                noreturn
            
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_back_ref(arg1
                .d)
            return &arg2[2]
    else
        switch (x9_2)
            case 0, 4, 5, 6, 7, 0xa, 0x1b, 0x37, 0x38, 0x3a, 0x57, 0x58, 0x59
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[2]
            case 1, 2, 3, 8, 9, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                    0x17, 0x18, 0x19, 0x1a, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                    0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
                    0x32, 0x33, 0x34, 0x35, 0x36, 0x39, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 
                    0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 
                    0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56
                goto label_f17ebc

return arg2
