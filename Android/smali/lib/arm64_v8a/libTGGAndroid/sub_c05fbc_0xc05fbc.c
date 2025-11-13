// 函数: sub_c05fbc
// 地址: 0xc05fbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 2
int32_t x8_2

if (x8_1 u> 5)
    void* x22_1 = &arg1[2]
    int32_t x9_2 = sub_c05ce8(arg1, &arg1[1], x22_1, arg3)
    void* x8_4 = &arg1[3]
    int32_t x8_9
    
    if (x8_4 == arg2)
    label_c0615c:
        x8_9 = 1
    else
        int64_t x24_1 = 0
        int32_t x25_1 = 0
        
        while (true)
            int32_t x2_2 = *x22_1
            x22_1 = x8_4
            int32_t x0_4
            x0_4, x9_2 = sub_c05bc0(arg3, *x8_4, x2_2)
            
            if ((x0_4 & 1) != 0)
                int32_t x23_1 = *x22_1
                int64_t x26_1 = x24_1
                int32_t x0_6
                
                do
                    void* x8_6 = arg1 + x26_1
                    x9_2 = *(x8_6 + 8)
                    *(x8_6 + 0xc) = x9_2
                    
                    if (x26_1 == -8)
                        x25_1 += 1
                        *arg1 = x23_1
                        
                        if (x25_1 == 8)
                            goto label_c060f0
                        
                        goto label_c06078
                    
                    x0_6, x9_2 = sub_c05bc0(arg3, x23_1, *(x8_6 + 4))
                    x26_1 -= 4
                while ((x0_6 & 1) != 0)
                x25_1 += 1
                *(arg1 + x26_1 + 0xc) = x23_1
                
                if (x25_1 == 8)
                label_c060f0:
                    x8_9 = 0
                    x9_2 = x22_1 + 4 == arg2 ? 1 : 0
                    break
            
        label_c06078:
            x8_4 = x22_1 + 4
            x24_1 += 4
            
            if (x8_4 == arg2)
                goto label_c0615c
    
    x8_2 = x8_9 | x9_2
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            if ((sub_c05bc0(arg3, *(arg2 - 4), *arg1) & 1) == 0)
                x8_2 = 1
            else
                int32_t x9_1 = *arg1
                *arg1 = *(arg2 - 4)
                *(arg2 - 4) = x9_1
                x8_2 = 1
        case 3
            sub_c05ce8(arg1, &arg1[1], arg2 - 4, arg3)
            x8_2 = 1
        case 4
            sub_c05dfc(arg1, &arg1[1], &arg1[2], arg2 - 4, arg3)
            x8_2 = 1
        case 5
            sub_c05ec4(arg1, &arg1[1], &arg1[2], &arg1[3], arg2 - 4, arg3)
            x8_2 = 1

return zx.q(x8_2) & 1
