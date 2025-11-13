// 函数: _ZNK5Botan7Blinder14blinding_nonceEv
// 地址: 0xdf1d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t x1 = *(entry_x0 + 0x58)
char x8 = (*(entry_x0 + 0xc0)).b
Botan::RandomNumberGenerator* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
*(entry_x8 + 0x18) = -1
*(entry_x8 + 0x20) = 1
return Botan::BigInt::randomize(entry_x8, x1, x8 - 1)
