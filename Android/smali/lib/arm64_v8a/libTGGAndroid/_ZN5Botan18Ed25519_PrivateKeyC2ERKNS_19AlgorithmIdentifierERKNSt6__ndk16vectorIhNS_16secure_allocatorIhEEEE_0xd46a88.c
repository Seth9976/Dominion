// 函数: _ZN5Botan18Ed25519_PrivateKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd46a88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* x8_2 = *arg2
*arg1 = x8_2
*(arg1 + *(x8_2 - 0x88)) = *(arg2 + 0x18)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x20)
__builtin_memset(arg1 + 0x20, 0, 0x18)
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
int128_t var_b0
Botan::BER_Decoder::BER_Decoder(&var_b0)
Botan::BER_Decoder::decode(&var_b0, &result_1, 4, 4)
int64_t i

do
    int64_t* var_88
    void var_54
    i = (**var_88)(var_88, &var_54, 1)
while (i != 0)
int64_t var_80_1 = 0
int64_t* var_80

if (var_80 != 0)
    (*(*var_80 + 0x38))()

void* var_a0

if (var_a0 != 0)
    void* var_98_1 = var_a0
    int64_t var_90
    Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)

int64_t var_68

if (var_68 - result_1 != 0x20)
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0
    x0_14, v0 = operator new(0x30)
    v0 = data_71b7f0
    int64_t var_a0_1 = x0_14
    __builtin_strncpy(x0_14, "Invalid size for Ed25519 private key", 0x25)
    var_b0 = v0
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

void* x22 = *(arg1 + 8)
int64_t x0_5 = *(arg1 + 0x10)
size_t x23 = x0_5 - x22

if (x23 u> 0x1f)
    if (x23 != 0x20)
        *(arg1 + 0x10) = x22 + 0x20
    
    goto label_d46c40

int64_t x8_13 = *(arg1 + 0x18)
uint8_t* x1_5
void* x8_16

if (x8_13 - x0_5 u>= 0x20 - x23)
    memset(x0_5, 0, 0x20 - x23)
    *(arg1 + 0x10) = x0_5 + 0x20 - x23
    x1_5 = *(arg1 + 0x20)
    x8_16 = *(arg1 + 0x28) - x1_5
    
    if (x8_16 u<= 0x3f)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_5 = *(arg1 + 0x20)
    else
    label_d46c8c:
        
        if (x8_16 != 0x40)
            *(arg1 + 0x28) = &x1_5[0x40]
else
    void* x8_14 = x8_13 - x22
    int64_t x11_1 = x8_14 << 1
    int64_t x9_5
    
    x9_5 = x11_1 u> 0x20 ? x11_1 : 0x20
    
    int64_t x26_1
    
    x26_1 = x8_14 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
    
    int64_t x0_7 = operator new(x26_1)
    memset(x0_7 + x23, 0, 0x20 - x23)
    
    if (x23 s>= 1)
        memcpy(x0_7, x22, x23)
    
    *(arg1 + 8) = x0_7
    *(arg1 + 0x10) = x0_7 + 0x20
    *(arg1 + 0x18) = x0_7 + x26_1
    
    if (x22 == 0)
    label_d46c40:
        x1_5 = *(arg1 + 0x20)
        x8_16 = *(arg1 + 0x28) - x1_5
        
        if (x8_16 u> 0x3f)
            goto label_d46c8c
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_5 = *(arg1 + 0x20)
    else
        operator delete(x22)
        x1_5 = *(arg1 + 0x20)
        x8_16 = *(arg1 + 0x28) - x1_5
        
        if (x8_16 u> 0x3f)
            goto label_d46c8c
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_5 = *(arg1 + 0x20)
Botan::ed25519_gen_keypair(*(arg1 + 8), x1_5, result_1)
uint8_t* result = result_1

if (result == 0)
    return result

uint8_t* result_2 = result
int64_t var_60
return Botan::deallocate_memory(result, var_60 - result, 1)
