// 函数: _ZN5Botan11BER_Decoder11decode_listINS_4OCSP14SingleResponseEEERS0_RNSt6__ndk16vectorIT_NS5_9allocatorIS7_EEEENS_8ASN1_TagESC_
// 地址: 0xe9f0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::OCSP::SingleResponse* x20 = arg2
Botan::BER_Decoder::start_cons(arg1, zx.q(arg3))
int32_t var_90
int64_t* var_70

while (((*(*var_70 + 0x18))() & (var_90 == 0xff00 ? 1 : 0) & 1) == 0)
    void* __offset(vtable_for_Botan::OCSP::SingleResponse, 0x10) var_198 =
        _vtable_for_Botan::OCSP::SingleResponse + 0x10
    void* __offset(vtable_for_Botan::OCSP::CertID, 0x10) var_190_1 =
        _vtable_for_Botan::OCSP::CertID + 0x10
    void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_188_1 =
        _vtable_for_Botan::AlgorithmIdentifier + 0x10
    void* __offset(vtable_for_Botan::OID, 0x10) var_180_1 = _vtable_for_Botan::OID + 0x10
    int128_t var_128_1
    __builtin_memset(&var_128_1, 0, 0x28)
    int128_t var_158_1
    __builtin_memset(&var_158_1, 0, 0x28)
    int128_t var_178_1
    __builtin_memset(&var_178_1, 0, 0x18)
    int64_t var_100_1 = -1
    int32_t var_f8_1 = 1
    int64_t var_f0_1 = 2
    void* __offset(vtable_for_Botan::ASN1_Time, 0x10) var_e8_1 = _vtable_for_Botan::ASN1_Time + 0x10
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x18)
    int32_t var_c8_1 = 0xff00
    void* __offset(vtable_for_Botan::ASN1_Time, 0x10) var_c0_1 = _vtable_for_Botan::ASN1_Time + 0x10
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x18)
    int32_t var_a0_1 = 0xff00
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = Botan::OCSP::SingleResponse::decode_from(&var_198)
    void** x8_9 = *(x20 + 8)
    void* var_160
    void* var_130
    
    if (x8_9 u>= *(x20 + 0x10))
        std::__ndk1::vector<Botan::OCSP::SingleResponse, std::__ndk1::allocator<Botan::OCSP::SingleResponse> >::__push_back_slow_path<Botan::OCSP::SingleResponse>(
            x20)
        int128_t var_118_1
        void* x0_4 = var_118_1.q
        var_198 = _vtable_for_Botan::OCSP::SingleResponse + 0x10
        void* __offset(vtable_for_Botan::OCSP::CertID, 0x10) var_190_3 =
            _vtable_for_Botan::OCSP::CertID + 0x10
        
        if (x0_4 != 0)
            var_118_1:8.q = x0_4
            int64_t var_108
            Botan::deallocate_memory(x0_4, (var_108 - x0_4) s>> 2, 4)
    else
        x8_9[5] = 0
        x8_9[6] = 0
        x8_9[3] = _vtable_for_Botan::OID + 0x10
        x8_9[4] = 0
        *x8_9 = _vtable_for_Botan::OCSP::SingleResponse + 0x10
        x8_9[1] = _vtable_for_Botan::OCSP::CertID + 0x10
        x8_9[2] = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        x8_9[4] = var_178_1.q
        x8_9[5] = var_178_1:8.q
        __builtin_memset(&x8_9[6], 0, 0x20)
        __builtin_memset(&var_178_1, 0, 0x78)
        x8_9[7] = var_160
        x8_9[8] = var_158_1.q
        x8_9[9] = var_158_1:8.q
        x8_9[0xa] = 0
        x8_9[0xb] = 0
        x8_9[0xc] = 0
        __builtin_memset(&x8_9[0xa], 0, 0x30)
        x8_9[0xd] = var_130
        x8_9[0xe] = var_128_1.q
        x8_9[0xf] = var_128_1:8.q
        x8_9[0x10] = 0
        x8_9[0x11] = 0
        x8_9[0x12] = 0
        x8_9[0x14].d = 1
        __builtin_memset(&x8_9[0x10], 0, 0x18)
        x8_9[0x13] = -1
        x8_9[0x13] = var_100_1
        int64_t var_100_2 = -1
        x8_9[0x14].d = var_f8_1
        int32_t var_f8_2 = 1
        x8_9[0x15] = var_f0_1
        x8_9[0x16] = _vtable_for_Botan::ASN1_Time + 0x10
        v1_1 = var_e0.o
        x8_9[0x1b] = _vtable_for_Botan::ASN1_Time + 0x10
        int64_t var_d8
        *(x8_9 + 0xc4) = var_d8:4.o
        *(x8_9 + 0xb8) = v1_1
        v1_1 = var_b8.o
        int64_t var_b0
        *(x8_9 + 0xec) = var_b0:4.o
        *(x8_9 + 0xe0) = v1_1
        *(x20 + 8) = &x8_9[0x20]
        var_198 = _vtable_for_Botan::OCSP::SingleResponse + 0x10
        void* __offset(vtable_for_Botan::OCSP::CertID, 0x10) var_190_2 =
            _vtable_for_Botan::OCSP::CertID + 0x10
    
    if (var_130 != 0)
        var_128_1.q = var_130
        operator delete(var_130)
    
    int128_t var_148_1
    void* x0_6 = var_148_1.q
    
    if (x0_6 != 0)
        var_148_1:8.q = x0_6
        operator delete(x0_6)
    
    void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_188_2 =
        _vtable_for_Botan::AlgorithmIdentifier + 0x10
    
    if (var_160 != 0)
        var_158_1.q = var_160
        operator delete(var_160)
    
    void* x0_8 = var_178_1.q
    void* __offset(vtable_for_Botan::OID, 0x10) var_180_2 = _vtable_for_Botan::OID + 0x10
    
    if (x0_8 != 0)
        var_178_1:8.q = x0_8
        operator delete(x0_8)

Botan::BER_Decoder::end_cons()
int64_t var_68_1 = 0
int64_t* var_68

if (var_68 != 0)
    (*(*var_68 + 0x38))()

void* var_88

if (var_88 != 0)
    void* var_80_1 = var_88
    int64_t var_78
    Botan::deallocate_memory(var_88, var_78 - var_88, 1)

return arg1
