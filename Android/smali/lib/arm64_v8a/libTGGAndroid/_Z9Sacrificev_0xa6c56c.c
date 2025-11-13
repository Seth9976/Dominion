// 函数: _Z9Sacrificev
// 地址: 0xa6c56c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TrashOne(7, 0)

if (result.d != 0)
    int32_t x19_1 = result.d
    
    if ((CardIs(result, 4) & 1) == 0)
        if ((CardIs(zx.q(x19_1), 2) & 1) != 0)
            goto label_a6c5fc
        
        goto label_a6c5a8
    
    Card(2, 0, 0, nullptr)
    Action(2, 0)
    
    if ((CardIs(zx.q(x19_1), 2) & 1) == 0)
    label_a6c5a8:
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            return VPChit(2, 0) __tailcall
    else
    label_a6c5fc:
        MoneyPlus(2, 0, false)
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            return VPChit(2, 0) __tailcall

return result
