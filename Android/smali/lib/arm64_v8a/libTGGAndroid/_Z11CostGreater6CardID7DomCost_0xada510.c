// 函数: _Z11CostGreater6CardID7DomCost
// 地址: 0xada510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardCostParse(zx.q(CardCost(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(arg1), 0)))
CardCostParse(zx.q(arg2))
int32_t var_50
int32_t var_4c
int32_t var_48
int32_t var_38
int32_t var_34
int32_t var_30

if (var_30 s> var_48 && var_38 s>= var_50 && var_34 s>= var_4c)
    return 1

if (var_30 s>= var_48)
    if (var_38 s> var_50 && var_34 s>= var_4c)
        return 1
    
    if (var_38 s>= var_50 && var_34 s> var_4c)
        return 1

return 0
