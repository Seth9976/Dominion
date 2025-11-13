// 函数: _ZNSt6__ndk16__sortIR22SortCardDisplayEntriesPsEEvT0_S4_T_
// 地址: 0xc07f38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* x20 = arg2
int16_t* x21 = arg1

while (true)
    void* x23_1 = x21
    
    while (true)
    label_c07f68:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 1
        x21 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    *x21
                    
                    if ((SortCardDisplayEntries::operator()(arg3.w, x20[-1]).d & 1) != 0)
                        int16_t x9_9 = *x21
                        *x21 = x20[-1]
                        x20[-1] = x9_9
                case 3
                    return std::__ndk1::__sort3<SortCardDisplayEntries&, int16_t*>(x21, &x21[1], 
                        x20 - 2, arg3) __tailcall
                case 4
                    return std::__ndk1::__sort4<SortCardDisplayEntries&, int16_t*>(x21, &x21[1], 
                        &x21[2], x20 - 2, arg3) __tailcall
                case 5
                    return sub_c08780(x21, &x21[1], &x21[2], &x21[3], x20 - 2, arg3) __tailcall
        else if (x9_1 s<= 0x3d)
            void* x22_2 = &x21[2]
            std::__ndk1::__sort3<SortCardDisplayEntries&, int16_t*>(x21, &x21[1], x22_2, arg3)
            void* x8_15 = &x21[3]
            
            if (x8_15 != x20)
                int64_t x24_5 = 0
                
                do
                    *x22_2
                    x22_2 = x8_15
                    
                    if ((SortCardDisplayEntries::operator()(arg3.w, *x8_15).d & 1) != 0)
                        int16_t x23_3 = *x22_2
                        int64_t x25_3 = x24_5
                        void* x8_16
                        
                        while (true)
                            void* x8_17 = x21 + x25_3
                            *(x8_17 + 6) = *(x8_17 + 4)
                            
                            if (x25_3 == -4)
                                x8_16 = x21
                                break
                            
                            *(x8_17 + 2)
                            x25_3 -= 2
                            
                            if ((SortCardDisplayEntries::operator()(arg3.w, x23_3).d & 1) == 0)
                                x8_16 = x21 + x25_3 + 6
                                break
                        
                        *x8_16 = x23_3
                    
                    x8_15 = x22_2 + 2
                    x24_5 += 2
                while (x8_15 != x20)
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x21 + (x10_1 & 0xfffffffffffffffe)
            int32_t x0_1
            
            if (x9_1 s< 0x7cf)
                x0_1 = std::__ndk1::__sort3<SortCardDisplayEntries&, int16_t*>(x21, x23_2, x20 - 2, 
                    arg3)
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                x0_1 = sub_c08780(x21, &x21[x8_2 s>> 2], x23_2, x23_2 + (x8_2 s>> 2 << 1), x20 - 2, 
                    arg3)
            
            *x23_2
            int32_t x24_1 = x0_1
            int16_t* x25_1
            void* x27_1
            
            if ((SortCardDisplayEntries::operator()(arg3.w, *x21) & 1) == 0)
                void* x27_2 = x20 - 4
                int32_t x0_6
                
                do
                    if (x21 == x27_2)
                        int16_t* x24_3 = x21
                        void* x24_4 = &x24_3[1]
                        *(x20 - 2)
                        
                        if ((SortCardDisplayEntries::operator()(arg3.w, *x24_3).d & 1) == 0)
                            if (x24_4 == x20 - 2)
                                goto label_c08244
                            
                            x24_4 = &x21[2]
                            
                            while (true)
                                *(x24_4 - 2)
                                
                                if ((SortCardDisplayEntries::operator()(arg3.w, *x21).d & 1) != 0)
                                    break
                                
                                x24_4 += 2
                                
                                if (x20 == x24_4)
                                    return 
                            
                            int16_t x9_7 = *(x24_4 - 2)
                            *(x24_4 - 2) = *(x20 - 2)
                            *(x20 - 2) = x9_7
                        
                        if (x24_4 == x20 - 2)
                            goto label_c08244
                        
                        void* x25_2 = x20 - 2
                        
                        while (true)
                            x23_1 = x24_4 - 2
                            int32_t x0_20
                            
                            do
                                x23_1 += 2
                                *x23_1
                                x0_20 = SortCardDisplayEntries::operator()(arg3.w, *x21)
                            while ((x0_20 & 1) == 0)
                            x24_4 = x23_1 + 2
                            
                            do
                                x25_2 -= 2
                                *x25_2
                                arg1 = SortCardDisplayEntries::operator()(arg3.w, *x21)
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x25_2)
                                break
                            
                            int16_t x9_8 = *x23_1
                            *x23_1 = *x25_2
                            *x25_2 = x9_8
                        
                        goto label_c07f68
                    
                    *x23_2
                    int16_t x1_3 = *x27_2
                    x27_2 -= 2
                    x0_6 = SortCardDisplayEntries::operator()(arg3.w, x1_3)
                while ((x0_6 & 1) == 0)
                int16_t x8_5 = *x21
                x27_1 = x27_2 + 2
                x24_1 += 1
                *x21 = *x27_1
                *x27_1 = x8_5
                x25_1 = &x21[1]
                
                if (x25_1 u>= x27_1)
                    goto label_c0800c
                
                goto label_c08058
            
            x27_1 = x20 - 2
            x25_1 = &x21[1]
            
            if (x25_1 u< x27_1)
            label_c08058:
                void* x28_1
                
                while (true)
                    x28_1 = x25_1 - 2
                    int32_t x0_8
                    
                    do
                        *x23_2
                        x28_1 += 2
                        x0_8 = SortCardDisplayEntries::operator()(arg3.w, *x28_1)
                    while ((x0_8 & 1) != 0)
                    x25_1 = x28_1 + 2
                    int32_t x0_10
                    
                    do
                        x27_1 -= 2
                        *x23_2
                        x0_10 = SortCardDisplayEntries::operator()(arg3.w, *x27_1)
                    while ((x0_10 & 1) == 0)
                    
                    if (x28_1 u> x27_1)
                        break
                    
                    int16_t x9_4 = *x28_1
                    x24_1 += 1
                    *x28_1 = *x27_1
                    *x27_1 = x9_4
                    
                    if (x23_2 == x28_1)
                        x23_2 = x27_1
                
                x25_1 = x28_1
                
                if (x25_1 != x23_2)
                    goto label_c080bc
            else
            label_c0800c:
                
                if (x25_1 != x23_2)
                label_c080bc:
                    *x25_1
                    
                    if ((SortCardDisplayEntries::operator()(arg3.w, *x23_2) & 1) != 0)
                        int16_t x9_5 = *x25_1
                        x24_1 += 1
                        *x25_1 = *x23_2
                        *x23_2 = x9_5
            
            if (x24_1 != 0)
            label_c08120:
                
                if (x25_1 - x21 s>= x20 - x25_1)
                    std::__ndk1::__sort<SortCardDisplayEntries&, int16_t*>(&x25_1[1], x20, arg3)
                    x20 = x25_1
                    break
                
                std::__ndk1::__sort<SortCardDisplayEntries&, int16_t*>(x21, x25_1, arg3)
                x23_1 = &x25_1[1]
                continue
            else
                int32_t x0_14 =
                    std::__ndk1::__insertion_sort_incomplete<SortCardDisplayEntries&, int16_t*>(
                    x21, x25_1, arg3)
                x23_1 = &x25_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<SortCardDisplayEntries&, int16_t*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x25_1
                    
                    if ((x0_14 & 1) == 0)
                        break
                else
                    if ((x0_14 & 1) == 0)
                        goto label_c08120
                    
                    continue
        
    label_c08244:
        return 
