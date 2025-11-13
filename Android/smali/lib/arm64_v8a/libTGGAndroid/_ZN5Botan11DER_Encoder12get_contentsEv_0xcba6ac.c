// 函数: _ZN5Botan11DER_Encoder12get_contentsEv
// 地址: 0xcba6ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x50) != *(entry_x0 + 0x48))
    void** x0 = __cxa_allocate_exception(0x20)
    int64_t x0_1
    int128_t v0_1
    x0_1, v0_1 = operator new(0x30)
    (*"been marked done")[0].o
    int64_t var_30 = x0_1
    v0_1 = data_71ce10
    __builtin_strncpy(x0_1, "DER_Encoder: Sequence hasn\'t been marked done", 0x2e)
    int128_t var_40 = v0_1
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

if (*(entry_x0 + 0x20) == 0)
    int128_t* entry_x8
    *entry_x8 = *(entry_x0 + 0x30)
    int64_t x9_2 = *(entry_x0 + 0x40)
    __builtin_memset(entry_x0 + 0x30, 0, 0x18)
    entry_x8[1].q = x9_2
    return 

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v1
x0_6, v1 = operator new(0x40)
v1 = data_71b7e0
int64_t var_30_1 = x0_6
__builtin_strncpy(x0_6, "DER_Encoder Cannot get contents when using output vector", 0x39)
int128_t var_40_1 = v1
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
