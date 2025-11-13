// 函数: _ZN5Botan8GCM_ModeC2EPNS_11BlockCipherEm
// 地址: 0xd80dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::GCM_Mode + 0x10
int64_t entry_x2
*(arg1 + 8) = entry_x2
(*(*arg2 + 0x20))(arg2)
Botan::BlockCipher* x0_1 = operator new(0x78)
Botan::CTR_BE::CTR_BE(x0_1, arg2)
*(arg1 + 0x28) = x0_1
void** x0_2
int128_t v0
x0_2, v0 = operator new(0xa8)
v0.q = 0
v0:8.q = 0
*(x0_2 + 8) = zx.o(0)
*x0_2 = _vtable_for_Botan::GHASH + 0x10
__builtin_memset(&x0_2[3], 0, 0x90)
*(arg1 + 0x38) = 0
*(arg1 + 0x30) = x0_2
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
int64_t result = (*(*arg2 + 0x30))(arg2, v0)

if (result != 0x10)
    void* __offset(Botan::BlockCipher, 0x38) var_a8_1 = arg1 + 0x38
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0_3
    x0_14, v0_3 = operator new(0x20)
    int64_t var_40_1 = x0_14
    int128_t var_50_1 = data_71d400
    __builtin_strncpy(x0_14, "Invalid block cipher for GCM", 0x1d)
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x8_6 = *(arg1 + 8)

if (x8_6 - 0xc u< 5 || x8_6 == 8)
    return result

void* __offset(Botan::BlockCipher, 0x38) var_a8 = arg1 + 0x38
void** x0_4 = __cxa_allocate_exception(0x20)
(*(*arg1 + 0x20))(arg1)
char var_88[0x18]
int128_t* x0_7
int128_t v0_1
x0_7, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_88)
int64_t var_60 = x0_7[1].q
int128_t var_70 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
std::__ndk1::to_string(*(arg1 + 8))
char var_a0
uint64_t x1_2
uint64_t var_90

if ((zx.d(var_a0) & 1) == 0)
    x1_2 = &var_a0 | 1
else
    x1_2 = var_90
int128_t* x0_10
int128_t v0_2
x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70, x1_2)
int64_t var_40 = x0_10[1].q
int128_t var_50 = *x0_10
__builtin_memset(x0_10, 0, 0x18)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
