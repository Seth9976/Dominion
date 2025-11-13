// 函数: sub_d37bec
// 地址: 0xd37bec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()
char arg_18
sub_d37158(&arg_18, arg8 + *(*arg3 - 0x88), arg6, arg5, arg4, 1)
*(*arg3 - 0x88)
int32_t x0_3 = Botan::PointGFp::operator==(&arg_18)
Botan::PointGFp::~PointGFp()

if ((x0_3 & 1) != 0)
    return 1

sub_d37158(&arg_18, arg8 + *(*arg3 - 0x88), arg6, arg5, arg4, 2)
*(*arg3 - 0x88)
int32_t x0_7 = Botan::PointGFp::operator==(&arg_18)
Botan::PointGFp::~PointGFp()

if ((x0_7 & 1) != 0)
    return 2

sub_d37158(&arg_18, arg8 + *(*arg3 - 0x88), arg6, arg5, arg4, 3)
*(*arg3 - 0x88)
int32_t x0_10 = Botan::PointGFp::operator==(&arg_18)
Botan::PointGFp::~PointGFp()

if ((x0_10 & 1) != 0)
    return 3

void** x0_11 = __cxa_allocate_exception(0x20)
int64_t x0_12
int128_t v0
x0_12, v0 = operator new(0x30)
int64_t arg_10 = x0_12
int128_t arg_0 = data_71abd0
__builtin_strncpy(x0_12, "Could not determine ECDSA recovery parameter", 0x2d)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &arg_0)
*x0_11 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_11[1])

if ((zx.d(arg_18) & 1) != 0)
    operator delete(arg9)

*x0_11 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_11, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
