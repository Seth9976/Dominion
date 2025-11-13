// 函数: _ZN5Botan11BER_Bad_TagC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8ASN1_TagESA_
// 地址: 0xcaff1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_b8[0x10]
sub_cafe1c(arg2, ": ", &var_b8)
std::__ndk1::to_string(arg3)
char var_d0
uint64_t var_c0
uint64_t x1

if ((zx.d(var_d0) & 1) == 0)
    x1 = &var_d0 | 1
else
    x1 = var_c0

int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_b8, x1)
void* x8_2 = x0_3[1].q
int128_t var_a0 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a0)
void* x8_3 = x0_5[1].q
int128_t var_80 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
uint32_t entry_x3
std::__ndk1::to_string(entry_x3)
char var_e8
uint64_t var_d8
uint64_t x1_2

if ((zx.d(var_e8) & 1) == 0)
    x1_2 = &var_e8 | 1
else
    x1_2 = var_d8

int128_t* x0_8
int128_t v0_2
x0_8, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80, x1_2)
void* x8_5 = x0_8[1].q
int128_t var_60 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "BER: ", &var_60)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
*arg1 = _vtable_for_Botan::Decoding_Error + 0x10
char var_48
void* var_38

if ((zx.d(var_48) & 1) != 0)
    result = operator delete(var_38)
*arg1 = _vtable_for_Botan::BER_Decoding_Error + 0x10

if ((zx.d(var_60.b) & 1) == 0)
    if ((zx.d(var_e8) & 1) != 0)
        goto label_cb00e0
    
    goto label_cb0084

result = operator delete(x8_5)

if ((zx.d(var_e8) & 1) != 0)
label_cb00e0:
    result = operator delete(var_d8)
    
    if ((zx.d(var_80.b) & 1) == 0)
        goto label_cb008c
    
    goto label_cb00f0

label_cb0084:

if ((zx.d(var_80.b) & 1) == 0)
label_cb008c:
    
    if ((zx.d(var_a0.b) & 1) != 0)
        goto label_cb0100
    
    goto label_cb0094

label_cb00f0:
result = operator delete(x8_3)

if ((zx.d(var_a0.b) & 1) != 0)
label_cb0100:
    result = operator delete(x8_2)
    
    if ((zx.d(var_d0) & 1) == 0)
        goto label_cb009c
    
    goto label_cb0110

label_cb0094:
void* var_a8

if ((zx.d(var_d0) & 1) != 0)
label_cb0110:
    result = operator delete(var_c0)
    
    if ((zx.d(var_b8[0]) & 1) != 0)
        result = operator delete(var_a8)
else
label_cb009c:
    
    if ((zx.d(var_b8[0]) & 1) != 0)
        result = operator delete(var_a8)
*arg1 = _vtable_for_Botan::BER_Bad_Tag + 0x10
return result
