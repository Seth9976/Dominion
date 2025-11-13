// 函数: sub_a09734
// 地址: 0xa09734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 2) * -0x5555555555555555
int32_t x8_3

if (x8_2 u> 5)
    void* x8_11 = &arg1[6]
    int32_t x10_2 = *x8_11
    int32_t x12_1 = arg1[3]
    int32_t x11_2 = *arg1
    
    if (x12_1 s>= x11_2)
        if (x10_2 s< x12_1)
            int32_t x10_12 = arg1[5]
            int64_t x12_2 = *(arg1 + 0xc)
            int64_t x12_3 = *x8_11
            arg1[5] = *(x8_11 + 8)
            *(arg1 + 0xc) = x12_3
            *(x8_11 + 8) = x10_12
            *x8_11 = x12_2
            
            if (arg1[3] s< x11_2)
                int32_t x10_16 = arg1[2]
                int64_t x11_3 = *arg1
                int64_t x11_4 = *(arg1 + 0xc)
                arg1[2] = arg1[5]
                *arg1 = x11_4
                arg1[5] = x10_16
                *(arg1 + 0xc) = x11_3
    else
        int64_t var_40_2
        int32_t var_38_2
        
        if (x10_2 s>= x12_1)
            int32_t x11_6 = arg1[2]
            int64_t x12_5 = *arg1
            int64_t x12_6 = *(arg1 + 0xc)
            arg1[2] = arg1[5]
            *arg1 = x12_6
            arg1[5] = x11_6
            *(arg1 + 0xc) = x12_5
            
            if (x10_2 s< arg1[3])
                var_38_2 = arg1[5]
                var_40_2 = *(arg1 + 0xc)
                int64_t x11_11 = *x8_11
                arg1[5] = *(x8_11 + 8)
                *(arg1 + 0xc) = x11_11
                *(x8_11 + 8) = var_38_2
                *x8_11 = var_40_2
        else
            var_38_2 = arg1[2]
            var_40_2 = *arg1
            int64_t x10_4 = *x8_11
            arg1[2] = *(x8_11 + 8)
            *arg1 = x10_4
            *(x8_11 + 8) = var_38_2
            *x8_11 = var_40_2
    
    void* x9_40 = &arg1[9]
    int32_t x8_30
    
    if (x9_40 == arg2)
    label_a09be0:
        x8_30 = 1
    else
        int64_t x10_28 = 0
        int32_t x11_12 = 0
        
        while (true)
            int64_t x12_8 = *x9_40
            
            if (x12_8.d s< *x8_11)
                int32_t x8_29 = *(x9_40 + 8)
                int64_t x13_2 = x10_28
                void* x13_1
                
                while (true)
                    void* x14_1 = arg1 + x13_2
                    int32_t x16_1 = *(x14_1 + 0x20)
                    *(x14_1 + 0x24) = *(x14_1 + 0x18)
                    *(x14_1 + 0x2c) = x16_1
                    
                    if (x13_2 == -0x18)
                        x13_1 = arg1
                        break
                    
                    x13_2 -= 0xc
                    
                    if (x12_8.d s>= *(x14_1 + 0xc))
                        x13_1 = arg1 + x13_2 + 0x24
                        break
                
                x11_12 += 1
                *x13_1 = x12_8
                *(x13_1 + 8) = x8_29
                
                if (x11_12 == 8)
                    x8_30 = 0
                    x9_40 = zx.q(x9_40 + 0xc == arg2 ? 1 : 0)
                    break
            
            x8_11 = x9_40
            x9_40 += 0xc
            x10_28 += 0xc
            
            if (x9_40 == arg2)
                goto label_a09be0
    
    x8_3 = x8_30 | x9_40.d
else
    x8_3 = 1
    int64_t var_40_1
    int32_t var_38_1
    int32_t* x20_1
    
    switch (x8_2)
        case 2
            x20_1 = arg2 - 0xc
            
            if (*x20_1 s< *arg1)
            label_a097c0:
                var_38_1 = arg1[2]
                var_40_1 = *arg1
                int64_t x9_4 = *x20_1
                arg1[2] = x20_1[2]
                *arg1 = x9_4
            label_a097e0:
                x20_1[2] = var_38_1
                *x20_1 = var_40_1
                x8_3 = 1
            else
                x8_3 = 1
        case 3
            int32_t x9_2 = arg1[3]
            x20_1 = arg2 - 0xc
            int32_t x10_1 = *x20_1
            
            if (x9_2 s< *arg1)
                if (x10_1 s< x9_2)
                    goto label_a097c0
                
                int32_t x9_33 = arg1[2]
                int64_t x10_19 = *arg1
                int64_t x10_20 = *(arg1 + 0xc)
                arg1[2] = arg1[5]
                *arg1 = x10_20
                arg1[5] = x9_33
                *(arg1 + 0xc) = x10_19
                
                if (*x20_1 s< arg1[3])
                    var_38_1 = arg1[5]
                    var_40_1 = *(arg1 + 0xc)
                    int64_t x10_24 = *x20_1
                    arg1[5] = x20_1[2]
                    *(arg1 + 0xc) = x10_24
                    goto label_a097e0
                
                x8_3 = 1
            else if (x10_1 s>= x9_2)
                x8_3 = 1
            else
                int32_t x9_26 = arg1[5]
                int64_t x10_5 = *(arg1 + 0xc)
                int64_t x10_6 = *x20_1
                arg1[5] = x20_1[2]
                *(arg1 + 0xc) = x10_6
                x20_1[2] = x9_26
                *x20_1 = x10_5
                
                if (arg1[3] s>= *arg1)
                    x8_3 = 1
                else
                    int32_t x9_30 = arg1[2]
                    int64_t x10_9 = *arg1
                    int64_t x10_10 = *(arg1 + 0xc)
                    arg1[2] = arg1[5]
                    *arg1 = x10_10
                    arg1[5] = x9_30
                    *(arg1 + 0xc) = x10_9
                    x8_3 = 1
        case 4
            sub_a094c8(arg1, &arg1[3], &arg1[6], arg2 - 0xc)
            x8_3 = 1
        case 5
            sub_a094c8(arg1, &arg1[3], &arg1[6], &arg1[9])
            
            if (*(arg2 - 0xc) s>= arg1[9])
                x8_3 = 1
            else
                int32_t x8_13 = arg1[0xb]
                int64_t x9_11 = *(arg1 + 0x24)
                int64_t x9_12 = *(arg2 - 0xc)
                arg1[0xb] = *(arg2 - 4)
                *(arg1 + 0x24) = x9_12
                *(arg2 - 4) = x8_13
                *(arg2 - 0xc) = x9_11
                
                if (arg1[9] s>= arg1[6])
                    x8_3 = 1
                else
                    int32_t x8_17 = arg1[8]
                    int64_t x9_15 = *(arg1 + 0x18)
                    int64_t x9_16 = *(arg1 + 0x24)
                    arg1[8] = arg1[0xb]
                    *(arg1 + 0x18) = x9_16
                    arg1[0xb] = x8_17
                    *(arg1 + 0x24) = x9_15
                    
                    if (arg1[6] s>= arg1[3])
                        x8_3 = 1
                    else
                        int32_t x8_21 = arg1[5]
                        int64_t x9_19 = *(arg1 + 0xc)
                        int64_t x9_20 = *(arg1 + 0x18)
                        arg1[5] = arg1[8]
                        *(arg1 + 0xc) = x9_20
                        arg1[8] = x8_21
                        *(arg1 + 0x18) = x9_19
                        
                        if (arg1[3] s>= *arg1)
                            x8_3 = 1
                        else
                            int32_t x8_25 = arg1[2]
                            int64_t x9_23 = *arg1
                            int64_t x9_24 = *(arg1 + 0xc)
                            arg1[2] = arg1[5]
                            *arg1 = x9_24
                            arg1[5] = x8_25
                            *(arg1 + 0xc) = x9_23
                            x8_3 = 1

return zx.q(x8_3) & 1
