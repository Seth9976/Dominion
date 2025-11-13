// 函数: _ZN5Botan3TLS20kex_method_to_stringENS0_8Kex_AlgoE
// 地址: 0xe529c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d u> 7)
    void** x0 = __cxa_allocate_exception(0x20)
    int64_t x0_1
    int128_t v0
    x0_1, v0 = operator new(0x30)
    v0 = data_71c500
    int64_t var_30 = x0_1
    __builtin_strncpy(x0_1, "kex_method_to_string unknown enum value", 0x28)
    int128_t var_40 = v0
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

char* entry_x8
int32_t x10
int32_t x10_1
int32_t x11_1

switch (arg1.d)
    case 0
        x10 = 0x415352
    label_e52ad4:
        *entry_x8 = 6
        *(entry_x8 + 1) = x10
        return 
    case 1
        *entry_x8 = 4
        *(entry_x8 + 1) = 0x4844
        entry_x8[3] = 0
        return 
    case 2
        *entry_x8 = 8
        __builtin_strncpy(&entry_x8[1], "ECDH", 5)
        return 
    case 3
        *entry_x8 = 0xc
        __builtin_strncpy(&entry_x8[1], "CECPQ1", 7)
        return 
    case 4
        x10_1 = 0x5f505253
        x11_1 = 0x4148535f
    label_e52b00:
        *entry_x8 = 0xe
        *(entry_x8 + 1) = x10_1
        *(entry_x8 + 4) = x11_1
        entry_x8[8] = 0
        return 
    case 5
        x10 = 0x4b5350
        goto label_e52ad4
    case 6
        x10_1 = 0x5f454844
        x11_1 = 0x4b53505f
        goto label_e52b00
    case 7
        *entry_x8 = 0x12
        __builtin_strncpy(&entry_x8[1], "ECDHE_PSK", 0xa)
        return 
