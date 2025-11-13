// 函数: _ZTv0_n24_N5Botan21Curve25519_PrivateKeyD1Ev
// 地址: 0xeea33c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
void* x0 = *(x19 + 0x20)
*x19 = _vtable_for_Botan::Curve25519_PrivateKey + 0x98
*(x19 + 0x38) = _vtable_for_Botan::Curve25519_PrivateKey + 0x1f8

if (x0 != 0)
    int64_t x8_3 = *(x19 + 0x30)
    *(x19 + 0x28) = x0
    Botan::deallocate_memory(x0, x8_3 - x0, 1)

void* result = *(x19 + 8)
*x19 = construction_vtable_for_Botan::Curve25519_PublicKey-in-Botan::Curve25519_PrivateKey + 0x88

if (result == 0)
    return result

*(x19 + 0x10) = result
return operator delete(result) __tailcall
