// 函数: _ZN5Botan9CRL_Entry11decode_fromERNS_11BER_DecoderE
// 地址: 0xe98140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_58 = -1
int32_t var_50 = 1
int64_t* x0 = operator new(0x80)
__builtin_memset(x0, 0, 0x18)
__builtin_memset(&x0[4], 0, 0x18)
x0[8].d = 0
x0[7].d = 0xff00
x0[3] = _vtable_for_Botan::ASN1_Time + 0x10
x0[0xb] = 0
x0[0xc] = 0
x0[9] = _vtable_for_Botan::Extensions + 0x10
x0[0xa] = 0
x0[0xe] = 0
x0[0xf] = 0
x0[0xd] = &x0[0xe]
int64_t* var_78 = x0
int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
void var_b0
Botan::BER_Decoder::decode(&var_b0, &result_1, 2)
(*(var_78[3] + 8))(&var_78[3], &var_b0)
Botan::BigInt::encode(&result_1)
int64_t* x20_1 = var_78
void* x0_6 = *x20_1

if (x0_6 != 0)
    x20_1[1] = x0_6
    operator delete(x0_6)
    __builtin_memset(x20_1, 0, 0x18)

int64_t* var_d0
*x20_1 = var_d0
void* var_c8
x20_1[1] = var_c8
int64_t var_c0
x20_1[2] = var_c0
int32_t var_a8
int64_t* var_88

if (((*(*var_88 + 0x18))() & 1) == 0 || var_a8 != 0xff00)
    (*(var_78[9] + 8))(&var_78[9], &var_b0)
    int64_t* x20_2 = var_78
    char var_48_1 = 0x12
    int64_t var_47
    __builtin_strcpy(&var_47, "2.5.29.21")
    Botan::OID::OID(&var_d0)
    void* var_38
    
    if ((zx.d(var_48_1) & 1) != 0)
        operator delete(var_38)
    void* x0_14 =
        Botan::Extensions::get_extension_object_as<Botan::Cert_Extension::CRL_ReasonCode>(&x20_2[9])
    var_d0 = _vtable_for_Botan::OID + 0x10
    
    if (var_c8 != 0)
        void* var_c0_1 = var_c8
        operator delete(var_c8)
    
    int64_t* x8_15
    int32_t x9_1
    
    if (x0_14 == 0)
        x8_15 = var_78
        x9_1 = 0
    else
        x9_1 = *(x0_14 + 8)
        x8_15 = var_78
    
    x8_15[8].d = x9_1

Botan::BER_Decoder::end_cons()
int64_t* x22 = var_78
var_78 = nullptr
var_d0 = x22
int64_t* x0_16 = operator new(0x20)
x0_16[2] = 0
x0_16[3] = x22
var_d0 = nullptr
*x0_16 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::CRL_Entry_Data*, std::__ndk1::default_delete<Botan::CRL_Entry_Data>, std::__ndk1::allocator<Botan::CRL_Entry_Data> >
    + 0x10
x0_16[1] = 0
sub_e98704(&var_d0)
int64_t* x20_4 = *(arg1 + 0x10)
*(arg1 + 8) = x22
*(arg1 + 0x10) = x0_16

if (x20_4 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20_4[1])
        i = __stlxr(x9_2 - 1, &x20_4[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20_4 + 0x10))(x20_4)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t var_80_1 = 0
int64_t* var_80

if (var_80 != 0)
    (*(*var_80 + 0x38))()

void* var_a0

if (var_a0 != 0)
    void* var_98_1 = var_a0
    int64_t var_90
    Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)

sub_e98704(&var_78)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_60
return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
