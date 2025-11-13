// 函数: _Z21Inspiring_OnPlay_Test6CardID
// 地址: 0xaa44d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardHasTrait(*(DomGetContext() + 8), zx.q(arg1), 0x114f) & 1) == 0)
    return 0

return zx.q(CurrentWho() == CurrentTurnWho() ? 1 : 0)
