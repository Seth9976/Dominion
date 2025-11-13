// 函数: _Z16SwampShacks_Hintv
// 地址: 0xaa1a54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhere(ThisCard(false, nullptr))
int32_t x0_2 = CountWhere(0x3e9)
int32_t x9

if (x0_1 == 0x3ea)
    x9 = x0_2 + 1
else
    x9 = x0_2

uint32_t x20 = x9 s/ 3
int32_t x0_3 = CountWhere(0x3eb)
int32_t x8_2 = CountWhere(0x3ec) + x0_3

if (x8_2 s< x20)
    return zx.q(x8_2)

return zx.q(x20)
