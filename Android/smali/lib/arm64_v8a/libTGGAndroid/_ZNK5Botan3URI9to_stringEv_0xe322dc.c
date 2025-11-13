// 函数: _ZNK5Botan3URI9to_stringEv
// 地址: 0xe322dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x0
uint32_t x9 = zx.d(*entry_x0)
char var_40

if (x9 == 0)
    void** x0_14 = __cxa_allocate_exception(0x20)
    var_40 = 0xe
    int32_t var_3f
    __builtin_strncpy(&var_3f, "not set", 8)
    *x0_14 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_14[1])
    *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int128_t* entry_x8

if (zx.d(*(entry_x0 + 0x20)) == 0)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        entry_x8) __tailcall

int128_t* result
char var_58
void* var_48

if (x9 != 2)
    sub_cafe1c(&entry_x0[8], ":", &var_40)
    std::__ndk1::to_string(zx.d(*(entry_x0 + 0x20)))
    void* x1_5
    
    if ((zx.d(var_58) & 1) == 0)
        x1_5 = &var_58 | 1
    else
        x1_5 = var_48
    
    int128_t v0_3
    result, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40, x1_5)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_58) & 1) != 0)
        result = operator delete(var_48)
    
    void* var_30
    
    if ((zx.d(var_40) & 1) != 0)
        return operator delete(var_30)
else
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "[", &entry_x0[8])
    int128_t* x0_1
    int128_t v0
    x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_58)
    void* x8_1 = x0_1[1].q
    var_40.o = *x0_1
    __builtin_memset(x0_1, 0, 0x18)
    std::__ndk1::to_string(zx.d(*(entry_x0 + 0x20)))
    char var_70
    void* var_60
    uint64_t x1_2
    
    if ((zx.d(var_70) & 1) == 0)
        x1_2 = &var_70 | 1
    else
        x1_2 = var_60
    
    int128_t v0_1
    result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_40, x1_2)
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_70) & 1) == 0)
        if ((zx.d(var_40) & 1) != 0)
            goto label_e32464
        
        goto label_e323a4
    
    result = operator delete(var_60)
    
    if ((zx.d(var_40) & 1) == 0)
    label_e323a4:
        
        if ((zx.d(var_58) & 1) != 0)
            return operator delete(var_48)
    else
    label_e32464:
        result = operator delete(x8_1)
        
        if ((zx.d(var_58) & 1) != 0)
            return operator delete(var_48)
return result
