// 函数: _ZNK5Botan15ECDSA_PublicKey14recovery_paramERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEERKNS_6BigIntESA_
// 地址: 0xd37b58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_d8
Botan::BigInt* entry_x3
sub_d37158(&var_d8, arg1 + 8 + *(*arg1 - 0x88), arg2, arg3, entry_x3, 0)
*(*arg1 - 0x88)
int32_t x0_2 = Botan::PointGFp::operator==(&var_d8)
Botan::PointGFp::~PointGFp()

if ((x0_2 & 1) != 0)
    return 0

sub_d37158(&var_d8, arg1 + 8 + *(*arg1 - 0x88), arg2, arg3, entry_x3, 1)
*(*arg1 - 0x88)
int32_t x0_6 = Botan::PointGFp::operator==(&var_d8)
Botan::PointGFp::~PointGFp()

if ((x0_6 & 1) != 0)
    return 1

sub_d37158(&var_d8, arg1 + 8 + *(*arg1 - 0x88), arg2, arg3, entry_x3, 2)
*(*arg1 - 0x88)
int32_t x0_9 = Botan::PointGFp::operator==(&var_d8)
Botan::PointGFp::~PointGFp()

if ((x0_9 & 1) != 0)
    return 2

sub_d37158(&var_d8, arg1 + 8 + *(*arg1 - 0x88), arg2, arg3, entry_x3, 3)
*(*arg1 - 0x88)
int32_t x0_12 = Botan::PointGFp::operator==(&var_d8)
Botan::PointGFp::~PointGFp()

if ((x0_12 & 1) != 0)
    return 3

void** x0_13 = __cxa_allocate_exception(0x20)
int64_t x0_14
int128_t v0
x0_14, v0 = operator new(0x30)
int64_t var_e0 = x0_14
int128_t var_f0 = data_71abd0
__builtin_strncpy(x0_14, "Could not determine ECDSA recovery parameter", 0x2d)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_f0)
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
void* var_c8

if ((zx.d(var_d8) & 1) != 0)
    operator delete(var_c8)
*x0_13 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
