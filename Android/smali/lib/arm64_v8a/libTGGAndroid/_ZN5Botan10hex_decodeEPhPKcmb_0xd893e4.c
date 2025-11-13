// 函数: _ZN5Botan10hex_decodeEPhPKcmb
// 地址: 0xd893e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_28 = 0
int64_t result = Botan::hex_decode(arg1, arg2, arg3, &var_28, arg4 & 1)

if (var_28 == arg3)
    return result

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
(*" have full bytes")[0].o
int64_t var_30 = x0_1
v0 = data_71cbb0
__builtin_strncpy(x0_1, "hex_decode: input did not have full bytes", 0x2a)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
