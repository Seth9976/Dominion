// 函数: _ZNK5Botan3TLS16Protocol_Version9to_stringEv
// 地址: 0xe47028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* entry_x0
uint32_t x20 = zx.d(*entry_x0)
uint64_t result = zx.q(x20 u>> 8)
char* entry_x8

if ((x20 & 0xff) == 0 && result.d == 3)
    *entry_x8 = 0xc
    __builtin_strncpy(&entry_x8[1], "SSL v3", 7)
    return result

int128_t var_40
int128_t v0_1

if ((x20 & 0xff) == 0 || result.d != 3)
    if (result.d != 0xfe)
        std::__ndk1::to_string(result.d)
        char var_78
        int128_t* x0_6
        int128_t v0_2
        x0_6, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_78, nullptr)
        void* x8_4 = x0_6[1].q
        int128_t var_60 = *x0_6
        __builtin_memset(x0_6, 0, 0x18)
        int128_t* x0_8
        int128_t v0_3
        x0_8, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_60)
        void* x8_5 = x0_8[1].q
        var_40 = *x0_8
        __builtin_memset(x0_8, 0, 0x18)
        std::__ndk1::to_string(x20 & 0xff)
        char var_90
        void* var_80
        void* x1_2
        
        if ((zx.d(var_90) & 1) == 0)
            x1_2 = &var_90 | 1
        else
            x1_2 = var_80
        
        int128_t v0_4
        result, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_40, x1_2)
        v0_4 = *result
        *(entry_x8 + 0x10) = *(result + 0x10)
        *entry_x8 = v0_4
        __builtin_memset(result, 0, 0x18)
        
        if ((zx.d(var_90) & 1) == 0)
            if ((zx.d(var_40.b) & 1) != 0)
                goto label_e471ec
            
            goto label_e471bc
        
        result = operator delete(var_80)
        void* var_68
        
        if ((zx.d(var_40.b) & 1) == 0)
        label_e471bc:
            
            if ((zx.d(var_60.b) & 1) == 0)
            label_e471c4:
                
                if ((zx.d(var_78) & 1) == 0)
                    return result
                
                return operator delete(var_68)
        else
        label_e471ec:
            result = operator delete(x8_5)
            
            if ((zx.d(var_60.b) & 1) == 0)
                goto label_e471c4
        
        result = operator delete(x8_4)
        
        if ((zx.d(var_78) & 1) == 0)
            return result
        
        return operator delete(var_68)
    
    std::__ndk1::to_string(zx.d((not.d(x20)).b))
    result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_40, nullptr)
else
    std::__ndk1::to_string((x20 & 0xff) - 1)
    result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_40, nullptr)

v0_1 = *result
*(entry_x8 + 0x10) = *(result + 0x10)
*entry_x8 = v0_1
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_40.b) & 1) == 0)
    return result

void* var_30
return operator delete(var_30)
