// 函数: _ZN5Botan5Tiger5clearEv
// 地址: 0xe3fb8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != x0)
    memset(x0, 0, x8 - x0)

int64_t result = *(entry_x0 + 0x38)
int64_t x8_1 = *(entry_x0 + 0x40)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0

if (x8_1 != result)
    result = memset(result, 0, x8_1 - result)

**(entry_x0 + 0x50) = 0x123456789abcdef
*(*(entry_x0 + 0x50) + 8) = -0x123456789abcdf0
*(*(entry_x0 + 0x50) + 0x10) = -0xf695a4b3c4d1e79
return result
