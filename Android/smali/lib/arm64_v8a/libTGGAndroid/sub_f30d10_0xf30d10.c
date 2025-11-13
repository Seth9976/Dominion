// 函数: sub_f30d10
// 地址: 0xf30d10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)

if (x8 == 0 || *(arg1 + 0x10) == 0)
    return 0xffffffe1

*x8 = 0
int32_t x21 = *(arg1 + 0x18)

if (x21 u> 1)
    return 0xffffffe2

Botan::BigInt* x0 = operator new(0x88)
uint64_t x0_2 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x20))
char x2 = (*(arg1 + 0x28)).b
char var_38 = 0x1a
int64_t var_37
__builtin_strncpy(&var_37, "HMAC(SHA-256)", 0xe)
Botan::FPE_FE1::FPE_FE1(x0, x0_2, x2, zx.q(x21 != 0 ? 1 : 0))
*(arg1 + 0x30)
Botan::SymmetricAlgorithm::set_key(x0, *(arg1 + 0x10))
int64_t* x0_6 = operator new(0x18)
x0_6[2] = x0
x0_6[1].d = 0xd49fb820
*x0_6 = _vtable_for_botan_fpe_struct + 0x10
**(arg1 + 8) = x0_6
return 0
