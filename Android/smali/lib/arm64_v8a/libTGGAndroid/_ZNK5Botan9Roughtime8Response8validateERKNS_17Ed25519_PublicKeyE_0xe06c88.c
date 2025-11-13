// 函数: _ZNK5Botan9Roughtime8Response8validateERKNS_17Ed25519_PublicKeyE
// 地址: 0xe06c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x21 + 0x28)
int128_t var_50
__builtin_strcpy(&var_50, "RoughTime v1 delegation signature--")
int64_t* entry_x1
int64_t x8_1 = *(*entry_x1 - 0x88)
char var_88 = 8
int32_t var_87
__builtin_strncpy(&var_87, "Pure", 5)
int16_t var_a0 = 0
int64_t* var_70
Botan::PK_Verifier::PK_Verifier(&var_70, entry_x1 + x8_1, &var_88, nullptr)
void* var_78

if ((zx.d(var_88) & 1) != 0)
    operator delete(var_78)
int64_t* x20 = var_70
(**x20)(x20, &var_50, 0x24)
(**x20)(x20, arg1, 0x48)
int32_t x0_6 = Botan::PK_Verifier::check_signature(&var_70, arg1 + 0x48)
(*(*x20 + 0x18))(x20)

if (*(x21 + 0x28) == x9)
    return zx.q(x0_6) & 1

__stack_chk_fail()
noreturn
