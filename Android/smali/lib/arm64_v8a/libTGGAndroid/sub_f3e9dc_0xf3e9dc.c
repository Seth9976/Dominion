// 函数: sub_f3e9dc
// 地址: 0xf3e9dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::Null_RNG, 0x10) var_28 = _vtable_for_Botan::Null_RNG + 0x10
Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 8))
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
void var_38
Botan::DL_Group::DL_Group(&var_38, x0_1)
void** x0_5 = operator new(0x18)
Botan::RandomNumberGenerator* x0_6 = operator new(0x80)
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x20))
Botan::DH_PrivateKey::DH_PrivateKey(x0_6, &var_28, &var_38)
x0_5[2] = x0_6 + 8
x0_5[1].d = 0x7f96385e
*x0_5 = _vtable_for_botan_privkey_struct + 0x10
**(arg1 + 0x18) = x0_5
int64_t* var_30

if (var_30 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_30[1])
        i = __stlxr(x9_1 - 1, &var_30[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_30 + 0x10))(var_30)
        std::__ndk1::__shared_weak_count::__release_weak()

return 0
