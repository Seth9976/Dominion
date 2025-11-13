// 函数: _ZNK5Botan8CFB_Mode4nameEv
// 地址: 0xcfe39c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int128_t* result
char var_40[0x10]
int128_t* entry_x8

if (*(entry_x0 + 0x50) != (*(**(entry_x0 + 0x40) + 0x30))())
    (*(**(entry_x0 + 0x40) + 0x20))()
    char var_78[0x10]
    int128_t* x0_7
    int128_t v0_1
    x0_7, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_78)
    void* x8_4 = x0_7[1].q
    int128_t var_60 = *x0_7
    __builtin_memset(x0_7, 0, 0x18)
    std::__ndk1::to_string(*(entry_x0 + 0x50) << 3)
    char var_90
    void* var_80
    void* x1_2
    
    if ((zx.d(var_90) & 1) == 0)
        x1_2 = &var_90 | 1
    else
        x1_2 = var_80
    
    int128_t* x0_10
    int128_t v0_2
    x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_60, x1_2)
    void* x8_7 = x0_10[1].q
    var_40 = *x0_10
    __builtin_memset(x0_10, 0, 0x18)
    int128_t v0_3
    result, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_40[0]) & 1) == 0)
        if ((zx.d(var_90) & 1) != 0)
            goto label_cfe510
        
        goto label_cfe4e0
    
    result = operator delete(x8_7)
    
    if ((zx.d(var_90) & 1) != 0)
    label_cfe510:
        result = operator delete(var_80)
        
        if ((zx.d(var_60.b) & 1) == 0)
            goto label_cfe4e8
        
        goto label_cfe520
    
label_cfe4e0:
    void* var_68
    
    if ((zx.d(var_60.b) & 1) != 0)
    label_cfe520:
        result = operator delete(x8_4)
        
        if ((zx.d(var_78[0]) & 1) != 0)
            return operator delete(var_68)
    else
    label_cfe4e8:
        
        if ((zx.d(var_78[0]) & 1) != 0)
            return operator delete(var_68)
else
    (*(**(entry_x0 + 0x40) + 0x20))()
    int128_t v0
    result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    void* var_30
    
    if ((zx.d(var_40[0]) & 1) != 0)
        return operator delete(var_30)
return result
