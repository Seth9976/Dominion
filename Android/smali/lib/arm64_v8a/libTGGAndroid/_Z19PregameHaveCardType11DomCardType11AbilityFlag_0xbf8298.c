// 函数: _Z19PregameHaveCardType11DomCardType11AbilityFlag
// 地址: 0xbf8298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int64_t x26 = 0
int32_t x26_1

while (true)
    int32_t x21_1 = *(*(gPregameContext + 0x20) + (x26 << 2))
    
    if (x21_1 != 0)
        int32_t x22_1 = *gPregameContext
        int32_t x8_3 = (x21_1 + (x22_1 << 0x10)) s% 0x3e5
        int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_3) << 3))
        
        if (x9_5 != 0)
            while (*x9_5 != x21_1 || x9_5[1] != x22_1)
                x9_5 = *(x9_5 + 0x10)
                
                if (x9_5 == 0)
                    goto label_bf8318
            
            if ((*(*(x9_5 + 8) + 0xc8) & x19) != 0)
                x26_1 = 1
                break
        else
        label_bf8318:
            DomDefGetSlow(zx.q(x21_1), zx.q(x22_1))
            int32_t* x0_1 = malloc(0x18)
            int64_t x8_4 = sx.q(x8_3) << 3
            int64_t x9_6 = *(&data_1838a20 + x8_4)
            *x0_1 = x21_1
            x0_1[1] = x22_1
            *(&data_1838a20 + x8_4) = x0_1
            *(x0_1 + 0x10) = x9_6
            void* x0_3 = DomDefGetSlow(zx.q(x21_1), zx.q(x22_1))
            *(x0_1 + 8) = x0_3
            
            if ((*(x0_3 + 0xc8) & x19) != 0)
                x26_1 = 1
                break
        
        x26 += 1
        
        if (x26 != 0xa)
            continue
    
    if ((arg2 & 0x20000) != 0)
        int64_t i = 0
        x26_1 = 1
        
        do
            DomKingdomData* x0_16 = *(gPregameContext + 0x20)
            
            if (*(x0_16 + (i << 2) + 0x118) != 0
                    && (ExtraPileIsAfterDivineWind(x0_16, i.d) & 1) != 0)
                int32_t x22_3 = *gPregameContext
                int32_t x21_3 = *(*(gPregameContext + 0x20) + (i << 2) + 0x118)
                int32_t x8_23 = (x21_3 + (x22_3 << 0x10)) s% 0x3e5
                int32_t* x9_18 = *(&data_1838a20 + (sx.q(x8_23) << 3))
                
                if (x9_18 != 0)
                    while (*x9_18 != x21_3 || x9_18[1] != x22_3)
                        x9_18 = *(x9_18 + 0x10)
                        
                        if (x9_18 == 0)
                            goto label_bf84d0
                    
                    if ((*(*(x9_18 + 8) + 0xc8) & x19) != 0)
                        break
                else
                label_bf84d0:
                    DomDefGetSlow(zx.q(x21_3), zx.q(x22_3))
                    int32_t* x0_13 = malloc(0x18)
                    int64_t x8_16 = sx.q(x8_23) << 3
                    int64_t x9_13 = *(&data_1838a20 + x8_16)
                    *x0_13 = x21_3
                    x0_13[1] = x22_3
                    *(&data_1838a20 + x8_16) = x0_13
                    *(x0_13 + 0x10) = x9_13
                    void* x0_15 = DomDefGetSlow(zx.q(x21_3), zx.q(x22_3))
                    *(x0_13 + 8) = x0_15
                    
                    if ((*(x0_15 + 0xc8) & x19) != 0)
                        break
            
            bool cond:0_1 = i u< 0x1f
            i += 1
            x26_1 = cond:0_1 ? 1 : 0
        while (i != 0x20)
        
        break
    
    int64_t i_1 = 0
    x26_1 = 1
    
    do
        DomKingdomData* x0_9 = *(gPregameContext + 0x20)
        
        if (*(x0_9 + (i_1 << 2) + 0x118) != 0 && (ExtraPileIsAfterDivineWind(x0_9, i_1.d) & 1) == 0)
            int32_t x22_2 = *gPregameContext
            int32_t x21_2 = *(*(gPregameContext + 0x20) + (i_1 << 2) + 0x118)
            int32_t x8_14 = (x21_2 + (x22_2 << 0x10)) s% 0x3e5
            int32_t* x9_12 = *(&data_1838a20 + (sx.q(x8_14) << 3))
            
            if (x9_12 != 0)
                while (*x9_12 != x21_2 || x9_12[1] != x22_2)
                    x9_12 = *(x9_12 + 0x10)
                    
                    if (x9_12 == 0)
                        goto label_bf83c0
                
                if ((*(*(x9_12 + 8) + 0xc8) & x19) != 0)
                    break
            else
            label_bf83c0:
                DomDefGetSlow(zx.q(x21_2), zx.q(x22_2))
                int32_t* x0_6 = malloc(0x18)
                int64_t x8_7 = sx.q(x8_14) << 3
                int64_t x9_7 = *(&data_1838a20 + x8_7)
                *x0_6 = x21_2
                x0_6[1] = x22_2
                *(&data_1838a20 + x8_7) = x0_6
                *(x0_6 + 0x10) = x9_7
                void* x0_8 = DomDefGetSlow(zx.q(x21_2), zx.q(x22_2))
                *(x0_6 + 8) = x0_8
                
                if ((*(x0_8 + 0xc8) & x19) != 0)
                    break
        
        bool cond:1_1 = i_1 u< 0x1f
        i_1 += 1
        x26_1 = cond:1_1 ? 1 : 0
    while (i_1 != 0x20)
    
    break

return zx.q(x26_1) & 1
