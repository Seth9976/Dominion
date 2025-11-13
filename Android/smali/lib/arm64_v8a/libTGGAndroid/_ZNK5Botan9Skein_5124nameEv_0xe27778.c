// 函数: _ZNK5Botan9Skein_5124nameEv
// 地址: 0xe27778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t x9 = zx.q(*(entry_x0 + 8))
uint64_t x9_1

if ((x9.d & 1) == 0)
    x9_1 = x9 u>> 1
else
    x9_1 = *(entry_x0 + 0x10)

int32_t x0_1

if (x9_1 == 0)
    x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x0 + 8, 0, -ffffffffffffffff, &data_793a18)

int128_t* result
int128_t var_60
int128_t var_40
int128_t* entry_x8

if (x9_1 == 0 && x0_1 == 0)
    std::__ndk1::to_string(*(entry_x0 + 0x20))
    int128_t* x0_16
    int128_t v0_4
    x0_16, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_60, nullptr)
    void* x8_12 = x0_16[1].q
    var_40 = *x0_16
    __builtin_memset(x0_16, 0, 0x18)
    int128_t v0_5
    result, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_40.b) & 1) != 0)
        result = operator delete(x8_12)
    
    void* var_50
    
    if ((zx.d(var_60.b) & 1) != 0)
        return operator delete(var_50)
else
    std::__ndk1::to_string(*(entry_x0 + 0x20))
    char var_98
    int128_t* x0_4
    int128_t v0
    x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_98, nullptr)
    void* x8 = x0_4[1].q
    int128_t var_80 = *x0_4
    __builtin_memset(x0_4, 0, 0x18)
    int128_t* x0_6
    int128_t v0_1
    x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_80)
    void* x8_1 = x0_6[1].q
    var_60 = *x0_6
    __builtin_memset(x0_6, 0, 0x18)
    *(entry_x0 + 0x10)
    void* x1_1
    
    if ((zx.d(*(entry_x0 + 8)) & 1) != 0)
        x1_1 = *(entry_x0 + 0x18)
    else
        x1_1 = entry_x0 + 9
    
    int128_t* x0_8
    int128_t v0_2
    x0_8, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_60, x1_1)
    void* x8_3 = x0_8[1].q
    var_40 = *x0_8
    __builtin_memset(x0_8, 0, 0x18)
    int128_t v0_3
    result, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_40.b) & 1) == 0)
        if ((zx.d(var_60.b) & 1) != 0)
            goto label_e278cc
        
        goto label_e2789c
    
    result = operator delete(x8_3)
    
    if ((zx.d(var_60.b) & 1) != 0)
    label_e278cc:
        result = operator delete(x8_1)
        
        if ((zx.d(var_80.b) & 1) == 0)
            goto label_e278a4
        
        goto label_e278dc
    
label_e2789c:
    void* var_88
    
    if ((zx.d(var_80.b) & 1) != 0)
    label_e278dc:
        result = operator delete(x8)
        
        if ((zx.d(var_98) & 1) != 0)
            return operator delete(var_88)
    else
    label_e278a4:
        
        if ((zx.d(var_98) & 1) != 0)
            return operator delete(var_88)
return result
