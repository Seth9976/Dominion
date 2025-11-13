// 函数: _ZNK5Botan11X509_Object15check_signatureEPKNS_10Public_KeyE
// 地址: 0xea5e70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1

if (entry_x1 != 0)
    int32_t x0_1 = Botan::X509_Object::verify_signature(arg1)
    (*(*entry_x1 + 8))(entry_x1)
    return zx.q(x0_1 == 0 ? 1 : 0)

void** x0_4 = __cxa_allocate_exception(0x20)
(*(*arg1 + 0x20))(arg1)
void var_78
int128_t* x0_7
int128_t v0
x0_7, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
int64_t var_50 = x0_7[1].q
int128_t var_60 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
int128_t* x0_9
int128_t v0_1
x0_9, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
int64_t var_30 = x0_9[1].q
int128_t var_40 = *x0_9
__builtin_memset(x0_9, 0, 0x18)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
