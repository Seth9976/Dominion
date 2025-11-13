// 函数: _ZNK5Botan13Scrypt_Family15from_iterationsEm
// 地址: 0xe0ffdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
uint64_t x8

x8 = entry_x1 u> 0xc350 ? 0x4000 : 0x2000

uint64_t x8_1

x8_1 = entry_x1 u> 0x186a0 ? 0x8000 : x8

uint64_t x21

x21 = entry_x1 u> 0x249f0 ? 0x10000 : x8_1

uint64_t x0 = operator new(0x20)
int64_t result = Botan::Scrypt::Scrypt(x0, x21, 8)
int64_t* entry_x8
*entry_x8 = x0
return result
