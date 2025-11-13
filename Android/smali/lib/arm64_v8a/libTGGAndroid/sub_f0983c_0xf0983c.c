// 函数: sub_f0983c
// 地址: 0xf0983c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x20 = *arg2

if ((Botan::BigInt::cmp(arg3, x20.b) & 0x80000000) != 0)
    return Botan::RSA_Public_Data::public_op(x20) __tailcall

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0_1
x0_5, v0_1 = operator new(0x30)
v0_1 = data_71d3f0
int64_t var_30 = x0_5
__builtin_strncpy(x0_5, "RSA public op - input is too large", 0x23)
int128_t var_40 = v0_1
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
