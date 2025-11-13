// 函数: _ZN5Botan24Certificate_Store_In_SQL11insert_certERKNS_16X509_CertificateE
// 地址: 0xcfb158
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::X509_Certificate::data()
Botan::ASN1_Object::BER_encode()
Botan::ASN1_Object::BER_encode()
int64_t* x20 = *(arg1 + 0x10)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "INSERT OR REPLACE INTO ", arg1 + 0x20)
char var_98
int128_t* x0_5
int128_t v0
x0_5, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_98)
void* x8 = x0_5[1].q
int128_t var_80 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
(**x20)(x20, &var_80)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(x8)

void* var_88

if ((zx.d(var_98) & 1) != 0)
    operator delete(var_88)

var_98 = 0xe
int32_t var_97
__builtin_strncpy(&var_97, "SHA-256", 8)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::X509_Certificate::fingerprint(entry_x1)
int64_t* var_60
(**var_60)(var_60, 1, &var_80)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(x8)

if ((zx.d(var_98) & 1) != 0)
    operator delete(var_88)

void* var_38
(*(*var_60 + 0x18))(var_60, 2, &var_38)
(*(*var_60 + 0x18))(var_60, 3, Botan::X509_Certificate::data() + 0x280)
__builtin_memset(&var_80, 0, 0x18)
(*(*var_60 + 0x18))(var_60, 4, &var_80)
void* x0_18 = var_80.q

if (x0_18 != 0)
    var_80:8.q = x0_18
    operator delete(x0_18)

void* var_50
(*(*var_60 + 0x18))(var_60, 5, &var_50)
(*(*var_60 + 0x40))()
int64_t* var_58

if (var_58 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_58[1])
        i = __stlxr(x9_1 - 1, &var_58[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_58 + 0x10))(var_58)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_23 = var_50

if (x0_23 != 0)
    void* var_48_1 = x0_23
    operator delete(x0_23)

void* x0_24 = var_38

if (x0_24 != 0)
    void* var_30_1 = x0_24
    operator delete(x0_24)

return 1
