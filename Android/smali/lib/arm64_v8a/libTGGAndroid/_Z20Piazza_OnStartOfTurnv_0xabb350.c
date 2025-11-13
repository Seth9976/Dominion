// 函数: _Z20Piazza_OnStartOfTurnv
// 地址: 0xabb350
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TopDeckCard()

if (result.d == 0)
    return result

int32_t x20 = not.d(CardIs(result, 4))
RevealDeckOneTemp(zx.q(x20) & 1)

if ((x20 & 1) != 0)
    return NotifyResult(0) __tailcall

NotifyResult(1)
return PlayCard(zx.q(result.d), 0x10) __tailcall
