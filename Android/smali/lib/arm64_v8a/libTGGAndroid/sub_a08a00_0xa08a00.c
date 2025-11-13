// 函数: sub_a08a00
// 地址: 0xa08a00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
int32_t* x19 = arg1

while (true)
    int32_t* x22_1 = x19
    
    while (true)
    label_a08a48:
        int64_t x8_1 = x20 - x22_1
        int64_t x9_2 = (x8_1 s>> 2) * -0x5555555555555555
        x19 = x22_1
        int64_t var_70_15
        int32_t var_68_15
        void* x20_1
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    x20_1 = x20 - 0xc
                    
                    if (*x20_1 s< *x19)
                    label_a09098:
                        var_68_15 = x19[2]
                        var_70_15 = *x19
                        int64_t x9_58 = *x20_1
                        x19[2] = *(x20_1 + 8)
                        *x19 = x9_58
                        *(x20_1 + 8) = var_68_15
                        *x20_1 = var_70_15
                case 3
                    int32_t x9_56 = x19[3]
                    x20_1 = x20 - 0xc
                    int32_t x10_16 = *x20_1
                    
                    if (x9_56 s< *x19)
                        if (x10_16 s< x9_56)
                            goto label_a09098
                        
                        int32_t x9_88 = x19[2]
                        int64_t x10_35 = *x19
                        int64_t x10_36 = *(x19 + 0xc)
                        x19[2] = x19[5]
                        *x19 = x10_36
                        x19[5] = x9_88
                        *(x19 + 0xc) = x10_35
                        
                        if (*x20_1 s< x19[3])
                            var_68_15 = x19[5]
                            var_70_15 = *(x19 + 0xc)
                            int64_t x10_40 = *x20_1
                            x19[5] = *(x20_1 + 8)
                            *(x19 + 0xc) = x10_40
                            *(x20_1 + 8) = var_68_15
                            *x20_1 = var_70_15
                    else if (x10_16 s< x9_56)
                        int32_t x9_81 = x19[5]
                        int64_t x10_21 = *(x19 + 0xc)
                        int64_t x10_22 = *x20_1
                        x19[5] = *(x20_1 + 8)
                        *(x19 + 0xc) = x10_22
                        *(x20_1 + 8) = x9_81
                        *x20_1 = x10_21
                        
                        if (x19[3] s< *x19)
                            int32_t x9_85 = x19[2]
                            int64_t x10_25 = *x19
                            int64_t x10_26 = *(x19 + 0xc)
                            x19[2] = x19[5]
                            *x19 = x10_26
                            x19[5] = x9_85
                            *(x19 + 0xc) = x10_25
                case 4
                    return sub_a094c8(x19, &x19[3], &x19[6], x20 - 0xc) __tailcall
                case 5
                    sub_a094c8(x19, &x19[3], &x19[6], &x19[9])
                    
                    if (*(x20 - 0xc) s< x19[9])
                        int32_t x8_63 = x19[0xb]
                        int64_t x9_62 = *(x19 + 0x24)
                        int64_t x9_63 = *(x20 - 0xc)
                        x19[0xb] = *(x20 - 4)
                        *(x19 + 0x24) = x9_63
                        *(x20 - 4) = x8_63
                        *(x20 - 0xc) = x9_62
                        
                        if (x19[9] s< x19[6])
                            int32_t x8_67 = x19[8]
                            int64_t x9_66 = *(x19 + 0x18)
                            int64_t x9_67 = *(x19 + 0x24)
                            x19[8] = x19[0xb]
                            *(x19 + 0x18) = x9_67
                            x19[0xb] = x8_67
                            *(x19 + 0x24) = x9_66
                            
                            if (x19[6] s< x19[3])
                                int32_t x8_71 = x19[5]
                                int64_t x9_70 = *(x19 + 0xc)
                                int64_t x9_71 = *(x19 + 0x18)
                                x19[5] = x19[8]
                                *(x19 + 0xc) = x9_71
                                x19[8] = x8_71
                                *(x19 + 0x18) = x9_70
                                
                                if (x19[3] s< *x19)
                                    int32_t x8_75 = x19[2]
                                    int64_t x9_74 = *x19
                                    int64_t x9_75 = *(x19 + 0xc)
                                    x19[2] = x19[5]
                                    *x19 = x9_75
                                    x19[5] = x8_75
                                    *(x19 + 0xc) = x9_74
        else if (x8_1 s<= 0x173)
            void* x8_79 = &x19[6]
            int32_t x10_18 = *x8_79
            int32_t x12_1 = x19[3]
            int32_t x11_13 = *x19
            
            if (x12_1 s>= x11_13)
                if (x10_18 s< x12_1)
                    int32_t x10_28 = x19[5]
                    int64_t x12_2 = *(x19 + 0xc)
                    int64_t x12_3 = *x8_79
                    x19[5] = *(x8_79 + 8)
                    *(x19 + 0xc) = x12_3
                    *(x8_79 + 8) = x10_28
                    *x8_79 = x12_2
                    
                    if (x19[3] s< x11_13)
                        int32_t x10_32 = x19[2]
                        int64_t x11_14 = *x19
                        int64_t x11_15 = *(x19 + 0xc)
                        x19[2] = x19[5]
                        *x19 = x11_15
                        x19[5] = x10_32
                        *(x19 + 0xc) = x11_14
            else
                int64_t var_70_20
                int32_t var_68_20
                
                if (x10_18 s>= x12_1)
                    int32_t x11_17 = x19[2]
                    int64_t x12_5 = *x19
                    int64_t x12_6 = *(x19 + 0xc)
                    x19[2] = x19[5]
                    *x19 = x12_6
                    x19[5] = x11_17
                    *(x19 + 0xc) = x12_5
                    
                    if (x10_18 s< x19[3])
                        var_68_20 = x19[5]
                        var_70_20 = *(x19 + 0xc)
                        int64_t x11_22 = *x8_79
                        x19[5] = *(x8_79 + 8)
                        *(x19 + 0xc) = x11_22
                        *(x8_79 + 8) = var_68_20
                        *x8_79 = var_70_20
                else
                    var_68_20 = x19[2]
                    var_70_20 = *x19
                    int64_t x10_20 = *x8_79
                    x19[2] = *(x8_79 + 8)
                    *x19 = x10_20
                    *(x8_79 + 8) = var_68_20
                    *x8_79 = var_70_20
            
            void* x9_95 = &x19[9]
            
            if (x9_95 != x20)
                int64_t x10_44 = 0
                
                do
                    int64_t x11_23 = *x9_95
                    
                    if (x11_23.d s< *x8_79)
                        int32_t x8_81 = *(x9_95 + 8)
                        int64_t x12_9 = x10_44
                        void* x12_8
                        
                        while (true)
                            void* x13_1 = x19 + x12_9
                            int32_t x15_1 = *(x13_1 + 0x20)
                            *(x13_1 + 0x24) = *(x13_1 + 0x18)
                            *(x13_1 + 0x2c) = x15_1
                            
                            if (x12_9 == -0x18)
                                x12_8 = x19
                                break
                            
                            x12_9 -= 0xc
                            
                            if (x11_23.d s>= *(x13_1 + 0xc))
                                x12_8 = x19 + x12_9 + 0x24
                                break
                        
                        *x12_8 = x11_23
                        *(x12_8 + 8) = x8_81
                    
                    x8_79 = x9_95
                    x9_95 += 0xc
                    x10_44 += 0xc
                while (x9_95 != x20)
        else
            int32_t i
            int32_t x10_1
            int32_t* x22_2
            
            if (x8_1 s>= 0x2ed5)
                x22_2 = x19 + x8_1 u/ 0x18 * 0xc
                int32_t* x23_1 = &x19[x8_1 u/ 0x30 * 3]
                int32_t* x24_1 = &x22_2[x8_1 u/ 0x30 * 3]
                arg1 = sub_a094c8(x19, x23_1, x22_2, x24_1)
                
                if (*(x20 - 0xc) s>= *x24_1)
                    goto label_a08d9c
                
                int32_t x8_7 = x24_1[2]
                int64_t x9_5 = *x24_1
                int64_t x9_6 = *(x20 - 0xc)
                x24_1[2] = *(x20 - 4)
                *x24_1 = x9_6
                *(x20 - 4) = x8_7
                *(x20 - 0xc) = x9_5
                
                if (*x24_1 s>= *x22_2)
                    arg1 = zx.q(arg1.d + 1)
                    i = *x19
                    x10_1 = *x22_2
                    
                    if (i s< x10_1)
                        goto label_a08dac
                    
                    goto label_a08ddc
                
                int32_t x8_11 = x22_2[2]
                int64_t x9_9 = *x22_2
                int64_t x9_10 = *x24_1
                x22_2[2] = x24_1[2]
                *x22_2 = x9_10
                x24_1[2] = x8_11
                *x24_1 = x9_9
                
                if (*x22_2 s>= *x23_1)
                    arg1 = zx.q(arg1.d + 2)
                    i = *x19
                    x10_1 = *x22_2
                    
                    if (i s< x10_1)
                        goto label_a08dac
                    
                    goto label_a08ddc
                
                int32_t x8_15 = x23_1[2]
                int64_t x9_13 = *x23_1
                int64_t x9_14 = *x22_2
                x23_1[2] = x22_2[2]
                *x23_1 = x9_14
                x22_2[2] = x8_15
                *x22_2 = x9_13
                
                if (*x23_1 s>= *x19)
                    arg1 = zx.q(arg1.d + 3)
                    i = *x19
                    x10_1 = *x22_2
                    
                    if (i s< x10_1)
                        goto label_a08dac
                    
                    goto label_a08ddc
                
                int32_t x8_19 = x19[2]
                int64_t x9_17 = *x19
                arg1 = zx.q(arg1.d + 4)
                int64_t x9_18 = *x23_1
                x19[2] = x23_1[2]
                *x19 = x9_18
                x23_1[2] = x8_19
                *x23_1 = x9_17
                i = *x19
                x10_1 = *x22_2
                
                if (i s< x10_1)
                    goto label_a08dac
                
                goto label_a08ddc
            
            x22_2 = x19 + zx.q((x8_1.d & 0xffff) u/ 0x18) * 0xc
            int32_t x8_25 = *x22_2
            
            if (x8_25 s< *x19)
                if (*(x20 - 0xc) s< x8_25)
                    int32_t x8_26 = x19[2]
                    int64_t x9_22 = *x19
                    arg1 = 1
                    int64_t x9_23 = *(x20 - 0xc)
                    x19[2] = *(x20 - 4)
                    *x19 = x9_23
                    *(x20 - 4) = x8_26
                    *(x20 - 0xc) = x9_22
                    i = *x19
                    x10_1 = *x22_2
                    
                    if (i s< x10_1)
                        goto label_a08dac
                    
                    goto label_a08ddc
                
                int32_t x8_36 = x19[2]
                int64_t x9_33 = *x19
                int64_t x9_34 = *x22_2
                x19[2] = x22_2[2]
                *x19 = x9_34
                x22_2[2] = x8_36
                *x22_2 = x9_33
                
                if (*(x20 - 0xc) s< (x9_33.d & 0xffffffff))
                    int32_t x8_40 = x22_2[2]
                    int64_t x9_37 = *x22_2
                    int64_t x9_38 = *(x20 - 0xc)
                    x22_2[2] = *(x20 - 4)
                    *x22_2 = x9_38
                    *(x20 - 4) = x8_40
                    *(x20 - 0xc) = x9_37
                    goto label_a08d38
                
                arg1 = 1
            label_a08d9c:
                i = *x19
                x10_1 = *x22_2
                
                if (i s>= x10_1)
                    goto label_a08ddc
                
                goto label_a08dac
            
            if (*(x20 - 0xc) s< x8_25)
                int32_t x8_29 = x22_2[2]
                int64_t x9_26 = *x22_2
                int64_t x9_27 = *(x20 - 0xc)
                x22_2[2] = *(x20 - 4)
                *x22_2 = x9_27
                *(x20 - 4) = x8_29
                *(x20 - 0xc) = x9_26
                
                if (*x22_2 s>= *x19)
                    arg1 = 1
                    i = *x19
                    x10_1 = *x22_2
                    
                    if (i s< x10_1)
                        goto label_a08dac
                    
                    goto label_a08ddc
                
                int32_t x8_33 = x19[2]
                int64_t x9_30 = *x19
                int64_t x9_31 = *x22_2
                x19[2] = x22_2[2]
                *x19 = x9_31
                x22_2[2] = x8_33
                *x22_2 = x9_30
            label_a08d38:
                arg1 = 2
                i = *x19
                x10_1 = *x22_2
                
                if (i s< x10_1)
                    goto label_a08dac
                
                goto label_a08ddc
            
            arg1 = 0
            i = *x19
            x10_1 = *x22_2
            void* x8_44
            void* x23_2
            
            if (i s>= x10_1)
            label_a08ddc:
                int32_t* x8_43 = x20 - 0x18
                int32_t x11_1
                
                do
                    if (x19 == x8_43)
                        void* x8_53 = &x19[3]
                        
                        if (i s>= *(x20 - 0xc))
                            if (x8_53 == x20 - 0xc)
                                goto label_a094c4
                            
                            x8_53 = &x19[6]
                            
                            while (i s>= *(x8_53 - 0xc))
                                x8_53 += 0xc
                                
                                if (x20 == x8_53)
                                    return 
                            
                            int32_t x9_51 = *(x8_53 - 4)
                            int64_t x10_9 = *(x8_53 - 0xc)
                            int64_t x10_10 = *(x20 - 0xc)
                            *(x8_53 - 4) = *(x20 - 4)
                            *(x8_53 - 0xc) = x10_10
                            *(x20 - 4) = x9_51
                            *(x20 - 0xc) = x10_9
                        
                        if (x8_53 == x20 - 0xc)
                            goto label_a094c4
                        
                        int32_t* x9_54 = x20 - 0xc
                        
                        while (true)
                            int32_t i_1 = *x19
                            x22_1 = x8_53 - 0xc
                            
                            do
                                x22_1 = &x22_1[3]
                            while (i_1 s>= *x22_1)
                            
                            x8_53 = &x22_1[3]
                            
                            do
                                x9_54 = &x9_54[-3]
                            while (i_1 s< *x9_54)
                            
                            if (x22_1 u>= x9_54)
                                break
                            
                            int32_t x10_12 = x22_1[2]
                            int64_t x11_8 = *x22_1
                            int64_t x11_9 = *x9_54
                            x22_1[2] = x9_54[2]
                            *x22_1 = x11_9
                            x9_54[2] = x10_12
                            *x9_54 = x11_8
                        
                        goto label_a08a48
                    
                    x11_1 = *x8_43
                    x8_43 = &x8_43[-3]
                while (x11_1 s>= x10_1)
                int32_t x9_40 = x19[2]
                int64_t x10_2 = *x19
                arg1 = zx.q(arg1.d + 1)
                x8_44 = &x8_43[3]
                int32_t x10_3 = *(x8_44 + 8)
                *x19 = *x8_44
                x19[2] = x10_3
                *(x8_44 + 8) = x9_40
                *x8_44 = x10_2
                x23_2 = &x19[3]
                
                if (x23_2 u>= x8_44)
                    goto label_a08dbc
                
                goto label_a08e34
            
        label_a08dac:
            x8_44 = x20 - 0xc
            x23_2 = &x19[3]
            
            if (x23_2 u< x8_44)
            label_a08e34:
                void* x9_43
                
                while (true)
                    int32_t i_2 = *x22_2
                    x9_43 = x23_2 - 0xc
                    
                    do
                        x9_43 += 0xc
                    while (*x9_43 s< i_2)
                    
                    x23_2 = x9_43 + 0xc
                    
                    do
                        x8_44 -= 0xc
                    while (*x8_44 s>= i_2)
                    
                    if (x9_43 u> x8_44)
                        break
                    
                    int32_t x10_5 = *(x9_43 + 8)
                    int64_t x11_4 = *x9_43
                    arg1 = zx.q(arg1.d + 1)
                    int64_t x11_5 = *x8_44
                    
                    if (x22_2 == x9_43)
                        x22_2 = x8_44
                    
                    *(x9_43 + 8) = *(x8_44 + 8)
                    *x9_43 = x11_5
                    *(x8_44 + 8) = x10_5
                    *x8_44 = x11_4
                
                x23_2 = x9_43
                
                if (x23_2 != x22_2)
                    goto label_a08eb4
            else
            label_a08dbc:
                
                if (x23_2 != x22_2)
                label_a08eb4:
                    
                    if (*x22_2 s< *x23_2)
                        int32_t x8_46 = *(x23_2 + 8)
                        int64_t x9_45 = *x23_2
                        arg1 = zx.q(arg1.d + 1)
                        int64_t x9_46 = *x22_2
                        *(x23_2 + 8) = x22_2[2]
                        *x23_2 = x9_46
                        x22_2[2] = x8_46
                        *x22_2 = x9_45
            
            if (arg1.d != 0)
            label_a08f34:
                
                if (((x23_2 - x19) s>> 2) * -0x5555555555555555
                        s>= ((x20 - x23_2) s>> 2) * -0x5555555555555555)
                    sub_a08a00(x23_2 + 0xc, x20)
                    x20 = x23_2
                    break
                
                sub_a08a00(x19, x23_2)
                x22_1 = x23_2 + 0xc
                continue
            else
                int32_t x0_2 = sub_a09734(x19, x23_2)
                x22_1 = x23_2 + 0xc
                
                if ((sub_a09734(x22_1, x20).d & 1) != 0)
                    x20 = x23_2
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_a08f34
                    
                    continue
    label_a094c4:
        return 
