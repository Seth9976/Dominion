// 函数: _ZNK5Botan12ISO_9796_DS24nameEv
// 地址: 0xd90a34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 8) + 0x40))()
char var_d8
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_d8, nullptr)
void* x8 = x0_2[1].q
int128_t var_c0 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
int128_t* x0_4
int128_t v0_1
x0_4, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_c0)
void* x8_1 = x0_4[1].q
int128_t var_a0 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
*(entry_x0 + 0x10)
int128_t* x0_6
int128_t v0_2
x0_6, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a0)
void* x8_3 = x0_6[1].q
int128_t var_80 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
int128_t* x0_8
int128_t v0_3
x0_8, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80)
void* x8_4 = x0_8[1].q
int128_t var_60 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
std::__ndk1::to_string(*(entry_x0 + 0x18))
char var_f0
void* var_e0
uint64_t x1_3

if ((zx.d(var_f0) & 1) == 0)
    x1_3 = &var_f0 | 1
else
    x1_3 = var_e0

int128_t* x0_11
int128_t v0_4
x0_11, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_3)
void* x8_6 = x0_11[1].q
int128_t var_40 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* result
int128_t v0_5
result, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_40)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_40.b) & 1) == 0)
    if ((zx.d(var_f0) & 1) != 0)
        goto label_d90be4
    
    goto label_d90b9c

result = operator delete(x8_6)

if ((zx.d(var_f0) & 1) != 0)
label_d90be4:
    result = operator delete(var_e0)
    
    if ((zx.d(var_60.b) & 1) == 0)
        goto label_d90ba4
    
    goto label_d90bf4

label_d90b9c:

if ((zx.d(var_60.b) & 1) == 0)
label_d90ba4:
    
    if ((zx.d(var_80.b) & 1) != 0)
        goto label_d90c04
    
    goto label_d90bac

label_d90bf4:
result = operator delete(x8_4)

if ((zx.d(var_80.b) & 1) != 0)
label_d90c04:
    result = operator delete(x8_3)
    
    if ((zx.d(var_a0.b) & 1) == 0)
        goto label_d90bb4
    
    goto label_d90c14

label_d90bac:

if ((zx.d(var_a0.b) & 1) == 0)
label_d90bb4:
    
    if ((zx.d(var_c0.b) & 1) != 0)
        goto label_d90c24
    
    goto label_d90bbc

label_d90c14:
result = operator delete(x8_1)

if ((zx.d(var_c0.b) & 1) == 0)
label_d90bbc:
    
    if ((zx.d(var_d8) & 1) == 0)
        return result
else
label_d90c24:
    result = operator delete(x8)
    
    if ((zx.d(var_d8) & 1) == 0)
        return result

void* var_c8
return operator delete(var_c8)
