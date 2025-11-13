// 函数: _ZN5Botan4CMAC5clearEv
// 地址: 0xd04c00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 0x10) + 0x10))()
int64_t x0_1 = *(entry_x0 + 0x30)
int64_t x8_2 = *(entry_x0 + 0x38)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)

int64_t x0_2 = *(entry_x0 + 0x18)
int64_t x8_3 = *(entry_x0 + 0x20)

if (x8_3 != x0_2)
    memset(x0_2, 0, x8_3 - x0_2)

int64_t x0_3 = *(entry_x0 + 0x48)
int64_t x8_4 = *(entry_x0 + 0x50)

if (x8_4 != x0_3)
    memset(x0_3, 0, x8_4 - x0_3)

int64_t result = *(entry_x0 + 0x60)
int64_t x8_5 = *(entry_x0 + 0x68)

if (x8_5 != result)
    result = memset(result, 0, x8_5 - result)

*(entry_x0 + 0x80) = 0
return result
