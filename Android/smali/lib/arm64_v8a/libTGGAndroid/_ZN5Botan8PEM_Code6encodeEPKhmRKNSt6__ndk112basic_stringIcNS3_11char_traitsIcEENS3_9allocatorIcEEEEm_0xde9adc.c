// 函数: _ZN5Botan8PEM_Code6encodeEPKhmRKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEm
// 地址: 0xde9adc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "-----BEGIN ", arg3)
char var_70
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
void* x8 = x0_1[1].q
int128_t var_50 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
void* var_60

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "-----END ", arg3)
char var_90[0x10]
int128_t* x0_4
int128_t v0_1
x0_4, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90)
void* x8_2 = x0_4[1].q
var_70.o = *x0_4
__builtin_memset(x0_4, 0, 0x18)
void* var_80

if ((zx.d(var_90[0]) & 1) != 0)
    operator delete(var_80)
Botan::base64_encode(arg1, arg2)
char var_c0
uint64_t x8_4 = zx.q(var_c0)
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x18)
uint64_t var_b8
uint64_t x9_1

if ((x8_4.d & 1) == 0)
    x9_1 = x8_4 u>> 1
else
    x9_1 = var_b8

void* var_b0
void* var_98

if (x9_1 != 0)
    int64_t x21_1 = 0
    uint64_t x9_6
    
    do
        if (x21_1 != 0 && x21_1 u% arg4 == 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                &var_a8)
            x8_4 = zx.q(var_c0)
        
        void* x8_5
        
        if ((x8_4.d & 1) == 0)
            x8_5 = &var_c0 | 1
        else
            x8_5 = var_b0
        
        *(x8_5 + x21_1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            &var_a8)
        x8_4 = zx.q(var_c0)
        x21_1 += 1
        
        if ((x8_4.d & 1) == 0)
            x9_6 = x8_4 u>> 1
        else
            x9_6 = var_b8
    while (x21_1 != x9_6)
    uint64_t x8_6 = zx.q(var_a8.b)
    void* var_a0
    
    if ((x8_6.d & 1) != 0)
        if (var_a0 != 0 && zx.d(*(var_a0 + var_98 - 1)) != 0xa)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                &var_a8)
    else if (x8_6.d u>= 2 && zx.d(*((x8_6 u>> 1) + (&var_a8 | 1) - 1)) != 0xa)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            &var_a8)

uint64_t x2

if ((zx.d(var_50.b) & 1) == 0)
    x2 = &var_50 | 1
else
    x2 = x8

int128_t* x0_11
int128_t v0_2
x0_11, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_a8, nullptr, x2)
void* x8_14 = x0_11[1].q
var_90 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
uint64_t x1_8

if ((zx.d(var_70) & 1) == 0)
    x1_8 = &var_70 | 1
else
    x1_8 = x8_2

int128_t* result
int128_t v0_3
result, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90, x1_8)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_90[0]) & 1) == 0)
    if ((zx.d(var_a8.b) & 1) != 0)
        goto label_de9d60
    
    goto label_de9d1c

result = operator delete(x8_14)

if ((zx.d(var_a8.b) & 1) != 0)
label_de9d60:
    result = operator delete(var_98)
    
    if ((zx.d(var_c0) & 1) == 0)
        goto label_de9d24
    
    goto label_de9d70

label_de9d1c:

if ((zx.d(var_c0) & 1) == 0)
label_de9d24:
    
    if ((zx.d(var_70) & 1) != 0)
        goto label_de9d80
    
    goto label_de9d2c

label_de9d70:
result = operator delete(var_b0)

if ((zx.d(var_70) & 1) == 0)
label_de9d2c:
    
    if ((zx.d(var_50.b) & 1) != 0)
        return operator delete(x8)
else
label_de9d80:
    result = operator delete(x8_2)
    
    if ((zx.d(var_50.b) & 1) != 0)
        return operator delete(x8)

return result
