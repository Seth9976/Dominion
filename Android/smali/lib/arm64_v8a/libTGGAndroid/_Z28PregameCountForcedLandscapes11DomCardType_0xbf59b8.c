// 函数: _Z28PregameCountForcedLandscapes11DomCardType
// 地址: 0xbf59b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gPregameContext + 0x28)
int32_t x20 = *(x8 + 0xa0)

if (arg1 == 0)
    if (x20 != 0)
        if (x20 != 1)
            x20 = 0
        
        int32_t x9_10 = *(x8 + 0xe8)
        
        if (x9_10 != 0)
            if (x9_10 == 1)
                x20 += 1
            
            int32_t x9_11 = *(x8 + 0x130)
            
            if (x9_11 != 0)
                if (x9_11 == 1)
                    x20 += 1
                
                if (*(x8 + 0x178) == 1)
                    return zx.q(x20 + 1)
else if (x20 != 0)
    int64_t x19_1 = arg1
    int32_t x9_8
    
    if (x20 == 1)
        int32_t x20_1 = *(x8 + 0xa4)
        int32_t x21_1 = *gPregameContext
        int32_t x9_5 = (x20_1 + (x21_1 << 0x10)) s% 0x3e5
        int32_t* x10_1 = *(&data_1838a20 + (sx.q(x9_5) << 3))
        void* x0_3
        
        if (x10_1 != 0)
            while (*x10_1 != x20_1 || x10_1[1] != x21_1)
                x10_1 = *(x10_1 + 0x10)
                
                if (x10_1 == 0)
                    goto label_bf5a3c
            
            x0_3 = *(x10_1 + 8)
        else
        label_bf5a3c:
            DomDefGetSlow(zx.q(x20_1), zx.q(x21_1))
            int32_t* x0_1 = malloc(0x18)
            int64_t x8_1 = sx.q(x9_5) << 3
            int64_t x9_6 = *(&data_1838a20 + x8_1)
            *x0_1 = x20_1
            x0_1[1] = x21_1
            *(&data_1838a20 + x8_1) = x0_1
            *(x0_1 + 0x10) = x9_6
            x0_3 = DomDefGetSlow(zx.q(x20_1), zx.q(x21_1))
            x8 = *(gPregameContext + 0x28)
            *(x0_1 + 8) = x0_3
        
        x20 = (*(x0_3 + 0xc8) & x19_1) != 0 ? 1 : 0
        x9_8 = *(x8 + 0xe8)
        
        if (x9_8 == 1)
            goto label_bf5b1c
        
        goto label_bf5ab4
    
    x20 = 0
    x9_8 = *(x8 + 0xe8)
    int32_t x9_9
    
    if (x9_8 != 1)
    label_bf5ab4:
        
        if (x9_8 != 0)
            x9_9 = *(x8 + 0x130)
            
            if (x9_9 != 0)
            label_bf5be8:
                
                if (x9_9 == 1)
                    int32_t x21_3 = *(x8 + 0x134)
                    int32_t x22_3 = *gPregameContext
                    int32_t x9_23 = (x21_3 + (x22_3 << 0x10)) s% 0x3e5
                    int32_t* x10_4 = *(&data_1838a20 + (sx.q(x9_23) << 3))
                    void* x0_12
                    
                    if (x10_4 != 0)
                        while (*x10_4 != x21_3 || x10_4[1] != x22_3)
                            x10_4 = *(x10_4 + 0x10)
                            
                            if (x10_4 == 0)
                                goto label_bf5c30
                        
                        x0_12 = *(x10_4 + 8)
                    else
                    label_bf5c30:
                        DomDefGetSlow(zx.q(x21_3), zx.q(x22_3))
                        int32_t* x0_10 = malloc(0x18)
                        int64_t x8_4 = sx.q(x9_23) << 3
                        int64_t x9_24 = *(&data_1838a20 + x8_4)
                        *x0_10 = x21_3
                        x0_10[1] = x22_3
                        *(&data_1838a20 + x8_4) = x0_10
                        *(x0_10 + 0x10) = x9_24
                        x0_12 = DomDefGetSlow(zx.q(x21_3), zx.q(x22_3))
                        x8 = *(gPregameContext + 0x28)
                        *(x0_10 + 8) = x0_12
                    
                    if ((*(x0_12 + 0xc8) & x19_1) != 0)
                        x20 += 1
                
                if (*(x8 + 0x178) == 1)
                    int32_t x21_4 = *(x8 + 0x17c)
                    int32_t x22_4 = *gPregameContext
                    int32_t x8_9 = (x21_4 + (x22_4 << 0x10)) s% 0x3e5
                    int32_t* x9_28 = *(&data_1838a20 + (sx.q(x8_9) << 3))
                    void* x0_16
                    
                    if (x9_28 != 0)
                        while (*x9_28 != x21_4 || x9_28[1] != x22_4)
                            x9_28 = *(x9_28 + 0x10)
                            
                            if (x9_28 == 0)
                                goto label_bf5cec
                        
                        x0_16 = *(x9_28 + 8)
                    else
                    label_bf5cec:
                        DomDefGetSlow(zx.q(x21_4), zx.q(x22_4))
                        int32_t* x0_14 = malloc(0x18)
                        int64_t x8_10 = sx.q(x8_9) << 3
                        int64_t x9_29 = *(&data_1838a20 + x8_10)
                        *x0_14 = x21_4
                        x0_14[1] = x22_4
                        *(&data_1838a20 + x8_10) = x0_14
                        *(x0_14 + 0x10) = x9_29
                        x0_16 = DomDefGetSlow(zx.q(x21_4), zx.q(x22_4))
                        *(x0_14 + 8) = x0_16
                    
                    if ((*(x0_16 + 0xc8) & x19_1) != 0)
                        x20 += 1
    else
    label_bf5b1c:
        int32_t x21_2 = *(x8 + 0xec)
        int32_t x22_2 = *gPregameContext
        int32_t x9_16 = (x21_2 + (x22_2 << 0x10)) s% 0x3e5
        int32_t* x10_2 = *(&data_1838a20 + (sx.q(x9_16) << 3))
        void* x0_8
        
        if (x10_2 != 0)
            while (*x10_2 != x21_2 || x10_2[1] != x22_2)
                x10_2 = *(x10_2 + 0x10)
                
                if (x10_2 == 0)
                    goto label_bf5b68
            
            x0_8 = *(x10_2 + 8)
        else
        label_bf5b68:
            DomDefGetSlow(zx.q(x21_2), zx.q(x22_2))
            int32_t* x0_6 = malloc(0x18)
            int64_t x8_3 = sx.q(x9_16) << 3
            int64_t x9_17 = *(&data_1838a20 + x8_3)
            *x0_6 = x21_2
            x0_6[1] = x22_2
            *(&data_1838a20 + x8_3) = x0_6
            *(x0_6 + 0x10) = x9_17
            x0_8 = DomDefGetSlow(zx.q(x21_2), zx.q(x22_2))
            x8 = *(gPregameContext + 0x28)
            *(x0_6 + 8) = x0_8
        
        if ((*(x0_8 + 0xc8) & x19_1) != 0)
            x20 += 1
        
        x9_9 = *(x8 + 0x130)
        
        if (x9_9 != 0)
            goto label_bf5be8

return zx.q(x20)
