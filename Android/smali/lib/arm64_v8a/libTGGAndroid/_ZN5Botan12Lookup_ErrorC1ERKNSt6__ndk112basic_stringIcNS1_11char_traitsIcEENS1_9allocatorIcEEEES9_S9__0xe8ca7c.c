// 函数: _ZN5Botan12Lookup_ErrorC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_
// 地址: 0xe8ca7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Unavailable ", arg2)
char var_98[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_98)
void* x8 = x0_1[1].q
int128_t var_80 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
*(arg3 + 8)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x1_1

if ((zx.d(*arg3) & 1) != 0)
    x1_1 = *(arg3 + 0x10)
else
    x1_1 = arg3 + 1

int128_t* x0_3
int128_t v0_1
x0_3, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80, x1_1)
void* x8_2 = x0_3[1].q
int128_t var_60 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
char* entry_x3
uint64_t x8_3 = zx.q(*entry_x3)
uint64_t x8_4

if ((x8_3.d & 1) == 0)
    x8_4 = x8_3 u>> 1
else
    x8_4 = *(entry_x3 + 8)

int16_t var_b0

if (x8_4 == 0)
    var_b0 = 0
else
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        " for provider ", entry_x3)
    x8_4 = zx.q(var_b0.b)

void* var_a0
void* x1_3

if ((x8_4.d & 1) != 0)
    x1_3 = var_a0
else
    x1_3 = &var_b0:1

int128_t* x0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_3)
void* x9_2 = x0_5[1].q
char v0_2 = (*x0_5).b
__builtin_memset(x0_5, 0, 0x18)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)

if ((zx.d(v0_2) & 1) == 0)
    if ((zx.d(var_b0.b) & 1) != 0)
        goto label_e8cbf8
    
    goto label_e8cba8

result = operator delete(x9_2)

if ((zx.d(var_b0.b) & 1) != 0)
label_e8cbf8:
    result = operator delete(var_a0)
    
    if ((zx.d(var_60.b) & 1) == 0)
        goto label_e8cbb0
    
    goto label_e8cc08

label_e8cba8:

if ((zx.d(var_60.b) & 1) == 0)
label_e8cbb0:
    
    if ((zx.d(var_80.b) & 1) != 0)
        goto label_e8cc18
    
    goto label_e8cbb8

label_e8cc08:
result = operator delete(x8_2)
void* var_88

if ((zx.d(var_80.b) & 1) == 0)
label_e8cbb8:
    
    if ((zx.d(var_98[0]) & 1) != 0)
        result = operator delete(var_88)
else
label_e8cc18:
    result = operator delete(x8)
    
    if ((zx.d(var_98[0]) & 1) != 0)
        result = operator delete(var_88)
*arg1 = _vtable_for_Botan::Lookup_Error + 0x10
return result
