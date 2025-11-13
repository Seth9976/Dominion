// 函数: _Z8TestList11DomCardEnumPKS_i18AssociatedPileTypeR15AssociatedPiles
// 地址: 0xaefa68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

int32_t x8_1 = *arg2
uint64_t x10_1 = zx.q(arg3)
int64_t x9_1

if (x8_1 != arg1.d)
    int64_t x11_1 = 1
    
    do
        x9_1 = x11_1
        
        if (x10_1 == x11_1)
            break
        
        x11_1 = x9_1 + 1
    while (*(arg2 + (x9_1 << 2)) != arg1.d)

if (x8_1 != arg1.d && x9_1 u>= x10_1)
    return 

void* __offset(DomCardEnum, 0x4) x9_2 = arg2 + 4
int64_t i = x10_1 - 1

if (x8_1 != arg1.d)
    goto label_aefac4

while (i != 0)
    x8_1 = *x9_2
    x9_2 += 4
    i -= 1
    
    if (x8_1 != arg1.d)
    label_aefac4:
        void* x12_2 = arg5 + sx.q(*(arg5 + 0x810)) * 0x408
        int64_t x13_1 = sx.q(*(x12_2 + 0x400))
        *(x12_2 + 0x404) = arg4
        *(x12_2 + 0x400) = x13_1.d + 1
        *(x12_2 + (x13_1 << 2)) = x8_1

*(arg5 + 0x810) += 1
