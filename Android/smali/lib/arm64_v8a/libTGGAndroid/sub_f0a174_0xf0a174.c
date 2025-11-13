// 函数: sub_f0a174
// 地址: 0xf0a174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
*arg1 = *(arg2 + 0x10)
int64_t x8_2 = *(arg2 + 0x18)
arg1[1] = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

arg1[2] = *(arg2 + 0x20)
int64_t x8_5 = *(arg2 + 0x28)
arg1[3] = x8_5

if (x8_5 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
    while (i_1 != 0)

Botan::RandomNumberGenerator* x1 = *arg1
struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>{for `std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>'}
int64_t* var_58 = arg1
struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>::VTable
    * const* result_1 = &var_60
struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda0'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda0'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda0'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda0'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>{for `std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>'}
int64_t* var_88 = arg1
struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda0'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda0'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>::VTable
    * const* var_70 = &var_90
Botan::Blinder::Blinder(&arg1[4], x1, arg3, &var_60)

if (&var_90 == var_70)
    (*var_70)->vFunc_4()
else if (var_70 != 0)
    (*var_70)->j_operator delete()

struct std::__ndk1::__function::__base<Botan::BigInt (Botan::BigInt const&)>::std::__ndk1::__function::__func<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&), std::__ndk1::allocator<Botan::(anonymous namespace)::RSA_Private_Operation::RSA_Private_Operation(Botan::RSA_PrivateKey const&, Botan::RandomNumberGenerator&)::'lambda'(Botan::BigInt const&)>, Botan::BigInt (Botan::BigInt const&)>::VTable
    * const* result = result_1

if (&var_60 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

void* x8_13 = arg1[2]
arg1[0x28] = 0x40
arg1[0x29] = *(x8_13 + 0x1c0) + 0x40
arg1[0x2a] = *(x8_13 + 0x1c8) + 0x40

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
