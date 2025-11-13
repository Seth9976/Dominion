// 函数: _ZN5Botan7SHA_2565clearEv
// 地址: 0xe1e4c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != result)
    result = memset(result, 0, x8 - result)

int32_t* x8_1 = *(entry_x0 + 0x38)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*x8_1 = 0x6a09e667
*(*(entry_x0 + 0x38) + 4) = 0xbb67ae85
*(*(entry_x0 + 0x38) + 8) = 0x3c6ef372
*(*(entry_x0 + 0x38) + 0xc) = 0xa54ff53a
*(*(entry_x0 + 0x38) + 0x10) = 0x510e527f
*(*(entry_x0 + 0x38) + 0x14) = 0x9b05688c
*(*(entry_x0 + 0x38) + 0x18) = 0x1f83d9ab
*(*(entry_x0 + 0x38) + 0x1c) = 0x5be0cd19
return result
