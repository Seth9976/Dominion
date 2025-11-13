// 函数: _ZN5Botan21Curve25519_PrivateKeyD0Ev
// 地址: 0xeea2d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Curve25519_PrivateKey + 0x98
entry_x0[7] = _vtable_for_Botan::Curve25519_PrivateKey + 0x1f8

if (x0 != 0)
    int64_t x8_1 = entry_x0[6]
    entry_x0[5] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[1]
*entry_x0 =
    construction_vtable_for_Botan::Curve25519_PublicKey-in-Botan::Curve25519_PrivateKey + 0x88

if (x0_1 != 0)
    entry_x0[2] = x0_1
    operator delete(x0_1)

return operator delete(entry_x0) __tailcall
