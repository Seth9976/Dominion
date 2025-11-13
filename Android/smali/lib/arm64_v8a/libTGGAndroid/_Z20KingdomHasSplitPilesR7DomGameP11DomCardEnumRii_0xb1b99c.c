// 函数: _Z20KingdomHasSplitPilesR7DomGameP11DomCardEnumRii
// 地址: 0xb1b99c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = 0
int32_t x8_3

if (arg4 == 0)
    x8_3 = 0
    
    if (0 != arg4)
    label_b1ba88:
        int64_t x9_4 = -0x26c
        
        do
            void* x11_1 = arg1 + x9_4
            int32_t x10_3 = *(x11_1 + 0x14f4)
            
            if (x10_3 == 0xdc6)
                int32_t x10_4 = *(x11_1 + 0x1504)
                *arg3 = x8_3 + 1
                *(arg2 + (sx.q(x8_3) << 2)) = x10_4
                x8_3 = *arg3
                
                if (x9_4 == 0)
                    break
            else
                if (x10_3 == 0)
                    break
                
                x8_3 = *arg3
                
                if (x9_4 == 0)
                    break
            
            x9_4 += 0x14
        while (x8_3 != arg4)
else
    int32_t x23_1 = 0x13
    
    do
        int32_t x9_1 = *DomBoardPile(gDomClient + 0x20728, x23_1)
        uint64_t x8_1 = zx.q(x9_1 - 0xc04)
        int32_t x8_2
        
        if (x8_1.d u<= 0xc)
            x8_2 = 0xc05
            
            switch (x8_1)
                case 0
                    goto label_b1ba48
                case 2
                    x8_2 = 0xc07
                    goto label_b1ba48
                case 4
                    x8_2 = 0xc09
                    goto label_b1ba48
                case 7
                    x8_2 = 0xc0c
                    goto label_b1ba48
                case 0xc
                    x8_2 = 0xc11
                    goto label_b1ba48
        else if (x9_1 == 0x1305)
            x8_2 = 0x1306
        label_b1ba48:
            int64_t x9_3 = sx.q(*arg3)
            *arg3 = x9_3.d + 1
            *(arg2 + (x9_3 << 2)) = x8_2
        x8_3 = *arg3
        
        if (x23_1 u> 0x45)
            break
        
        x23_1 += 1
    while (x8_3 != arg4)
    
    if (x8_3 != arg4)
        goto label_b1ba88

return zx.q(x8_3 != 0 ? 1 : 0)
