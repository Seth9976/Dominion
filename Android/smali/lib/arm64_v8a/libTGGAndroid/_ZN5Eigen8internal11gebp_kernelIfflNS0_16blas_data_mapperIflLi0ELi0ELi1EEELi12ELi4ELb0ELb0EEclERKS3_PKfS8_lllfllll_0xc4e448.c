// 函数: _ZN5Eigen8internal11gebp_kernelIfflNS0_16blas_data_mapperIflLi0ELi0ELi1EEELi12ELi4ELb0ELb0EEclERKS3_PKfS8_lllfllll
// 地址: 0xc4e448
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24

x24 = arg9 == -1 ? arg6 : arg9

int64_t x26

x26 = arg10 == -1 ? arg6 : arg10

int64_t x8_1 = arg5 s/ 0xc * 0xc
int64_t x9_1

if (arg8 s< 0)
    x9_1 = arg8 + 3
else
    x9_1 = arg8

int64_t x10_3 = arg5 s% 0xc
int64_t x28 = x9_1 & 0xfffffffffffffffc
int32_t x9_2 = sx.d((x10_3.d).b)
int64_t x9_6 = zx.q(((x10_3.d + (x9_2 u>> 0xc & 7)) & 0xf8) << 0x18 s>> 0x1b) << 0x20 s>> 0x1d
int64_t x12_2 = x9_6 + x8_1
int64_t x9_7 = arg5 - x12_2
int64_t x9_8

if (x9_7 s< 0)
    x9_8 = x9_7 + 3
else
    x9_8 = x9_7

int64_t x14 = x9_8 & 0xfffffffffffffffc
int64_t x10_5 = x14 + x12_2
int64_t x9_9 = arg5 - x10_5
int64_t x9_10

if (x9_9 s< 0)
    x9_10 = x9_9 + 1
else
    x9_10 = x9_9

int64_t x9_11 = x9_10 & 0xfffffffffffffffe
int64_t x9_12 = x9_11 + x10_5
int64_t x9_13 = arg5 - x9_12
int64_t arg_10
int64_t x5 = arg_10
uint64_t x11_1 = (0x3f40 - (arg6 << 4)) u/ (arg6 * 0x30)
int64_t x9_14

if (x9_13 s< 0)
    x9_14 = x9_13 + 1
else
    x9_14 = x9_13

int64_t x9_15 = x9_14 & 0xfffffffffffffffe
uint64_t x9_16

x9_16 = x11_1 s> 1 ? x11_1 : 1

int64_t x27 = arg6 & 0xfffffffffffffff8
int64_t var_90 = x5
float128 v1
float128 v2
float128 v3
float128 v4
float128 v5
float128 v6
float128 v7
float128 v16
float128 v17
float128 v18
float128 v19
float128 v20

if (x8_1 s>= 1)
    int64_t x11_2 = 0
    int64_t x12_3 = x5 << 2
    uint128_t v26_1 = vdupq_laneq_s32(arg7, 0)
    int64_t x14_1 = arg11 * 0xc
    int64_t i_14 = arg6 - x27
    
    do
        int64_t x9_20 = x11_2 + x9_16 * 0xc
        int64_t x17_1
        
        x17_1 = x8_1 s< x9_20 ? x8_1 : x9_20
        
        if (arg8 s>= 4)
            int64_t x0 = 0
            
            do
                if (x11_2 s< x17_1)
                    int64_t x13_1 = arg4 + ((x12_3 + x0 * x26) << 2)
                    int64_t x6 = x11_2
                    
                    do
                        void* x16_1 = &arg3[x14_1 + x6 * x24]
                        __prefetch(*x16_1)
                        int64_t x4 = *arg2
                        int64_t x9_24 = *(arg2 + 8)
                        uint64_t* x10_8 = x4 + ((x6 + x9_24 * x0) << 2)
                        uint64_t* x9_25 = x4 + ((x6 + x9_24 * (x0 | 1)) << 2)
                        uint64_t* lr_1 = x4 + ((x6 + x9_24 * (x0 | 2)) << 2)
                        uint64_t* x7_1 = x4 + ((x6 + x9_24 * (x0 | 3)) << 2)
                        __prefetch(*x10_8)
                        __prefetch(*x9_25)
                        __prefetch(*lr_1)
                        __prefetch(*x7_1)
                        __prefetch(*x13_1)
                        float128 v21
                        float128 v22
                        float128 v23
                        int64_t x5_2
                        
                        if (x27 s< 1)
                            v3.q = 0
                            v3:8.q = 0
                            v6.q = 0
                            v6:8.q = 0
                            v16.q = 0
                            v16:8.q = 0
                            v20.q = 0
                            v20:8.q = 0
                            v2.q = 0
                            v2:8.q = 0
                            v5.q = 0
                            v5:8.q = 0
                            v7.q = 0
                            v7:8.q = 0
                            v19.q = 0
                            v19:8.q = 0
                            v1.q = 0
                            v1:8.q = 0
                            v4.q = 0
                            v4:8.q = 0
                            v17.q = 0
                            v17:8.q = 0
                            v18.q = 0
                            v18:8.q = 0
                            x5_2 = x13_1
                            
                            if (x27 s< arg6)
                            label_c4e964:
                                void* x16_2 = x16_1 + 0x100
                                int64_t i_8 = i_14
                                int64_t i
                                
                                do
                                    __prefetch(*x16_2)
                                    v21 = *(x16_2 - 0x100)
                                    v22 = *(x16_2 - 0xf0)
                                    v23 = *(x16_2 - 0xe0)
                                    *x5_2
                                    x5_2 += 0x10
                                    i = i_8
                                    i_8 -= 1
                                    x16_2 += 0x30
                                    v18 = vfmaq_n_f32(v18, v21, 0)
                                    v19 = vfmaq_n_f32(v19, v22, 0)
                                    v20 = vfmaq_n_f32(v20, v23, 0)
                                    v17 = vfmaq_n_f32(v17, v21, 1)
                                    v7 = vfmaq_n_f32(v7, v22, 1)
                                    v16 = vfmaq_n_f32(v16, v23, 1)
                                    v4 = vfmaq_n_f32(v4, v21, 2)
                                    v5 = vfmaq_n_f32(v5, v22, 2)
                                    v6 = vfmaq_n_f32(v6, v23, 2)
                                    v1 = vfmaq_n_f32(v1, v21, 3)
                                    v2 = vfmaq_n_f32(v2, v22, 3)
                                    v3 = vfmaq_n_f32(v3, v23, 3)
                                while (i != 1)
                        else
                            int64_t x4_1 = 0
                            v18.q = 0
                            v18:8.q = 0
                            x5_2 = x13_1
                            v17.q = 0
                            v17:8.q = 0
                            v4.q = 0
                            v4:8.q = 0
                            v1.q = 0
                            v1:8.q = 0
                            v19.q = 0
                            v19:8.q = 0
                            v7.q = 0
                            v7:8.q = 0
                            v5.q = 0
                            v5:8.q = 0
                            v2.q = 0
                            v2:8.q = 0
                            v20.q = 0
                            v20:8.q = 0
                            v16.q = 0
                            v16:8.q = 0
                            v6.q = 0
                            v6:8.q = 0
                            v3.q = 0
                            v3:8.q = 0
                            
                            do
                                __prefetch(*x5_2)
                                __prefetch(*(x16_1 + 0x100))
                                v21 = *x16_1
                                v22 = *(x16_1 + 0x10)
                                *x5_2
                                __prefetch(*(x16_1 + 0x130))
                                float128 v18_1 = vfmaq_n_f32(v18, v21, 0)
                                float128 v17_1 = vfmaq_n_f32(v17, v21, 1)
                                float128 v4_1 = vfmaq_n_f32(v4, v21, 2)
                                float128 v1_1 = vfmaq_n_f32(v1, v21, 3)
                                v23 = *(x16_1 + 0x20)
                                v21 = *(x16_1 + 0x30)
                                float128 v19_1 = vfmaq_n_f32(v19, v22, 0)
                                float128 v7_1 = vfmaq_n_f32(v7, v22, 1)
                                float128 v5_1 = vfmaq_n_f32(v5, v22, 2)
                                float128 v2_1 = vfmaq_n_f32(v2, v22, 3)
                                float128 v20_1 = vfmaq_n_f32(v20, v23, 0)
                                float128 v16_1 = vfmaq_n_f32(v16, v23, 1)
                                float128 v6_1 = vfmaq_n_f32(v6, v23, 2)
                                float128 v3_1 = vfmaq_n_f32(v3, v23, 3)
                                v22 = *(x16_1 + 0x40)
                                v23 = *(x16_1 + 0x50)
                                *(x5_2 + 0x10)
                                __prefetch(*(x16_1 + 0x160))
                                float128 v18_2 = vfmaq_n_f32(v18_1, v21, 0)
                                float128 v19_2 = vfmaq_n_f32(v19_1, v22, 0)
                                float128 v17_2 = vfmaq_n_f32(v17_1, v21, 1)
                                float128 v7_2 = vfmaq_n_f32(v7_1, v22, 1)
                                float128 v4_2 = vfmaq_n_f32(v4_1, v21, 2)
                                float128 v5_2 = vfmaq_n_f32(v5_1, v22, 2)
                                float128 v1_2 = vfmaq_n_f32(v1_1, v21, 3)
                                float128 v2_2 = vfmaq_n_f32(v2_1, v22, 3)
                                v21 = *(x16_1 + 0x60)
                                v22 = *(x16_1 + 0x70)
                                float128 v20_2 = vfmaq_n_f32(v20_1, v23, 0)
                                float128 v16_2 = vfmaq_n_f32(v16_1, v23, 1)
                                float128 v6_2 = vfmaq_n_f32(v6_1, v23, 2)
                                float128 v3_2 = vfmaq_n_f32(v3_1, v23, 3)
                                *(x5_2 + 0x20)
                                __prefetch(*(x16_1 + 0x190))
                                float128 v18_3 = vfmaq_n_f32(v18_2, v21, 0)
                                float128 v17_3 = vfmaq_n_f32(v17_2, v21, 1)
                                float128 v4_3 = vfmaq_n_f32(v4_2, v21, 2)
                                float128 v1_3 = vfmaq_n_f32(v1_2, v21, 3)
                                v23 = *(x16_1 + 0x80)
                                v21 = *(x16_1 + 0x90)
                                float128 v19_3 = vfmaq_n_f32(v19_2, v22, 0)
                                float128 v7_3 = vfmaq_n_f32(v7_2, v22, 1)
                                float128 v5_3 = vfmaq_n_f32(v5_2, v22, 2)
                                float128 v2_3 = vfmaq_n_f32(v2_2, v22, 3)
                                float128 v20_3 = vfmaq_n_f32(v20_2, v23, 0)
                                float128 v16_3 = vfmaq_n_f32(v16_2, v23, 1)
                                float128 v6_3 = vfmaq_n_f32(v6_2, v23, 2)
                                float128 v3_3 = vfmaq_n_f32(v3_2, v23, 3)
                                v22 = *(x16_1 + 0xa0)
                                v23 = *(x16_1 + 0xb0)
                                *(x5_2 + 0x30)
                                *(x5_2 + 0x40)
                                __prefetch(*(x16_1 + 0x1c0))
                                float128 v18_4 = vfmaq_n_f32(v18_3, v21, 0)
                                float128 v19_4 = vfmaq_n_f32(v19_3, v22, 0)
                                float128 v17_4 = vfmaq_n_f32(v17_3, v21, 1)
                                float128 v7_4 = vfmaq_n_f32(v7_3, v22, 1)
                                float128 v4_4 = vfmaq_n_f32(v4_3, v21, 2)
                                float128 v5_4 = vfmaq_n_f32(v5_3, v22, 2)
                                float128 v1_4 = vfmaq_n_f32(v1_3, v21, 3)
                                float128 v2_4 = vfmaq_n_f32(v2_3, v22, 3)
                                v21 = *(x16_1 + 0xc0)
                                v22 = *(x16_1 + 0xd0)
                                float128 v20_4 = vfmaq_n_f32(v20_3, v23, 0)
                                float128 v16_4 = vfmaq_n_f32(v16_3, v23, 1)
                                float128 v6_4 = vfmaq_n_f32(v6_3, v23, 2)
                                float128 v3_4 = vfmaq_n_f32(v3_3, v23, 3)
                                __prefetch(*(x16_1 + 0x1f0))
                                float128 v19_5 = vfmaq_n_f32(v19_4, v22, 0)
                                float128 v7_5 = vfmaq_n_f32(v7_4, v22, 1)
                                float128 v5_5 = vfmaq_n_f32(v5_4, v22, 2)
                                float128 v2_5 = vfmaq_n_f32(v2_4, v22, 3)
                                float128 v24 = *(x16_1 + 0xe0)
                                v22 = *(x16_1 + 0xf0)
                                float128 v18_5 = vfmaq_n_f32(v18_4, v21, 0)
                                float128 v17_5 = vfmaq_n_f32(v17_4, v21, 1)
                                float128 v4_5 = vfmaq_n_f32(v4_4, v21, 2)
                                float128 v1_5 = vfmaq_n_f32(v1_4, v21, 3)
                                v23 = *(x16_1 + 0x100)
                                v21 = *(x16_1 + 0x110)
                                float128 v20_5 = vfmaq_n_f32(v20_4, v24, 0)
                                float128 v16_5 = vfmaq_n_f32(v16_4, v24, 1)
                                float128 v6_5 = vfmaq_n_f32(v6_4, v24, 2)
                                float128 v3_5 = vfmaq_n_f32(v3_4, v24, 3)
                                *(x5_2 + 0x50)
                                __prefetch(*(x16_1 + 0x220))
                                float128 v18_6 = vfmaq_n_f32(v18_5, v22, 0)
                                float128 v19_6 = vfmaq_n_f32(v19_5, v23, 0)
                                float128 v17_6 = vfmaq_n_f32(v17_5, v22, 1)
                                float128 v7_6 = vfmaq_n_f32(v7_5, v23, 1)
                                float128 v4_6 = vfmaq_n_f32(v4_5, v22, 2)
                                float128 v5_6 = vfmaq_n_f32(v5_5, v23, 2)
                                float128 v1_6 = vfmaq_n_f32(v1_5, v22, 3)
                                float128 v2_6 = vfmaq_n_f32(v2_5, v23, 3)
                                v22 = *(x16_1 + 0x120)
                                v23 = *(x16_1 + 0x130)
                                float128 v20_6 = vfmaq_n_f32(v20_5, v21, 0)
                                float128 v16_6 = vfmaq_n_f32(v16_5, v21, 1)
                                float128 v6_6 = vfmaq_n_f32(v6_5, v21, 2)
                                float128 v3_6 = vfmaq_n_f32(v3_5, v21, 3)
                                *(x5_2 + 0x60)
                                __prefetch(*(x16_1 + 0x250))
                                float128 v18_7 = vfmaq_n_f32(v18_6, v22, 0)
                                float128 v17_7 = vfmaq_n_f32(v17_6, v22, 1)
                                float128 v4_7 = vfmaq_n_f32(v4_6, v22, 2)
                                float128 v1_7 = vfmaq_n_f32(v1_6, v22, 3)
                                v21 = *(x16_1 + 0x140)
                                v22 = *(x16_1 + 0x150)
                                float128 v19_7 = vfmaq_n_f32(v19_6, v23, 0)
                                float128 v7_7 = vfmaq_n_f32(v7_6, v23, 1)
                                float128 v5_7 = vfmaq_n_f32(v5_6, v23, 2)
                                float128 v2_7 = vfmaq_n_f32(v2_6, v23, 3)
                                float128 v20_7 = vfmaq_n_f32(v20_6, v21, 0)
                                float128 v16_7 = vfmaq_n_f32(v16_6, v21, 1)
                                float128 v6_7 = vfmaq_n_f32(v6_6, v21, 2)
                                float128 v3_7 = vfmaq_n_f32(v3_6, v21, 3)
                                v23 = *(x16_1 + 0x160)
                                v21 = *(x16_1 + 0x170)
                                *(x5_2 + 0x70)
                                x4_1 += 8
                                x5_2 += 0x80
                                x16_1 += 0x180
                                v18 = vfmaq_n_f32(v18_7, v22, 0)
                                v19 = vfmaq_n_f32(v19_7, v23, 0)
                                v20 = vfmaq_n_f32(v20_7, v21, 0)
                                v17 = vfmaq_n_f32(v17_7, v22, 1)
                                v7 = vfmaq_n_f32(v7_7, v23, 1)
                                v16 = vfmaq_n_f32(v16_7, v21, 1)
                                v4 = vfmaq_n_f32(v4_7, v22, 2)
                                v5 = vfmaq_n_f32(v5_7, v23, 2)
                                v6 = vfmaq_n_f32(v6_7, v21, 2)
                                v1 = vfmaq_n_f32(v1_7, v22, 3)
                                v2 = vfmaq_n_f32(v2_7, v23, 3)
                                v3 = vfmaq_n_f32(v3_7, v21, 3)
                            while (x4_1 s< x27)
                            
                            if (x27 s< arg6)
                                goto label_c4e964
                        v22 = *(x10_8 + 0x10)
                        v23 = *(x10_8 + 0x20)
                        x6 += 0xc
                        v21 = vfmaq_f32(*x10_8, v26_1, v18)
                        v22 = vfmaq_f32(v22, v26_1, v19)
                        v23 = vfmaq_f32(v23, v26_1, v20)
                        *x10_8 = v21
                        *(x10_8 + 0x10) = v22
                        *(x10_8 + 0x20) = v23
                        v19 = *(x9_25 + 0x10)
                        v20 = *(x9_25 + 0x20)
                        v18 = vfmaq_f32(*x9_25, v26_1, v17)
                        v19 = vfmaq_f32(v19, v26_1, v7)
                        v20 = vfmaq_f32(v20, v26_1, v16)
                        *x9_25 = v18
                        *(x9_25 + 0x10) = v19
                        *(x9_25 + 0x20) = v20
                        v16 = *(lr_1 + 0x10)
                        v17 = *(lr_1 + 0x20)
                        v7 = vfmaq_f32(*lr_1, v26_1, v4)
                        v16 = vfmaq_f32(v16, v26_1, v5)
                        v17 = vfmaq_f32(v17, v26_1, v6)
                        *lr_1 = v7
                        *(lr_1 + 0x10) = v16
                        *(lr_1 + 0x20) = v17
                        v5 = *(x7_1 + 0x10)
                        v6 = *(x7_1 + 0x20)
                        v4 = vfmaq_f32(*x7_1, v26_1, v1)
                        v5 = vfmaq_f32(v5, v26_1, v2)
                        v6 = vfmaq_f32(v6, v26_1, v3)
                        *x7_1 = v4
                        *(x7_1 + 0x10) = v5
                        *(x7_1 + 0x20) = v6
                    while (x6 s< x17_1)
                
                x0 += 4
            while (x0 s< x28)
        
        x5 = var_90
        int64_t x9_26 = x28
        
        if (x28 s< arg8)
            do
                if (x11_2 s< x17_1)
                    int64_t x10_10 = arg4 + ((x5 + x9_26 * x26) << 2)
                    int64_t x13_2 = x11_2
                    
                    do
                        void* x0_1 = &arg3[x14_1 + x13_2 * x24]
                        __prefetch(*x0_1)
                        float128* x16_4 = *arg2 i+ ((x13_2 + *(arg2 + 8) * x9_26) << 2)
                        __prefetch(*x16_4)
                        int64_t x1_1
                        int64_t i_7
                        
                        if (x27 s< 1)
                            v2.q = 0
                            v2:8.q = 0
                            v3.q = 0
                            v3:8.q = 0
                            v1.q = 0
                            v1:8.q = 0
                            x1_1 = x10_10
                            i_7 = i_14
                            
                            if (x27 s< arg6)
                            label_c4eb68:
                                int64_t i_1
                                
                                do
                                    v4 = *x0_1
                                    v5 = *(x0_1 + 0x10)
                                    v6 = *(x0_1 + 0x20)
                                    int32_t temp0_2 = *x1_1
                                    v7.d = temp0_2
                                    v7:4.d = temp0_2
                                    v7:8.d = temp0_2
                                    v7:0xc.d = temp0_2
                                    i_1 = i_7
                                    i_7 -= 1
                                    x0_1 += 0x30
                                    v1 = vfmaq_f32(v1, v7, v4)
                                    v3 = vfmaq_f32(v3, v7, v5)
                                    v2 = vfmaq_f32(v2, v7, v6)
                                while (i_1 != 1)
                        else
                            int64_t x2_1 = 0
                            v1.q = 0
                            v1:8.q = 0
                            x1_1 = x10_10
                            v3.q = 0
                            v3:8.q = 0
                            v2.q = 0
                            v2:8.q = 0
                            
                            do
                                v6 = *(x0_1 + 0x10)
                                int32_t temp0_1 = *x1_1
                                v7.d = temp0_1
                                v7:4.d = temp0_1
                                v7:8.d = temp0_1
                                v7:0xc.d = temp0_1
                                float128 v1_8 = vfmaq_f32(v1, v7, *x0_1)
                                v5 = *(x0_1 + 0x20)
                                v4 = *(x0_1 + 0x30)
                                float128 v3_8 = vfmaq_f32(v3, v7, v6)
                                x2_1 += 8
                                float128 v2_8 = vfmaq_f32(v2, v7, v5)
                                v6 = *(x0_1 + 0x40)
                                v5 = *(x0_1 + 0x50)
                                v7.d = *x1_1
                                float128 v1_9 = vfmaq_n_f32(v1_8, v4, 0)
                                float128 v3_9 = vfmaq_n_f32(v3_8, v6, 0)
                                v4 = *(x0_1 + 0x60)
                                v6 = *(x0_1 + 0x70)
                                float128 v2_9 = vfmaq_n_f32(v2_8, v5, 0)
                                v7.d = *(x1_1 + 8)
                                float128 v1_10 = vfmaq_n_f32(v1_9, v4, 0)
                                v5 = *(x0_1 + 0x80)
                                v4 = *(x0_1 + 0x90)
                                float128 v3_10 = vfmaq_n_f32(v3_9, v6, 0)
                                float128 v2_10 = vfmaq_n_f32(v2_9, v5, 0)
                                v6 = *(x0_1 + 0xa0)
                                v5 = *(x0_1 + 0xb0)
                                v7.d = *(x1_1 + 0xc)
                                float128 v1_11 = vfmaq_n_f32(v1_10, v4, 0)
                                float128 v3_11 = vfmaq_n_f32(v3_10, v6, 0)
                                v4 = *(x0_1 + 0xc0)
                                v6 = *(x0_1 + 0xd0)
                                float128 v2_11 = vfmaq_n_f32(v2_10, v5, 0)
                                v7.d = *(x1_1 + 0x10)
                                float128 v1_12 = vfmaq_n_f32(v1_11, v4, 0)
                                v5 = *(x0_1 + 0xe0)
                                v4 = *(x0_1 + 0xf0)
                                float128 v3_12 = vfmaq_n_f32(v3_11, v6, 0)
                                float128 v2_12 = vfmaq_n_f32(v2_11, v5, 0)
                                v6 = *(x0_1 + 0x100)
                                v5 = *(x0_1 + 0x110)
                                v7.d = *(x1_1 + 0x14)
                                float128 v1_13 = vfmaq_n_f32(v1_12, v4, 0)
                                float128 v3_13 = vfmaq_n_f32(v3_12, v6, 0)
                                v4 = *(x0_1 + 0x120)
                                v6 = *(x0_1 + 0x130)
                                float128 v2_13 = vfmaq_n_f32(v2_12, v5, 0)
                                v7.d = *(x1_1 + 0x18)
                                float128 v1_14 = vfmaq_n_f32(v1_13, v4, 0)
                                v5 = *(x0_1 + 0x140)
                                v4 = *(x0_1 + 0x150)
                                float128 v3_14 = vfmaq_n_f32(v3_13, v6, 0)
                                float128 v2_14 = vfmaq_n_f32(v2_13, v5, 0)
                                v6 = *(x0_1 + 0x160)
                                v5 = *(x0_1 + 0x170)
                                v7.d = *(x1_1 + 0x1c)
                                x1_1 += 0x20
                                x0_1 += 0x180
                                v1 = vfmaq_n_f32(v1_14, v4, 0)
                                v3 = vfmaq_n_f32(v3_14, v6, 0)
                                v2 = vfmaq_n_f32(v2_14, v5, 0)
                            while (x2_1 s< x27)
                            
                            i_7 = i_14
                            
                            if (x27 s< arg6)
                                goto label_c4eb68
                        v5 = x16_4[1]
                        v6 = x16_4[2]
                        x13_2 += 0xc
                        v4 = vfmaq_f32(*x16_4, v26_1, v1)
                        v5 = vfmaq_f32(v5, v26_1, v3)
                        v6 = vfmaq_f32(v6, v26_1, v2)
                        *x16_4 = v4
                        x16_4[1] = v5
                        x16_4[2] = v6
                    while (x13_2 s< x17_1)
                
                x9_26 += 1
            while (x9_26 != arg8)
        
        x11_2 = x9_20
    while (x11_2 s< x8_1)

int64_t x4_2 = x12_2
uint64_t x9_28 = (0x3f40 - (arg6 << 4)) u/ (arg6 << 5)
uint64_t x9_29

x9_29 = x9_28 s> 1 ? x9_28 : 1

int64_t x10_14 = x9_15 + x9_12

if (x9_2 s>= 8)
    int64_t x10_15 = arg11 << 3
    int64_t x11_4 = x5 << 2
    float128 v21_1 = vdupq_laneq_s32(arg7, 0)
    int64_t i_13 = arg6 - x27
    
    do
        int64_t x9_32 = x8_1 + (x9_29 << 3)
        int64_t x14_2
        
        x14_2 = x4_2 s< x9_32 ? x4_2 : x9_32
        
        if (arg8 s>= 4)
            int64_t x15_1 = 0
            
            do
                if (x8_1 s< x14_2)
                    int64_t x1_2 = arg4 + ((x11_4 + x15_1 * x26) << 2)
                    int64_t x2_2 = x8_1
                    
                    do
                        void* x5_3 = &arg3[x10_15 + x2_2 * x24]
                        __prefetch(*x5_3)
                        int64_t x13_3 = *arg2
                        int64_t x9_35 = *(arg2 + 8)
                        float128* x7_2 = x13_3 + ((x2_2 + x9_35 * x15_1) << 2)
                        float128* x6_1 = x13_3 + ((x2_2 + x9_35 * (x15_1 | 1)) << 2)
                        float128* x3_3 = x13_3 + ((x2_2 + x9_35 * (x15_1 | 3)) << 2)
                        float128* x4_4 = x13_3 + ((x2_2 + x9_35 * (x15_1 | 2)) << 2)
                        __prefetch(x7_2[2].q)
                        __prefetch(x6_1[2].q)
                        __prefetch(x4_4[2].q)
                        __prefetch(x3_3[2].q)
                        __prefetch(*x1_2)
                        int64_t i_9
                        void* lr_3
                        
                        if (x27 s< 1)
                            v4.q = 0
                            v4:8.q = 0
                            v5.q = 0
                            v5:8.q = 0
                            v7.q = 0
                            v7:8.q = 0
                            v16.q = 0
                            v16:8.q = 0
                            v2.q = 0
                            v2:8.q = 0
                            v3.q = 0
                            v3:8.q = 0
                            v6.q = 0
                            v6:8.q = 0
                            v1.q = 0
                            v1:8.q = 0
                            lr_3 = x1_2
                            i_9 = i_13
                            
                            if (x27 s< arg6)
                            label_c4eec0:
                                int64_t i_2
                                
                                do
                                    v17 = *x5_3
                                    v18 = *(x5_3 + 0x10)
                                    x5_3 += 0x20
                                    *lr_3
                                    lr_3 += 0x10
                                    i_2 = i_9
                                    i_9 -= 1
                                    v1 = vfmaq_n_f32(v1, v17, 0)
                                    v16 = vfmaq_n_f32(v16, v18, 0)
                                    v6 = vfmaq_n_f32(v6, v17, 1)
                                    v7 = vfmaq_n_f32(v7, v18, 1)
                                    v3 = vfmaq_n_f32(v3, v17, 2)
                                    v5 = vfmaq_n_f32(v5, v18, 2)
                                    v2 = vfmaq_n_f32(v2, v17, 3)
                                    v4 = vfmaq_n_f32(v4, v18, 3)
                                while (i_2 != 1)
                        else
                            int64_t x9_41 = 0
                            v1.q = 0
                            v1:8.q = 0
                            lr_3 = x1_2
                            v6.q = 0
                            v6:8.q = 0
                            v3.q = 0
                            v3:8.q = 0
                            v2.q = 0
                            v2:8.q = 0
                            v16.q = 0
                            v16:8.q = 0
                            v7.q = 0
                            v7:8.q = 0
                            v5.q = 0
                            v5:8.q = 0
                            v4.q = 0
                            v4:8.q = 0
                            
                            do
                                __prefetch(*(lr_3 + 0xc0))
                                *lr_3
                                v18 = *x5_3
                                v19 = *(x5_3 + 0x10)
                                float128 v1_15 = vfmaq_n_f32(v1, v18, 0)
                                float128 v6_8 = vfmaq_n_f32(v6, v18, 1)
                                float128 v3_15 = vfmaq_n_f32(v3, v18, 2)
                                float128 v2_15 = vfmaq_n_f32(v2, v18, 3)
                                *(lr_3 + 0x10)
                                float128 v16_8 = vfmaq_n_f32(v16, v19, 0)
                                float128 v7_8 = vfmaq_n_f32(v7, v19, 1)
                                float128 v5_8 = vfmaq_n_f32(v5, v19, 2)
                                float128 v4_8 = vfmaq_n_f32(v4, v19, 3)
                                v17 = *(x5_3 + 0x20)
                                v19 = *(x5_3 + 0x30)
                                x9_41 += 8
                                float128 v1_16 = vfmaq_n_f32(v1_15, v17, 0)
                                float128 v6_9 = vfmaq_n_f32(v6_8, v17, 1)
                                float128 v3_16 = vfmaq_n_f32(v3_15, v17, 2)
                                float128 v2_16 = vfmaq_n_f32(v2_15, v17, 3)
                                *(lr_3 + 0x20)
                                float128 v16_9 = vfmaq_n_f32(v16_8, v19, 0)
                                float128 v7_9 = vfmaq_n_f32(v7_8, v19, 1)
                                float128 v5_9 = vfmaq_n_f32(v5_8, v19, 2)
                                float128 v4_9 = vfmaq_n_f32(v4_8, v19, 3)
                                v18 = *(x5_3 + 0x40)
                                v19 = *(x5_3 + 0x50)
                                float128 v1_17 = vfmaq_n_f32(v1_16, v18, 0)
                                float128 v16_10 = vfmaq_n_f32(v16_9, v19, 0)
                                float128 v6_10 = vfmaq_n_f32(v6_9, v18, 1)
                                float128 v7_10 = vfmaq_n_f32(v7_9, v19, 1)
                                float128 v3_17 = vfmaq_n_f32(v3_16, v18, 2)
                                float128 v5_10 = vfmaq_n_f32(v5_9, v19, 2)
                                float128 v2_17 = vfmaq_n_f32(v2_16, v18, 3)
                                float128 v4_10 = vfmaq_n_f32(v4_9, v19, 3)
                                v17 = *(x5_3 + 0x60)
                                v18 = *(x5_3 + 0x70)
                                *(lr_3 + 0x30)
                                __prefetch(*(lr_3 + 0x100))
                                float128 v1_18 = vfmaq_n_f32(v1_17, v17, 0)
                                float128 v6_11 = vfmaq_n_f32(v6_10, v17, 1)
                                float128 v3_18 = vfmaq_n_f32(v3_17, v17, 2)
                                float128 v2_18 = vfmaq_n_f32(v2_17, v17, 3)
                                *(lr_3 + 0x40)
                                float128 v16_11 = vfmaq_n_f32(v16_10, v18, 0)
                                float128 v7_11 = vfmaq_n_f32(v7_10, v18, 1)
                                float128 v5_11 = vfmaq_n_f32(v5_10, v18, 2)
                                float128 v4_11 = vfmaq_n_f32(v4_10, v18, 3)
                                v18 = *(x5_3 + 0x80)
                                v19 = *(x5_3 + 0x90)
                                float128 v1_19 = vfmaq_n_f32(v1_18, v18, 0)
                                float128 v6_12 = vfmaq_n_f32(v6_11, v18, 1)
                                float128 v3_19 = vfmaq_n_f32(v3_18, v18, 2)
                                float128 v2_19 = vfmaq_n_f32(v2_18, v18, 3)
                                *(lr_3 + 0x50)
                                float128 v16_12 = vfmaq_n_f32(v16_11, v19, 0)
                                float128 v7_12 = vfmaq_n_f32(v7_11, v19, 1)
                                float128 v5_12 = vfmaq_n_f32(v5_11, v19, 2)
                                float128 v4_12 = vfmaq_n_f32(v4_11, v19, 3)
                                v17 = *(x5_3 + 0xa0)
                                v19 = *(x5_3 + 0xb0)
                                float128 v1_20 = vfmaq_n_f32(v1_19, v17, 0)
                                float128 v6_13 = vfmaq_n_f32(v6_12, v17, 1)
                                float128 v3_20 = vfmaq_n_f32(v3_19, v17, 2)
                                float128 v2_20 = vfmaq_n_f32(v2_19, v17, 3)
                                *(lr_3 + 0x60)
                                float128 v16_13 = vfmaq_n_f32(v16_12, v19, 0)
                                float128 v7_13 = vfmaq_n_f32(v7_12, v19, 1)
                                float128 v5_13 = vfmaq_n_f32(v5_12, v19, 2)
                                float128 v4_13 = vfmaq_n_f32(v4_12, v19, 3)
                                v18 = *(x5_3 + 0xc0)
                                v19 = *(x5_3 + 0xd0)
                                float128 v1_21 = vfmaq_n_f32(v1_20, v18, 0)
                                float128 v16_14 = vfmaq_n_f32(v16_13, v19, 0)
                                float128 v6_14 = vfmaq_n_f32(v6_13, v18, 1)
                                float128 v7_14 = vfmaq_n_f32(v7_13, v19, 1)
                                float128 v3_21 = vfmaq_n_f32(v3_20, v18, 2)
                                float128 v5_14 = vfmaq_n_f32(v5_13, v19, 2)
                                float128 v2_21 = vfmaq_n_f32(v2_20, v18, 3)
                                float128 v4_14 = vfmaq_n_f32(v4_13, v19, 3)
                                v17 = *(x5_3 + 0xe0)
                                v18 = *(x5_3 + 0xf0)
                                *(lr_3 + 0x70)
                                lr_3 += 0x80
                                x5_3 += 0x100
                                v1 = vfmaq_n_f32(v1_21, v17, 0)
                                v16 = vfmaq_n_f32(v16_14, v18, 0)
                                v6 = vfmaq_n_f32(v6_14, v17, 1)
                                v7 = vfmaq_n_f32(v7_14, v18, 1)
                                v3 = vfmaq_n_f32(v3_21, v17, 2)
                                v5 = vfmaq_n_f32(v5_14, v18, 2)
                                v2 = vfmaq_n_f32(v2_21, v17, 3)
                                v4 = vfmaq_n_f32(v4_14, v18, 3)
                            while (x9_41 s< x27)
                            
                            i_9 = i_13
                            
                            if (x27 s< arg6)
                                goto label_c4eec0
                        v18 = x7_2[1]
                        v19 = *x6_1
                        v20 = x6_1[1]
                        x2_2 += 8
                        v17 = vfmaq_f32(*x7_2, v21_1, v1)
                        v18 = vfmaq_f32(v18, v21_1, v16)
                        v19 = vfmaq_f32(v19, v21_1, v6)
                        v20 = vfmaq_f32(v20, v21_1, v7)
                        *x7_2 = v17
                        x7_2[1] = v18
                        *x6_1 = v19
                        x6_1[1] = v20
                        v6 = x4_4[1]
                        v7 = *x3_3
                        v16 = x3_3[1]
                        v1 = vfmaq_f32(*x4_4, v21_1, v3)
                        v6 = vfmaq_f32(v6, v21_1, v5)
                        v7 = vfmaq_f32(v7, v21_1, v2)
                        v16 = vfmaq_f32(v16, v21_1, v4)
                        *x4_4 = v1
                        x4_4[1] = v6
                        *x3_3 = v7
                        x3_3[1] = v16
                    while (x2_2 s< x14_2)
                
                x15_1 += 4
            while (x15_1 s< x28)
        
        x5 = var_90
        int64_t x9_42 = x28
        
        if (x28 s< arg8)
            do
                if (x8_1 s< x14_2)
                    void* x15_2 = arg4 + ((x5 + x9_42 * x26) << 2)
                    int64_t x16_6 = x8_1
                    
                    do
                        void* x0_3 = &arg3[x10_15 + x16_6 * x24]
                        __prefetch(*x0_3)
                        float128* x17_4 = *arg2 i+ ((x16_6 + *(arg2 + 8) * x9_42) << 2)
                        __prefetch(x17_4[2].q)
                        void* x1_3
                        int64_t i_10
                        
                        if (x27 s< 1)
                            v2.q = 0
                            v2:8.q = 0
                            v1.q = 0
                            v1:8.q = 0
                            x1_3 = x15_2
                            i_10 = i_13
                            
                            if (x27 s< arg6)
                            label_c4f028:
                                int64_t i_3
                                
                                do
                                    v3 = *x0_3
                                    v4 = *(x0_3 + 0x10)
                                    x0_3 += 0x20
                                    int32_t temp0_4 = *x1_3
                                    v5.d = temp0_4
                                    v5:4.d = temp0_4
                                    v5:8.d = temp0_4
                                    v5:0xc.d = temp0_4
                                    i_3 = i_10
                                    i_10 -= 1
                                    v2 = vfmaq_f32(v2, v5, v3)
                                    v1 = vfmaq_f32(v1, v5, v4)
                                while (i_3 != 1)
                        else
                            int64_t x2_3 = 0
                            v1.q = 0
                            v1:8.q = 0
                            x1_3 = x15_2
                            v2.q = 0
                            v2:8.q = 0
                            
                            do
                                v4 = *(x0_3 + 0x10)
                                int32_t temp0_3 = *x1_3
                                v5.d = temp0_3
                                v5:4.d = temp0_3
                                v5:8.d = temp0_3
                                v5:0xc.d = temp0_3
                                float128 v2_22 = vfmaq_f32(v2, v5, *x0_3)
                                float128 v1_22 = vfmaq_f32(v1, v5, v4)
                                v4 = *(x0_3 + 0x30)
                                v5.d = *x1_3
                                float128 v2_23 = vfmaq_n_f32(v2_22, *(x0_3 + 0x20), 0)
                                float128 v1_23 = vfmaq_n_f32(v1_22, v4, 0)
                                v4 = *(x0_3 + 0x50)
                                v5.d = *(x1_3 + 8)
                                float128 v2_24 = vfmaq_n_f32(v2_23, *(x0_3 + 0x40), 0)
                                float128 v1_24 = vfmaq_n_f32(v1_23, v4, 0)
                                v4 = *(x0_3 + 0x70)
                                v5.d = *(x1_3 + 0xc)
                                float128 v2_25 = vfmaq_n_f32(v2_24, *(x0_3 + 0x60), 0)
                                float128 v1_25 = vfmaq_n_f32(v1_24, v4, 0)
                                v4 = *(x0_3 + 0x90)
                                v5.d = *(x1_3 + 0x10)
                                float128 v2_26 = vfmaq_n_f32(v2_25, *(x0_3 + 0x80), 0)
                                float128 v1_26 = vfmaq_n_f32(v1_25, v4, 0)
                                v4 = *(x0_3 + 0xb0)
                                v5.d = *(x1_3 + 0x14)
                                float128 v2_27 = vfmaq_n_f32(v2_26, *(x0_3 + 0xa0), 0)
                                float128 v1_27 = vfmaq_n_f32(v1_26, v4, 0)
                                v4 = *(x0_3 + 0xd0)
                                v5.d = *(x1_3 + 0x18)
                                float128 v2_28 = vfmaq_n_f32(v2_27, *(x0_3 + 0xc0), 0)
                                float128 v1_28 = vfmaq_n_f32(v1_27, v4, 0)
                                v3 = *(x0_3 + 0xe0)
                                v4 = *(x0_3 + 0xf0)
                                v5.d = *(x1_3 + 0x1c)
                                x2_3 += 8
                                x1_3 += 0x20
                                x0_3 += 0x100
                                v2 = vfmaq_n_f32(v2_28, v3, 0)
                                v1 = vfmaq_n_f32(v1_28, v4, 0)
                            while (x2_3 s< x27)
                            
                            i_10 = i_13
                            
                            if (x27 s< arg6)
                                goto label_c4f028
                        v4 = x17_4[1]
                        x16_6 += 8
                        v3 = vfmaq_f32(*x17_4, v21_1, v2)
                        v4 = vfmaq_f32(v4, v21_1, v1)
                        *x17_4 = v3
                        x17_4[1] = v4
                    while (x16_6 s< x14_2)
                
                x9_42 += 1
            while (x9_42 != arg8)
        
        x4_2 = x12_2
        x8_1 = x9_32
    while (x8_1 s< x4_2)

int64_t var_140 = arg11
int64_t var_138 = x5
int64_t var_110 = arg6
int64_t var_108 = x28
int64_t var_120 = 8
int64_t var_118 = arg8
int64_t var_128 = x27
int32_t var_130 = 8
int64_t var_80
var_80.o = arg7.o
void var_68
Eigen::internal::lhs_process_one_packet<4, 4l, 1l, float, float, float, __Float32x4_t, __Float32x4_t, float, __Float32x4_t, Eigen::internal::gebp_traits<float, float, false, false, 4, 0>, Eigen::internal::BlasLinearMapper<float, int64_t, 0, 1>, Eigen::internal::blas_data_mapper<float, int64_t, 0, 0, 1> >::operator()(
    &var_68, arg2, arg3, arg4, x4_2, x10_5, x24, x26, arg7)
int64_t var_120_1 = 8
int64_t var_118_1 = arg8
int32_t var_130_1 = 8
int64_t var_110_1 = arg6
int64_t var_108_1 = x28
int64_t var_128_1 = x27
int64_t var_140_1 = arg11
int64_t var_138_1 = var_90
Eigen::internal::blas_data_mapper<float, int64_t, 0, 0, 1> var_70
void* result
uint128_t v0_1
float128 v1_29
float128 v2_29
float128 v3_22
float128 v4_15
float128 v5_15
float128 v6_15
float128 v7_15
int128_t v16_15
float128 v17_8
uint128_t v18_8
result, v0_1, v1_29, v2_29, v3_22, v4_15, v5_15, v6_15, v7_15, v16_15, v17_8, v18_8 = Eigen::internal::lhs_process_one_packet<4, 2l, 1l, float, float, float, __Float32x2_t, __Float32x2_t, __Float32x2_t, __Float32x2_t, Eigen::internal::gebp_traits<float, float, false, false, 4, 1>, Eigen::internal::BlasLinearMapper<float, int64_t, 0, 1>, Eigen::internal::blas_data_mapper<float, int64_t, 0, 0, 1> >::operator()(
    &var_70, arg2, arg3, arg4, x10_5, x9_12, x24, x26, var_80.o)
v18_8 = var_80.o

if (x10_14 s< arg5)
    if (arg8 s>= 4)
        int64_t x11_6
        
        if (arg6 s< 0)
            x11_6 = arg6 + 3
        else
            x11_6 = arg6
        
        int64_t x8_3 = 0
        v0_1 = vdupq_laneq_s32(v18_8, 0)
        
        do
            int64_t x13_13 = arg4 + (((var_90 << 2) + x8_3 * x26) << 2)
            int64_t x14_3 = x10_14
            
            if (arg6 s<= 3)
                do
                    void* x15_6 = &arg3[arg11 + x14_3 * x24]
                    v1_29.q = 0
                    v1_29:8.q = 0
                    __prefetch(*x15_6)
                    
                    if (arg6 s>= 1)
                        int64_t i_11 = arg6
                        int64_t x17_7 = x13_13
                        int64_t i_4
                        
                        do
                            v2_29 = *x17_7
                            x17_7 += 0x10
                            int32_t temp0_5 = *x15_6
                            v3_22.d = temp0_5
                            v3_22:4.d = temp0_5
                            v3_22:8.d = temp0_5
                            v3_22:0xc.d = temp0_5
                            i_4 = i_11
                            i_11 -= 1
                            v1_29 = vfmaq_f32(v1_29, v3_22, v2_29)
                        while (i_4 != 1)
                    
                    int64_t x15_3 = *(arg2 + 8)
                    int32_t* x16_8 = *arg2 i+ ((x14_3 + x15_3 * x8_3) << 2)
                    v2_29.d = *x16_8
                    void* x17_6 = &x16_8[x15_3]
                    result = &x16_8[x15_3 * 2]
                    int32_t* x15_4 = x16_8 + x15_3 * 0xc
                    v2_29:4.d = *x17_6
                    x14_3 += 1
                    v2_29:8.d = *result
                    v2_29:0xc.d = *x15_4
                    v2_29 = vfmaq_f32(v2_29, v0_1, v1_29)
                    *x16_8 = v2_29.d
                    *x17_6 = v2_29:4.d
                    *result = v2_29:8.d
                    *x15_4 = v2_29:0xc.d
                while (x14_3 s< arg5)
            else
                int64_t x14_4 = x10_14
                
                do
                    int64_t i_5 = 0
                    v1_29.q = 0
                    v1_29:8.q = 0
                    void* x15_9 = x13_13
                    v2_29.q = 0
                    v2_29:8.q = 0
                    v3_22.q = 0
                    v3_22:8.q = 0
                    void* x16_12 = &arg3[arg11 + x14_4 * x24]
                    v4_15.q = 0
                    v4_15:8.q = 0
                    __prefetch(*x16_12)
                    
                    do
                        void* x0_6 = x16_12
                        v6_15 = *(x15_9 + 0x10)
                        int32_t temp0_6 = *x0_6
                        v7_15.d = temp0_6
                        v7_15:4.d = temp0_6
                        v7_15:8.d = temp0_6
                        v7_15:0xc.d = temp0_6
                        i_5 += 4
                        v4_15 = vfmaq_f32(v4_15, v7_15, *x15_9)
                        v17_8 = *(x15_9 + 0x20)
                        v5_15 = *(x15_9 + 0x30)
                        v16_15.d = *(x16_12 + 8)
                        v7_15.d = *(x16_12 + 0xc)
                        x15_9 += 0x40
                        x16_12 += 0x10
                        v2_29 = vfmaq_n_f32(v2_29, v17_8, 0)
                        v16_15.d = *x0_6
                        v1_29 = vfmaq_n_f32(v1_29, v5_15, 0)
                        v3_22 = vfmaq_n_f32(v3_22, v6_15, 0)
                    while (i_5 s< (x11_6 & 0xfffffffffffffffc))
                    
                    v1_29 = vaddq_f32(vaddq_f32(v4_15, v3_22), vaddq_f32(v2_29, v1_29))
                    
                    if (i_5 s< arg6)
                        int64_t x0_7 = 0
                        
                        do
                            v2_29 = *(x15_9 + (x0_7 << 4))
                            v3_22.d = *(x16_12 + (x0_7 << 2))
                            x0_7 += 1
                            v1_29 = vfmaq_n_f32(v1_29, v2_29, 0)
                        while (neg.q(arg6) + i_5 != neg.q(x0_7))
                    
                    int64_t x15_7 = *(arg2 + 8)
                    int32_t* x16_10 = *arg2 i+ ((x14_4 + x15_7 * x8_3) << 2)
                    v2_29.d = *x16_10
                    void* x17_9 = &x16_10[x15_7]
                    result = &x16_10[x15_7 * 2]
                    int32_t* x15_8 = x16_10 + x15_7 * 0xc
                    v2_29:4.d = *x17_9
                    x14_4 += 1
                    v2_29:8.d = *result
                    v2_29:0xc.d = *x15_8
                    v2_29 = vfmaq_f32(v2_29, v0_1, v1_29)
                    *x16_10 = v2_29.d
                    *x17_9 = v2_29:4.d
                    *result = v2_29:8.d
                    *x15_8 = v2_29:0xc.d
                while (x14_4 s< arg5)
            
            x8_3 += 4
        while (x8_3 s< x28)
    
    if (x28 s< arg8)
        v0_1.d = 0f
        v0_1.d = v18_8.d f* v0_1.d
        int64_t x9_47 = arg4 + ((var_90 + ((x26 * (x9_1 s>> 2)) << 2)) << 2)
        int64_t x8_6 = x24 << 2
        void* x10_23 = &arg3[arg11 + x24 * (arg5 + x9_6 + x14 + x9_11 + x9_15 - x10_3)]
        
        do
            void* x14_5 = x10_23
            int64_t x15_10 = x10_14
            void* x12_16 = x10_23
            int64_t x13_14 = x10_14
            
            if (arg6 s<= 0)
                do
                    __prefetch(*x14_5)
                    int32_t* x13_15 = *arg2
                    x14_5 += x8_6
                    *(arg2 + 8)
                    v1_29.d = x13_15[x15_10 + x28 * *(arg2 + 8)]
                    x15_10 += 1
                    v1_29.d = v0_1.d f+ v1_29.d
                    x13_15[x15_10 + x28 * *(arg2 + 8)] = v1_29.d
                while (x15_10 s< arg5)
            else
                do
                    __prefetch(*(arg3 + ((arg11 + x13_14 * x24) << 2)))
                    v1_29.d = 0f
                    void* x14_8 = x12_16
                    int64_t x15_11 = x9_47
                    int64_t i_12 = arg6
                    int64_t i_6
                    
                    do
                        v2_29.d = *x14_8
                        x14_8 += 4
                        v3_22.d = *x15_11
                        x15_11 += 4
                        i_6 = i_12
                        i_12 -= 1
                        v2_29.d = v2_29.d f* v3_22.d
                        v1_29.d = v1_29.d f+ v2_29.d
                    while (i_6 != 1)
                    int32_t* x15_12 = *arg2
                    v1_29.d = v1_29.d f* v18_8.d
                    x12_16 += x8_6
                    *(arg2 + 8)
                    v2_29.d = x15_12[x13_14 + *(arg2 + 8) * x28]
                    x13_14 += 1
                    v1_29.d = v1_29.d f+ v2_29.d
                    x15_12[x13_14 + *(arg2 + 8) * x28] = v1_29.d
                while (x13_14 s< arg5)
            
            x28 += 1
            x9_47 += x26 << 2
        while (x28 != arg8)

return result
