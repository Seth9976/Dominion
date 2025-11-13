// 函数: _ZN5Botan9Roughtime5NonceC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe03b5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int128_t* x8 = *entry_x1

if (entry_x1[1] - x8 == 0x40)
    int128_t v0 = x8[3]
    int128_t v3 = *x8
    int128_t v2 = x8[1]
    *(arg1 + 0x20) = x8[2]
    *(arg1 + 0x30) = v0
    *arg1 = v3
    *(arg1 + 0x10) = v2
    return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0_1
x0_1, v0_1 = operator new(0x20)
int64_t var_30 = x0_1
int128_t var_40 = data_71c520
__builtin_strncpy(x0_1, "Nonce lenght must be 64", 0x18)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
