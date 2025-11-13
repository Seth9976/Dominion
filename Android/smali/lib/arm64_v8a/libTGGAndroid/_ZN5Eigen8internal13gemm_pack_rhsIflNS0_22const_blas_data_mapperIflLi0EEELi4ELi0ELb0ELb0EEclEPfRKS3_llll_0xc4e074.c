// 函数: _ZN5Eigen8internal13gemm_pack_rhsIflNS0_22const_blas_data_mapperIflLi0EEELi4ELi0ELb0ELb0EEclEPfRKS3_llll
// 地址: 0xc4e074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9

if (arg5 s< 0)
    x9 = arg5 + 3
else
    x9 = arg5

int64_t x13

if (arg4 s< 0)
    x13 = arg4 + 3
else
    x13 = arg4

int64_t x8_1 = x9 & 0xfffffffffffffffc
int64_t x20_1
uint128_t v0
uint128_t v1

if (arg5 s< 4)
    x20_1 = 0
else
    int64_t x10_1 = 0
    int64_t x11_1 = 0
    int64_t x12_1 = 0
    int64_t x19_1 = 0
    int64_t x17_1 = 0xc
    arg1 = 8
    int64_t x5 = 4
    
    do
        int64_t x7_1 = *arg3
        int64_t x6_1 = *(arg3 + 8)
        int64_t i_2
        uint128_t v2
        uint128_t v3
        
        if (arg4 s< 4)
            i_2 = 0
            
            if (0 s>= arg4)
                x20_1 = x19_1
            else
            label_c4e1b0:
                int64_t x21_2 = arg4 - i_2
                int64_t x22_4
                int64_t x23_4
                int64_t x24_4
                int64_t x25_3
                int64_t x26_2
                void* x27_1
                int64_t x28_1
                void* fp_2
                
                if (x21_2 u>= 4)
                    int64_t x26_1 = i_2 << 2
                    x28_1 = x7_1 + (arg4 << 2)
                    x26_2 = x7_1 + x26_1
                    x22_4 = x6_1 * (x11_1 << 4)
                    x23_4 = x6_1 * (0xc | (0xfffffffffffffff & x11_1) << 4)
                    x27_1 = arg2 + (x19_1 << 2)
                    fp_2 = arg2 + (arg4 << 4) + ((x19_1 - x26_1) << 2)
                    x24_4 = x6_1 * (8 | (0xfffffffffffffff & x11_1) << 4)
                    x25_3 = x6_1 * (4 | (0xfffffffffffffff & x11_1) << 4)
                
                int64_t i_7
                
                if (x21_2 u< 4
                        || ((x28_1 + x23_4 u> x27_1 ? 1 : 0) & (x26_2 + x23_4 u< fp_2 ? 1 : 0) & 1)
                        != 0 || ((x28_1 + x24_4 u> x27_1 ? 1 : 0) & (x26_2 + x24_4 u< fp_2 ? 1 : 0) & 1)
                        != 0 || ((x28_1 + x25_3 u> x27_1 ? 1 : 0) & (x26_2 + x25_3 u< fp_2 ? 1 : 0) & 1)
                        != 0 || ((x28_1 + x22_4 u> x27_1 ? 1 : 0) & (x26_2 + x22_4 u< fp_2 ? 1 : 0) & 1)
                        != 0)
                    i_7 = i_2
                    x20_1 = x19_1
                label_c4e1c4:
                    int64_t x9_6 = x7_1 + (i_7 << 2)
                    int64_t x19_2 = 0
                    int64_t i_6 = arg4 - i_7
                    void* x24_2 = arg2 + 8 + (x20_1 << 2)
                    int64_t i
                    
                    do
                        v0.d = *(x9_6 + x6_1 * x10_1 + x19_2)
                        i = i_6
                        i_6 -= 1
                        *(x24_2 - 8) = v0.d
                        v0.d = *(x9_6 + x6_1 * x5 + x19_2)
                        *(x24_2 - 4) = v0.d
                        v0.d = *(x9_6 + x6_1 * arg1 + x19_2)
                        *x24_2 = v0.d
                        v0.d = *(x9_6 + x6_1 * x17_1 + x19_2)
                        x19_2 += 4
                        *(x24_2 + 4) = v0.d
                        x24_2 += 0x10
                    while (i != 1)
                    x20_1 += x19_2
                else
                    int64_t i_10 = x21_2 & 0xfffffffffffffffc
                    int64_t x9_12 = x7_1 + (i_2 << 2)
                    void* x24_7 = arg2 + (x19_1 << 2)
                    i_7 = i_2 + i_10
                    x20_1 = x19_1 + (i_10 << 2)
                    int128_t* x19_3 = x9_12 + x6_1 * x10_1
                    int128_t* x25_6 = x9_12 + x6_1 * x5
                    int128_t* x26_5 = x9_12 + x6_1 * arg1
                    int128_t* x27_3 = x9_12 + x6_1 * x17_1
                    int64_t i_8 = i_10
                    int64_t i_1
                    
                    do
                        v0 = *x19_3
                        x19_3 = &x19_3[1]
                        v1 = *x25_6
                        x25_6 = &x25_6[1]
                        v2 = *x26_5
                        x26_5 = &x26_5[1]
                        v3 = *x27_3
                        x27_3 = &x27_3[1]
                        i_1 = i_8
                        i_8 -= 4
                        *x24_7 = v0.d
                        *(x24_7 + 4) = v1.d
                        *(x24_7 + 8) = v2.d
                        *(x24_7 + 0xc) = v3.d
                        *(x24_7 + 0x10) = v0:4.d
                        *(x24_7 + 0x14) = v1:4.d
                        *(x24_7 + 0x18) = v2:4.d
                        *(x24_7 + 0x1c) = v3:4.d
                        *(x24_7 + 0x20) = v0:8.d
                        *(x24_7 + 0x24) = v1:8.d
                        *(x24_7 + 0x28) = v2:8.d
                        *(x24_7 + 0x2c) = v3:8.d
                        *(x24_7 + 0x30) = v0:0xc.d
                        *(x24_7 + 0x34) = v1:0xc.d
                        *(x24_7 + 0x38) = v2:0xc.d
                        *(x24_7 + 0x3c) = v3:0xc.d
                        x24_7 += 0x40
                    while (i_1 != 4)
                    
                    if (x21_2 != i_10)
                        goto label_c4e1c4
        else
            i_2 = 0
            int128_t* x21_1 = x7_1 + x6_1 * x17_1
            int128_t* x22_1 = x7_1 + x6_1 * arg1
            int128_t* x23_1 = x7_1 + x6_1 * x5
            int128_t* x24_1 = x7_1 + x6_1 * x10_1
            void* x25_1 = arg2 + 0x20 + (x19_1 << 2)
            
            do
                v0 = *x24_1
                x24_1 = &x24_1[1]
                v1 = *x23_1
                x23_1 = &x23_1[1]
                v2 = *x22_1
                x22_1 = &x22_1[1]
                v3 = *x21_1
                x21_1 = &x21_1[1]
                i_2 += 4
                uint128_t v4_1 = vzip1q_s32(v0, v2)
                uint128_t v5_1 = vzip1q_s32(v1, v3)
                int64_t v6_1 = vextq_s8(v4_1, v4_1, 8)
                *(x25_1 - 0x20) = v4_1.d
                *(x25_1 - 0x1c) = v5_1.d
                *(x25_1 - 0x18) = v4_1:4.d
                *(x25_1 - 0x14) = v5_1:4.d
                int64_t v7_1 = vextq_s8(v5_1, v5_1, 8)
                uint128_t v4_2 = vzip2q_s32(v0, v2)
                *(x25_1 - 0x10) = v6_1.d
                *(x25_1 - 0xc) = v7_1.d
                *(x25_1 - 8) = v6_1:4.d
                *(x25_1 - 4) = v7_1:4.d
                uint128_t v5_2 = vzip2q_s32(v1, v3)
                v0 = vextq_s8(v4_2, v4_2, 8)
                x19_1 += 0x10
                v1 = vextq_s8(v5_2, v5_2, 8)
                *x25_1 = v4_2.d
                *(x25_1 + 4) = v5_2.d
                *(x25_1 + 8) = v4_2:4.d
                *(x25_1 + 0xc) = v5_2:4.d
                void* x9_5 = x25_1 + 0x10
                x25_1 += 0x40
                *x9_5 = v0.d
                *(x9_5 + 4) = v1.d
                *(x9_5 + 8) = v0:4.d
                *(x9_5 + 0xc) = v1:4.d
            while (i_2 s< (x13 & 0xfffffffffffffffc))
            
            if (i_2 s< arg4)
                goto label_c4e1b0
            
            x20_1 = x19_1
        x12_1 += 4
        x11_1 += 1
        x17_1 += 0x10
        arg1 = &arg1[4]
        x5 += 0x10
        x10_1 += 0x10
        x19_1 = x20_1
    while (x12_1 s< x8_1)

if (x8_1 s>= arg5 || arg4 s< 1)
    return 

int64_t x10_2 = 0
int64_t i_9 = arg4 & 0xfffffffffffffff8
int64_t x11_3 = x9 s>> 2 << 4
int64_t x14_2 = x11_3

do
    int64_t x16_2 = *arg3
    int64_t x17_2 = *(arg3 + 8)
    int64_t x15_3
    
    if (arg4 u>= 8)
        x15_3 = x20_1 << 2
    
    int64_t x15_2
    int64_t i_11
    
    if (arg4 u>= 8 && (x16_2 + (arg4 << 2) + x17_2 * (x11_3 + (x10_2 << 2)) u<= arg2 + x15_3
            || x16_2 + ((x17_2 * x8_1) << 2) u>= arg2 + (arg4 << 2) + x15_3))
        x15_2 = x20_1 + i_9
        arg1 = x16_2 + x17_2 * x14_2 + 0x10
        uint128_t* x5_2 = arg2 + 0x10 + (x20_1 << 2)
        int64_t i_5 = i_9
        int64_t i_3
        
        do
            v0 = *(arg1 - 0x10)
            v1 = *arg1
            arg1 = &arg1[8]
            i_3 = i_5
            i_5 -= 8
            x5_2[-1] = v0
            *x5_2 = v1
            x5_2 = &x5_2[2]
        while (i_3 != 8)
        i_11 = i_9
        
        if (i_9 != arg4)
            goto label_c4e3cc
    else
        i_11 = 0
        x15_2 = x20_1
    label_c4e3cc:
        arg1 = arg4 - i_11
        int32_t* x16_4 = x16_2 + (i_11 << 2) + x17_2 * x14_2
        float* i_4
        
        do
            v0.d = *x16_4
            x16_4 = &x16_4[1]
            i_4 = arg1
            arg1 -= 1
            *(arg2 + (x15_2 << 2)) = v0.d
            x15_2 += 1
        while (i_4 != 1)
    x8_1 += 1
    x10_2 += 1
    x14_2 += 4
    x20_1 = x15_2
while (x8_1 != arg5)
