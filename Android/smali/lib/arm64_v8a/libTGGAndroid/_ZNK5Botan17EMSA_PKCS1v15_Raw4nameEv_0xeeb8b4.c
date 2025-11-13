// 函数: _ZNK5Botan17EMSA_PKCS1v15_Raw4nameEv
// 地址: 0xeeb8b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t x9 = zx.q(*(entry_x0 + 0x10))
int128_t* entry_x8

if ((x9.d & 1) != 0)
    if (*(entry_x0 + 0x18) == 0)
    label_eeb944:
        *entry_x8 = 0x14
        __builtin_strncpy(entry_x8 + 1, "EMSA3(Raw)", 0xb)
        return 
else if (x9 u>> 1 == 0)
    goto label_eeb944

std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "EMSA3(Raw,", entry_x0 + 0x10)
char var_28[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_28)
entry_x8[1].q = x0_1[1].q
*entry_x8 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
void* var_18

if ((zx.d(var_28[0]) & 1) != 0)
    operator delete(var_18)
