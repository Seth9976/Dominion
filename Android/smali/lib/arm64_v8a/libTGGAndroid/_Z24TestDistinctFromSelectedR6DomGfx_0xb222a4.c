// 函数: _Z24TestDistinctFromSelectedR6DomGfx
// 地址: 0xb222a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)))
int32_t x8 = *(gDomClient + 0x2056c)

if (x8 s>= 1)
    int64_t i = 0
    
    do
        uint64_t x1_1 = zx.q(*(gDomClient + (i << 2) + 0x1f8ec))
        
        if (x1_1.d != *(arg1 + 0x98))
            if (CardWhat(gDomClient + 0x20728, x1_1) == x0_1)
                return 0
            
            x8 = *(gDomClient + 0x2056c)
        
        i += 1
    while (i s< sx.q(x8))

return 1
