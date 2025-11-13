// 函数: _ZN5Botan13monty_inverseEj
// 地址: 0xdd1460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1 & 1) != 0)
    uint32_t x8 = 0
    uint32_t x9 = 1
    int64_t i_1 = 0x20
    int64_t i
    
    do
        x8 = ((x9 << 0x20 | x8) u>> 1).d
        i = i_1
        i_1 -= 1
        x9 = (x9 - (x9 & 1) * arg1) u>> 1
    while (i != 1)
    return zx.q(neg.d(x8))

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
(*"for odd integers")[0].o
int64_t var_30 = x0_2
v0 = data_71cbb0
__builtin_strncpy(x0_2, "monty_inverse only valid for odd integers", 0x2a)
int128_t var_40 = v0
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
