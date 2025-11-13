// 函数: _Z9FirstMatev
// 地址: 0xaa2488
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = MayPlayActionFromHand(1, 0x10f, 0, false)

if (x0.d != 0)
    int32_t x0_1 = CardWhat(x0)
    int32_t i
    
    do
        GetPlayableFromHand(4, 0)
        int32_t var_ca8
        FilterWhat(&var_ca8, zx.q(x0_1))
        int32_t var_28
        
        if (var_28 == 0)
            break
        
        if ((LimitPlayableCards(zx.q(var_ca8)) & 1) != 0)
            break
        
        i = MayPlayOneOf(&var_ca8, 0x10f, 0xb)
    while (i != 0)

return DrawUpTo(6)
