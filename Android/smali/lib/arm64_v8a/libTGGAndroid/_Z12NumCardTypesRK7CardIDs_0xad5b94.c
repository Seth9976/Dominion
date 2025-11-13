// 函数: _Z12NumCardTypesRK7CardIDs
// 地址: 0xad5b94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (*(arg1 + 0xc80) s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    int64_t x24_1 = 0
    
    do
        int32_t x21_1 = *(arg1 + (i << 2))
        int64_t x22_1 = 1
        uint64_t j
        
        do
            if ((x22_1 & x24_1) == 0
                    && (CardIs(*(DomGetContext() + 8), zx.q(x21_1), x22_1) & 1) != 0)
                x24_1 |= x22_1
                x20 += 1
            
            j = x22_1 u>> 0x2e
            x22_1 <<= 1
        while (j == 0)
        i += 1
    while (i s< sx.q(*(arg1 + 0xc80)))

return zx.q(x20)
