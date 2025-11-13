// 函数: sub_ec95b4
// 地址: 0xec95b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_70 = 0x1e
int64_t var_6f_1
__builtin_strncpy(&var_6f_1, "X520.CommonName", 0x10)
Botan::OID::from_string(&var_70)
void* __offset(vtable_for_Botan::OID, 0x10) var_c8
Botan::X509_DN::add_attribute(arg2, &var_c8)
void** result_1
void* result_3 = result_1
var_c8 = _vtable_for_Botan::OID + 0x10
void* result_2

if (result_3 != 0)
    result_2 = result_3
    operator delete(result_3)

char var_60

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60.q)

var_70 = 0x18
int64_t var_6f_2
__builtin_strncpy(&var_6f_2, "X520.Country", 0xd)
Botan::OID::from_string(&var_70)
Botan::X509_DN::add_attribute(arg2, &var_c8)
void** result_4 = result_1
var_c8 = _vtable_for_Botan::OID + 0x10

if (result_4 != 0)
    result_2 = result_4
    operator delete(result_4)

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60.q)

var_70 = 0x14
int64_t var_6f_3
__builtin_strncpy(&var_6f_3, "X520.State", 0xb)
Botan::OID::from_string(&var_70)
Botan::X509_DN::add_attribute(arg2, &var_c8)
void** result_5 = result_1
var_c8 = _vtable_for_Botan::OID + 0x10

if (result_5 != 0)
    result_2 = result_5
    operator delete(result_5)

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60.q)

var_70 = 0x1a
int64_t var_6f_4
__builtin_strncpy(&var_6f_4, "X520.Locality", 0xe)
Botan::OID::from_string(&var_70)
Botan::X509_DN::add_attribute(arg2, &var_c8)
void** result_6 = result_1
var_c8 = _vtable_for_Botan::OID + 0x10

if (result_6 != 0)
    result_2 = result_6
    operator delete(result_6)

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60.q)

__builtin_strcpy(&var_70, "\"X520.Organization")
Botan::OID::from_string(&var_70)
Botan::X509_DN::add_attribute(arg2, &var_c8)
void** result_7 = result_1
var_c8 = _vtable_for_Botan::OID + 0x10

if (result_7 != 0)
    result_2 = result_7
    operator delete(result_7)

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60.q)

int64_t x0_15
int128_t v0
x0_15, v0 = operator new(0x20)
v0 = data_71c520
var_60.q = x0_15
var_70.o = v0
int128_t var_f0
__builtin_strncpy(&var_f0, "X520.Organizatio", 0x10)
__builtin_strncpy(x0_15, "X520.OrganizationalUnit", 0x18)
Botan::OID::from_string(&var_70)
Botan::X509_DN::add_attribute(arg2, &var_c8)
void** result_8 = result_1
var_c8 = _vtable_for_Botan::OID + 0x10

if (result_8 != 0)
    result_2 = result_8
    operator delete(result_8)

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60.q)

int64_t x22 = *(arg1 + 0x60)
int64_t x25 = *(arg1 + 0x68)

if (x22 != x25)
    do
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_70)
        int128_t* x0_20
        int128_t v0_1
        x0_20, v0_1 = operator new(0x20)
        __builtin_strncpy(x0_20 + 0xf, "onalUnit", 9)
        int128_t var_90 = v0
        *x0_20 = var_f0
        Botan::OID::from_string(&var_90)
        Botan::X509_DN::add_attribute(arg2, &var_c8)
        void** result_9 = result_1
        var_c8 = _vtable_for_Botan::OID + 0x10
        
        if (result_9 != 0)
            result_2 = result_9
            operator delete(result_9)
        
        if ((zx.d(var_90.b) & 1) != 0)
            operator delete(x0_20)
            
            if ((zx.d(var_70) & 1) != 0)
                operator delete(var_60.q)
        else if ((zx.d(var_70) & 1) != 0)
            operator delete(var_60.q)
        
        x22 += 0x18
    while (x25 != x22)

__builtin_strcpy(&var_70, "\"X520.SerialNumber")
Botan::OID::from_string(&var_70)
Botan::X509_DN::add_attribute(arg2, &var_c8)
void** result_10 = result_1
var_c8 = _vtable_for_Botan::OID + 0x10

if (result_10 != 0)
    result_2 = result_10
    operator delete(result_10)

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60.q)

Botan::AlternativeName::AlternativeName(&var_c8, arg1 + 0xc0, arg1 + 0xd8, arg1 + 0x108)
*(arg3 + 0x10)
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    arg3 + 8)
void* result_11 = result_2
*(arg3 + 8) = result_1
*(arg3 + 0x10) = result_11
int64_t var_b0
*(arg3 + 0x18) = var_b0

if (var_b0 == 0)
    *(arg3 + 8) = arg3 + 0x10
else
    *(result_11 + 0x10) = arg3 + 0x10
    result_1 = &result_2
    result_2 = nullptr
    int64_t var_b0_1 = 0

*(arg3 + 0x28)
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    arg3 + 0x20)
void* const var_a0
void* const x1_12 = var_a0
void** var_a8
*(arg3 + 0x20) = var_a8
*(arg3 + 0x28) = x1_12
int64_t var_98
*(arg3 + 0x30) = var_98

if (var_98 == 0)
    *(arg3 + 0x20) = arg3 + 0x28
else
    *(x1_12 + 0x10) = arg3 + 0x28
    var_a8 = &var_a0
    var_a0 = nullptr
    int64_t var_98_1 = 0

var_c8 = _vtable_for_Botan::AlternativeName + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    &var_a8)
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &result_1)
var_70 = 0x1a
int64_t var_6f_5
__builtin_strncpy(&var_6f_5, "PKIX.XMPPAddr", 0xe)
Botan::OID::from_string(&var_70)
Botan::AlternativeName::add_othername(arg3, &var_c8, arg1 + 0x138)
void** result = result_1
var_c8 = _vtable_for_Botan::OID + 0x10

if (result != 0)
    result_2 = result
    result = operator delete(result)

if ((zx.d(var_70) & 1) != 0)
    result = operator delete(var_60.q)

int64_t x21_3 = *(arg1 + 0x120)
int64_t x20_1 = *(arg1 + 0x128)

if (x21_3 != x20_1)
    int16_t* x24_2 = &var_70 | 1
    
    do
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_c8)
        var_70 = 6
        x24_2[1].b = 0x53
        *x24_2 = 0x4e44
        var_6f_5:3.b = 0
        result = Botan::AlternativeName::add_attribute(arg3, &var_70)
        
        if ((zx.d(var_70) & 1) != 0)
            result = operator delete(var_60.q)
            
            if ((zx.d(var_c8.b) & 1) != 0)
                result = operator delete(result_2)
        else if ((zx.d(var_c8.b) & 1) != 0)
            result = operator delete(result_2)
        
        x21_3 += 0x18
    while (x20_1 != x21_3)

return result
