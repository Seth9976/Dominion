// 函数: _ZNK5Botan3TLS22TLS_CBC_HMAC_AEAD_Mode4nameEv
// 地址: 0xe855bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "TLS_CBC(", entry_x0 + 8)
char var_78[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
void* x8 = x0_1[1].q
int128_t var_60 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
*(entry_x0 + 0x28)
void* x1_2

if ((zx.d(*(entry_x0 + 0x20)) & 1) == 0)
    x1_2 = entry_x0 + 0x21
else
    x1_2 = *(entry_x0 + 0x30)

int128_t* x0_3
int128_t v0_1
x0_3, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_2)
void* x8_2 = x0_3[1].q
int128_t var_40 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int128_t* result
int128_t v0_2
result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_40)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_40.b) & 1) == 0)
    if ((zx.d(var_60.b) & 1) != 0)
        goto label_e856ac
    
    goto label_e85684

result = operator delete(x8_2)

if ((zx.d(var_60.b) & 1) == 0)
label_e85684:
    
    if ((zx.d(var_78[0]) & 1) == 0)
        return result
else
label_e856ac:
    result = operator delete(x8)
    
    if ((zx.d(var_78[0]) & 1) == 0)
        return result

void* var_68
return operator delete(var_68)
