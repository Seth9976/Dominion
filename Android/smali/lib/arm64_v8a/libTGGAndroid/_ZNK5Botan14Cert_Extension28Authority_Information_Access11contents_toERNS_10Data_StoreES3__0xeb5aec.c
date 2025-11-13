// 函数: _ZNK5Botan14Cert_Extension28Authority_Information_Access11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb5aec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 8))
Botan::Data_Store& x20 = arg1
char var_40
int128_t v1

if ((x8.d & 1) != 0)
    if (*(x20 + 0x10) != 0)
    label_eb5b34:
        var_40 = 0x1c
        int64_t var_3f
        __builtin_strncpy(&var_3f, "OCSP.responder", 0xf)
        arg1, v1 = Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            arg2, &var_40, arg1 + 8)
        void* var_30
        
        if ((zx.d(var_40) & 1) != 0)
            arg1, v1 = operator delete(var_30)
else if (x8 u>> 1 != 0)
    goto label_eb5b34

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x21 = *(x20 + 0x20)
int64_t x20_1 = *(x20 + 0x28)

if (x21 == x20_1)
    return 

v1 = data_71bb40
int128_t var_70
__builtin_strncpy(&var_70, "AuthorityIssuersPKIX.Certificate", 0x20)

do
    void* x0_2
    int128_t v0_1
    int128_t v1_1
    x0_2, v0_1, v1_1 = operator new(0x30)
    *(x0_2 + 0x20) = 0
    var_40.o = v1
    v1_1 = var_70
    __builtin_strncpy(x0_2, "PKIX.Certificate", 0x10)
    *(x0_2 + 0x10) = v1_1
    Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg2, &var_40, x21)
    
    if ((zx.d(var_40) & 1) != 0)
        operator delete(x0_2)
    
    x21 += 0x18
while (x20_1 != x21)
