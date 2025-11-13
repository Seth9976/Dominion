// 函数: _ZN5Botan11BER_Decoder8end_consEv
// 地址: 0xcaec20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0

if (*entry_x0 == 0)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0
    x0_4, v0 = operator new(0x30)
    (*"with null parent")[0].o
    int64_t var_30 = x0_4
    v0 = data_71ce10
    __builtin_strncpy(x0_4, "BER_Decoder::end_cons called with null parent", 0x2e)
    int128_t var_40 = v0
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

if (((*(*entry_x0[5] + 0x18))() & 1) != 0)
    return *entry_x0

void** x0_8 = __cxa_allocate_exception(0x20)
int64_t x0_9
int128_t v0_1
x0_9, v0_1 = operator new(0x30)
(*"d with data left")[0].o
int64_t var_30_1 = x0_9
v0_1 = data_71cfc0
__builtin_strncpy(x0_9, "BER_Decoder::end_cons called with data left", 0x2c)
int128_t var_40_1 = v0_1
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
