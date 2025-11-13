// 函数: _ZN5Botan11BER_Bad_TagC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8ASN1_TagE
// 地址: 0xcafc3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_68[0x10]
sub_cafe1c(arg2, ": ", &var_68)
uint32_t entry_x2
std::__ndk1::to_string(entry_x2)
char var_80
uint64_t var_70
uint64_t x1

if ((zx.d(var_80) & 1) == 0)
    x1 = &var_80 | 1
else
    x1 = var_70

int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_68, x1)
void* x8_2 = x0_3[1].q
int128_t var_50 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "BER: ", &var_50)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
*arg1 = _vtable_for_Botan::Decoding_Error + 0x10
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    result = operator delete(var_28)
*arg1 = _vtable_for_Botan::BER_Decoding_Error + 0x10

if ((zx.d(var_50.b) & 1) == 0)
    if ((zx.d(var_80) & 1) != 0)
        goto label_cafd68
    
    goto label_cafd28

result = operator delete(x8_2)
void* var_58

if ((zx.d(var_80) & 1) == 0)
label_cafd28:
    
    if ((zx.d(var_68[0]) & 1) != 0)
        result = operator delete(var_58)
else
label_cafd68:
    result = operator delete(var_70)
    
    if ((zx.d(var_68[0]) & 1) != 0)
        result = operator delete(var_58)
*arg1 = _vtable_for_Botan::BER_Bad_Tag + 0x10
return result
