// 函数: _Z25IsBadLostInTheWoodsChoiceR7DomGame9PlayerWho6CardID
// 地址: 0xb4bb10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhat(gDomClient + 0x20728, zx.q(arg3))

if (x0_1 != 0x100)
    if (x0_1 == 0x101)
        return PlayerHasInheritance(arg1, zx.q(arg2)) __tailcall
    
    int64_t i = 1
    
    while (i != 0xe)
        int32_t x10_2 = *(&data_7ef48c + (i << 2))
        i += 1
        
        if (x10_2 == x0_1)
            if (i - 2 u< 0xd)
                return 0
            
            break
    
    if (x0_1 != 0x104 && x0_1 != 0x807 && x0_1 != 0xd07)
        return 1

return 0
