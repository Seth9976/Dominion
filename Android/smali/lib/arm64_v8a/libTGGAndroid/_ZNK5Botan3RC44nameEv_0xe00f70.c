// 函数: _ZNK5Botan3RC44nameEv
// 地址: 0xe00f70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t result = *(entry_x0 + 8)
char* entry_x8

if (result == 0x100)
    *entry_x8 = 0xc
    __builtin_strncpy(&entry_x8[1], "MARK-4", 7)
    return result

if (result != 0)
    std::__ndk1::to_string(result)
    char var_48
    int128_t* x0_1
    int128_t v0_1
    x0_1, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_48, nullptr)
    void* x8 = x0_1[1].q
    int128_t var_30 = *x0_1
    __builtin_memset(x0_1, 0, 0x18)
    int128_t v0_2
    result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_30)
    v0_2 = *result
    *(entry_x8 + 0x10) = *(result + 0x10)
    *entry_x8 = v0_2
    __builtin_memset(result, 0, 0x18)
    void* var_38
    
    if ((zx.d(var_30.b) & 1) != 0)
        result = operator delete(x8)
        
        if ((zx.d(var_48) & 1) != 0)
            return operator delete(var_38)
    else if ((zx.d(var_48) & 1) != 0)
        return operator delete(var_38)
else
    *entry_x8 = 6
    *(entry_x8 + 1) = 0x344352

return result
