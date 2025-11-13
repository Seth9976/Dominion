// 函数: _ZNK5Botan8CBC_Mode4nameEv
// 地址: 0xceebbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int128_t* result
char var_40[0x10]
int128_t* entry_x8

if (*(entry_x0 + 0x10) == 0)
    (*(**(entry_x0 + 8) + 0x20))()
    int128_t v0_2
    result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    void* var_30
    
    if ((zx.d(var_40[0]) & 1) != 0)
        return operator delete(var_30)
else
    (*(**(entry_x0 + 8) + 0x20))()
    char var_58[0x10]
    int128_t* x0_2
    int128_t v0
    x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_58)
    void* x8_1 = x0_2[1].q
    var_40 = *x0_2
    __builtin_memset(x0_2, 0, 0x18)
    int64_t* x0_3 = *(entry_x0 + 0x10)
    
    if (x0_3 == 0)
        int64_t* x0_11 = Botan::assertion_failure("m_padding is not null", &data_793a18, "padding", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x1d20)
        
        if ((zx.d(var_40[0]) & 1) != 0)
            operator delete(x8_1)
        
        sub_1101e04(x0_11)
        noreturn
    
    (*(*x0_3 + 0x18))()
    char var_70
    void* var_60
    uint64_t x1_1
    
    if ((zx.d(var_70) & 1) == 0)
        x1_1 = &var_70 | 1
    else
        x1_1 = var_60
    
    int128_t v0_1
    result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40, x1_1)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_70) & 1) == 0)
        if ((zx.d(var_40[0]) & 1) != 0)
            goto label_ceecf4
        
        goto label_ceec80
    
    result = operator delete(var_60)
    void* var_48
    
    if ((zx.d(var_40[0]) & 1) == 0)
    label_ceec80:
        
        if ((zx.d(var_58[0]) & 1) != 0)
            return operator delete(var_48)
    else
    label_ceecf4:
        result = operator delete(x8_1)
        
        if ((zx.d(var_58[0]) & 1) != 0)
            return operator delete(var_48)
return result
