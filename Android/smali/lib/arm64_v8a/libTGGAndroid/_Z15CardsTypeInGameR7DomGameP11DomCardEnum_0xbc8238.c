// 函数: _Z15CardsTypeInGameR7DomGameP11DomCardEnum
// 地址: 0xbc8238
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t j_3

if (*(arg1 + 0x1528) s< 2)
    j_3 = 0
else
    j_3 = 0
    int32_t i = 1
    
    do
        int32_t x25_1 = i & 0xffff
        
        if (x25_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x25_2 = *(arg1 + mulu.dp.d(x25_1, 0x68) + 0x1a70)
        int32_t x26_1 = *(arg1 + 0xd50)
        int32_t x8_8 = (x25_2 + (x26_1 << 0x10)) s% 0x3e5
        int32_t* x9_8 = *(&data_1838a20 + (sx.q(x8_8) << 3))
        
        if (x9_8 != 0)
            while (*x9_8 != x25_2 || x9_8[1] != x26_1)
                x9_8 = *(x9_8 + 0x10)
                
                if (x9_8 == 0)
                    goto label_bc8350
            
            if ((*(*(x9_8 + 8) + 0xc8) & 0x9407f000400) == 0)
                goto label_bc83c4
        else
        label_bc8350:
            DomDefGetSlow(zx.q(x25_2), zx.q(x26_1))
            int32_t* x0_3 = malloc(0x18)
            int64_t x8_9 = sx.q(x8_8) << 3
            int64_t x9_9 = *(&data_1838a20 + x8_9)
            *x0_3 = x25_2
            x0_3[1] = x26_1
            *(&data_1838a20 + x8_9) = x0_3
            *(x0_3 + 0x10) = x9_9
            void* x0_5 = DomDefGetSlow(zx.q(x25_2), zx.q(x26_1))
            *(x0_3 + 8) = x0_5
            
            if ((*(x0_5 + 0xc8) & 0x9407f000400) == 0)
            label_bc83c4:
                int32_t x26_2 = *(arg1 + 0xd50)
                int32_t x8_13 = (x25_2 + (x26_2 << 0x10)) s% 0x3e5
                int32_t* x9_14 = *(&data_1838a20 + (sx.q(x8_13) << 3))
                void* x0_10
                
                if (x9_14 != 0)
                    while (*x9_14 != x25_2 || x9_14[1] != x26_2)
                        x9_14 = *(x9_14 + 0x10)
                        
                        if (x9_14 == 0)
                            goto label_bc83f8
                    
                    x0_10 = *(x9_14 + 8)
                else
                label_bc83f8:
                    DomDefGetSlow(zx.q(x25_2), zx.q(x26_2))
                    int32_t* x0_8 = malloc(0x18)
                    int64_t x8_14 = sx.q(x8_13) << 3
                    int64_t x9_15 = *(&data_1838a20 + x8_14)
                    *x0_8 = x25_2
                    x0_8[1] = x26_2
                    *(&data_1838a20 + x8_14) = x0_8
                    *(x0_8 + 0x10) = x9_15
                    x0_10 = DomDefGetSlow(zx.q(x25_2), zx.q(x26_2))
                    *(x0_8 + 8) = x0_10
                
                if ((*(x0_10 + 0xc8) & 0x1000003000000) == 0)
                    uint64_t j_2
                    
                    if (j_3 s<= 0)
                        j_2 = sx.q(j_3)
                    else
                        DomCardEnum* x9_16 = arg2
                        j_2 = zx.q(j_3)
                        uint64_t j_1 = j_2
                        uint64_t j
                        
                        do
                            if (*x9_16 == x25_2)
                                goto label_bc82a8
                            
                            j = j_1
                            j_1 -= 1
                            x9_16 += 4
                        while (j != 1)
                    
                    j_3 += 1
                    *(arg2 + (j_2 << 2)) = x25_2
        
    label_bc82a8:
        i += 1
    while (i s< *(arg1 + 0x1528))

return zx.q(j_3)
