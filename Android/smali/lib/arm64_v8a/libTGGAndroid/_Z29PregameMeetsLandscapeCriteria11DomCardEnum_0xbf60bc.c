// 函数: _Z29PregameMeetsLandscapeCriteria11DomCardEnum
// 地址: 0xbf60bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(gPregameContext + 0x28)

if (*(gPregameContext + 8) s< *(x22 + 0xbcc))
    int32_t x20_1 = *gPregameContext
    int32_t x8_5 = (arg1 + (x20_1 << 0x10)) s% 0x3e5
    int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_5) << 3))
    int32_t x19_1 = arg1
    
    if (x9_1 != 0)
        while (*x9_1 != x19_1 || x9_1[1] != x20_1)
            x9_1 = *(x9_1 + 0x10)
            
            if (x9_1 == 0)
                goto label_bf6134
        
        if ((zx.d(*(*(x9_1 + 8) + 0xc9)) & 4) == 0)
            goto label_bf61b4
        
        goto label_bf61a4
    
label_bf6134:
    DomDefGetSlow(zx.q(x19_1), zx.q(x20_1))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_6 = sx.q(x8_5) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_6)
    *x0_1 = x19_1
    x0_1[1] = x20_1
    *(&data_1838a20 + x8_6) = x0_1
    *(x0_1 + 0x10) = x9_2
    void* x0_3 = DomDefGetSlow(zx.q(x19_1), zx.q(x20_1))
    *(x0_1 + 8) = x0_3
    
    if ((zx.d(*(x0_3 + 0xc9)) & 4) != 0)
    label_bf61a4:
        
        if (PregameCountExistingLandscapes(0x400) s< *(x22 + 0xbd4))
            goto label_bf61b4
    else
    label_bf61b4:
        int32_t x20_2 = *gPregameContext
        int32_t x8_14 = (x19_1 + (x20_2 << 0x10)) s% 0x3e5
        int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_14) << 3))
        
        if (x9_4 != 0)
            while (*x9_4 != x19_1 || x9_4[1] != x20_2)
                x9_4 = *(x9_4 + 0x10)
                
                if (x9_4 == 0)
                    goto label_bf61f4
            
            if ((zx.d(*(*(x9_4 + 8) + 0xcb)) & 0x20) == 0)
                goto label_bf6274
            
            goto label_bf6264
        
    label_bf61f4:
        DomDefGetSlow(zx.q(x19_1), zx.q(x20_2))
        int32_t* x0_7 = malloc(0x18)
        int64_t x8_15 = sx.q(x8_14) << 3
        int64_t x9_5 = *(&data_1838a20 + x8_15)
        *x0_7 = x19_1
        x0_7[1] = x20_2
        *(&data_1838a20 + x8_15) = x0_7
        *(x0_7 + 0x10) = x9_5
        void* x0_9 = DomDefGetSlow(zx.q(x19_1), zx.q(x20_2))
        *(x0_7 + 8) = x0_9
        
        if ((zx.d(*(x0_9 + 0xcb)) & 0x20) != 0)
        label_bf6264:
            
            if (PregameCountExistingLandscapes(0x20000000) s< *(x22 + 0xbdc))
                goto label_bf6274
        else
        label_bf6274:
            int32_t x20_3 = *gPregameContext
            int32_t x8_23 = (x19_1 + (x20_3 << 0x10)) s% 0x3e5
            int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_23) << 3))
            
            if (x9_7 != 0)
                while (*x9_7 != x19_1 || x9_7[1] != x20_3)
                    x9_7 = *(x9_7 + 0x10)
                    
                    if (x9_7 == 0)
                        goto label_bf62b4
                
                if ((zx.d(*(*(x9_7 + 8) + 0xcb)) & 8) == 0)
                    goto label_bf6334
                
                goto label_bf6324
            
        label_bf62b4:
            DomDefGetSlow(zx.q(x19_1), zx.q(x20_3))
            int32_t* x0_13 = malloc(0x18)
            int64_t x8_24 = sx.q(x8_23) << 3
            int64_t x9_8 = *(&data_1838a20 + x8_24)
            *x0_13 = x19_1
            x0_13[1] = x20_3
            *(&data_1838a20 + x8_24) = x0_13
            *(x0_13 + 0x10) = x9_8
            void* x0_15 = DomDefGetSlow(zx.q(x19_1), zx.q(x20_3))
            *(x0_13 + 8) = x0_15
            
            if ((zx.d(*(x0_15 + 0xcb)) & 8) != 0)
            label_bf6324:
                
                if (PregameCountExistingLandscapes(0x8000000) s< *(x22 + 0xbe4))
                    goto label_bf6334
            else
            label_bf6334:
                int32_t x20_4 = *gPregameContext
                int32_t x8_32 = (x19_1 + (x20_4 << 0x10)) s% 0x3e5
                int32_t* x9_10 = *(&data_1838a20 + (sx.q(x8_32) << 3))
                
                if (x9_10 != 0)
                    while (*x9_10 != x19_1 || x9_10[1] != x20_4)
                        x9_10 = *(x9_10 + 0x10)
                        
                        if (x9_10 == 0)
                            goto label_bf6374
                    
                    if ((zx.d(*(*(x9_10 + 8) + 0xcb)) & 0x10) != 0)
                        goto label_bf63b4
                    
                    goto label_bf63f4
                
            label_bf6374:
                DomDefGetSlow(zx.q(x19_1), zx.q(x20_4))
                int32_t* x0_19 = malloc(0x18)
                int64_t x8_33 = sx.q(x8_32) << 3
                int64_t x9_11 = *(&data_1838a20 + x8_33)
                *x0_19 = x19_1
                x0_19[1] = x20_4
                *(&data_1838a20 + x8_33) = x0_19
                *(x0_19 + 0x10) = x9_11
                void* x0_21 = DomDefGetSlow(zx.q(x19_1), zx.q(x20_4))
                *(x0_19 + 8) = x0_21
                
                if ((zx.d(*(x0_21 + 0xcb)) & 0x10) == 0)
                label_bf63f4:
                    int32_t x20_5 = *gPregameContext
                    int32_t x8_41 = (x19_1 + (x20_5 << 0x10)) s% 0x3e5
                    int32_t* x9_13 = *(&data_1838a20 + (sx.q(x8_41) << 3))
                    
                    if (x9_13 != 0)
                        while (*x9_13 != x19_1 || x9_13[1] != x20_5)
                            x9_13 = *(x9_13 + 0x10)
                            
                            if (x9_13 == 0)
                                goto label_bf6434
                        
                        if ((zx.d(*(*(x9_13 + 8) + 0xcd)) & 1) == 0)
                            return 1
                    else
                    label_bf6434:
                        DomDefGetSlow(zx.q(x19_1), zx.q(x20_5))
                        int32_t* x0_25 = malloc(0x18)
                        int64_t x8_42 = sx.q(x8_41) << 3
                        int64_t x9_14 = *(&data_1838a20 + x8_42)
                        *x0_25 = x19_1
                        x0_25[1] = x20_5
                        *(&data_1838a20 + x8_42) = x0_25
                        *(x0_25 + 0x10) = x9_14
                        void* x0_27 = DomDefGetSlow(zx.q(x19_1), zx.q(x20_5))
                        *(x0_25 + 8) = x0_27
                        
                        if ((zx.d(*(x0_27 + 0xcd)) & 1) == 0)
                            return 1
                    
                    if (PregameCountExistingLandscapes(0x10000000000) s< *(x22 + 0xbf4))
                        return 1
                else
                label_bf63b4:
                    
                    if (PregameCountExistingLandscapes(0x10000000) s< *(x22 + 0xbec))
                        goto label_bf63f4

return 0
