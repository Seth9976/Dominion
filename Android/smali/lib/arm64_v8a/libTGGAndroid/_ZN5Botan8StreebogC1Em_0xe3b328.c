// 函数: _ZN5Botan8StreebogC1Em
// 地址: 0xe3b328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1 + 0x10, 0, 0x20)
*arg1 = _vtable_for_Botan::Streebog + 0x10
uint64_t entry_x1
*(arg1 + 8) = entry_x1
*(arg1 + 0x30) = 0
int64_t x0 = Botan::allocate_memory(0x40, 1)
*(arg1 + 0x20) = x0
*(arg1 + 0x30) = x0 + 0x40
__builtin_memset(x0, 0, 0x40)
*(arg1 + 0x38) = 0
*(arg1 + 0x28) = x0 + 0x40
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
int64_t x0_1 = Botan::allocate_memory(8, 8)
*(arg1 + 0x38) = x0_1
*(arg1 + 0x48) = x0_1 + 0x40
__builtin_memset(x0_1, 0, 0x40)
*(arg1 + 0x50) = 0
*(arg1 + 0x40) = x0_1 + 0x40
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
int64_t x0_2
int128_t v0
x0_2, v0 = Botan::allocate_memory(8, 8)
v0.q = 0
v0:8.q = 0
*(arg1 + 0x60) = x0_2 + 0x40
__builtin_memset(x0_2, 0, 0x40)
*(arg1 + 0x50) = x0_2
*(arg1 + 0x58) = x0_2 + 0x40

if (entry_x1 == 0x100 || entry_x1 == 0x200)
    return (*(*arg1 + 0x38))(arg1, v0)

void** x0_5 = __cxa_allocate_exception(0x20, v0)
std::__ndk1::to_string(entry_x1)
void var_78
int128_t* x0_8
int128_t v0_1
x0_8, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
int64_t var_50 = x0_8[1].q
int128_t var_60 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
