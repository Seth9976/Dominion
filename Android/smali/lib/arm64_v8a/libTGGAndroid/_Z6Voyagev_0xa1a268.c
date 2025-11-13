// 函数: _Z6Voyagev
// 地址: 0xa1a268
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)

if (GameVersion() s> 0x11)
    return GainTurn(6) __tailcall

int32_t x0_1 = PrevTurnPlayer()
int64_t result = CurrentWho()

if (x0_1 != result.d)
    return GainTurn(2) __tailcall

return result
