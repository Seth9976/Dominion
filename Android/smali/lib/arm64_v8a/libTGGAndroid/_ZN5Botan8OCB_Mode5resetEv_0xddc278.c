// 函数: _ZN5Botan8OCB_Mode5resetEv
// 地址: 0xddc278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x38)
int64_t x8 = *(entry_x0 + 0x40)
*(entry_x0 + 0x18) = 0

if (x8 != x0)
    memset(x0, 0, x8 - x0)

int64_t result = *(entry_x0 + 0x20)
int64_t x8_1 = *(entry_x0 + 0x28)

if (x8_1 != result)
    result = memset(result, 0, x8_1 - result)

int64_t x9 = *(entry_x0 + 0x80)
*(entry_x0 + 0x70) = *(entry_x0 + 0x68)
*(entry_x0 + 0x88) = x9
return result
