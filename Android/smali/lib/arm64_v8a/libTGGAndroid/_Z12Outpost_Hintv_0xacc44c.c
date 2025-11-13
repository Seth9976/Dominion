// 函数: _Z12Outpost_Hintv
// 地址: 0xacc44c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (GameVersion() s<= 0x11)
    if (PrevTurnPlayer() == CurrentWho())
        return 1
    
    if ((HasPlayed(0x416) & 1) != 0)
        return 1

return zx.q(ExtraTurnHint()) & 1
