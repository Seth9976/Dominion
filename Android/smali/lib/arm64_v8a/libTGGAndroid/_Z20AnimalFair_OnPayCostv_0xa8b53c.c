// 函数: _Z20AnimalFair_OnPayCostv
// 地址: 0xa8b53c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 4)
int32_t x0 = CountMoney()
int32_t x19_1 = CountCoffers() + x0
CardCostParse(zx.q(Cost(ThisCard(false, nullptr))))
void var_ca8
void* x0_5 = &var_ca8
int32_t var_cc0
int32_t x0_6

if (x19_1 s>= var_cc0)
    x0_6 = MayTrashOneOf(x0_5, 0x3ea, 0x14, 7)
else
    x0_6 = TrashOneOf(x0_5, 0x3ea, 0x12, 7, 0)

return zx.q(x0_6 != 0 ? 1 : 0)
