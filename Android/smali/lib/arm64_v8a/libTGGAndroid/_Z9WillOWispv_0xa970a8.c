// 函数: _Z9WillOWispv
// 地址: 0xa970a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = TopDeckCard()

if (result.d != 0)
    int32_t x19_1 = result.d
    int32_t x20_1 = not.d(CostUpto(result, 2))
    result = RevealDeckOneTemp(zx.q(x20_1) & 1)
    
    if ((x20_1 & 1) == 0)
        MoveToHand(zx.q(x19_1), 0x3eb)
        return NotifyResult(1) __tailcall

return result
