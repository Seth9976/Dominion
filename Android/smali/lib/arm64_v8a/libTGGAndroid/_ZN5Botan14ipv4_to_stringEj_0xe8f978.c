// 函数: _ZN5Botan14ipv4_to_stringEj
// 地址: 0xe8f978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int32_t x22 = 0
int64_t x23 = 0

while (true)
    uint8_t x8_2
    
    if (x23 == 0)
        x8_2 = (arg1 u>> 0x18).b
    else
        if (x23 == 4)
            return 
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8)
        x8_2 = (arg1 u>> (not.d(x22) & 0x18)).b
    
    std::__ndk1::to_string(zx.d(x8_2))
    char var_58
    uint64_t var_48
    uint64_t x1_2
    
    if ((zx.d(var_58) & 1) == 0)
        x1_2 = &var_58 | 1
    else
        x1_2 = var_48
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        entry_x8, x1_2)
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
    
    x23 += 1
    x22 += 8
