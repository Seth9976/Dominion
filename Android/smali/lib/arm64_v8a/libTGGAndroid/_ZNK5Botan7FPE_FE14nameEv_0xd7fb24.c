// 函数: _ZNK5Botan7FPE_FE14nameEv
// 地址: 0xd7fb24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(*(*(entry_x0 + 8) + 8) + 0x20))()
char var_98
int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_98, nullptr)
void* x8 = x0_3[1].q
int128_t var_80 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80)
void* x8_1 = x0_5[1].q
int128_t var_60 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
std::__ndk1::to_string(*(entry_x0 + 0x80))
char var_b0
void* var_a0
uint64_t x1_1

if ((zx.d(var_b0) & 1) == 0)
    x1_1 = &var_b0 | 1
else
    x1_1 = var_a0

int128_t* x0_8
int128_t v0_2
x0_8, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_1)
void* x8_3 = x0_8[1].q
int128_t var_40 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
int128_t* result
int128_t v0_3
result, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_40)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_40.b) & 1) == 0)
    if ((zx.d(var_b0) & 1) != 0)
        goto label_d7fc60
    
    goto label_d7fc28

result = operator delete(x8_3)

if ((zx.d(var_b0) & 1) != 0)
label_d7fc60:
    result = operator delete(var_a0)
    
    if ((zx.d(var_60.b) & 1) == 0)
        goto label_d7fc30
    
    goto label_d7fc70

label_d7fc28:

if ((zx.d(var_60.b) & 1) == 0)
label_d7fc30:
    
    if ((zx.d(var_80.b) & 1) != 0)
        goto label_d7fc80
    
    goto label_d7fc38

label_d7fc70:
result = operator delete(x8_1)

if ((zx.d(var_80.b) & 1) == 0)
label_d7fc38:
    
    if ((zx.d(var_98) & 1) == 0)
        return result
else
label_d7fc80:
    result = operator delete(x8)
    
    if ((zx.d(var_98) & 1) == 0)
        return result

void* var_88
return operator delete(var_88)
