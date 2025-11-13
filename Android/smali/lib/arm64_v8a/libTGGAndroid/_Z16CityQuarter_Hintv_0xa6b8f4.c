// 函数: _Z16CityQuarter_Hintv
// 地址: 0xa6b8f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhere(ThisCard(false, nullptr))
int32_t x19 = -1

if ((x0_1 - 0x45c u> 0xe || (1 << (x0_1 - 0x45c) & 0x6001) == 0) && x0_1 != 0x3ea && x0_1 != 0x3ec)
    x19 = x0_1 == 0x46b ? -1 : 0

int32_t x20 = CountWhereType(0x3ea, 4) + x19
int32_t x0_3 = CountWhere(0x3eb)
int32_t x8_2 = CountWhere(0x3ec) + x0_3

if (x8_2 s< x20)
    return zx.q(x8_2)

return zx.q(x20)
