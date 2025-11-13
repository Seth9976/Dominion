// 函数: _Z18ChooseSpendCoffersR7DomGameRK13DomActiveItem9PlayerWho15DomChoiceUIType
// 地址: 0xbe6f4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int64_t result = GetCoffers(arg1, zx.q(arg3))
int128_t var_60
__builtin_memset(&var_60, 0, 0x40)
var_60.d = arg4

if (result.d == 0)
    return result

uint64_t x3

if (*(arg1 + 0x19d4) == x19)
    x3 = zx.q(*(arg1 + 0x19d8))
else
    x3 = zx.q(x19)

int32_t var_70_1 = 0
int64_t var_28
return DomNotifyYieldNumber(arg1, &var_28, zx.q(x19), x3, 0, zx.q(result.d), &var_60, 0x2b)
