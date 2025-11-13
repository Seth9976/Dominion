// 函数: _ZNK5Botan3TLS6Policy24latest_supported_versionEb
// 地址: 0xe7454c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *(*arg1 + 0x100)
int32_t entry_x1
int64_t result

if ((entry_x1 & 1) == 0)
    result = 0x303
    
    if ((x8_1(arg1, 0x303) & 1) == 0)
        void** x0_8 = __cxa_allocate_exception(0x20)
        int64_t x0_9
        int128_t v0_1
        x0_9, v0_1 = operator new(0x30)
        v0_1 = data_71aa70
        int64_t var_30_1 = x0_9
        __builtin_strncpy(x0_9, "Policy forbids all available TLS version", 0x29)
        int128_t var_40_1 = v0_1
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        *x0_8 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
else
    result = 0xfefd
    
    if ((x8_1(arg1, 0xfefd) & 1) == 0)
        void** x0_1 = __cxa_allocate_exception(0x20)
        int64_t x0_2
        int128_t v0
        x0_2, v0 = operator new(0x30)
        (*"ble DTLS version")[0].o
        int64_t var_30 = x0_2
        v0 = data_71cbb0
        __builtin_strncpy(x0_2, "Policy forbids all available DTLS version", 0x2a)
        int128_t var_40 = v0
        *x0_1 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_1[1])
        *x0_1 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn

return result
