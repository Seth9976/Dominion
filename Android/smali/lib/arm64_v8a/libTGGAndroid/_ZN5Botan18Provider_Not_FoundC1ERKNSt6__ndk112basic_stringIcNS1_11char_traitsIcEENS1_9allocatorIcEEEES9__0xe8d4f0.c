// 函数: _ZN5Botan18Provider_Not_FoundC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xe8d4f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x2
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Could not find provider '", entry_x2)
char var_78[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
void* x8 = x0_1[1].q
int128_t var_60 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
*(arg2 + 8)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x1_2

if ((zx.d(*arg2) & 1) != 0)
    x1_2 = *(arg2 + 0x10)
else
    x1_2 = arg2 + 1

int128_t* x0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_2)
void* x9_1 = x0_3[1].q
char v0_1 = (*x0_3).b
__builtin_memset(x0_3, 0, 0x18)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
*arg1 = _vtable_for_Botan::Lookup_Error + 0x10

if ((zx.d(v0_1) & 1) == 0)
    if ((zx.d(var_60.b) & 1) != 0)
        goto label_e8d5fc
    
    goto label_e8d5bc

result = operator delete(x9_1)
void* var_68

if ((zx.d(var_60.b) & 1) == 0)
label_e8d5bc:
    
    if ((zx.d(var_78[0]) & 1) != 0)
        result = operator delete(var_68)
else
label_e8d5fc:
    result = operator delete(x8)
    
    if ((zx.d(var_78[0]) & 1) != 0)
        result = operator delete(var_68)
*arg1 = _vtable_for_Botan::Provider_Not_Found + 0x10
return result
