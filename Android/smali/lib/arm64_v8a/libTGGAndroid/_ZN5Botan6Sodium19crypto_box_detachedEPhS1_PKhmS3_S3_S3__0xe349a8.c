// 函数: _ZN5Botan6Sodium19crypto_box_detachedEPhS1_PKhmS3_S3_S3_
// 地址: 0xe349a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = Botan::allocate_memory(0x20, 1)
__builtin_memset(x0, 0, 0x20)
Botan::Sodium::crypto_box_curve25519xsalsa20poly1305_beforenm(x0, arg6, arg7)
Botan::Sodium::crypto_secretbox_detached(arg1, arg2, arg3, arg4, arg5, x0)
Botan::deallocate_memory(x0, 0x20, 1)
return 0
