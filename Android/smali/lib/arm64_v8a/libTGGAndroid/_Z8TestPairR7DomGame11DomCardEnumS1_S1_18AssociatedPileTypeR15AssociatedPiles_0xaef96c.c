// 函数: _Z8TestPairR7DomGame11DomCardEnumS1_S1_18AssociatedPileTypeR15AssociatedPiles
// 地址: 0xaef96c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == arg3)
    uint64_t x8_1 = zx.q(*(arg1 + 0x1528))
    
    if (x8_1.d s>= 1)
        int64_t x10_1
        
        if (*(arg1 + 0x1a70) != arg4)
            void* __offset(DomGame, 0x1ad8) x9_2 = arg1 + 0x1ad8
            int64_t x11_1 = 1
            int32_t x11_2
            
            do
                x10_1 = x11_1
                
                if (x8_1 == x11_1)
                    break
                
                x11_2 = *x9_2
                x9_2 += 0x68
                x11_1 = x10_1 + 1
            while (x11_2 != arg4)
        
        if (*(arg1 + 0x1a70) == arg4 || x10_1 u< x8_1)
            void* x8_3 = arg6 + sx.q(*(arg6 + 0x810)) * 0x408
            int64_t x9_3 = sx.q(*(x8_3 + 0x400))
            *(x8_3 + 0x404) = arg5
            *(x8_3 + 0x400) = x9_3.d + 1
            *(x8_3 + (x9_3 << 2)) = arg4
            *(arg6 + 0x810) += 1

if (arg2 != arg4)
    return 

uint64_t x8_6 = zx.q(*(arg1 + 0x1528))

if (x8_6.d s< 1)
    return 

int64_t x10_3

if (*(arg1 + 0x1a70) != arg3)
    void* __offset(DomGame, 0x1ad8) x9_5 = arg1 + 0x1ad8
    int64_t x11_3 = 1
    int32_t x11_4
    
    do
        x10_3 = x11_3
        
        if (x8_6 == x11_3)
            break
        
        x11_4 = *x9_5
        x9_5 += 0x68
        x11_3 = x10_3 + 1
    while (x11_4 != arg3)

if (*(arg1 + 0x1a70) != arg3 && x10_3 u>= x8_6)
    return 

void* x8_8 = arg6 + sx.q(*(arg6 + 0x810)) * 0x408
int64_t x9_6 = sx.q(*(x8_8 + 0x400))
*(x8_8 + 0x404) = arg5
*(x8_8 + 0x400) = x9_6.d + 1
*(x8_8 + (x9_6 << 2)) = arg3
*(arg6 + 0x810) += 1
