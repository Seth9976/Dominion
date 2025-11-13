// 函数: _ZNK5Botan9Roughtime5Chain9to_stringEv
// 地址: 0xe0887c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* entry_x0
entry_x0[1] - *entry_x0
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::reserve(
    entry_x8)
void* x21 = *entry_x0
int64_t x22 = entry_x0[1]

if (x21 != x22)
    char var_48
    uint64_t x23_1 = &var_48 | 1
    
    do
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        uint8_t* x0_3 = *(x21 + 0x20)
        Botan::base64_encode(x0_3, *(x21 + 0x28) - x0_3)
        uint64_t var_38
        uint64_t x1_4
        
        if ((zx.d(var_48) & 1) == 0)
            x1_4 = x23_1
        else
            x1_4 = var_38
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8, x1_4)
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        Botan::base64_encode(x21 + 0x38, 0x40)
        uint64_t x1_6
        
        if ((zx.d(var_48) & 1) == 0)
            x1_6 = x23_1
        else
            x1_6 = var_38
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8, x1_6)
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        uint8_t* x0_11 = *x21
        Botan::base64_encode(x0_11, *(x21 + 8) - x0_11)
        uint64_t x1_9
        
        if ((zx.d(var_48) & 1) == 0)
            x1_9 = x23_1
        else
            x1_9 = var_38
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8, x1_9)
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        x21 += 0x78
    while (x22 != x21)

return result
