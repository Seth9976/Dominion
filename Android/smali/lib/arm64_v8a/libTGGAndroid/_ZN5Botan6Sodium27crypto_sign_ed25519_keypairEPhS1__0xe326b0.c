// 函数: _ZN5Botan6Sodium27crypto_sign_ed25519_keypairEPhS1_
// 地址: 0xe326b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = Botan::allocate_memory(0x20, 1)
__builtin_memset(x0, 0, 0x20)
Botan::system_rng()
(*(data_23ecbc0 + 0x10))(&data_23ecbc0, x0, 0x20)
Botan::ed25519_gen_keypair(arg1, arg2, x0)
Botan::deallocate_memory(x0, 0x20, 1)
return 0
