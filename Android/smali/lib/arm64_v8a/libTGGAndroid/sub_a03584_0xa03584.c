// 函数: sub_a03584
// 地址: 0xa03584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 2) * -0x5555555555555555
int32_t x8_3

if (x8_2 u> 5)
    void* x21_1 = &arg1[3]
    sub_a03110(arg1, arg1 + 0xc, x21_1)
    void* x8_10 = arg1 + 0x24
    int32_t x9_22
    
    if (x8_10 == arg2)
    label_a03864:
        x9_22 = 1
    else
        int64_t x9_6 = 0
        int32_t x10_3 = 0
        
        while (true)
            int64_t x11_3 = *x8_10
            int32_t x14_1 = *x21_1
            uint32_t x13_2 = (x11_3 u>> 0x20).d
            int32_t x12_3
            
            if (x11_3.d == x14_1)
                x12_3 = x13_2 s< *(x21_1 + 4) ? 1 : 0
            else
                x12_3 = x11_3.d s< x14_1 ? 1 : 0
            
            if (x12_3 == 1)
                int32_t x12_4 = *(x8_10 + 8)
                int64_t x14_3 = x9_6
                void* x13_1
                
                while (true)
                    void* x15_1 = arg1 + x14_3
                    int32_t x17_1 = *(x15_1 + 0x20)
                    *(x15_1 + 0x24) = *(x15_1 + 0x18)
                    *(x15_1 + 0x2c) = x17_1
                    
                    if (x14_3 == -0x18)
                        x13_1 = arg1
                        break
                    
                    uint64_t x15_2 = zx.q(*(x15_1 + 0xc))
                    x14_3 -= 0xc
                    int32_t x15_4
                    
                    if (x11_3.d == x15_2.d)
                        x15_4 = x13_2 s< *(x15_2 + 0x10) ? 1 : 0
                    else
                        x15_4 = x11_3.d s< x15_2.d ? 1 : 0
                    
                    if ((x15_4 & 1) == 0)
                        x13_1 = arg1 + x14_3 + 0x24
                        break
                
                x10_3 += 1
                *x13_1 = x11_3
                *(x13_1 + 8) = x12_4
                
                if (x10_3 == 8)
                    x9_22 = 0
                    x8_10 = zx.q(x8_10 + 0xc == arg2 ? 1 : 0)
                    break
            
            x21_1 = x8_10
            x8_10 += 0xc
            x9_6 += 0xc
            
            if (x8_10 == arg2)
                goto label_a03864
    
    x8_3 = x9_22 | x8_10.d
else
    x8_3 = 1
    
    switch (x8_2)
        case 2
            int64_t x8_4 = *(arg2 - 0xc)
            int32_t x10_2 = *arg1
            int32_t x8_6
            
            if (x8_4.d == x10_2)
                x8_6 = (x8_4 u>> 0x20).d s< *(arg1 + 4) ? 1 : 0
            else
                x8_6 = x8_4.d s< x10_2 ? 1 : 0
            
            if (x8_6 != 1)
                x8_3 = 1
            else
                int32_t x8_7 = arg1[1].d
                int64_t x9_3 = *arg1
                arg1[1].d = *(arg2 - 4)
                *arg1 = *(arg2 - 0xc)
                *(arg2 - 4) = x8_7
                *(arg2 - 0xc) = x9_3
                x8_3 = 1
        case 3
            sub_a03110(arg1, arg1 + 0xc, arg2 - 0xc)
            x8_3 = 1
        case 4
            sub_a03110(arg1, arg1 + 0xc, &arg1[3])
            int64_t x8_11 = *(arg2 - 0xc)
            int32_t x10_4 = arg1[3].d
            int32_t x8_13
            
            if (x8_11.d == x10_4)
                x8_13 = (x8_11 u>> 0x20).d s< *(arg1 + 0x1c) ? 1 : 0
            else
                x8_13 = x8_11.d s< x10_4 ? 1 : 0
            
            if (x8_13 != 1)
                x8_3 = 1
            else
                int32_t x8_14 = arg1[4].d
                int64_t x9_9 = arg1[3]
                arg1[4].d = *(arg2 - 4)
                arg1[3] = *(arg2 - 0xc)
                *(arg2 - 4) = x8_14
                *(arg2 - 0xc) = x9_9
                int32_t x10_5 = arg1[3].d
                int32_t x11_5 = *(arg1 + 0xc)
                int32_t x8_19
                
                if (x10_5 == x11_5)
                    x8_19 = *(arg1 + 0x1c) s< arg1[2].d ? 1 : 0
                else
                    x8_19 = x10_5 s< x11_5 ? 1 : 0
                
                if (x8_19 != 1)
                    x8_3 = 1
                else
                    int32_t x8_20 = *(arg1 + 0x14)
                    int64_t x9_14 = *(arg1 + 0xc)
                    int64_t x9_15 = arg1[3]
                    *(arg1 + 0x14) = arg1[4].d
                    *(arg1 + 0xc) = x9_15
                    arg1[4].d = x8_20
                    arg1[3] = x9_14
                    int32_t x10_6 = *(arg1 + 0xc)
                    int32_t x11_6 = *arg1
                    int32_t x8_25
                    
                    if (x10_6 == x11_6)
                        x8_25 = arg1[2].d s< *(arg1 + 4) ? 1 : 0
                    else
                        x8_25 = x10_6 s< x11_6 ? 1 : 0
                    
                    if (x8_25 != 1)
                        x8_3 = 1
                    else
                        int32_t x8_26 = arg1[1].d
                        int64_t x9_19 = *arg1
                        arg1[1].d = *(arg1 + 0x14)
                        *arg1 = *(arg1 + 0xc)
                        *(arg1 + 0x14) = x8_26
                        *(arg1 + 0xc) = x9_19
                        x8_3 = 1
        case 5
            sub_a032cc(arg1, arg1 + 0xc, &arg1[3], arg1 + 0x24, arg2 - 0xc)
            x8_3 = 1

return zx.q(x8_3) & 1
