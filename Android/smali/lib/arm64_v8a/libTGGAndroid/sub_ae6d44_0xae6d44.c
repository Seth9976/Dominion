// 函数: sub_ae6d44
// 地址: 0xae6d44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg2

if ((CardIs(*(arg1 + 8), zx.q(x20), 4) & 1) != 0)
    int64_t x22_1 = *(arg1 + 0x10)
    uint64_t x21_1 = zx.q(**(arg1 + 0x18))
    int32_t x0_3 = CardWhat(*(arg1 + 8), zx.q(x20))
    
    if (x21_1.d s>= 1)
        int64_t x8_2 = 0
        int64_t x9_1 = 0
        
        do
            if (*(x22_1 + (x9_1 << 2)) == x0_3)
                if (x9_1.d != 0xffffffff)
                    return zx.q(*(*(arg1 + 0x20) + (x8_2 s>> 0x1e)) s< 2 ? 1 : 0)
                
                break
            
            x9_1 += 1
            x8_2 += 0x100000000
        while (x21_1 != x9_1)

return 1
