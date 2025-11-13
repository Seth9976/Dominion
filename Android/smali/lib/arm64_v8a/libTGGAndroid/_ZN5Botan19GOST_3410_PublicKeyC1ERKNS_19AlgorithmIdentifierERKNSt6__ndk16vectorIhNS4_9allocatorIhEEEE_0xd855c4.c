// 函数: _ZN5Botan19GOST_3410_PublicKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xd855c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0xa0) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x70) = zx.o(0)
*(arg1 + 0x90) = zx.o(0)
*(arg1 + 0x48) = -1
*(arg1 + 0x70) = -1
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = -1
*(arg1 + 0x50) = zx.o(0)
*(arg1 + 0x60) = zx.o(0)
*(arg1 + 0x50) = 1
*(arg1 + 0x78) = 1
*(arg1 + 0xa0) = 1
*arg1 = _vtable_for_Botan::GOST_3410_PublicKey + 0x90
*(arg1 + 8) = _vtable_for_Botan::GOST_3410_PublicKey + 0x190
*(arg1 + 0x80) = zx.o(0)
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
void* __offset(vtable_for_Botan::OID, 0x10) var_60 = _vtable_for_Botan::OID + 0x10
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_98
Botan::BER_Decoder::BER_Decoder(&var_98)
Botan::BER_Decoder::start_cons(&var_98, 0x10)
int64_t var_160
(*(var_60 + 8))(&var_60, &var_160)
int64_t* var_130_1 = nullptr
int64_t* var_130

if (var_130 != 0)
    (*(*var_130 + 0x38))()

void* var_150
int64_t var_140

if (var_150 != 0)
    void* var_148_1 = var_150
    Botan::deallocate_memory(var_150, var_140 - var_150, 1)

int64_t var_68_1 = 0
int64_t* var_68

if (var_68 != 0)
    (*(*var_68 + 0x38))()

void* var_88
int64_t var_78

if (var_88 != 0)
    void* var_80_1 = var_88
    Botan::deallocate_memory(var_88, var_78 - var_88, 1)

Botan::EC_Group::EC_Group(&var_160)
int64_t x9_1 = var_160
int64_t x8_11 = *(*arg1 - 0x88)
var_160 = 0
int64_t* var_158_1 = nullptr
void* x8_12 = arg1 + x8_11
int64_t* x21 = *(x8_12 + 0x10)
*(x8_12 + 8) = x9_1
int64_t var_158
*(x8_12 + 0x10) = var_158

if (x21 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x21[1])
        i = __stlxr(x9_2 - 1, &x21[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x21 + 0x10))(x21)
        std::__ndk1::__shared_weak_count::__release_weak()

if (var_158_1 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&var_158_1[1])
        i_1 = __stlxr(x9_3 - 1, &var_158_1[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*var_158_1 + 0x10))(var_158_1)
        std::__ndk1::__shared_weak_count::__release_weak()

*(*arg1 - 0x88)
uint64_t x8_22 = *(Botan::EC_Group::data() + 0x1e0)

if (x8_22 == 0x100 || x8_22 == 0x200)
    char* var_b0
    __builtin_memset(&var_b0, 0, 0x18)
    Botan::BER_Decoder::BER_Decoder(&var_160)
    Botan::BER_Decoder::decode(&var_160, &var_b0, 4, 4)
    int32_t var_130_2 = 0
    
    if (var_130_1 != 0)
        (*(*var_130_1 + 0x38))()
    
    if (var_150 != 0)
        void* var_148_2 = var_150
        Botan::deallocate_memory(var_150, var_140 - var_150, 1)
    
    char* x1_7 = var_b0
    int64_t var_a8
    void* x9_4 = var_a8 - x1_7
    uint64_t x8_27 = x9_4 u>> 2
    uint64_t x20_1 = x9_4 u>> 1
    
    if (x8_27 != 0)
        void* x10_3 = &x1_7[x20_1]
        char x12_1 = *x1_7
        void* x9_5 = x9_4 & 0xfffffffffffffffe
        *x1_7 = *(x10_3 - 1)
        *(x10_3 - 1) = x12_1
        char* x10_4 = var_b0
        void* x11_4 = x9_5 + x10_4
        char x13_1 = x10_4[x20_1]
        x10_4[x20_1] = *(x11_4 - 1)
        *(x11_4 - 1) = x13_1
        
        if (x8_27 != 1)
            void* x9_6 = x9_5 - 2
            int64_t x10_5 = x20_1 - 2
            int64_t x11_5 = 1
            
            do
                char* x12_3 = var_b0
                char x14_1 = x12_3[x11_5]
                x12_3[x11_5] = x12_3[x10_5]
                x12_3[x10_5] = x14_1
                char* x12_4 = var_b0
                x10_5 -= 1
                void* x14_2 = &x12_4[x20_1]
                char x15_1 = *(x14_2 + x11_5)
                *(x14_2 + x11_5) = *(x12_4 + x9_6)
                x11_5 += 1
                *(x12_4 + x9_6) = x15_1
                x9_6 -= 1
            while (x8_27 != x11_5)
        
        x1_7 = var_b0
    
    __builtin_memset(&var_98, 0, 0x18)
    int64_t var_80_2 = -1
    var_78.d = 1
    Botan::BigInt::binary_decode(&var_98, x1_7)
    char* x8_28 = var_b0
    void* var_d8
    __builtin_memset(&var_d8, 0, 0x18)
    int64_t var_c0_1 = -1
    int32_t var_b8_1 = 1
    Botan::BigInt::binary_decode(&var_d8, &x8_28[x20_1])
    *(*arg1 - 0x88)
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = Botan::PointGFp::PointGFp(&var_160, Botan::EC_Group::data(), &var_98)
    void* x8_35 = arg1 + *(*arg1 - 0x88) + 0x18
    
    if (&var_160 != x8_35)
        int64_t x12_5 = *x8_35
        int64_t x10_6 = *(x8_35 + 8)
        *x8_35 = var_160
        *(x8_35 + 8) = var_158_1
        var_160 = x12_5
        int64_t var_158_2 = x10_6
        v1_1 = *(x8_35 + 0x10)
        *(x8_35 + 0x10) = var_150.o
        var_150.o = v1_1
        int64_t x12_6 = *(x8_35 + 0x20)
        int64_t x10_7 = *(x8_35 + 0x28)
        *(x8_35 + 0x20) = var_140
        int64_t var_138
        *(x8_35 + 0x28) = var_138
        int64_t var_140_1 = x12_6
        int64_t var_138_1 = x10_7
        int32_t x10_8 = *(x8_35 + 0x30)
        *(x8_35 + 0x30) = var_130_2
        var_130_2 = x10_8
        v1_1 = *(x8_35 + 0x38)
        int128_t var_128
        *(x8_35 + 0x38) = var_128
        int128_t var_128_1 = v1_1
        int64_t x12_7 = *(x8_35 + 0x48)
        int64_t x10_9 = *(x8_35 + 0x50)
        int64_t var_118
        *(x8_35 + 0x48) = var_118
        int64_t var_110
        *(x8_35 + 0x50) = var_110
        int64_t var_118_1 = x12_7
        int64_t var_110_1 = x10_9
        int32_t x10_10 = *(x8_35 + 0x58)
        int32_t var_108
        *(x8_35 + 0x58) = var_108
        int32_t var_108_1 = x10_10
        v1_1 = *(x8_35 + 0x60)
        int128_t var_100
        *(x8_35 + 0x60) = var_100
        int128_t var_100_1 = v1_1
        int64_t x12_8 = *(x8_35 + 0x70)
        int64_t x10_11 = *(x8_35 + 0x78)
        int64_t var_f0
        *(x8_35 + 0x70) = var_f0
        int64_t var_e8
        *(x8_35 + 0x78) = var_e8
        int64_t var_f0_1 = x12_8
        int64_t var_e8_1 = x10_11
        int32_t x10_12 = *(x8_35 + 0x80)
        int32_t var_e0
        *(x8_35 + 0x80) = var_e0
        int32_t var_e0_1 = x10_12
    
    Botan::PointGFp::~PointGFp()
    *(*arg1 - 0x88)
    
    if ((Botan::PointGFp::on_the_curve() & 1) != 0)
        void* x0_25 = var_d8
        
        if (x0_25 != 0)
            void* var_d0_1 = x0_25
            int64_t var_c8
            Botan::deallocate_memory(x0_25, (var_c8 - x0_25) s>> 2, 4)
        
        void* x0_26 = var_98
        
        if (x0_26 != 0)
            void* var_90_1 = x0_26
            int64_t var_88_1
            Botan::deallocate_memory(x0_26, (var_88_1 - x0_26) s>> 2, 4)
        
        char* x0_27 = var_b0
        
        if (x0_27 != 0)
            char* var_a8_1 = x0_27
            int64_t var_a0
            Botan::deallocate_memory(x0_27, var_a0 - x0_27, 1)
        
        void* result = result_1
        var_60 = _vtable_for_Botan::OID + 0x10
        
        if (result == 0)
            return result
        
        void* result_2 = result
        return operator delete(result)
    
    x8_22 = Botan::assertion_failure("m_public_key.on_the_curve()", 
        "Loaded GOST 34.10 public key is on the curve", "GOST_3410_PublicKey", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa95a)

void** x0_28 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(x8_22)
int128_t* x0_31
int128_t v0_2
x0_31, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_98, nullptr)
int64_t var_150_1 = x0_31[1].q
var_160.o = *x0_31
__builtin_memset(x0_31, 0, 0x18)
*x0_28 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_28[1])
*x0_28 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_28, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
