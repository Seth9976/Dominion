// 函数: _ZNK5Botan8CCM_Mode4nameEv
// 地址: 0xcf1edc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
(*(*entry_x0[3] + 0x20))()
char var_b8[0x10]
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_b8)
void* x8 = x0_2[1].q
int128_t var_a0 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
std::__ndk1::to_string((*(*entry_x0 + 0x80))(entry_x0))
char var_d0
void* var_c0
uint64_t x1_1

if ((zx.d(var_d0) & 1) == 0)
    x1_1 = &var_d0 | 1
else
    x1_1 = var_c0

int128_t* x0_6
int128_t v0_1
x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a0, x1_1)
void* x8_4 = x0_6[1].q
int128_t var_80 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
int128_t* x0_8
int128_t v0_2
x0_8, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80)
void* x8_5 = x0_8[1].q
int128_t var_60 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
std::__ndk1::to_string(entry_x0[2])
char var_e8
void* var_d8
uint64_t x1_3

if ((zx.d(var_e8) & 1) == 0)
    x1_3 = &var_e8 | 1
else
    x1_3 = var_d8

int128_t* x0_11
int128_t v0_3
x0_11, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_3)
void* x8_7 = x0_11[1].q
int128_t var_40 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* result
int128_t v0_4
result, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_40)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_40.b) & 1) == 0)
    if ((zx.d(var_e8) & 1) != 0)
        goto label_cf2080
    
    goto label_cf2038

result = operator delete(x8_7)

if ((zx.d(var_e8) & 1) != 0)
label_cf2080:
    result = operator delete(var_d8)
    
    if ((zx.d(var_60.b) & 1) == 0)
        goto label_cf2040
    
    goto label_cf2090

label_cf2038:

if ((zx.d(var_60.b) & 1) == 0)
label_cf2040:
    
    if ((zx.d(var_80.b) & 1) != 0)
        goto label_cf20a0
    
    goto label_cf2048

label_cf2090:
result = operator delete(x8_5)

if ((zx.d(var_80.b) & 1) != 0)
label_cf20a0:
    result = operator delete(x8_4)
    
    if ((zx.d(var_d0) & 1) == 0)
        goto label_cf2050
    
    goto label_cf20b0

label_cf2048:

if ((zx.d(var_d0) & 1) == 0)
label_cf2050:
    
    if ((zx.d(var_a0.b) & 1) != 0)
        goto label_cf20c0
    
    goto label_cf2058

label_cf20b0:
result = operator delete(var_c0)

if ((zx.d(var_a0.b) & 1) == 0)
label_cf2058:
    
    if ((zx.d(var_b8[0]) & 1) == 0)
        return result
else
label_cf20c0:
    result = operator delete(x8)
    
    if ((zx.d(var_b8[0]) & 1) == 0)
        return result

void* var_a8
return operator delete(var_a8)
