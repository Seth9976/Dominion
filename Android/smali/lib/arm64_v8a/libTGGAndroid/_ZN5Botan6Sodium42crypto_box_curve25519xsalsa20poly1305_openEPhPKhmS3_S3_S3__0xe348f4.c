// 函数: _ZN5Botan6Sodium42crypto_box_curve25519xsalsa20poly1305_openEPhPKhmS3_S3_S3_
// 地址: 0xe348f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = Botan::allocate_memory(0x20, 1)
__builtin_memset(x0, 0, 0x20)
Botan::Sodium::crypto_box_curve25519xsalsa20poly1305_beforenm(x0, arg5, arg6)
int32_t x0_2 = Botan::Sodium::crypto_secretbox_xsalsa20poly1305_open(arg1, arg2, arg3, arg4, x0)
Botan::deallocate_memory(x0, 0x20, 1)
return zx.q(x0_2)
