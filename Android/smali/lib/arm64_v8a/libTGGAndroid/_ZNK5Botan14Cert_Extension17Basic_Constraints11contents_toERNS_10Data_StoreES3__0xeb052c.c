// 函数: _ZNK5Botan14Cert_Extension17Basic_Constraints11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb052c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
int128_t v0
x0, v0 = operator new(0x20)
int128_t var_50 = data_71cd20
__builtin_strncpy(x0, "X509v3.BasicConstraints.is_ca", 0x1e)
std::__ndk1::to_string(zx.d(*(arg1 + 8)))
char var_38
Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg2, &var_50, &var_38)
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(x0)

void* x0_5
int128_t v0_1
x0_5, v0_1 = operator new(0x30)
var_50 = data_71c500
__builtin_strncpy(x0_5, "X509v3.BasicConstraints.path_constraint", 0x28)
std::__ndk1::to_string(*(arg1 + 0x10))
int64_t result = Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg2, &var_50, &var_38)

if ((zx.d(var_38) & 1) != 0)
    result = operator delete(var_28)
    
    if ((zx.d(var_50.b) & 1) != 0)
        return operator delete(x0_5)
else if ((zx.d(var_50.b) & 1) != 0)
    return operator delete(x0_5)

return result
