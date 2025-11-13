// 函数: _Z8MergeSetR7CardIDsRKS_
// 地址: 0xbe8e20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0xc80)

if (x8 s< 1)
    return 

int64_t i = 0

do
    uint64_t x9_1 = zx.q(*(arg1 + 0xc80))
    uint64_t x1 = zx.q(*(arg2 + (i << 2)))
    
    if (x9_1.d s< 1)
    label_be8e50:
        operator+=(arg1, x1)
        x8 = *(arg2 + 0xc80)
    else if (*arg1 != x1.d)
        int64_t x10_2 = 0
        int32_t j
        
        do
            if (x9_1 - 1 == x10_2)
                goto label_be8e50
            
            j = *(arg1 + 4 + (x10_2 << 2))
            x10_2 += 1
        while (j != x1.d)
        
        if (x10_2 u>= x9_1)
            goto label_be8e50
    
    i += 1
while (i s< sx.q(x8))
