// 函数: _ZN5Eigen8internal29general_matrix_vector_productIlfNS0_22const_blas_data_mapperIflLi1EEELi1ELb0EfNS2_IflLi0EEELb0ELi0EE3runEllRKS3_RKS4_Pflf
// 地址: 0xc4b1ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x10 = *arg3
int64_t x11 = *(arg3 + 8)
int64_t x8 = x11 << 2
int64_t x13

if (x8 u> 0x7d00)
    x13 = 0
else
    x13 = arg1 - 7

int64_t x9_1 = arg1 - 3
int64_t var_68 = arg1
int64_t i_1 = 0
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
uint128_t v5
uint128_t v6
uint128_t v7
uint128_t v16
uint128_t v17

if (x13 s>= 1)
    void* x17_1 = x10
    
    do
        int64_t x2
        float128 v18
        float128 v19
        float128 v20
        
        if (arg2 s>= 4)
            int128_t* x2_1 = *arg4
            v16.q = 0
            v16:8.q = 0
            void* x6_2 = x17_1
            int64_t x7_2 = 4
            v7.q = 0
            v7:8.q = 0
            v6.q = 0
            v6:8.q = 0
            v5.q = 0
            v5:8.q = 0
            v4.q = 0
            v4:8.q = 0
            v3.q = 0
            v3:8.q = 0
            v2.q = 0
            v2:8.q = 0
            v1.q = 0
            v1:8.q = 0
            
            do
                v17 = *x2_1
                x2_1 = &x2_1[1]
                int128_t* x12_9 = x6_2 + x8
                v19 = *x12_9
                int128_t* x12_10 = x12_9 + x8
                v20 = *x12_10
                int128_t* x12_11 = x12_10 + x8
                v16 = vfmaq_f32(v16, v17, *x6_2)
                v18 = *x12_11
                int128_t* x12_12 = x12_11 + x8
                v7 = vfmaq_f32(v7, v17, v19)
                v19 = *x12_12
                int128_t* x12_13 = x12_12 + x8
                v6 = vfmaq_f32(v6, v17, v20)
                v20 = *x12_13
                int128_t* x12_14 = x12_13 + x8
                v5 = vfmaq_f32(v5, v17, v18)
                v18 = *x12_14
                v4 = vfmaq_f32(v4, v17, v19)
                v19 = *(x12_14 + x8)
                x7_2 += 4
                v3 = vfmaq_f32(v3, v17, v20)
                v2 = vfmaq_f32(v2, v17, v18)
                v1 = vfmaq_f32(v1, v17, v19)
                x6_2 += 0x10
            while (x7_2 s<= arg2)
            
            x2 = arg2 & 0xfffffffffffffffc
        else
            x2 = 0
            v1.q = 0
            v1:8.q = 0
            v2.q = 0
            v2:8.q = 0
            v3.q = 0
            v3:8.q = 0
            v4.q = 0
            v4:8.q = 0
            v5.q = 0
            v5:8.q = 0
            v6.q = 0
            v6:8.q = 0
            v7.q = 0
            v7:8.q = 0
            v16.q = 0
            v16:8.q = 0
        
        int128_t v16_1 = vadd_f32(v16, vextq_s8(v16, v16, 8))
        int128_t v7_1 = vadd_f32(v7, vextq_s8(v7, v7, 8))
        int128_t v6_1 = vadd_f32(v6, vextq_s8(v6, v6, 8))
        int128_t v5_1 = vadd_f32(v5, vextq_s8(v5, v5, 8))
        int128_t v4_1 = vadd_f32(v4, vextq_s8(v4, v4, 8))
        int128_t v3_1 = vadd_f32(v3, vextq_s8(v3, v3, 8))
        int128_t v2_1 = vadd_f32(v2, vextq_s8(v2, v2, 8))
        int128_t v1_1 = vadd_f32(v1, vextq_s8(v1, v1, 8))
        v16 = vpadd_f32(v16_1, v16_1)
        v7 = vpadd_f32(v7_1, v7_1)
        v6 = vpadd_f32(v6_1, v6_1)
        v5 = vpadd_f32(v5_1, v5_1)
        v4 = vpadd_f32(v4_1, v4_1)
        v3 = vpadd_f32(v3_1, v3_1)
        v2 = vpadd_f32(v2_1, v2_1)
        v1 = vpadd_f32(v1_1, v1_1)
        int64_t x6_1
        int64_t x7_1
        int64_t x19_1
        int64_t x20_1
        int64_t x21_1
        int64_t x22_1
        int64_t x23_1
        
        if (x2 s>= arg2)
            x23_1 = i_1 | 1
            x22_1 = i_1 | 2
            x21_1 = i_1 | 3
            x20_1 = i_1 | 4
            x19_1 = i_1 | 5
            x7_1 = i_1 | 6
            x6_1 = i_1 | 7
        else
            x23_1 = i_1 | 1
            x22_1 = i_1 | 2
            x21_1 = i_1 | 3
            x20_1 = i_1 | 4
            x19_1 = i_1 | 5
            x7_1 = i_1 | 6
            x6_1 = i_1 | 7
            
            do
                v17.d = (*arg4)[x2]
                v18.d = *(x17_1 + (x2 << 2))
                v19.d = *(x10 + ((x2 + x23_1 * x11) << 2))
                v20.d = *(x10 + ((x2 + x22_1 * x11) << 2))
                v18.d = v17.d f* v18.d
                v19.d = v17.d f* v19.d
                v20.d = v17.d f* v20.d
                float v21 = v17.d f* *(x10 + ((x2 + x21_1 * x11) << 2))
                float v22 = v17.d f* *(x10 + ((x2 + x20_1 * x11) << 2))
                float v23 = v17.d f* *(x10 + ((x2 + x19_1 * x11) << 2))
                float v24 = v17.d f* *(x10 + ((x2 + x7_1 * x11) << 2))
                v17.d = v17.d f* *(x10 + ((x2 + x6_1 * x11) << 2))
                x2 += 1
                v16.d = v16.d f+ v18.d
                v7.d = v7.d f+ v19.d
                v6.d = v6.d f+ v20.d
                v5.d = v5.d f+ v21
                v4.d = v4.d f+ v22
                v3.d = v3.d f+ v23
                v2.d = v2.d f+ v24
                v1.d = v1.d f+ v17.d
            while (arg2 != x2)
        
        v17.d = arg5[i_1 * arg6]
        v16.d = v16.d f* arg7
        v16.d = v16.d f+ v17.d
        arg5[i_1 * arg6] = v16.d
        v16.d = arg5[x23_1 * arg6]
        v7.d = v7.d f* arg7
        v7.d = v7.d f+ v16.d
        arg5[x23_1 * arg6] = v7.d
        v7.d = arg5[x22_1 * arg6]
        v6.d = v6.d f* arg7
        v6.d = v6.d f+ v7.d
        arg5[x22_1 * arg6] = v6.d
        v6.d = arg5[x21_1 * arg6]
        v5.d = v5.d f* arg7
        v5.d = v5.d f+ v6.d
        arg5[x21_1 * arg6] = v5.d
        v5.d = arg5[x20_1 * arg6]
        v4.d = v4.d f* arg7
        v4.d = v4.d f+ v5.d
        arg5[x20_1 * arg6] = v4.d
        v4.d = arg5[x19_1 * arg6]
        v3.d = v3.d f* arg7
        v3.d = v3.d f+ v4.d
        arg5[x19_1 * arg6] = v3.d
        v3.d = arg5[x7_1 * arg6]
        v2.d = v2.d f* arg7
        arg1 = (x6_1 * arg6) << 2
        v2.d = v2.d f+ v3.d
        arg5[x7_1 * arg6] = v2.d
        v2.d = *(arg5 + arg1)
        v1.d = v1.d f* arg7
        i_1 += 8
        v1.d = v1.d f+ v2.d
        x17_1 += x11 << 5
        *(arg5 + arg1) = v1.d
    while (i_1 s< x13)

if (i_1 s< x9_1)
    int64_t x16_1 = i_1 * x11
    int64_t x17_2 = x11 * (i_1 + 3)
    int64_t x2_3 = x11 * (i_1 + 2)
    int64_t x6_4 = x11 * (i_1 + 1)
    int64_t x15_2 = x11 << 4
    void* x7_3 = x10 + (x17_2 << 2)
    void* x19_2 = x10 + (x2_3 << 2)
    void* x20_2 = x10 + (x6_4 << 2)
    void* x21_2 = x10 + (x16_1 << 2)
    
    do
        int64_t x25_2
        
        if (arg2 s>= 4)
            int128_t* x12_23 = *arg4
            v1.q = 0
            v1:8.q = 0
            void* x22_4 = x21_2
            void* x23_4 = x20_2
            void* x24_3 = x19_2
            void* x25_3 = x7_3
            int64_t x26_2 = 4
            v4.q = 0
            v4:8.q = 0
            v3.q = 0
            v3:8.q = 0
            v2.q = 0
            v2:8.q = 0
            
            do
                v5 = *x12_23
                x12_23 = &x12_23[1]
                v6 = *x22_4
                x22_4 += 0x10
                v7 = *x23_4
                x23_4 += 0x10
                v16 = *x24_3
                x24_3 += 0x10
                v17 = *x25_3
                x25_3 += 0x10
                x26_2 += 4
                v1 = vfmaq_f32(v1, v5, v6)
                v4 = vfmaq_f32(v4, v5, v7)
                v3 = vfmaq_f32(v3, v5, v16)
                v2 = vfmaq_f32(v2, v5, v17)
            while (x26_2 s<= arg2)
            
            x25_2 = arg2 & 0xfffffffffffffffc
        else
            x25_2 = 0
            v2.q = 0
            v2:8.q = 0
            v3.q = 0
            v3:8.q = 0
            v4.q = 0
            v4:8.q = 0
            v1.q = 0
            v1:8.q = 0
        
        uint128_t v5_2 = vextq_s8(v1, v1, 8)
        uint128_t v6_2 = vextq_s8(v4, v4, 8)
        uint128_t v7_2 = vextq_s8(v3, v3, 8)
        v16 = vextq_s8(v2, v2, 8)
        int128_t v1_2 = vadd_f32(v1, v5_2)
        v5 = vadd_f32(v4, v6_2)
        v6 = vadd_f32(v3, v7_2)
        v7 = vadd_f32(v2, v16)
        v4 = vpadd_f32(v1_2, v1_2)
        v3 = vpadd_f32(v5, v5)
        v2 = vpadd_f32(v6, v6)
        v1 = vpadd_f32(v7, v7)
        int64_t x22_2
        int64_t x23_2
        int64_t x24_2
        
        if (x25_2 s>= arg2)
            x24_2 = i_1 + 1
            x23_2 = i_1 + 2
            x22_2 = i_1 + 3
        else
            int64_t i = 0
            x24_2 = i_1 + 1
            x23_2 = i_1 + 2
            x22_2 = i_1 + 3
            
            do
                int64_t x0_18 = i << 2
                v5.d = (*arg4 + (x25_2 << 2))[i]
                v6.d = *(x10 + ((x25_2 + x16_1) << 2) + x0_18)
                v7.d = *(x10 + ((x25_2 + x6_4) << 2) + x0_18)
                v16.d = *(x10 + ((x25_2 + x2_3) << 2) + x0_18)
                v17.d = (x10 + ((x25_2 + x17_2) << 2))[i]
                v6.d = v5.d f* v6.d
                v7.d = v5.d f* v7.d
                v16.d = v5.d f* v16.d
                v5.d = v5.d f* v17.d
                i += 1
                v4.d = v4.d f+ v6.d
                v3.d = v3.d f+ v7.d
                v2.d = v2.d f+ v16.d
                v1.d = v1.d f+ v5.d
            while (arg2 - x25_2 != i)
        
        v5.d = arg5[i_1 * arg6]
        v4.d = v4.d f* arg7
        v4.d = v4.d f+ v5.d
        arg5[i_1 * arg6] = v4.d
        v4.d = arg5[x24_2 * arg6]
        v3.d = v3.d f* arg7
        v3.d = v3.d f+ v4.d
        arg5[x24_2 * arg6] = v3.d
        v3.d = arg5[x23_2 * arg6]
        v2.d = v2.d f* arg7
        arg1 = (x22_2 * arg6) << 2
        v2.d = v2.d f+ v3.d
        arg5[x23_2 * arg6] = v2.d
        v2.d = *(arg5 + arg1)
        v1.d = v1.d f* arg7
        i_1 += 4
        x7_3 += x15_2
        x19_2 += x15_2
        x20_2 += x15_2
        x21_2 += x15_2
        x17_2 += x8
        x2_3 += x8
        x6_4 += x8
        v1.d = v1.d f+ v2.d
        x16_1 += x8
        *(arg5 + arg1) = v1.d
    while (i_1 s< x9_1)

if (i_1 s< var_68 - 1)
    if (arg2 s>= 4)
        int64_t x12_25 = arg2 & 0xfffffffffffffffc
        int32_t* x15_7 = x10 + ((x11 * (i_1 + 1)) << 2)
        void* x16_6 = x10 + ((i_1 * x11) << 2)
        
        do
            int32_t* x2_5 = *arg4
            v1.q = 0
            v1:8.q = 0
            void* x0_20 = x16_6
            int32_t* x6_5 = x15_7
            int64_t x7_4 = 4
            int32_t* x19_3 = x2_5
            v2.q = 0
            v2:8.q = 0
            
            do
                v3 = *x19_3
                x19_3 = &x19_3[4]
                v4 = *x0_20
                x0_20 += 0x10
                v5 = *x6_5
                x6_5 = &x6_5[4]
                x7_4 += 4
                v2 = vfmaq_f32(v2, v3, v4)
                v1 = vfmaq_f32(v1, v3, v5)
            while (x7_4 s<= arg2)
            
            v3 = vextq_s8(v2, v2, 8)
            v4 = vextq_s8(v1, v1, 8)
            int128_t v2_2 = vadd_f32(v2, v3)
            int128_t v1_3 = vadd_f32(v1, v4)
            v2 = vpadd_f32(v2_2, v2_2)
            v1 = vpadd_f32(v1_3, v1_3)
            
            if (x12_25 s< arg2)
                int64_t x0_21 = x12_25
                
                do
                    v3.d = x2_5[x0_21]
                    v4.d = *(x16_6 + (x0_21 << 2))
                    v5.d = x15_7[x0_21]
                    x0_21 += 1
                    v4.d = v3.d f* v4.d
                    v3.d = v3.d f* v5.d
                    v2.d = v2.d f+ v4.d
                    v1.d = v1.d f+ v3.d
                while (arg2 != x0_21)
            
            arg1 = (i_1 * arg6) << 2
            v3.d = *(arg5 + arg1)
            v2.d = v2.d f* arg7
            v2.d = v2.d f+ v3.d
            *(arg5 + arg1) = v2.d
            v2.d = arg5[(i_1 + 1) * arg6]
            v1.d = v1.d f* arg7
            i_1 += 2
            x15_7 = &x15_7[x11 * 2]
            v1.d = v1.d f+ v2.d
            x16_6 += x11 << 3
            arg5[(i_1 + 1) * arg6] = v1.d
        while (i_1 s< var_68 - 1)
    else
        v1.q = 0
        int64_t x12_24 = x11 << 3
        v1 = vpadd_f32(v1, v1)
        void* x14_5 = x10 + ((x11 * (i_1 + 1)) << 2)
        void* x15_4 = x10 + ((i_1 * x11) << 2)
        
        do
            int64_t x16_2
            
            if (arg2 s<= 0)
                x16_2 = i_1 + 1
                v3 = v1
                v2 = v1
            else
                int32_t* x17_5 = *arg4
                x16_2 = i_1 + 1
                arg1 = x15_4
                void* x2_4 = x14_5
                int64_t j_1 = arg2
                v2 = v1
                v3 = v1
                int64_t j
                
                do
                    v4.d = *x17_5
                    x17_5 = &x17_5[1]
                    v5.d = *arg1
                    arg1 += 4
                    v6.d = *x2_4
                    x2_4 += 4
                    j = j_1
                    j_1 -= 1
                    v5.d = v4.d f* v5.d
                    v4.d = v4.d f* v6.d
                    v3.d = v3.d f+ v5.d
                    v2.d = v2.d f+ v4.d
                while (j != 1)
            
            v4.d = arg5[i_1 * arg6]
            v3.d = v3.d f* arg7
            v3.d = v3.d f+ v4.d
            arg5[i_1 * arg6] = v3.d
            v3.d = arg5[x16_2 * arg6]
            v2.d = v2.d f* arg7
            i_1 += 2
            x14_5 += x12_24
            v2.d = v2.d f+ v3.d
            x15_4 += x12_24
            arg5[x16_2 * arg6] = v2.d
        while (i_1 s< var_68 - 1)

if (i_1 s>= var_68)
    return 

if (arg2 s>= 4)
    int64_t x12_28 = arg2 & 0xfffffffffffffffc
    int32_t* x10_2 = x10 + ((i_1 * x11) << 2)
    
    do
        int128_t* x14_12 = *arg4
        v1.q = 0
        v1:8.q = 0
        int32_t* x15_9 = x10_2
        int64_t x17_9 = 4
        int128_t* x16_7 = x14_12
        
        do
            v2 = *x16_7
            x16_7 = &x16_7[1]
            v3 = *x15_9
            x15_9 = &x15_9[4]
            x17_9 += 4
            v1 = vfmaq_f32(v1, v2, v3)
        while (x17_9 s<= arg2)
        
        v2.q = 0
        int64_t x15_10 = x12_28
        
        if ((x12_28 | 2) s<= arg2)
            v2.q = 0
            int64_t x16_8 = arg2 << 2 & 0xfffffffffffffff0
            int64_t x17_10 = x12_28
            bool cond:25_1
            
            do
                v3.q = *(x14_12 + x16_8)
                v4.q = *(x10_2 + x16_8)
                x15_10 = x17_10 + 2
                cond:25_1 = x17_10 + 4 s<= arg2
                v2 = vfma_f32(v2, v3, v4)
                x16_8 += 8
                x17_10 = x15_10
            while (cond:25_1)
        
        int128_t v1_5 = vadd_f32(v1, vextq_s8(v1, v1, 8))
        v2 = vpadd_f32(v2, v2)
        v1 = vadd_f32(vpadd_f32(v1_5, v1_5), v2)
        
        if (x15_10 s< arg2)
            do
                v2.d = x10_2[x15_10]
                v3.d = *(x14_12 + (x15_10 << 2))
                x15_10 += 1
                v2.d = v2.d f* v3.d
                v1.d = v1.d f+ v2.d
            while (arg2 != x15_10)
        
        v2.d = arg5[i_1 * arg6]
        v1.d = v1.d f* arg7
        i_1 += 1
        v1.d = v1.d f+ v2.d
        x10_2 = &x10_2[x11]
        arg5[i_1 * arg6] = v1.d
    while (i_1 != var_68)
else
    v1.q = 0
    uint128_t v1_4 = vpadd_f32(v1, v1)
    void* x10_1 = x10 + ((i_1 * x11) << 2)
    
    do
        int64_t x11_4
        
        if (arg2 s>= 2)
            int64_t* x11_5 = *arg4
            v2.q = 0
            void* x13_3 = x10_1
            int64_t x14_7 = 2
            
            do
                v3.q = *x11_5
                x11_5 = &x11_5[1]
                v4.q = *x13_3
                x13_3 += 8
                x14_7 += 2
                v2 = vfma_f32(v2, v3, v4)
            while (x14_7 s<= arg2)
            
            x11_4 = arg2 & 0xfffffffffffffffe
            v2.d = v1_4.d f+ vpadd_f32(v2, v2).d
            
            if (x11_4 s< arg2)
                goto label_c4b9b4
        else
            x11_4 = 0
            v2.d = v1_4.d f+ v1_4.d
            
            if (0 s< arg2)
            label_c4b9b4:
                
                do
                    v3.d = *(x10_1 + (x11_4 << 2))
                    v4.d = (*arg4)[x11_4]
                    x11_4 += 1
                    v3.d = v3.d f* v4.d
                    v2.d = v2.d f+ v3.d
                while (arg2 != x11_4)
        v3.d = arg5[i_1 * arg6]
        v2.d = v2.d f* arg7
        i_1 += 1
        v2.d = v2.d f+ v3.d
        x10_1 += x8
        arg5[i_1 * arg6] = v2.d
    while (i_1 != var_68)
