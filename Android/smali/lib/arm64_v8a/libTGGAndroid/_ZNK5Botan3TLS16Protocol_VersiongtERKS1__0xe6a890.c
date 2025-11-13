// 函数: _ZNK5Botan3TLS16Protocol_VersiongtERKS1_
// 地址: 0xe6a890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg1)
int16_t* entry_x1
uint32_t x10 = zx.d(*entry_x1)
uint32_t x9 = x8 u>> 8

if ((x9 u> 0xfa ? 1 : 0) == (x10 u>> 8 u> 0xfa ? 1 : 0))
    if (x9 u> 0xfa)
        return zx.q(x8 u< x10 ? 1 : 0)
    
    return zx.q(x8 u> x10 ? 1 : 0)

void** x0_1 = __cxa_allocate_exception(0x28)
Botan::TLS::Protocol_Version::to_string()
void var_98
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_98, nullptr)
int64_t var_70 = x0_4[1].q
int128_t var_80 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
int128_t* x0_6
int128_t v0_1
x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80)
int64_t var_50 = x0_6[1].q
int128_t var_60 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
Botan::TLS::Protocol_Version::to_string()
char var_b0
uint64_t x1_1
uint64_t var_a0

if ((zx.d(var_b0) & 1) == 0)
    x1_1 = &var_b0 | 1
else
    x1_1 = var_a0
int128_t* x0_9
int128_t v0_2
x0_9, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_1)
int64_t var_30 = x0_9[1].q
int128_t var_40 = *x0_9
__builtin_memset(x0_9, 0, 0x18)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
x0_1[4].d = 0x46
*x0_1 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
