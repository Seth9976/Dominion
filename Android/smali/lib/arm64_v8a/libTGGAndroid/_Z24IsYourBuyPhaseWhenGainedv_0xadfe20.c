// 函数: _Z24IsYourBuyPhaseWhenGainedv
// 地址: 0xadfe20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(*(DomGetContext() + 8) + 0x19d4) != *(DomGetContext() + 0x18))
    return 0

return zx.q((*(*(DomGetContext() + 0x80) + 8) & 0xfffffffe) == 2 ? 1 : 0)
