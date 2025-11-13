// 函数: _ZNK5Botan8XTS_Mode4nameEv
// 地址: 0xed6510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 8) + 0x20))()
char var_28[0x10]
int128_t* result
int128_t v0
result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_28)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_28[0]) & 1) == 0)
    return result

void* var_18
return operator delete(var_18)
