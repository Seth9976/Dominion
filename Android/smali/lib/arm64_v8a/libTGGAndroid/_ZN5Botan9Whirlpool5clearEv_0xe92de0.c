// 函数: _ZN5Botan9Whirlpool5clearEv
// 地址: 0xe92de0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != x0)
    memset(x0, 0, x8 - x0)

int64_t x0_1 = *(entry_x0 + 0x38)
int64_t x8_1 = *(entry_x0 + 0x40)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0

if (x8_1 != x0_1)
    memset(x0_1, 0, x8_1 - x0_1)

int64_t result = *(entry_x0 + 0x50)
int64_t x8_2 = *(entry_x0 + 0x58)

if (x8_2 == result)
    return result

return memset(result, 0, x8_2 - result) __tailcall
