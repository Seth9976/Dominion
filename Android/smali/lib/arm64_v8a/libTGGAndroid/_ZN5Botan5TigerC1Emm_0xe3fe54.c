// 函数: _ZN5Botan5TigerC1Emm
// 地址: 0xe3fe54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::MDx_HashFunction::MDx_HashFunction(arg1, true, false, 0)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
*arg1 = _vtable_for_Botan::Tiger + 0x10
*(arg1 + 0x38) = 0
int64_t x0 = Botan::allocate_memory(8, 8)
*(arg1 + 0x38) = x0
*(arg1 + 0x48) = x0 + 0x40
__builtin_memset(x0, 0, 0x40)
*(arg1 + 0x50) = 0
*(arg1 + 0x40) = x0 + 0x40
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
int64_t x0_1 = Botan::allocate_memory(3, 8)
*(arg1 + 0x60) = x0_1 + 0x18
*(arg1 + 0x68) = arg2
__builtin_memset(x0_1, 0, 0x18)
*(arg1 + 0x50) = x0_1
*(arg1 + 0x58) = x0_1 + 0x18
uint64_t entry_x2
*(arg1 + 0x70) = entry_x2
void var_78

if (arg2 u> 0x18 || (1 << arg2 & CardMeetsFlag) == 0)
    void** x0_9 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(*(arg1 + 0x68))
    int128_t* x0_12
    int128_t v0_1
    x0_12, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_78, nullptr)
    int64_t var_50_1 = x0_12[1].q
    int128_t var_60_1 = *x0_12
    __builtin_memset(x0_12, 0, 0x18)
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (entry_x2 u<= 2)
    void** x0_3 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(entry_x2)
    int128_t* x0_6
    int128_t v0
    x0_6, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_78, nullptr)
    int64_t var_50 = x0_6[1].q
    int128_t var_60 = *x0_6
    __builtin_memset(x0_6, 0, 0x18)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x0_2 = *(arg1 + 0x18)
int64_t x8_4 = *(arg1 + 0x20)

if (x8_4 != x0_2)
    memset(x0_2, 0, x8_4 - x0_2)

int64_t result = *(arg1 + 0x38)
int64_t x8_5 = *(arg1 + 0x40)
*(arg1 + 0x30) = 0
*(arg1 + 0x10) = 0

if (x8_5 != result)
    result = memset(result, 0, x8_5 - result)

**(arg1 + 0x50) = 0x123456789abcdef
*(*(arg1 + 0x50) + 8) = -0x123456789abcdf0
*(*(arg1 + 0x50) + 0x10) = -0xf695a4b3c4d1e79
return result
