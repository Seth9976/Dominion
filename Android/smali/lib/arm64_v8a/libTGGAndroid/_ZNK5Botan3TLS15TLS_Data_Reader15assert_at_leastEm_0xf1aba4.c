// 函数: _ZNK5Botan3TLS15TLS_Data_Reader15assert_at_leastEm
// 地址: 0xf1aba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)
uint64_t entry_x1

if (x8[1] - *x8 - *(arg1 + 0x10) u>= entry_x1)
    return 

void* x0 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(entry_x1)
void var_b8
int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_b8, nullptr)
int64_t var_90 = x0_3[1].q
int128_t var_a0 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a0)
int64_t var_70 = x0_5[1].q
int128_t var_80 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
int64_t* x8_6 = *(arg1 + 8)
std::__ndk1::to_string(x8_6[1] - *x8_6 - *(arg1 + 0x10))
char var_d0
uint64_t x1_1
uint64_t var_c0

if ((zx.d(var_d0) & 1) == 0)
    x1_1 = &var_d0 | 1
else
    x1_1 = var_c0
int128_t* x0_8
int128_t v0_2
x0_8, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80, x1_1)
int64_t var_50 = x0_8[1].q
int128_t var_60 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
int128_t* x0_10
int128_t v0_3
x0_10, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
int64_t var_30 = x0_10[1].q
int128_t var_40 = *x0_10
__builtin_memset(x0_10, 0, 0x18)
Botan::TLS::TLS_Data_Reader::decode_error(arg1)
__cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
