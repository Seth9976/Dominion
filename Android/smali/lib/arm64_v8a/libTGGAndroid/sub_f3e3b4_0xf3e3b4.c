// 函数: sub_f3e3b4
// 地址: 0xf3e3b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::DL_Group* x0_1 = Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(*(arg1 + 8))
*(arg1 + 0x20)
void var_40
Botan::DL_Group::DL_Group(&var_40, x0_1, zx.q(*(arg1 + 0x10)), *(arg1 + 0x18))
void** x0_3 = operator new(0x18)
Botan::RandomNumberGenerator* x0_4 = operator new(0x78)
int64_t var_60 = 0
int64_t var_50 = -1
int32_t var_48 = 1
Botan::ElGamal_PrivateKey::ElGamal_PrivateKey(x0_4, x0_1, &var_40)
x0_3[2] = x0_4 + 0x48
x0_3[1].d = 0x7f96385e
*x0_3 = _vtable_for_botan_privkey_struct + 0x10
**(arg1 + 0x28) = x0_3
int64_t* var_38

if (var_38 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_38[1])
        i = __stlxr(x9_1 - 1, &var_38[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_38 + 0x10))(var_38)
        std::__ndk1::__shared_weak_count::__release_weak()

return 0
