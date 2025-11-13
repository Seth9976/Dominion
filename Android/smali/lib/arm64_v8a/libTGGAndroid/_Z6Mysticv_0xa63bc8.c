// 函数: _Z6Mysticv
// 地址: 0xa63bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
MoneyPlus(2, 0, false)
int32_t x0 = NameCardInDeckOne(0x1b)
int64_t result = TopDeckCard()

if (result.d != 0)
    int32_t x0_1 = CardIs(result, zx.q(x0))
    result = RevealDeckOneTemp(zx.q(not.d(x0_1)) & 1)
    
    if (result.d != 0)
        if ((x0_1 & 1) == 0)
            return NotifyResult(0) __tailcall
        
        NotifyResult(1)
        return MoveToHand(zx.q(result.d), 0x3eb) __tailcall

return result
