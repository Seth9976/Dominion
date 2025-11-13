// 函数: _Z11Voyage_Hintv
// 地址: 0xa1a228
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (GameVersion() s> 0x11)
    return zx.q(ExtraTurnHint()) & 1

return zx.q(PrevTurnPlayer() == CurrentWho() ? 1 : 0) & 1
