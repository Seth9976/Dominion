// 函数: _ZN5Botan15ECDH_PrivateKeyC1ERKS0_
// 地址: 0xeff770
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x40) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x88
*arg1 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x180
void* entry_x1
*(arg1 + 0x48) = *(entry_x1 + 0x48)
int64_t x8_2 = *(entry_x1 + 0x50)
*(arg1 + 0x50) = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

Botan::PointGFp::PointGFp(arg1 + 0x58)
*(arg1 + 0xe0) = *(entry_x1 + 0xe0)
*(arg1 + 0x40) = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x208
*arg1 = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x300
*(arg1 + 8) = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0xd0
int64_t result =
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x10)
*(arg1 + 0x28) = *(entry_x1 + 0x28)
int32_t x8_6 = *(entry_x1 + 0x30)
*arg1 = _vtable_for_Botan::ECDH_PrivateKey + 0x98
*(arg1 + 8) = _vtable_for_Botan::ECDH_PrivateKey + 0x1f0
*(arg1 + 0x30) = x8_6
*(arg1 + 0x38) = _vtable_for_Botan::ECDH_PrivateKey + 0x368
*(arg1 + 0x40) = _vtable_for_Botan::ECDH_PrivateKey + 0x4a8
return result
