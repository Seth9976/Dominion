// 函数: sub_f3e5d8
// 地址: 0xf3e5d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 8))
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
int64_t var_40
Botan::DL_Group::DL_Group(&var_40, x0_1)
int64_t* x0_5 = operator new(0x18)
int64_t (** x0_6)() = operator new(0x48)
void* x0_8 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x20))
*x0_6 = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::ElGamal_PublicKey + 0x190
x0_6[1] = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::ElGamal_PublicKey + 0x90
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x0_6[2])
x0_6[5] = *(x0_8 + 0x18)
x0_6[6].d = *(x0_8 + 0x20)
x0_6[7] = var_40
int64_t* var_38
x0_6[8] = var_38

if (var_38 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&var_38[1]) + 1, &var_38[1])
    while (i != 0)

x0_5[2] = x0_6
x0_5[1].d = 0x2c286519
*x0_6 = _vtable_for_Botan::ElGamal_PublicKey + 0x90
x0_6[1] = _vtable_for_Botan::ElGamal_PublicKey + 0x1a0
*x0_5 = _vtable_for_botan_pubkey_struct + 0x10
**(arg1 + 0x18) = x0_5

if (var_38 != 0)
    int64_t x9_5
    int32_t i_1
    
    do
        x9_5 = __ldaxr(&var_38[1])
        i_1 = __stlxr(x9_5 - 1, &var_38[1])
    while (i_1 != 0)
    
    if (x9_5 == 0)
        (*(*var_38 + 0x10))(var_38)
        std::__ndk1::__shared_weak_count::__release_weak()

return 0
