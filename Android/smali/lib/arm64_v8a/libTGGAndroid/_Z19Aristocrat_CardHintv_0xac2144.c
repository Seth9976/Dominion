// 函数: _Z19Aristocrat_CardHintv
// 地址: 0xac2144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhere(ThisCard(false, nullptr))
int32_t x19 = 1

if ((x0_1 - 0x45c u> 0xe || (1 << (x0_1 - 0x45c) & 0x6001) == 0) && x0_1 != 0x3ea && x0_1 != 0x3ec)
    x19 = x0_1 == 0x46b ? 1 : 0

if (((CountWhereWhat(0x3e9, 0x1205, 0xffffffff) + x19) | 4) != 6)
    return 0

return 3
