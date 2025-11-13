// 函数: _ZN5Botan13EC_PrivateKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEb
// 地址: 0xd36060
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = *(arg2 + 8)
*(arg1 + *(*arg1 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0xd0)) = *(arg2 + 0x18)
__builtin_memset(arg1 + 8, 0, 0x18)
*(arg1 + 0x20) = -1
*(arg1 + 0x28) = 1
*(arg3 + 0x30)
int64_t var_178
Botan::EC_Group::EC_Group(&var_178, *(arg3 + 0x28))
int64_t x9_3 = var_178
int64_t x8_8 = *(*arg1 - 0xc8)
var_178 = 0
int64_t* var_170_1 = nullptr
void* x8_9 = arg1 + x8_8
int64_t* x23 = *(x8_9 + 0x10)
*(x8_9 + 8) = x9_3
int64_t var_170
*(x8_9 + 0x10) = var_170

if (x23 != 0)
    int64_t x9_4
    int32_t i
    
    do
        x9_4 = __ldaxr(&x23[1])
        i = __stlxr(x9_4 - 1, &x23[1])
    while (i != 0)
    
    if (x9_4 == 0)
        (*(*x23 + 0x10))(x23)
        std::__ndk1::__shared_weak_count::__release_weak()

if (var_170_1 != 0)
    int64_t x9_5
    int32_t i_1
    
    do
        x9_5 = __ldaxr(&var_170_1[1])
        i_1 = __stlxr(x9_5 - 1, &var_170_1[1])
    while (i_1 != 0)
    
    if (x9_5 == 0)
        (*(*var_170_1 + 0x10))(var_170_1)
        std::__ndk1::__shared_weak_count::__release_weak()

*(arg1 + *(*arg1 - 0xc8) + 0xa0) = 0
*(*arg1 - 0xc8)
void* x0_6 = Botan::EC_Group::data()
*(arg1 + *(*arg1 - 0xc8) + 0xa0) = (*(x0_6 + 0x1c8) != *(x0_6 + 0x1d0) ? 1 : 0) << 1
uint8_t* var_78
__builtin_memset(&var_78, 0, 0x18)
void* __offset(vtable_for_Botan::OID, 0x10) var_60 = _vtable_for_Botan::OID + 0x10
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_b0
Botan::BER_Decoder::BER_Decoder(&var_b0)
Botan::BER_Decoder::start_cons(&var_b0, 0x10)
void* x0_9 = operator new(0x30)
char v0 = (data_71bb40).b
__builtin_strncpy(x0_9, "Unknown version code for ECC key", 0x21)
void* __offset(vtable_for_Botan::OID, 0x10) var_f0
Botan::BER_Decoder::decode(&var_178, &var_f0, 2)

if (var_f0 != 1)
    void** x0_36 = __cxa_allocate_exception(0x20)
    *x0_36 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_36[1])
    *x0_36 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_36, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

Botan::BER_Decoder::decode_octet_string_bigint(&var_178)
var_f0 = _vtable_for_Botan::OID + 0x10
void* var_e8
__builtin_memset(&var_e8, 0, 0x18)
Botan::BER_Decoder::decode_optional_string<Botan::secure_allocator<uint8_t> >(
    Botan::BER_Decoder::decode_optional<Botan::OID>(&var_178, &var_60, 0, 0xa0), &var_78, 3, 1)
Botan::BER_Decoder::end_cons()
void* x0_14 = var_e8
var_f0 = _vtable_for_Botan::OID + 0x10

if (x0_14 != 0)
    void* var_e0_1 = x0_14
    operator delete(x0_14)

if ((zx.d(v0) & 1) != 0)
    operator delete(x0_9)

int32_t var_148_1 = 0
int64_t* var_148

if (var_148 != 0)
    (*(*var_148 + 0x38))()

void* var_168
int64_t var_158

if (var_168 != 0)
    void* var_160_1 = var_168
    Botan::deallocate_memory(var_168, var_158 - var_168, 1)

int64_t var_80_1 = 0
int64_t* var_80

if (var_80 != 0)
    (*(*var_80 + 0x38))()

void* var_a0

if (var_a0 != 0)
    void* var_98_1 = var_a0
    int64_t var_90
    Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)

uint8_t* x22_2 = var_78
int64_t var_70
int64_t var_150
int128_t var_140
int64_t var_130
int64_t var_128
int32_t var_120
int128_t var_118
int64_t var_108
int64_t var_100
int32_t var_f8

if (x22_2 == var_70)
    int32_t entry_x4
    
    if ((entry_x4 & 1) == 0)
        *(*arg1 - 0xc8)
        int128_t v0_3
        int128_t v1_2
        v0_3, v1_2 = Botan::operator*(arg1 + 8, Botan::EC_Group::data() + 0x10)
        void* x8_60 = arg1 + *(*arg1 - 0xc8) + 0x18
        
        if (&var_178 != x8_60)
            int64_t x12_9 = *x8_60
            int64_t x10_18 = *(x8_60 + 8)
            *x8_60 = var_178
            *(x8_60 + 8) = var_170_1
            var_178 = x12_9
            int64_t var_170_4 = x10_18
            v1_2 = *(x8_60 + 0x10)
            *(x8_60 + 0x10) = var_168.o
            var_168.o = v1_2
            int64_t x12_10 = *(x8_60 + 0x20)
            int64_t x10_19 = *(x8_60 + 0x28)
            *(x8_60 + 0x20) = var_158
            *(x8_60 + 0x28) = var_150
            int64_t var_158_3 = x12_10
            int64_t var_150_3 = x10_19
            int32_t x10_20 = *(x8_60 + 0x30)
            *(x8_60 + 0x30) = var_148_1
            var_148_1 = x10_20
            v1_2 = *(x8_60 + 0x38)
            *(x8_60 + 0x38) = var_140
            int128_t var_140_3 = v1_2
            int64_t x12_11 = *(x8_60 + 0x48)
            int64_t x10_21 = *(x8_60 + 0x50)
            *(x8_60 + 0x48) = var_130
            *(x8_60 + 0x50) = var_128
            int64_t var_130_3 = x12_11
            int64_t var_128_3 = x10_21
            int32_t x10_22 = *(x8_60 + 0x58)
            *(x8_60 + 0x58) = var_120
            int32_t var_120_3 = x10_22
            v1_2 = *(x8_60 + 0x60)
            *(x8_60 + 0x60) = var_118
            int128_t var_118_3 = v1_2
            int64_t x12_12 = *(x8_60 + 0x70)
            int64_t x10_23 = *(x8_60 + 0x78)
            *(x8_60 + 0x70) = var_108
            *(x8_60 + 0x78) = var_100
            int64_t var_108_3 = x12_12
            int64_t var_100_3 = x10_23
            int32_t x10_24 = *(x8_60 + 0x80)
            *(x8_60 + 0x80) = var_f8
            int32_t var_f8_3 = x10_24
        
        Botan::PointGFp::~PointGFp()
    else
        *(*arg1 - 0xc8)
        void* x0_24 = Botan::EC_Group::data()
        *(*arg1 - 0xc8)
        Botan::inverse_mod(arg1 + 8, Botan::EC_Group::data() + 0xe8)
        int128_t v0_2
        int128_t v1_1
        v0_2, v1_1 = Botan::operator*(&var_b0, x0_24 + 0x10)
        void* x8_51 = arg1 + *(*arg1 - 0xc8) + 0x18
        
        if (&var_178 != x8_51)
            int64_t x12_5 = *x8_51
            int64_t x10_11 = *(x8_51 + 8)
            *x8_51 = var_178
            *(x8_51 + 8) = var_170_1
            var_178 = x12_5
            int64_t var_170_3 = x10_11
            v1_1 = *(x8_51 + 0x10)
            *(x8_51 + 0x10) = var_168.o
            var_168.o = v1_1
            int64_t x12_6 = *(x8_51 + 0x20)
            int64_t x10_12 = *(x8_51 + 0x28)
            *(x8_51 + 0x20) = var_158
            *(x8_51 + 0x28) = var_150
            int64_t var_158_2 = x12_6
            int64_t var_150_2 = x10_12
            int32_t x10_13 = *(x8_51 + 0x30)
            *(x8_51 + 0x30) = var_148_1
            var_148_1 = x10_13
            v1_1 = *(x8_51 + 0x38)
            *(x8_51 + 0x38) = var_140
            int128_t var_140_2 = v1_1
            int64_t x12_7 = *(x8_51 + 0x48)
            int64_t x10_14 = *(x8_51 + 0x50)
            *(x8_51 + 0x48) = var_130
            *(x8_51 + 0x50) = var_128
            int64_t var_130_2 = x12_7
            int64_t var_128_2 = x10_14
            int32_t x10_15 = *(x8_51 + 0x58)
            *(x8_51 + 0x58) = var_120
            int32_t var_120_2 = x10_15
            v1_1 = *(x8_51 + 0x60)
            *(x8_51 + 0x60) = var_118
            int128_t var_118_2 = v1_1
            int64_t x12_8 = *(x8_51 + 0x70)
            int64_t x10_16 = *(x8_51 + 0x78)
            *(x8_51 + 0x70) = var_108
            *(x8_51 + 0x78) = var_100
            int64_t var_108_2 = x12_8
            int64_t var_100_2 = x10_16
            int32_t x10_17 = *(x8_51 + 0x80)
            *(x8_51 + 0x80) = var_f8
            int32_t var_f8_2 = x10_17
        
        Botan::PointGFp::~PointGFp()
        void* x0_29 = var_b0
        
        if (x0_29 != 0)
            Botan::deallocate_memory(x0_29, (var_a0 - x0_29) s>> 2, 4)
    
    *(*arg1 - 0xc8)
    
    if ((Botan::PointGFp::on_the_curve() & 1) == 0)
        sub_c776cc(Botan::assertion_failure("m_public_key.on_the_curve()", 
            "Public point derived from loaded key was on the curve", "EC_PrivateKey", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x75d5))
        noreturn
else
    *(*arg1 - 0xc8)
    int128_t v0_1
    int128_t v1
    v0_1, v1 = Botan::OS2ECP(x22_2, var_70 - x22_2, Botan::EC_Group::data())
    int64_t* x8_41 = arg1 + *(*arg1 - 0xc8) + 0x18
    
    if (&var_178 != x8_41)
        int64_t x12_1 = *x8_41
        int64_t x10_4 = x8_41[1]
        *x8_41 = var_178
        x8_41[1] = var_170_1
        var_178 = x12_1
        int64_t var_170_2 = x10_4
        v1 = *(x8_41 + 0x10)
        *(x8_41 + 0x10) = var_168.o
        var_168.o = v1
        int64_t x12_2 = x8_41[4]
        int64_t x10_5 = x8_41[5]
        x8_41[4] = var_158
        x8_41[5] = var_150
        int64_t var_158_1 = x12_2
        int64_t var_150_1 = x10_5
        x8_41[6].d = var_148_1
        var_148_1 = x8_41[6].d
        v1 = *(x8_41 + 0x38)
        *(x8_41 + 0x38) = var_140
        int128_t var_140_1 = v1
        int64_t x12_3 = x8_41[9]
        int64_t x10_7 = x8_41[0xa]
        x8_41[9] = var_130
        x8_41[0xa] = var_128
        int64_t var_130_1 = x12_3
        int64_t var_128_1 = x10_7
        x8_41[0xb].d = var_120
        int32_t var_120_1 = x8_41[0xb].d
        v1 = *(x8_41 + 0x60)
        *(x8_41 + 0x60) = var_118
        int128_t var_118_1 = v1
        int64_t x12_4 = x8_41[0xe]
        int64_t x10_9 = x8_41[0xf]
        x8_41[0xe] = var_108
        x8_41[0xf] = var_100
        int64_t var_108_1 = x12_4
        int64_t var_100_1 = x10_9
        x8_41[0x10].d = var_f8
        int32_t var_f8_1 = x8_41[0x10].d
    
    Botan::PointGFp::~PointGFp()
uint8_t* x0_35 = var_78

if (x0_35 != 0)
    uint8_t* var_70_1 = x0_35
    int64_t var_68
    Botan::deallocate_memory(x0_35, var_68 - x0_35, 1)

void* result = result_1
var_60 = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

void* result_2 = result
return operator delete(result)
