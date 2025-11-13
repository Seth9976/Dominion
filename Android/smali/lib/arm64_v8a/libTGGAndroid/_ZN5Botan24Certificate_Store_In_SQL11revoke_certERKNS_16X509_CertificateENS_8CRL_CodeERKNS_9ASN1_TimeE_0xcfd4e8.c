// 函数: _ZN5Botan24Certificate_Store_In_SQL11revoke_certERKNS_16X509_CertificateENS_8CRL_CodeERKNS_9ASN1_TimeE
// 地址: 0xcfd4e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Certificate_Store_In_SQL::insert_cert(arg1)
int64_t* x22 = *(arg1 + 0x10)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "INSERT OR REPLACE INTO ", arg1 + 0x20)
char var_78
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
void* x8 = x0_1[1].q
int128_t var_60 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
(**x22)(x22, &var_60)

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(x8)

void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

var_78 = 0xe
int32_t var_77
__builtin_strncpy(&var_77, "SHA-256", 8)
Botan::X509_Certificate::fingerprint(arg2)
int64_t* var_40
(**var_40)(var_40, 1, &var_60)

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(x8)

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

(*(*var_40 + 8))(var_40, 2, zx.q(arg3.d))
void* entry_x3

if (*(entry_x3 + 8) == 0)
    (*(*var_40 + 8))(var_40, 3, -1)
else
    Botan::ASN1_Object::BER_encode()
    (*(*var_40 + 0x18))(var_40, 3, &var_60)
    void* x0_12 = var_60.q
    
    if (x0_12 != 0)
        var_60:8.q = x0_12
        operator delete(x0_12)

int64_t result = (*(*var_40 + 0x40))()
int64_t* var_38

if (var_38 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_38[1])
        i = __stlxr(x9_1 - 1, &var_38[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_38 + 0x10))(var_38)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
