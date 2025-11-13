// 函数: _Z9Stockpilev
// 地址: 0xa8aab4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyTreasure(3, 0)
Buy(1, 0)
int32_t x0 = ThisCard(false, nullptr)
bool var_14
int64_t result =
    MoveCardToPlayer(zx.q(x0), 0x3e9, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_14, 0xb)

if (zx.d(var_14) == 0)
    return result

return TriggerEvent(0x13, zx.q(x0), 0)
