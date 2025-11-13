// 函数: _ZN5Botan14ed25519_verifyEPKhmS1_S1_S1_m
// 地址: 0xd40280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int128_t var_160
__builtin_memset(&var_160, 0, 0xa0)
Botan::SHA_512::SHA_512()
int32_t x0_1

if (zx.d(arg3[0x3f]) u< 0x20)
    x0_1 = Botan::ge_frombytes_negate_vartime(&var_160, arg4)

void* __offset(vtable_for_Botan::SHA_512, 0x10) var_1b0
int32_t x19_1

if (zx.d(arg3[0x3f]) u< 0x20 && x0_1 == 0)
    (*(var_1b0 + 0x18))(&var_1b0, arg5, arg6)
    (*(var_1b0 + 0x18))(&var_1b0, arg3, 0x20)
    (*(var_1b0 + 0x18))(&var_1b0, arg4, 0x20)
    (*(var_1b0 + 0x18))(&var_1b0, arg1, arg2)
    uint8_t var_98[0x40]
    (*(var_1b0 + 0x20))(&var_1b0, &var_98)
    Botan::sc_reduce(&var_98)
    uint8_t var_b8
    Botan::ge_double_scalarmult_vartime(&var_b8, &var_98, &var_160, &arg3[0x20])
    char var_bc_1 = 0
    char var_b7
    char var_b6
    char var_b5
    char var_b4
    char var_b3
    char var_b2
    char var_b1
    char var_b0
    char var_af
    char x8_47 = (*arg3 ^ var_b8) | (arg3[1] ^ var_b7) | (arg3[2] ^ var_b6) | (arg3[3] ^ var_b5)
        | (arg3[4] ^ var_b4) | (arg3[5] ^ var_b3) | (arg3[6] ^ var_b2) | (arg3[7] ^ var_b1)
        | (arg3[8] ^ var_b0) | (arg3[9] ^ var_af)
    char var_ae
    char var_ad
    char var_ac
    char var_ab
    char var_aa
    char var_a9
    char var_a8
    char var_a7
    char var_a6
    char var_a5
    char x8_77 = x8_47 | (arg3[0xa] ^ var_ae) | (arg3[0xb] ^ var_ad) | (arg3[0xc] ^ var_ac)
        | (arg3[0xd] ^ var_ab) | (arg3[0xe] ^ var_aa) | (arg3[0xf] ^ var_a9)
        | (arg3[0x10] ^ var_a8) | (arg3[0x11] ^ var_a7) | (arg3[0x12] ^ var_a6)
        | (arg3[0x13] ^ var_a5)
    char var_a4
    char var_a3
    char var_a2
    char var_a1
    char var_a0
    char var_9f
    char var_9e
    char var_9d
    char var_9c
    char var_9b
    char x8_107 = x8_77 | (arg3[0x14] ^ var_a4) | (arg3[0x15] ^ var_a3) | (arg3[0x16] ^ var_a2)
        | (arg3[0x17] ^ var_a1) | (arg3[0x18] ^ var_a0) | (arg3[0x19] ^ var_9f)
        | (arg3[0x1a] ^ var_9e) | (arg3[0x1b] ^ var_9d) | (arg3[0x1c] ^ var_9c)
        | (arg3[0x1d] ^ var_9b)
    char var_9a
    char var_99
    uint32_t x8_114 =
        zx.d(x8_107) | (zx.d(arg3[0x1e]) ^ zx.d(var_9a)) | (zx.d(arg3[0x1f]) ^ zx.d(var_99))
    x19_1 = sx.d((x8_114.b - 1) & (not.d(x8_114)).b) s< 0 ? 1 : 0
else
    x19_1 = 0

var_1b0 = _vtable_for_Botan::SHA_512 + 0x10
void* var_178

if (var_178 != 0)
    void* var_170_1 = var_178
    int64_t var_168
    Botan::deallocate_memory(var_178, (var_168 - var_178) s>> 3, 8)

var_1b0 = _vtable_for_Botan::MDx_HashFunction + 0x10
void* var_198

if (var_198 != 0)
    void* var_190_1 = var_198
    int64_t var_188
    Botan::deallocate_memory(var_198, var_188 - var_198, 1)

int128_t var_f0
memset(&var_f0:8, 0, 0x28)
int128_t var_110
memset(&var_110, 0, 0x28)
int128_t var_140
memset(&var_140:8, 0, 0x28)
memset(&var_160, 0, 0x28)

if (*(x25 + 0x28) == x8)
    return zx.q(x19_1)

__stack_chk_fail()
noreturn
