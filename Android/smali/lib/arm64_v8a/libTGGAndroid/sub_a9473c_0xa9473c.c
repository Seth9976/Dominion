// 函数: sub_a9473c
// 地址: 0xa9473c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = GetPileTop(0x100)
int64_t result
bool var_ca8[0xc80]

if (x0 == 0)
    result = CardsWhereWhat(0x462, 0x100)
    int32_t var_28
    
    if (var_28 != 0)
        NotifyResult(1)
        return DiscardCards(&var_ca8, 0x462, 0xb, 7, 0)
else
    result =
        MoveCardToPlayer(zx.q(x0), 7, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_ca8, 0xb)
    
    if (zx.d(var_ca8[0]) != 0)
        return TriggerEvent(0x13, zx.q(x0), 0)
return result
