// 函数: _ZNK5Botan14Cert_Extension23CRL_Distribution_Points11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb6c1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19 = *(arg1 + 0x20)
int64_t x21 = *(arg1 + 0x28)

if (x19 == x21)
    return 

(*"CRL.DistributionPoint")[0].o
int128_t var_70
__builtin_strncpy(&var_70, "CRL.Distribution", 0x10)

do
    char var_58 = 0x2a
    __builtin_strncpy(&var_58 | 1, "CRL.DistributionPoint", 0x15)
    char var_42_1 = 0
    int128_t v0
    arg1, v0 = Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg2, &var_58, x19)
    void* var_48
    
    if ((zx.d(var_58) & 1) != 0)
        arg1, v0 = operator delete(var_48)
    x19 += 0x18
while (x21 != x19)
