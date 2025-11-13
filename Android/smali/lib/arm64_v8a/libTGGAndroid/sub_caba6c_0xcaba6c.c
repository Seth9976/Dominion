// 函数: sub_caba6c
// 地址: 0xcaba6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(arg2)

if (x8 == 2)
    *arg1 = 0x10
    __builtin_strncpy(&arg1[1], "Argon2id", 9)
    return 

int32_t x10

if (x8 == 1)
    x10 = 0x69326e6f
else
    if (x8 != 0)
        void** x0 = __cxa_allocate_exception(0x20)
        int64_t x0_1
        int128_t v0
        x0_1, v0 = operator new(0x20)
        int64_t var_30 = x0_1
        int128_t var_40 = data_71af80
        __builtin_strncpy(x0_1, "Unknown Argon2 parameter", 0x19)
        *x0 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0[1])
        *x0 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    x10 = 0x64326e6f

*arg1 = 0xe
__builtin_strncpy(&arg1[1], "Argo", 4)
*(arg1 + 4) = x10
arg1[8] = 0
