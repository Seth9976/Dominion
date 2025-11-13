// 函数: _ZNK5Botan14Cert_Extension28Authority_Information_Access12encode_innerEv
// 地址: 0xeb502c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_120 = _vtable_for_Botan::ASN1_String + 0x10
void* result_1
__builtin_memset(&result_1, 0, 0x18)
char var_100
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_100)
int32_t var_e8 = 0x16
void* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* var_c0 = nullptr
int64_t var_b0 = (zx.o(0)).q
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x20)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_60 = &var_80
void var_e0
sub_f2410c(&var_80, &var_e0)

if (&var_80 == var_60)
    (*var_60)->vFunc_4()
else if (var_60 != 0)
    (*var_60)->j_operator delete()

Botan::DER_Encoder::start_cons(&var_e0, 0x10)
Botan::DER_Encoder::start_cons(&var_e0, 0x10)
char var_138 = 0x12
int64_t var_137
__builtin_strcpy(&var_137, "PKIX.OCSP")
Botan::OID::from_string(&var_138)
var_80->vFunc_0(&var_80, &var_e0)
void* var_f0
void* x3
void var_ff

if ((zx.d(var_100) & 1) != 0)
    x3 = var_f0
else
    x3 = &var_ff
Botan::DER_Encoder::add_object(&var_e0, 6, 0x80, x3)
Botan::DER_Encoder::end_cons()
Botan::DER_Encoder::end_cons()
var_80 = _vtable_for_Botan::OID + 0x10

if (entry_x8 != 0)
    void* var_70_1 = entry_x8
    operator delete(entry_x8)

void* var_128

if ((zx.d(var_138) & 1) != 0)
    operator delete(var_128)
void* x23 = var_a0:8.q

if (x23 != 0)
    int128_t var_90
    void* x19_1 = var_90.q
    void* x0_11
    
    if (x19_1 == x23)
        x0_11 = x23
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_90:8, x19_1)
        while (x23 != x19_1)
        
        x0_11 = var_a0:8.q
    
    var_90.q = x23
    operator delete(x0_11)

int64_t x0_12 = var_b0

if (x0_12 != 0)
    var_b0 = x0_12
    Botan::deallocate_memory(x0_12, var_a0.q - x0_12, 1)

if (&var_e0 == var_c0)
    (*(*var_c0 + 0x20))()
else if (var_c0 != 0)
    (*(*var_c0 + 0x28))()

void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_120_1 =
    _vtable_for_Botan::ASN1_String + 0x10

if ((zx.d(var_100) & 1) != 0)
    operator delete(var_f0)

void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
