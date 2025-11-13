// 函数: _ZN5Botan18Ed25519_PrivateKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd46e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
*arg1 = _vtable_for_Botan::Ed25519_PrivateKey + 0x90
*(arg1 + 8) = 0
*(arg1 + 0x38) = _vtable_for_Botan::Ed25519_PrivateKey + 0x1d8
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
int128_t var_a0
Botan::BER_Decoder::BER_Decoder(&var_a0)
Botan::BER_Decoder::decode(&var_a0, &result_1, 4, 4)
int64_t i

do
    int64_t* var_78
    void var_44
    i = (**var_78)(var_78, &var_44, 1)
while (i != 0)
int64_t var_70_1 = 0
int64_t* var_70

if (var_70 != 0)
    (*(*var_70 + 0x38))()

void* var_90

if (var_90 != 0)
    void* var_88_1 = var_90
    int64_t var_80
    Botan::deallocate_memory(var_90, var_80 - var_90, 1)

int64_t var_60

if (var_60 - result_1 != 0x20)
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0
    x0_14, v0 = operator new(0x30)
    v0 = data_71b7f0
    int64_t var_90_1 = x0_14
    __builtin_strncpy(x0_14, "Invalid size for Ed25519 private key", 0x25)
    var_a0 = v0
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

void* x21 = *(arg1 + 8)
int64_t x0_5 = *(arg1 + 0x10)
size_t x22 = x0_5 - x21

if (x22 u> 0x1f)
    if (x22 != 0x20)
        *(arg1 + 0x10) = x21 + 0x20
    
    goto label_d47004

int64_t x8_8 = *(arg1 + 0x18)
uint8_t* x1_5
void* x8_11

if (x8_8 - x0_5 u>= 0x20 - x22)
    memset(x0_5, 0, 0x20 - x22)
    *(arg1 + 0x10) = x0_5 + 0x20 - x22
    x1_5 = *(arg1 + 0x20)
    x8_11 = *(arg1 + 0x28) - x1_5
    
    if (x8_11 u<= 0x3f)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_5 = *(arg1 + 0x20)
    else
    label_d47050:
        
        if (x8_11 != 0x40)
            *(arg1 + 0x28) = &x1_5[0x40]
else
    void* x8_9 = x8_8 - x21
    int64_t x11_1 = x8_9 << 1
    int64_t x9_3
    
    x9_3 = x11_1 u> 0x20 ? x11_1 : 0x20
    
    int64_t x25_1
    
    x25_1 = x8_9 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
    
    int64_t x0_7 = operator new(x25_1)
    memset(x0_7 + x22, 0, 0x20 - x22)
    
    if (x22 s>= 1)
        memcpy(x0_7, x21, x22)
    
    *(arg1 + 8) = x0_7
    *(arg1 + 0x10) = x0_7 + 0x20
    *(arg1 + 0x18) = x0_7 + x25_1
    
    if (x21 == 0)
    label_d47004:
        x1_5 = *(arg1 + 0x20)
        x8_11 = *(arg1 + 0x28) - x1_5
        
        if (x8_11 u> 0x3f)
            goto label_d47050
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_5 = *(arg1 + 0x20)
    else
        operator delete(x21)
        x1_5 = *(arg1 + 0x20)
        x8_11 = *(arg1 + 0x28) - x1_5
        
        if (x8_11 u> 0x3f)
            goto label_d47050
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_5 = *(arg1 + 0x20)
Botan::ed25519_gen_keypair(*(arg1 + 8), x1_5, result_1)
uint8_t* result = result_1

if (result == 0)
    return result

uint8_t* result_2 = result
int64_t var_58
return Botan::deallocate_memory(result, var_58 - result, 1)
