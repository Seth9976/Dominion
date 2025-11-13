// 函数: _ZN5Botan4LionC1EPNS_12HashFunctionEPNS_12StreamCipherEm
// 地址: 0xd967c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Lion + 0x10
int64_t x0_1
int128_t v0
x0_1, v0 = (**arg2)(arg2)
int64_t x8_3 = 1 | (0x7fffffffffffffff & x0_1) << 1
v0.q = 0
v0:8.q = 0
*(arg1 + 0x20) = zx.o(0)
int64_t entry_x3
int64_t x8_4

x8_4 = x8_3 u< entry_x3 ? entry_x3 : x8_3

*(arg1 + 0x10) = arg2
*(arg1 + 0x18) = arg3
*(arg1 + 8) = x8_4
__builtin_memset(arg1 + 0x30, 0, 0x20)
char var_68[0x18]

if ((1 | (0x7fffffffffffffff & (**arg2)(arg2, v0)) << 1) u> *(arg1 + 8))
    void** x0_13 = __cxa_allocate_exception(0x20)
    Botan::Lion::name()
    int128_t* x0_16
    int128_t v0_2
    x0_16, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_68)
    int64_t var_40_2 = x0_16[1].q
    int128_t var_50_2 = *x0_16
    __builtin_memset(x0_16, 0, 0x18)
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t* x21_1 = *(arg1 + 0x18)
int64_t x0_5 = (***(arg1 + 0x10))()
int64_t result = (*(*x21_1 + 0x18))(x21_1)
int128_t var_50
int64_t var_40

if (var_50.q u<= x0_5 && var_50:8.q u>= x0_5 && x0_5 u% var_40 == 0)
    return result

void** x0_7 = __cxa_allocate_exception(0x20)
Botan::Lion::name()
int128_t* x0_10
int128_t v0_1
x0_10, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_68)
int64_t var_40_1 = x0_10[1].q
int128_t var_50_1 = *x0_10
__builtin_memset(x0_10, 0, 0x18)
*x0_7 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_7[1])
*x0_7 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
