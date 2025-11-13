// 函数: sub_f58920
// 地址: 0xf58920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x21 = **arg2
*arg2[1]
int64_t* x0_1 = Botan::X509_Certificate::data()
uint64_t x1 = *x0_1
x0_1[1]
void* var_1b8 = nullptr
char var_1b0 = 0
int64_t var_1a8 = 0
void* var_1a0 = -ffffffffffffffff
int32_t var_198 = 1
Botan::BigInt::binary_decode(&var_1b8, x1)
void var_168
Botan::OCSP::Request::Request(&var_168, x21)
void* x0_4 = var_1b8

if (x0_4 != 0)
    var_1b0 = x0_4.b
    Botan::deallocate_memory(x0_4, (var_1a8 - x0_4) s>> 2, 4)

var_1b0 = 0x1a
var_1b8.d = 0
__builtin_strncpy(&var_1b0:1, "Uninitialized", 0xe)
__builtin_memset(&var_198, 0, 0x18)
void* var_178 = nullptr
int64_t var_170 = 0
int64_t* var_180 = &var_178
*arg2[1]
Botan::X509_Certificate::data()
char var_220
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_220)
void* x0_8
int128_t v0
x0_8, v0 = operator new(0x20)
int128_t var_240 = data_71af80
__builtin_strncpy(x0_8, "application/ocsp-request", 0x19)
Botan::OCSP::Request::BER_encode()
void* var_258
Botan::HTTP::POST_sync(&var_220, &var_240, &var_258, 1, *arg2[2])
int32_t var_208
var_1b8.d = var_208

if ((zx.d(var_1b0) & 1) != 0)
    operator delete(var_1a0)

int128_t var_200
int128_t v0_1 = var_200
var_200.w = 0
var_1b0 = v0_1.b
void* x0_11 = var_198.q

if (x0_11 != 0)
    void* var_190_1 = x0_11
    operator delete(x0_11)

int128_t var_1e8
v0_1 = var_1e8
__builtin_memset(&var_1e8, 0, 0x18)
var_198.o = v0_1
int64_t var_1d8
int64_t var_188 = var_1d8
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &var_180)
void* var_1c8
void* x1_6 = var_1c8
int64_t* var_1d0
var_180 = var_1d0
var_178 = x1_6
int64_t var_1c0
int64_t var_170_1 = var_1c0

if (var_1c0 == 0)
    var_180 = &var_178
else
    *(x1_6 + 0x10) = &var_178
    var_1d0 = &var_1c8
    var_1c8 = nullptr
    int64_t var_1c0_1 = 0

std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &var_1d0)
void* x0_14 = var_1e8.q

if (x0_14 != 0)
    var_1e8:8.q = x0_14
    operator delete(x0_14)

void* var_1f0

if ((zx.d(var_200.b) & 1) != 0)
    operator delete(var_1f0)

void* x0_16 = var_258

if (x0_16 != 0)
    void* var_250_1 = x0_16
    operator delete(x0_16)

if ((zx.d(var_240.b) & 1) != 0)
    operator delete(x0_8)

void* var_210

if ((zx.d(var_220) & 1) != 0)
    operator delete(var_210)
int64_t* x20_1
void* x21_1

if (var_1b8.d != 0xc8)
    int64_t* x0_21 = operator new(0x158)
    x0_21[2] = 0
    x0_21[4] = 0
    x0_21[5] = 0
    __builtin_memset(&x0_21[8], 0, 0x18)
    x0_21[0xb].d = 0xff00
    *x0_21 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::OCSP::Response const, std::__ndk1::allocator<Botan::OCSP::Response const> >
        + 0x10
    x0_21[1] = 0
    x0_21[6] = 0
    x0_21[7] = _vtable_for_Botan::ASN1_Time + 0x10
    x0_21[0xc] = _vtable_for_Botan::X509_DN + 0x10
    __builtin_memset(&x0_21[0xd], 0, 0x60)
    __builtin_memset(&x0_21[0x1b], 0, 0x78)
    x21_1 = &x0_21[3]
    *x21_1 = 0
    x20_1 = x0_21
    *(x21_1 + 0xb0) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
    *(x21_1 + 0xb8) = _vtable_for_Botan::OID + 0x10
    *(x21_1 + 0x138) = 0x1f7
else
    int64_t* x0_19 = operator new(0x158)
    x0_19[2] = 0
    uint64_t x1_8 = var_198.q
    x20_1 = x0_19
    x21_1 = &x0_19[3]
    *x0_19 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::OCSP::Response const, std::__ndk1::allocator<Botan::OCSP::Response const> >
        + 0x10
    x0_19[1] = 0
    Botan::OCSP::Response::Response(x21_1, x1_8)

*arg1 = x21_1
arg1[1] = x20_1
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &var_180)
void* x0_23 = var_198.q

if (x0_23 != 0)
    void* var_190_2 = x0_23
    operator delete(x0_23)

if ((zx.d(var_1b0) & 1) != 0)
    operator delete(var_1f0)

return Botan::OCSP::Request::~Request()
