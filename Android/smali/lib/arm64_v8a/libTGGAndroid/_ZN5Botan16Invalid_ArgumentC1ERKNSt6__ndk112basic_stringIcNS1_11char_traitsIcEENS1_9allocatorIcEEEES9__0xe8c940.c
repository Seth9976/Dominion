// 函数: _ZN5Botan16Invalid_ArgumentC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xe8c940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_58[0x10]
sub_cafe1c(arg2, " in ", &var_58)
char* entry_x2
*(entry_x2 + 8)
void* x1

if ((zx.d(*entry_x2) & 1) != 0)
    x1 = *(entry_x2 + 0x10)
else
    x1 = &entry_x2[1]

int128_t* x0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58, x1)
void* x9_2 = x0_2[1].q
char v0 = (*x0_2).b
__builtin_memset(x0_2, 0, 0x18)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)

if ((zx.d(v0) & 1) != 0)
    result = operator delete(x9_2)

void* var_48

if ((zx.d(var_58[0]) & 1) != 0)
    result = operator delete(var_48)
*arg1 = _vtable_for_Botan::Invalid_Argument + 0x10
return result
