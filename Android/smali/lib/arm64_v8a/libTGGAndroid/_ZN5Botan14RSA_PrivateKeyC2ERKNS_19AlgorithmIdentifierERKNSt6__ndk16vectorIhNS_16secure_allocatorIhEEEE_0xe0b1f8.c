// 函数: _ZN5Botan14RSA_PrivateKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xe0b1f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
void* x8_2 = *(arg2 + 0x18)
*(arg1 + 8) = x8_2
*(arg1 + 8 + *(x8_2 - 0x88)) = *(arg2 + 0x20)
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* x8_4 = *arg2
*arg1 = x8_4
*(arg1 + *(x8_4 - 0x88)) = *(arg2 + 0x28)
*(arg1 + 8) = *(arg2 + 0x30)
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_50 = -1
int32_t var_48 = 1
void* var_90
__builtin_memset(&var_90, 0, 0x18)
int64_t var_78 = -1
int32_t var_70 = 1
void* var_b8
__builtin_memset(&var_b8, 0, 0x18)
int64_t var_a0 = -1
int32_t var_98 = 1
void* var_e0
__builtin_memset(&var_e0, 0, 0x18)
int64_t var_c8 = -1
int32_t var_c0 = 1
void* var_108
__builtin_memset(&var_108, 0, 0x18)
int64_t var_f0 = -1
int32_t var_e8 = 1
void* var_130
__builtin_memset(&var_130, 0, 0x18)
int64_t var_118 = -1
int32_t var_110 = 1
void* var_158
__builtin_memset(&var_158, 0, 0x18)
int64_t var_140 = -1
int32_t var_138 = 1
void* var_180
__builtin_memset(&var_180, 0, 0x18)
int64_t var_168 = -1
int32_t var_160 = 1
void var_1f0
Botan::BER_Decoder::BER_Decoder(&var_1f0)
Botan::BER_Decoder::start_cons(&var_1f0, 0x10)
void* x0_2 = operator new(0x30)
char v0 = (data_71d3f0).b
__builtin_strncpy(x0_2, "Unknown PKCS #1 key format version", 0x23)
uint64_t var_1b8[0x2]
int64_t var_38
Botan::BER_Decoder::decode(&var_1b8, &var_38, 2)

if (var_38 != 0)
    void** x0_29 = __cxa_allocate_exception(0x20)
    *x0_29 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_29[1])
    *x0_29 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_29, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

Botan::BER_Decoder::decode(&var_1b8, &result_1, 2)
Botan::BER_Decoder::decode(&var_1b8, &var_90, 2)
Botan::BER_Decoder::decode(&var_1b8, &var_b8, 2)
Botan::BER_Decoder::decode(&var_1b8, &var_e0, 2)
Botan::BER_Decoder::decode(&var_1b8, &var_108, 2)
Botan::BER_Decoder::decode(&var_1b8, &var_130, 2)
Botan::BER_Decoder::decode(&var_1b8, &var_158, 2)
Botan::BER_Decoder::decode(&var_1b8, &var_180, 2)
Botan::BER_Decoder::end_cons()

if ((zx.d(v0) & 1) != 0)
    operator delete(x0_2)

int64_t var_188_1 = 0
int64_t* var_188

if (var_188 != 0)
    (*(*var_188 + 0x38))()

void* var_1a8

if (var_1a8 != 0)
    void* var_1a0_1 = var_1a8
    int64_t var_198
    Botan::deallocate_memory(var_1a8, var_198 - var_1a8, 1)

int64_t var_1c0_1 = 0
int64_t* var_1c0

if (var_1c0 != 0)
    (*(*var_1c0 + 0x38))()

void* var_1e0

if (var_1e0 != 0)
    void* var_1d8_1 = var_1e0
    int64_t var_1d0
    Botan::deallocate_memory(var_1e0, var_1d0 - var_1e0, 1)

Botan::RSA_PublicKey::init(arg1 + 8, &result_1)
void** x0_18 = operator new(0x1e8)
x0_18[2] = 0
*x0_18 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Private_Data, std::__ndk1::allocator<Botan::RSA_Private_Data> >
    + 0x10
x0_18[1] = 0
Botan::RSA_Private_Data::RSA_Private_Data(&x0_18[3], &var_b8, &var_e0, &var_108, &var_130, &var_158)
int64_t* x20_1 = *(arg1 + 0x28)
*(arg1 + 0x20) = &x0_18[3]
*(arg1 + 0x28) = x0_18
int64_t x9_3

if (x20_1 != 0)
    int32_t i
    
    do
        x9_3 = __ldaxr(&x20_1[1])
        i = __stlxr(x9_3 - 1, &x20_1[1])
    while (i != 0)

void* var_178_1
int64_t var_170
void* x0_20

if (x20_1 != 0 && x9_3 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_20 = var_180
    
    if (x0_20 != 0)
        var_178_1 = x0_20
        Botan::deallocate_memory(x0_20, (var_170 - x0_20) s>> 2, 4)
else
    x0_20 = var_180
    
    if (x0_20 != 0)
        var_178_1 = x0_20
        Botan::deallocate_memory(x0_20, (var_170 - x0_20) s>> 2, 4)
void* x0_21 = var_158

if (x0_21 != 0)
    void* var_150_1 = x0_21
    int64_t var_148
    Botan::deallocate_memory(x0_21, (var_148 - x0_21) s>> 2, 4)

void* x0_22 = var_130

if (x0_22 != 0)
    void* var_128_1 = x0_22
    int64_t var_120
    Botan::deallocate_memory(x0_22, (var_120 - x0_22) s>> 2, 4)

void* x0_23 = var_108

if (x0_23 != 0)
    void* var_100_1 = x0_23
    int64_t var_f8
    Botan::deallocate_memory(x0_23, (var_f8 - x0_23) s>> 2, 4)

void* x0_24 = var_e0

if (x0_24 != 0)
    void* var_d8_1 = x0_24
    int64_t var_d0
    Botan::deallocate_memory(x0_24, (var_d0 - x0_24) s>> 2, 4)

void* x0_25 = var_b8

if (x0_25 != 0)
    void* var_b0_1 = x0_25
    int64_t var_a8
    Botan::deallocate_memory(x0_25, (var_a8 - x0_25) s>> 2, 4)

void* x0_26 = var_90

if (x0_26 != 0)
    void* var_88_1 = x0_26
    int64_t var_80
    Botan::deallocate_memory(x0_26, (var_80 - x0_26) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_58
return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
