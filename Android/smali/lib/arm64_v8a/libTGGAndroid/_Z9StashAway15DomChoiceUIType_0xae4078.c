// 函数: _Z9StashAway15DomChoiceUIType
// 地址: 0xae4078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_60
__builtin_memset(&var_60, 0, 0x38)
var_60.d = arg1
CardsWhereType(0x3ea, 0, 0)
int32_t var_ce8
int64_t result
CardID* x1
result, x1 = ChooseCard(&var_ce8, 0x19, &var_60, 0x12, 0)

if (result.d == 0)
    return result

int32_t x19_1 = result.d
int32_t x0_1 = ThisCard(false, x1)
void* x0_2 = DomGetContext()
int64_t var_cf0_1 = 0
int32_t var_cf8_1 = 0
int32_t var_d00_1 = 0
MoveCardToCard(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), zx.q(x19_1), 0x3ea, zx.q(x0_1), 0xb, 4, 
    *(x0_2 + 0x40))
var_ce8 = 1
int32_t var_ce4_1 = x19_1
int32_t var_64_1 = 1
return StartOfNextTurn(sub_ae5808, nullptr, &var_ce8, 1, 2)
