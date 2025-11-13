// 函数: _ZN5Botan6ScryptC1Emmm
// 地址: 0xe10064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = arg3
int64_t entry_x3
*(arg1 + 0x18) = entry_x3
*arg1 = _vtable_for_Botan::Scrypt + 0x10
*(arg1 + 8) = arg2
int128_t entry_v0

if (arg2 u>= 2)
    entry_v0.q = float.d(arg2)
    entry_v0.w = vaddlv_u8(vcnt_s8(entry_v0))
    
    if (zx.q(entry_v0.d) u< 2)
        if (entry_x3 - 1 u>= 0x400)
            void** x0_5 = __cxa_allocate_exception(0x20)
            int64_t x0_6
            int128_t v0_1
            x0_6, v0_1 = operator new(0x20)
            int64_t var_30_1 = x0_6
            int128_t var_40_1 = data_71b7d0
            __builtin_strncpy(x0_6, "Invalid or unsupported scrypt p", 0x20)
            *x0_5 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_5[1])
            *x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        if (arg3 - 1 u>= 0x100)
            void** x0_9 = __cxa_allocate_exception(0x20)
            int64_t x0_10
            int128_t v0_2
            x0_10, v0_2 = operator new(0x20)
            int64_t var_30_2 = x0_10
            int128_t var_40_2 = data_71b7d0
            __builtin_strncpy(x0_10, "Invalid or unsupported scrypt r", 0x20)
            *x0_9 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_9[1])
            *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        if (arg2 - 1 u< &__elf_header)
            return 
        
        void** x0_13 = __cxa_allocate_exception(0x20)
        int64_t x0_14
        int128_t v0_3
        x0_14, v0_3 = operator new(0x20)
        int64_t var_30_3 = x0_14
        int128_t var_40_3 = data_71b7d0
        __builtin_strncpy(x0_14, "Invalid or unsupported scrypt N", 0x20)
        *x0_13 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_13[1])
        *x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn

void** x0 = __cxa_allocate_exception(0x20, entry_v0)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
v0 = data_71c500
int64_t var_30 = x0_1
__builtin_strncpy(x0_1, "Scrypt N parameter must be a power of 2", 0x28)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
