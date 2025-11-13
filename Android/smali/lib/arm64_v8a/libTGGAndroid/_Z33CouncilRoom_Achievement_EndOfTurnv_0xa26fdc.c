// 函数: _Z33CouncilRoom_Achievement_EndOfTurnv
// 地址: 0xa26fdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomAchievementDataGet()

if (CountPlayedThisTurn(0x211) s< 2)
    *x0 = 0xffffffff
    return 0

*x0 = ThisTurnID()
return 0
