// 函数: _ZN5Botan7BLAKE2bC1Em
// 地址: 0xce22d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::BLAKE2b + 0x10
int64_t entry_x1
*(arg1 + 8) = entry_x1
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
int64_t x0 = Botan::allocate_memory(0x80, 1)
*(arg1 + 0x20) = x0 + 0x80
__builtin_memset(x0, 0, 0x80)
*(arg1 + 0x10) = x0
*(arg1 + 0x18) = x0 + 0x80
__builtin_memset(arg1 + 0x28, 0, 0x20)
int64_t* result
int128_t v0
result, v0 = Botan::allocate_memory(8, 8)
v0.q = 0
v0:8.q = 0
*(arg1 + 0x40) = &result[8]
__builtin_memset(result, 0, 0x40)
*(arg1 + 0x30) = result
*(arg1 + 0x38) = &result[8]

if (entry_x1 - 1 u<= 0x1ff && (entry_x1 & 7) == 0)
    __builtin_memcpy(result, 
        "\x08\xc9\xbc\xf3\x67\xe6\x09\x6a\x3b\xa7\xca\x84\x85\xae\x67\xbb\x2b\xf8\x94\xfe\x72\xf3\x6e\x"
    "3c\xf1\x36\x1d\x5f\x3a\xf5\x4f\xa5\xd1\x82\xe6\xad\x7f\x52\x0e\x51\x1f\x6c\x3e\x2b\x8c\x68\x05"
    "9b\x6b\xbd\x41\xfb\xab\xd9\x83\x1f\x79\x21\x7e\x13\x19\xcd\xe0\x5b", 
        0x40)
    *result = (*(arg1 + 8) u>> 3 & 0xff) ^ 0x6a09e667f2bdc908
    *(arg1 + 0x28) = 0
    __builtin_memset(arg1 + 0x48, 0, 0x20)
    return result

int64_t* var_28 = arg1 + 0x10
void** x0_1 = __cxa_allocate_exception(0x20, v0)
int64_t x0_2
int128_t v0_1
x0_2, v0_1 = operator new(0x30)
int64_t var_40 = x0_2
v0_1 = data_71bb40
__builtin_strncpy(x0_2, "Bad output bits size for BLAKE2b", 0x21)
int128_t var_50 = v0_1
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
