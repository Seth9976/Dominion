// 函数: sub_f3da28
// 地址: 0xf3da28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 8))
Botan::BigInt* x0_3 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x18))
void var_30
Botan::DL_Group::DL_Group(&var_30, x0_1, x0_3)
void** x0_7 = operator new(0x18)
Botan::DL_Group* x0_8 = operator new(0x48)
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x28))
Botan::DSA_PublicKey::DSA_PublicKey(x0_8, &var_30)
x0_7[1].d = 0x2c286519
x0_7[2] = x0_8 + *(*x0_8 - 0x90)
*x0_7 = _vtable_for_botan_pubkey_struct + 0x10
**(arg1 + 0x20) = x0_7
int64_t* var_28

if (var_28 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_28[1])
        i = __stlxr(x9_1 - 1, &var_28[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_28 + 0x10))(var_28)
        std::__ndk1::__shared_weak_count::__release_weak()

return 0
