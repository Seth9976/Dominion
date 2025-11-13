// 函数: _Z14GetCurrentSets9DomSetTabi12DomExpansioniP19DomExpansionEditionP13DomKingdomSeti
// 地址: 0xb414d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_2 = arg3
int32_t x21
void* var_100

if (arg1 != 1)
    int32_t x0_5 = DomSetsGet(&var_100)
    x21 = 0
    
    if (arg7 != 0 && x0_5 s>= 1)
        void* x8_5 = var_100
        int32_t x9_2 = arg2 << 2
        uint64_t x10_2 = zx.q(x0_5)
        
        if (arg4 s<= 0)
            int32_t x14_1 = 0
            x21 = 0
            int64_t x13_1 = 1
            
            while (true)
                int64_t x15_1 = sx.q(*(x8_5 + 0x4c))
                
                if (x15_1.d u>= 0x19)
                    break
                
                if (*(&data_801cdc + (x15_1 << 2)) == i_2)
                label_b417fc:
                    
                    if (x15_1.d == 0)
                        bool cond:2_1 = x14_1 s< x9_2
                        x14_1 += 1
                        
                        if (not(cond:2_1))
                            void* x15_2 = arg6 + (sx.q(x21) << 4)
                            x21 += 1
                            *x15_2 = 1
                            *(x15_2 + 8) = x8_5
                else
                    int64_t x16_3 = sx.q(*(x8_5 + 0x50))
                    
                    if (x16_3.d u>= 0x19)
                        break
                    
                    if (*(&data_801cdc + (x16_3 << 2)) == i_2)
                        goto label_b417fc
                    
                    int64_t x16_5 = sx.q(*(x8_5 + 0x54))
                    
                    if (x16_5.d u> 0x18)
                        break
                    
                    if (*(&data_801cdc + (x16_5 << 2)) == i_2)
                        goto label_b417fc
                
                if (x21 == arg7)
                    return zx.q(x21)
                
                bool cond:4_1 = x13_1 u< x10_2
                x13_1 += 1
                x8_5 += 0x68
                
                if (not(cond:4_1))
                    return zx.q(x21)
        else
            int64_t x11_2 = 0
            int32_t x16_1 = 0
            x21 = 0
            uint64_t x12_1 = zx.q(arg4)
            
            while (true)
                int64_t x17_2 = sx.q(*(x8_5 + x11_2 * 0x68 + 0x4c))
                
                if (x17_2.d u> 0x18)
                    break
                
                if (*(&data_801cdc + (x17_2 << 2)) == i_2)
                label_b41674:
                    
                    if (x17_2.d == 0)
                    label_b41724:
                        bool cond:3_1 = x16_1 s< x9_2
                        x16_1 += 1
                        
                        if (not(cond:3_1))
                            void* x0_15 = arg6 + (sx.q(x21) << 4)
                            x21 += 1
                            *x0_15 = 1
                            *(x0_15 + 8) = x8_5 + x11_2 * 0x68
                    else
                        int32_t x0_13 = *arg5
                        int64_t x1_1
                        
                        if (x0_13 != x17_2.d)
                            int64_t x2 = 1
                            
                            do
                                x1_1 = x2
                                
                                if (x12_1 == x2)
                                    break
                                
                                x2 = x1_1 + 1
                            while (*(arg5 + (x1_1 << 2)) != x17_2.d)
                        
                        if (x0_13 == x17_2.d || x1_1 u< x12_1)
                            int32_t i = *(x8_5 + x11_2 * 0x68 + 0x50)
                            
                            if (i == 0)
                                goto label_b41724
                            
                            int64_t x1_2
                            
                            if (x0_13 != i)
                                int64_t x2_2 = 1
                                
                                do
                                    x1_2 = x2_2
                                    
                                    if (x12_1 == x2_2)
                                        break
                                    
                                    x2_2 = x1_2 + 1
                                while (*(arg5 + (x1_2 << 2)) != i)
                            
                            if (x0_13 == i || x1_2 u< x12_1)
                                int32_t i_1 = *(x8_5 + x11_2 * 0x68 + 0x54)
                                
                                if (i_1 == 0 || x0_13 == i_1)
                                    goto label_b41724
                                
                                int64_t x1_3 = 1
                                int64_t x0_14
                                
                                do
                                    x0_14 = x1_3
                                    
                                    if (x12_1 == x1_3)
                                        break
                                    
                                    x1_3 = x0_14 + 1
                                while (*(arg5 + (x0_14 << 2)) != i_1)
                                
                                if (x0_14 u< x12_1)
                                    goto label_b41724
                else
                    int64_t x0_8 = sx.q(*(x8_5 + x11_2 * 0x68 + 0x50))
                    
                    if (x0_8.d u>= 0x19)
                        break
                    
                    if (*(&data_801cdc + (x0_8 << 2)) == i_2)
                        goto label_b41674
                    
                    int64_t x0_11 = sx.q(*(x8_5 + x11_2 * 0x68 + 0x54))
                    
                    if (x0_11.d u> 0x18)
                        break
                    
                    if (*(&data_801cdc + (x0_11 << 2)) == i_2)
                        goto label_b41674
                
                if (x21 == arg7)
                    return zx.q(x21)
                
                x11_2 += 1
                
                if (x11_2 u>= x10_2)
                    return zx.q(x21)
        
        pthread_kill(pthread_self(), 6)
        int32_t x0_18
        int32_t x1_5
        x0_18, x1_5 = XNoReturn()
        return SetGalleryFirstPage(x0_18, x1_5) __tailcall
else
    uint64_t x23 = zx.q(*(GetActiveProfile() + 0x7558))
    
    if (x23.d s< 1)
        x21 = 0
    else
        int32_t x24_1 = arg7 * arg2
        
        if (i_2 == 0)
            x21 = 0
            
            do
                GetActiveProfile()
                
                if (i_2 s>= x24_1)
                    void* x8_6 = arg6 + (sx.q(x21) << 4)
                    x21 += 1
                    *x8_6 = 0
                    *(x8_6 + 8) = i_2
                
                if (x21 == arg7)
                    break
                
                i_2 += 1
            while (i_2 s< x23.d)
        else
            int64_t x25_1 = 0
            int32_t x26_1 = 0
            x21 = 0
            
            do
                int32_t x0_3 = DomExpansionsFromBitset(
                    zx.q(*(GetActiveProfile() + x25_1 * 0x18 + 0x6f68)), &var_100)
                
                if (x0_3 s> 0)
                    int64_t x8_4
                    uint64_t x9_1
                    
                    if (var_100.d != i_2)
                        x9_1 = zx.q(x0_3)
                        x8_4 = 0
                        int32_t x11_1
                        
                        do
                            if (x9_1 - 1 == x8_4)
                                goto label_b41540
                            
                            x11_1 = *(&var_100:4 + (x8_4 << 2))
                            x8_4 += 1
                        while (x11_1 != i_2)
                    
                    if (var_100.d == i_2 || x8_4 u< x9_1)
                        if (x26_1 s>= x24_1)
                            void* x8_3 = arg6 + (sx.q(x21) << 4)
                            x21 += 1
                            *x8_3 = 0
                            *(x8_3 + 8) = x25_1.d
                        
                        if (x21 == arg7)
                            x21 = arg7
                            break
                        
                        x26_1 += 1
                
            label_b41540:
                x25_1 += 1
            while (x25_1 != x23)
return zx.q(x21)
