// 函数: _ZN5Botan12System_ErrorC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi
// 地址: 0xe8dac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_58[0x10]
sub_cafe1c(arg2, " error code ", &var_58)
int32_t entry_x2
std::__ndk1::to_string(entry_x2)
char var_70
uint64_t var_60
uint64_t x1

if ((zx.d(var_70) & 1) == 0)
    x1 = &var_70 | 1
else
    x1 = var_60

int128_t* x0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58, x1)
void* x9_2 = x0_3[1].q
char v0 = (*x0_3).b
__builtin_memset(x0_3, 0, 0x18)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)

if ((zx.d(v0) & 1) == 0)
    if ((zx.d(var_70) & 1) != 0)
        goto label_e8dbb0
    
    goto label_e8db6c

result = operator delete(x9_2)
void* var_48

if ((zx.d(var_70) & 1) == 0)
label_e8db6c:
    
    if ((zx.d(var_58[0]) & 1) != 0)
        result = operator delete(var_48)
else
label_e8dbb0:
    result = operator delete(var_60)
    
    if ((zx.d(var_58[0]) & 1) != 0)
        result = operator delete(var_48)
*(arg1 + 0x20) = entry_x2
*arg1 = _vtable_for_Botan::System_Error + 0x10
return result
