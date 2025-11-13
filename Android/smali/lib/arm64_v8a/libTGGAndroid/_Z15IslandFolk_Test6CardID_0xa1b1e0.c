// 函数: _Z15IslandFolk_Test6CardID
// 地址: 0xa1b1e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (GameVersion() s> 0x11)
    return 1

return zx.q(PrevTurnPlayer() != CurrentWho() ? 1 : 0)
