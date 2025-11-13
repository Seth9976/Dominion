// 函数: _Z15HasModifiedCost11DomCardEnumP7DomCost
// 地址: 0xb0d9e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(gDomClient + 0x205d8)) == 0)
    return 0

int32_t x19_1 = arg1
int32_t x0_1 = CardCost(gDomClient + 0x20728, zx.q(*(gDomClient + 0x220fc)), zx.q(x19_1), 0)

if (arg2 != 0)
    *arg2 = x0_1

uint64_t x19_2 = zx.q(*(DomDefGet(zx.q(x19_1), zx.q(*(gDomClient + 0x21478))) + 0xc4))
CardCostParse(zx.q(x0_1))
CardCostParse(x19_2)
int32_t var_60
int32_t var_58
int32_t var_48
int32_t var_40
int32_t var_5c
int32_t var_44

if (var_48 == var_60 && var_40 == var_58)
    return zx.q(var_44 != var_5c ? 1 : 0)
return 1
