// 函数: _ZN5Botan8SIV_ModeC2EPNS_11BlockCipherE
// 地址: 0xe254a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::SIV_Mode + 0x10
int64_t* entry_x1
(*(*entry_x1 + 0x20))(entry_x1)
char var_60[0x10]
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
v0 = *x0_2
*(arg1 + 0x18) = x0_2[1].q
*(arg1 + 8) = v0
__builtin_memset(x0_2, 0, 0x18)
void* var_50

if ((zx.d(var_60[0]) & 1) != 0)
    operator delete(var_50)
Botan::BlockCipher* x0_4 = operator new(0x78)
Botan::CTR_BE::CTR_BE(x0_4, (*(*entry_x1 + 0x68))(entry_x1))
*(arg1 + 0x20) = x0_4
Botan::BlockCipher* x0_8 = operator new(0x88)
Botan::CMAC::CMAC(x0_8)
int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x28) = x0_8
__builtin_memset(arg1 + 0x40, 0, 0x38)
int64_t result = (*(*entry_x1 + 0x30))(entry_x1, v0_1)
*(arg1 + 0x78) = result

if (result == 0x10)
    return result

void** x0_10 = __cxa_allocate_exception(0x20)
int64_t x0_11 = operator new(0x30)
int64_t var_50_1 = x0_11
__builtin_strncpy(x0_11, "SIV requires a 128 bit block cipher", 0x24)
__builtin_memcpy(&var_60, "\x31\x00\x00\x00\x00\x00\x00\x00\x23\x00\x00\x00\x00\x00\x00\x00", 0x10)
*x0_10 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_10[1])
*x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
