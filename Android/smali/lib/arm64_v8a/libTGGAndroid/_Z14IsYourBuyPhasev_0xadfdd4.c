// 函数: _Z14IsYourBuyPhasev
// 地址: 0xadfdd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(*(DomGetContext() + 8) + 0x19d4) != *(DomGetContext() + 0x18))
    return 0

return zx.q((CurrentPhase(*(DomGetContext() + 8)) & 0xfffffffe) == 2 ? 1 : 0)
