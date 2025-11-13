// 函数: sub_f3d140
// 地址: 0xf3d140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x18)
int64_t* x0_1 = operator new(0x18)
Botan::BigInt* x0_3 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x18))
Botan::RSA_PublicKey::RSA_PublicKey(x0_1, x0_3)
x0[1].d = 0x2c286519
x0[2] = x0_1 + *(*x0_1 - 0x88)
*x0 = _vtable_for_botan_pubkey_struct + 0x10
**(arg1 + 8) = x0
return 0
