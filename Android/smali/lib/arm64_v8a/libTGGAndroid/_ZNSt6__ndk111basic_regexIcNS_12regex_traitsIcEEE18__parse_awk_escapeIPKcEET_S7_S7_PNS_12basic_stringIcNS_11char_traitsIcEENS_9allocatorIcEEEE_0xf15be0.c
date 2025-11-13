// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0xf15be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != arg3)
    uint32_t x1 = zx.d(*arg2)
    uint64_t x8_1 = zx.q(x1 - 0x22)
    int64_t entry_x3
    
    if (x8_1.d u<= 0x54)
        switch (x8_1)
            case 0, 0xd, 0x3a
                if (entry_x3 == 0)
                    std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(
                        arg1.b)
                    return &arg2[1]
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                    entry_x3.b)
                return &arg2[1]
            case 0x3f
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &arg2[1]
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[1]
            case 0x40
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &arg2[1]
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[1]
            case 0x44
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &arg2[1]
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[1]
            case 0x4c
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &arg2[1]
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[1]
            case 0x50
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &arg2[1]
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[1]
            case 0x52
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &arg2[1]
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[1]
            case 0x54
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &arg2[1]
                
                std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1
                    .b)
                return &arg2[1]
    
    if ((x1 & 0xf8) == 0x30)
        void* result = &arg2[1]
        
        if (result == arg3)
            result = arg3
        label_f15cfc:
            
            if (entry_x3 != 0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                    entry_x3.b)
                return result
        else
            if ((zx.d(*result) & 0xf8) != 0x30)
                goto label_f15cfc
            
            result = &arg2[2]
            
            if (result == arg3)
                result = arg3
                
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return result
            else
                if ((zx.d(*result) & 0xf8) != 0x30)
                    goto label_f15cfc
                
                result = &arg2[3]
                
                if (entry_x3 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return result
        
        std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
        return result

sub_f131d4()
noreturn
