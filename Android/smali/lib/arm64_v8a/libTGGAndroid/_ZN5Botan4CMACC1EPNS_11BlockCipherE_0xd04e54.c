// 函数: _ZN5Botan4CMACC1EPNS_11BlockCipherE
// 地址: 0xd04e54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x58) = zx.o(0)
*arg1 = _vtable_for_Botan::CMAC + 0x10
*(arg1 + 8) = _vtable_for_Botan::CMAC + 0x98
int64_t* entry_x1
*(arg1 + 0x10) = entry_x1
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x48) = zx.o(0)
*(arg1 + 0x68) = zx.o(0)
int64_t result = (*(*entry_x1 + 0x30))(entry_x1, v0)
*(arg1 + 0x78) = result

if ((result - 8 u> 0x38 || (1 << (result - 8) & 0x100000001010101) == 0) && result != 0x80)
    void** x0_5 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(*(arg1 + 0x78) << 3)
    void var_c8
    int128_t* x0_8
    int128_t v0_1
    x0_8, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_c8, nullptr)
    int64_t var_a0 = x0_8[1].q
    int128_t var_b0 = *x0_8
    __builtin_memset(x0_8, 0, 0x18)
    int128_t* x0_10
    int128_t v0_2
    x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_b0)
    int64_t var_80 = x0_10[1].q
    int128_t var_90 = *x0_10
    __builtin_memset(x0_10, 0, 0x18)
    (*(**(arg1 + 0x10) + 0x20))()
    char var_e0
    uint64_t x1_5
    uint64_t var_d0
    
    if ((zx.d(var_e0) & 1) == 0)
        x1_5 = &var_e0 | 1
    else
        x1_5 = var_d0
    int128_t* x0_13
    int128_t v0_3
    x0_13, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_90, x1_5)
    int64_t var_60 = x0_13[1].q
    int128_t var_70 = *x0_13
    __builtin_memset(x0_13, 0, 0x18)
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x8_5 = *(arg1 + 0x30)
int64_t x9_2 = *(arg1 + 0x38) - x8_5

if (result u> x9_2)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x30)
    result = *(arg1 + 0x78)
else if (result u< x9_2)
    *(arg1 + 0x38) = x8_5 + result

int64_t x8_7 = *(arg1 + 0x18)
int64_t x9_4 = *(arg1 + 0x20) - x8_7

if (result u> x9_4)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x18)
    result = *(arg1 + 0x78)
else if (result u< x9_4)
    *(arg1 + 0x20) = x8_7 + result

int64_t x8_9 = *(arg1 + 0x48)
int64_t x9_6 = *(arg1 + 0x50) - x8_9

if (result u> x9_6)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x48)
    result = *(arg1 + 0x78)
else if (result u< x9_6)
    *(arg1 + 0x50) = x8_9 + result

int64_t x8_11 = *(arg1 + 0x60)
int64_t x9_8 = *(arg1 + 0x68) - x8_11

if (result u> x9_8)
    result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x60)
else if (result u< x9_8)
    *(arg1 + 0x68) = x8_11 + result

*(arg1 + 0x80) = 0
return result
