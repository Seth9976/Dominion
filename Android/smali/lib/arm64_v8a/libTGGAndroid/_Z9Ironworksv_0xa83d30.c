// 函数: _Z9Ironworksv
// 地址: 0xa83d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GainUpTo(4, 0x476, 0)

if (result.d != 0)
    int32_t x19_1 = result.d
    
    if ((CardIs(result, 4) & 1) == 0)
        if ((CardIs(zx.q(x19_1), 2) & 1) != 0)
            goto label_a83db8
        
        goto label_a83d70
    
    Action(1, 0)
    
    if ((CardIs(zx.q(x19_1), 2) & 1) == 0)
    label_a83d70:
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            return Card(1, 0, 0, nullptr) __tailcall
    else
    label_a83db8:
        MoneyPlus(1, 0, false)
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            return Card(1, 0, 0, nullptr) __tailcall

return result
