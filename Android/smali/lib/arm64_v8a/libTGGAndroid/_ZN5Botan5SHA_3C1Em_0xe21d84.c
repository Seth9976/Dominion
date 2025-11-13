// 函数: _ZN5Botan5SHA_3C1Em
// 地址: 0xe21d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::SHA_3 + 0x10
uint64_t entry_x1
*(arg1 + 8) = entry_x1
*(arg1 + 0x10) = 0x640 - (entry_x1 << 1)
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
int64_t result
int128_t v0
result, v0 = Botan::allocate_memory(0x19, 8)
v0.q = 0
v0:8.q = 0
*(arg1 + 0x28) = result + 0xc8
*(arg1 + 0x30) = 0
__builtin_memset(result, 0, 0xc8)
*(arg1 + 0x18) = result
*(arg1 + 0x20) = result + 0xc8
int64_t x8_2 = ror.q(entry_x1 - 0xe0, 5)

if (x8_2 u<= 9 && (1 << x8_2 & 0x223) != 0)
    return result

int64_t* var_28 = arg1 + 0x18
void** x0 = __cxa_allocate_exception(0x20, v0)
std::__ndk1::to_string(entry_x1)
void var_68
int128_t* x0_3
int128_t v0_1
x0_3, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_68, nullptr)
int64_t var_40 = x0_3[1].q
int128_t var_50 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
