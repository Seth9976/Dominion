// 函数: _ZNK5Botan4Lion4nameEv
// 地址: 0xd963c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 0x10) + 0x40))()
char var_e8
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_e8, nullptr)
void* x8 = x0_2[1].q
int128_t var_d0 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
int128_t* x0_4
int128_t v0_1
x0_4, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_d0)
void* x8_1 = x0_4[1].q
int128_t var_b0 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
(*(**(entry_x0 + 0x18) + 0x20))()
char var_100
void* var_f0
uint64_t x1_1

if ((zx.d(var_100) & 1) == 0)
    x1_1 = &var_100 | 1
else
    x1_1 = var_f0

int128_t* x0_7
int128_t v0_2
x0_7, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_b0, x1_1)
void* x8_4 = x0_7[1].q
int128_t var_90 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
int128_t* x0_9
int128_t v0_3
x0_9, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90)
void* x8_5 = x0_9[1].q
int128_t var_70 = *x0_9
__builtin_memset(x0_9, 0, 0x18)
std::__ndk1::to_string(*(entry_x0 + 8))
char var_118
void* var_108
uint64_t x1_3

if ((zx.d(var_118) & 1) == 0)
    x1_3 = &var_118 | 1
else
    x1_3 = var_108

int128_t* x0_12
int128_t v0_4
x0_12, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70, x1_3)
void* x8_7 = x0_12[1].q
int128_t var_50 = *x0_12
__builtin_memset(x0_12, 0, 0x18)
int128_t* result
int128_t v0_5
result, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_50)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_50.b) & 1) == 0)
    if ((zx.d(var_118) & 1) != 0)
        goto label_d965a8
    
    goto label_d9654c

result = operator delete(x8_7)

if ((zx.d(var_118) & 1) != 0)
label_d965a8:
    result = operator delete(var_108)
    
    if ((zx.d(var_70.b) & 1) == 0)
        goto label_d96554
    
    goto label_d965b8

label_d9654c:

if ((zx.d(var_70.b) & 1) == 0)
label_d96554:
    
    if ((zx.d(var_90.b) & 1) != 0)
        goto label_d965c8
    
    goto label_d9655c

label_d965b8:
result = operator delete(x8_5)

if ((zx.d(var_90.b) & 1) != 0)
label_d965c8:
    result = operator delete(x8_4)
    
    if ((zx.d(var_100) & 1) == 0)
        goto label_d96564
    
    goto label_d965d8

label_d9655c:

if ((zx.d(var_100) & 1) == 0)
label_d96564:
    
    if ((zx.d(var_b0.b) & 1) != 0)
        goto label_d965e8
    
    goto label_d9656c

label_d965d8:
result = operator delete(var_f0)

if ((zx.d(var_b0.b) & 1) != 0)
label_d965e8:
    result = operator delete(x8_1)
    
    if ((zx.d(var_d0.b) & 1) == 0)
        goto label_d96574
    
    goto label_d965f8

label_d9656c:

if ((zx.d(var_d0.b) & 1) != 0)
label_d965f8:
    result = operator delete(x8)
    
    if ((zx.d(var_e8) & 1) == 0)
        return result
else
label_d96574:
    
    if ((zx.d(var_e8) & 1) == 0)
        return result

void* var_d8
return operator delete(var_d8)
