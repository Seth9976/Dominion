// 函数: _Z5Exile11DomCardEnum
// 地址: 0xa89fec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = GetPileTop(arg1)

if (x0 != 0)
    bool var_14
    MoveCardToPlayer(zx.q(x0), 7, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_14, 0xb)
    
    if (zx.d(var_14) != 0)
        TriggerEvent(0x13, zx.q(x0), 0)

return zx.q(x0)
