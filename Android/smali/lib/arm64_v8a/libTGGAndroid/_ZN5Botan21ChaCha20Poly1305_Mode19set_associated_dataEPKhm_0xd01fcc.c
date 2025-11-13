// 函数: _ZN5Botan21ChaCha20Poly1305_Mode19set_associated_dataEPKhm
// 地址: 0xd01fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x38) == 0 && *(arg1 + 0x30) == 0)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
        &arg1[0x18], arg2) __tailcall

void** x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v2_1
x0_3, v2_1 = operator new(0x40)
(*"essing a message")[0].o
int64_t var_30 = x0_3
v2_1 = data_71a790
__builtin_strncpy(x0_3, "Cannot set AD for ChaCha20Poly1305 while processing a message", 0x3e)
int128_t var_40 = v2_1
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
