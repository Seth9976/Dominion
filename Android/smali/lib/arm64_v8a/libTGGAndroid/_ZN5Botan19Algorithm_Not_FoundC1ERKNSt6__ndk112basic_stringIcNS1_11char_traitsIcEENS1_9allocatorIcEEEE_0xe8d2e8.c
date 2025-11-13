// 函数: _ZN5Botan19Algorithm_Not_FoundC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe8d2e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Could not find any algorithm named "", entry_x1)
char var_58[0x10]
int128_t* x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58)
void* x9 = x0_1[1].q
char v0 = (*x0_1).b
__builtin_memset(x0_1, 0, 0x18)
*arg1 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
*arg1 = _vtable_for_Botan::Lookup_Error + 0x10

if ((zx.d(v0) & 1) != 0)
    result = operator delete(x9)

void* var_48

if ((zx.d(var_58[0]) & 1) != 0)
    result = operator delete(var_48)
*arg1 = _vtable_for_Botan::Algorithm_Not_Found + 0x10
return result
