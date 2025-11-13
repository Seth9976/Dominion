// 函数: _Z16TestSetPotentialR7DomGame11DomCardEnumS1_PKS1_i18AssociatedPileTypeS4_R15AssociatedPiles
// 地址: 0xaef654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == arg3)
    int32_t x9_1 = *(arg8 + 0x810)
    void* x10_1 = arg8 + muls.dp.d(x9_1, 0x408)
    *(x10_1 + 0x404) = arg7
    
    if (arg5 s>= 1)
        int64_t i = 0
        
        do
            uint64_t x14_2 = zx.q(*(arg1 + 0x1528))
            
            if (x14_2.d s>= 1)
                int32_t x13_1 = *(arg4 + (i << 2))
                int64_t x15_3
                
                if (*(arg1 + 0x1a70) != x13_1)
                    x15_3 = 0
                    void* __offset(DomGame, 0x1ad8) x17_1 = arg1 + 0x1ad8
                    int32_t x6
                    
                    do
                        if (x14_2 - 1 == x15_3)
                            goto label_aef6a8
                        
                        x6 = *x17_1
                        x17_1 += 0x68
                        x15_3 += 1
                    while (x6 != x13_1)
                
                if (*(arg1 + 0x1a70) == x13_1 || x15_3 u< x14_2)
                    int64_t x14_1 = sx.q(*(x10_1 + 0x400))
                    *(x10_1 + 0x400) = x14_1.d + 1
                    *(arg8 + sx.q(x9_1) * 0x408 + (x14_1 << 2)) = x13_1
            
        label_aef6a8:
            i += 1
        while (i != zx.q(arg5))
        
        x9_1 = *(arg8 + 0x810)
    
    *(arg8 + 0x810) = x9_1 + 1

if (arg5 s< 1)
    return 

uint64_t x8_3
int64_t x9_3

if (*arg4 != arg2)
    x8_3 = zx.q(arg5)
    int64_t x10_3 = 1
    
    do
        x9_3 = x10_3
        
        if (x8_3 == x10_3)
            break
        
        x10_3 = x9_3 + 1
    while (*(arg4 + (x9_3 << 2)) != arg2)

if (*arg4 != arg2 && x9_3 u>= x8_3)
    return 

void* x8_5 = arg8 + sx.q(*(arg8 + 0x810)) * 0x408
int64_t x9_4 = sx.q(*(x8_5 + 0x400))
*(x8_5 + 0x404) = arg6
*(x8_5 + 0x400) = x9_4.d + 1
*(x8_5 + (x9_4 << 2)) = arg3
*(arg8 + 0x810) += 1
