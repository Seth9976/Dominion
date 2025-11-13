// 函数: _ZN5Botan3TLS18kdf_algo_to_stringENS0_8KDF_AlgoE
// 地址: 0xe54308
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8
int32_t x11

if (arg1.d == 2)
    x11 = 0x3438332d
else
    if (arg1.d != 1)
        if (arg1.d == 0)
            __builtin_strcpy(entry_x8, "\nSHA-1")
            return 
        
        void** x0 = __cxa_allocate_exception(0x20)
        int64_t x0_1
        int128_t v0
        x0_1, v0 = operator new(0x30)
        v0 = data_71b5a0
        int64_t var_30 = x0_1
        __builtin_strncpy(x0_1, "kdf_algo_to_string unknown enum value", 0x26)
        int128_t var_40 = v0
        *x0 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0[1])
        *x0 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    x11 = 0x3635322d

*entry_x8 = 0xe
__builtin_strncpy(&entry_x8[1], "SHA-", 4)
*(entry_x8 + 4) = x11
entry_x8[8] = 0
