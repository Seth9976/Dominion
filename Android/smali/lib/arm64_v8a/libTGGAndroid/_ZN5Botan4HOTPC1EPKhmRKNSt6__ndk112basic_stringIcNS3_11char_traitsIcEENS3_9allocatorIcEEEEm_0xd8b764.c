// 函数: _ZN5Botan4HOTPC1EPKhmRKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEm
// 地址: 0xd8b764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
char var_68
void* var_58
char var_50
void* var_40
int64_t entry_x4

if (entry_x4 - 6 u>= 3)
    int64_t* x0_18 = Botan::throw_invalid_argument("Invalid HOTP digits", "HOTP", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    if ((zx.d(var_50) & 1) != 0)
        operator delete(var_40)
    
    int64_t* x0_21 = *arg1
    *arg1 = 0
    
    if (x0_21 != 0)
        (*(*x0_21 + 0x10))()
    
    sub_1101e04(x0_18)
    noreturn

*(arg1 + 8) = *(&data_864c34 + ((entry_x4 - 6) << 2))
uint64_t x10 = zx.q(*arg4)
uint64_t x8_2 = *(arg4 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8_2

if (x11 != 5)
    goto label_d8b7f4

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg4, 0, -ffffffffffffffff, "SHA-1") == 0)
    var_50 = 0x16
    int64_t var_4f_1
    __builtin_strncpy(&var_4f_1, "HMAC(SHA-1)", 0xc)
    var_68.w = 0
    Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)
else
    uint64_t x10_2 = zx.q(*arg4)
    x8_2 = *(arg4 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_d8b7f4:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_2
    
    if (x11_1 != 7)
        goto label_d8b834
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg4, 0, -ffffffffffffffff, "SHA-256") == 0)
        var_50 = 0x1a
        int64_t var_4f_2
        __builtin_strncpy(&var_4f_2, "HMAC(SHA-256)", 0xe)
        var_68.w = 0
        Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)
    else
        uint64_t x10_3 = zx.q(*arg4)
        x8_2 = *(arg4 + 8)
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_d8b834:
        uint64_t x8_3
        
        if ((x9 & 0xff) == 0)
            x8_3 = x10_1
        else
            x8_3 = x8_2
        
        int32_t x0_5
        
        if (x8_3 == 7)
            x0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg4, 0, -ffffffffffffffff, "SHA-512")
        
        if (x8_3 != 7 || x0_5 != 0)
            void** x0_14 = __cxa_allocate_exception(0x20)
            int64_t x0_15
            int128_t v0
            x0_15, v0 = operator new(0x20)
            int64_t var_40_1 = x0_15
            var_50.o = data_71c370
            __builtin_strncpy(x0_15, "Unsupported HOTP hash function", 0x1f)
            *x0_14 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_14[1])
            *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        var_50 = 0x1a
        int64_t var_4f
        __builtin_strncpy(&var_4f, "HMAC(SHA-512)", 0xe)
        var_68.w = 0
        Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)

int64_t* x0_9 = *arg1
int64_t var_28
*arg1 = var_28

if (x0_9 != 0)
    (*(*x0_9 + 0x10))()

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

return Botan::SymmetricAlgorithm::set_key(*arg1 + 8, arg2)
