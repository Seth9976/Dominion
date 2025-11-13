// 函数: _ZN5Botan8CFB_ModeC2EPNS_11BlockCipherEm
// 地址: 0xcfe080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*arg1 = _vtable_for_Botan::CFB_Mode + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = arg2
uint64_t x0_1 = (*(*arg2 + 0x30))(arg2, v0)
uint64_t entry_x2
uint64_t x23

if (entry_x2 == 0)
    x23 = x0_1
else
    x23 = entry_x2 u>> 3

*(arg1 + 0x48) = x0_1
*(arg1 + 0x50) = x23

if ((entry_x2 & 7) == 0)
    int64_t result = (*(*arg2 + 0x30))(arg2)
    
    if (x23 u<= result)
        return result

void** x0_3 = __cxa_allocate_exception(0x20)
Botan::CFB_Mode::name()
char var_a8[0x18]
int128_t* x0_6
int128_t v0_1
x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a8)
int64_t var_80 = x0_6[1].q
int128_t var_90 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
std::__ndk1::to_string(entry_x2)
char var_c0
uint64_t x1_1
uint64_t var_b0

if ((zx.d(var_c0) & 1) == 0)
    x1_1 = &var_c0 | 1
else
    x1_1 = var_b0
int128_t* x0_9
int128_t v0_2
x0_9, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90, x1_1)
int64_t var_60 = x0_9[1].q
int128_t var_70 = *x0_9
__builtin_memset(x0_9, 0, 0x18)
int128_t* x0_11
int128_t v0_3
x0_11, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
int64_t var_40 = x0_11[1].q
int128_t var_50 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
*x0_3 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[1])
*x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
