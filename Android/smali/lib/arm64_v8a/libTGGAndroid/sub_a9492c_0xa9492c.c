// 函数: sub_a9492c
// 地址: 0xa9492c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(arg1 + 8)
bool var_14
int64_t result = MoveCardToPlayer(zx.q(x19), zx.q(CardGainedToWhere(zx.q(x19))), 
    zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_14, 0xc)

if (zx.d(var_14) == 0)
    return result

return TriggerEvent(0x13, zx.q(x19), 0)
