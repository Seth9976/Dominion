// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0xf13404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* result = arg2

if (arg2 == arg3)
    return result

uint64_t x1 = zx.q(*result)
uint64_t x8_1 = zx.q(x1.d - 0x30)
int64_t entry_x3

if (x8_1.d u> 0x48)
label_f1344c:
    
    if ((x1.d & 0x80) == 0 && (*(*(*(arg1 + 8) + 0x10) + (x1 << 3)) & 0x60) != 0)
        sub_f131d4()
        noreturn
    
    if (entry_x3 == 0)
        std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
        return &result[1]
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
        entry_x3.b)
    return &result[1]

switch (x8_1)
    case 0
        if (entry_x3 == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &result[1]
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
            entry_x3.b)
        return &result[1]
    case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
            0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
            0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x30, 0x31, 
            0x32, 0x34, 0x35, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3f, 0x40, 0x41, 0x43, 0x47
        goto label_f1344c
    case 0x2f
        sub_f131d4()
        noreturn
    case 0x33
        if (&result[1] == arg3 || zx.d((result[1] & 0xdf) - 0x41) u> 0x19)
            sub_f131d4()
            noreturn
        
        if (entry_x3 == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &result[2]
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
            entry_x3.b)
        return &result[2]
    case 0x36
        if (entry_x3 == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &result[1]
    case 0x3e
        if (entry_x3 == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &result[1]
    case 0x42
        if (entry_x3 == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &result[1]
    case 0x44
        if (entry_x3 == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &result[1]
    case 0x45
        if (&result[1] == arg3)
            sub_f131d4()
            noreturn
        
        uint32_t x8_8 = zx.d(result[1])
        
        if ((x8_8 & 0xf8) != 0x30 && (x8_8 & 0xfe) != 0x38 && zx.d((x8_8.b | 0x20) - 0x61) u>= 6)
            sub_f131d4()
            noreturn
        
        result = &result[2]
        
        if (result == arg3)
            sub_f131d4()
            noreturn
        
        uint32_t x8_12 = zx.d(*result)
        
        if ((x8_12 & 0xf8) == 0x30 || (x8_12 & 0xfe) == 0x38)
            goto label_f13560
        
        if (zx.d((x8_12.b | 0x20) - 0x61) u< 6 && &result[1] != arg3)
            goto label_f13568
        
        sub_f131d4()
        noreturn
    case 0x46
        if (entry_x3 == 0)
            std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(arg1.b)
            return &result[1]
    case 0x48
    label_f13560:
        
        if (&result[1] == arg3)
            sub_f131d4()
            noreturn
        
    label_f13568:
        uint32_t x8_17 = zx.d(result[1])
        void* x9_10
        
        if ((x8_17 & 0xf8) == 0x30 || (x8_17 & 0xfe) == 0x38)
            x9_10 = &result[2]
            
            if (x9_10 != arg3)
            label_f135dc:
                uint32_t x9_13 = zx.d(*x9_10)
                
                if ((x9_13 & 0xf8) == 0x30 || (x9_13 & 0xfe) == 0x38)
                    if (entry_x3 == 0)
                        std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(
                            arg1.b)
                        return &result[3]
                    
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                        entry_x3.b)
                    return &result[3]
                
                if (zx.d((x9_13 | 0x20).b - 0x61) u<= 5)
                    if (entry_x3 != 0)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                            entry_x3.b)
                        return &result[3]
                    
                    std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(
                        arg1.b)
                    return &result[3]
        else if (zx.d((x8_17 | 0x20).b - 0x61) u<= 5)
            x9_10 = &result[2]
            
            if (x9_10 != arg3)
                goto label_f135dc
        sub_f131d4()
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
    entry_x3.b)
return &result[1]
