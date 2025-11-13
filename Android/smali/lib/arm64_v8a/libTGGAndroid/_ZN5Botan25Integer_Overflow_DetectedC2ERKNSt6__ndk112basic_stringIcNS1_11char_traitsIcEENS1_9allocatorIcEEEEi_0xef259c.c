// 函数: _ZN5Botan25Integer_Overflow_DetectedC2ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi
// 地址: 0xef259c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Integer overflow detected at ", arg2)
char var_78[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
void* x8 = x0_1[1].q
int128_t var_60 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
int32_t entry_x2
std::__ndk1::to_string(entry_x2)
char var_90
uint64_t var_80
uint64_t x1_1

if ((zx.d(var_90) & 1) == 0)
    x1_1 = &var_90 | 1
else
    x1_1 = var_80

int128_t* x0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_1)
void* x9_1 = x0_4[1].q
char v0_1 = (*x0_4).b
__builtin_memset(x0_4, 0, 0x18)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)

if ((zx.d(v0_1) & 1) == 0)
    if ((zx.d(var_90) & 1) != 0)
        goto label_ef26b0
    
    goto label_ef2668

result = operator delete(x9_1)

if ((zx.d(var_90) & 1) != 0)
label_ef26b0:
    result = operator delete(var_80)
    
    if ((zx.d(var_60.b) & 1) == 0)
        goto label_ef2670
    
    goto label_ef26c0

label_ef2668:
void* var_68

if ((zx.d(var_60.b) & 1) != 0)
label_ef26c0:
    result = operator delete(x8)
    
    if ((zx.d(var_78[0]) & 1) != 0)
        result = operator delete(var_68)
else
label_ef2670:
    
    if ((zx.d(var_78[0]) & 1) != 0)
        result = operator delete(var_68)
*arg1 = _vtable_for_Botan::Integer_Overflow_Detected + 0x10
return result
