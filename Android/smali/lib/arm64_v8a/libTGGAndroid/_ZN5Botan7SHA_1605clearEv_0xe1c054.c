// 函数: _ZN5Botan7SHA_1605clearEv
// 地址: 0xe1c054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != x0)
    memset(x0, 0, x8 - x0)

int64_t result = *(entry_x0 + 0x50)
int64_t x8_1 = *(entry_x0 + 0x58)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0

if (x8_1 != result)
    result = memset(result, 0, x8_1 - result)

**(entry_x0 + 0x38) = 0x67452301
*(*(entry_x0 + 0x38) + 4) = 0xefcdab89
*(*(entry_x0 + 0x38) + 8) = 0x98badcfe
*(*(entry_x0 + 0x38) + 0xc) = 0x10325476
*(*(entry_x0 + 0x38) + 0x10) = 0xc3d2e1f0
return result
