// 函数: _ZNK5Botan6Argon29to_stringEv
// 地址: 0xcab638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_108
void* entry_x0
sub_caba6c(&var_108, *(entry_x0 + 8))
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_108)
void* x8 = x0_2[1].q
int128_t var_f0 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
std::__ndk1::to_string(*(entry_x0 + 0x10))
char var_120
void* var_110
uint64_t x1_2

if ((zx.d(var_120) & 1) == 0)
    x1_2 = &var_120 | 1
else
    x1_2 = var_110

int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_f0, x1_2)
void* x8_2 = x0_5[1].q
int128_t var_d0 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
int128_t* x0_7
int128_t v0_2
x0_7, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_d0)
void* x8_3 = x0_7[1].q
int128_t var_b0 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
std::__ndk1::to_string(*(entry_x0 + 0x18))
char var_138
void* var_128
uint64_t x1_4

if ((zx.d(var_138) & 1) == 0)
    x1_4 = &var_138 | 1
else
    x1_4 = var_128

int128_t* x0_10
int128_t v0_3
x0_10, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_b0, x1_4)
void* x8_5 = x0_10[1].q
int128_t var_90 = *x0_10
__builtin_memset(x0_10, 0, 0x18)
int128_t* x0_12
int128_t v0_4
x0_12, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90)
void* x8_6 = x0_12[1].q
int128_t var_70 = *x0_12
__builtin_memset(x0_12, 0, 0x18)
std::__ndk1::to_string(*(entry_x0 + 0x20))
char var_150
void* var_140
uint64_t x1_6

if ((zx.d(var_150) & 1) == 0)
    x1_6 = &var_150 | 1
else
    x1_6 = var_140

int128_t* x0_15
int128_t v0_5
x0_15, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70, x1_6)
void* x8_8 = x0_15[1].q
int128_t var_50 = *x0_15
__builtin_memset(x0_15, 0, 0x18)
int128_t* result
int128_t v0_6
result, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_50)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_50.b) & 1) == 0)
    if ((zx.d(var_150) & 1) != 0)
        goto label_cab860
    
    goto label_cab7f4

result = operator delete(x8_8)

if ((zx.d(var_150) & 1) != 0)
label_cab860:
    result = operator delete(var_140)
    
    if ((zx.d(var_70.b) & 1) == 0)
        goto label_cab7fc
    
    goto label_cab870

label_cab7f4:

if ((zx.d(var_70.b) & 1) == 0)
label_cab7fc:
    
    if ((zx.d(var_90.b) & 1) != 0)
        goto label_cab880
    
    goto label_cab804

label_cab870:
result = operator delete(x8_6)

if ((zx.d(var_90.b) & 1) != 0)
label_cab880:
    result = operator delete(x8_5)
    
    if ((zx.d(var_138) & 1) == 0)
        goto label_cab80c
    
    goto label_cab890

label_cab804:

if ((zx.d(var_138) & 1) == 0)
label_cab80c:
    
    if ((zx.d(var_b0.b) & 1) != 0)
        goto label_cab8a0
    
    goto label_cab814

label_cab890:
result = operator delete(var_128)

if ((zx.d(var_b0.b) & 1) != 0)
label_cab8a0:
    result = operator delete(x8_3)
    
    if ((zx.d(var_d0.b) & 1) == 0)
        goto label_cab81c
    
    goto label_cab8b0

label_cab814:

if ((zx.d(var_d0.b) & 1) == 0)
label_cab81c:
    
    if ((zx.d(var_120) & 1) != 0)
        goto label_cab8c0
    
    goto label_cab824

label_cab8b0:
result = operator delete(x8_2)

if ((zx.d(var_120) & 1) != 0)
label_cab8c0:
    result = operator delete(var_110)
    
    if ((zx.d(var_f0.b) & 1) == 0)
        goto label_cab82c
    
    goto label_cab8d0

label_cab824:

if ((zx.d(var_f0.b) & 1) != 0)
label_cab8d0:
    result = operator delete(x8)
    
    if ((zx.d(var_108) & 1) == 0)
        return result
else
label_cab82c:
    
    if ((zx.d(var_108) & 1) == 0)
        return result

void* var_f8
return operator delete(var_f8)
