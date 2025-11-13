// 函数: sub_e729c4
// 地址: 0xe729c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

switch (arg1)
    case 0
        return 2
    case 1
        return 4
    case 2
        return 8
    case 3
        return 1
    case 4
        return 0x1000
    case 0xb
        return 0x10
    case 0xc
        return 0x80
    case 0xd
        return 0x100
    case 0xe
        return 0x200
    case 0xf
        return 0x400
    case 0x10
        return 0x800
    case 0x14
        return 0x4000
    case 0x15
        return 0x20
    case 0x16
        return 0x40
    case 0xfe
        return 0x2000
    case 0xff
        return 0

void** x0_15 = __cxa_allocate_exception(0x28)
std::__ndk1::to_string(arg1)
void var_58
int128_t* x0_18
int128_t v0
x0_18, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_58, nullptr)
int64_t var_30 = x0_18[1].q
int128_t var_40 = *x0_18
__builtin_memset(x0_18, 0, 0x18)
*x0_15 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_15[1])
x0_15[4].d = 0xa
*x0_15 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_15, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
