// 函数: _Z16CalcDayOfTheWeeki5Monthi
// 地址: 0x1066994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1

if (arg2 s< 3)
    x8_1 = arg1
else
    x8_1 = arg1 - 2

int32_t x12_1 = arg1 - (arg2 s< 3 ? 1 : 0)
int64_t x11 = muls.dp.d(x12_1, 0xae147ae1)
int32_t x10_1

if (x12_1 s< 0)
    x10_1 = x12_1 + 3
else
    x10_1 = x12_1

return zx.q((arg3 + x8_1 + arg2 * 0x17 s/ 9 + (x10_1 s>> 2) + (x11 u>> 0x3f).d
    + ((x11 u>> 0x20).d s>> 5) + x12_1 s/ 0x190 + 4) s% 7)
