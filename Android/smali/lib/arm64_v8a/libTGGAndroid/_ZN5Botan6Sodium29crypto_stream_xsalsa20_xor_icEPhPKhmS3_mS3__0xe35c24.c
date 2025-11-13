// 函数: _ZN5Botan6Sodium29crypto_stream_xsalsa20_xor_icEPhPKhmS3_mS3_
// 地址: 0xe35c24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 u> 0x3f)
    return 0xffffffff

int64_t var_90_1 = (zx.o(0)).q
int128_t var_80
__builtin_memset(&var_80, 0, 0x28)
void* __offset(vtable_for_Botan::Salsa20, 0x10) var_98 = _vtable_for_Botan::Salsa20 + 0x10
int64_t var_50_1 = (zx.o(0)).q
Botan::SymmetricAlgorithm::set_key(&var_98, arg6)
Botan::Salsa20::set_iv(&var_98, arg4)
void* x8_1 = var_80:8.q
int128_t var_70

if (x8_1 == var_70.q)
    sub_c776cc(Botan::SymmetricAlgorithm::throw_key_not_set_error())
    noreturn

*(x8_1 + 0x20) = arg5.d
void* x8_2 = var_80:8.q
*(x8_2 + 0x24) += (arg5 u>> 0x20).d
uint8_t* var_60
Botan::Salsa20::salsa_core(var_60, var_80:8.q, 0x14)
void* x8_3 = var_80:8.q
*(x8_3 + 0x20) += 1
void* x8_4 = var_80:8.q
int32_t x10_2 = *(x8_4 + 0x24)
int32_t x9_7

if (*(x8_4 + 0x20) == 0)
    x9_7 = x10_2 + 1
else
    x9_7 = x10_2

*(x8_4 + 0x24) = x9_7
var_50_1 = 0
Botan::Salsa20::cipher(&var_98, arg2, arg1)
uint8_t* x0_4 = var_60
var_98 = _vtable_for_Botan::Salsa20 + 0x10

if (x0_4 != 0)
    var_60 = x0_4
    Botan::deallocate_memory(x0_4, var_50_1 - x0_4, 1)

void* x0_5 = var_80:8.q

if (x0_5 != 0)
    int64_t x8_7 = var_70:8.q
    var_70.q = x0_5
    Botan::deallocate_memory(x0_5, (x8_7 - x0_5) s>> 2, 4)

int64_t x0_6 = var_90_1

if (x0_6 != 0)
    var_90_1 = x0_6
    Botan::deallocate_memory(x0_6, (var_80.q - x0_6) s>> 2, 4)

return 0
