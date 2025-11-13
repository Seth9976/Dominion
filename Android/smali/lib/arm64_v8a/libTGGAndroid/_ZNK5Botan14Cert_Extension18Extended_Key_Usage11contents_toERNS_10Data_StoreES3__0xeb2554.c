// 函数: _ZNK5Botan14Cert_Extension18Extended_Key_Usage11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb2554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x10) == *(arg1 + 8))
    return 

int128_t v1 = data_71c520
int64_t x21_1 = 0
int64_t i = 0
int128_t var_a0
__builtin_strncpy(&var_a0, "X509v3.ExtendedK", 0x10)

do
    int128_t* x0
    int128_t v0_1
    x0, v0_1 = operator new(0x20)
    __builtin_strncpy(x0 + 0xf, "KeyUsage", 9)
    int128_t var_60 = v1
    *x0 = var_a0
    Botan::OID::to_string()
    char var_78
    Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg2, &var_60, &var_78)
    void* var_68
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(x0)
    
    i += 1
    x21_1 += 0x20
while (i != (*(arg1 + 0x10) - *(arg1 + 8)) s>> 5)
