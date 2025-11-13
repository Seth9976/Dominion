// 函数: _ZNK5Botan14RSA_PrivateKey24create_kem_decryption_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xe0e708
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_e0e780

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_e0e780:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_7 = __cxa_allocate_exception(0x20)
        char var_58 = 6
        int32_t var_57 = 0x415352
        Botan::Provider_Not_Found::Provider_Not_Found(x0_7, &var_58)
        __cxa_throw(x0_7, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

struct Botan::PK_Ops::KEM_Decryption_with_KDF::Botan::(anonymous namespace)::RSA_KEM_Decryption_Operation::VTable
    ** x0_2 = operator new(0x170)
*x0_2 = _vtable_for_Botan::PK_Ops::KEM_Decryption_with_KDF + 0x10
x0_2[1] = 0
int64_t x0_4 = Botan::get_kdf(arg3)
int64_t* x0_5 = x0_2[1]
x0_2[1] = x0_4

if (x0_5 != 0)
    (*(*x0_5 + 8))()

struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>::VTable
    ** result = sub_f0a174(&x0_2[2], arg1, arg2)
*x0_2 = &_vtable_for_Botan::(anonymous namespace)::RSA_KEM_Decryption_Operation{for `Botan::PK_Ops::KEM_Decryption_with_KDF'}
void** entry_x8
*entry_x8 = x0_2
return result
