// 函数: _Z9FindOrAddR7CardIDsRKS_i
// 地址: 0xbe8ebc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0xc80) s< 1)
    return 

int64_t x22_1 = 0

while (true)
    uint64_t x8_2 = zx.q(*(arg1 + 0xc80))
    int32_t x9_1 = *(arg2 + (x22_1 << 2))
    CardIDs& x10_1 = arg1
    
    if (x8_2.d s< 1)
    label_be8ef0:
        operator+=(arg1, zx.q(x9_1) | zx.q(arg3))
        x22_1 += 1
        
        if (x22_1 s>= sx.q(*(arg2 + 0xc80)))
            break
    else
        int32_t x11_1
        
        while (true)
            x11_1 = *x10_1
            
            if ((x11_1 & 0xffff0000) == x9_1)
                break
            
            uint64_t temp0_1 = x8_2
            x8_2 -= 1
            x10_1 += 4
            
            if (temp0_1 == 1)
                goto label_be8ef0
        
        *x10_1 = x11_1 | arg3
        x22_1 += 1
        
        if (x22_1 s>= sx.q(*(arg2 + 0xc80)))
            break
