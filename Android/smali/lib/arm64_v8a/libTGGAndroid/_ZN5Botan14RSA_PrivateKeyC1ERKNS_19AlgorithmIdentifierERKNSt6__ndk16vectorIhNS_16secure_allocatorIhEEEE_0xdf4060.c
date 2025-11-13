// 函数: _ZN5Botan14RSA_PrivateKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xdf4060
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = _vtable_for_Botan::RSA_PrivateKey + 0x1c0
*arg1 = _vtable_for_Botan::RSA_PrivateKey + 0x88
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_48 = -1
int32_t var_40 = 1
void* var_88
__builtin_memset(&var_88, 0, 0x18)
int64_t var_70 = -1
int32_t var_68 = 1
void* var_b0
__builtin_memset(&var_b0, 0, 0x18)
int64_t var_98 = -1
int32_t var_90 = 1
void* var_d8
__builtin_memset(&var_d8, 0, 0x18)
int64_t var_c0 = -1
int32_t var_b8 = 1
void* var_100
__builtin_memset(&var_100, 0, 0x18)
int64_t var_e8 = -1
int32_t var_e0 = 1
void* var_128
__builtin_memset(&var_128, 0, 0x18)
int64_t var_110 = -1
int32_t var_108 = 1
void* var_150
__builtin_memset(&var_150, 0, 0x18)
int64_t var_138 = -1
int32_t var_130 = 1
void* var_178
__builtin_memset(&var_178, 0, 0x18)
int64_t var_160 = -1
int32_t var_158 = 1
void var_1e8
Botan::BER_Decoder::BER_Decoder(&var_1e8)
Botan::BER_Decoder::start_cons(&var_1e8, 0x10)
void* x0_2 = operator new(0x30)
char v0 = (data_71d3f0).b
__builtin_strncpy(x0_2, "Unknown PKCS #1 key format version", 0x23)
uint64_t var_1b0[0x2]
int64_t var_38
Botan::BER_Decoder::decode(&var_1b0, &var_38, 2)

if (var_38 != 0)
    void** x0_29 = __cxa_allocate_exception(0x20)
    *x0_29 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_29[1])
    *x0_29 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_29, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

Botan::BER_Decoder::decode(&var_1b0, &result_1, 2)
Botan::BER_Decoder::decode(&var_1b0, &var_88, 2)
Botan::BER_Decoder::decode(&var_1b0, &var_b0, 2)
Botan::BER_Decoder::decode(&var_1b0, &var_d8, 2)
Botan::BER_Decoder::decode(&var_1b0, &var_100, 2)
Botan::BER_Decoder::decode(&var_1b0, &var_128, 2)
Botan::BER_Decoder::decode(&var_1b0, &var_150, 2)
Botan::BER_Decoder::decode(&var_1b0, &var_178, 2)
Botan::BER_Decoder::end_cons()

if ((zx.d(v0) & 1) != 0)
    operator delete(x0_2)

int64_t var_180_1 = 0
int64_t* var_180

if (var_180 != 0)
    (*(*var_180 + 0x38))()

void* var_1a0

if (var_1a0 != 0)
    void* var_198_1 = var_1a0
    int64_t var_190
    Botan::deallocate_memory(var_1a0, var_190 - var_1a0, 1)

int64_t var_1b8_1 = 0
int64_t* var_1b8

if (var_1b8 != 0)
    (*(*var_1b8 + 0x38))()

void* var_1d8

if (var_1d8 != 0)
    void* var_1d0_1 = var_1d8
    int64_t var_1c8
    Botan::deallocate_memory(var_1d8, var_1c8 - var_1d8, 1)

Botan::RSA_PublicKey::init(arg1 + 8, &result_1)
void** x0_18 = operator new(0x1e8)
x0_18[2] = 0
*x0_18 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Private_Data, std::__ndk1::allocator<Botan::RSA_Private_Data> >
    + 0x10
x0_18[1] = 0
Botan::RSA_Private_Data::RSA_Private_Data(&x0_18[3], &var_b0, &var_d8, &var_100, &var_128, &var_150)
int64_t* x21 = *(arg1 + 0x28)
*(arg1 + 0x20) = &x0_18[3]
*(arg1 + 0x28) = x0_18
int64_t x9_1

if (x21 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x21[1])
        i = __stlxr(x9_1 - 1, &x21[1])
    while (i != 0)

void* var_170_1
int64_t var_168
void* x0_20

if (x21 != 0 && x9_1 == 0)
    (*(*x21 + 0x10))(x21)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_20 = var_178
    
    if (x0_20 != 0)
        var_170_1 = x0_20
        Botan::deallocate_memory(x0_20, (var_168 - x0_20) s>> 2, 4)
else
    x0_20 = var_178
    
    if (x0_20 != 0)
        var_170_1 = x0_20
        Botan::deallocate_memory(x0_20, (var_168 - x0_20) s>> 2, 4)
void* x0_21 = var_150

if (x0_21 != 0)
    void* var_148_1 = x0_21
    int64_t var_140
    Botan::deallocate_memory(x0_21, (var_140 - x0_21) s>> 2, 4)

void* x0_22 = var_128

if (x0_22 != 0)
    void* var_120_1 = x0_22
    int64_t var_118
    Botan::deallocate_memory(x0_22, (var_118 - x0_22) s>> 2, 4)

void* x0_23 = var_100

if (x0_23 != 0)
    void* var_f8_1 = x0_23
    int64_t var_f0
    Botan::deallocate_memory(x0_23, (var_f0 - x0_23) s>> 2, 4)

void* x0_24 = var_d8

if (x0_24 != 0)
    void* var_d0_1 = x0_24
    int64_t var_c8
    Botan::deallocate_memory(x0_24, (var_c8 - x0_24) s>> 2, 4)

void* x0_25 = var_b0

if (x0_25 != 0)
    void* var_a8_1 = x0_25
    int64_t var_a0
    Botan::deallocate_memory(x0_25, (var_a0 - x0_25) s>> 2, 4)

void* x0_26 = var_88

if (x0_26 != 0)
    void* var_80_1 = x0_26
    int64_t var_78
    Botan::deallocate_memory(x0_26, (var_78 - x0_26) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_50
return Botan::deallocate_memory(result, (var_50 - result) s>> 2, 4)
