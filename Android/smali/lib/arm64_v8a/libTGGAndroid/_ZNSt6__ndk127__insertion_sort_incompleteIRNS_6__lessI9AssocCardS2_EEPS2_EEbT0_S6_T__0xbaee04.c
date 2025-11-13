// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessI9AssocCardS2_EEPS2_EEbT0_S6_T_
// 地址: 0xbaee04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 3) * -0x5555555555555555
char x8_3

if (x8_2 u> 5)
    AssocCard* x21_1 = arg1 + 0x30
    int32_t x9_5
    int128_t v0_1
    x9_5, v0_1 = std::__ndk1::__sort3<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(arg1, 
        arg1 + 0x18, x21_1, arg3)
    void* __offset(AssocCard, 0x18) x10_2 = arg1 + 0x48
    char x8_7
    
    if (x10_2 == arg2)
    label_baf03c:
        x8_7 = 1
    else
        int64_t x8_6 = 0
        x9_5 = 0
        
        while (true)
            AssocCard* x14_1 = x21_1
            x21_1 = x10_2
            int32_t x10_3 = *x10_2
            int32_t x11_2 = *x14_1
            int64_t x11_3
            
            if (x10_3 s< x11_2)
                x11_3 = *(x21_1 + 8)
            label_baef34:
                int32_t x13_1 = *(x21_1 + 4)
                int64_t x15_2 = *(x14_1 + 0x10)
                int64_t x12_1 = *(x21_1 + 0x10)
                *x21_1 = *x14_1
                *(x21_1 + 0x10) = x15_2
                AssocCard* x15_1
                
                if (x14_1 == arg1)
                    x15_1 = arg1
                else
                    int64_t x14_2 = x8_6
                    
                    while (true)
                        void* x15_4 = arg1 + x14_2 + 0x18
                        int32_t x16_2 = *x15_4
                        
                        if (x10_3 s>= x16_2)
                            if (x10_3 s> x16_2)
                            label_baefb8:
                                x15_1 = arg1 + x14_2 + 0x30
                                x14_1 = x15_1
                                break
                            
                            int64_t x16_4 = *(arg1 + x14_2 + 0x20)
                            
                            if (x11_3 u>= x16_4
                                    && (x11_3 u> x16_4 || x12_1 u>= *(arg1 + x14_2 + 0x28)))
                                goto label_baefb8
                        
                        v0_1 = *x15_4
                        x14_2 -= 0x18
                        *(x15_4 + 0x28) = *(x15_4 + 0x10)
                        *(x15_4 + 0x18) = v0_1
                        
                        if (x14_2 == -0x30)
                            x15_1 = arg1
                            x14_1 = arg1
                            break
                
                x9_5 += 1
                *x15_1 = x10_3
                *(x14_1 + 4) = x13_1
                *(x15_1 + 8) = x11_3
                *(x15_1 + 0x10) = x12_1
                
                if (x9_5 == 8)
                    x8_7 = 0
                    x9_5 = x21_1 + 0x18 == arg2 ? 1 : 0
                    break
            else if (x10_3 s<= x11_2)
                x11_3 = *(x21_1 + 8)
                int64_t x12_2 = *(x14_1 + 8)
                
                if (x11_3 u< x12_2)
                    goto label_baef34
                
                if (x11_3 u<= x12_2 && *(x21_1 + 0x10) u< *(x14_1 + 0x10))
                    goto label_baef34
            x10_2 = x21_1 + 0x18
            x8_6 += 0x18
            
            if (x10_2 == arg2)
                goto label_baf03c
    
    x8_3 = x8_7 | x9_5.b
else
    x8_3 = 1
    
    switch (x8_2)
        case 2
            int32_t x9_1 = *(arg2 - 0x18)
            int32_t x10_1 = *arg1
            int64_t x9_7
            int64_t x10_4
            
            if (x9_1 s>= x10_1 && x9_1 s<= x10_1)
                x9_7 = *(arg2 - 0x10)
                x10_4 = *(arg1 + 8)
            
            if (x9_1 s< x10_1 || (x9_1 s<= x10_1
                    && (x9_7 u< x10_4 || (x9_7 u<= x10_4 && *(arg2 - 8) u< *(arg1 + 0x10)))))
                int64_t x9_2 = *(arg1 + 0x10)
                int128_t var_40_1 = *arg1
                int128_t v0 = *(arg2 - 0x18)
                *(arg1 + 0x10) = *(arg2 - 8)
                *arg1 = v0
                *(arg2 - 8) = x9_2
                *(arg2 - 0x18) = var_40_1
                x8_3 = 1
            else
                x8_3 = 1
        case 3
            std::__ndk1::__sort3<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(arg1, 
                arg1 + 0x18, arg2 - 0x18, arg3)
            x8_3 = 1
        case 4
            std::__ndk1::__sort4<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(arg1, 
                arg1 + 0x18, arg1 + 0x30, arg2 - 0x18, arg3)
            x8_3 = 1
        case 5
            sub_baec00(arg1, arg1 + 0x18, arg1 + 0x30, arg1 + 0x48, arg2 - 0x18, arg3)
            x8_3 = 1

return x8_3 & 1
