// 函数: _ZN5Botan8XTS_ModeC2EPNS_11BlockCipherE
// 地址: 0xed61f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 0x20) = zx.o(0)
*arg1 = _vtable_for_Botan::XTS_Mode + 0x10
int64_t* entry_x1
*(arg1 + 8) = entry_x1
*(arg1 + 0x10) = zx.o(0)
int64_t x0_1 = (*(*entry_x1 + 0x30))(entry_x1, v0)
int64_t* x22 = *(arg1 + 8)
*(arg1 + 0x30) = x0_1
int64_t x0_3 = (*(*x22 + 0x38))(x22)
int64_t x0_5 = (*(*x22 + 0x30))(x22)
int64_t x8_7 = *(arg1 + 0x30)
*(arg1 + 0x38) = (x0_3 * x0_5) << 2

if ((x8_7 - 8 u<= 0x38 && (1 << (x8_7 - 8) & 0x100000001010101) != 0) || x8_7 == 0x80)
    int64_t x0_7 = (*(**(arg1 + 8) + 0x68))()
    int64_t* result = *(arg1 + 0x10)
    *(arg1 + 0x10) = x0_7
    
    if (result == 0)
        return result
    
    jump(*(*result + 8))

void** x0_8 = __cxa_allocate_exception(0x20)
(*(*entry_x1 + 0x20))(entry_x1)
void var_88
int128_t* x0_11
int128_t v0_1
x0_11, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_88, nullptr)
int64_t var_60 = x0_11[1].q
int128_t var_70 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* x0_13
int128_t v0_2
x0_13, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
int64_t var_40 = x0_13[1].q
int128_t var_50 = *x0_13
__builtin_memset(x0_13, 0, 0x18)
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
