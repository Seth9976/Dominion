// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRPFbiiEPiEEbT0_S5_T_
// 地址: 0xc9d534
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 2
char x8_2

if (x8_1 u> 5)
    int32_t x0_7 = (*arg3)(zx.q(arg1[1]), zx.q(*arg1))
    int32_t* x23_2 = &arg1[2]
    int32_t x0_9
    int32_t x9_4
    int128_t v0_1
    x0_9, x9_4, v0_1 = (*arg3)(zx.q(*x23_2), zx.q(arg1[1]))
    
    if ((x0_7 & 1) != 0)
        int32_t x1_6 = *arg1
        
        if ((x0_9 & 1) == 0)
            uint64_t x0_26 = zx.q(arg1[2])
            *arg1 = arg1[1]
            arg1[1] = x1_6
            int32_t x0_27
            int128_t v0_8
            x0_27, x9_4, v0_8 = (*arg3)(x0_26)
            
            if ((x0_27 & 1) != 0)
                v0_8.q = *(arg1 + 4)
                *(arg1 + 4) = vrev64_s32(v0_8)
        else
            int32_t x8_10 = arg1[2]
            arg1[2] = x1_6
            *arg1 = x8_10
    else if ((x0_9 & 1) != 0)
        v0_1.q = *(arg1 + 4)
        uint64_t x1_14 = zx.q(*arg1)
        *(arg1 + 4) = vrev64_s32(v0_1)
        int32_t x0_23
        int128_t v0_6
        x0_23, x9_4, v0_6 = (*arg3)(zx.q(v0_1:4.d), x1_14)
        
        if ((x0_23 & 1) != 0)
            v0_6.q = *arg1
            *arg1 = vrev64_s32(v0_6)
    
    void* x8_25 = &arg1[3]
    char x8_30
    
    if (x8_25 == arg2)
    label_c9d860:
        x8_30 = 1
    else
        int64_t x24_2 = 0
        int32_t x25_1 = 0
        
        while (true)
            uint64_t x1_15 = zx.q(*x23_2)
            x23_2 = x8_25
            int32_t x0_29
            x0_29, x9_4 = (*arg3)(zx.q(*x23_2), x1_15)
            
            if ((x0_29 & 1) != 0)
                int32_t x22_4 = *x23_2
                int64_t x26_1 = x24_2
                int32_t x0_31
                
                do
                    void* x8_27 = arg1 + x26_1
                    x9_4 = *(x8_27 + 8)
                    *(x8_27 + 0xc) = x9_4
                    
                    if (x26_1 == -8)
                        x25_1 += 1
                        *arg1 = x22_4
                        
                        if (x25_1 == 8)
                            goto label_c9d854
                        
                        goto label_c9d7dc
                    
                    x0_31, x9_4 = (*arg3)(zx.q(x22_4), zx.q(*(x8_27 + 4)))
                    x26_1 -= 4
                while ((x0_31 & 1) != 0)
                x25_1 += 1
                *(arg1 + x26_1 + 0xc) = x22_4
                
                if (x25_1 == 8)
                label_c9d854:
                    x8_30 = 0
                    x9_4 = &x23_2[1] == arg2 ? 1 : 0
                    break
            
        label_c9d7dc:
            x8_25 = &x23_2[1]
            x24_2 += 4
            
            if (x8_25 == arg2)
                goto label_c9d860
    
    x8_2 = x8_30 | x9_4.b
else
    x8_2 = 1
    int32_t x9_1
    int128_t v0_4
    
    switch (x8_1)
        case 2
            if (((*arg3)(zx.q(arg2[-1]), zx.q(*arg1)) & 1) == 0)
                x8_2 = 1
            else
                x9_1 = *arg1
                *arg1 = arg2[-1]
                arg2[-1] = x9_1
                x8_2 = 1
        case 3
            int32_t x0_3 = (*arg3)(zx.q(arg1[1]), zx.q(*arg1))
            int32_t x0_5 = (*arg3)(zx.q(arg2[-1]), zx.q(arg1[1]))
            
            if ((x0_3 & 1) != 0)
                int32_t x1_3 = *arg1
                
                if ((x0_5 & 1) == 0)
                    *arg1 = arg1[1]
                    arg1[1] = x1_3
                    
                    if (((*arg3)(zx.q(arg2[-1])) & 1) == 0)
                        x8_2 = 1
                    else
                        x9_1 = arg1[1]
                        arg1[1] = arg2[-1]
                        arg2[-1] = x9_1
                        x8_2 = 1
                else
                    *arg1 = arg2[-1]
                    arg2[-1] = x1_3
                    x8_2 = 1
            else if ((x0_5 & 1) == 0)
                x8_2 = 1
            else
                int32_t x9_6 = arg1[1]
                arg1[1] = arg2[-1]
                arg2[-1] = x9_6
                int32_t x0_21
                x0_21, v0_4 = (*arg3)(zx.q(arg1[1]), zx.q(*arg1))
                
                if ((x0_21 & 1) == 0)
                    x8_2 = 1
                else
                label_c9d710:
                    v0_4.q = *arg1
                    x8_2 = 1
                    *arg1 = vrev64_s32(v0_4)
        case 4
            std::__ndk1::__sort4<bool (*&)(int32_t, int32_t), int32_t*>(arg1, &arg1[1], &arg1[2], 
                arg2 - 4, arg3)
            x8_2 = 1
        case 5
            std::__ndk1::__sort4<bool (*&)(int32_t, int32_t), int32_t*>(arg1, &arg1[1], &arg1[2], 
                &arg1[3], arg3)
            
            if (((*arg3)(zx.q(arg2[-1]), zx.q(arg1[3])) & 1) == 0)
                x8_2 = 1
            else
                int32_t x9_5 = arg1[3]
                arg1[3] = arg2[-1]
                arg2[-1] = x9_5
                int32_t x0_15
                int128_t v0_2
                x0_15, v0_2 = (*arg3)(zx.q(arg1[3]), zx.q(arg1[2]))
                
                if ((x0_15 & 1) == 0)
                    x8_2 = 1
                else
                    v0_2.q = *(arg1 + 8)
                    *(arg1 + 8) = vrev64_s32(v0_2)
                    int32_t x0_17
                    int128_t v0_3
                    x0_17, v0_3 = (*arg3)(zx.q(v0_2:4.d), zx.q(arg1[1]))
                    
                    if ((x0_17 & 1) == 0)
                        x8_2 = 1
                    else
                        v0_3.q = *(arg1 + 4)
                        uint64_t x1_12 = zx.q(*arg1)
                        *(arg1 + 4) = vrev64_s32(v0_3)
                        int32_t x0_19
                        x0_19, v0_4 = (*arg3)(zx.q(v0_3:4.d), x1_12)
                        
                        if ((x0_19 & 1) != 0)
                            goto label_c9d710
                        
                        x8_2 = 1

return x8_2 & 1
