// 函数: sub_ae6044
// 地址: 0xae6044
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2
uint64_t x20 = zx.q(**(arg1 + 8))
void* x0 = DomGetContext()
CardCostParse(zx.q(CardCost(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x19), 0)))
CardCostParse(x20)
int32_t var_48
int32_t var_30

if (var_30 != var_48)
    return 0

int64_t var_50
int64_t var_38
return zx.q(var_38 == var_50 ? 1 : 0)
