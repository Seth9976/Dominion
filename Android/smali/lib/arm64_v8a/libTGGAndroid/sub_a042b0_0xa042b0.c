// 函数: sub_a042b0
// 地址: 0xa042b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
int32_t* x19 = arg1

while (true)
    void* x22_1 = x19
    
    while (true)
    label_a042f8:
        int64_t x8_1 = x20 - x22_1
        int64_t x9_2 = (x8_1 s>> 2) * -0x5555555555555555
        x19 = x22_1
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    int64_t x8_27 = *(x20 - 0xc)
                    int32_t x10_18 = *x19
                    int32_t x8_29
                    
                    if (x8_27.d == x10_18)
                        x8_29 = (x8_27 u>> 0x20).d s< x19[1] ? 1 : 0
                    else
                        x8_29 = x8_27.d s< x10_18 ? 1 : 0
                    
                    if (x8_29 == 1)
                        int32_t x8_30 = x19[2]
                        int64_t x9_23 = *x19
                        int64_t x9_24 = *(x20 - 0xc)
                        x19[2] = *(x20 - 4)
                        *x19 = x9_24
                        *(x20 - 4) = x8_30
                        *(x20 - 0xc) = x9_23
                case 3
                    return sub_a04990(x19, &x19[3], x20 - 0xc) __tailcall
                case 4
                    sub_a04990(x19, &x19[3], &x19[6])
                    int64_t x8_34 = *(x20 - 0xc)
                    int32_t x10_20 = x19[6]
                    int32_t x8_36
                    
                    if (x8_34.d == x10_20)
                        x8_36 = (x8_34 u>> 0x20).d s< x19[7] ? 1 : 0
                    else
                        x8_36 = x8_34.d s< x10_20 ? 1 : 0
                    
                    if (x8_36 == 1)
                        int32_t x8_37 = x19[8]
                        int64_t x9_29 = *(x19 + 0x18)
                        int64_t x9_30 = *(x20 - 0xc)
                        x19[8] = *(x20 - 4)
                        *(x19 + 0x18) = x9_30
                        *(x20 - 4) = x8_37
                        *(x20 - 0xc) = x9_29
                        int32_t x10_21 = x19[6]
                        int32_t x11_21 = x19[3]
                        int32_t x8_42
                        
                        if (x10_21 == x11_21)
                            x8_42 = x19[7] s< x19[4] ? 1 : 0
                        else
                            x8_42 = x10_21 s< x11_21 ? 1 : 0
                        
                        if (x8_42 == 1)
                            int32_t x8_43 = x19[5]
                            int64_t x9_34 = *(x19 + 0xc)
                            int64_t x9_35 = *(x19 + 0x18)
                            x19[5] = x19[8]
                            *(x19 + 0xc) = x9_35
                            x19[8] = x8_43
                            *(x19 + 0x18) = x9_34
                            int32_t x10_22 = x19[3]
                            int32_t x11_22 = *x19
                            int32_t x8_48
                            
                            if (x10_22 == x11_22)
                                x8_48 = x19[4] s< x19[1] ? 1 : 0
                            else
                                x8_48 = x10_22 s< x11_22 ? 1 : 0
                            
                            if (x8_48 == 1)
                                int32_t x8_49 = x19[2]
                                int64_t x9_39 = *x19
                                int64_t x9_40 = *(x19 + 0xc)
                                x19[2] = x19[5]
                                *x19 = x9_40
                                x19[5] = x8_49
                                *(x19 + 0xc) = x9_39
                case 5
                    return sub_a04b4c(x19, &x19[3], &x19[6], &x19[9], x20 - 0xc) __tailcall
        else if (x8_1 s<= 0x173)
            int32_t* x21_3 = &x19[6]
            sub_a04990(x19, &x19[3], x21_3)
            int32_t* x8_53 = &x19[9]
            
            if (x8_53 != x20)
                int64_t x9_43 = 0
                
                do
                    int64_t x10_24 = *x8_53
                    int32_t x13_12 = *x21_3
                    uint32_t x11_25 = (x10_24 u>> 0x20).d
                    int32_t x12_18
                    
                    if (x10_24.d == x13_12)
                        x12_18 = x11_25 s< x21_3[1] ? 1 : 0
                    else
                        x12_18 = x10_24.d s< x13_12 ? 1 : 0
                    
                    if (x12_18 == 1)
                        int32_t x12_19 = x8_53[2]
                        int64_t x13_14 = x9_43
                        void* x11_24
                        
                        while (true)
                            void* x14_3 = x19 + x13_14
                            int32_t x16_1 = *(x14_3 + 0x20)
                            *(x14_3 + 0x24) = *(x14_3 + 0x18)
                            *(x14_3 + 0x2c) = x16_1
                            
                            if (x13_14 == -0x18)
                                x11_24 = x19
                                break
                            
                            uint64_t x14_4 = zx.q(*(x14_3 + 0xc))
                            x13_14 -= 0xc
                            int32_t x14_6
                            
                            if (x10_24.d == x14_4.d)
                                x14_6 = x11_25 s< *(x14_4 + 0x10) ? 1 : 0
                            else
                                x14_6 = x10_24.d s< x14_4.d ? 1 : 0
                            
                            if ((x14_6 & 1) == 0)
                                x11_24 = x19 + x13_14 + 0x24
                                break
                        
                        *x11_24 = x10_24
                        *(x11_24 + 8) = x12_19
                    
                    x21_3 = x8_53
                    x8_53 = &x8_53[3]
                    x9_43 += 0xc
                while (x8_53 != x20)
        else
            int32_t* x22_2
            
            if (x8_1 s< 0x2ed5)
                x22_2 = x19 + zx.q((x8_1.d & 0xffff) u/ 0x18) * 0xc
                arg1 = sub_a04990(x19, x22_2, x20 - 0xc)
            else
                x22_2 = x19 + x8_1 u/ 0x18 * 0xc
                arg1 = sub_a04b4c(x19, &x19[x8_1 u/ 0x30 * 3], x22_2, &x22_2[x8_1 u/ 0x30 * 3], 
                    x20 - 0xc)
            
            int32_t x10_1 = *x19
            int32_t x9_4 = x19[1]
            int32_t x12_1 = *x22_2
            int32_t x11_1 = x22_2[1]
            int32_t x8_10
            
            if (x10_1 == x12_1)
                x8_10 = x9_4 s< x11_1 ? 1 : 0
            else
                x8_10 = x10_1 s< x12_1 ? 1 : 0
            
            int32_t* x8_11
            void* x23_1
            
            if ((x8_10 & 1) == 0)
                void* x8_12 = x20 - 0x18
                int32_t i
                
                do
                    if (x19 == x8_12)
                        int32_t x11_7 = *(x20 - 0xc)
                        int32_t x11_9
                        
                        if (x10_1 == x11_7)
                            x11_9 = x9_4 s< *(x20 - 8) ? 1 : 0
                        else
                            x11_9 = x10_1 s< x11_7 ? 1 : 0
                        
                        void* x8_24 = &x19[3]
                        
                        if ((x11_9 & 1) == 0)
                            if (x8_24 == x20 - 0xc)
                                goto label_a0498c
                            
                            x8_24 = &x19[6]
                            
                            while (true)
                                int32_t x12_7 = *(x8_24 - 0xc)
                                int32_t x11_12
                                
                                if (x10_1 == x12_7)
                                    x11_12 = x9_4 s< *(x8_24 - 8) ? 1 : 0
                                else
                                    x11_12 = x10_1 s< x12_7 ? 1 : 0
                                
                                if (x11_12 == 1)
                                    break
                                
                                x8_24 += 0xc
                                
                                if (x20 == x8_24)
                                    return 
                            
                            int32_t x9_17 = *(x8_24 - 4)
                            int64_t x10_10 = *(x8_24 - 0xc)
                            int64_t x10_11 = *(x20 - 0xc)
                            *(x8_24 - 4) = *(x20 - 4)
                            *(x8_24 - 0xc) = x10_11
                            *(x20 - 4) = x9_17
                            *(x20 - 0xc) = x10_10
                        
                        if (x8_24 == x20 - 0xc)
                            goto label_a0498c
                        
                        int32_t* x9_20 = x20 - 0xc
                        
                        while (true)
                            int32_t x10_13 = *x19
                            int32_t x11_13 = x19[1]
                            x22_1 = x8_24 - 0xc
                            int32_t j
                            
                            do
                                x22_1 += 0xc
                                int64_t x8_25 = *x22_1
                                
                                if (x10_13 == x8_25.d)
                                    j = x11_13 s< (x8_25 u>> 0x20).d ? 1 : 0
                                else
                                    j = x10_13 s< x8_25.d ? 1 : 0
                            while (j != 1)
                            x8_24 = x22_1 + 0xc
                            int32_t x12_13
                            
                            do
                                x9_20 = &x9_20[-3]
                                int64_t x12_11 = *x9_20
                                
                                if (x10_13 == x12_11.d)
                                    x12_13 = x11_13 s< (x12_11 u>> 0x20).d ? 1 : 0
                                else
                                    x12_13 = x10_13 s< x12_11.d ? 1 : 0
                            while ((x12_13 & 1) != 0)
                            
                            if (x22_1 u>= x9_20)
                                break
                            
                            int32_t x10_14 = *(x22_1 + 8)
                            int64_t x11_14 = *x22_1
                            int64_t x11_15 = *x9_20
                            *(x22_1 + 8) = x9_20[2]
                            *x22_1 = x11_15
                            x9_20[2] = x10_14
                            *x9_20 = x11_14
                        
                        goto label_a042f8
                    
                    int64_t x13_2 = *x8_12
                    x8_12 -= 0xc
                    
                    if (x13_2.d == x12_1)
                        i = (x13_2 u>> 0x20).d s< x11_1 ? 1 : 0
                    else
                        i = x13_2.d s< x12_1 ? 1 : 0
                while (i != 1)
                int32_t x9_5 = x19[2]
                int64_t x10_2 = *x19
                arg1 = zx.q(arg1.d + 1)
                x8_11 = x8_12 + 0xc
                int32_t x10_3 = x8_11[2]
                *x19 = *x8_11
                x19[2] = x10_3
                x8_11[2] = x9_5
                *x8_11 = x10_2
                x23_1 = &x19[3]
                
                if (x23_1 u>= x8_11)
                    goto label_a043a4
                
                goto label_a04420
            
            x8_11 = x20 - 0xc
            x23_1 = &x19[3]
            
            if (x23_1 u< x8_11)
            label_a04420:
                void* x9_8
                
                while (true)
                    int32_t x10_5 = *x22_2
                    int32_t x11_2 = x22_2[1]
                    x9_8 = x23_1 - 0xc
                    int32_t x12_4
                    
                    do
                        x9_8 += 0xc
                        int64_t x12_2 = *x9_8
                        
                        if (x12_2.d == x10_5)
                            x12_4 = (x12_2 u>> 0x20).d s< x11_2 ? 1 : 0
                        else
                            x12_4 = x12_2.d s< x10_5 ? 1 : 0
                    while ((x12_4 & 1) != 0)
                    x23_1 = x9_8 + 0xc
                    int32_t i_1
                    
                    do
                        x8_11 = &x8_11[-3]
                        int64_t x12_5 = *x8_11
                        
                        if (x12_5.d == x10_5)
                            i_1 = (x12_5 u>> 0x20).d s< x11_2 ? 1 : 0
                        else
                            i_1 = x12_5.d s< x10_5 ? 1 : 0
                    while (i_1 != 1)
                    
                    if (x9_8 u> x8_11)
                        break
                    
                    int32_t x10_6 = *(x9_8 + 8)
                    int64_t x11_3 = *x9_8
                    arg1 = zx.q(arg1.d + 1)
                    int64_t x11_4 = *x8_11
                    
                    if (x22_2 == x9_8)
                        x22_2 = x8_11
                    
                    *(x9_8 + 8) = x8_11[2]
                    *x9_8 = x11_4
                    x8_11[2] = x10_6
                    *x8_11 = x11_3
                
                x23_1 = x9_8
                
                if (x23_1 != x22_2)
                    goto label_a044c4
            else
            label_a043a4:
                
                if (x23_1 != x22_2)
                label_a044c4:
                    int32_t x10_9 = *x22_2
                    int32_t x11_6 = *x23_1
                    int32_t x8_15
                    
                    if (x10_9 == x11_6)
                        x8_15 = x22_2[1] s< *(x23_1 + 4) ? 1 : 0
                    else
                        x8_15 = x10_9 s< x11_6 ? 1 : 0
                    
                    if (x8_15 == 1)
                        int32_t x8_16 = *(x23_1 + 8)
                        int64_t x9_11 = *x23_1
                        arg1 = zx.q(arg1.d + 1)
                        int64_t x9_12 = *x22_2
                        *(x23_1 + 8) = x22_2[2]
                        *x23_1 = x9_12
                        x22_2[2] = x8_16
                        *x22_2 = x9_11
            
            if (arg1.d != 0)
            label_a04560:
                
                if (((x23_1 - x19) s>> 2) * -0x5555555555555555
                        s>= ((x20 - x23_1) s>> 2) * -0x5555555555555555)
                    sub_a042b0(x23_1 + 0xc, x20)
                    x20 = x23_1
                    break
                
                sub_a042b0(x19, x23_1)
                x22_1 = x23_1 + 0xc
                continue
            else
                int32_t x0_3 = sub_a04e04(x19, x23_1)
                x22_1 = x23_1 + 0xc
                
                if ((sub_a04e04(x22_1, x20).d & 1) != 0)
                    x20 = x23_1
                    
                    if ((x0_3 & 1) == 0)
                        break
                else
                    if ((x0_3 & 1) == 0)
                        goto label_a04560
                    
                    continue
        
    label_a0498c:
        return 
