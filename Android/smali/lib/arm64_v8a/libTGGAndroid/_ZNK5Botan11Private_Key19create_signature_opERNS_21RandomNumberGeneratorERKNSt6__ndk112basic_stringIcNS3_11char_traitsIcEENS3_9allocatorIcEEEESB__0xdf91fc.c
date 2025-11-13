// 函数: _ZNK5Botan11Private_Key19create_signature_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xdf91fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = __cxa_allocate_exception(0x20)
void* x9 = arg1 + *(*arg1 - 0x88)
(*(*x9 + 0x10))(x9)
char var_58[0x18]
int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58)
int64_t var_30 = x0_3[1].q
int128_t var_40 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Lookup_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Lookup_Error, Botan::Exception::~Exception)
noreturn
