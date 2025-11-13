// 函数: _ZN5Botan13EMSA_PKCS1v1511encoding_ofERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmRNS_21RandomNumberGeneratorE
// 地址: 0xd6092c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 8) - *arg2 == (***(arg1 + 8))())
    int64_t x3 = *(arg1 + 0x10)
    int64_t* entry_x8
    return sub_d60ab8(entry_x8, arg2, arg3, x3, *(arg1 + 0x18) - x3) __tailcall

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0_1
x0_5, v0_1 = operator new(0x30)
int64_t var_50 = x0_5
int128_t var_60 = data_71abd0
__builtin_strncpy(x0_5, "EMSA_PKCS1v15::encoding_of: Bad input length", 0x2d)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_60)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
char var_48
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
*x0_4 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
