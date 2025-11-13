// 函数: _ZNK5Botan14Cert_Extension14Subject_Key_ID11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb123c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
int128_t v0
x0, v0 = operator new(0x20)
int128_t var_50 = data_71abe0
__builtin_strncpy(x0, "X509v3.SubjectKeyIdentifier", 0x1c)
uint8_t* x0_1 = *(arg1 + 8)
Botan::hex_encode(x0_1, *(arg1 + 0x10) - x0_1, true)
char var_38
int64_t result = Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg2, &var_50, &var_38)

if ((zx.d(var_38) & 1) != 0)
    void* var_28
    result = operator delete(var_28)
    
    if ((zx.d(var_50.b) & 1) != 0)
        return operator delete(x0)
else if ((zx.d(var_50.b) & 1) != 0)
    return operator delete(x0)

return result
