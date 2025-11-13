// 函数: sub_1100634
// 地址: 0x1100634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg2[2]

if ((arg5 & 1) != 0)
    if (arg1 == x8)
        goto label_11007d4
    
    int64_t x24_1 = *(arg1 + 8)
    
    if (strcmp(x24_1, *(x8 + 8)).d == 0)
        goto label_11007d4
    
    void* x8_1 = *arg2
    
    if (arg1 == x8_1)
        goto label_11006ac
    
    if (strcmp(x24_1, *(x8_1 + 8)).d != 0)
        goto label_1100714
    
    goto label_11006ac

int64_t x9_1 = *(arg1 + 8)

if (x9_1 == *(x8 + 8))
label_11007d4:
    
    if (arg2[1] == arg3 && *(arg2 + 0x34) != 1)
        *(arg2 + 0x34) = arg4
else if (x9_1 == *(*arg2 + 8))
label_11006ac:
    
    if (arg2[4] != arg3 && arg2[5] != arg3)
        arg2[7].d = arg4
        
        if (*(arg2 + 0x44) == 4)
            goto label_1100994
        
        uint64_t x8_5 = zx.q(*(arg1 + 0x14))
        
        if (x8_5.d == 0)
            *(arg2 + 0x44) = 4
        label_1100994:
            int32_t x9_10 = *(arg2 + 0x3c)
            int32_t x8_31 = arg2[8].d
            arg2[5] = arg3
            arg2[8].d = x8_31 + 1
            
            if (x9_10 == 1 && arg2[6].d == 2)
                *(arg2 + 0x4e) = 1
        else
            int32_t x22_1 = 0
            int32_t x24_2 = 0
            void* x25_1 = arg1 + 0x18
            int32_t x8_30
            
            while (true)
                *(arg2 + 0x4c) = 0
                int64_t x8_16 = *(x25_1 + 8)
                int64_t x9_7 = x8_16 s>> 8
                
                if ((x8_16.d & 1) != 0)
                    x9_7 = *(*arg3 + x9_7)
                
                int64_t* x0_4 = *x25_1
                int64_t x4_2
                
                if ((x8_16 & 2) == 0)
                    x4_2 = 2
                else
                    x4_2 = 1
                
                (*(*x0_4 + 0x28))(x0_4, arg2, arg3, arg3 + x9_7, x4_2, zx.q(arg5) & 1)
                
                if (zx.d(*(arg2 + 0x4e)) != 0)
                label_1100960:
                    
                    if ((x24_2 & 1) == 0)
                        x8_30 = 4
                        break
                    
                    x24_2 = x22_1
                else
                    if (zx.d(*(arg2 + 0x4d)) == 0)
                        goto label_11007f0
                    
                    if (zx.d(*(arg2 + 0x4c)) == 0)
                        if ((zx.d(*(arg1 + 0x10)) & 1) == 0)
                            x24_2 = x22_1
                        else
                            x24_2 = 1
                        label_11007f0:
                            x25_1 += 0x10
                            
                            if (x25_1 u>= arg1 + (x8_5 << 4) + 0x18)
                                goto label_1100960
                            
                            continue
                    else if (arg2[6].d == 1)
                        x24_2 = 1
                    else
                        x24_2 = 1
                        x22_1 = 1
                        
                        if ((zx.d(*(arg1 + 0x10)) & 2) != 0)
                            goto label_11007f0
                
                x8_30 = 3
                x22_1 = x24_2
                break
            
            *(arg2 + 0x44) = x8_30
            
            if ((x22_1 & 1) == 0)
                goto label_1100994
    else if (arg4 == 1)
        arg2[7].d = 1
else
label_1100714:
    int64_t x8_10 = *(arg1 + 0x20)
    uint64_t x24_3 = zx.q(*(arg1 + 0x14))
    int64_t x9_2 = x8_10 s>> 8
    
    if ((x8_10.d & 1) != 0)
        x9_2 = *(*arg3 + x9_2)
    
    int64_t* x0_2 = *(arg1 + 0x18)
    uint64_t x3
    
    if ((x8_10 & 2) == 0)
        x3 = 2
    else
        x3 = zx.q(arg4)
    
    (*(*x0_2 + 0x30))(x0_2, arg2, arg3 + x9_2, x3, zx.q(arg5) & 1)
    
    if (x24_3.d u>= 2)
        int32_t x8_11 = *(arg1 + 0x10)
        void* x23_1 = arg1 + 0x28
        
        if ((x8_11 & 2) != 0 || *(arg2 + 0x3c) == 1)
            while (zx.d(*(arg2 + 0x4e)) == 0)
                int64_t x8_13 = *(x23_1 + 8)
                int64_t x9_6 = x8_13 s>> 8
                
                if ((x8_13.d & 1) != 0)
                    x9_6 = *(*arg3 + x9_6)
                
                int64_t* x0_3 = *x23_1
                x23_1 += 0x10
                uint64_t x3_1
                
                if ((x8_13 & 2) == 0)
                    x3_1 = 2
                else
                    x3_1 = zx.q(arg4)
                
                (*(*x0_3 + 0x30))(x0_3, arg2, arg3 + x9_6, x3_1, zx.q(arg5) & 1)
                
                if (x23_1 u>= arg1 + (x24_3 << 4) + 0x18)
                    break
        else if ((x8_11 & 1) != 0)
            while (zx.d(*(arg2 + 0x4e)) == 0)
                if (*(arg2 + 0x3c) == 1 && arg2[6].d == 1)
                    break
                
                int64_t x8_26 = *(x23_1 + 8)
                int64_t x9_8 = x8_26 s>> 8
                
                if ((x8_26.d & 1) != 0)
                    x9_8 = *(*arg3 + x9_8)
                
                int64_t* x0_5 = *x23_1
                x23_1 += 0x10
                uint64_t x3_3
                
                if ((x8_26 & 2) == 0)
                    x3_3 = 2
                else
                    x3_3 = zx.q(arg4)
                
                (*(*x0_5 + 0x30))(x0_5, arg2, arg3 + x9_8, x3_3, zx.q(arg5) & 1)
                
                if (x23_1 u>= arg1 + (x24_3 << 4) + 0x18)
                    break
        else
            while (zx.d(*(arg2 + 0x4e)) == 0)
                if (*(arg2 + 0x3c) == 1)
                    break
                
                int64_t x8_29 = *(x23_1 + 8)
                int64_t x9_9 = x8_29 s>> 8
                
                if ((x8_29.d & 1) != 0)
                    x9_9 = *(*arg3 + x9_9)
                
                int64_t* x0_6 = *x23_1
                x23_1 += 0x10
                uint64_t x3_4
                
                if ((x8_29 & 2) == 0)
                    x3_4 = 2
                else
                    x3_4 = zx.q(arg4)
                
                (*(*x0_6 + 0x30))(x0_6, arg2, arg3 + x9_9, x3_4, zx.q(arg5) & 1)
                
                if (x23_1 u>= arg1 + (x24_3 << 4) + 0x18)
                    break
