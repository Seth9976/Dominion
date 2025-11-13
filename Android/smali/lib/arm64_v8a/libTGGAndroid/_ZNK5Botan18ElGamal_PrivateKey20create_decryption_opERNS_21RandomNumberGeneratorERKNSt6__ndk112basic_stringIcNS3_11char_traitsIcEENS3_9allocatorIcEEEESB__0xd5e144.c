// 函数: _ZNK5Botan18ElGamal_PrivateKey20create_decryption_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xd5e144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x25 + 0x28)
char* entry_x3
uint64_t x19 = entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9_1 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9_1

if (x12 != 4)
    goto label_d5e1c8

char var_80

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x19, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*x19)
    x9_1 = *(x19 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d5e1c8:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9_1
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_11 = __cxa_allocate_exception(0x20)
        var_80 = 0xe
        int32_t var_7f
        __builtin_strncpy(&var_7f, "ElGamal", 8)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_11, &var_80)
        __cxa_throw(x0_11, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

struct Botan::PK_Ops::Decryption_with_EME::Botan::(anonymous namespace)::ElGamal_Decryption_Operation::VTable
    ** x0_2 = operator new(0x160)
Botan::PK_Ops::Decryption_with_EME::Decryption_with_EME(x0_2)
*x0_2 = &_vtable_for_Botan::(anonymous namespace)::ElGamal_Decryption_Operation{for `Botan::PK_Ops::Decryption_with_EME'}
x0_2[2] = *(arg1 + 0x38)
int64_t x8_3 = *(arg1 + 0x40)
x0_2[3] = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

x0_2[4] = arg1 + 0x50
x0_2[5] = Botan::BigInt::bits()
void* x0_6 = Botan::DL_Group::data()
int64_t x8_5 = *(x0_6 + 0x130)
x0_2[6] = *(x0_6 + 0x128)
x0_2[7] = x8_5

if (x8_5 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
    while (i_1 != 0)

Botan::RandomNumberGenerator* x0_8 = Botan::DL_Group::data()
var_80.q = &_vtable_for_std::__ndk1::__function::__func<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_214, std::__ndk1::allocator<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_214>, Botan::BigInt (Botan::BigInt const&)>{for `std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>'}
char* result_1 = &var_80
struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_215, std::__ndk1::allocator<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_215>, Botan::BigInt (Botan::BigInt const&)>::VTable
    * const var_b0 = &_vtable_for_std::__ndk1::__function::__func<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_215, std::__ndk1::allocator<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_215>, Botan::BigInt (Botan::BigInt const&)>{for `std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>'}
struct Botan::PK_Ops::Decryption_with_EME::Botan::(anonymous namespace)::ElGamal_Decryption_Operation::VTable
    ** var_a8 = x0_2
struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_215, std::__ndk1::allocator<Botan::(anonymous namespace)::ElGamal_Decryption_Operation::ElGamal_Decryption_Operation(Botan::ElGamal_PrivateKey const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&)::$_215>, Botan::BigInt (Botan::BigInt const&)>::VTable
    * const* var_90 = &var_b0
Botan::Blinder::Blinder(&x0_2[8], x0_8, arg2, &var_80)

if (&var_b0 == var_90)
    (*var_90)->vFunc_4()
else if (var_90 != 0)
    (*var_90)->j_operator delete()

char* result = result_1

if (&var_80 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

void** entry_x8
*entry_x8 = x0_2

if (*(x25 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
