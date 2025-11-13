// 函数: _ZN5Botan17Invalid_IV_LengthC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEm
// 地址: 0xe8cf0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x2
std::__ndk1::to_string(entry_x2)
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
*(arg2 + 8)
uint64_t x1_1

if ((zx.d(*arg2) & 1) != 0)
    x1_1 = *(arg2 + 0x10)
else
    x1_1 = arg2 + 1

int128_t* x0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_1)
void* x9_1 = x0_6[1].q
char v0_2 = (*x0_6).b
__builtin_memset(x0_6, 0, 0x18)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
*arg1 = _vtable_for_Botan::Invalid_Argument + 0x10

if ((zx.d(v0_2) & 1) == 0)
    if ((zx.d(var_60.b) & 1) != 0)
        goto label_e8d044
    
    goto label_e8cffc

result = operator delete(x9_1)

if ((zx.d(var_60.b) & 1) != 0)
label_e8d044:
    result = operator delete(x8_1)
    
    if ((zx.d(var_80.b) & 1) == 0)
        goto label_e8d004
    
    goto label_e8d054

label_e8cffc:
void* var_88

if ((zx.d(var_80.b) & 1) != 0)
label_e8d054:
    result = operator delete(x8)
    
    if ((zx.d(var_98) & 1) != 0)
        result = operator delete(var_88)
else
label_e8d004:
    
    if ((zx.d(var_98) & 1) != 0)
        result = operator delete(var_88)
*arg1 = _vtable_for_Botan::Invalid_IV_Length + 0x10
return result
