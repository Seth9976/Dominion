// 函数: _Z7Journeyv
// 地址: 0xaa3878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (GameVersion() s> 0x11)
    x19_1 = 4
else
    MarkUsed()
    int32_t x0_1 = PrevTurnPlayer()
    int64_t result = CurrentTurnWho()
    
    if (x0_1 == result.d)
        return result
    
    x19_1 = 0

AddOngoing(0x1f, 0, 1, false, 0, 0, 0, 0)
return GainTurn(zx.q(x19_1)) __tailcall
