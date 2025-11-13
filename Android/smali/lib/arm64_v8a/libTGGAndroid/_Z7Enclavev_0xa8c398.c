// 函数: _Z7Enclavev
// 地址: 0xa8c398
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GainCard(0x106, 0x476, 0, 0, 4)
int64_t result = GetPileTop(0x102)

if (result.d != 0)
    int32_t x19_1 = result.d
    bool var_14
    result =
        MoveCardToPlayer(zx.q(x19_1), 7, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_14, 0xb)
    
    if (zx.d(var_14) != 0)
        return TriggerEvent(0x13, zx.q(x19_1), 0)

return result
