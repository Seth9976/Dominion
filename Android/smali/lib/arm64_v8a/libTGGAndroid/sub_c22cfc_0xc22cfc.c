// 函数: sub_c22cfc
// 地址: 0xc22cfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8

if (arg6 == 0)
    return 

int64_t i_16 = arg6
int64_t x26_1 = arg5
int32_t* x16_1 = arg3
int32_t* x22_1 = arg2
int32_t* x20_1 = arg1
v8.d = 0f

while (true)
    if (i_16 s> arg8 && x26_1 s> arg8)
        if (x26_1 == 0)
            break
        
        int64_t x8_1 = *arg4
        
        if (x22_1[1] == 0xa)
            while (true)
                if (x20_1[1] == 0xa)
                    int32_t x9_8 = x20_1[2]
                    
                    if (x22_1[2] s> 5)
                        if (x9_8 s< 6)
                            break
                        
                    label_c22de0:
                        
                        if (*(x8_1 + 0x10 + sx.q(*x22_1) * 0xc + 4) f+ v8.d
                                > *(x8_1 + 0x10 + sx.q(*x20_1) * 0xc + 4) f+ v8.d)
                            break
                    else if (x9_8 s< 6)
                        goto label_c22de0
                
                int64_t temp0_1 = x26_1
                x26_1 -= 1
                x20_1 = &x20_1[3]
                
                if (temp0_1 == 1)
                    return 
        else
            while (x20_1[1] != 0xa)
                if (*(x8_1 + 0x10 + sx.q(*x22_1) * 0xc + 4) f+ v8.d
                        > *(x8_1 + 0x10 + sx.q(*x20_1) * 0xc + 4) f+ v8.d)
                    break
                
                int64_t temp1_1 = x26_1
                x26_1 -= 1
                x20_1 = &x20_1[3]
                
                if (temp1_1 == 1)
                    return 
        
        int64_t x4
        int32_t* x27_1
        int64_t i_13
        
        if (x26_1 s< i_16)
            int64_t i_17
            
            if (i_16 s< 0)
                i_17 = i_16 + 1
            else
                i_17 = i_16
            
            i_13 = i_17 s>> 1
            x27_1 = x20_1
            
            if (x22_1 != x20_1)
                int32_t* x10_6 = x22_1 + i_13 * 0xc
                uint64_t i_10 = ((x22_1 - x20_1) s>> 2) * -0x5555555555555555
                float* x9_12 = x8_1 + sx.q(*x10_6) * 0xc + 0x14
                
                if (x10_6[1] != 0xa)
                    x27_1 = x20_1
                    uint64_t i
                    
                    do
                        i = i_10 u>> 1
                        int32_t* x12_6 = x27_1 + i * 0xc
                        
                        if (x12_6[1] != 0xa &&
                                not(*x9_12 f+ v8.d > *(x8_1 + sx.q(*x12_6) * 0xc + 0x14) f+ v8.d))
                            x27_1 = &x12_6[3]
                            i = i_10 + not.q(i)
                        
                        i_10 = i
                    while (i != 0)
                else
                    x27_1 = x20_1
                    
                    if (*(x22_1 + i_13 * 0xc + 8) s> 5)
                        uint64_t i_1
                        
                        do
                            i_1 = i_10 u>> 1
                            int32_t* x12_3 = x27_1 + i_1 * 0xc
                            
                            if (x12_3[1] != 0xa)
                                x27_1 = &x12_3[3]
                                i_1 = i_10 + not.q(i_1)
                            else if (*(x27_1 + i_1 * 0xc + 8) s>= 6 && *x9_12 f+ v8.d
                                    <= *(x8_1 + sx.q(*x12_3) * 0xc + 0x14) f+ v8.d)
                                x27_1 = &x12_3[3]
                                i_1 = i_10 + not.q(i_1)
                            
                            i_10 = i_1
                        while (i_1 != 0)
                    else
                        uint64_t i_2
                        
                        do
                            i_2 = i_10 u>> 1
                            int32_t* x12_2 = x27_1 + i_2 * 0xc
                            
                            if (x12_2[1] != 0xa || *(x27_1 + i_2 * 0xc + 8) s> 5 || *x9_12 f+ v8.d
                                    <= *(x8_1 + sx.q(*x12_2) * 0xc + 0x14) f+ v8.d)
                                x27_1 = &x12_2[3]
                                i_2 = i_10 + not.q(i_2)
                            
                            i_10 = i_2
                        while (i_2 != 0)
            
            x4 = ((x27_1 - x20_1) s>> 2) * -0x5555555555555555
            goto label_c23078
        
        if (x26_1 == 1)
            int32_t x8_14 = x20_1[2]
            int64_t x9_30 = *x20_1
            int64_t x9_31 = *x22_1
            x20_1[2] = x22_1[2]
            *x20_1 = x9_31
            x22_1[2] = x8_14
            *x22_1 = x9_30
            break
        
        int64_t x9_13
        
        if (x26_1 s< 0)
            x9_13 = x26_1 + 1
        else
            x9_13 = x26_1
        
        x4 = x9_13 s>> 1
        x27_1 = x20_1 + x4 * 0xc
        int32_t* x23_1
        
        if (x16_1 == x22_1)
            i_13 = 0
            x23_1 = x22_1
            x22_1 = x27_1
        else
            void* x11_9 = x20_1 + x4 * 0xc
            uint64_t i_11 = ((x16_1 - x22_1) s>> 2) * -0x5555555555555555
            float* x9_17 = x8_1 + sx.q(*x27_1) * 0xc + 0x14
            
            if (*(x11_9 + 4) != 0xa)
                i_13 = 0
                uint64_t i_3
                
                do
                    i_3 = i_11 u>> 1
                    
                    if (*(x22_1 + i_13 * 0xc + i_3 * 0xc + 4) != 0xa)
                        int64_t x12_10 = i_3 + i_13
                        
                        if (not(*(x8_1 + sx.q(x22_1[x12_10 * 3]) * 0xc + 0x14) f+ v8.d
                                <= *x9_17 f+ v8.d))
                            i_13 = x12_10 + 1
                            i_3 = i_11 + not.q(i_3)
                    
                    i_11 = i_3
                while (i_3 != 0)
            else
                int32_t x11_10 = *(x11_9 + 8)
                
                if (x11_10 s>= 6)
                    i_13 = 0
                    uint64_t i_4
                    
                    do
                        int64_t x13_23 = x22_1 + i_13 * 0xc
                        i_4 = i_11 u>> 1
                        int64_t x12_19 = i_4 + i_13
                        
                        if (*(x13_23 + i_4 * 0xc + 4) != 0xa)
                            i_13 = x12_19 + 1
                            i_4 = i_11 + not.q(i_4)
                        else if (*(x13_23 + i_4 * 0xc + 8) s>= 6
                                && *(x8_1 + sx.q(x22_1[x12_19 * 3]) * 0xc + 0x14) f+ v8.d
                                > *x9_17 f+ v8.d)
                            i_13 = x12_19 + 1
                            i_4 = i_11 + not.q(i_4)
                        
                        i_11 = i_4
                    while (i_4 != 0)
                else
                    i_13 = 0
                    uint64_t i_5
                    
                    do
                        int64_t x14_1 = x22_1 + i_13 * 0xc
                        i_5 = i_11 u>> 1
                        int64_t x13_14 = i_5 + i_13
                        
                        if (*(x14_1 + i_5 * 0xc + 4) != 0xa)
                            i_13 = x13_14 + 1
                            i_5 = i_11 + not.q(i_5)
                        else if (*(x14_1 + i_5 * 0xc + 8) s< 6)
                            if (*(x8_1 + sx.q(x22_1[x13_14 * 3]) * 0xc + 0x14) f+ v8.d
                                    > *x9_17 f+ v8.d)
                                i_13 = x13_14 + 1
                                i_5 = i_11 + not.q(i_5)
                        else if (x11_10 s< 6
                                || *(x8_1 + sx.q(x22_1[x13_14 * 3]) * 0xc + 0x14) f+ v8.d
                                > *x9_17 f+ v8.d)
                            i_13 = x13_14 + 1
                            i_5 = i_11 + not.q(i_5)
                        
                        i_11 = i_5
                    while (i_5 != 0)
            
        label_c23078:
            x23_1 = x22_1 + i_13 * 0xc
            i_16 -= i_13
            
            if (x27_1 == x22_1)
                x22_1 = x23_1
            else if (i_13 == 0)
                x22_1 = x27_1
            else if (&x27_1[3] == x22_1)
                int32_t x8_7 = x27_1[2]
                int64_t x9_19 = *x27_1
                memmove(x27_1, x22_1, i_13 * 0xc)
                x22_1 = &x27_1[i_13 * 3]
                *x22_1 = x9_19
                x22_1[2] = x8_7
            else if (i_13 != 1)
                int64_t x9_21 = x22_1 - x27_1
                int64_t i_14 = (x9_21 s>> 2) * -0x5555555555555555
                int64_t i_6 = i_13
                int64_t i_12 = i_14
                
                if (i_14 != i_13)
                    do
                        int64_t i_15 = i_12
                        i_12 = i_6
                        i_6 = i_15 - i_15 s/ i_6 * i_12
                    while (i_6 != 0)
                    
                    if (i_12 != 0)
                        int64_t* x9_22 = x27_1 + i_12 * 0xc
                        
                        do
                            x9_22 -= 0xc
                            int64_t x10_11 = *x9_22
                            int32_t x11_17 = x9_22[1].d
                            int64_t* x12_13 = x9_22 + i_14 * 0xc
                            int64_t* x11_18 = x9_22
                            int64_t* x10_12
                            
                            do
                                x10_12 = x12_13
                                int64_t x13_22 = *x12_13
                                int64_t x14_9 = ((x23_1 - x10_12) s>> 2) * -0x5555555555555555
                                x11_18[1].d = x12_13[1].d
                                
                                if (i_14 s< x14_9)
                                    x12_13 = x10_12 + i_14 * 0xc
                                else
                                    x12_13 = x27_1 + (i_14 - x14_9) * 0xc
                                
                                *x11_18 = x13_22
                                x11_18 = x10_12
                            while (x12_13 != x9_22)
                            
                            x10_12[1].d = x11_17
                            *x10_12 = x10_11
                        while (x9_22 != x27_1)
                    
                    x22_1 = x27_1 + i_13 * 0xc
                else
                    int64_t x8_10 = 0
                    
                    do
                        void* x10_9 = x27_1 + x8_10
                        int32_t x11_13 = *(x10_9 + 8)
                        int64_t x12_11 = *x10_9
                        void* x13_21 = x22_1 + x8_10
                        x8_10 += 0xc
                        int64_t x12_12 = *x13_21
                        *(x10_9 + 8) = *(x13_21 + 8)
                        *x10_9 = x12_12
                        *(x13_21 + 8) = x11_13
                        *x13_21 = x12_11
                    while (x9_21 != x8_10)
            else
                int64_t x9_18 = *(x23_1 - 0xc)
                int32_t x10_7 = x23_1[-1]
                size_t x2 = &x23_1[-3] - x27_1
                
                if (&x23_1[-3] == x27_1)
                    x22_1 = x23_1
                else
                    x22_1 = x23_1 - x2
                    memmove(x22_1, x27_1, x2)
                
                i_13 = 1
                x27_1[2] = x10_7
                *x27_1 = x9_18
        
        x26_1 -= x4
        
        if (i_13 + x4 s>= i_16 + x26_1)
            sub_c22cfc(x22_1, x23_1, x16_1)
            i_16 = i_13
            x26_1 = x4
            x16_1 = x22_1
            x22_1 = x27_1
            
            if (i_16 == 0)
                break
            
            continue
        else
            sub_c22cfc(x20_1, x27_1, x22_1)
            x20_1 = x22_1
            x22_1 = x23_1
            
            if (i_16 == 0)
                break
            
            continue
    
    float v0
    
    if (x26_1 s<= i_16)
        if (x20_1 != x22_1)
            int64_t i_7 = 0
            
            do
                void* x11_26 = x20_1 + i_7
                int64_t x11_27 = *x11_26
                void* x10_16 = arg7 + i_7
                i_7 += 0xc
                *(x10_16 + 8) = *(x11_26 + 8)
                *x10_16 = x11_27
            while (x22_1 - x20_1 != i_7)
            
            if (i_7 != 0)
                void* x1_4 = arg7
                v0 = 0f
                int64_t x11_29 = *arg4 + 0x10
                int64_t x9_29 = neg.q(x1_4)
                
                do
                    if (x22_1 == x16_1)
                        void* x9_35 = arg7 - x1_4
                        
                        if (x9_35 != neg.q(i_7))
                            return memmove(x20_1, x1_4, x9_35 + i_7) __tailcall
                        
                        break
                    
                    int32_t x12_27 = *(x1_4 + 4)
                    
                    if (x22_1[1] == 0xa)
                        if (x12_27 != 0xa)
                            goto label_c2355c
                        
                        int32_t x12_28 = *(x1_4 + 8)
                        
                        if (x22_1[2] s< 6)
                            if (x12_28 s>= 6 || *(x11_29 + sx.q(*x22_1) * 0xc + 4) + v0
                                    <= *(x11_29 + sx.q(*x1_4) * 0xc + 4) + v0)
                                goto label_c2355c
                            
                            goto label_c235f4
                        
                        if (x12_28 s> 5 && *(x11_29 + sx.q(*x22_1) * 0xc + 4) + v0
                                <= *(x11_29 + sx.q(*x1_4) * 0xc + 4) + v0)
                            goto label_c2355c
                        
                        goto label_c235f4
                    
                    int32_t x12_25
                    int64_t x13_32
                    
                    if (x12_27 != 0xa && *(x11_29 + sx.q(*x22_1) * 0xc + 4) + v0
                        <= *(x11_29 + sx.q(*x1_4) * 0xc + 4) + v0)
                    label_c2355c:
                        x12_25 = *(x1_4 + 8)
                        x13_32 = *x1_4
                        x1_4 += 0xc
                    else
                    label_c235f4:
                        x12_25 = x22_1[2]
                        x13_32 = *x22_1
                        x22_1 = &x22_1[3]
                    
                    x20_1[2] = x12_25
                    *x20_1 = x13_32
                    x20_1 = &x20_1[3]
                while (x1_4 + x9_29 != i_7)
        
        break
    
    if (x22_1 != x16_1)
        int64_t i_8 = 0
        
        do
            void* x11_21 = x22_1 + i_8
            int64_t* x10_14 = arg7 + i_8
            i_8 += 0xc
            x10_14[1].d = *(x11_21 + 8)
            *x10_14 = *x11_21
        while (x16_1 - x22_1 != i_8)
        
        if (i_8 != 0)
            v0 = 0f
            int32_t* x9_27 = arg7 + i_8
            void* x8_13 = x16_1 - 0xc
            
            do
                if (x22_1 == x20_1)
                    int64_t i_9 = 0
                    
                    do
                        void* x13_37 = x9_27 - 0xc + i_9
                        int64_t x13_38 = *x13_37
                        void* x12_31 = x8_13 + i_9
                        i_9 -= 0xc
                        *(x12_31 + 8) = *(x13_37 + 8)
                        *x12_31 = x13_38
                    while (arg7 - x9_27 != i_9)
                    
                    break
                
                void* x11_23 = &x22_1[-3]
                int32_t x15_2 = *(x11_23 + 4)
                
                if (x9_27[-2] != 0xa)
                    if (x15_2 != 0xa)
                    label_c234d8:
                        arg1 = x11_23
                        int64_t x15_5 = *arg4 + 0x10
                        
                        if (*(x15_5 + sx.q(x9_27[-3]) * 0xc + 4) + v0
                                <= *(x15_5 + sx.q(*x11_23) * 0xc + 4) + v0)
                            goto label_c23444
                    else
                        arg1 = x11_23
                else if (x15_2 != 0xa)
                label_c23444:
                    x11_23 = &x9_27[-3]
                    arg1 = x22_1
                    x9_27 = &x9_27[-3]
                else
                    int32_t x15_3 = *(x11_23 + 8)
                    
                    if (x9_27[-1] s< 6)
                        if (x15_3 s>= 6)
                            goto label_c23444
                        
                        goto label_c234d8
                    
                    if (x15_3 s> 5)
                        goto label_c234d8
                    
                    arg1 = x11_23
                
                int64_t x11_24 = *x11_23
                x22_1 = arg1
                *(x8_13 + 8) = *(x11_23 + 8)
                *x8_13 = x11_24
                x8_13 -= 0xc
            while (x9_27 != arg7)
    
    break
