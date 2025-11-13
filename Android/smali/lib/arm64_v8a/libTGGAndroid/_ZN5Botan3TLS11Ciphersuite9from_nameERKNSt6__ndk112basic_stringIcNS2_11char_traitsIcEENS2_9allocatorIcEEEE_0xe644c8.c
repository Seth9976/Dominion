// 函数: _ZN5Botan3TLS11Ciphersuite9from_nameERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xe644c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t result
int128_t v0
int128_t v1
int128_t v2
result, v0, v1, v2 = Botan::TLS::Ciphersuite::all_known_ciphersuites()
int128_t* x25 = data_23ecc48
int64_t x26 = data_23ecc50
int128_t* entry_x8

if (x25 != x26)
    int64_t var_78
    char* result_3 = &var_78 | 1
    
    do
        v1 = x25[1]
        *entry_x8 = *x25
        entry_x8[1] = v1
        char* x22_1 = *(entry_x8 + 8)
        v0 = x25[3]
        int64_t x8 = x25[4].q
        entry_x8[2] = x25[2]
        entry_x8[3] = v0
        entry_x8[4].q = x8
        result, v0, v1, v2 = strlen(x22_1)
        
        if (result u>= -0x10)
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
            return Botan::TLS::Ciphersuite::is_usable() __tailcall
        
        size_t result_2 = result
        size_t result_4
        size_t result_1
        char* result_7
        
        if (result u>= 0x17)
            uint64_t x24_1 = (result_2 + 0x10) & 0xfffffffffffffff0
            char* result_5 = operator new(x24_1)
            result_7 = result_5
            result_4 = result_2
            result_1 = result_5
            var_78 = x24_1 | 1
            result, v0, v1, v2 = memcpy(result_7, x22_1, result_2)
        else
            result_7 = result_3
            var_78.b = (result_2.d << 1).b
            
            if (result_2 != 0)
                result, v0, v1, v2 = memcpy(result_7, x22_1, result_2)
        
        result_7[result_2] = 0
        uint64_t x8_4 = zx.q(var_78.b)
        uint64_t x10_1 = zx.q(*arg1)
        size_t i_1 = x8_4 u>> 1
        size_t i_2
        
        if ((x8_4.d & 1) == 0)
            i_2 = i_1
        else
            i_2 = result_4
        
        uint64_t x11_2
        
        if ((x10_1.d & 1) == 0)
            x11_2 = x10_1 u>> 1
        else
            x11_2 = *(arg1 + 8)
        
        if (i_2 == x11_2)
            int32_t x12_2 = x8_4.d & 1
            
            result = x12_2 == 0 ? result_3 : result_1
            
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x1_2
            
            if ((x10_1.d & 1) == 0)
                x1_2 = arg1 + 1
            else
                x1_2 = *(arg1 + 0x10)
            
            if (x12_2 != 0)
                if (i_2 == 0)
                    return operator delete(result_1)
                
                int32_t x0_5 = memcmp()
                result, v0, v1, v2 = operator delete(result_1)
                
                if (x0_5 == 0)
                    return result
            else
                char* result_6 = result_3
                
                if (i_2 == 0)
                    return result
                
                uint32_t x21_2
                uint32_t x22_2
                size_t i
                
                do
                    x21_2 = zx.d(*result_6)
                    x22_2 = zx.d(*x1_2)
                    
                    if (x21_2 != x22_2)
                        break
                    
                    i = i_1
                    i_1 -= 1
                    result_6 = &result_6[1]
                    x1_2 += 1
                while (i != 1)
                
                if ((x8_4.d & 1) != 0)
                    result, v0, v1, v2 = operator delete(result_1)
                
                if (x21_2 == x22_2)
                    return result
        else if ((x8_4.d & 1) != 0)
            result, v0, v1, v2 = operator delete(result_1)
        
        x25 += 0x48
    while (x25 != x26)

*entry_x8 = zx.o(0)
*entry_x8 = 0
__builtin_memset(entry_x8 + 8, 0, 0x40)
entry_x8[1].d = 0x10001
__builtin_memset(entry_x8 + 0x14, 0, 0x2d)
return result
