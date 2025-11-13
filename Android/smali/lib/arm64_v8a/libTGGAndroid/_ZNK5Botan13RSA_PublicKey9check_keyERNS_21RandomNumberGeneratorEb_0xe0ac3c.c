// 函数: _ZNK5Botan13RSA_PublicKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xe0ac3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9_4 = *(arg1 + 8)

if (x9_4[4].d != 0)
    int64_t i_4 = x9_4[3]
    
    if (i_4 == -1)
        int64_t x10_1 = *x9_4
        int64_t x12_1 = x9_4[1]
        int64_t x11_1 = x12_1 - x10_1
        
        if (x12_1 == x10_1)
            i_4 = 0
            x9_4[3] = 0
        else
            int64_t x13_1
            
            x13_1 = x11_1 s>= 0 ? x11_1 : -1
            
            int64_t x12_2 = x10_1 - x12_1
            int64_t x13_2
            
            x13_2 = x13_1 s< 1 ? x13_1 : 1
            
            i_4 = x11_1 s>> 2
            int64_t x11_2
            
            x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
            
            int64_t i_6 = x13_2 * (x11_2 u>> 2)
            uint64_t x12_3 = 1
            int64_t i
            
            do
                int32_t x13_3 = *(x10_1 - 4 + (i_6 << 2))
                i = i_6
                i_6 -= 1
                x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
                i_4 -= x12_3
            while (i != 1)
            x9_4[3] = i_4
            
            if (i_4 u> 1)
                goto label_e0ad24
        
    label_e0acd8:
        
        if (i_4 != 0)
            int32_t* x9 = *x9_4
            int32_t x10_3 = 0
            int64_t i_1
            
            do
                int32_t x12_4 = *x9
                x9 = &x9[1]
                i_1 = i_4
                i_4 -= 1
                int32_t x12_6 = (((x12_4 ^ 0x23) - 1) & not.d(x12_4)) s>> 0x1f
                x10_3 = (x10_3 & x12_6)
                    | ((((x12_4 - 0x23) & not.d(x12_4)) s>> 0x1f | 1) & not.d(x12_6))
            while (i_1 != 1)
            
            if ((x10_3 & 0x80000000) == 0)
                goto label_e0ad24
    else
        if (i_4 u<= 1)
            goto label_e0acd8
        
    label_e0ad24:
        int64_t* x9_1 = *(arg1 + 8)
        char* x8_1 = *x9_1
        
        if (x9_1[1] != x8_1 && (zx.d(*x8_1) & 1) != 0 && x9_1[9].d != 0)
            int64_t i_5 = x9_1[8]
            
            if (i_5 == -1)
                int64_t x10_6 = x9_1[5]
                int64_t x12_7 = x9_1[6]
                int64_t x11_4 = x12_7 - x10_6
                
                if (x12_7 == x10_6)
                    i_5 = 0
                else
                    int64_t x13_10
                    
                    x13_10 = x11_4 s>= 0 ? x11_4 : -1
                    
                    int64_t x12_8 = x10_6 - x12_7
                    int64_t x13_11
                    
                    x13_11 = x13_10 s< 1 ? x13_10 : 1
                    
                    i_5 = x11_4 s>> 2
                    int64_t x11_5
                    
                    x11_5 = x12_8 s> x11_4 ? x12_8 : x11_4
                    
                    int64_t i_7 = x13_11 * (x11_5 u>> 2)
                    uint64_t x12_9 = 1
                    int64_t i_2
                    
                    do
                        int32_t x13_12 = *(x10_6 - 4 + (i_7 << 2))
                        i_2 = i_7
                        i_7 -= 1
                        x12_9 = zx.q(x12_9.d) & zx.q(((x13_12 - 1) & not.d(x13_12)) s>> 0x1f)
                        i_5 -= x12_9
                    while (i_2 != 1)
                
                x9_1[8] = i_5
                
                if (i_5 u> 1)
                    goto label_e0ae10
                
                goto label_e0adc8
            
            if (i_5 u<= 1)
            label_e0adc8:
                
                if (i_5 != 0)
                    int32_t* x9_2 = x9_1[5]
                    int32_t x10_8 = 0
                    int64_t i_3
                    
                    do
                        int32_t x11_7 = *x9_2
                        x9_2 = &x9_2[1]
                        i_3 = i_5
                        i_5 -= 1
                        int32_t x11_9 = (((x11_7 ^ 3) - 1) & not.d(x11_7)) s>> 0x1f
                        x10_8 = (x10_8 & x11_9)
                            | ((((x11_7 - 3) & not.d(x11_7)) s>> 0x1f | 1) & not.d(x11_9))
                    while (i_3 != 1)
                    
                    if ((x10_8 & 0x80000000) == 0)
                        goto label_e0ae10
            else
            label_e0ae10:
                void* x8_4 = *(arg1 + 8)
                char* x8_5 = *(x8_4 + 0x28)
                
                if (*(x8_4 + 0x30) != x8_5 && (zx.d(*x8_5) & 1) != 0)
                    return 1

return 0
