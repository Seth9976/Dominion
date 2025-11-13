// 函数: sub_9fa200
// 地址: 0x9fa200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_80[0x4]
PlayerScores(arg1, &var_80)
*arg4 = 0
arg4[1] = 0
memset(&arg4[3], 0, sx.q(*(arg1 + 0x1528)) * 0x68)
memset(&arg4[0x28a3], 0, sx.q(*(arg1 + 0xd40)) * 0x44)
uint64_t x8_3 = zx.q(*(arg1 + 0xd40))
int32_t var_f8[0x6]
int32_t var_e0[0x6]
int32_t var_c8[0x6]
int32_t var_b0[0x6]
int32_t var_98[0x6]

if (x8_3.d s<= 0)
    __builtin_memset(&data_14a7270, 0, 0x74)
else
    uint64_t x23_1 = x8_3 << 2
    memset(&var_c8, 0, x23_1)
    memset(&var_b0, 0, x23_1)
    memset(&var_98, 0, x23_1)
    memset(&var_f8, 0, x23_1)
    memset(&var_e0, 0, x23_1)
    __builtin_memset(&data_14a7270, 0, 0x74)
    memset(0x14a73e8, 0, x23_1)
    memset(0x14a7400, 0, x23_1)
    memset(0x14a7418, 0, x23_1)
    memset(0x14a7430, 0, x23_1)
    memset(0x14a7448, 0, x23_1)
    memset(0x14a7460, 0, x23_1)
    memset(0x14a7478, 0, x23_1)
    memset(0x14a7490, 0, x23_1)
    memset(0x14a74a8, 0, x23_1)
    memset(0x14a74c0, 0, x23_1)
    memset(0x14a74d8, 0, x23_1)
    memset(0x14a74f0, 0, x23_1)
    memset(0x14a7508, 0, x23_1)
    memset(0x14a7520, 0, x23_1)
    memset(0x14a7538, 0, x23_1)
    memset(0x14a7550, 0, x23_1)
    memset(0x14a7568, 0, x23_1)
    memset(0x14a7580, 0, x23_1)
    memset(0x14a7598, 0, x23_1)
    memset(0x14a75b0, 0, x23_1)
    memset(0x14a75c8, 0, x23_1)
    memset(0x14a75e0, 0, x23_1)
    memset(0x14a75f8, 0, x23_1)
    memset(0x14a7610, 0, x23_1)
    memset(0x14a7628, 0, x23_1)
    memset(0x14a7640, 0, x23_1)
    memset(0x14a7658, 0, x23_1)
    memset(0x14a7670, 0, x23_1)
    memset(0x14a7688, 0, x23_1)

int32_t i = 7
int32_t var_18c = 0
int64_t var_188 = 0
int32_t var_178
uint128_t v0_1
uint128_t v1_1
uint128_t v2_1
uint128_t v3_1
uint128_t v4_1

do
    int32_t* x0_8
    x0_8, v0_1, v1_1, v2_1, v3_1, v4_1 = DomBoardPile(arg1, i)
    int32_t x8_4 = *x0_8
    
    if (x8_4 s<= 0xd3c)
        if (x8_4 != 0 && x8_4 != 0xd30)
        label_9fa55c:
            uint64_t x24_1 = zx.q(x0_8[2])
            
            if (x24_1.d != 0)
                void* x26_1 = arg1 + x24_1 * 0x68
                int64_t x1_2 = sx.q(*(x26_1 + 0x1a70))
                int64_t x8_5 = x1_2 * 0x68c8c4ad
                int32_t* x8_9 = *(&data_13db978
                    + (sx.q(x1_2.d - ((x8_5 s>> 0x2c).d + (x8_5 u>> 0x3f).d) * 0x2717) << 3))
                
                if (x8_9 == 0)
                label_9fa5ac:
                    v0_1, v1_1, v2_1, v3_1, v4_1 = printf("Couldn't lookup %d\n")
                    x8_9 = nullptr
                else
                    while (*x8_9 != x1_2.d)
                        x8_9 = *(x8_9 + 0x1b8)
                        
                        if (x8_9 == 0)
                            goto label_9fa5ac
                
                int32_t x9_3 = -1
                int32_t j = x24_1.d
                
                do
                    j = *(arg1 + mulu.dp.d(j, 0x68) + 0x1ac8)
                    x9_3 += 1
                while (j != 0)
                
                void* x12_1 = &arg4[x24_1 * 0xd]
                *(x12_1 + 0x18) = *(x26_1 + 0x1a70)
                int32_t x10_3 = x8_9[1]
                *(x12_1 + 0x28) = 2
                int32_t x9_4
                
                if (x9_3 u>= 0xb)
                    x9_4 = 0xc
                else
                    x9_4 = x9_3 + 1
                
                *(x12_1 + 0x1c) = x10_3
                int32_t x10_6
                
                if (*(arg1 + x24_1 * 0x68 + 0x1a74) - 0x27 u< 0x21)
                    x10_6 = 3
                else
                    x10_6 = 2
                
                *(x12_1 + 0x28) = x10_6
                int64_t x10_7 = *(x8_9 + 8)
                *(x12_1 + 0x32) = x9_4.w
                *(x12_1 + 0x20) = x10_7
                v0_1 = *(x8_9 + 0x10)
                *(x12_1 + 0x57) = x8_9[8]
                *(x12_1 + 0x47) = v0_1
                
                if (x24_1.d s>= sx.d(*arg4))
                    *arg4 = x24_1.w + 1
                
                if (i u<= 0x20)
                    (&var_178)[sx.q(var_18c)] = x9_4
                    var_18c += 1
                
                int32_t x8_13 = *x0_8
                int32_t x11_4
                
                x11_4 = x8_13 == 0x103 ? x9_4 : var_188.d
                
                int32_t x10_12
                
                if (x8_13 == 0x601)
                    x10_12 = x9_4
                else
                    x10_12 = var_188:4.d
                
                var_188.d = x11_4
                var_188:4.d = x10_12
                
                if (x8_13 == 0x718 || x8_13 == 0x70d)
                    void* x8_14 = arg1 + x24_1 * 0x68
                    
                    while (true)
                        int32_t j_20 = *(x8_14 + 0x1ac8)
                        
                        if (j_20 == 0)
                            break
                        
                        void* x26_2 = arg1 + mulu.dp.d(j_20, 0x68)
                        int64_t x1_3 = sx.q(*(x26_2 + 0x1a70))
                        uint64_t j_24 = zx.q(j_20)
                        int64_t x8_15 = x1_3 * 0x68c8c4ad
                        int32_t* x8_19 = *(&data_13db978 + (
                            sx.q(x1_3.d - ((x8_15 s>> 0x2c).d + (x8_15 u>> 0x3f).d) * 0x2717) << 3))
                        
                        if (x8_19 == 0)
                        label_9fa6ec:
                            v0_1, v1_1, v2_1, v3_1, v4_1 = printf("Couldn't lookup %d\n")
                            x8_19 = nullptr
                        else
                            while (*x8_19 != x1_3.d)
                                x8_19 = *(x8_19 + 0x1b8)
                                
                                if (x8_19 == 0)
                                    goto label_9fa6ec
                        
                        int32_t x9_7 = -1
                        int32_t j_1 = j_20
                        
                        do
                            j_1 = *(arg1 + mulu.dp.d(j_1, 0x68) + 0x1ac8)
                            x9_7 += 1
                        while (j_1 != 0)
                        
                        void* x12_2 = &arg4[j_24 * 0xd]
                        *(x12_2 + 0x18) = *(x26_2 + 0x1a70)
                        int32_t x10_15 = x8_19[1]
                        *(x12_2 + 0x28) = 2
                        *(x12_2 + 0x1c) = x10_15
                        int32_t x10_18
                        
                        if (*(arg1 + j_24 * 0x68 + 0x1a74) - 0x27 u< 0x21)
                            x10_18 = 3
                        else
                            x10_18 = 2
                        
                        *(x12_2 + 0x28) = x10_18
                        int64_t x10_19 = *(x8_19 + 8)
                        int16_t x9_8
                        
                        if (x9_7 u>= 0xb)
                            x9_8 = 0xc
                        else
                            x9_8 = x9_7.w + 1
                        
                        *(x12_2 + 0x32) = x9_8
                        *(x12_2 + 0x20) = x10_19
                        v0_1 = *(x8_19 + 0x10)
                        *(x12_2 + 0x57) = x8_19[8]
                        *(x12_2 + 0x47) = v0_1
                        
                        if (j_20 s>= sx.d(*arg4))
                            *arg4 = j_20.w + 1
                        
                        x8_14 = arg1 + j_24 * 0x68
            else if (i u<= 0x20)
                *(arg4 + 2) += 1
                (&var_178)[sx.q(var_18c)] = 0
                var_18c += 1
    else if (x8_4 != 0xd3d && x8_4 != 0x1128 && x8_4 != 0x1301)
        goto label_9fa55c
    
    i += 1
while (i != 0x47)

if (*(arg1 + 0x1528) s>= 2)
    int64_t i_1 = 1
    uint128_t var_1a0_1 = data_71b650
    
    do
        void* x9_11 = arg1 + i_1 * 0x68
        int32_t x8_29 = *(x9_11 + 0x1a74)
        int64_t x27_1 = sx.q(*(x9_11 + 0x1a94))
        uint64_t x9_12 = zx.q(x8_29 - 0x3e9)
        int32_t x9_13
        
        if (x9_12.d u> 0x8b)
            uint64_t x9_14 = zx.q(x8_29 - 1)
            
            if (x9_14.d u> 5)
            label_9fa920:
                
                if (x8_29 - 7 u>= 0x1b && x8_29 - 0x27 u>= 0x21)
                    x9_13 = 0
                    
                    if (x8_29 != 1)
                        goto label_9faa40
            else
                x9_13 = 1
                
                switch (x9_14)
                    case 0, 2, 5
                        x9_13 = 3
                        
                        if (x8_29 != 1)
                            goto label_9faa40
                    case 1
                        goto label_9faa40
                    case 3
                        goto label_9fa920
                    case 4
                        x9_13 = 3
                        goto label_9faa40
        else
            switch (x9_12)
                case 0, 8, 0x7a
                    x9_13 = 6
                    goto label_9faa40
                case 1, 4
                    x9_13 = 7
                    goto label_9faa40
                case 2, 0x64, 0x65, 0x66, 0x67, 0x83
                    x9_13 = 8
                    goto label_9faa40
                case 3, 0x6a, 0x85
                    x9_13 = 9
                    goto label_9faa40
                case 5, 6, 7
                    x9_13 = 0xa
                    goto label_9faa40
                case 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                        0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                        0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                        0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 
                        0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 
                        0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
                        0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 
                        0x5f, 0x60, 0x61, 0x62, 0x63, 0x8a
                    goto label_9fa920
                case 0x68, 0x7b
                    x9_13 = 0xc
                    goto label_9faa40
                case 0x69, 0x6e, 0x89
                label_9faa3c:
                    x9_13 = 0xb
                    goto label_9faa40
                case 0x6b
                    x9_13 = 0x12
                    goto label_9faa40
                case 0x6c, 0x6f, 0x70, 0x7c, 0x7d, 0x7e, 0x7f, 0x86, 0x88
                label_9faa34:
                    x9_13 = 0x15
                    goto label_9faa40
                case 0x6d, 0x71, 0x72, 0x73, 0x75, 0x80, 0x81, 0x82, 0x84, 0x87
                    x9_13 = 5
                label_9faa40:
                    void* x10_23 = arg1 + i_1 * 0x68
                    int32_t x21_1 = *(x10_23 + 0x1a90)
                    int32_t x8_31
                    
                    if (x8_29 - 0x22 u> 4)
                        x8_31 = x9_13
                    else
                        x8_31 = 4
                    
                    int32_t x9_18
                    
                    if ((x21_1 & 0x20) == 0)
                        x9_18 = x8_31
                    else
                        x9_18 = 0x11
                    
                    if (x9_18 == 7)
                        void* x8_32 = arg4 + x27_1 * 0x44
                        *(x8_32 + 0x14532) += 1
                        x21_1 = *(x10_23 + 0x1a90)
                    
                    void* x25_2 = arg1 + i_1 * 0x68
                    int64_t x24_2 = sx.q(*(x25_2 + 0x1a70))
                    int64_t x8_35 = x24_2 * 0x68c8c4ad
                    int32_t* x8_39 = *(&data_13db978 +
                        (sx.q(x24_2.d - ((x8_35 s>> 0x2c).d + (x8_35 u>> 0x3f).d) * 0x2717) << 3))
                    int32_t x23_2
                    
                    if (*(x25_2 + (sx.q(arg3) << 2) + 0x1aa8) == 0)
                        x23_2 = 0x1c
                    else
                        x23_2 = x9_18
                    
                    if (x8_39 == 0)
                    label_9fab10:
                        v0_1, v1_1, v2_1, v3_1, v4_1 = printf("Couldn't lookup %d\n", zx.q(x24_2.d))
                        x8_39 = nullptr
                    else
                        while (*x8_39 != x24_2.d)
                            x8_39 = *(x8_39 + 0x1b8)
                            
                            if (x8_39 == 0)
                                goto label_9fab10
                    
                    uint64_t x9_20 = zx.q(x23_2)
                    int32_t* x9_23
                    int32_t x10_27
                    
                    if (x27_1.d == 0xffffffff)
                        uint64_t x12_5 = zx.q(*((x9_20 << 2) + &data_14a7270))
                        
                        if (x12_5.d s< 1)
                            x10_27 = 1
                        else
                            int64_t j_23
                            
                            if (x12_5.d u>= 8)
                                v2_1 = var_1a0_1
                                j_23 = x12_5 & 0xfffffff8
                                v0_1.d = x24_2.d
                                v0_1:4.d = x24_2.d
                                v0_1:8.d = x24_2.d
                                v0_1:0xc.d = x24_2.d
                                void* x10_33 = x9_20 * 0xc80 + 0x1408840
                                v1_1.q = 0
                                v1_1:8.q = 0
                                int64_t j_18 = j_23
                                int64_t j_2
                                
                                do
                                    v3_1 = *(x10_33 - 0x10)
                                    v4_1 = *x10_33
                                    j_2 = j_18
                                    j_18 -= 8
                                    x10_33 += 0x20
                                    v2_1 -= vceqq_u32(v3_1, v0_1)
                                    v1_1 -= vceqq_u32(v4_1, v0_1)
                                while (j_2 != 8)
                                v0_1.d = vaddvq_u32(v1_1 + v2_1)
                                x10_27 = v0_1.d
                                
                                if (j_23 != x12_5)
                                    goto label_9facbc
                            else
                                j_23 = 0
                                x10_27 = 1
                            label_9facbc:
                                int64_t j_19 = x12_5 - j_23
                                int32_t* x13_3 = &data_1408830 + x9_20 * 0xc80 + (j_23 << 2)
                                int64_t j_3
                                
                                do
                                    int32_t x15_5 = *x13_3
                                    x13_3 = &x13_3[1]
                                    
                                    if (x15_5 == x24_2.d)
                                        x10_27 += 1
                                    
                                    j_3 = j_19
                                    j_19 -= 1
                                while (j_3 != 1)
                        
                        int64_t x12_7 = sx.q(x12_5.d)
                        x9_23 = &data_1408830 + x9_20 * 0xc80 + (x12_7 << 2)
                        *((x9_20 << 2) + &data_14a7270) = x12_7.d + 1
                    else
                        void* x12_4 = &data_14a71b0 + x9_20 * 0x18 + (x27_1 << 2)
                        uint64_t x11_15 = zx.q(*(x12_4 + 0x238))
                        
                        if (x11_15.d s< 1)
                            x10_27 = 1
                        else
                            int64_t j_22
                            
                            if (x11_15.d u>= 8)
                                v2_1 = var_1a0_1
                                j_22 = x11_15 & 0xfffffff8
                                v0_1.d = x24_2.d
                                v0_1:4.d = x24_2.d
                                v0_1:8.d = x24_2.d
                                v0_1:0xc.d = x24_2.d
                                void* x10_31 = ((x27_1 * 0x320 + x9_20 * 0x12c0) << 2) + 0x141f2c0
                                v1_1.q = 0
                                v1_1:8.q = 0
                                int64_t j_16 = j_22
                                int64_t j_4
                                
                                do
                                    v3_1 = *(x10_31 - 0x10)
                                    v4_1 = *x10_31
                                    j_4 = j_16
                                    j_16 -= 8
                                    x10_31 += 0x20
                                    v2_1 -= vceqq_u32(v3_1, v0_1)
                                    v1_1 -= vceqq_u32(v4_1, v0_1)
                                while (j_4 != 8)
                                v0_1.d = vaddvq_u32(v1_1 + v2_1)
                                x10_27 = v0_1.d
                                
                                if (j_22 != x11_15)
                                    goto label_9fac08
                            else
                                j_22 = 0
                                x10_27 = 1
                            label_9fac08:
                                int64_t j_17 = x11_15 - j_22
                                int32_t* x13_1 =
                                    &data_141f2b0 + x9_20 * 0x4b00 + x27_1 * 0xc80 + (j_22 << 2)
                                int64_t j_5
                                
                                do
                                    int32_t x15_3 = *x13_1
                                    x13_1 = &x13_1[1]
                                    
                                    if (x15_3 == x24_2.d)
                                        x10_27 += 1
                                    
                                    j_5 = j_17
                                    j_17 -= 1
                                while (j_5 != 1)
                        
                        int64_t x11_17 = sx.q(x11_15.d)
                        *(x12_4 + 0x238) = x11_17.d + 1
                        x9_23 = &data_141f2b0 + x9_20 * 0x4b00 + x27_1 * 0xc80 + (x11_17 << 2)
                    
                    *x9_23 = x24_2.d
                    void* x9_25 = arg4 + i_1 * 0x68
                    *(x9_25 + 0x18) = x24_2.d
                    int16_t x10_34
                    
                    x10_34 = x10_27 s< 0xc ? x10_27.w : 0xc
                    
                    *(x9_25 + 0x1c) = x8_39[1]
                    
                    if (x27_1.d != 0xffffffff)
                        *(arg4 + i_1 * 0x68 + x27_1 + 0x2c) = 1
                        int32_t x9_28 = *(x25_2 + (sx.q(arg3) << 2) + 0x1aa8)
                        
                        if ((x9_28 & 2) == 0)
                            *(arg4 + i_1 * 0x68 + 0x35) = 1
                            x9_28 = *(x25_2 + (sx.q(arg3) << 2) + 0x1aa8)
                        
                        if ((x9_28 & 4) == 0)
                            *(arg4 + i_1 * 0x68 + 0x36) = 1
                    
                    void* x9_31 = arg4 + i_1 * 0x68
                    *(x9_31 + 0x28) = x23_2
                    int64_t x11_19 = *(x8_39 + 8)
                    *(x9_31 + 0x20) = x11_19
                    *(x9_31 + 0x32) = x10_34
                    v0_1 = *(x8_39 + 0x10)
                    *(x9_31 + 0x57) = x8_39[8]
                    *(x9_31 + 0x47) = v0_1
                    
                    if ((x21_1 & 4) == 0)
                        if ((x21_1 & 8) != 0)
                            goto label_9fada4
                        
                        goto label_9fad80
                    
                    *(arg4 + i_1 * 0x68 + 0x38) = 1
                    
                    if ((x21_1 & 8) != 0)
                    label_9fada4:
                        *(arg4 + i_1 * 0x68 + 0x39) = 1
                        
                        if (i_1 s< sx.q(*arg4))
                            goto label_9fad88
                        
                        goto label_9fadb8
                    
                label_9fad80:
                    
                    if (i_1 s>= sx.q(*arg4))
                    label_9fadb8:
                        *arg4 = i_1.w + 1
                        
                        if (x23_2 == 7)
                        label_9fadc4:
                            
                            if ((x11_19.d & 4) != 0)
                                void* x8_45 = arg4 + x27_1 * 0x44
                                *(x8_45 + 0x14534) += 1
                    else
                    label_9fad88:
                        
                        if (x23_2 == 7)
                            goto label_9fadc4
                    
                    if ((x27_1.d & 0x80000000) == 0)
                        int64_t x8_46 = x27_1 & 0xffffffff
                        var_98[x8_46] += 1
                        int32_t x9_33 = (*(x9_31 + 0x20)).d
                        
                        if ((x9_33 & 4) != 0)
                            var_b0[x8_46] += 1
                        
                        if ((x9_33 & 2) != 0)
                            var_c8[x8_46] += 1
                        
                        int64_t x10_39 = sx.q(var_e0[x8_46])
                        
                        if (x10_39.d s>= 1)
                            int64_t x11_24 = 0
                            
                            while (*(&data_13ff230 + x8_46 * 0xc80 + (x11_24 << 2))
                                    != *(x25_2 + 0x1a70))
                                x11_24 += 1
                                
                                if (x11_24 s>= x10_39)
                                    break
                            
                            if (x11_24.d == x10_39.d)
                                *(&data_13ff230 + x8_46 * 0xc80 + (zx.q(x10_39.d) << 2)) =
                                    *(x25_2 + 0x1a70)
                                var_e0[x8_46] = x10_39.d + 1
                        else if (0 == x10_39.d)
                            *(&data_13ff230 + x8_46 * 0xc80 + (zx.q(x10_39.d) << 2)) =
                                *(x25_2 + 0x1a70)
                            var_e0[x8_46] = x10_39.d + 1
                        
                        if (x23_2 == 0xc || x23_2 == 6)
                            int64_t x10_40 = sx.q(var_f8[x8_46])
                            
                            if (x10_40.d s>= 1)
                                int64_t x11_26 = 0
                                
                                while (*(&data_1403d30 + x8_46 * 0xc80 + (x11_26 << 2))
                                        != *(x25_2 + 0x1a70))
                                    x11_26 += 1
                                    
                                    if (x11_26 s>= x10_40)
                                        break
                                
                                if (x11_26.d == x10_40.d)
                                    *(&data_1403d30 + x8_46 * 0xc80 + (zx.q(x10_40.d) << 2)) =
                                        *(x25_2 + 0x1a70)
                                    var_f8[x8_46] = x10_40.d + 1
                            else if (0 == x10_40.d)
                                *(&data_1403d30 + x8_46 * 0xc80 + (zx.q(x10_40.d) << 2)) =
                                    *(x25_2 + 0x1a70)
                                var_f8[x8_46] = x10_40.d + 1
                case 0x74
                label_9faa2c:
                    x9_13 = 0x13
                    goto label_9faa40
                case 0x76
                    x9_13 = 0xd
                    goto label_9faa40
                case 0x77
                    x9_13 = 0xe
                    goto label_9faa40
                case 0x78
                    x9_13 = 0xf
                    goto label_9faa40
                case 0x79
                    x9_13 = 0x10
                    goto label_9faa40
                case 0x8b
                    int32_t x10_22 =
                        *(arg1 + 0x1a68 + zx.q(*(arg1 + 0x1a68 + i_1 * 0x68 + 0x24)) * 0x68 + 8)
                    
                    if (x10_22 s> 0x1009)
                        if (x10_22 s<= 0x1120)
                            if (x10_22 s> 0x10ff)
                                if (x10_22 == 0x1100)
                                    x9_13 = 0x1b
                                    goto label_9faa40
                                
                                if (x10_22 != 0x1101)
                                    goto label_9faa3c
                                
                                x9_13 = 0x1a
                                goto label_9faa40
                            
                            x9_13 = 5
                            
                            if (x10_22 == 0x100a || x10_22 == 0x100e)
                                goto label_9faa40
                            
                            goto label_9faa3c
                        
                        if (x10_22 s> 0x1301)
                            if (x10_22 == 0x1302)
                                goto label_9faa34
                            
                            if (x10_22 != 0x130b)
                                goto label_9faa3c
                            
                            goto label_9faa2c
                        
                        if (x10_22 == 0x1121)
                            x9_13 = 0x17
                            goto label_9faa40
                        
                        if (x10_22 == 0x1132)
                            goto label_9faa34
                        
                        goto label_9faa3c
                    
                    if (x10_22 s> 0xd15)
                        if (x10_22 s> 0xe03)
                            if (x10_22 == 0xe04 || x10_22 == 0xe0d)
                                goto label_9faa34
                            
                            goto label_9faa3c
                        
                        if (x10_22 == 0xd16)
                        label_9fa9d8:
                            x9_13 = 0x19
                            goto label_9faa40
                        
                        if (x10_22 != 0xd2f)
                            goto label_9faa3c
                        
                        x9_13 = 0x16
                        goto label_9faa40
                    
                    if (x10_22 s> 0xb07)
                        if (x10_22 == 0xb08)
                            goto label_9faa34
                        
                        if (x10_22 != 0xc15)
                            goto label_9faa3c
                        
                        goto label_9fa9d8
                    
                    if (x10_22 == 0x401)
                        goto label_9faa34
                    
                    if (x10_22 != 0x41e)
                        goto label_9faa3c
                    
                    x9_13 = 0x18
                    goto label_9faa40
        i_1 += 1
    while (i_1 s< sx.q(*(arg1 + 0x1528)))

if (*(arg2 + 0x5c) == 2)
    *(arg4 + zx.q(*(arg2 + 0x60)) * 0x68 + 0x37) = 1

uint64_t x9_39 = zx.q(*(arg1 + 0xd40))

if (x9_39.d s>= 1)
    int32_t x8_50 = -0x3e7
    int64_t i_10
    
    if (x9_39.d u>= 8)
        i_10 = x9_39 & 0xfffffff8
        v0_1.d = 0xfffffc19
        v0_1:4.d = 0xfffffc19
        v0_1:8.d = 0xfffffc19
        v0_1:0xc.d = 0xfffffc19
        void var_70
        void* x8_51 = &var_70
        int64_t i_9 = i_10
        v1_1 = v0_1
        int64_t i_2
        
        do
            v2_1 = *(x8_51 - 0x10)
            v3_1 = *x8_51
            i_2 = i_9
            i_9 -= 8
            x8_51 += 0x20
            v0_1 = vmaxq_s32(v2_1, v0_1)
            v1_1 = vmaxq_s32(v3_1, v1_1)
        while (i_2 != 8)
        v0_1.d = vmaxv_s8(vmaxq_s32(v0_1, v1_1))
        x8_50 = v0_1.d
        
        if (i_10 != x9_39)
            goto label_9fafcc
    else
        i_10 = 0
    label_9fafcc:
        void* x11_28 = &var_80[i_10]
        int64_t i_8 = x9_39 - i_10
        int64_t i_3
        
        do
            int32_t x12_12 = *x11_28
            x11_28 += 4
            
            if (x12_12 s> x8_50)
                x8_50 = x12_12
            
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
    
    if (x9_39.d s>= 1)
        int64_t x9_40 = 0
        void* __offset(DomGame, 0x1c098) lr_1 = arg1 + 0x1c098
        int64_t x21_2
        
        do
            void* x23_3 = arg1 + x9_40 * 0x5a30
            int16_t x21_3 = (*(x23_3 + 0x18198)).w
            *(arg4 + x9_40 * 0x44 + 0x14518) = x21_3
            *(arg4 + x9_40 * 0x44 + 0x1451a) = (*(x23_3 + 0x1819c)).w
            *(arg4 + x9_40 * 0x44 + 0x1451c) = (*(x23_3 + 0x18194)).w
            *(arg4 + x9_40 * 0x44 + 0x1451e) = (*(x23_3 + 0x181a0)).w
            
            if (sx.d(*(arg4 + x9_40 * 0x44 + 0x14534)) s> sx.d(x21_3))
                *(arg4 + x9_40 * 0x44 + 0x14534) = x21_3
            
            void* x22_4 = arg4 + x9_40 * 0x44
            *(x22_4 + 0x14536) = (var_e0[x9_40]).w
            *(x22_4 + 0x14538) = (var_f8[x9_40]).w
            *(x22_4 + 0x1455a) = x8_50.w - (var_80[x9_40]).w
            int32_t x22_5 = var_98[x9_40]
            
            if (x22_5 s>= 1)
                v0_1.d = var_b0[x9_40]
                v1_1.d = float.s(x22_5)
                void* x12_21 = arg4 + x9_40 * 0x44
                v0_1.d = float.s(v0_1.d)
                v0_1.d = v0_1.d f/ v1_1.d
                *(x12_21 + 0x1453c) = v0_1.d
                v0_1.d = var_c8[x9_40]
                v0_1.d = float.s(v0_1.d)
                v0_1.d = v0_1.d f/ v1_1.d
                *(x12_21 + 0x14540) = v0_1.d
            
            void* x22_6 = arg4 + x9_40 * 0x44
            *(x22_6 + 0x14556) = (x9_40 == zx.q(*(arg1 + 0x19d4)) ? 1 : 0).b
                & (x9_40 == zx.q(*(arg1 + 0x19d8)) ? 1 : 0).b
            char x12_27 = (x9_40 == zx.q(*(arg1 + 0x19d4)) ? 1 : 0).b
                & (x9_40 == zx.q(*(arg1 + 0x19cc)) ? 1 : 0).b
            *(x22_6 + 0x14557) = x12_27
            *(x22_6 + 0x14558) = x12_27 & (x9_40 == zx.q(*(arg1 + 0x19d0)) ? 1 : 0).b
            uint64_t x21_11 = zx.q(*(arg1 + x9_40 * 0x5a30 + 0x17f74))
            
            if (x21_11.d != 0 && (*(arg1 + x21_11 * 0x68 + (sx.q(arg3) << 2) + 0x1aa8) & 4) != 0)
                *(arg4 + x21_11 * 0x68 + 0x34) = 1
            
            if (*(arg1 + x9_40 * 0x5a30 + 0x181f0) s>= 1)
                int64_t i_4 = 0
                
                do
                    uint64_t x12_36 = zx.q(*(lr_1 + (i_4 << 2)))
                    i_4 += 1
                    *(arg4 + x12_36 * 0x68 + 0x3a) = 1
                while (i_4 s< sx.q(*(arg1 + x9_40 * 0x5a30 + 0x181f0)))
            
            x21_2 = sx.q(*(arg1 + 0xd40))
            x9_40 += 1
            lr_1 += 0x5a30
        while (x9_40 s< x21_2)
        
        x9_39 = zx.q(x21_2.d)

arg4[1].w = (x9_39.d).w

if (*(arg1 + 0x19ac) s>= 1)
    int64_t i_5 = 0
    
    do
        void* x26_3 = arg1 + (i_5 << 5)
        int32_t x1_5 = *(x26_3 + 0x15f70)
        int64_t x25_3 = sx.q(*(x26_3 + 0x15f6c))
        int32_t x8_57
        int32_t x9_42
        int32_t x10_44
        
        if (x1_5 s<= 0x47)
            int32_t* x0_10 = DomBoardPile(arg1, x1_5)
            x8_57 = *x0_10
            x9_42 = x0_10[2]
            x10_44 = *(x26_3 + 0x15f68)
            
            if (x10_44 s<= 0xbff)
                goto label_9fb348
            
            goto label_9fb2cc
        
        x8_57 = 0
        x9_42 = 0
        x10_44 = *(x26_3 + 0x15f68)
        int16_t x8_54
        int16_t x11_29
        
        if (x10_44 s> 0xbff)
        label_9fb2cc:
            
            if (x10_44 s> 0xfff)
                if (x10_44 == 0x1000)
                    x8_54 = (*(arg1 + (i_5 << 5) + 0x15f7c)).w
                    
                    if (x25_3.d == 0xffffffff)
                        void* x9_53 = arg4 + mulu.dp.d(x9_42, 0x68)
                        *(x9_53 + 0x64) += x8_54
                    else
                        x11_29 = 0x452a
                    label_9fb274:
                        int64_t x9_41 = arg4 + x25_3 * 0x44
                        uint64_t x11_30 = zx.q(x11_29) | 0x10000
                        *(x9_41 + x11_30) += x8_54
                else if (x10_44 == 0x1001)
                    void* x8_74 = arg1 + (i_5 << 5)
                    void* x9_51 = arg4 + zx.q(*(x8_74 + 0x15f74)) * 0x68
                    *(x9_51 + 0x68) += *(x8_74 + 0x15f7c)
                else
                    if (x10_44 != 0x1200)
                    label_9fbbcc:
                        pthread_kill(pthread_self(), 6)
                        DomGame* x0_13
                        TrainerStatic* x1_7
                        float* x2_37
                        x0_13, x1_7, x2_37 = XNoReturn()
                        return FillTrainerStatic(x0_13, x1_7, x2_37) __tailcall
                    
                    void* x9_47 = arg4 + mulu.dp.d(x9_42, 0x68)
                    *(x9_47 + 0x66) += *(arg1 + (i_5 << 5) + 0x15f7c)
            else if (x10_44 == 0xc00)
                x8_54 = (*(arg1 + (i_5 << 5) + 0x15f7c)).w
                
                if (x25_3.d != 0xffffffff)
                    x11_29 = 0x4526
                    goto label_9fb274
                
                void* x9_52 = arg4 + mulu.dp.d(x9_42, 0x68)
                *(x9_52 + 0x62) += x8_54
            else
                if (x10_44 == 0xe00)
                    x8_54 = *(arg1 + (i_5 << 5) + 0x15f7c)
                    x11_29 = 0x4528
                    goto label_9fb274
                
                if (x10_44 != 0xe01)
                    goto label_9fbbcc
                
                if (x9_42 != 0)
                    *(arg4 + mulu.dp.d(x9_42, 0x68) + x25_3 + 0x2c) = 1
                    
                    if (x8_57 == 0xe26)
                        *(arg4 + x25_3 * 0x44 + 0x14522) = *(arg1 + (i_5 << 5) + 0x15f7c) - 1
        else
        label_9fb348:
            
            if (x10_44 s> 0x600)
                uint64_t x11_31 = zx.q(x10_44 - 0xb00)
                
                if (x11_31.d u> 0xa)
                    if (x10_44 != 0x601)
                        if (x10_44 != 0xa00)
                            goto label_9fbbcc
                        
                        x8_54 = *(arg1 + (i_5 << 5) + 0x15f7c)
                        x11_29 = 0x4524
                        goto label_9fb274
                    
                    x8_54 = (*(arg1 + (i_5 << 5) + 0x15f7c)).w
                    
                    if (x25_3.d != 0xffffffff)
                        x11_29 = 0x4530
                        goto label_9fb274
                    
                    void* x9_54 = arg4 + mulu.dp.d(x9_42, 0x68)
                    *(x9_54 + 0x60) += x8_54
                else
                    switch (x11_31)
                        case 0, 7, 0xa
                            if (x9_42 != 0)
                                if (x10_44 == 0xb0a || x10_44 == 0xb00)
                                    *(arg4 + mulu.dp.d(x9_42, 0x68) + x25_3 + 0x6e) = 1
                                else
                                    *(arg4 + mulu.dp.d(x9_42, 0x68) + x25_3 + 0x74) = 1
                        case 1
                            if (zx.d(*(arg1 + (i_5 << 5) + 0x15f78)) != 0)
                                *(arg4 + x25_3 * 0x44 + 0x1452c) = 1
                        case 3, 4, 5, 6
                            if (x8_57 != 0)
                                int32_t x9_46 = sx.d(*arg4)
                                
                                if (x9_46 s>= 1)
                                    int32_t j_21 = x9_46 & 0xffff
                                    
                                    if (x10_44 == 0xb03)
                                        uint64_t j_13
                                        
                                        if (j_21 u> 1)
                                            j_13 = zx.q(j_21)
                                        else
                                            j_13 = 1
                                        
                                        int64_t* x11_33 = arg4
                                        uint64_t j_6
                                        
                                        do
                                            if (x11_33[3].d == x8_57
                                                    && zx.d(*(x11_33 + x25_3 + 0x2c)) != 0)
                                                *(x11_33 + 0x6b) = 1
                                            
                                            j_6 = j_13
                                            j_13 -= 1
                                            x11_33 = &x11_33[0xd]
                                        while (j_6 != 1)
                                    else if (x10_44 == 0xb04)
                                        uint64_t j_14
                                        
                                        if (j_21 u> 1)
                                            j_14 = zx.q(j_21)
                                        else
                                            j_14 = 1
                                        
                                        int64_t* x11_34 = arg4
                                        uint64_t j_7
                                        
                                        do
                                            if (x11_34[3].d == x8_57
                                                    && zx.d(*(x11_34 + x25_3 + 0x2c)) != 0)
                                                *(x11_34 + 0x6a) = 1
                                            
                                            j_7 = j_14
                                            j_14 -= 1
                                            x11_34 = &x11_34[0xd]
                                        while (j_7 != 1)
                                    else if (x10_44 != 0xb05)
                                        uint64_t j_15
                                        
                                        if (j_21 u> 1)
                                            j_15 = zx.q(j_21)
                                        else
                                            j_15 = 1
                                        
                                        int64_t* x11_35 = arg4
                                        uint64_t j_8
                                        
                                        do
                                            if (x11_35[3].d == x8_57
                                                    && zx.d(*(x11_35 + x25_3 + 0x2c)) != 0)
                                                *(x11_35 + 0x6d) = 1
                                            
                                            j_8 = j_15
                                            j_15 -= 1
                                            x11_35 = &x11_35[0xd]
                                        while (j_8 != 1)
                                    else
                                        uint64_t j_12
                                        
                                        if (j_21 u> 1)
                                            j_12 = zx.q(j_21)
                                        else
                                            j_12 = 1
                                        
                                        int64_t* x11_32 = arg4
                                        uint64_t j_9
                                        
                                        do
                                            if (x11_32[3].d == x8_57
                                                    && zx.d(*(x11_32 + x25_3 + 0x2c)) != 0)
                                                *(x11_32 + 0x6c) = 1
                                            
                                            j_9 = j_12
                                            j_12 -= 1
                                            x11_32 = &x11_32[0xd]
                                        while (j_9 != 1)
                        case 8
                            *(arg4 + x25_3 * 0x44 + 0x1452e) = 1
                        case 9
                            *(arg4 + x25_3 * 0x44 + 0x1452d) = 1
            else if (x10_44 != 0x400)
                if (x10_44 == 0x401)
                    x8_54 = *(arg1 + (i_5 << 5) + 0x15f7c)
                    x11_29 = 0x4520
                    goto label_9fb274
                
                if (x10_44 != 0x600)
                    goto label_9fbbcc
                
                if (*(x26_3 + 0x15f70) == 6)
                    *(arg4 + 0xc) += 1
                else if (x9_42 != 0)
                    *(arg4 + mulu.dp.d(x9_42, 0x68) + 0x5e) = 1
            else if (x9_42 != 0)
                void* x8_70 = arg4 + mulu.dp.d(x9_42, 0x68)
                *(x8_70 + 0x5c) += 1
        i_5 += 1
    while (i_5 s< sx.q(*(arg1 + 0x19ac)))

if (*(arg1 + 0x19c0) s>= 1)
    int64_t i_6 = 0
    
    do
        int32_t x23_4 = *(arg1 + i_6 * 0xb8 + 0x3c254)
        
        if (x23_4 == 1)
            void* x23_7 = arg4 + sx.q(*(arg1 + i_6 * 0xb8 + 0x3c25c)) * 0x44
            *(x23_7 + 0x14554) += 1
            
            if (*(arg1 + i_6 * 0xb8 + 0x3c254) != 0)
                goto label_9fb828
            
            goto label_9fb7dc
        
        if (x23_4 == 0)
        label_9fb7dc:
            void* x24_5 = arg1 + i_6 * 0xb8
            int64_t x23_9 = sx.q(*(x24_5 + 0x3c25c))
            
            if (*(x24_5 + 0x3c258) != x23_9.d)
                void* x23_26 = arg4 + x23_9 * 0x44
                *(x23_26 + 0x1454a) += 1
                
                if (*(arg1 + i_6 * 0xb8 + 0x3c254) == 3)
                    goto label_9fb838
            else
                int32_t x24_8 = *(arg1 + i_6 * 0xb8 + 0x3c260)
                
                if ((x24_8 & 1) != 0)
                    void* x23_27 = arg4 + x23_9 * 0x44
                    *(x23_27 + 0x1454c) += 1
                    
                    if (*(arg1 + i_6 * 0xb8 + 0x3c254) == 3)
                        goto label_9fb838
                else
                    void* x23_10 = arg4 + x23_9 * 0x44
                    
                    if ((x24_8 & 2) != 0)
                        *(x23_10 + 0x1454e) += 1
                        
                        if (*(arg1 + i_6 * 0xb8 + 0x3c254) == 3)
                            goto label_9fb838
                    else
                        *(x23_10 + 0x14548) += 1
                        
                        if (*(arg1 + i_6 * 0xb8 + 0x3c254) == 3)
                            goto label_9fb838
        else
        label_9fb828:
            
            if (*(arg1 + i_6 * 0xb8 + 0x3c254) == 3)
            label_9fb838:
                int32_t x23_11 = *(arg1 + i_6 * 0xb8 + 0x3c258)
                
                if (x23_11 == 9)
                    *(arg4 + sx.q(*(arg1 + i_6 * 0xb8 + 0x3c21c)) * 0x44 + 0x14551) = 1
                    x23_11 = *(arg1 + i_6 * 0xb8 + 0x3c258)
                    
                    if (x23_11 == 0x19)
                        goto label_9fb8bc
                    
                    goto label_9fb864
                
                if (x23_11 == 0x19)
                label_9fb8bc:
                    *(arg4 + sx.q(*(arg1 + i_6 * 0xb8 + 0x3c21c)) * 0x44 + 0x14552) = 1
                    x23_11 = *(arg1 + i_6 * 0xb8 + 0x3c258)
                    
                    if (x23_11 == 3)
                        goto label_9fb87c
                    
                    goto label_9fb8cc
                
            label_9fb864:
                
                if (x23_11 == 3)
                label_9fb87c:
                    void* x23_17 = arg4 + sx.q(*(arg1 + i_6 * 0xb8 + 0x3c21c)) * 0x44
                    *(x23_17 + 0x14546) += *(arg1 + i_6 * 0xb8 + 0x3c25c)
                    x23_11 = *(arg1 + i_6 * 0xb8 + 0x3c258)
                    
                    if (x23_11 == 2)
                        goto label_9fb8e4
                    
                    goto label_9fb898
                
            label_9fb8cc:
                
                if (x23_11 != 2)
                label_9fb898:
                    
                    if (x23_11 == 8)
                    label_9fb900:
                        uint32_t x23_25 = sx.d(*arg4)
                        
                        if (x23_25 s>= 1)
                            int32_t x22_14 = *(arg1 + i_6 * 0xb8 + 0x3c25c)
                            int64_t x25_6 = sx.q(*(arg1 + i_6 * 0xb8 + 0x3c21c))
                            
                            if (*(arg1 + i_6 * 0xb8 + 0x3c208) != 1)
                                int64_t j_10 = 0
                                int64_t* x26_6 = arg4
                                
                                do
                                    if (x26_6[3].d == x22_14)
                                        *(x26_6 + x25_6 + 0x41) = 1
                                        x23_25 = zx.d(*arg4)
                                    
                                    j_10 += 1
                                    x26_6 = &x26_6[0xd]
                                while (j_10 s< sx.q(x23_25.w))
                            else
                                int64_t j_11 = 0
                                int64_t* x26_5 = arg4
                                
                                do
                                    if (x26_5[3].d == x22_14)
                                        *(x26_5 + x25_6 + 0x3b) = 1
                                        x23_25 = zx.d(*arg4)
                                    
                                    j_11 += 1
                                    x26_5 = &x26_5[0xd]
                                while (j_11 s< sx.q(x23_25.w))
                else
                label_9fb8e4:
                    void* x23_23 = arg4 + sx.q(*(arg1 + i_6 * 0xb8 + 0x3c21c)) * 0x44
                    *(x23_23 + 0x14544) += *(arg1 + i_6 * 0xb8 + 0x3c25c)
                    
                    if (*(arg1 + i_6 * 0xb8 + 0x3c258) == 8)
                        goto label_9fb900
        
        i_6 += 1
    while (i_6 s< sx.q(*(arg1 + 0x19c0)))

int64_t x9_55 = sx.q(*(arg1 + 0x19d4))
int32_t x21_13 = var_188:4.d

if (x9_55.d != *(arg1 + 0x19d8))
    *(&arg4[0x28a3] + x9_55 * 0x44 + 0x38) = 1
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d8)) * 0x44) =
        *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44)
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d8)) * 0x44 + 2) =
        *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44 + 2)
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d8)) * 0x44 + 4) =
        *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44 + 4)
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d8)) * 0x44 + 6) =
        *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44 + 6)
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44) = 0
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44 + 2) = 0
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44 + 4) = 0
    *(&arg4[0x28a3] + sx.q(*(arg1 + 0x19d4)) * 0x44 + 6) = 0
    int32_t x9_77 = *(arg1 + 0x1528)
    
    if (x9_77 s>= 2)
        void* x10_54 = arg4 + 0x94
        void* __offset(DomGame, 0x1afc) x12_56 = arg1 + 0x1afc
        int64_t i_7 = 1
        
        do
            if (*x12_56 == *(arg1 + 0x19d4))
                int32_t x14_4 = *(x10_54 - 4)
                
                if (x14_4 u<= 0xc && (1 << x14_4 & 0x10c0) != 0)
                    *(x10_54 + sx.q(*(arg1 + 0x19d8))) = 1
                    x9_77 = *(arg1 + 0x1528)
            
            i_7 += 1
            x12_56 += 0x68
            x10_54 += 0x68
        while (i_7 s< sx.q(x9_77))

std::__ndk1::__less<int32_t, int32_t> var_68
int64_t result = std::__ndk1::__sort<std::__ndk1::__less<int32_t, int32_t>&, int32_t*>(&var_178, 
    &(&var_178)[sx.q(var_18c)], &var_68)
int32_t x11_37 = var_188.d
*(arg4 + 4) = x11_37.w
int16_t var_174
int16_t var_170
*(arg4 + 6) = var_174 + var_178.w + var_170

if (x21_13 s< x11_37 && zx.d(*(arg1 + 0x1070)) != 0)
    *(arg4 + 4) = x21_13.w

*(arg4 + 0xe) = (*(arg1 + 0x19bc)).w
*(arg4 + 0xa) = (*(arg1 + 0x19e4)).w
return result
