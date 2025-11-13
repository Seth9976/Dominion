// 函数: _Z14CalcCols_2Plus12LayoutCounts
// 地址: 0xba3580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
int32_t x8_1 = (arg1 u>> 0x20).d * 3 + entry_x1
int32_t x8_2

if (arg1.d == 0xb)
    x8_2 = x8_1 + 4
else
    x8_2 = x8_1

int32_t x9

x9 = arg1.d == 0xb ? 6 : 5

if (x9 s< (x8_2 - 5) s/ 0xb + 5)
    return zx.q(x9)

return zx.q((x8_2 - 5) s/ 0xb + 5)
