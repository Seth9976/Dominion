// 函数: res2_class
// 地址: 0x108607c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 s>= 1)
    uint64_t x8_1 = zx.q(arg5)
    int32_t x10_1
    int64_t i_5
    
    if (arg5 u>= 8)
        i_5 = x8_1 & 0xfffffff8
        void* x10_2 = arg4 + 0x10
        arg6.q = 0
        arg6:8.q = 0
        int64_t i_4 = i_5
        arg7.q = 0
        arg7:8.q = 0
        int64_t i
        
        do
            arg8 = *(x10_2 - 0x10)
            arg9 = *x10_2
            i = i_4
            i_4 -= 8
            x10_2 += 0x20
            arg8 = not.o(vceqzq_u32(arg8, 0))
            arg9 = not.o(vceqzq_u32(arg9, 0))
            arg6 -= arg8
            arg7 -= arg9
        while (i != 8)
        arg6.d = vaddvq_u32(arg7 + arg6)
        x10_1 = arg6.d
        
        if (i_5 != x8_1)
            goto label_1086118
    else
        i_5 = 0
        x10_1 = 0
    label_1086118:
        int32_t* x11_1 = arg4 + (i_5 << 2)
        int64_t i_3 = x8_1 - i_5
        int64_t i_1
        
        do
            int32_t x9_1 = *x11_1
            x11_1 = &x11_1[1]
            
            if (x9_1 != 0)
                x10_1 += 1
            
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (x10_1 != 0)
        int32_t* x25_1 = *arg2
        int64_t x26_1 = x25_1[4]
        int64_t x27_1 = x25_1[5]
        int32_t x28_1 = (x25_1[2] - *x25_1) s/ x26_1.d
        int64_t x24_1 = zx.q(x28_1) << 0x20 s>> 0x1d
        int64_t* result = _vorbis_block_alloc(arg1, 8, arg6, arg7, arg8, arg9)
        int64_t x0_3 = _vorbis_block_alloc(arg1, x24_1)
        *result = x0_3
        memset(x0_3, 0, x24_1)
        
        if (x28_1 s>= 1)
            int64_t x12_1 = *result
            int64_t x10_3 = sx.q(arg5)
            int64_t i_2 = 0
            int64_t j_5 = (x10_3 - 1) & 0xfffffffffffffffe
            int64_t x16_2 = *x25_1 s/ x10_3
            
            do
                int32_t x0_4
                int32_t x18_1
                
                if (x26_1.d s< 1)
                    x18_1 = 0
                    x0_4 = 0
                else
                    x0_4 = 0
                    x18_1 = 0
                    int64_t x2_1 = 0
                    
                    do
                        int32_t x3 = *(*arg3 + (x16_2 << 2))
                        int32_t x3_1
                        
                        if (x3 s< 0)
                            x3_1 = neg.d(x3)
                        else
                            x3_1 = x3
                        
                        if (x3_1 s> x18_1)
                            x18_1 = x3_1
                        
                        if (arg5 s>= 2)
                            int64_t x4
                            
                            if (x10_3 - 1 u>= 2)
                                int64_t j_3 = j_5
                                int32_t** x5_1 = &arg3[2]
                                int32_t x4_1 = x0_4
                                int64_t j
                                
                                do
                                    int32_t* x6_1 = x5_1[-1]
                                    int32_t* x7_1 = *x5_1
                                    x5_1 = &x5_1[2]
                                    int32_t x6_2 = x6_1[x16_2]
                                    int32_t x7_2 = x7_1[x16_2]
                                    int32_t x6_3
                                    
                                    if (x6_2 s< 0)
                                        x6_3 = neg.d(x6_2)
                                    else
                                        x6_3 = x6_2
                                    
                                    int32_t x7_3
                                    
                                    if (x7_2 s< 0)
                                        x7_3 = neg.d(x7_2)
                                    else
                                        x7_3 = x7_2
                                    
                                    if (x6_3 s> x0_4)
                                        x0_4 = x6_3
                                    
                                    if (x7_3 s> x4_1)
                                        x4_1 = x7_3
                                    
                                    j = j_3
                                    j_3 -= 2
                                while (j != 2)
                                
                                if (x0_4 s<= x4_1)
                                    x0_4 = x4_1
                                
                                x4 = (x10_3 - 1) | 1
                                
                                if (x10_3 - 1 != j_5)
                                    goto label_1086254
                            else
                                x4 = 1
                            label_1086254:
                                int64_t j_4 = x10_3 - x4
                                void* x4_2 = &arg3[x4]
                                int64_t j_1
                                
                                do
                                    int64_t x5_2 = *x4_2
                                    x4_2 += 8
                                    int32_t x5_3 = *(x5_2 + (x16_2 << 2))
                                    int32_t x5_4
                                    
                                    if (x5_3 s< 0)
                                        x5_4 = neg.d(x5_3)
                                    else
                                        x5_4 = x5_3
                                    
                                    if (x5_4 s> x0_4)
                                        x0_4 = x5_4
                                    
                                    j_1 = j_4
                                    j_4 -= 1
                                while (j_1 != 1)
                        
                        x2_1 += x10_3
                        x16_2 += 1
                    while (x2_1 s< x26_1)
                
                int64_t j_2 = 0
                
                if (x27_1.d s> 1)
                    j_2 = 0
                    
                    do
                        void* x2_2 = &x25_1[j_2]
                        
                        if (x18_1 s<= *(x2_2 + 0x920) && x0_4 s<= *(x2_2 + 0xa20))
                            break
                        
                        j_2 += 1
                    while (j_2 s< x27_1 - 1)
                
                *(x12_1 + (i_2 << 3)) = j_2
                i_2 += 1
            while (i_2 != sx.q(x28_1))
        
        arg2[9] += 1
        return result

return nullptr
