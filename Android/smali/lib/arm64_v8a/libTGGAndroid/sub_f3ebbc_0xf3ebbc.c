// 函数: sub_f3ebbc
// 地址: 0xf3ebbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 8))
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
void var_30
Botan::DL_Group::DL_Group(&var_30, x0_1)
void** x0_5 = operator new(0x18)
Botan::DL_Group* x0_6 = operator new(0x48)
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x20))
Botan::DH_PublicKey::DH_PublicKey(x0_6, &var_30)
x0_5[1].d = 0x2c286519
x0_5[2] = x0_6 + *(*x0_6 - 0x90)
*x0_5 = _vtable_for_botan_pubkey_struct + 0x10
**(arg1 + 0x18) = x0_5
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
