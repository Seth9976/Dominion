// 函数: _ZN5Botan4OCSP7RequestC1ERKNS_16X509_CertificateES4_
// 地址: 0xe9d50c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::X509_Object::X509_Object(arg1)
*arg1 = _vtable_for_Botan::X509_Certificate + 0x10
*(arg1 + 0x78) = *(arg2 + 0x78)
int64_t x8_2 = *(arg2 + 0x80)
*(arg1 + 0x80) = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

int64_t* x0_1 = Botan::X509_Certificate::data()
uint64_t x1 = *x0_1
x0_1[1]
void* var_70
__builtin_memset(&var_70, 0, 0x18)
int64_t var_58 = -1
int32_t var_50 = 1
Botan::BigInt::binary_decode(&var_70, x1)
Botan::OCSP::CertID::CertID(arg1 + 0x88, arg1)
void* x0_4 = var_70

if (x0_4 != 0)
    void* var_68_1 = x0_4
    int64_t var_60
    Botan::deallocate_memory(x0_4, (var_60 - x0_4) s>> 2, 4)

int32_t result = Botan::operator==(Botan::X509_Certificate::data() + 0x58, 
    Botan::X509_Certificate::data() + 0x90)

if ((result & 1) != 0)
    return result

void** x0_10 = __cxa_allocate_exception(0x20)
int64_t x0_11
int128_t v0
x0_11, v0 = operator new(0x50)
v0 = data_71aa50
int64_t var_60_1 = x0_11
__builtin_strncpy(x0_11, "Invalid cert pair to OCSP::Request (mismatched issuer,subject args?)", 
    0x45)
var_70.o = v0
*x0_10 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_10[1])
*x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
