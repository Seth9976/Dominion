// 函数: _Z11TreasureMapv
// 地址: 0xacc1c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisCard(false, nullptr)
CardsWhereWhat(0x3ea, 0x411)
int32_t var_ca8
operator-=(&var_ca8, zx.q(x0))
int32_t var_cb0 = 0
CardIDs var_1930
operator+=(&var_1930, zx.q(x0))
int32_t var_18 = 0x3e9
int32_t var_28

if (var_28 != 0)
    operator+=(&var_1930, zx.q(var_ca8))
    int32_t var_14_1 = CardWhere(zx.q(var_ca8))

int64_t result = Trash(&var_1930, &var_18)

if (result.d != 2)
    return result

NotifyResult(1)
GainCard(0x106, 0x3eb, 0, 0, 4)
GainCard(0x106, 0x3eb, 0, 0, 4)
GainCard(0x106, 0x3eb, 0, 0, 4)
return GainCard(0x106, 0x3eb, 0, 0, 4)
