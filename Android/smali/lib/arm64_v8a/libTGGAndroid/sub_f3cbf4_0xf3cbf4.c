// 函数: sub_f3cbf4
// 地址: 0xf3cbf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x18)
Botan::BigInt* x0_1 = operator new(0x30)
Botan::BigInt* x0_3 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
Botan::BigInt* x0_5 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x18))
Botan::BigInt* x0_7 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x20))
void* var_58
__builtin_memset(&var_58, 0, 0x18)
int64_t var_78 = 0
int64_t var_40 = -1
int32_t var_38 = 1
int64_t var_68 = -1
int32_t var_60 = 1
Botan::RSA_PrivateKey::RSA_PrivateKey(x0_1, x0_3, x0_5, x0_7, &var_58)
x0[2] = x0_1
x0[1].d = 0x7f96385e
*x0 = _vtable_for_botan_privkey_struct + 0x10
**(arg1 + 8) = x0
void* x0_9 = var_58

if (x0_9 != 0)
    void* var_50_1 = x0_9
    int64_t var_48
    Botan::deallocate_memory(x0_9, (var_48 - x0_9) s>> 2, 4)

return 0
