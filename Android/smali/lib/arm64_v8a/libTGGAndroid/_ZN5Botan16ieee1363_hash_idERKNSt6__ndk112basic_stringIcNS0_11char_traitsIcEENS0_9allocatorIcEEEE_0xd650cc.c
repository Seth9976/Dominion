// 函数: _ZN5Botan16ieee1363_hash_idERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xd650cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 != 7)
    goto label_d65124

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "SHA-160") != 0)
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_d65124:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8
    
    if (x11_1 != 5)
        goto label_d65164
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "SHA-1") != 0)
        uint64_t x10_3 = zx.q(*arg1)
        x8 = *(arg1 + 8)
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_d65164:
        uint64_t x11_2
        
        if ((x9 & 0xff) == 0)
            x11_2 = x10_1
        else
            x11_2 = x8
        
        if (x11_2 != 4)
            goto label_d651a4
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg1, 0, -ffffffffffffffff, "SHA1") != 0)
            uint64_t x10_4 = zx.q(*arg1)
            x8 = *(arg1 + 8)
            x9 = x10_4.d & 1
            x10_1 = x10_4 u>> 1
        label_d651a4:
            uint64_t x11_3
            
            if ((x9 & 0xff) == 0)
                x11_3 = x10_1
            else
                x11_3 = x8
            
            if (x11_3 == 7)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "SHA-224") == 0)
                    return 0x38
                
                uint64_t x10_5 = zx.q(*arg1)
                x8 = *(arg1 + 8)
                x9 = x10_5.d & 1
                x10_1 = x10_5 u>> 1
            
            uint64_t x11_4
            
            if ((x9 & 0xff) == 0)
                x11_4 = x10_1
            else
                x11_4 = x8
            
            if (x11_4 == 7)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "SHA-256") == 0)
                    return 0x34
                
                uint64_t x10_6 = zx.q(*arg1)
                x8 = *(arg1 + 8)
                x9 = x10_6.d & 1
                x10_1 = x10_6 u>> 1
            
            uint64_t x11_5
            
            if ((x9 & 0xff) == 0)
                x11_5 = x10_1
            else
                x11_5 = x8
            
            if (x11_5 == 7)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "SHA-384") == 0)
                    return 0x36
                
                uint64_t x10_7 = zx.q(*arg1)
                x8 = *(arg1 + 8)
                x9 = x10_7.d & 1
                x10_1 = x10_7 u>> 1
            
            uint64_t x11_6
            
            if ((x9 & 0xff) == 0)
                x11_6 = x10_1
            else
                x11_6 = x8
            
            if (x11_6 == 7)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "SHA-512") == 0)
                    return 0x35
                
                uint64_t x10_8 = zx.q(*arg1)
                x8 = *(arg1 + 8)
                x9 = x10_8.d & 1
                x10_1 = x10_8 u>> 1
            
            uint64_t x11_7
            
            if ((x9 & 0xff) == 0)
                x11_7 = x10_1
            else
                x11_7 = x8
            
            if (x11_7 == 0xa)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "RIPEMD-160") == 0)
                    return 0x31
                
                uint64_t x10_9 = zx.q(*arg1)
                x8 = *(arg1 + 8)
                x9 = x10_9.d & 1
                x10_1 = x10_9 u>> 1
            
            uint64_t x8_1
            
            if ((x9 & 0xff) == 0)
                x8_1 = x10_1
            else
                x8_1 = x8
            
            if (x8_1 != 9)
                return 0
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg1, 0, -ffffffffffffffff, "Whirlpool") == 0)
                return 0x37
            
            return 0

return 0x33
