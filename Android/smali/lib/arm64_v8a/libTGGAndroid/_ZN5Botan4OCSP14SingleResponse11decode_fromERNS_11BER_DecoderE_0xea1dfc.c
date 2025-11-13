// 函数: _ZN5Botan4OCSP14SingleResponse11decode_fromERNS_11BER_DecoderE
// 地址: 0xea1dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_60 = 0
int64_t var_58 = 0
void* __offset(vtable_for_Botan::Extensions, 0x10) var_88 = _vtable_for_Botan::Extensions + 0x10
void* var_80
__builtin_memset(&var_80, 0, 0x18)
int64_t* var_68 = &var_60
int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
Botan::ASN1_Time var_c0
(*(*(arg1 + 8) + 8))(arg1 + 8, &var_c0)
Botan::BER_Decoder::get_next_object()
int32_t var_128
uint64_t x23 = zx.q(var_128)
(*(*(arg1 + 0xb0) + 8))(arg1 + 0xb0, &var_c0)
int128_t var_f0
__builtin_memset(&var_f0, 0, 0x28)
int128_t var_e0 = zx.o(0)
var_f0.q = _vtable_for_Botan::ASN1_Time + 0x10
int64_t var_d0
var_d0.d = 0xff00
Botan::Extensions* x0_6 =
    Botan::BER_Decoder::decode_optional<Botan::ASN1_Time>(&var_c0, arg1 + 0xd8, 0, 0xa0)
int64_t var_110_1 = 0
int64_t var_100 = 0
int64_t var_f8 = 0
var_128.q = _vtable_for_Botan::Extensions + 0x10
int64_t* var_108 = &var_100
Botan::BER_Decoder::decode_optional<Botan::Extensions>(x0_6, &var_88, 1, 0xa0)
Botan::BER_Decoder::end_cons()
var_128.q = _vtable_for_Botan::Extensions + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &var_108)
int64_t var_90_1 = 0
int64_t* var_90

if (var_90 != 0)
    (*(*var_90 + 0x38))()

void* var_b0

if (var_b0 != 0)
    void* var_a8_1 = var_b0
    int64_t var_a0
    Botan::deallocate_memory(var_b0, var_a0 - var_b0, 1)

*(arg1 + 0xa8) = x23
var_88 = _vtable_for_Botan::Extensions + 0x10
int64_t result = std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &var_68)
void* x20_1 = var_80

if (x20_1 != 0)
    void** var_78
    void** x8_11 = var_78
    void* x0_13
    
    if (x8_11 == x20_1)
        x0_13 = x20_1
    else
        void** x23_1 = x8_11
        
        do
            x23_1 = &x23_1[-4]
            *x23_1 = _vtable_for_Botan::OID + 0x10
            void* x0_12 = x23_1[1]
            
            if (x0_12 != 0)
                x8_11[-2] = x0_12
                operator delete(x0_12)
            
            x8_11 = x23_1
        while (x20_1 != x23_1)
        
        x0_13 = var_80
    
    void* var_78_1 = x20_1
    result = operator delete(x0_13)

void* var_120

if (var_120 == 0)
    return result

int64_t var_110
return Botan::deallocate_memory(var_120, var_110 - var_120, 1)
