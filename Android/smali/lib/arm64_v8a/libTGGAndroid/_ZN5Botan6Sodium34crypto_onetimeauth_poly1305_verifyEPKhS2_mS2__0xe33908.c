// 函数: _ZN5Botan6Sodium34crypto_onetimeauth_poly1305_verifyEPKhS2_mS2_
// 地址: 0xe33908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = Botan::allocate_memory(0x10, 1)
*x0 = 0
*(x0 + 8) = 0
Botan::Sodium::crypto_onetimeauth_poly1305(x0, arg2, arg3, arg4)
int32_t x0_2 = Botan::Sodium::crypto_verify_16(x0, arg1)
Botan::deallocate_memory(x0, 0x10, 1)

if (x0_2 == 0)
    return 0xffffffff

return 0
