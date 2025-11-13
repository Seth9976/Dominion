// 函数: _ZNK5Botan7SipHash4nameEv
// 地址: 0xe25224
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
std::__ndk1::to_string(*(entry_x0 + 0x10))
char var_98
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_98, nullptr)
void* x8 = x0_2[1].q
int128_t var_80 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
int128_t* x0_4
int128_t v0_1
x0_4, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80)
void* x8_1 = x0_4[1].q
int128_t var_60 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
std::__ndk1::to_string(*(entry_x0 + 0x18))
char var_b0
void* var_a0
uint64_t x1_1

if ((zx.d(var_b0) & 1) == 0)
    x1_1 = &var_b0 | 1
else
    x1_1 = var_a0

int128_t* x0_7
int128_t v0_2
x0_7, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_1)
void* x8_3 = x0_7[1].q
int128_t var_40 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
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
        goto label_e25358
    
    goto label_e25320

result = operator delete(x8_3)

if ((zx.d(var_b0) & 1) != 0)
label_e25358:
    result = operator delete(var_a0)
    
    if ((zx.d(var_60.b) & 1) == 0)
        goto label_e25328
    
    goto label_e25368

label_e25320:

if ((zx.d(var_60.b) & 1) == 0)
label_e25328:
    
    if ((zx.d(var_80.b) & 1) != 0)
        goto label_e25378
    
    goto label_e25330

label_e25368:
result = operator delete(x8_1)

if ((zx.d(var_80.b) & 1) == 0)
label_e25330:
    
    if ((zx.d(var_98) & 1) == 0)
        return result
else
label_e25378:
    result = operator delete(x8)
    
    if ((zx.d(var_98) & 1) == 0)
        return result

void* var_88
return operator delete(var_88)
