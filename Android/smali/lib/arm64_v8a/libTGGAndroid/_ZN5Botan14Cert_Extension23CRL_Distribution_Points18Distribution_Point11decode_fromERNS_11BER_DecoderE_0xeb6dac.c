// 函数: _ZN5Botan14Cert_Extension23CRL_Distribution_Points18Distribution_Point11decode_fromERNS_11BER_DecoderE
// 地址: 0xeb6dac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
void var_90
Botan::BER_Decoder::start_cons(&var_90, 0)
int16_t var_e0 = 0
int16_t var_f8 = 0
int16_t var_110 = 0
int16_t var_128 = 0
void* __offset(vtable_for_Botan::AlternativeName, 0x10) var_c8
Botan::AlternativeName::AlternativeName(&var_c8, &var_e0, &var_f8, &var_110)
Botan::AlternativeName var_58
Botan::BER_Decoder::decode_optional_implicit<Botan::AlternativeName>(&var_58, arg1 + 8, 0, 0xa0, 
    0x10, 0x20)
Botan::BER_Decoder::end_cons()
Botan::BER_Decoder::end_cons()
var_c8 = _vtable_for_Botan::AlternativeName + 0x10
void var_a8
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    &var_a8)
void var_c0
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &var_c0)

if ((zx.d(var_110.b) & 1) != 0)
    void* var_100
    operator delete(var_100)
    
    if ((zx.d(var_f8.b) & 1) == 0)
        goto label_eb6e80
    
    goto label_eb6f20

if ((zx.d(var_f8.b) & 1) == 0)
label_eb6e80:
    
    if ((zx.d(var_e0.b) & 1) != 0)
        goto label_eb6f30
    
    goto label_eb6e84

label_eb6f20:
void* var_e8
operator delete(var_e8)
int64_t* var_28

if ((zx.d(var_e0.b) & 1) == 0)
label_eb6e84:
    int64_t var_28_1 = 0
    
    if (var_28 != 0)
        (*(*var_28 + 0x38))()
else
label_eb6f30:
    void* var_d0
    operator delete(var_d0)
    int64_t var_28_2 = 0
    
    if (var_28 != 0)
        (*(*var_28 + 0x38))()
void* var_48

if (var_48 != 0)
    void* var_40_1 = var_48
    int64_t var_38
    Botan::deallocate_memory(var_48, var_38 - var_48, 1)

int64_t var_60_1 = 0
int64_t* var_60

if (var_60 != 0)
    (*(*var_60 + 0x38))()

void* result

if (result == 0)
    return result

void* result_1 = result
int64_t var_70
return Botan::deallocate_memory(result, var_70 - result, 1)
