// 函数: _ZNK5Botan8EMSA_Raw4nameEv
// 地址: 0xd640a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t x0 = *(entry_x0 + 8)
int128_t* entry_x8

if (x0 == 0)
    *entry_x8 = 6
    *(entry_x8 + 1) = 0x776152
    return x0

std::__ndk1::to_string(x0)
char var_48
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_48, nullptr)
void* x8 = x0_2[1].q
int128_t var_30 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
int128_t* x0_4
int128_t v0_1
x0_4, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_30)
entry_x8[1].q = x0_4[1].q
*entry_x8 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
void* var_38

if ((zx.d(var_30.b) & 1) != 0)
    x0_4 = operator delete(x8)
    
    if ((zx.d(var_48) & 1) != 0)
        return operator delete(var_38)
else if ((zx.d(var_48) & 1) != 0)
    return operator delete(var_38)
return x0_4
