// 函数: _Z7Vagrantv
// 地址: 0xa61fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = TopDeckCard()

if (result.d != 0)
    int32_t x19_1 = result.d
    
    if ((CardIs(result, 0x10) & 1) != 0)
    label_a62030:
        RevealDeckOneTemp(0)
        MoveCardTo(zx.q(x19_1), 0x3eb, 0x3ea, 3, 0, 0xb, 0)
        return NotifyResult(1) __tailcall
    
    if ((CardIs(zx.q(x19_1), 0x8000) & 1) != 0)
        goto label_a62030
    
    if ((CardIs(zx.q(x19_1), 8) & 1) != 0)
        goto label_a62030
    
    int32_t x20_1 = not.d(CardIs(zx.q(x19_1), 0x4000))
    result = RevealDeckOneTemp(zx.q(x20_1) & 1)
    
    if ((x20_1 & 1) == 0)
        MoveCardTo(zx.q(x19_1), 0x3eb, 0x3ea, 3, 0, 0xb, 0)
        return NotifyResult(1) __tailcall

return result
