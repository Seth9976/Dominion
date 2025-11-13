// 函数: _Z5Groomv
// 地址: 0xa8ac64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GainUpTo(4, 0x476, 0)

if (result.d != 0)
    int32_t x19_1 = result.d
    
    if ((CardIs(result, 4) & 1) == 0)
        if ((CardIs(zx.q(x19_1), 2) & 1) != 0)
            goto label_a8ad0c
        
        goto label_a8aca4
    
    GainCard(0xf46, 0x476, 0, 0, 4)
    
    if ((CardIs(zx.q(x19_1), 2) & 1) == 0)
    label_a8aca4:
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            Card(1, 0, 0, nullptr)
            return Action(1, 0) __tailcall
    else
    label_a8ad0c:
        GainCard(0x105, 0x476, 0, 0, 4)
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            Card(1, 0, 0, nullptr)
            return Action(1, 0) __tailcall

return result
