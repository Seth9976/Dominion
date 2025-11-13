// 函数: _Z8SeaChartv
// 地址: 0xacc6c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = TopDeckCard()

if (result.d == 0)
    return result

int32_t x0_1 = CountWhereWhat(0x3e9, zx.q(CardWhat(result)), 0xffffffff)
RevealDeckOneTemp(zx.q(x0_1 s< 1 ? 1 : 0))

if (x0_1 s< 1)
    return NotifyResult(0) __tailcall

MoveToHand(zx.q(result.d), 0x3eb)
return NotifyResult(1) __tailcall
