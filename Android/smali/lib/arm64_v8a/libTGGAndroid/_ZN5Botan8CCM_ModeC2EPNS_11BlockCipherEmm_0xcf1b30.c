// 函数: _ZN5Botan8CCM_ModeC2EPNS_11BlockCipherEmm
// 地址: 0xcf1b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
uint64_t entry_x3
*(arg1 + 0x10) = entry_x3
*(arg1 + 0x18) = arg2
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x50) = zx.o(0)
*arg1 = _vtable_for_Botan::CCM_Mode + 0x10
*(arg1 + 8) = arg3
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x60) = 0
int64_t result = (*(*arg2 + 0x30))(arg2, v0)
char var_68[0x18]

if (result != 0x10)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t* x9 = *(arg1 + 0x18)
    (*(*x9 + 0x20))(x9)
    int128_t* x0_4
    int128_t v0_1
    x0_4, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_68)
    int64_t var_40 = x0_4[1].q
    int128_t var_50 = *x0_4
    __builtin_memset(x0_4, 0, 0x18)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (entry_x3 - 2 u>= 7)
    void** x0_7 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(entry_x3)
    int128_t* x0_10
    int128_t v0_2
    x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_68, nullptr)
    int64_t var_40_1 = x0_10[1].q
    int128_t var_50_1 = *x0_10
    __builtin_memset(x0_10, 0, 0x18)
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (arg3 - 4 u<= 0xc && (arg3.d & 1) == 0)
    return result

void** x0_13 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(arg3)
int128_t* x0_16
int128_t v0_3
x0_16, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_68, nullptr)
int64_t var_40_2 = x0_16[1].q
int128_t var_50_2 = *x0_16
__builtin_memset(x0_16, 0, 0x18)
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
*x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
