// 函数: _Z21RandomizerDeck_RemoveR14RandomizerDeck11DomCardEnum
// 地址: 0xbf77ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GetSplitPileSource(zx.q(arg2))
uint64_t x9 = zx.q(*(arg1 + 0xc80))
int32_t i

if (result.d == 0)
    i = arg2
else
    i = result.d

uint64_t x9_1

if (x9.d s>= 1)
    uint64_t x11_1 = x9
    RandomizerDeck& x10_1 = arg1
    
    while (*x10_1 != i)
        uint64_t temp0_1 = x11_1
        x11_1 -= 1
        x10_1 += 4
        
        if (temp0_1 == 1)
            goto label_bf77f8
    
    *(arg1 + 0xc80) = x9.d - 1
    *x10_1 = *(arg1 + ((sx.q(x9.d) - 1) << 2))
    x9_1 = zx.q(*(arg1 + 0x1904))
    
    if (x9_1.d s< 1)
        goto label_bf7848
    
    goto label_bf7828

label_bf77f8:
x9_1 = zx.q(*(arg1 + 0x1904))
uint64_t i_3

if (x9_1.d s>= 1)
label_bf7828:
    void* __offset(RandomizerDeck, 0xc84) x10_2 = arg1 + 0xc84
    uint64_t x11_2 = x9_1
    
    while (*x10_2 != i)
        uint64_t temp1_1 = x11_2
        x11_2 -= 1
        x10_2 += 4
        
        if (temp1_1 == 1)
            goto label_bf7848
    
    *(arg1 + 0x1904) = x9_1.d - 1
    *x10_2 = *(arg1 + ((sx.q(x9_1.d) - 1) << 2) + 0xc84)
    i_3 = zx.q(*(arg1 + 0x2588))
    
    if (i_3.d s>= 1)
        goto label_bf7888
else
label_bf7848:
    i_3 = zx.q(*(arg1 + 0x2588))
    
    if (i_3.d s>= 1)
    label_bf7888:
        void* __offset(RandomizerDeck, 0x1908) x10_3 = arg1 + 0x1908
        uint64_t i_2 = i_3
        uint64_t i_1
        
        do
            if (*x10_3 == i)
                *(arg1 + 0x2588) = i_3.d - 1
                *x10_3 = *(arg1 + ((sx.q(i_3.d) - 1) << 2) + 0x1908)
                return result
            
            i_1 = i_2
            i_2 -= 1
            x10_3 += 4
        while (i_1 != 1)
return result
