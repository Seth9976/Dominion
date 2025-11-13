// 函数: _ZN5Eigen8internal29general_matrix_vector_productIlfNS0_22const_blas_data_mapperIflLi0EEELi0ELb0EfNS2_IflLi1EEELb0ELi0EE3runEllRKS3_RKS4_Pflf
// 地址: 0xc4cddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x7 = *(arg3 + 8)
int64_t x8

if ((x7 u>> 6 & 0xffffffffffffff) u< 0x7d)
    x8 = 0x10
else
    x8 = 4

int64_t x8_1

x8_1 = arg2 s< 0x80 ? arg2 : x8

if (arg2 s< 1)
    return 

int64_t* x11_1 = *arg3
uint128_t v3
v3.d = 0f
int64_t x2 = x7 << 2
int64_t x7_1 = x8_1 * x7
v3.d = arg7 f* v3.d
int64_t x9_1 = 0
int64_t x10_1 = 0
int64_t x24_1 = 0
uint128_t v1_1 = vdupq_laneq_s32(arg7, 0)
int128_t v2_1 = vdup_laneq_s32(arg7, 0)
int64_t x20_1 = x7_1 << 2
uint128_t v4_1 = vdupq_laneq_s32(v3, 0)
void* x21_1 = &x11_1[8]
int64_t* x22_1 = x11_1
int64_t x23_1

do
    x23_1 = x24_1 + x8_1
    int64_t x25_1
    
    x25_1 = x23_1 s> arg2 ? arg2 : x23_1
    
    int64_t i
    float128 v6
    float128 v7
    float128 v16
    float128 v17
    float128 v18
    float128 v19
    float128 v20
    float128 v21
    float128 v22
    
    if (arg1 s< 0x20)
        i = 0
    else if (x24_1 s>= x25_1)
        void* x19_3 = &arg5[0x10]
        i = 0
        
        do
            v7 = *(x19_3 - 0x30)
            v16 = *(x19_3 - 0x20)
            v17 = *(x19_3 - 0x10)
            i += 0x20
            float128 v6_1 = vfmaq_f32(*(x19_3 - 0x40), zx.o(0), v1_1)
            float128 v7_1 = vfmaq_f32(v7, zx.o(0), v1_1)
            *(x19_3 - 0x40) = v6_1
            *(x19_3 - 0x30) = v7_1
            v6_1 = *x19_3
            v7_1 = *(x19_3 + 0x10)
            v16 = vfmaq_f32(v16, zx.o(0), v1_1)
            v17 = vfmaq_f32(v17, zx.o(0), v1_1)
            *(x19_3 - 0x20) = v16
            *(x19_3 - 0x10) = v17
            float128 v6_2 = vfmaq_f32(v6_1, zx.o(0), v1_1)
            float128 v7_2 = vfmaq_f32(v7_1, zx.o(0), v1_1)
            *x19_3 = v6_2
            *(x19_3 + 0x10) = v7_2
            v7_2 = *(x19_3 + 0x30)
            v6 = vfmaq_f32(*(x19_3 + 0x20), zx.o(0), v1_1)
            v7 = vfmaq_f32(v7_2, zx.o(0), v1_1)
            *(x19_3 + 0x20) = v6
            *(x19_3 + 0x30) = v7
            x19_3 += 0x80
        while (i s< arg1 - 0x1f)
    else
        i = 0
        void* x27_1 = x21_1
        
        do
            int64_t x5_2 = *(arg4 + 8)
            v19.q = 0
            v19:8.q = 0
            void* x28_1 = x27_1
            int64_t fp_1 = x24_1
            v20.q = 0
            v20:8.q = 0
            v21.q = 0
            v21:8.q = 0
            v18.q = 0
            v18:8.q = 0
            v16.q = 0
            v16:8.q = 0
            v17.q = 0
            v17:8.q = 0
            v7.q = 0
            v7:8.q = 0
            int32_t* lr_1 = *arg4 + x10_1 * x5_2
            v6.q = 0
            v6:8.q = 0
            float128 v23
            float128 v24
            
            do
                int32_t temp0_1 = *lr_1
                v22.d = temp0_1
                v22:4.d = temp0_1
                v22:8.d = temp0_1
                v22:0xc.d = temp0_1
                lr_1 = &lr_1[x5_2]
                v24 = *(x28_1 - 0x30)
                fp_1 += 1
                v19 = vfmaq_f32(v19, v22, *(x28_1 - 0x40))
                float128 v25 = *(x28_1 - 0x20)
                v23 = *(x28_1 - 0x10)
                v20 = vfmaq_f32(v20, v22, v24)
                v21 = vfmaq_f32(v21, v22, v25)
                v24 = *x28_1
                v25 = *(x28_1 + 0x10)
                v18 = vfmaq_f32(v18, v22, v23)
                v16 = vfmaq_f32(v16, v22, v24)
                v23 = *(x28_1 + 0x20)
                v24 = *(x28_1 + 0x30)
                v17 = vfmaq_f32(v17, v22, v25)
                x28_1 += x2
                v7 = vfmaq_f32(v7, v22, v23)
                v6 = vfmaq_f32(v6, v22, v24)
            while (fp_1 s< x25_1)
            
            void* x5_3 = &arg5[i]
            v23 = *(x5_3 + 0x10)
            i += 0x20
            x27_1 += 0x80
            v22 = vfmaq_f32(*x5_3, v1_1, v19)
            v24 = *(x5_3 + 0x20)
            v19 = *(x5_3 + 0x30)
            v23 = vfmaq_f32(v23, v1_1, v20)
            *x5_3 = v22
            *(x5_3 + 0x10) = v23
            v24 = vfmaq_f32(v24, v1_1, v21)
            v20 = *(x5_3 + 0x40)
            v21 = *(x5_3 + 0x50)
            v19 = vfmaq_f32(v19, v1_1, v18)
            *(x5_3 + 0x20) = v24
            *(x5_3 + 0x30) = v19
            v20 = vfmaq_f32(v20, v1_1, v16)
            v18 = *(x5_3 + 0x60)
            v16 = *(x5_3 + 0x70)
            v21 = vfmaq_f32(v21, v1_1, v17)
            *(x5_3 + 0x40) = v20
            *(x5_3 + 0x50) = v21
            v18 = vfmaq_f32(v18, v1_1, v7)
            v16 = vfmaq_f32(v16, v1_1, v6)
            *(x5_3 + 0x60) = v18
            *(x5_3 + 0x70) = v16
        while (i s< arg1 - 0x1f)
    
    if (i s< arg1 - 0xf)
        v7.q = 0
        v7:8.q = 0
        v16.q = 0
        v16:8.q = 0
        v17.q = 0
        v17:8.q = 0
        v6.q = 0
        v6:8.q = 0
        
        if (x24_1 s< x25_1)
            int64_t fp_2 = *(arg4 + 8)
            v6.q = 0
            v6:8.q = 0
            int64_t x19_4 = x24_1
            v17.q = 0
            v17:8.q = 0
            v16.q = 0
            v16:8.q = 0
            void* x27_3 = x11_1 + ((i + x9_1) << 2)
            int32_t* x28_2 = *arg4 + fp_2 * x10_1
            v7.q = 0
            v7:8.q = 0
            
            do
                int32_t temp0_2 = *x28_2
                v18.d = temp0_2
                v18:4.d = temp0_2
                v18:8.d = temp0_2
                v18:0xc.d = temp0_2
                x28_2 = &x28_2[fp_2]
                v20 = *(x27_3 + 0x10)
                v21 = *(x27_3 + 0x20)
                v22 = *(x27_3 + 0x30)
                x19_4 += 1
                v6 = vfmaq_f32(v6, v18, *x27_3)
                v17 = vfmaq_f32(v17, v18, v20)
                v16 = vfmaq_f32(v16, v18, v21)
                v7 = vfmaq_f32(v7, v18, v22)
                x27_3 += x2
            while (x19_4 s< x25_1)
        
        float128* x5_5 = &arg5[i]
        v19 = x5_5[1]
        v20 = x5_5[2]
        v21 = x5_5[3]
        i |= 0x10
        v18 = vfmaq_f32(*x5_5, v1_1, v6)
        v19 = vfmaq_f32(v19, v1_1, v17)
        v20 = vfmaq_f32(v20, v1_1, v16)
        v21 = vfmaq_f32(v21, v1_1, v7)
        *x5_5 = v18
        x5_5[1] = v19
        x5_5[2] = v20
        x5_5[3] = v21
        
        if (i s>= arg1 - 0xb)
            goto label_c4d00c
        
        goto label_c4d0cc
    
    if (i s< arg1 - 0xb)
    label_c4d0cc:
        v7.q = 0
        v7:8.q = 0
        v16.q = 0
        v16:8.q = 0
        v6.q = 0
        v6:8.q = 0
        
        if (x24_1 s< x25_1)
            int64_t fp_4 = *(arg4 + 8)
            int64_t x19_5 = i << 2
            v6.q = 0
            v6:8.q = 0
            int64_t x27_4 = x24_1
            v16.q = 0
            v16:8.q = 0
            int32_t* x28_3 = *arg4 + fp_4 * x10_1
            v7.q = 0
            v7:8.q = 0
            
            do
                void* x5_7 = x22_1 + x19_5
                int32_t temp0_3 = *x28_3
                v17.d = temp0_3
                v17:4.d = temp0_3
                v17:8.d = temp0_3
                v17:0xc.d = temp0_3
                x28_3 = &x28_3[fp_4]
                v19 = *(x5_7 + 0x10)
                v20 = *(x5_7 + 0x20)
                x27_4 += 1
                v6 = vfmaq_f32(v6, v17, *x5_7)
                v16 = vfmaq_f32(v16, v17, v19)
                v7 = vfmaq_f32(v7, v17, v20)
                x19_5 += x2
            while (x27_4 s< x25_1)
        
        float128* x5_8 = &arg5[i]
        v18 = x5_8[1]
        v19 = x5_8[2]
        i += 0xc
        v17 = vfmaq_f32(*x5_8, v1_1, v6)
        v18 = vfmaq_f32(v18, v1_1, v16)
        v19 = vfmaq_f32(v19, v1_1, v7)
        *x5_8 = v17
        x5_8[1] = v18
        x5_8[2] = v19
        
        if (i s>= arg1 - 7)
            goto label_c4d014
        
        goto label_c4d158
    
label_c4d00c:
    
    if (i s< arg1 - 7)
    label_c4d158:
        v7.q = 0
        v7:8.q = 0
        v6.q = 0
        v6:8.q = 0
        
        if (x24_1 s< x25_1)
            int64_t fp_6 = *(arg4 + 8)
            int64_t x19_6 = i << 2
            v6.q = 0
            v6:8.q = 0
            int64_t x27_5 = x24_1
            int32_t* x28_4 = *arg4 + fp_6 * x10_1
            v7.q = 0
            v7:8.q = 0
            
            do
                void* x5_10 = x22_1 + x19_6
                int32_t temp0_4 = *x28_4
                v16.d = temp0_4
                v16:4.d = temp0_4
                v16:8.d = temp0_4
                v16:0xc.d = temp0_4
                x28_4 = &x28_4[fp_6]
                v18 = *(x5_10 + 0x10)
                x27_5 += 1
                x19_6 += x2
                v6 = vfmaq_f32(v6, v16, *x5_10)
                v7 = vfmaq_f32(v7, v16, v18)
            while (x27_5 s< x25_1)
        
        float128* x5_11 = &arg5[i]
        v17 = x5_11[1]
        i += 8
        v16 = vfmaq_f32(*x5_11, v1_1, v6)
        v17 = vfmaq_f32(v17, v1_1, v7)
        *x5_11 = v16
        x5_11[1] = v17
        
        if (i s>= arg1 - 3)
            goto label_c4d01c
        
        goto label_c4d1c8
    
label_c4d014:
    
    if (i s< arg1 - 3)
    label_c4d1c8:
        v6.q = 0
        v6:8.q = 0
        int64_t x19_7 = i << 2
        
        if (x24_1 s< x25_1)
            int64_t x28_5 = *(arg4 + 8)
            v6.q = 0
            v6:8.q = 0
            int64_t fp_8 = x19_7
            int64_t lr_2 = x24_1
            int32_t* x27_6 = *arg4 + x28_5 * x10_1
            
            do
                int32_t temp0_5 = *x27_6
                v7.d = temp0_5
                v7:4.d = temp0_5
                v7:8.d = temp0_5
                v7:0xc.d = temp0_5
                x27_6 = &x27_6[x28_5]
                v16 = *(x22_1 + fp_8)
                lr_2 += 1
                fp_8 += x2
                v6 = vfmaq_f32(v6, v7, v16)
            while (lr_2 s< x25_1)
        
        i += 4
        *(arg5 + x19_7) = vfmaq_f32(*(arg5 + x19_7), v1_1, v6)
        
        if (i s>= arg1 - 1)
            goto label_c4d024
        
        goto label_c4d224
    
label_c4d01c:
    
    if (i s< arg1 - 1)
    label_c4d224:
        v6.q = 0
        int64_t x19_8 = i << 2
        
        if (x24_1 s< x25_1)
            int64_t x28_7 = *(arg4 + 8)
            v6.q = 0
            int64_t fp_9 = x19_8
            int64_t lr_3 = x24_1
            int32_t* x27_7 = *arg4 + x28_7 * x10_1
            
            do
                int32_t temp0_6 = *x27_7
                v7.d = temp0_6
                v7:4.d = temp0_6
                x27_7 = &x27_7[x28_7]
                v16.q = *(x22_1 + fp_9)
                lr_3 += 1
                fp_9 += x2
                v6 = vfma_f32(v6, v7, v16)
            while (lr_3 s< x25_1)
        
        v7.q = *(arg5 + x19_8)
        i += 2
        *(arg5 + x19_8) = vfma_f32(v7, v2_1, v6).q
        
        if (i s< arg1)
            goto label_c4d280
    else
    label_c4d024:
        
        if (i s< arg1)
        label_c4d280:
            
            if (x24_1 s>= x25_1)
                int64_t x24_2 = arg1 - i
                int64_t i_3
                
                if (x24_2 u>= 8)
                    int64_t i_6 = x24_2 & 0xfffffffffffffff8
                    i_3 = i + i_6
                    int64_t i_5 = i_6
                    void* x26_1 = &arg5[4 + i]
                    int64_t i_1
                    
                    do
                        v7 = *x26_1
                        i_1 = i_5
                        i_5 -= 8
                        v6 = vaddq_f32(v4_1, *(x26_1 - 0x10))
                        v7 = vaddq_f32(v4_1, v7)
                        *(x26_1 - 0x10) = v6
                        *x26_1 = v7
                        x26_1 += 0x20
                    while (i_1 != 8)
                    
                    if (x24_2 != i_6)
                        goto label_c4d340
                else
                    i_3 = i
                label_c4d340:
                    int32_t* x24_3 = &arg5[i_3]
                    int64_t i_4 = arg1 - i_3
                    int64_t i_2
                    
                    do
                        v6.d = *x24_3
                        i_2 = i_4
                        i_4 -= 1
                        v6.d = v3.d f+ v6.d
                        *x24_3 = v6.d
                        x24_3 = &x24_3[1]
                    while (i_2 != 1)
            else
                void* x19_9 = x11_1 + ((i + x9_1) << 2)
                
                do
                    int64_t x28_9 = *(arg4 + 8)
                    v6.d = 0f
                    void* fp_10 = x19_9
                    int64_t lr_4 = x24_1
                    int32_t* x27_8 = *arg4 + x10_1 * x28_9
                    
                    do
                        v7.d = *fp_10
                        v16.d = *x27_8
                        lr_4 += 1
                        x27_8 = &x27_8[x28_9]
                        v7.d = v7.d f* v16.d
                        v6.d = v6.d f+ v7.d
                        fp_10 += x2
                    while (lr_4 s< x25_1)
                    
                    v7.d = arg5[i]
                    v6.d = v6.d f* arg7
                    i += 1
                    v6.d = v6.d f+ v7.d
                    x19_9 += 4
                    arg5[i] = v6.d
                while (i != arg1)
    
    x10_1 += x8_1 << 2
    x21_1 += x20_1
    x9_1 += x7_1
    x22_1 += x20_1
    x24_1 = x23_1
while (x23_1 s< arg2)
