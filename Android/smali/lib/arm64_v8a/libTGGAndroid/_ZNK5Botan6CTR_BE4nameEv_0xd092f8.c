// 函数: _ZNK5Botan6CTR_BE4nameEv
// 地址: 0xd092f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int128_t* result
int128_t var_60
int128_t var_40
int128_t* entry_x8

if (*(entry_x0 + 0x18) != *(entry_x0 + 0x10))
    (*(**(entry_x0 + 8) + 0x20))()
    char var_98
    int128_t* x0_8
    int128_t v0_2
    x0_8, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_98, nullptr)
    void* x8_6 = x0_8[1].q
    int128_t var_80 = *x0_8
    __builtin_memset(x0_8, 0, 0x18)
    int128_t* x0_10
    int128_t v0_3
    x0_10, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_80)
    void* x8_7 = x0_10[1].q
    var_60 = *x0_10
    __builtin_memset(x0_10, 0, 0x18)
    std::__ndk1::to_string(*(entry_x0 + 0x18))
    char var_b0
    void* var_a0
    void* x1_2
    
    if ((zx.d(var_b0) & 1) == 0)
        x1_2 = &var_b0 | 1
    else
        x1_2 = var_a0
    
    int128_t* x0_13
    int128_t v0_4
    x0_13, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_60, x1_2)
    void* x8_9 = x0_13[1].q
    var_40 = *x0_13
    __builtin_memset(x0_13, 0, 0x18)
    int128_t v0_5
    result, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_40.b) & 1) == 0)
        if ((zx.d(var_b0) & 1) != 0)
            goto label_d094c8
        
        goto label_d09490
    
    result = operator delete(x8_9)
    
    if ((zx.d(var_b0) & 1) != 0)
    label_d094c8:
        result = operator delete(var_a0)
        
        if ((zx.d(var_60.b) & 1) == 0)
            goto label_d09498
        
        goto label_d094d8
    
label_d09490:
    
    if ((zx.d(var_60.b) & 1) == 0)
    label_d09498:
        
        if ((zx.d(var_80.b) & 1) != 0)
            goto label_d094e8
        
        goto label_d094a0
    
label_d094d8:
    result = operator delete(x8_7)
    void* var_88
    
    if ((zx.d(var_80.b) & 1) == 0)
    label_d094a0:
        
        if ((zx.d(var_98) & 1) != 0)
            return operator delete(var_88)
    else
    label_d094e8:
        result = operator delete(x8_6)
        
        if ((zx.d(var_98) & 1) != 0)
            return operator delete(var_88)
else
    (*(**(entry_x0 + 8) + 0x20))()
    int128_t* x0_2
    int128_t v0
    x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_60, nullptr)
    void* x8_1 = x0_2[1].q
    var_40 = *x0_2
    __builtin_memset(x0_2, 0, 0x18)
    int128_t v0_1
    result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_40.b) & 1) != 0)
        result = operator delete(x8_1)
    
    void* var_50
    
    if ((zx.d(var_60.b) & 1) != 0)
        return operator delete(var_50)
return result
