// 函数: _Z6Magpiev
// 地址: 0xa0b1dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = 1
Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t x0 = TopDeckCard()

if (x0.d != 0)
    x19 = not.d(CardIs(x0, 2)) & 1

int64_t result = RevealDeckOneTemp(zx.q(x19))

if (result.d != 0)
    int32_t x19_1 = result.d
    
    if ((CardIs(result, 2) & 1) != 0)
        MoveToHand(zx.q(x19_1), 0x3eb)
    
    int32_t x0_6 = CardIs(zx.q(x19_1), 4)
    
    if ((x0_6 & 1) == 0)
        result = CardIs(zx.q(x19_1), 8)
    
    if ((x0_6 & 1) != 0 || (result.d & 1) != 0)
        if (CountWhere(BoardPileWhere(*(DomGetContext() + 8), 0xb0b)) != 0)
            NotifyResult(1)
        
        return GainCard(0xb0b, 0x476, 0, 0, 4) __tailcall

return result
