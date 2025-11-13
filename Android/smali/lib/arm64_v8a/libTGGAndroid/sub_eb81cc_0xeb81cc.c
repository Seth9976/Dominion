// 函数: sub_eb81cc
// 地址: 0xeb81cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_b0 = 0xe
int32_t var_af
__builtin_strncpy(&var_af, "SHA-160", 8)
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_70 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
Botan::OID::from_string(&var_b0)
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int16_t* x0_1 = operator new(2)
uint32_t x9 = zx.d(var_b0)
void* var_40 = &x0_1[1]
void* var_38 = &x0_1[1]
*x0_1 = 5
void* var_a0

if ((x9 & 1) != 0)
    operator delete(var_a0)

char var_138 = 8
int32_t var_137
__builtin_strncpy(&var_137, "MGF1", 5)
Botan::ASN1_Object::BER_encode()
Botan::OID::from_string(&var_138)
void* __offset(vtable_for_Botan::OID, 0x10) var_100
Botan::AlgorithmIdentifier::AlgorithmIdentifier(&var_b0, &var_100)
var_100 = _vtable_for_Botan::OID + 0x10
void* var_f8
void* var_f0

if (var_f8 != 0)
    var_f0 = var_f8
    operator delete(var_f8)

void* var_c8

if (var_c8 != 0)
    void* var_c0_1 = var_c8
    operator delete(var_c8)

void* var_128

if ((zx.d(var_138) & 1) != 0)
    operator delete(var_128)

*arg1 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
arg1[1] = _vtable_for_Botan::OID + 0x10
__builtin_memset(&arg1[2], 0, 0x30)
arg1[8] = _vtable_for_Botan::AlgorithmIdentifier + 0x10
arg1[9] = _vtable_for_Botan::OID + 0x10
__builtin_memset(&arg1[0xa], 0, 0x30)
arg1[0x10] = _vtable_for_Botan::AlgorithmIdentifier + 0x10
arg1[0x11] = _vtable_for_Botan::OID + 0x10
__builtin_memset(&arg1[0x12], 0, 0x30)
Botan::BER_Decoder::BER_Decoder(&var_138)
Botan::BER_Decoder::start_cons(&var_138, 0x10)
int64_t var_c8_1 = 0x14
int64_t var_140 = 1
Botan::BER_Decoder::decode_optional<uint64_t>(
    Botan::BER_Decoder::decode_optional<uint64_t>(
        Botan::BER_Decoder::decode_optional<Botan::AlgorithmIdentifier>(
            Botan::BER_Decoder::decode_optional<Botan::AlgorithmIdentifier>(&var_100, arg1, 0, 
                0xa0), 
            &arg1[8], 1, 0xa0), 
        &arg1[0x18], 2, 0xa0), 
    &arg1[0x19], 3, 0xa0)
Botan::BER_Decoder::end_cons()
int64_t* var_d0_1 = nullptr
int64_t* var_d0

if (var_d0 != 0)
    (*(*var_d0 + 0x38))()

int64_t var_e0

if (var_f0 != 0)
    void* var_e8_1 = var_f0
    Botan::deallocate_memory(var_f0, var_e0 - var_f0, 1)

int64_t var_108_1 = 0
int64_t* var_108

if (var_108 != 0)
    (*(*var_108 + 0x38))()

if (var_128 != 0)
    void* var_120_1 = var_128
    int64_t var_118
    Botan::deallocate_memory(var_128, var_118 - var_128, 1)

Botan::BER_Decoder::BER_Decoder(&var_100)
(*(arg1[0x10] + 8))(&arg1[0x10], &var_100)
int64_t var_d0_2 = 0

if (var_d0_1 != 0)
    (*(*var_d0_1 + 0x38))()

if (var_f0 != 0)
    void* var_e8_2 = var_f0
    Botan::deallocate_memory(var_f0, var_e0 - var_f0, 1)

var_b0.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* var_88

if (var_88 != 0)
    void* var_80_1 = var_88
    operator delete(var_88)

char var_a8
var_a8.q = _vtable_for_Botan::OID + 0x10

if (var_a0 != 0)
    void* var_98_1 = var_a0
    operator delete(var_a0)

void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_70_1 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_1 != 0)
    int16_t* var_40_1 = x0_1
    operator delete(x0_1)

void* __offset(vtable_for_Botan::OID, 0x10) var_68 = _vtable_for_Botan::OID + 0x10
void* result

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
