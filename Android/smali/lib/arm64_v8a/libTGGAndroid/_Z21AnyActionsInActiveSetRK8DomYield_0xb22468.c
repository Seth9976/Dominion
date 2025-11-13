// 函数: _Z21AnyActionsInActiveSetRK8DomYield
// 地址: 0xb22468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 4) == 1)
    if (*(arg1 + 0x10) != 2)
        return 1
    
    if (*(arg1 + 0x74) s>= 1)
        int64_t x21_1 = 0
        
        while (true)
            if ((CardWhere(gDomClient + 0x20728, zx.q(*(arg1 + 0x78 + (x21_1 << 2)))) & 0xfffffffe)
                    == 0x3ea && (CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x78 + (x21_1 << 2))), 4) & 1)
                    != 0)
                return 1
            
            x21_1 += 1
            
            if (x21_1 s>= sx.q(*(arg1 + 0x74)))
                return 0

return 0
