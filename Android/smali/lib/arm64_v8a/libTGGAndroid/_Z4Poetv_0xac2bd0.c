// 函数: _Z4Poetv
// 地址: 0xac2bd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Sun(1)
Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = TopDeckCard()

if (result.d != 0)
    int32_t x19_1 = result.d
    int32_t x20_1 = not.d(CostUpto(result, 3))
    result = RevealDeckOneTemp(zx.q(x20_1) & 1)
    
    if ((x20_1 & 1) == 0)
        NotifyResult(1)
        return MoveToHand(zx.q(x19_1), 0x3eb) __tailcall

return result
