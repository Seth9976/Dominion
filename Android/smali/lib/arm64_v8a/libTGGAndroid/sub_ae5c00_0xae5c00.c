// 函数: sub_ae5c00
// 地址: 0xae5c00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2
int32_t x21 = *(arg1 + 8)
int32_t x20 = *(arg1 + 0xc)
void* x0 = DomGetContext()
CardCostParse(zx.q(CardCost(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x19), 0)))
int32_t var_30

if (var_30 != 0)
    return 0

int32_t var_34
int32_t var_38

if (var_34 == 0)
    return zx.q(var_38 s>= x21 ? 1 : 0) & zx.q(var_38 s<= x20 ? 1 : 0)
return 0
