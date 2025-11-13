// 函数: _Z30Festival_Achievement_EndOfTurnv
// 地址: 0xa26fa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CountPlayedThisTurn(0x212) s< 3)
    return 0

return zx.q(NumActions() s> 3 ? 1 : 0)
