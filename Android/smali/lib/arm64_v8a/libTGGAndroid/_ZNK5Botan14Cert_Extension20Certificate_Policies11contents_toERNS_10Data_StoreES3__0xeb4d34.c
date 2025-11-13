// 函数: _ZNK5Botan14Cert_Extension20Certificate_Policies11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb4d34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x10) == *(arg1 + 8))
    return 

int128_t v1 = data_71bd10
int64_t x21_1 = 0
int64_t i = 0
int128_t var_a0
__builtin_strncpy(&var_a0, "tificatePoliciesX509v3.Certifica", 0x20)

do
    void* x0
    int128_t v0_1
    x0, v0_1 = operator new(0x20)
    *(x0 + 0x1a) = 0
    int128_t var_50 = v1
    *(x0 + 0xa) = var_a0
    __builtin_strncpy(x0, "X509v3.Certifica", 0x10)
    Botan::OID::to_string()
    char var_68
    Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg2, &var_50, &var_68)
    void* var_58
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    if ((zx.d(var_50.b) & 1) != 0)
        operator delete(x0)
    
    i += 1
    x21_1 += 0x20
while (i != (*(arg1 + 0x10) - *(arg1 + 8)) s>> 5)
