// 函数: _ZThn8_N5Botan4CMAC5clearEv
// 地址: 0xd04c7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 8) + 0x10))()
int64_t x0_1 = *(arg1 + 0x28)
int64_t x8_2 = *(arg1 + 0x30)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)

int64_t x0_2 = *(arg1 + 0x10)
int64_t x8_3 = *(arg1 + 0x18)

if (x8_3 != x0_2)
    memset(x0_2, 0, x8_3 - x0_2)

int64_t x0_3 = *(arg1 + 0x40)
int64_t x8_4 = *(arg1 + 0x48)

if (x8_4 != x0_3)
    memset(x0_3, 0, x8_4 - x0_3)

int64_t result = *(arg1 + 0x58)
int64_t x8_5 = *(arg1 + 0x60)

if (x8_5 != result)
    result = memset(result, 0, x8_5 - result)

*(arg1 + 0x78) = 0
return result
