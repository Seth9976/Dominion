// 函数: _ZNK5Botan4UUID9to_stringEv
// 地址: 0xe920b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
uint8_t* x0 = *entry_x0

if (entry_x0[1] - x0 == 0x10)
    Botan::hex_encode(x0, 0x10, true)
    uint64_t entry_x8
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        entry_x8, 8)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        entry_x8, 0xd)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        entry_x8, 0x12)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        entry_x8, 0x17)

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0
x0_7, v0 = operator new(0x30)
(*"onvert to string")[0].o
int64_t var_30 = x0_7
v0 = data_71ce10
__builtin_strncpy(x0_7, "UUID object is empty cannot convert to string", 0x2e)
int128_t var_40 = v0
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
