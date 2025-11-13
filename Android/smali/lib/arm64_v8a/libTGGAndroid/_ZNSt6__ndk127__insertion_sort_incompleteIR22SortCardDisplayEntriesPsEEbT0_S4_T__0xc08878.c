// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIR22SortCardDisplayEntriesPsEEbT0_S4_T_
// 地址: 0xc08878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 1
char x8_2

if (x8_1 u> 5)
    int16_t* x22_1 = &arg1[2]
    int16_t x9_2 =
        std::__ndk1::__sort3<SortCardDisplayEntries&, int16_t*>(arg1, &arg1[1], x22_1, arg3)
    void* x8_4 = &arg1[3]
    char x8_9
    
    if (x8_4 == arg2)
    label_c08a18:
        x8_9 = 1
    else
        int64_t x24_1 = 0
        int32_t x25_1 = 0
        
        while (true)
            *x22_1
            x22_1 = x8_4
            int32_t x0_4
            x0_4, x9_2 = SortCardDisplayEntries::operator()(arg3.w, *x8_4)
            
            if ((x0_4 & 1) != 0)
                int16_t x23_1 = *x22_1
                int64_t x26_1 = x24_1
                int32_t x0_6
                
                do
                    void* x8_6 = arg1 + x26_1
                    x9_2 = *(x8_6 + 4)
                    *(x8_6 + 6) = x9_2
                    
                    if (x26_1 == -4)
                        x25_1 += 1
                        *arg1 = x23_1
                        
                        if (x25_1 == 8)
                            goto label_c089ac
                        
                        goto label_c08934
                    
                    *(x8_6 + 2)
                    x0_6, x9_2 = SortCardDisplayEntries::operator()(arg3.w, x23_1)
                    x26_1 -= 2
                while ((x0_6 & 1) != 0)
                x25_1 += 1
                *(arg1 + x26_1 + 6) = x23_1
                
                if (x25_1 == 8)
                label_c089ac:
                    x8_9 = 0
                    x9_2 = (&x22_1[1] == arg2 ? 1 : 0).w
                    break
            
        label_c08934:
            x8_4 = &x22_1[1]
            x24_1 += 2
            
            if (x8_4 == arg2)
                goto label_c08a18
    
    x8_2 = x8_9 | x9_2.b
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            *arg1
            
            if ((SortCardDisplayEntries::operator()(arg3.w, arg2[-1]) & 1) == 0)
                x8_2 = 1
            else
                int16_t x9_1 = *arg1
                *arg1 = arg2[-1]
                arg2[-1] = x9_1
                x8_2 = 1
        case 3
            std::__ndk1::__sort3<SortCardDisplayEntries&, int16_t*>(arg1, &arg1[1], arg2 - 2, arg3)
            x8_2 = 1
        case 4
            std::__ndk1::__sort4<SortCardDisplayEntries&, int16_t*>(arg1, &arg1[1], &arg1[2], 
                arg2 - 2, arg3)
            x8_2 = 1
        case 5
            sub_c08780(arg1, &arg1[1], &arg1[2], &arg1[3], arg2 - 2, arg3)
            x8_2 = 1

return x8_2 & 1
