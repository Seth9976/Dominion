// 函数: _ZNK5Botan21Curve25519_PrivateKey5agreeEPKhm
// 地址: 0xd0bcdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x2
sub_d0a5c4(entry_x2)
uint8_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint8_t* x0_1 = Botan::allocate_memory(0x20, 1)
entry_x8[1] = &x0_1[0x20]
entry_x8[2] = &x0_1[0x20]
__builtin_memset(x0_1, 0, 0x20)
*entry_x8 = x0_1
return Botan::curve25519_donna(x0_1, *(arg1 + 0x20), arg2)
