// 函数: _ZN5Botan14SM2_PrivateKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xdf4758
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0xf8) = 0
*(arg1 + 0x68) = zx.o(0)
*(arg1 + 0x98) = zx.o(0)
*(arg1 + 0xa8) = zx.o(0)
*(arg1 + 0xb8) = zx.o(0)
*(arg1 + 0xc8) = zx.o(0)
*(arg1 + 0xd8) = zx.o(0)
*(arg1 + 0xe8) = zx.o(0)
*(arg1 + 0x88) = zx.o(0)
*(arg1 + 0x78) = zx.o(0)
*(arg1 + 0xa0) = -1
*(arg1 + 0xa8) = 1
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = -1
*(arg1 + 0xd0) = 1
*(arg1 + 0xd8) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe8) = 0
*(arg1 + 0xf0) = -1
*(arg1 + 0xf8) = 1
*(arg1 + 0x104) = 0
*(arg1 + 0x100) = 0
*(arg1 + 8) = construction_vtable_for_Botan::Private_Key-in-Botan::SM2_PrivateKey + 0xc0
*(arg1 + 0x60) = construction_vtable_for_Botan::SM2_PublicKey-in-Botan::SM2_PrivateKey + 0x190
*arg1 = construction_vtable_for_Botan::SM2_PublicKey-in-Botan::SM2_PrivateKey + 0x90
Botan::EC_PrivateKey::EC_PrivateKey(arg1 + 8, _VTT_for_Botan::SM2_PrivateKey + 0x20, arg2.b)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x60) = _vtable_for_Botan::SM2_PrivateKey + 0x328
*arg1 = _vtable_for_Botan::SM2_PrivateKey + 0x98
*(arg1 + 8) = _vtable_for_Botan::SM2_PrivateKey + 0x1f0
*(arg1 + 0x38) = 0
*(arg1 + 0x50) = -1
*(arg1 + 0x58) = 1
uint32_t var_34 = 1
Botan::BigInt::add2(arg1 + 0x10, &var_34, 1, 1)
void* result_1
int128_t v0
int128_t v1
v0, v1 = Botan::inverse_mod(&result_1, Botan::EC_Group::data() + 0xe8)
uint64_t var_60
uint64_t var_58_1
int64_t var_50
uint64_t x0_5

if (arg1 + 0x38 == &var_60)
    x0_5 = var_60
    
    if (x0_5 != 0)
        var_58_1 = x0_5
        Botan::deallocate_memory(x0_5, (var_50 - x0_5) s>> 2, 4)
else
    v1 = *(arg1 + 0x38)
    *(arg1 + 0x38) = var_60.o
    var_60.o = v1
    int64_t x11_1 = *(arg1 + 0x48)
    int64_t x9_3 = *(arg1 + 0x50)
    x0_5 = v1.q
    *(arg1 + 0x48) = var_50
    int64_t var_48
    *(arg1 + 0x50) = var_48
    int64_t var_48_1 = x9_3
    int32_t x9_4 = *(arg1 + 0x58)
    int32_t var_40
    *(arg1 + 0x58) = var_40
    int32_t var_40_1 = x9_4
    
    if (x0_5 != 0)
        var_58_1 = x0_5
        Botan::deallocate_memory(x0_5, (x11_1 - x0_5) s>> 2, 4)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_78
return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)
