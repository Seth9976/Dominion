// 函数: sub_c0575c
// 地址: 0xc0575c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x20 = arg2
uint64_t x21 = arg1

while (true)
    void* x23_1 = x21
    
    while (true)
    label_c0578c:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 2
        x21 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    if ((sub_c05bc0(arg3, x20[-1], *x21).d & 1) != 0)
                        int32_t x9_9 = *x21
                        *x21 = x20[-1]
                        x20[-1] = x9_9
                case 3
                    return sub_c05ce8(x21, x21 + 4, x20 - 4, arg3) __tailcall
                case 4
                    return sub_c05dfc(x21, x21 + 4, x21 + 8, x20 - 4, arg3) __tailcall
                case 5
                    return sub_c05ec4(x21, x21 + 4, x21 + 8, x21 + 0xc, x20 - 4, arg3) __tailcall
        else if (x9_1 s<= 0x7b)
            int32_t* x22_2 = x21 + 8
            sub_c05ce8(x21, x21 + 4, x22_2, arg3)
            void* x8_14 = x21 + 0xc
            
            if (x8_14 != x20)
                int64_t x24_5 = 0
                
                do
                    int32_t x2_23 = *x22_2
                    x22_2 = x8_14
                    
                    if ((sub_c05bc0(arg3, *x8_14, x2_23).d & 1) != 0)
                        int32_t x23_3 = *x22_2
                        int64_t x25_3 = x24_5
                        uint64_t x8_15
                        
                        while (true)
                            void* x8_16 = x21 + x25_3
                            *(x8_16 + 0xc) = *(x8_16 + 8)
                            
                            if (x25_3 == -8)
                                x8_15 = x21
                                break
                            
                            x25_3 -= 4
                            
                            if ((sub_c05bc0(arg3, x23_3, *(x8_16 + 4)).d & 1) == 0)
                                x8_15 = x21 + x25_3 + 0xc
                                break
                        
                        *x8_15 = x23_3
                    
                    x8_14 = &x22_2[1]
                    x24_5 += 4
                while (x8_14 != x20)
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            int32_t* x23_2 = x21 + (x10_1 << 1 & 0xfffffffffffffffc)
            int32_t x0_1
            
            if (x9_1 s< 0xf9d)
                x0_1 = sub_c05ce8(x21, x23_2, x20 - 4, arg3)
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_3 = x8_2 & 0xfffffffffffffffc
                x0_1 = sub_c05ec4(x21, x21 + x8_3, x23_2, x23_2 + x8_3, x20 - 4, arg3)
            
            int32_t x24_1 = x0_1
            int32_t* x25_1
            int32_t* x27_1
            
            if ((sub_c05bc0(arg3, *x21, *x23_2) & 1) == 0)
                void* x27_2 = x20 - 8
                int32_t x0_6
                
                do
                    if (x21 == x27_2)
                        int32_t* x24_3 = x21
                        void* x24_4 = &x24_3[1]
                        
                        if ((sub_c05bc0(arg3, *x24_3, *(x20 - 4)).d & 1) == 0)
                            if (x24_4 == x20 - 4)
                                goto label_c05a68
                            
                            x24_4 = x21 + 8
                            
                            while ((sub_c05bc0(arg3, *x21, *(x24_4 - 4)).d & 1) == 0)
                                x24_4 += 4
                                
                                if (x20 == x24_4)
                                    return 
                            
                            int32_t x9_7 = *(x24_4 - 4)
                            *(x24_4 - 4) = *(x20 - 4)
                            *(x20 - 4) = x9_7
                        
                        if (x24_4 == x20 - 4)
                            goto label_c05a68
                        
                        int32_t* x25_2 = x20 - 4
                        
                        while (true)
                            x23_1 = x24_4 - 4
                            int32_t x0_20
                            
                            do
                                x23_1 += 4
                                x0_20 = sub_c05bc0(arg3, *x21, *x23_1)
                            while ((x0_20 & 1) == 0)
                            x24_4 = x23_1 + 4
                            
                            do
                                x25_2 = &x25_2[-1]
                                arg1 = sub_c05bc0(arg3, *x21, *x25_2)
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x25_2)
                                break
                            
                            int32_t x9_8 = *x23_1
                            *x23_1 = *x25_2
                            *x25_2 = x9_8
                        
                        goto label_c0578c
                    
                    int32_t x1_3 = *x27_2
                    x27_2 -= 4
                    x0_6 = sub_c05bc0(arg3, x1_3, *x23_2)
                while ((x0_6 & 1) == 0)
                int32_t x8_4 = *x21
                x27_1 = x27_2 + 4
                x24_1 += 1
                *x21 = *x27_1
                *x27_1 = x8_4
                x25_1 = x21 + 4
                
                if (x25_1 u>= x27_1)
                    goto label_c05830
                
                goto label_c0587c
            
            x27_1 = x20 - 4
            x25_1 = x21 + 4
            
            if (x25_1 u< x27_1)
            label_c0587c:
                void* x28_1
                
                while (true)
                    x28_1 = x25_1 - 4
                    int32_t x0_8
                    
                    do
                        x28_1 += 4
                        x0_8 = sub_c05bc0(arg3, *x28_1, *x23_2)
                    while ((x0_8 & 1) != 0)
                    x25_1 = x28_1 + 4
                    int32_t x0_10
                    
                    do
                        x27_1 = &x27_1[-1]
                        x0_10 = sub_c05bc0(arg3, *x27_1, *x23_2)
                    while ((x0_10 & 1) == 0)
                    
                    if (x28_1 u> x27_1)
                        break
                    
                    int32_t x9_4 = *x28_1
                    x24_1 += 1
                    *x28_1 = *x27_1
                    *x27_1 = x9_4
                    
                    if (x23_2 == x28_1)
                        x23_2 = x27_1
                
                x25_1 = x28_1
                
                if (x25_1 != x23_2)
                    goto label_c058ec
            else
            label_c05830:
                
                if (x25_1 != x23_2)
                label_c058ec:
                    
                    if ((sub_c05bc0(arg3, *x23_2, *x25_1) & 1) != 0)
                        int32_t x9_5 = *x25_1
                        x24_1 += 1
                        *x25_1 = *x23_2
                        *x23_2 = x9_5
            
            if (x24_1 != 0)
            label_c05944:
                
                if (x25_1 - x21 s>= x20 - x25_1)
                    sub_c0575c(&x25_1[1], x20, arg3)
                    x20 = x25_1
                    break
                
                sub_c0575c(x21, x25_1, arg3)
                x23_1 = &x25_1[1]
                continue
            else
                int32_t x0_14 = sub_c05fbc(x21, x25_1, arg3)
                x23_1 = &x25_1[1]
                
                if ((sub_c05fbc(x23_1, x20, arg3).d & 1) != 0)
                    x20 = x25_1
                    
                    if ((x0_14 & 1) == 0)
                        break
                else
                    if ((x0_14 & 1) == 0)
                        goto label_c05944
                    
                    continue
        
    label_c05a68:
        return 
