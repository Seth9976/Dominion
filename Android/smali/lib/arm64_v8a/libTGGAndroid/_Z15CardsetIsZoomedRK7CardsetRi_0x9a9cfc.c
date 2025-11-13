// 函数: _Z15CardsetIsZoomedRK7CardsetRi
// 地址: 0x9a9cfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1538)

if (x8 != 0xffffffff)
    *arg2 = 0
    uint64_t x10_1 = zx.q(*(arg1 + 0x1538))
    int32_t x9_1 = *(arg1 + 0x1520)
    int32_t x11_2
    
    if (x9_1 s>= x10_1.d)
        uint64_t x11_1 = x10_1
        int64_t i
        
        do
            if (x11_1.d s< 1)
                goto label_9a9d1c
            
            i = *(arg1 + (zx.q(x11_1.d - 1) << 5) + 0x260)
            x11_1 -= 1
        while (i == 0)
        *arg2 = 2
        x10_1 = zx.q(*(arg1 + 0x1538))
        x9_1 = *(arg1 + 0x1520)
        x11_2 = 6
        
        if (x10_1.d s>= 0xffffffff)
            goto label_9a9d68
    else
    label_9a9d1c:
        x11_2 = 4
        
        if (x10_1.d s>= 0xffffffff)
        label_9a9d68:
            int32_t x10_2 = x10_1.d + 1
            
            while (x10_2 s< x9_1)
                int64_t x12_5 = *(arg1 + (zx.q(x10_2) << 5) + 0x260)
                x10_2 += 1
                
                if (x12_5 != 0)
                    if (x10_2 == 0)
                        break
                    
                    *arg2 = x11_2
                    return zx.q(x8 != 0xffffffff ? 1 : 0)

return zx.q(x8 != 0xffffffff ? 1 : 0)
