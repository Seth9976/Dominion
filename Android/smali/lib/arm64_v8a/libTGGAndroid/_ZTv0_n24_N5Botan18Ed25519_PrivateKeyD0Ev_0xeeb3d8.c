// 函数: _ZTv0_n24_N5Botan18Ed25519_PrivateKeyD0Ev
// 地址: 0xeeb3d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
void* x0 = *(x19 + 0x20)
*x19 = _vtable_for_Botan::Ed25519_PrivateKey + 0x90
*(x19 + 0x38) = _vtable_for_Botan::Ed25519_PrivateKey + 0x1d8

if (x0 != 0)
    int64_t x8_3 = *(x19 + 0x30)
    *(x19 + 0x28) = x0
    Botan::deallocate_memory(x0, x8_3 - x0, 1)

void* x0_1 = *(x19 + 8)
*x19 = construction_vtable_for_Botan::Ed25519_PublicKey-in-Botan::Ed25519_PrivateKey + 0x88

if (x0_1 != 0)
    *(x19 + 0x10) = x0_1
    operator delete(x0_1)

return operator delete(x19) __tailcall
