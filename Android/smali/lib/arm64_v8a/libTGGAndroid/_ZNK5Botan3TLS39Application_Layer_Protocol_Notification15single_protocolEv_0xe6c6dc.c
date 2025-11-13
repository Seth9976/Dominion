// 函数: _ZNK5Botan3TLS39Application_Layer_Protocol_Notification15single_protocolEv
// 地址: 0xe6c6dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 8)

if (*(entry_x0 + 0x10) - result == 0x18)
    return result

void** x0 = __cxa_allocate_exception(0x28)
std::__ndk1::to_string(((*(entry_x0 + 0x10) - *(entry_x0 + 8)) s>> 3) * -0x5555555555555555)
void var_78
int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
int64_t var_50 = x0_3[1].q
int128_t var_60 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
int64_t var_30 = x0_5[1].q
int128_t var_40 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
x0[4].d = 0x28
*x0 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
