// 函数: _Z10Ironmongerv
// 地址: 0xa62798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = RevealDeckOne(0x3ee, 0x7e2790)

if (result.d != 0)
    int32_t x19_1 = result.d
    
    if ((MayDiscard(result, 0x3ee) & 1) != 0)
        if ((CardIs(zx.q(x19_1), 4) & 1) != 0)
            goto label_a62850
        
        goto label_a627f8
    
    MoveToTopDeck(zx.q(x19_1), 0x3ee, 0xb)
    
    if ((CardIs(zx.q(x19_1), 4) & 1) != 0)
    label_a62850:
        Action(1, 0)
        
        if ((CardIs(zx.q(x19_1), 2) & 1) == 0)
            goto label_a62808
        
        goto label_a62870
    
label_a627f8:
    
    if ((CardIs(zx.q(x19_1), 2) & 1) != 0)
    label_a62870:
        MoneyPlus(1, 0, false)
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            return Card(1, 0, 0, nullptr) __tailcall
    else
    label_a62808:
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            return Card(1, 0, 0, nullptr) __tailcall

return result
