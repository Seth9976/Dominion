// 函数: _Z21TestSetPotentialArrayR7DomGame11DomCardEnumPKS1_iS3_i18AssociatedPileTypeS4_R15AssociatedPiles
// 地址: 0xaef77c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s>= 1)
    uint64_t x9_2
    int64_t x10_1
    
    if (*arg3 != arg2)
        x9_2 = zx.q(arg4)
        int64_t x11_1 = 1
        
        do
            x10_1 = x11_1
            
            if (x9_2 == x11_1)
                break
            
            x11_1 = x10_1 + 1
        while (*(arg3 + (x10_1 << 2)) != arg2)
    
    if (*arg3 == arg2 || x10_1 u< x9_2)
        int32_t x10_3 = *(arg9 + 0x810)
        void* x11_3 = arg9 + muls.dp.d(x10_3, 0x408)
        *(x11_3 + 0x404) = arg8
        
        if (arg6 s>= 1)
            int64_t i = 0
            
            do
                uint64_t x15_2 = zx.q(*(arg1 + 0x1528))
                
                if (x15_2.d s>= 1)
                    int32_t x14_1 = *(arg5 + (i << 2))
                    int64_t x16_3
                    
                    if (*(arg1 + 0x1a70) != x14_1)
                        x16_3 = 0
                        void* __offset(DomGame, 0x1ad8) x7 = arg1 + 0x1ad8
                        int32_t x19_1
                        
                        do
                            if (x15_2 - 1 == x16_3)
                                goto label_aef810
                            
                            x19_1 = *x7
                            x7 += 0x68
                            x16_3 += 1
                        while (x19_1 != x14_1)
                    
                    if (*(arg1 + 0x1a70) == x14_1 || x16_3 u< x15_2)
                        int64_t x15_1 = sx.q(*(x11_3 + 0x400))
                        *(x11_3 + 0x400) = x15_1.d + 1
                        *(arg9 + sx.q(x10_3) * 0x408 + (x15_1 << 2)) = x14_1
                
            label_aef810:
                i += 1
            while (i != zx.q(arg6))
            
            x10_3 = *(arg9 + 0x810)
        
        *(arg9 + 0x810) = x10_3 + 1

if (arg6 s< 1)
    return 

uint64_t x9_5
int64_t x10_4

if (*arg5 != arg2)
    x9_5 = zx.q(arg6)
    int64_t x11_5 = 1
    
    do
        x10_4 = x11_5
        
        if (x9_5 == x11_5)
            break
        
        x11_5 = x10_4 + 1
    while (*(arg5 + (x10_4 << 2)) != arg2)

if (*arg5 != arg2 && x10_4 u>= x9_5)
    return 

int32_t x10_6 = *(arg9 + 0x810)
void* x11_7 = arg9 + muls.dp.d(x10_6, 0x408)
*(x11_7 + 0x404) = arg7

if (arg4 s>= 1)
    int64_t i_1 = 0
    
    do
        uint64_t x15_4 = zx.q(*(arg1 + 0x1528))
        
        if (x15_4.d s>= 1)
            int32_t x14_2 = *(arg3 + (i_1 << 2))
            int64_t x16_6
            
            if (*(arg1 + 0x1a70) != x14_2)
                x16_6 = 0
                void* __offset(DomGame, 0x1ad8) x1 = arg1 + 0x1ad8
                int32_t x3
                
                do
                    if (x15_4 - 1 == x16_6)
                        goto label_aef900
                    
                    x3 = *x1
                    x1 += 0x68
                    x16_6 += 1
                while (x3 != x14_2)
            
            if (*(arg1 + 0x1a70) == x14_2 || x16_6 u< x15_4)
                int64_t x15_3 = sx.q(*(x11_7 + 0x400))
                *(x11_7 + 0x400) = x15_3.d + 1
                *(arg9 + sx.q(x10_6) * 0x408 + (x15_3 << 2)) = x14_2
        
    label_aef900:
        i_1 += 1
    while (i_1 != zx.q(arg4))
    
    x10_6 = *(arg9 + 0x810)

*(arg9 + 0x810) = x10_6 + 1
