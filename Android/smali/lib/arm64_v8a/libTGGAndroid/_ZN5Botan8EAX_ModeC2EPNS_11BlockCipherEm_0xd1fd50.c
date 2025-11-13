// 函数: _ZN5Botan8EAX_ModeC2EPNS_11BlockCipherEm
// 地址: 0xd1fd50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::EAX_Mode + 0x10
uint64_t entry_x2
*(arg1 + 8) = entry_x2
*(arg1 + 0x10) = arg2
Botan::BlockCipher* x0 = operator new(0x78)
(*(*arg2 + 0x68))(arg2)
Botan::CTR_BE::CTR_BE(x0)
*(arg1 + 0x18) = x0
Botan::BlockCipher* x0_4 = operator new(0x88)
(*(**(arg1 + 0x10) + 0x68))()
Botan::CMAC::CMAC(x0_4)
int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 0x28) = zx.o(0)
int64_t x23 = *(arg1 + 8)
*(arg1 + 0x20) = x0_4
__builtin_memset(arg1 + 0x38, 0, 0x20)

if (x23 u>= 8)
    int64_t result = (**x0_4)(x0_4, v0)
    
    if (x23 u<= result)
        return result

void** x0_9 = __cxa_allocate_exception(0x20)
(*(*arg1 + 0x20))(arg1)
char var_88[0x18]
int128_t* x0_12
int128_t v0_1
x0_12, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_88)
int64_t var_60 = x0_12[1].q
int128_t var_70 = *x0_12
__builtin_memset(x0_12, 0, 0x18)
std::__ndk1::to_string(entry_x2)
char var_a0
uint64_t x1_3
uint64_t var_90

if ((zx.d(var_a0) & 1) == 0)
    x1_3 = &var_a0 | 1
else
    x1_3 = var_90
int128_t* x0_15
int128_t v0_2
x0_15, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70, x1_3)
int64_t var_40 = x0_15[1].q
int128_t var_50 = *x0_15
__builtin_memset(x0_15, 0, 0x18)
*x0_9 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_9[1])
*x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
