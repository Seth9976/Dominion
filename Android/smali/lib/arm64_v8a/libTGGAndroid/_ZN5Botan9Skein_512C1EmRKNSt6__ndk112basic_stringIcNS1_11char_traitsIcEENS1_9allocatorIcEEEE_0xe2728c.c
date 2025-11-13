// 函数: _ZN5Botan9Skein_512C1EmRKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe2728c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Skein_512 + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
*(arg1 + 0x20) = arg2
void** x0_1 = operator new(0x38)
__builtin_memset(&x0_1[1], 0, 0x30)
*x0_1 = _vtable_for_Botan::Threefish_512 + 0x10
*(arg1 + 0x30) = 0
*(arg1 + 0x28) = x0_1
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
int64_t* x0_2 = Botan::allocate_memory(2, 8)
*(arg1 + 0x30) = x0_2
*(arg1 + 0x40) = &x0_2[2]
*x0_2 = 0
x0_2[1] = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x38) = &x0_2[2]
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
int64_t x0_3
int128_t v0
x0_3, v0 = Botan::allocate_memory(0x40, 1)
v0.q = 0
v0:8.q = 0
*(arg1 + 0x58) = x0_3 + 0x40
*(arg1 + 0x60) = 0
__builtin_memset(x0_3, 0, 0x40)
int64_t x8_3 = *(arg1 + 0x20)
*(arg1 + 0x48) = x0_3
*(arg1 + 0x50) = x0_3 + 0x40

if (x8_3 - 1 u<= 0x1ff && (x8_3 & 7) == 0)
    return Botan::Skein_512::initial_block()

int64_t* var_38 = arg1 + 0x30
void** x0_6 = __cxa_allocate_exception(0x20, v0)
int64_t x0_7
int128_t v0_1
x0_7, v0_1 = operator new(0x30)
v0_1 = data_71d3f0
int64_t var_50 = x0_7
__builtin_strncpy(x0_7, "Bad output bits size for Skein-512", 0x23)
int128_t var_60 = v0_1
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
