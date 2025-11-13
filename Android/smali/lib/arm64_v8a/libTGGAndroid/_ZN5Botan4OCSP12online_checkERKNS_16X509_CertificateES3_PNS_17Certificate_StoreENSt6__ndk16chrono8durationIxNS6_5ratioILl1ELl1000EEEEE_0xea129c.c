// 函数: _ZN5Botan4OCSP12online_checkERKNS_16X509_CertificateES3_PNS_17Certificate_StoreENSt6__ndk16chrono8durationIxNS6_5ratioILl1ELl1000EEEEE
// 地址: 0xea129c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_70

if ((Botan::operator==(Botan::X509_Certificate::data() + 0x58, 
        Botan::X509_Certificate::data() + 0x90) & 1) == 0)
    void** x0_14 = __cxa_allocate_exception(0x20)
    int64_t x0_15
    int128_t v0
    x0_15, v0 = operator new(0x50)
    v0 = data_71b700
    int64_t var_60_1 = x0_15
    __builtin_strncpy(x0_15, 
        "Invalid cert pair to OCSP::online_check (mismatched issuer,subject args?)", 0x4a)
    var_70 = v0
    *x0_14 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_14[1])
    *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t* x0_7 = Botan::X509_Certificate::data()
uint64_t x1_1 = *x0_7
x0_7[1]
__builtin_memset(&var_70, 0, 0x18)
int64_t var_58 = -1
int32_t var_50 = 1
Botan::BigInt::binary_decode(&var_70, x1_1)
Botan::X509_Certificate::data()
char var_88
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_88)
Botan::OCSP::online_check(arg1, &var_70, &var_88, arg3, arg4)
void* var_78

if ((zx.d(var_88) & 1) != 0)
    operator delete(var_78)
void* result = var_70.q

if (result == 0)
    return result

var_70:8.q = result
int64_t var_60
return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
