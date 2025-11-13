// 函数: floor1_encode
// 地址: 0x1082680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
int64_t result

if (arg4 == 0)
    oggpack_write(arg1, 0, 1)
    int32_t x8_27 = *(arg2 + 0x48)
    int32_t x8_28
    
    if (x8_27 s< 0)
        x8_28 = x8_27 + 1
    else
        x8_28 = x8_27
    
    memset(arg5, 0, zx.q(x8_28 s>> 1) << 0x20 s>> 0x1e)
    result = 0
else
    int32_t* x26_1 = *(arg3 + 0x510)
    void* x16_1 = *(*(*(arg2 + 0x68) + 8) + 0x30)
    int64_t i_8 = sx.q(*(arg3 + 0x504))
    int64_t x28_1 = *(x16_1 + 0x1328)
    
    if (i_8.d s>= 1)
        int64_t i_7 = i_8
        int32_t* x12_1 = arg4
        int64_t i
        
        do
            int32_t x13_1 = *x12_1
            uint64_t x15_1 = zx.q(x26_1[0xd0] - 1)
            uint32_t x14_2 = x13_1 & 0x7fff
            
            if (x15_1.d u<= 3)
                switch (x15_1)
                    case 0
                        x14_2 u>>= 2
                    case 1
                        x14_2 u>>= 3
                    case 2
                        x14_2 = (x14_2 & 0xffff) u/ 0xc
                    case 3
                        x14_2 u>>= 4
            
            i = i_7
            i_7 -= 1
            *x12_1 = x14_2 | (x13_1 & 0x8000)
            x12_1 = &x12_1[1]
        while (i != 1)
    
    int32_t x20_1 = *arg4
    int32_t x19_1 = arg4[1]
    int32_t var_174 = x20_1
    
    if (i_8.d s>= 3)
        int64_t i_5 = i_8 - 2
        void* x9_1 = &arg4[2]
        void* x10_1 = &x26_1[0xd3]
        void* x11_1 = arg3 + 0x408
        void var_16c
        void* x12_2 = &var_16c
        int64_t i_1
        
        do
            int64_t x14_5 = sx.q(*x11_1)
            *(x11_1 - 0xfc)
            int32_t x18_1 = x26_1[0xd1 + x14_5]
            int32_t x16_3 = arg4[x14_5] & 0x7fff
            int32_t x17_4 = (arg4[sx.q(*(x11_1 - 0xfc))] & 0x7fff) - x16_3
            int32_t x1_1
            
            if (x17_4 s< 0)
                x1_1 = neg.d(x17_4)
            else
                x1_1 = x17_4
            
            int32_t x17_5 = *x9_1
            int32_t x18_4 = x1_1 * (*x10_1 - x18_1) s/ (x26_1[0xd1 + sx.q(*(x11_1 - 0xfc))] - x18_1)
            int32_t x18_5
            
            if (x17_4 s< 0)
                x18_5 = neg.d(x18_4)
            else
                x18_5 = x18_4
            
            int32_t x0_2 = x18_5 + x16_3
            
            if ((x17_5 & 0x8000) != 0 || x17_5 == x0_2)
                *x9_1 = x0_2 | 0x8000
                *x12_2 = 0
            else
                int32_t x18_7 = *(arg3 + 0x50c) - x0_2
                int32_t x18_8
                
                x18_8 = x18_7 s< x0_2 ? x18_7 : x0_2
                
                int32_t x17_6 = x17_5 - x0_2
                int32_t x17_7
                
                if (x17_5 - x0_2 s< 0)
                    if (x17_6 s>= neg.d(x18_8))
                        x17_7 = 0xffffffff ^ x17_6 << 1
                    else
                        x17_7 = x18_8 + not.d(x17_6)
                else if (x18_8 s<= x17_6)
                    x17_7 = x18_8 + x17_6
                else
                    x17_7 = x17_6 << 1
                
                *x12_2 = x17_7
                arg4[x14_5] = x16_3
                arg4[sx.q(*(x11_1 - 0xfc))] &= 0x7fff
            
            i_1 = i_5
            i_5 -= 1
            x9_1 += 4
            x12_2 += 4
            x10_1 += 4
            x11_1 += 4
        while (i_1 != 1)
        x20_1 = var_174
    
    oggpack_write(arg1, 1, 1)
    uint64_t x0_5 = zx.q(*(arg3 + 0x50c) - 1)
    *(arg3 + 0x528) += 1
    int32_t x0_6 = ov_ilog(x0_5)
    uint64_t x0_7 = zx.q(*(arg3 + 0x50c) - 1)
    *(arg3 + 0x520) += sx.q(x0_6 << 1)
    oggpack_write(arg1, sx.q(x20_1), zx.q(ov_ilog(x0_7)))
    void* x0_13
    int64_t x1_4
    void* x18_9
    int128_t v0_1
    x0_13, x1_4, x18_9, v0_1 =
        oggpack_write(arg1, sx.q(x19_1), zx.q(ov_ilog(zx.q(*(arg3 + 0x50c) - 1))))
    
    if (*x26_1 s>= 1)
        int64_t i_2 = 0
        int64_t x20_2 = 2
        
        do
            int64_t x23_1 = sx.q(x26_1[i_2 + 1])
            v0_1.q = 0
            v0_1:8.q = 0
            void* x8_11 = &x26_1[x23_1]
            uint64_t j_5 = zx.q(*(x8_11 + 0x80))
            int32_t x8_12 = *(x8_11 + 0xc0)
            int128_t var_198
            __builtin_memset(&var_198, 0, 0x20)
            int64_t x22_1 = sx.q(j_5.d)
            
            if (x8_12 != 0)
                int32_t x9_4 = 1 << x8_12
                int128_t var_1b8
                __builtin_memset(&var_1b8, 0, 0x20)
                
                if (x8_12 != 0x1f)
                    int64_t x10_3 = sx.q(x9_4)
                    int64_t x12_3
                    
                    x12_3 = x10_3 s> 1 ? x10_3 : 1
                    
                    int64_t j_6 = 0
                    
                    if (x12_3 u> 1)
                        void* x14_9 = &var_1b8:4
                        j_6 = x12_3 & 0x7ffffffffffffffe
                        int64_t j_4 = j_6
                        void* x13_5 = &x26_1[0x51 + x23_1 * 8]
                        int64_t j
                        
                        do
                            int64_t x17_8 = *(x13_5 - 4)
                            int64_t x16_4 = *x13_5
                            
                            if ((x17_8.d & 0x80000000) == 0)
                                x18_9 = *(x16_1 + (x17_8 << 3) + 0xb28)
                            
                            if ((x16_4.d & 0x80000000) == 0)
                                x0_13 = *(x16_1 + (x16_4 << 3) + 0xb28)
                            
                            if ((x17_8.d & 0x80000000) == 0)
                                x1_4 = *(x18_9 + 8)
                            
                            if ((x16_4.d & 0x80000000) == 0)
                                x18_9 = *(x0_13 + 8)
                            
                            int32_t x17_9
                            
                            if (x17_8.d s>= 0)
                                x17_9 = x1_4.d
                            else
                                x17_9 = 1
                            
                            int32_t x16_5
                            
                            if (x16_4.d s>= 0)
                                x16_5 = x18_9.d
                            else
                                x16_5 = 1
                            
                            *(x14_9 - 4) = x17_9
                            *x14_9 = x16_5
                            j = j_4
                            j_4 -= 2
                            x14_9 += 8
                            x13_5 += 8
                        while (j != 2)
                    
                    if (x12_3 u<= 1 || x12_3 != j_6)
                        do
                            int64_t x13_7 = sx.q(x26_1[x23_1 * 8 + j_6 + 0x50])
                            int32_t x13_10
                            
                            if ((x13_7.d & 0x80000000) != 0)
                                x13_10 = 1
                            else
                                x13_10 = *(*(x16_1 + (x13_7 << 3) + 0xb28) + 8)
                            
                            *(&var_1b8 + (j_6 << 2)) = x13_10
                            j_6 += 1
                        while (j_6 s< x10_3)
                
                int32_t x1_5
                
                if (x22_1.d s< 1)
                    x1_5 = 0
                else
                    int64_t x10_4 = 0
                    int32_t x11_2 = 0
                    x1_5 = 0
                    
                    do
                        if (x8_12 != 0x1f)
                            int64_t j_1 = 0
                            
                            do
                                if ((&var_174)[x20_2 + x10_4] s< *(&var_1b8 + (j_1 << 2)))
                                    *(&var_198 + (x10_4 << 2)) = j_1.d
                                    break
                                
                                j_1 += 1
                            while (j_1 s< sx.q(x9_4))
                        
                        int32_t x12_6 = *(&var_198 + (x10_4 << 2))
                        x10_4 += 1
                        x1_5 |= x12_6 << x11_2
                        x11_2 += x8_12
                    while (x10_4 != j_5)
                
                x0_13, x1_4, x18_9, v0_1 =
                    vorbis_book_encode(x28_1 + sx.q(x26_1[x23_1 + 0x40]) * 0x60, x1_5, arg1)
                *(arg3 + 0x518) += sx.q(x0_13.d)
            
            if (x22_1.d s>= 1)
                void* x22_2 = &(&var_174)[x20_2]
                int128_t* x24_3 = &var_198
                uint64_t j_2
                
                do
                    int64_t x8_19 = sx.q(x26_1[x23_1 * 8 + sx.q(*x24_3) + 0x50])
                    
                    if ((x8_19.d & 0x80000000) == 0)
                        x1_4 = sx.q(*x22_2)
                        
                        if (*(x28_1 + x8_19 * 0x60 + 8) s> x1_4)
                            x0_13, x1_4, x18_9, v0_1 =
                                vorbis_book_encode(x28_1 + x8_19 * 0x60, x1_4, arg1)
                            *(arg3 + 0x520) += sx.q(x0_13.d)
                    
                    x24_3 += 4
                    j_2 = j_5
                    j_5 -= 1
                    x22_2 += 4
                while (j_2 != 1)
            
            i_2 += 1
            x20_2 += x22_1
        while (i_2 s< sx.q(*x26_1))
    
    int64_t x8_25 = *(x16_1 + (*(arg2 + 0x38) << 3))
    int32_t x12_9 = x26_1[0xd0] * *arg4
    int64_t x9_13
    
    if (x8_25 s< 0)
        x9_13 = x8_25 + 1
    else
        x9_13 = x8_25
    
    int64_t x4
    uint32_t i_6
    int32_t x9_16
    
    if (*(arg3 + 0x504) s<= 1)
        x4 = arg5
        i_6 = 0
        x9_16 = x12_9
    else
        x4 = arg5
        uint32_t i_9 = 0
        i_6 = 0
        uint32_t i_11 = (x9_13 u>> 1).d
        int64_t i_3 = 1
        
        do
            int64_t x14_11 = sx.q(*(arg3 + (i_3 << 2) + 0x104))
            int32_t x9_15 = arg4[x14_11]
            
            if ((x9_15 & 0xffff8000) != 0)
                x9_16 = x12_9
            else
                i_6 = x26_1[x14_11 + 0xd1]
                x9_16 = x26_1[0xd0] * x9_15
                int32_t x16_6 = x9_16 - x12_9
                uint32_t x14_12 = i_6 - i_9
                int32_t x15_7 = x16_6 s/ x14_12
                int32_t x18_11 = x15_7 * x14_12
                int32_t x17_10
                
                if (x9_16 - x12_9 s< 0)
                    x17_10 = neg.d(x16_6)
                else
                    x17_10 = x16_6
                
                int32_t x1_6
                
                if (x18_11 s< 0)
                    x1_6 = neg.d(x18_11)
                else
                    x1_6 = x18_11
                
                uint32_t i_10
                
                i_10 = i_6 s< i_11 ? i_6 : i_11
                
                if (i_10 s> i_9)
                    *(x4 + (sx.q(i_9) << 2)) = x12_9
                
                if (i_9 + 1 s< i_10)
                    int32_t x0_17 = 0
                    int64_t j_3 = sx.q(i_9 + 1)
                    
                    do
                        int32_t x0_18 = x0_17 + x17_10 - x1_6
                        int32_t x1_7
                        
                        if (x0_18 s< x14_12)
                            x1_7 = 0
                        else
                            x1_7 = x16_6 s>> 0x1f | 1
                        
                        x12_9 = x12_9 + x15_7 + x1_7
                        uint32_t x2_7
                        
                        x2_7 = x0_18 s< x14_12 ? 0 : x14_12
                        
                        *(x4 + (j_3 << 2)) = x12_9
                        j_3 += 1
                        x0_17 = x0_18 - x2_7
                    while (j_3 s< sx.q(i_10))
                
                i_9 = i_6
            
            i_3 += 1
            x12_9 = x9_16
        while (i_3 s< sx.q(*(arg3 + 0x504)))
    
    int32_t x10_6 = *(arg2 + 0x48)
    int32_t x10_7
    
    if (x10_6 s< 0)
        x10_7 = x10_6 + 1
    else
        x10_7 = x10_6
    
    if (i_6 s< x10_7 s>> 1)
        int64_t i_4 = sx.q(i_6)
        int32_t x10_9
        
        do
            *(x4 + (i_4 << 2)) = x9_16
            int32_t x10_8 = *(arg2 + 0x48)
            i_4 += 1
            
            if (x10_8 s< 0)
                x10_9 = x10_8 + 1
            else
                x10_9 = x10_8
        while (i_4 s< sx.q(x10_9 s>> 1))
    
    result = 1

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
