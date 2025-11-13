// 函数: _ZNK5Botan8DL_Group10PEM_encodeENS0_6FormatE
// 地址: 0xd1be20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::DL_Group::DER_encode(arg1)
char var_50
int32_t var_40
uint8_t* result
int32_t entry_x1
int64_t var_30

if (entry_x1 == 0)
    __builtin_strncpy(&var_50, "&X9.42 DH PARAMETERS", 0x15)
    Botan::PEM_Code::encode(result, var_30 - result, &var_50, 0x40)
else
    int128_t var_4f
    
    if (entry_x1 == 1)
        var_50 = 0x1c
        __builtin_strncpy(&var_4f, "DSA PARAMETERS", 0xf)
        Botan::PEM_Code::encode(result, var_30 - result, &var_50, 0x40)
    else
        if (entry_x1 != 2)
            void** x0_5 = __cxa_allocate_exception(0x20)
            std::__ndk1::to_string(entry_x1)
            void var_68
            int128_t* x0_8
            int128_t v0
            x0_8, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                &var_68, nullptr)
            var_40.q = x0_8[1].q
            var_50.o = *x0_8
            __builtin_memset(x0_8, 0, 0x18)
            *x0_5 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_5[1])
            *x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        var_50 = 0x1a
        __builtin_strncpy(&var_4f, "DH PARAMETERS", 0xe)
        Botan::PEM_Code::encode(result, var_30 - result, &var_50, 0x40)

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40.q)

if (result == 0)
    return result

uint8_t* result_1 = result
return operator delete(result)
