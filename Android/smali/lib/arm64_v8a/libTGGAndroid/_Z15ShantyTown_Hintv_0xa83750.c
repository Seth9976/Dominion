// 函数: _Z15ShantyTown_Hintv
// 地址: 0xa83750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhere(0x3eb)
CardsWhere(0x3ec)
int32_t var_cb0
int32_t var_28

if (var_28 == 0 && var_cb0 == 0)
    return 0

int32_t x19_1 = CardWhere(ThisCard(false, nullptr)) == 0x3ea ? 1 : 0
return zx.q(CountWhereType(0x3ea, 4) s<= x19_1 ? 1 : 0)
