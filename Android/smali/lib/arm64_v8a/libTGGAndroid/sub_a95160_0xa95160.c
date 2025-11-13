// 函数: sub_a95160
// 地址: 0xa95160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = BoardPileSource(zx.q(*arg2))
uint64_t x8_1 = zx.q(*(arg1 + 0x78))

if (x8_1.d s>= 1)
    if (*(arg1 + 8) == x0_1)
        return 0
    
    int64_t i = 0
    
    while (x8_1 - 1 != i)
        int32_t x12_1 = *(arg1 + 0xc + (i << 2))
        i += 1
        
        if (x12_1 == x0_1)
            if (i u< x8_1)
                return 0
            
            break

return zx.q(zx.d(*(DomDefGet(zx.q(x0_1), zx.q(*(*(DomGetContext() + 8) + 0xd50))) + 0xc8)) u>> 2)
    & 1
