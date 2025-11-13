// 函数: _Z24PregameHaveLandscapeType11DomCardType11AbilityFlag
// 地址: 0xbf85cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int32_t x21 = *(*(gPregameContext + 0x20) + 0x28)
int32_t x25

if (x21 == 0)
label_bf891c:
    
    if ((arg2 & 0x20000) != 0)
        int64_t i = 0
        x25 = 1
        
        do
            DomKingdomData* x0_32 = *(gPregameContext + 0x20)
            
            if (*(x0_32 + (i << 2) + 0x118) != 0
                    && (ExtraPileIsAfterDivineWind(x0_32, i.d) & 1) != 0)
                int32_t x22_6 = *gPregameContext
                int32_t x21_5 = *(*(gPregameContext + 0x20) + (i << 2) + 0x118)
                int32_t x8_52 = (x21_5 + (x22_6 << 0x10)) s% 0x3e5
                int32_t* x9_23 = *(&data_1838a20 + (sx.q(x8_52) << 3))
                
                if (x9_23 != 0)
                    while (*x9_23 != x21_5 || x9_23[1] != x22_6)
                        x9_23 = *(x9_23 + 0x10)
                        
                        if (x9_23 == 0)
                            goto label_bf8a54
                    
                    if ((*(*(x9_23 + 8) + 0xc8) & x19) != 0)
                        break
                else
                label_bf8a54:
                    DomDefGetSlow(zx.q(x21_5), zx.q(x22_6))
                    int32_t* x0_29 = malloc(0x18)
                    int64_t x8_45 = sx.q(x8_52) << 3
                    int64_t x9_18 = *(&data_1838a20 + x8_45)
                    *x0_29 = x21_5
                    x0_29[1] = x22_6
                    *(&data_1838a20 + x8_45) = x0_29
                    *(x0_29 + 0x10) = x9_18
                    void* x0_31 = DomDefGetSlow(zx.q(x21_5), zx.q(x22_6))
                    *(x0_29 + 8) = x0_31
                    
                    if ((*(x0_31 + 0xc8) & x19) != 0)
                        break
            
            bool cond:0_1 = i u< 0x1f
            i += 1
            x25 = cond:0_1 ? 1 : 0
        while (i != 0x20)
    else
        int64_t i_1 = 0
        x25 = 1
        
        do
            DomKingdomData* x0_25 = *(gPregameContext + 0x20)
            
            if (*(x0_25 + (i_1 << 2) + 0x118) != 0
                    && (ExtraPileIsAfterDivineWind(x0_25, i_1.d) & 1) == 0)
                int32_t x22_5 = *gPregameContext
                int32_t x21_4 = *(*(gPregameContext + 0x20) + (i_1 << 2) + 0x118)
                int32_t x8_43 = (x21_4 + (x22_5 << 0x10)) s% 0x3e5
                int32_t* x9_17 = *(&data_1838a20 + (sx.q(x8_43) << 3))
                
                if (x9_17 != 0)
                    while (*x9_17 != x21_4 || x9_17[1] != x22_5)
                        x9_17 = *(x9_17 + 0x10)
                        
                        if (x9_17 == 0)
                            goto label_bf894c
                    
                    if ((*(*(x9_17 + 8) + 0xc8) & x19) != 0)
                        break
                else
                label_bf894c:
                    DomDefGetSlow(zx.q(x21_4), zx.q(x22_5))
                    int32_t* x0_22 = malloc(0x18)
                    int64_t x8_36 = sx.q(x8_43) << 3
                    int64_t x9_12 = *(&data_1838a20 + x8_36)
                    *x0_22 = x21_4
                    x0_22[1] = x22_5
                    *(&data_1838a20 + x8_36) = x0_22
                    *(x0_22 + 0x10) = x9_12
                    void* x0_24 = DomDefGetSlow(zx.q(x21_4), zx.q(x22_5))
                    *(x0_22 + 8) = x0_24
                    
                    if ((*(x0_24 + 0xc8) & x19) != 0)
                        break
            
            bool cond:1_1 = i_1 u< 0x1f
            i_1 += 1
            x25 = cond:1_1 ? 1 : 0
        while (i_1 != 0x20)
else
    int32_t x22_1 = *gPregameContext
    int32_t x8_5 = (x21 + (x22_1 << 0x10)) s% 0x3e5
    int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_5) << 3))
    
    if (x9_1 != 0)
        while (*x9_1 != x21 || x9_1[1] != x22_1)
            x9_1 = *(x9_1 + 0x10)
            
            if (x9_1 == 0)
                goto label_bf8648
        
        if ((*(*(x9_1 + 8) + 0xc8) & x19) == 0)
            goto label_bf86c0
        
        x25 = 1
    else
    label_bf8648:
        DomDefGetSlow(zx.q(x21), zx.q(x22_1))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_6 = sx.q(x8_5) << 3
        int64_t x9_2 = *(&data_1838a20 + x8_6)
        *x0_1 = x21
        x0_1[1] = x22_1
        *(&data_1838a20 + x8_6) = x0_1
        *(x0_1 + 0x10) = x9_2
        void* x0_3 = DomDefGetSlow(zx.q(x21), zx.q(x22_1))
        *(x0_1 + 8) = x0_3
        
        if ((*(x0_3 + 0xc8) & x19) != 0)
            x25 = 1
        else
        label_bf86c0:
            int32_t x21_1 = *(*(gPregameContext + 0x20) + 0x64)
            
            if (x21_1 == 0)
                goto label_bf891c
            
            int32_t x22_2 = *gPregameContext
            int32_t x8_14 = (x21_1 + (x22_2 << 0x10)) s% 0x3e5
            int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_14) << 3))
            
            if (x9_4 != 0)
                while (*x9_4 != x21_1 || x9_4[1] != x22_2)
                    x9_4 = *(x9_4 + 0x10)
                    
                    if (x9_4 == 0)
                        goto label_bf8708
                
                if ((*(*(x9_4 + 8) + 0xc8) & x19) == 0)
                    goto label_bf8780
                
                x25 = 1
            else
            label_bf8708:
                DomDefGetSlow(zx.q(x21_1), zx.q(x22_2))
                int32_t* x0_6 = malloc(0x18)
                int64_t x8_15 = sx.q(x8_14) << 3
                int64_t x9_5 = *(&data_1838a20 + x8_15)
                *x0_6 = x21_1
                x0_6[1] = x22_2
                *(&data_1838a20 + x8_15) = x0_6
                *(x0_6 + 0x10) = x9_5
                void* x0_8 = DomDefGetSlow(zx.q(x21_1), zx.q(x22_2))
                *(x0_6 + 8) = x0_8
                
                if ((*(x0_8 + 0xc8) & x19) != 0)
                    x25 = 1
                else
                label_bf8780:
                    int32_t x21_2 = *(*(gPregameContext + 0x20) + 0xa0)
                    
                    if (x21_2 == 0)
                        goto label_bf891c
                    
                    int32_t x22_3 = *gPregameContext
                    int32_t x8_23 = (x21_2 + (x22_3 << 0x10)) s% 0x3e5
                    int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_23) << 3))
                    
                    if (x9_7 != 0)
                        while (*x9_7 != x21_2 || x9_7[1] != x22_3)
                            x9_7 = *(x9_7 + 0x10)
                            
                            if (x9_7 == 0)
                                goto label_bf87c8
                        
                        if ((*(*(x9_7 + 8) + 0xc8) & x19) == 0)
                            goto label_bf8840
                        
                        x25 = 1
                    else
                    label_bf87c8:
                        DomDefGetSlow(zx.q(x21_2), zx.q(x22_3))
                        int32_t* x0_11 = malloc(0x18)
                        int64_t x8_24 = sx.q(x8_23) << 3
                        int64_t x9_8 = *(&data_1838a20 + x8_24)
                        *x0_11 = x21_2
                        x0_11[1] = x22_3
                        *(&data_1838a20 + x8_24) = x0_11
                        *(x0_11 + 0x10) = x9_8
                        void* x0_13 = DomDefGetSlow(zx.q(x21_2), zx.q(x22_3))
                        *(x0_11 + 8) = x0_13
                        
                        if ((*(x0_13 + 0xc8) & x19) != 0)
                            x25 = 1
                        else
                        label_bf8840:
                            int32_t x21_3 = *(*(gPregameContext + 0x20) + 0xdc)
                            
                            if (x21_3 == 0)
                                goto label_bf891c
                            
                            int32_t x22_4 = *gPregameContext
                            int32_t x8_32 = (x21_3 + (x22_4 << 0x10)) s% 0x3e5
                            int32_t* x9_10 = *(&data_1838a20 + (sx.q(x8_32) << 3))
                            
                            if (x9_10 != 0)
                                while (*x9_10 != x21_3 || x9_10[1] != x22_4)
                                    x9_10 = *(x9_10 + 0x10)
                                    
                                    if (x9_10 == 0)
                                        goto label_bf8888
                                
                                if ((*(*(x9_10 + 8) + 0xc8) & x19) == 0)
                                    goto label_bf891c
                                
                                x25 = 1
                            else
                            label_bf8888:
                                DomDefGetSlow(zx.q(x21_3), zx.q(x22_4))
                                int32_t* x0_16 = malloc(0x18)
                                int64_t x8_33 = sx.q(x8_32) << 3
                                int64_t x9_11 = *(&data_1838a20 + x8_33)
                                *x0_16 = x21_3
                                x0_16[1] = x22_4
                                *(&data_1838a20 + x8_33) = x0_16
                                *(x0_16 + 0x10) = x9_11
                                void* x0_18 = DomDefGetSlow(zx.q(x21_3), zx.q(x22_4))
                                *(x0_16 + 8) = x0_18
                                
                                if ((*(x0_18 + 0xc8) & x19) == 0)
                                    goto label_bf891c
                                
                                x25 = 1

return zx.q(x25) & 1
