// 函数: _Z13ToUniqueWhatsRK7CardIDsP11DomCardEnum
// 地址: 0xadff14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(arg1 + 0xc80))
int32_t x21

if (x23.d s< 1)
    x21 = 0
else
    int64_t x24_1 = 0
    x21 = 0
    
    do
        int32_t i = CardWhat(*(DomGetContext() + 8), zx.q(*(arg1 + (x24_1 << 2))))
        uint64_t x8_1
        
        if (x21 s<= 0)
            x8_1 = sx.q(x21)
        label_adff48:
            x21 += 1
            *(arg2 + (x8_1 << 2)) = i
        else
            x8_1 = zx.q(x21)
            DomCardEnum* x9_1 = arg2
            uint64_t x10_1 = x8_1
            
            while (*x9_1 != i)
                uint64_t temp0_1 = x10_1
                x10_1 -= 1
                x9_1 += 4
                
                if (temp0_1 == 1)
                    goto label_adff48
        x24_1 += 1
    while (x24_1 != x23)

return zx.q(x21)
