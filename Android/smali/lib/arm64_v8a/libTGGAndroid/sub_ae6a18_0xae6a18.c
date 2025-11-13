// 函数: sub_ae6a18
// 地址: 0xae6a18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(*(DomGetContext() + 8), zx.q(x19), **(arg1 + 8)) & 1) == 0)
    return 0

uint64_t x20_1 = zx.q(**(arg1 + 0x10))
void* x0_3 = DomGetContext()
CardCostParse(zx.q(CardCost(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), zx.q(x19), 0)))
CardCostParse(x20_1)
int32_t var_48
int32_t var_30

if (var_30 != var_48)
    return 0

int64_t var_50
int64_t var_38
return zx.q(var_38 == var_50 ? 1 : 0)
