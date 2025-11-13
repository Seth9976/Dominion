// 函数: _Z7Missionv
// 地址: 0xa0c980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (GameVersion() s> 0x11)
    return GainTurn(5) __tailcall

MarkUsed()
int32_t x0_1 = PrevTurnPlayer()
int64_t result = CurrentWho()

if (x0_1 != result.d)
    return GainTurn(1) __tailcall

return result
