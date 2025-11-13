// 函数: _ZN5Botan17ElGamal_PublicKeyC1ERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd5d20c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::ElGamal_PublicKey + 0x190
*(arg1 + 8) = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::ElGamal_PublicKey + 0x90
int64_t result =
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x10)
void* entry_x2
*(arg1 + 0x28) = *(entry_x2 + 0x18)
*(arg1 + 0x30) = *(entry_x2 + 0x20)
*(arg1 + 0x38) = *arg2
int64_t x8_4 = *(arg2 + 8)
*(arg1 + 0x40) = x8_4

if (x8_4 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_4 + 8) + 1, x8_4 + 8)
    while (i != 0)

*arg1 = _vtable_for_Botan::ElGamal_PublicKey + 0x90
*(arg1 + 8) = _vtable_for_Botan::ElGamal_PublicKey + 0x1a0
return result
