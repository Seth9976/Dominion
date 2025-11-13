// 函数: sub_d8a9c4
// 地址: 0xd8a9c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1 - 1) u>> 0x18 != 0)
    void** x0 = __cxa_allocate_exception(0x20)
    int64_t x0_1
    int128_t v0
    x0_1, v0 = operator new(0x30)
    v0 = data_71c510
    int64_t var_30 = x0_1
    __builtin_strncpy(x0_1, "Invalid value for reseed_interval", 0x22)
    int128_t var_40 = v0
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (arg2 - 1 u< 0x10000)
    return 

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0_1
x0_6, v0_1 = operator new(0x40)
v0_1 = data_71d0c0
int64_t var_30_1 = x0_6
__builtin_strncpy(x0_6, "Invalid value for max_number_of_bytes_per_request", 0x32)
int128_t var_40_1 = v0_1
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
