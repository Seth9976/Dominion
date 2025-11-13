// 函数: _Z6Heraldv
// 地址: 0xa79450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = TopDeckCard()

if (result.d == 0)
    return result

int32_t x19 = result.d
int32_t x20 = not.d(CardIs(result, 4))
RevealTemp(zx.q(x19), 0x3eb, zx.q(x20) & 1)

if ((x20 & 1) != 0)
    return NotifyResult(0) __tailcall

NotifyResult(1)
return PlayCard(zx.q(x19), 0x10) __tailcall
