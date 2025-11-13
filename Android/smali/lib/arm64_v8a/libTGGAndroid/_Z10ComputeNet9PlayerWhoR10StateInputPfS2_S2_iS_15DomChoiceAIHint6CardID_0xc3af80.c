// 函数: _Z10ComputeNet9PlayerWhoR10StateInputPfS2_S2_iS_15DomChoiceAIHint6CardID
// 地址: 0xc3af80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
double v14
double var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
double v8
double var_68 = v8
char var_300
__builtin_strncpy(&var_300, "*card_embed/embeddings", 0x17)
StateInput& fp = arg2
int128_t var_5f0
__builtin_strncpy(&var_5f0, "card_embed/embed", 0x10)
int64_t* x0_1 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_300)
int128_t var_2ff

if ((zx.d(var_300) & 1) != 0)
    operator delete(var_2ff:0xf.q)
char var_318 = 0x1e
int64_t var_317
__builtin_strncpy(&var_317, "card_pre/kernel", 0x10)
int64_t* x0_4
float128 v0
float128 v1
float128 v2
float128 v3
x0_4, v0, v1, v2, v3 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_318)
int64_t* x7 = x0_4
char var_308

if ((zx.d(var_318) & 1) != 0)
    v0, v1, v2, v3 = operator delete(var_308.q)
int64_t x9 = x7[2]
int64_t x4 = sx.q(arg1)
int64_t var_5c8 = x4
void* var_590
int64_t var_570
int64_t* var_560
void* var_550
void* var_530
StateInput& var_510
int32_t var_500
int32_t var_4e0
int32_t var_4c8
int32_t var_4c0
uint64_t var_4b0
char var_1d8
char var_1c8
int128_t* i_146
int128_t* i_174
void** i_175
char var_b8
int64_t i_176
uint64_t x23

if (sx.d(*fp) s< 1)
    x23 = 0
else
    int128_t* x10_1 = &i_146 | 1
    int64_t* x8_3 = x4 * 0x80cf8 + &data_195dc58:8
    int64_t i = 0
    x23 = 0
    void* x21_1 = x4 * 0x80cf8 + 0x195e914
    void* x6 = x4 * 0x80cf8 + &data_195dc38
    void* x20_2 = x4 * 0x80cf8 + &data_195dc48
    int64_t* var_5c0_1 = x4 * 0x80cf8 + &data_195dc68:8
    var_590 = x21_1
    var_550 = x6
    var_530 = x20_2
    var_510 = fp
    var_560 = x7
    
    do
        *(&data_18ddc30 + x4 * 0x80cf8 + (i << 2) + 0x80048) = 0xffffffff
        int32_t* x25_2 = fp + i * 0x68 + 0x18
        
        if (*x25_2 != 0)
            *(&data_18ddc30 + x4 * 0x80cf8 + (i << 2) + 0x80048) = x23.d
            int64_t x10_4 = *var_5c0_1 * zx.q(*x25_2)
            int64_t x9_4 = *x8_3
            v0.d = *(x9_4 + (x10_4 << 2))
            
            if (not(v0.d f!= 0f))
                i_146.b = 0x2a
                v0 = var_5f0
                int64_t* x27_1 = x7
                __builtin_strncpy(x10_1 + 0xd, "beddings", 8)
                *x10_1 = v0
                char var_18a_1 = 0
                int64_t* x0_7 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_146)
                int32_t var_190
                
                if ((zx.d(i_146.b) & 1) != 0)
                    operator delete(var_190.q)
                var_1d8 = 0x1e
                __builtin_strncpy(&var_1d8 | 1, "card_pre/kernel", 0xf)
                var_1c8 = 0
                void* x0_10
                int128_t v0_1
                int128_t v1_1
                x0_10, v0_1, v1_1 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_1d8)
                
                if ((zx.d(var_1d8) & 1) != 0)
                    v0_1, v1_1 = operator delete(var_1c8.q)
                
                int64_t x22_1 = *(x0_10 + 8)
                int64_t var_c8_1 = 0
                i_175 = nullptr
                void* x0_12
                
                if (x22_1 == 0)
                    x20_2 = var_530
                    int64_t var_c8_3 = 0
                    x0_12 = x21_1
                else
                    x20_2 = var_530
                    
                    if (0x7fffffffffffffff s/ x22_1 s> 0)
                        x0_12 = x21_1
                        
                        if (0 != x22_1)
                            goto label_c3b2a0
                        
                        goto label_c3b25c
                    
                    operator new(-1)
                    v0_1, v1_1 = operator new(-1)
                    x0_12 = x21_1
                    int64_t x20_4
                    void** i_235
                    
                    if (var_c8_1 == x22_1)
                    label_c3b25c:
                        int64_t var_c8_2 = x22_1
                        
                        if (x22_1 s>= 1)
                            i_235 = i_175
                            x20_4 = x22_1 << 2
                        label_c3b324:
                            v0_1, v1_1 = memset(i_235, 0, x20_4)
                            x0_12 = var_590
                            x20_2 = var_530
                    else
                    label_c3b2a0:
                        void** i_216 = i_175
                        
                        if (i_216 != 0)
                            v0_1, v1_1 = free(i_216[-1])
                            x0_12 = x21_1
                        
                        if (x22_1 s>= 1)
                            if (x22_1 u>> 0x3e != 0)
                                operator new(-1)
                            
                            x20_4 = x22_1 << 2
                            int64_t x0_15 = malloc(x20_4 + 0x10)
                            
                            if (x0_15 == 0)
                                i_235 = nullptr
                                
                                if (x20_4 != 0)
                                label_c3b304:
                                    
                                    if (i_235 == 0)
                                        operator new(-1)
                            else
                                i_235 = (x0_15 + 0x10) & 0xfffffffffffffff0
                                i_235[-1] = x0_15
                                
                                if (x20_4 != 0)
                                    goto label_c3b304
                            
                            i_175 = i_235
                            int64_t var_c8_5 = x22_1
                            goto label_c3b324
                        
                        i_175 = nullptr
                        int64_t var_c8_4 = x22_1
                
                int64_t x8_16 = x0_7[2]
                
                if (x8_16 s>= 1)
                    uint64_t x10_5 = zx.q(*x25_2)
                    void** i_228 = i_175
                    int64_t x11_1 = *x0_7
                    int64_t x12_1 = x0_7[1]
                    int64_t j_395 = 0
                    
                    if (x8_16 u< 8 || x12_1 != 1)
                        goto label_c3b3c0
                    
                    if (i_228 u>= x11_1 + ((x8_16 + x10_5) << 2)
                            || x11_1 + (x10_5 << 2) u>= i_228 + (x8_16 << 2))
                        j_395 = x8_16 & 0xfffffffffffffff8
                        void* x14_2 = &i_228[2]
                        void* x15_3 = x11_1 + (x10_5 << 2) + 0x10
                        int64_t j_359 = j_395
                        int64_t j
                        
                        do
                            v0_1 = *(x15_3 - 0x10)
                            v1_1 = *x15_3
                            j = j_359
                            j_359 -= 8
                            x15_3 += x12_1 << 5
                            *(x14_2 - 0x10) = v0_1
                            *x14_2 = v1_1
                            x14_2 += 0x20
                        while (j != 8)
                        
                        if (x8_16 != j_395)
                            goto label_c3b3c0
                    else
                        j_395 = 0
                    label_c3b3c0:
                        int64_t j_284 = x8_16 - j_395
                        int32_t* x11_2 = x11_1 + ((x10_5 + j_395 * x12_1) << 2)
                        int32_t* x9_7 = i_228 + (j_395 << 2)
                        int64_t j_1
                        
                        do
                            v0_1.d = *x11_2
                            j_1 = j_284
                            j_284 -= 1
                            x11_2 = &x11_2[x12_1]
                            *x9_7 = v0_1.d
                            x9_7 = &x9_7[1]
                        while (j_1 != 1)
                    
                    x8_16 = x0_7[2]
                
                int64_t x8_17 = x8_16 << 0x20
                int64_t x8_18
                
                if (*x0_12 s< 0xc)
                    x8_18 = 0x29
                else
                    x8_18 = 0x32
                
                int64_t x10_8
                
                if (x8_17 + 0xc00000000 s>= 0)
                    x10_8 = x8_17 + 0xc00000000
                else
                    x10_8 = -1
                
                int64_t x13_4
                
                x13_4 = x10_8 s< 1 ? x10_8 : 1
                
                int64_t x11_4
                
                if (-0xc00000000 - x8_17 s> x8_17 + 0xc00000000)
                    x11_4 = -0xc00000000 - x8_17
                else
                    x11_4 = x8_17 + 0xc00000000
                
                int64_t x9_8 = 0
                x21_1 = x0_12
                
                do
                    v0_1.d = float.s(zx.d(*(fp + i * 0x68 + 0x20) u>> x9_8) & 1)
                    *(i_175 + ((x13_4 * (x11_4 u>> 0x20)) << 2) + (x9_8 << 2)) = v0_1.d
                    x9_8 += 1
                while (x8_18 != x9_8)
                
                var_b8 = 0x10
                __builtin_strncpy(&i_176, "card_pre", 9)
                v0, v1, v2, v3 =
                    sub_c48e30(&i_174, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_175, &var_b8, 0)
                uint64_t x8_19 = zx.q(*x25_2)
                int128_t* i_231 = i_174
                int64_t x10_11 = *var_5c0_1
                int64_t x15_4 = x10_11 * x8_19
                int64_t x9_11 = *x8_3
                int64_t x16_2 = x9_11 + (x15_4 << 2)
                int64_t x12_6
                
                if ((x16_2 & 3) == 0)
                    int64_t x12_8 = zx.q(neg.d(x16_2.d u>> 2)) & 3
                    
                    x12_6 = x12_8 s< x10_11 ? x12_8 : x10_11
                else
                    x12_6 = x10_11
                
                int64_t x13_7 = x10_11 - x12_6
                x7 = x27_1
                int64_t x14_5
                
                if (x13_7 s< 0)
                    x14_5 = x13_7 + 3
                else
                    x14_5 = x13_7
                
                if (x12_6 s>= 1)
                    int64_t j_459
                    
                    if (x12_6 u< 8 || (x16_2 u< i_231 + (x12_6 << 2)
                            && i_231 u< x9_11 + ((x12_6 + x10_11 * x8_19) << 2)))
                        j_459 = 0
                    label_c3b534:
                        int64_t j_305 = x12_6 - j_459
                        int32_t* x17_2 = i_231 + (j_459 << 2)
                        int32_t* x16_6 = x9_11 + ((j_459 + x10_11 * x8_19) << 2)
                        int64_t j_2
                        
                        do
                            v0.d = *x17_2
                            x17_2 = &x17_2[1]
                            j_2 = j_305
                            j_305 -= 1
                            *x16_6 = v0.d
                            x16_6 = &x16_6[1]
                        while (j_2 != 1)
                    else
                        j_459 = x12_6 & 0xfffffffffffffff8
                        void* x15_20 = x9_11 + (x15_4 << 2) + 0x10
                        void* x17_24 = &i_231[1]
                        int64_t j_193 = j_459
                        int64_t j_3
                        
                        do
                            v0 = *(x17_24 - 0x10)
                            v1 = *x17_24
                            j_3 = j_193
                            j_193 -= 8
                            x17_24 += 0x20
                            *(x15_20 - 0x10) = v0
                            *x15_20 = v1
                            x15_20 += 0x20
                        while (j_3 != 8)
                        
                        if (x12_6 != j_459)
                            goto label_c3b534
                
                int64_t x15_5 = x14_5 & 0xfffffffffffffffc
                int64_t x14_6 = x15_5 + x12_6
                
                if (x13_7 s>= 4)
                    int128_t* x16_7 = i_231 + (x12_6 << 2)
                    int128_t* x17_4 = x9_11 + ((x12_6 + x10_11 * x8_19) << 2)
                    int64_t x0_18 = x12_6
                    
                    do
                        v0 = *x16_7
                        x16_7 = &x16_7[1]
                        x0_18 += 4
                        *x17_4 = v0
                        x17_4 = &x17_4[1]
                    while (x0_18 s< x14_6)
                
                if (x14_6 s< x10_11)
                    int64_t x13_8 = x13_7 - x15_5
                    
                    if (x13_8 u< 8)
                    label_c3b608:
                        int64_t j_288 = x10_11 - x14_6
                        int32_t* x11_8 = i_231 + (x14_6 << 2)
                        int32_t* x8_21 = x9_11 + ((x14_6 + x10_11 * x8_19) << 2)
                        int64_t j_4
                        
                        do
                            v0.d = *x11_8
                            x11_8 = &x11_8[1]
                            j_4 = j_288
                            j_288 -= 1
                            *x8_21 = v0.d
                            x8_21 = &x8_21[1]
                        while (j_4 != 1)
                    else
                        void* x15_7 = x9_11 + ((x12_6 + x10_11 * x8_19 + x15_5) << 2)
                        void* x16_10 = i_231 + ((x12_6 + x15_5) << 2)
                        
                        if (x15_7 u< i_231 + (x10_11 << 2)
                                && x16_10 u< x9_11 + ((x10_11 * (x8_19 + 1)) << 2))
                            goto label_c3b608
                        
                        int64_t j_394 = x13_8 & 0xfffffffffffffff8
                        void* x15_8 = x15_7 + 0x10
                        x14_6 += j_394
                        void* x16_11 = x16_10 + 0x10
                        int64_t j_360 = j_394
                        int64_t j_5
                        
                        do
                            v0 = *(x16_11 - 0x10)
                            v1 = *x16_11
                            j_5 = j_360
                            j_360 -= 8
                            x16_11 += 0x20
                            *(x15_8 - 0x10) = v0
                            *x15_8 = v1
                            x15_8 += 0x20
                        while (j_5 != 8)
                        
                        if (x13_8 != j_394)
                            goto label_c3b608
                
                int128_t* i_217 = i_174
                
                if (i_217 != 0)
                    v0, v1, v2, v3 = free(*(i_217 - 8))
                    x7 = x27_1
                
                void** i_218 = i_175
                
                if (i_218 != 0)
                    v0, v1, v2, v3 = free(i_218[-1])
                    x7 = x27_1
                
                x6 = var_550
                x10_4 = *var_5c0_1 * zx.q(*x25_2)
                x9_4 = *x8_3
            
            int64_t x12_13 = *x20_2
            int64_t x11_9 = *x6
            int64_t x22_2 = sx.q(x23.d)
            int64_t x16_12 = x12_13 * x22_2
            int64_t x15_9 = x11_9 + (x16_12 << 2)
            int64_t x13_9 = x12_13
            
            if ((x15_9 & 3) == 0)
                int64_t x8_24 = zx.q(neg.d(x15_9.d u>> 2)) & 3
                
                x13_9 = x8_24 s< x12_13 ? x8_24 : x12_13
            
            int64_t x14_7 = x12_13 - x13_9
            int64_t x8_26
            
            if (x14_7 s< 0)
                x8_26 = x14_7 + 3
            else
                x8_26 = x14_7
            
            if (x13_9 s>= 1)
                int64_t j_446
                
                if (x13_9 u< 8 || (x15_9 u< x9_4 + ((x13_9 + x10_4) << 2)
                        && x9_4 + (x10_4 << 2) u< x11_9 + ((x13_9 + x12_13 * x22_2) << 2)))
                    j_446 = 0
                label_c3b6e8:
                    int64_t j_346 = x13_9 - j_446
                    int32_t* x15_11 = x9_4 + ((j_446 + x10_4) << 2)
                    int32_t* x17_10 = x11_9 + ((j_446 + x12_13 * x22_2) << 2)
                    int64_t j_6
                    
                    do
                        v0.d = *x15_11
                        x15_11 = &x15_11[1]
                        j_6 = j_346
                        j_346 -= 1
                        *x17_10 = v0.d
                        x17_10 = &x17_10[1]
                    while (j_6 != 1)
                else
                    j_446 = x13_9 & 0xfffffffffffffff8
                    void* x16_19 = x11_9 + (x16_12 << 2) + 0x10
                    void* x17_16 = x9_4 + (x10_4 << 2) + 0x10
                    int64_t j_191 = j_446
                    int64_t j_7
                    
                    do
                        v0 = *(x17_16 - 0x10)
                        v1 = *x17_16
                        j_7 = j_191
                        j_191 -= 8
                        x17_16 += 0x20
                        *(x16_19 - 0x10) = v0
                        *x16_19 = v1
                        x16_19 += 0x20
                    while (j_7 != 8)
                    
                    if (x13_9 != j_446)
                        goto label_c3b6e8
            
            int64_t x16_13 = x8_26 & 0xfffffffffffffffc
            int64_t x15_12 = x16_13 + x13_9
            
            if (x14_7 s>= 4)
                int128_t* x8_28 = x9_4 + ((x13_9 + x10_4) << 2)
                int128_t* x17_12 = x11_9 + ((x13_9 + x12_13 * x22_2) << 2)
                int64_t x0_22 = x13_9
                
                do
                    v0 = *x8_28
                    x8_28 = &x8_28[1]
                    x0_22 += 4
                    *x17_12 = v0
                    x17_12 = &x17_12[1]
                while (x0_22 s< x15_12)
            
            if (x15_12 s< x12_13)
                int64_t x8_29 = x14_7 - x16_13
                
                if (x8_29 u< 8)
                label_c3b7c0:
                    int64_t j_285 = x12_13 - x15_12
                    int32_t* x9_14 = x9_4 + ((x15_12 + x10_4) << 2)
                    int32_t* x10_14 = x11_9 + ((x15_12 + x12_13 * x22_2) << 2)
                    int64_t j_8
                    
                    do
                        v0.d = *x9_14
                        x9_14 = &x9_14[1]
                        j_8 = j_285
                        j_285 -= 1
                        *x10_14 = v0.d
                        x10_14 = &x10_14[1]
                    while (j_8 != 1)
                else
                    void* x14_10 = x11_9 + ((x13_9 + x12_13 * x22_2 + x16_13) << 2)
                    void* x16_15 = x9_4 + ((x13_9 + x10_4 + x16_13) << 2)
                    
                    if (x14_10 u< x9_4 + ((x10_4 + x12_13) << 2)
                            && x16_15 u< x11_9 + ((x12_13 * (x22_2 + 1)) << 2))
                        goto label_c3b7c0
                    
                    int64_t j_396 = x8_29 & 0xfffffffffffffff8
                    void* x14_11 = x14_10 + 0x10
                    x15_12 += j_396
                    void* x16_16 = x16_15 + 0x10
                    int64_t j_361 = j_396
                    int64_t j_9
                    
                    do
                        v0 = *(x16_16 - 0x10)
                        v1 = *x16_16
                        j_9 = j_361
                        j_361 -= 8
                        x16_16 += 0x20
                        *(x14_11 - 0x10) = v0
                        *x14_11 = v1
                        x14_11 += 0x20
                    while (j_9 != 8)
                    
                    if (x8_29 != j_396)
                        goto label_c3b7c0
            
            int64_t x11_10 = *x20_2
            int64_t x24_2 = x22_2 << 2
            int32_t x10_15 = x0_1[2].d
            
            if (x11_10 s>= 1)
                int64_t x9_15 = *x6
                int64_t x12_15 = *x7
                int64_t x13_15 = x7[1]
                int64_t j_447 = 0
                uint64_t x14_12 = zx.q(x10_15 + sx.d(*(fp + i * 0x68 + 0x32))) << 0x20
                
                if (x11_10 u< 8 || x13_15 != 1)
                    goto label_c3b934
                
                int64_t x0_23
                
                if (x14_12 + -0x100000000 s>= 0)
                    x0_23 = x14_12 + -0x100000000
                else
                    x0_23 = -1
                
                int64_t x0_24
                
                x0_24 = x0_23 s< 1 ? x0_23 : 1
                
                int64_t x1_5
                
                if (x14_12 + -0x100000000 s> 0x100000000 - x14_12)
                    x1_5 = x14_12 + -0x100000000
                else
                    x1_5 = 0x100000000 - x14_12
                
                int64_t x16_17 = x11_10 * x22_2
                
                if (x9_15 + (x16_17 << 2) u>= x12_15 + ((x11_10 + x0_24 * (x1_5 u>> 0x20)) << 2)
                        || x9_15 + x11_10 * (x24_2 + 4)
                        u<= x12_15 + ((x14_12 + -0x100000000) s>> 0x1e))
                    int64_t x0_29
                    
                    if (x14_12 + -0x100000000 s>= 0)
                        x0_29 = x14_12 + -0x100000000
                    else
                        x0_29 = -1
                    
                    int64_t x0_30
                    
                    x0_30 = x0_29 s< 1 ? x0_29 : 1
                    
                    int64_t x17_17
                    
                    if (x14_12 + -0x100000000 s> 0x100000000 - x14_12)
                        x17_17 = x14_12 + -0x100000000
                    else
                        x17_17 = 0x100000000 - x14_12
                    
                    j_447 = x11_10 & 0xfffffffffffffff8
                    void* x16_21 = x9_15 + (x16_17 << 2) + 0x10
                    void* x17_21 = x12_15 + ((x0_30 * (x17_17 u>> 0x20)) << 2) + 0x10
                    int64_t j_232 = j_447
                    int64_t j_10
                    
                    do
                        v0 = *(x17_21 - 0x10)
                        v1 = *x17_21
                        v3 = *x16_21
                        j_10 = j_232
                        j_232 -= 8
                        x17_21 += x13_15 << 5
                        v0 = vaddq_f32(v0, *(x16_21 - 0x10))
                        v1 = vaddq_f32(v1, v3)
                        *(x16_21 - 0x10) = v0
                        *x16_21 = v1
                        x16_21 += 0x20
                    while (j_10 != 8)
                    
                    if (x11_10 != j_447)
                        goto label_c3b934
                else
                    j_447 = 0
                label_c3b934:
                    int64_t x0_32
                    
                    if (x14_12 + -0x100000000 s>= 0)
                        x0_32 = x14_12 + -0x100000000
                    else
                        x0_32 = -1
                    
                    int64_t x0_33
                    
                    x0_33 = x0_32 s< 1 ? x0_32 : 1
                    
                    int64_t x8_35
                    
                    if (x14_12 + -0x100000000 s> 0x100000000 - x14_12)
                        x8_35 = x14_12 + -0x100000000
                    else
                        x8_35 = 0x100000000 - x14_12
                    
                    int64_t j_347 = x11_10 - j_447
                    int32_t* x8_39 = x12_15 + ((x0_33 * (x8_35 u>> 0x20) + j_447 * x13_15) << 2)
                    int32_t* x9_16 = x9_15 + ((j_447 + x11_10 * x22_2) << 2)
                    int64_t j_11
                    
                    do
                        v0.d = *x8_39
                        v1.d = *x9_16
                        j_11 = j_347
                        j_347 -= 1
                        x8_39 = &x8_39[x13_15]
                        v0.d = v0.d f+ v1.d
                        *x9_16 = v0.d
                        x9_16 = &x9_16[1]
                    while (j_11 != 1)
            
            int32_t x8_40 = *x21_1
            int64_t x13_16 = sx.q(*(fp + i * 0x68 + 0x28))
            int32_t x9_18
            
            x9_18 = x8_40 s< 0xc ? 0x35 : 0x3e
            
            int32_t x10_16 = x9_18 + x10_15
            int32_t x8_45
            
            if (x8_40 s> 0xd)
                int64_t x8_42 = *x20_2
                
                if (x8_42 s>= 1)
                    int64_t x9_20 = *x6
                    int64_t x11_13 = *x7
                    int64_t x12_17 = x7[1]
                    int64_t j_400 = 0
                    int64_t x13_18 = x13_16 + sx.q(x10_16)
                    
                    if (x8_42 u< 8 || x12_17 != 1)
                        goto label_c3bac4
                    
                    int64_t x15_16 = x8_42 * x22_2
                    
                    if (x9_20 + (x15_16 << 2) u>= x11_13 + ((x8_42 + x13_18) << 2)
                            || x9_20 + x8_42 * (x24_2 + 4) u<= x11_13 + (x13_18 << 2))
                        j_400 = x8_42 & 0xfffffffffffffff8
                        void* x15_18 = x9_20 + (x15_16 << 2) + 0x10
                        void* x16_29 = x11_13 + (x13_18 << 2) + 0x10
                        int64_t j_192 = j_400
                        int64_t j_12
                        
                        do
                            v0 = *(x16_29 - 0x10)
                            v1 = *x16_29
                            v3 = *x15_18
                            j_12 = j_192
                            j_192 -= 8
                            x16_29 += x12_17 << 5
                            v0 = vaddq_f32(v0, *(x15_18 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_18 - 0x10) = v0
                            *x15_18 = v1
                            x15_18 += 0x20
                        while (j_12 != 8)
                        
                        if (x8_42 != j_400)
                            goto label_c3bac4
                    else
                        j_400 = 0
                    label_c3bac4:
                        int64_t j_306 = x8_42 - j_400
                        int32_t* x8_43 = x11_13 + ((x13_18 + j_400 * x12_17) << 2)
                        int32_t* x9_21 = x9_20 + ((j_400 + x8_42 * x22_2) << 2)
                        int64_t j_13
                        
                        do
                            v0.d = *x8_43
                            v1.d = *x9_21
                            j_13 = j_306
                            j_306 -= 1
                            x8_43 = &x8_43[x12_17]
                            v0.d = v0.d f+ v1.d
                            *x9_21 = v0.d
                            x9_21 = &x9_21[1]
                        while (j_13 != 1)
                
                x8_45 = 0x1d
            else
                if (x13_16.d s<= 0x14)
                    int64_t x8_41 = *x20_2
                    
                    if (x8_41 s>= 1)
                        int64_t x9_19 = *x6
                        int64_t x11_12 = *x7
                        int64_t x12_16 = x7[1]
                        int64_t j_399 = 0
                        int64_t x13_17 = x13_16 + sx.q(x10_16)
                        
                        if (x8_41 u< 8 || x12_16 != 1)
                            goto label_c3bb80
                        
                        int64_t x15_15 = x8_41 * x22_2
                        
                        if (x9_19 + (x15_15 << 2) u>= x11_12 + ((x8_41 + x13_17) << 2)
                                || x9_19 + x8_41 * (x24_2 + 4) u<= x11_12 + (x13_17 << 2))
                            j_399 = x8_41 & 0xfffffffffffffff8
                            void* x15_22 = x9_19 + (x15_15 << 2) + 0x10
                            void* x16_31 = x11_12 + (x13_17 << 2) + 0x10
                            int64_t j_194 = j_399
                            int64_t j_14
                            
                            do
                                v0 = *(x16_31 - 0x10)
                                v1 = *x16_31
                                v3 = *x15_22
                                j_14 = j_194
                                j_194 -= 8
                                x16_31 += x12_16 << 5
                                v0 = vaddq_f32(v0, *(x15_22 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x15_22 - 0x10) = v0
                                *x15_22 = v1
                                x15_22 += 0x20
                            while (j_14 != 8)
                            
                            if (x8_41 != j_399)
                                goto label_c3bb80
                        else
                            j_399 = 0
                        label_c3bb80:
                            int64_t j_307 = x8_41 - j_399
                            int32_t* x8_44 = x11_12 + ((x13_17 + j_399 * x12_16) << 2)
                            int32_t* x9_22 = x9_19 + ((j_399 + x8_41 * x22_2) << 2)
                            int64_t j_15
                            
                            do
                                v0.d = *x8_44
                                v1.d = *x9_22
                                j_15 = j_307
                                j_307 -= 1
                                x8_44 = &x8_44[x12_16]
                                v0.d = v0.d f+ v1.d
                                *x9_22 = v0.d
                                x9_22 = &x9_22[1]
                            while (j_15 != 1)
                
                x8_45 = 0x16
            
            int64_t x10_18 = sx.q(x10_16) + zx.q(x8_45)
            
            if (*x21_1 s>= 0xd)
                if (zx.d(*(fp + i * 0x68 + 0x34)) != 0)
                    int64_t x8_48 = *x20_2
                    
                    if (x8_48 s>= 1)
                        int64_t x9_24 = *x6
                        int64_t x11_14 = *x7
                        int64_t x12_20 = x7[1]
                        int64_t j_397 = 0
                        
                        if (x8_48 u< 8 || x12_20 != 1)
                            goto label_c3bc7c
                        
                        int64_t x14_22 = x8_48 * x22_2
                        
                        if (x9_24 + (x14_22 << 2) u>= x11_14 + ((x8_48 + x10_18) << 2)
                                || x9_24 + x8_48 * (x24_2 + 4) u<= x11_14 + (x10_18 << 2))
                            j_397 = x8_48 & 0xfffffffffffffff8
                            void* x14_24 = x9_24 + (x14_22 << 2) + 0x10
                            void* x15_27 = x11_14 + (x10_18 << 2) + 0x10
                            int64_t j_362 = j_397
                            int64_t j_16
                            
                            do
                                v0 = *(x15_27 - 0x10)
                                v1 = *x15_27
                                v3 = *x14_24
                                j_16 = j_362
                                j_362 -= 8
                                x15_27 += x12_20 << 5
                                v0 = vaddq_f32(v0, *(x14_24 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x14_24 - 0x10) = v0
                                *x14_24 = v1
                                x14_24 += 0x20
                            while (j_16 != 8)
                            
                            if (x8_48 != j_397)
                                goto label_c3bc7c
                        else
                            j_397 = 0
                        label_c3bc7c:
                            int64_t j_290 = x8_48 - j_397
                            int32_t* x8_49 = x11_14 + ((x10_18 + j_397 * x12_20) << 2)
                            int32_t* x9_25 = x9_24 + ((j_397 + x8_48 * x22_2) << 2)
                            int64_t j_17
                            
                            do
                                v0.d = *x8_49
                                v1.d = *x9_25
                                j_17 = j_290
                                j_290 -= 1
                                x8_49 = &x8_49[x12_20]
                                v0.d = v0.d f+ v1.d
                                *x9_25 = v0.d
                                x9_25 = &x9_25[1]
                            while (j_17 != 1)
                
                if (zx.d(*(fp + i * 0x68 + 0x35)) != 0)
                    int64_t x8_52 = *x20_2
                    
                    if (x8_52 s>= 1)
                        int64_t x9_26 = *x6
                        int64_t x11_15 = *x7
                        int64_t x12_22 = x7[1]
                        int64_t j_401 = 0
                        
                        if (x8_52 u< 8 || x12_22 != 1)
                            goto label_c3bd6c
                        
                        int64_t x15_29 = x8_52 * x22_2
                        
                        if (x9_26 + (x15_29 << 2) u>= x11_15 + ((x8_52 + sx.q(x10_18.d) + 1) << 2)
                                || x9_26 + x8_52 * (x24_2 + 4)
                                u<= x11_15 + ((sx.q(x10_18.d) + 1) << 2))
                            j_401 = x8_52 & 0xfffffffffffffff8
                            void* x15_31 = x9_26 + (x15_29 << 2) + 0x10
                            void* x16_37 = x11_15 + ((sx.q(x10_18.d) + 1) << 2) + 0x10
                            int64_t j_195 = j_401
                            int64_t j_18
                            
                            do
                                v0 = *(x16_37 - 0x10)
                                v1 = *x16_37
                                v3 = *x15_31
                                j_18 = j_195
                                j_195 -= 8
                                x16_37 += x12_22 << 5
                                v0 = vaddq_f32(v0, *(x15_31 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x15_31 - 0x10) = v0
                                *x15_31 = v1
                                x15_31 += 0x20
                            while (j_18 != 8)
                            
                            if (x8_52 != j_401)
                                goto label_c3bd6c
                        else
                            j_401 = 0
                        label_c3bd6c:
                            int64_t j_308 = x8_52 - j_401
                            int32_t* x8_53 = x11_15 + ((sx.q(x10_18.d) + 1 + j_401 * x12_22) << 2)
                            int32_t* x9_27 = x9_26 + ((j_401 + x8_52 * x22_2) << 2)
                            int64_t j_19
                            
                            do
                                v0.d = *x8_53
                                v1.d = *x9_27
                                j_19 = j_308
                                j_308 -= 1
                                x8_53 = &x8_53[x12_22]
                                v0.d = v0.d f+ v1.d
                                *x9_27 = v0.d
                                x9_27 = &x9_27[1]
                            while (j_19 != 1)
                
                if (zx.d(*(fp + i * 0x68 + 0x36)) != 0)
                    int64_t x8_56 = *x20_2
                    
                    if (x8_56 s>= 1)
                        int64_t x9_28 = *x6
                        int64_t x11_16 = *x7
                        int64_t x12_24 = x7[1]
                        int64_t j_402 = 0
                        
                        if (x8_56 u< 8 || x12_24 != 1)
                            goto label_c3be5c
                        
                        int64_t x15_32 = x8_56 * x22_2
                        
                        if (x9_28 + (x15_32 << 2) u>= x11_16 + ((x8_56 + sx.q(x10_18.d) + 2) << 2)
                                || x9_28 + x8_56 * (x24_2 + 4)
                                u<= x11_16 + ((sx.q(x10_18.d) + 2) << 2))
                            j_402 = x8_56 & 0xfffffffffffffff8
                            void* x15_34 = x9_28 + (x15_32 << 2) + 0x10
                            void* x16_42 = x11_16 + ((sx.q(x10_18.d) + 2) << 2) + 0x10
                            int64_t j_196 = j_402
                            int64_t j_20
                            
                            do
                                v0 = *(x16_42 - 0x10)
                                v1 = *x16_42
                                v3 = *x15_34
                                j_20 = j_196
                                j_196 -= 8
                                x16_42 += x12_24 << 5
                                v0 = vaddq_f32(v0, *(x15_34 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x15_34 - 0x10) = v0
                                *x15_34 = v1
                                x15_34 += 0x20
                            while (j_20 != 8)
                            
                            if (x8_56 != j_402)
                                goto label_c3be5c
                        else
                            j_402 = 0
                        label_c3be5c:
                            int64_t j_309 = x8_56 - j_402
                            int32_t* x8_57 = x11_16 + ((sx.q(x10_18.d) + 2 + j_402 * x12_24) << 2)
                            int32_t* x9_29 = x9_28 + ((j_402 + x8_56 * x22_2) << 2)
                            int64_t j_21
                            
                            do
                                v0.d = *x8_57
                                v1.d = *x9_29
                                j_21 = j_309
                                j_309 -= 1
                                x8_57 = &x8_57[x12_24]
                                v0.d = v0.d f+ v1.d
                                *x9_29 = v0.d
                                x9_29 = &x9_29[1]
                            while (j_21 != 1)
                
                x10_18 = zx.q(x10_18.d + 3)
            
            if (zx.d(*(fp + i * 0x68 + 0x2c)) != 0)
                int64_t x8_60 = *x20_2
                
                if (x8_60 s>= 1)
                    int64_t x9_30 = *x6
                    int64_t x11_17 = *x7
                    int64_t x12_26 = x7[1]
                    int64_t j_403 = 0
                    int64_t x13_34 = sx.q(x10_18.d)
                    
                    if (x8_60 u< 8 || x12_26 != 1)
                        goto label_c3bf4c
                    
                    int64_t x15_35 = x8_60 * x22_2
                    
                    if (x9_30 + (x15_35 << 2) u>= x11_17 + ((x8_60 + x13_34) << 2)
                            || x9_30 + x8_60 * (x24_2 + 4) u<= x11_17 + (sx.q(x10_18.d) << 2))
                        j_403 = x8_60 & 0xfffffffffffffff8
                        void* x15_37 = x9_30 + (x15_35 << 2) + 0x10
                        void* x16_47 = x11_17 + (x13_34 << 2) + 0x10
                        int64_t j_197 = j_403
                        int64_t j_22
                        
                        do
                            v0 = *(x16_47 - 0x10)
                            v1 = *x16_47
                            v3 = *x15_37
                            j_22 = j_197
                            j_197 -= 8
                            x16_47 += x12_26 << 5
                            v0 = vaddq_f32(v0, *(x15_37 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_37 - 0x10) = v0
                            *x15_37 = v1
                            x15_37 += 0x20
                        while (j_22 != 8)
                        
                        if (x8_60 != j_403)
                            goto label_c3bf4c
                    else
                        j_403 = 0
                    label_c3bf4c:
                        int64_t j_310 = x8_60 - j_403
                        int32_t* x8_61 = x11_17 + ((x13_34 + j_403 * x12_26) << 2)
                        int32_t* x9_31 = x9_30 + ((j_403 + x8_60 * x22_2) << 2)
                        int64_t j_23
                        
                        do
                            v0.d = *x8_61
                            v1.d = *x9_31
                            j_23 = j_310
                            j_310 -= 1
                            x8_61 = &x8_61[x12_26]
                            v0.d = v0.d f+ v1.d
                            *x9_31 = v0.d
                            x9_31 = &x9_31[1]
                        while (j_23 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x2d)) != 0)
                int64_t x8_64 = *x20_2
                
                if (x8_64 s>= 1)
                    int64_t x9_32 = *x6
                    int64_t x11_18 = *x7
                    int64_t x12_28 = x7[1]
                    int64_t j_404 = 0
                    
                    if (x8_64 u< 8 || x12_28 != 1)
                        goto label_c3c03c
                    
                    int64_t x15_38 = x8_64 * x22_2
                    
                    if (x9_32 + (x15_38 << 2) u>= x11_18 + ((x8_64 + sx.q(x10_18.d) + 1) << 2)
                            || x9_32 + x8_64 * (x24_2 + 4)
                            u<= x11_18 + ((sx.q(x10_18.d) + 1) << 2))
                        j_404 = x8_64 & 0xfffffffffffffff8
                        void* x15_40 = x9_32 + (x15_38 << 2) + 0x10
                        void* x16_52 = x11_18 + ((sx.q(x10_18.d) + 1) << 2) + 0x10
                        int64_t j_198 = j_404
                        int64_t j_24
                        
                        do
                            v0 = *(x16_52 - 0x10)
                            v1 = *x16_52
                            v3 = *x15_40
                            j_24 = j_198
                            j_198 -= 8
                            x16_52 += x12_28 << 5
                            v0 = vaddq_f32(v0, *(x15_40 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_40 - 0x10) = v0
                            *x15_40 = v1
                            x15_40 += 0x20
                        while (j_24 != 8)
                        
                        if (x8_64 != j_404)
                            goto label_c3c03c
                    else
                        j_404 = 0
                    label_c3c03c:
                        int64_t j_311 = x8_64 - j_404
                        int32_t* x8_65 = x11_18 + ((sx.q(x10_18.d) + 1 + j_404 * x12_28) << 2)
                        int32_t* x9_33 = x9_32 + ((j_404 + x8_64 * x22_2) << 2)
                        int64_t j_25
                        
                        do
                            v0.d = *x8_65
                            v1.d = *x9_33
                            j_25 = j_311
                            j_311 -= 1
                            x8_65 = &x8_65[x12_28]
                            v0.d = v0.d f+ v1.d
                            *x9_33 = v0.d
                            x9_33 = &x9_33[1]
                        while (j_25 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x2e)) != 0)
                int64_t x8_68 = *x20_2
                
                if (x8_68 s>= 1)
                    int64_t x9_34 = *x6
                    int64_t x11_19 = *x7
                    int64_t x12_30 = x7[1]
                    int64_t j_405 = 0
                    
                    if (x8_68 u< 8 || x12_30 != 1)
                        goto label_c3c12c
                    
                    int64_t x15_41 = x8_68 * x22_2
                    
                    if (x9_34 + (x15_41 << 2) u>= x11_19 + ((x8_68 + sx.q(x10_18.d) + 2) << 2)
                            || x9_34 + x8_68 * (x24_2 + 4)
                            u<= x11_19 + ((sx.q(x10_18.d) + 2) << 2))
                        j_405 = x8_68 & 0xfffffffffffffff8
                        void* x15_43 = x9_34 + (x15_41 << 2) + 0x10
                        void* x16_57 = x11_19 + ((sx.q(x10_18.d) + 2) << 2) + 0x10
                        int64_t j_199 = j_405
                        int64_t j_26
                        
                        do
                            v0 = *(x16_57 - 0x10)
                            v1 = *x16_57
                            v3 = *x15_43
                            j_26 = j_199
                            j_199 -= 8
                            x16_57 += x12_30 << 5
                            v0 = vaddq_f32(v0, *(x15_43 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_43 - 0x10) = v0
                            *x15_43 = v1
                            x15_43 += 0x20
                        while (j_26 != 8)
                        
                        if (x8_68 != j_405)
                            goto label_c3c12c
                    else
                        j_405 = 0
                    label_c3c12c:
                        int64_t j_312 = x8_68 - j_405
                        int32_t* x8_69 = x11_19 + ((sx.q(x10_18.d) + 2 + j_405 * x12_30) << 2)
                        int32_t* x9_35 = x9_34 + ((j_405 + x8_68 * x22_2) << 2)
                        int64_t j_27
                        
                        do
                            v0.d = *x8_69
                            v1.d = *x9_35
                            j_27 = j_312
                            j_312 -= 1
                            x8_69 = &x8_69[x12_30]
                            v0.d = v0.d f+ v1.d
                            *x9_35 = v0.d
                            x9_35 = &x9_35[1]
                        while (j_27 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x2f)) != 0)
                int64_t x8_72 = *x20_2
                
                if (x8_72 s>= 1)
                    int64_t x9_36 = *x6
                    int64_t x11_20 = *x7
                    int64_t x12_32 = x7[1]
                    int64_t j_406 = 0
                    
                    if (x8_72 u< 8 || x12_32 != 1)
                        goto label_c3c21c
                    
                    int64_t x15_44 = x8_72 * x22_2
                    
                    if (x9_36 + (x15_44 << 2) u>= x11_20 + ((x8_72 + sx.q(x10_18.d) + 3) << 2)
                            || x9_36 + x8_72 * (x24_2 + 4)
                            u<= x11_20 + ((sx.q(x10_18.d) + 3) << 2))
                        j_406 = x8_72 & 0xfffffffffffffff8
                        void* x15_46 = x9_36 + (x15_44 << 2) + 0x10
                        void* x16_62 = x11_20 + ((sx.q(x10_18.d) + 3) << 2) + 0x10
                        int64_t j_200 = j_406
                        int64_t j_28
                        
                        do
                            v0 = *(x16_62 - 0x10)
                            v1 = *x16_62
                            v3 = *x15_46
                            j_28 = j_200
                            j_200 -= 8
                            x16_62 += x12_32 << 5
                            v0 = vaddq_f32(v0, *(x15_46 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_46 - 0x10) = v0
                            *x15_46 = v1
                            x15_46 += 0x20
                        while (j_28 != 8)
                        
                        if (x8_72 != j_406)
                            goto label_c3c21c
                    else
                        j_406 = 0
                    label_c3c21c:
                        int64_t j_313 = x8_72 - j_406
                        int32_t* x8_73 = x11_20 + ((sx.q(x10_18.d) + 3 + j_406 * x12_32) << 2)
                        int32_t* x9_37 = x9_36 + ((j_406 + x8_72 * x22_2) << 2)
                        int64_t j_29
                        
                        do
                            v0.d = *x8_73
                            v1.d = *x9_37
                            j_29 = j_313
                            j_313 -= 1
                            x8_73 = &x8_73[x12_32]
                            v0.d = v0.d f+ v1.d
                            *x9_37 = v0.d
                            x9_37 = &x9_37[1]
                        while (j_29 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x30)) != 0)
                int64_t x8_76 = *x20_2
                
                if (x8_76 s>= 1)
                    int64_t x9_38 = *x6
                    int64_t x11_21 = *x7
                    int64_t x12_34 = x7[1]
                    int64_t j_407 = 0
                    
                    if (x8_76 u< 8 || x12_34 != 1)
                        goto label_c3c30c
                    
                    int64_t x15_47 = x8_76 * x22_2
                    
                    if (x9_38 + (x15_47 << 2) u>= x11_21 + ((x8_76 + sx.q(x10_18.d) + 4) << 2)
                            || x9_38 + x8_76 * (x24_2 + 4)
                            u<= x11_21 + ((sx.q(x10_18.d) + 4) << 2))
                        j_407 = x8_76 & 0xfffffffffffffff8
                        void* x15_49 = x9_38 + (x15_47 << 2) + 0x10
                        void* x16_67 = x11_21 + ((sx.q(x10_18.d) + 4) << 2) + 0x10
                        int64_t j_201 = j_407
                        int64_t j_30
                        
                        do
                            v0 = *(x16_67 - 0x10)
                            v1 = *x16_67
                            v3 = *x15_49
                            j_30 = j_201
                            j_201 -= 8
                            x16_67 += x12_34 << 5
                            v0 = vaddq_f32(v0, *(x15_49 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_49 - 0x10) = v0
                            *x15_49 = v1
                            x15_49 += 0x20
                        while (j_30 != 8)
                        
                        if (x8_76 != j_407)
                            goto label_c3c30c
                    else
                        j_407 = 0
                    label_c3c30c:
                        int64_t j_314 = x8_76 - j_407
                        int32_t* x8_77 = x11_21 + ((sx.q(x10_18.d) + 4 + j_407 * x12_34) << 2)
                        int32_t* x9_39 = x9_38 + ((j_407 + x8_76 * x22_2) << 2)
                        int64_t j_31
                        
                        do
                            v0.d = *x8_77
                            v1.d = *x9_39
                            j_31 = j_314
                            j_314 -= 1
                            x8_77 = &x8_77[x12_34]
                            v0.d = v0.d f+ v1.d
                            *x9_39 = v0.d
                            x9_39 = &x9_39[1]
                        while (j_31 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x31)) != 0)
                int64_t x8_80 = *x20_2
                
                if (x8_80 s>= 1)
                    int64_t x9_40 = *x6
                    int64_t x11_22 = *x7
                    int64_t x12_36 = x7[1]
                    int64_t j_408 = 0
                    
                    if (x8_80 u< 8 || x12_36 != 1)
                        goto label_c3c3fc
                    
                    int64_t x15_50 = x8_80 * x22_2
                    
                    if (x9_40 + (x15_50 << 2) u>= x11_22 + ((x8_80 + sx.q(x10_18.d) + 5) << 2)
                            || x9_40 + x8_80 * (x24_2 + 4)
                            u<= x11_22 + ((sx.q(x10_18.d) + 5) << 2))
                        j_408 = x8_80 & 0xfffffffffffffff8
                        int128_t* x15_52 = x9_40 + (x15_50 << 2) + 0x10
                        int128_t* x16_72 = x11_22 + ((sx.q(x10_18.d) + 5) << 2) + 0x10
                        int64_t j_202 = j_408
                        int64_t j_32
                        
                        do
                            v0 = x16_72[-1]
                            v1 = *x16_72
                            v3 = *x15_52
                            j_32 = j_202
                            j_202 -= 8
                            x16_72 = &x16_72[x12_36 * 2]
                            v0 = vaddq_f32(v0, x15_52[-1])
                            v1 = vaddq_f32(v1, v3)
                            x15_52[-1] = v0
                            *x15_52 = v1
                            x15_52 = &x15_52[2]
                        while (j_32 != 8)
                        
                        if (x8_80 != j_408)
                            goto label_c3c3fc
                    else
                        j_408 = 0
                    label_c3c3fc:
                        int64_t j_315 = x8_80 - j_408
                        int32_t* x8_81 = x11_22 + ((sx.q(x10_18.d) + 5 + j_408 * x12_36) << 2)
                        int32_t* x9_41 = x9_40 + ((j_408 + x8_80 * x22_2) << 2)
                        int64_t j_33
                        
                        do
                            v0.d = *x8_81
                            v1.d = *x9_41
                            j_33 = j_315
                            j_315 -= 1
                            x8_81 = &x8_81[x12_36]
                            v0.d = v0.d f+ v1.d
                            *x9_41 = v0.d
                            x9_41 = &x9_41[1]
                        while (j_33 != 1)
            
            int32_t x9_42 = sx.d(*(fp + i * 0x68 + 0x5c))
            int64_t x11_23 = sx.q(x10_18.d)
            
            if (x9_42 s> 0)
                int64_t x8_83 = *x20_2
                
                if (x8_83 s>= 1)
                    int64_t x9_43 = *x6
                    int64_t x14_57 = *x7
                    int64_t x15_53 = x7[1]
                    int64_t j_460 = 0
                    
                    if (x8_83 u< 8 || x15_53 != 1)
                        goto label_c3c4f0
                    
                    int64_t x17_34 = x8_83 * x22_2
                    
                    if (x9_43 + (x17_34 << 2) u>= x14_57 + ((x8_83 + x11_23 + 6) << 2)
                            || x9_43 + x8_83 * (x24_2 + 4) u<= x14_57 + ((x11_23 + 6) << 2))
                        j_460 = x8_83 & 0xfffffffffffffff8
                        void* x17_36 = x9_43 + (x17_34 << 2) + 0x10
                        void* x0_38 = x14_57 + ((x11_23 + 6) << 2) + 0x10
                        int64_t j_248 = j_460
                        int64_t j_34
                        
                        do
                            v0 = *(x0_38 - 0x10)
                            v1 = *x0_38
                            v3 = *x17_36
                            j_34 = j_248
                            j_248 -= 8
                            x0_38 += x15_53 << 5
                            v0 = vaddq_f32(v0, *(x17_36 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x17_36 - 0x10) = v0
                            *x17_36 = v1
                            x17_36 += 0x20
                        while (j_34 != 8)
                        
                        if (x8_83 != j_460)
                            goto label_c3c4f0
                    else
                        j_460 = 0
                    label_c3c4f0:
                        int64_t j_363 = x8_83 - j_460
                        int32_t* x8_84 = x14_57 + ((x11_23 + 6 + j_460 * x15_53) << 2)
                        int32_t* x9_44 = x9_43 + ((j_460 + x8_83 * x22_2) << 2)
                        int64_t j_35
                        
                        do
                            v0.d = *x8_84
                            v1.d = *x9_44
                            j_35 = j_363
                            j_363 -= 1
                            x8_84 = &x8_84[x15_53]
                            v0.d = v0.d f+ v1.d
                            *x9_44 = v0.d
                            x9_44 = &x9_44[1]
                        while (j_35 != 1)
                    
                    x9_42 = zx.d(*(fp + i * 0x68 + 0x5c))
                
                if (sx.d(x9_42.w) s> 1)
                    int64_t x8_86 = *x20_2
                    
                    if (x8_86 s>= 1)
                        int64_t x9_45 = *x6
                        int64_t x14_58 = *x7
                        int64_t x15_55 = x7[1]
                        int64_t j_461 = 0
                        
                        if (x8_86 u< 8 || x15_55 != 1)
                            goto label_c3c5e4
                        
                        int64_t x17_37 = x8_86 * x22_2
                        
                        if (x9_45 + (x17_37 << 2) u>= x14_58 + ((x8_86 + x11_23 + 6) << 2) + 4
                                || x9_45 + x8_86 * (x24_2 + 4)
                                u<= x14_58 + ((x11_23 + 6) << 2) + 4)
                            j_461 = x8_86 & 0xfffffffffffffff8
                            void* x17_39 = x9_45 + (x17_37 << 2) + 0x10
                            void* x0_44 = x14_58 + ((x11_23 + 6) << 2) + 0x14
                            int64_t j_249 = j_461
                            int64_t j_36
                            
                            do
                                v0 = *(x0_44 - 0x10)
                                v1 = *x0_44
                                v3 = *x17_39
                                j_36 = j_249
                                j_249 -= 8
                                x0_44 += x15_55 << 5
                                v0 = vaddq_f32(v0, *(x17_39 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x17_39 - 0x10) = v0
                                *x17_39 = v1
                                x17_39 += 0x20
                            while (j_36 != 8)
                            
                            if (x8_86 != j_461)
                                goto label_c3c5e4
                        else
                            j_461 = 0
                        label_c3c5e4:
                            int64_t j_364 = x8_86 - j_461
                            int32_t* x8_88 = x14_58 + ((x11_23 + 6 + j_461 * x15_55) << 2) + 4
                            int32_t* x9_46 = x9_45 + ((j_461 + x8_86 * x22_2) << 2)
                            int64_t j_37
                            
                            do
                                v0.d = *x8_88
                                v1.d = *x9_46
                                j_37 = j_364
                                j_364 -= 1
                                x8_88 = &x8_88[x15_55]
                                v0.d = v0.d f+ v1.d
                                *x9_46 = v0.d
                                x9_46 = &x9_46[1]
                            while (j_37 != 1)
                        
                        x9_42 = zx.d(*(fp + i * 0x68 + 0x5c))
                    
                    if (sx.d(x9_42.w) s>= 3)
                        int64_t x8_90 = *x20_2
                        
                        if (x8_90 s>= 1)
                            int64_t x9_47 = *x6
                            int64_t x14_59 = *x7
                            int64_t x15_57 = x7[1]
                            int64_t j_462 = 0
                            
                            if (x8_90 u< 8 || x15_57 != 1)
                                goto label_c3c6d8
                            
                            int64_t x17_40 = x8_90 * x22_2
                            
                            if (x9_47 + (x17_40 << 2) u>= x14_59 + ((x8_90 + x11_23 + 6) << 2) + 8
                                    || x9_47 + x8_90 * (x24_2 + 4)
                                    u<= x14_59 + ((x11_23 + 6) << 2) + 8)
                                j_462 = x8_90 & 0xfffffffffffffff8
                                void* x17_42 = x9_47 + (x17_40 << 2) + 0x10
                                void* x0_50 = x14_59 + ((x11_23 + 6) << 2) + 0x18
                                int64_t j_250 = j_462
                                int64_t j_38
                                
                                do
                                    v0 = *(x0_50 - 0x10)
                                    v1 = *x0_50
                                    v3 = *x17_42
                                    j_38 = j_250
                                    j_250 -= 8
                                    x0_50 += x15_57 << 5
                                    v0 = vaddq_f32(v0, *(x17_42 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x17_42 - 0x10) = v0
                                    *x17_42 = v1
                                    x17_42 += 0x20
                                while (j_38 != 8)
                                
                                if (x8_90 != j_462)
                                    goto label_c3c6d8
                            else
                                j_462 = 0
                            label_c3c6d8:
                                int64_t j_365 = x8_90 - j_462
                                int32_t* x8_92 = x14_59 + ((x11_23 + 6 + j_462 * x15_57) << 2) + 8
                                int32_t* x9_48 = x9_47 + ((j_462 + x8_90 * x22_2) << 2)
                                int64_t j_39
                                
                                do
                                    v0.d = *x8_92
                                    v1.d = *x9_48
                                    j_39 = j_365
                                    j_365 -= 1
                                    x8_92 = &x8_92[x15_57]
                                    v0.d = v0.d f+ v1.d
                                    *x9_48 = v0.d
                                    x9_48 = &x9_48[1]
                                while (j_39 != 1)
                            
                            x9_42 = zx.d(*(fp + i * 0x68 + 0x5c))
                        
                        if (sx.d(x9_42.w) s>= 4)
                            int64_t x8_94 = *x20_2
                            
                            if (x8_94 s>= 1)
                                int64_t x9_49 = *x6
                                int64_t x14_60 = *x7
                                int64_t x15_59 = x7[1]
                                int64_t j_463 = 0
                                
                                if (x8_94 u< 8 || x15_59 != 1)
                                    goto label_c3c7cc
                                
                                int64_t x17_43 = x8_94 * x22_2
                                
                                if (x9_49 + (x17_43 << 2)
                                        u>= x14_60 + ((x8_94 + x11_23 + 6) << 2) + 0xc
                                        || x9_49 + x8_94 * (x24_2 + 4)
                                        u<= x14_60 + ((x11_23 + 6) << 2) + 0xc)
                                    j_463 = x8_94 & 0xfffffffffffffff8
                                    void* x17_45 = x9_49 + (x17_43 << 2) + 0x10
                                    void* x0_56 = x14_60 + ((x11_23 + 6) << 2) + 0x1c
                                    int64_t j_251 = j_463
                                    int64_t j_40
                                    
                                    do
                                        v0 = *(x0_56 - 0x10)
                                        v1 = *x0_56
                                        v3 = *x17_45
                                        j_40 = j_251
                                        j_251 -= 8
                                        x0_56 += x15_59 << 5
                                        v0 = vaddq_f32(v0, *(x17_45 - 0x10))
                                        v1 = vaddq_f32(v1, v3)
                                        *(x17_45 - 0x10) = v0
                                        *x17_45 = v1
                                        x17_45 += 0x20
                                    while (j_40 != 8)
                                    
                                    if (x8_94 != j_463)
                                        goto label_c3c7cc
                                else
                                    j_463 = 0
                                label_c3c7cc:
                                    int64_t j_366 = x8_94 - j_463
                                    int32_t* x8_96 =
                                        x14_60 + ((x11_23 + 6 + j_463 * x15_59) << 2) + 0xc
                                    int32_t* x9_50 = x9_49 + ((j_463 + x8_94 * x22_2) << 2)
                                    int64_t j_41
                                    
                                    do
                                        v0.d = *x8_96
                                        v1.d = *x9_50
                                        j_41 = j_366
                                        j_366 -= 1
                                        x8_96 = &x8_96[x15_59]
                                        v0.d = v0.d f+ v1.d
                                        *x9_50 = v0.d
                                        x9_50 = &x9_50[1]
                                    while (j_41 != 1)
                                
                                x9_42 = zx.d(*(fp + i * 0x68 + 0x5c))
                            
                            if (sx.d(x9_42.w) s>= 5)
                                int64_t x8_98 = *x20_2
                                
                                if (x8_98 s>= 1)
                                    int64_t x9_51 = *x6
                                    int64_t x13_58 = *x7
                                    int64_t x14_61 = x7[1]
                                    int64_t j_448 = 0
                                    
                                    if (x8_98 u< 8 || x14_61 != 1)
                                        goto label_c3c8c0
                                    
                                    int64_t x16_95 = x8_98 * x22_2
                                    
                                    if (x9_51 + (x16_95 << 2)
                                            u>= x13_58 + ((x8_98 + x11_23 + 6) << 2) + 0x10
                                            || x9_51 + x8_98 * (x24_2 + 4)
                                            u<= x13_58 + ((x11_23 + 6) << 2) + 0x10)
                                        j_448 = x8_98 & 0xfffffffffffffff8
                                        void* x16_97 = x9_51 + (x16_95 << 2) + 0x10
                                        void* x17_50 = x13_58 + ((x11_23 + 6) << 2) + 0x20
                                        int64_t j_233 = j_448
                                        int64_t j_42
                                        
                                        do
                                            v0 = *(x17_50 - 0x10)
                                            v1 = *x17_50
                                            v3 = *x16_97
                                            j_42 = j_233
                                            j_233 -= 8
                                            x17_50 += x14_61 << 5
                                            v0 = vaddq_f32(v0, *(x16_97 - 0x10))
                                            v1 = vaddq_f32(v1, v3)
                                            *(x16_97 - 0x10) = v0
                                            *x16_97 = v1
                                            x16_97 += 0x20
                                        while (j_42 != 8)
                                        
                                        if (x8_98 != j_448)
                                            goto label_c3c8c0
                                    else
                                        j_448 = 0
                                    label_c3c8c0:
                                        int64_t j_348 = x8_98 - j_448
                                        int32_t* x8_100 =
                                            x13_58 + ((x11_23 + 6 + j_448 * x14_61) << 2) + 0x10
                                        int32_t* x9_52 = x9_51 + ((j_448 + x8_98 * x22_2) << 2)
                                        int64_t j_43
                                        
                                        do
                                            v0.d = *x8_100
                                            v1.d = *x9_52
                                            j_43 = j_348
                                            j_348 -= 1
                                            x8_100 = &x8_100[x14_61]
                                            v0.d = v0.d f+ v1.d
                                            *x9_52 = v0.d
                                            x9_52 = &x9_52[1]
                                        while (j_43 != 1)
            
            int32_t x9_53 = sx.d(*(fp + i * 0x68 + 0x60))
            
            if (x9_53 s>= 1)
                int64_t x8_101 = *x20_2
                
                if (x8_101 s>= 1)
                    int64_t x9_54 = *x6
                    int64_t x14_63 = *x7
                    int64_t x15_66 = x7[1]
                    int64_t j_464 = 0
                    
                    if (x8_101 u< 8 || x15_66 != 1)
                        goto label_c3c9ac
                    
                    int64_t x17_52 = x8_101 * x22_2
                    
                    if (x9_54 + (x17_52 << 2) u>= x14_63 + ((x8_101 + x11_23 + 0xb) << 2)
                            || x9_54 + x8_101 * (x24_2 + 4) u<= x14_63 + ((x11_23 + 0xb) << 2))
                        j_464 = x8_101 & 0xfffffffffffffff8
                        void* x17_54 = x9_54 + (x17_52 << 2) + 0x10
                        void* x0_63 = x14_63 + ((x11_23 + 0xb) << 2) + 0x10
                        int64_t j_252 = j_464
                        int64_t j_44
                        
                        do
                            v0 = *(x0_63 - 0x10)
                            v1 = *x0_63
                            v3 = *x17_54
                            j_44 = j_252
                            j_252 -= 8
                            x0_63 += x15_66 << 5
                            v0 = vaddq_f32(v0, *(x17_54 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x17_54 - 0x10) = v0
                            *x17_54 = v1
                            x17_54 += 0x20
                        while (j_44 != 8)
                        
                        if (x8_101 != j_464)
                            goto label_c3c9ac
                    else
                        j_464 = 0
                    label_c3c9ac:
                        int64_t j_367 = x8_101 - j_464
                        int32_t* x8_102 = x14_63 + ((x11_23 + 0xb + j_464 * x15_66) << 2)
                        int32_t* x9_55 = x9_54 + ((j_464 + x8_101 * x22_2) << 2)
                        int64_t j_45
                        
                        do
                            v0.d = *x8_102
                            v1.d = *x9_55
                            j_45 = j_367
                            j_367 -= 1
                            x8_102 = &x8_102[x15_66]
                            v0.d = v0.d f+ v1.d
                            *x9_55 = v0.d
                            x9_55 = &x9_55[1]
                        while (j_45 != 1)
                    
                    x9_53 = zx.d(*(fp + i * 0x68 + 0x60))
                
                if (sx.d(x9_53.w) s> 1)
                    int64_t x8_104 = *x20_2
                    
                    if (x8_104 s>= 1)
                        int64_t x9_56 = *x6
                        int64_t x14_64 = *x7
                        int64_t x15_68 = x7[1]
                        int64_t j_465 = 0
                        
                        if (x8_104 u< 8 || x15_68 != 1)
                            goto label_c3caa0
                        
                        int64_t x17_55 = x8_104 * x22_2
                        
                        if (x9_56 + (x17_55 << 2) u>= x14_64 + ((x8_104 + x11_23 + 0xb) << 2) + 4
                                || x9_56 + x8_104 * (x24_2 + 4)
                                u<= x14_64 + ((x11_23 + 0xb) << 2) + 4)
                            j_465 = x8_104 & 0xfffffffffffffff8
                            void* x17_57 = x9_56 + (x17_55 << 2) + 0x10
                            void* x0_69 = x14_64 + ((x11_23 + 0xb) << 2) + 0x14
                            int64_t j_253 = j_465
                            int64_t j_46
                            
                            do
                                v0 = *(x0_69 - 0x10)
                                v1 = *x0_69
                                v3 = *x17_57
                                j_46 = j_253
                                j_253 -= 8
                                x0_69 += x15_68 << 5
                                v0 = vaddq_f32(v0, *(x17_57 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x17_57 - 0x10) = v0
                                *x17_57 = v1
                                x17_57 += 0x20
                            while (j_46 != 8)
                            
                            if (x8_104 != j_465)
                                goto label_c3caa0
                        else
                            j_465 = 0
                        label_c3caa0:
                            int64_t j_368 = x8_104 - j_465
                            int32_t* x8_106 = x14_64 + ((x11_23 + 0xb + j_465 * x15_68) << 2) + 4
                            int32_t* x9_57 = x9_56 + ((j_465 + x8_104 * x22_2) << 2)
                            int64_t j_47
                            
                            do
                                v0.d = *x8_106
                                v1.d = *x9_57
                                j_47 = j_368
                                j_368 -= 1
                                x8_106 = &x8_106[x15_68]
                                v0.d = v0.d f+ v1.d
                                *x9_57 = v0.d
                                x9_57 = &x9_57[1]
                            while (j_47 != 1)
                        
                        x9_53 = zx.d(*(fp + i * 0x68 + 0x60))
                    
                    if (sx.d(x9_53.w) s>= 3)
                        int64_t x8_108 = *x20_2
                        
                        if (x8_108 s>= 1)
                            int64_t x9_58 = *x6
                            int64_t x14_65 = *x7
                            int64_t x15_70 = x7[1]
                            int64_t j_466 = 0
                            
                            if (x8_108 u< 8 || x15_70 != 1)
                                goto label_c3cb94
                            
                            int64_t x17_58 = x8_108 * x22_2
                            
                            if (x9_58 + (x17_58 << 2)
                                    u>= x14_65 + ((x8_108 + x11_23 + 0xb) << 2) + 8
                                    || x9_58 + x8_108 * (x24_2 + 4)
                                    u<= x14_65 + ((x11_23 + 0xb) << 2) + 8)
                                j_466 = x8_108 & 0xfffffffffffffff8
                                void* x17_60 = x9_58 + (x17_58 << 2) + 0x10
                                void* x0_75 = x14_65 + ((x11_23 + 0xb) << 2) + 0x18
                                int64_t j_254 = j_466
                                int64_t j_48
                                
                                do
                                    v0 = *(x0_75 - 0x10)
                                    v1 = *x0_75
                                    v3 = *x17_60
                                    j_48 = j_254
                                    j_254 -= 8
                                    x0_75 += x15_70 << 5
                                    v0 = vaddq_f32(v0, *(x17_60 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x17_60 - 0x10) = v0
                                    *x17_60 = v1
                                    x17_60 += 0x20
                                while (j_48 != 8)
                                
                                if (x8_108 != j_466)
                                    goto label_c3cb94
                            else
                                j_466 = 0
                            label_c3cb94:
                                int64_t j_369 = x8_108 - j_466
                                int32_t* x8_110 =
                                    x14_65 + ((x11_23 + 0xb + j_466 * x15_70) << 2) + 8
                                int32_t* x9_59 = x9_58 + ((j_466 + x8_108 * x22_2) << 2)
                                int64_t j_49
                                
                                do
                                    v0.d = *x8_110
                                    v1.d = *x9_59
                                    j_49 = j_369
                                    j_369 -= 1
                                    x8_110 = &x8_110[x15_70]
                                    v0.d = v0.d f+ v1.d
                                    *x9_59 = v0.d
                                    x9_59 = &x9_59[1]
                                while (j_49 != 1)
                            
                            x9_53 = zx.d(*(fp + i * 0x68 + 0x60))
                        
                        if (sx.d(x9_53.w) s>= 4)
                            int64_t x8_112 = *x20_2
                            
                            if (x8_112 s>= 1)
                                int64_t x9_60 = *x6
                                int64_t x14_66 = *x7
                                int64_t x15_72 = x7[1]
                                int64_t j_467 = 0
                                
                                if (x8_112 u< 8 || x15_72 != 1)
                                    goto label_c3cc88
                                
                                int64_t x17_61 = x8_112 * x22_2
                                
                                if (x9_60 + (x17_61 << 2)
                                        u>= x14_66 + ((x8_112 + x11_23 + 0xb) << 2) + 0xc
                                        || x9_60 + x8_112 * (x24_2 + 4)
                                        u<= x14_66 + ((x11_23 + 0xb) << 2) + 0xc)
                                    j_467 = x8_112 & 0xfffffffffffffff8
                                    void* x17_63 = x9_60 + (x17_61 << 2) + 0x10
                                    void* x0_81 = x14_66 + ((x11_23 + 0xb) << 2) + 0x1c
                                    int64_t j_255 = j_467
                                    int64_t j_50
                                    
                                    do
                                        v0 = *(x0_81 - 0x10)
                                        v1 = *x0_81
                                        v3 = *x17_63
                                        j_50 = j_255
                                        j_255 -= 8
                                        x0_81 += x15_72 << 5
                                        v0 = vaddq_f32(v0, *(x17_63 - 0x10))
                                        v1 = vaddq_f32(v1, v3)
                                        *(x17_63 - 0x10) = v0
                                        *x17_63 = v1
                                        x17_63 += 0x20
                                    while (j_50 != 8)
                                    
                                    if (x8_112 != j_467)
                                        goto label_c3cc88
                                else
                                    j_467 = 0
                                label_c3cc88:
                                    int64_t j_370 = x8_112 - j_467
                                    int32_t* x8_114 =
                                        x14_66 + ((x11_23 + 0xb + j_467 * x15_72) << 2) + 0xc
                                    int32_t* x9_61 = x9_60 + ((j_467 + x8_112 * x22_2) << 2)
                                    int64_t j_51
                                    
                                    do
                                        v0.d = *x8_114
                                        v1.d = *x9_61
                                        j_51 = j_370
                                        j_370 -= 1
                                        x8_114 = &x8_114[x15_72]
                                        v0.d = v0.d f+ v1.d
                                        *x9_61 = v0.d
                                        x9_61 = &x9_61[1]
                                    while (j_51 != 1)
                                
                                x9_53 = zx.d(*(fp + i * 0x68 + 0x60))
                            
                            if (sx.d(x9_53.w) s>= 5)
                                int64_t x8_116 = *x20_2
                                
                                if (x8_116 s>= 1)
                                    int64_t x9_62 = *x6
                                    int64_t x14_67 = *x7
                                    int64_t x15_74 = x7[1]
                                    int64_t j_468 = 0
                                    
                                    if (x8_116 u< 8 || x15_74 != 1)
                                        goto label_c3cd7c
                                    
                                    int64_t x17_64 = x8_116 * x22_2
                                    
                                    if (x9_62 + (x17_64 << 2)
                                            u>= x14_67 + ((x8_116 + x11_23 + 0xb) << 2) + 0x10
                                            || x9_62 + x8_116 * (x24_2 + 4)
                                            u<= x14_67 + ((x11_23 + 0xb) << 2) + 0x10)
                                        j_468 = x8_116 & 0xfffffffffffffff8
                                        void* x17_66 = x9_62 + (x17_64 << 2) + 0x10
                                        void* x0_87 = x14_67 + ((x11_23 + 0xb) << 2) + 0x20
                                        int64_t j_256 = j_468
                                        int64_t j_52
                                        
                                        do
                                            v0 = *(x0_87 - 0x10)
                                            v1 = *x0_87
                                            v3 = *x17_66
                                            j_52 = j_256
                                            j_256 -= 8
                                            x0_87 += x15_74 << 5
                                            v0 = vaddq_f32(v0, *(x17_66 - 0x10))
                                            v1 = vaddq_f32(v1, v3)
                                            *(x17_66 - 0x10) = v0
                                            *x17_66 = v1
                                            x17_66 += 0x20
                                        while (j_52 != 8)
                                        
                                        if (x8_116 != j_468)
                                            goto label_c3cd7c
                                    else
                                        j_468 = 0
                                    label_c3cd7c:
                                        int64_t j_371 = x8_116 - j_468
                                        int32_t* x8_118 =
                                            x14_67 + ((x11_23 + 0xb + j_468 * x15_74) << 2) + 0x10
                                        int32_t* x9_63 = x9_62 + ((j_468 + x8_116 * x22_2) << 2)
                                        int64_t j_53
                                        
                                        do
                                            v0.d = *x8_118
                                            v1.d = *x9_63
                                            j_53 = j_371
                                            j_371 -= 1
                                            x8_118 = &x8_118[x15_74]
                                            v0.d = v0.d f+ v1.d
                                            *x9_63 = v0.d
                                            x9_63 = &x9_63[1]
                                        while (j_53 != 1)
                                    
                                    x9_53 = zx.d(*(fp + i * 0x68 + 0x60))
                                
                                if (sx.d(x9_53.w) s>= 6)
                                    int64_t x8_120 = *x20_2
                                    
                                    if (x8_120 s>= 1)
                                        int64_t x9_64 = *x6
                                        int64_t x13_61 = *x7
                                        int64_t x14_68 = x7[1]
                                        int64_t j_449 = 0
                                        
                                        if (x8_120 u< 8 || x14_68 != 1)
                                            goto label_c3ce70
                                        
                                        int64_t x16_126 = x8_120 * x22_2
                                        
                                        if (x9_64 + (x16_126 << 2)
                                                u>= x13_61 + ((x8_120 + x11_23 + 0xb) << 2) + 0x14
                                                || x9_64 + x8_120 * (x24_2 + 4)
                                                u<= x13_61 + ((x11_23 + 0xb) << 2) + 0x14)
                                            j_449 = x8_120 & 0xfffffffffffffff8
                                            void* x16_128 = x9_64 + (x16_126 << 2) + 0x10
                                            void* x17_71 = x13_61 + ((x11_23 + 0xb) << 2) + 0x24
                                            int64_t j_234 = j_449
                                            int64_t j_54
                                            
                                            do
                                                v0 = *(x17_71 - 0x10)
                                                v1 = *x17_71
                                                v3 = *x16_128
                                                j_54 = j_234
                                                j_234 -= 8
                                                x17_71 += x14_68 << 5
                                                v0 = vaddq_f32(v0, *(x16_128 - 0x10))
                                                v1 = vaddq_f32(v1, v3)
                                                *(x16_128 - 0x10) = v0
                                                *x16_128 = v1
                                                x16_128 += 0x20
                                            while (j_54 != 8)
                                            
                                            if (x8_120 != j_449)
                                                goto label_c3ce70
                                        else
                                            j_449 = 0
                                        label_c3ce70:
                                            int64_t j_349 = x8_120 - j_449
                                            int32_t* x8_122 = x13_61
                                                + ((x11_23 + 0xb + j_449 * x14_68) << 2) + 0x14
                                            int32_t* x9_65 = x9_64 + ((j_449 + x8_120 * x22_2) << 2)
                                            int64_t j_55
                                            
                                            do
                                                v0.d = *x8_122
                                                v1.d = *x9_65
                                                j_55 = j_349
                                                j_349 -= 1
                                                x8_122 = &x8_122[x14_68]
                                                v0.d = v0.d f+ v1.d
                                                *x9_65 = v0.d
                                                x9_65 = &x9_65[1]
                                            while (j_55 != 1)
            
            int32_t x9_66 = sx.d(*(fp + i * 0x68 + 0x62))
            
            if (x9_66 s>= 1)
                int64_t x8_123 = *x20_2
                
                if (x8_123 s>= 1)
                    int64_t x9_67 = *x6
                    int64_t x14_70 = *x7
                    int64_t x15_81 = x7[1]
                    int64_t j_469 = 0
                    
                    if (x8_123 u< 8 || x15_81 != 1)
                        goto label_c3cf5c
                    
                    int64_t x17_73 = x8_123 * x22_2
                    
                    if (x9_67 + (x17_73 << 2) u>= x14_70 + ((x8_123 + x11_23 + 0x11) << 2)
                            || x9_67 + x8_123 * (x24_2 + 4) u<= x14_70 + ((x11_23 + 0x11) << 2))
                        j_469 = x8_123 & 0xfffffffffffffff8
                        void* x17_75 = x9_67 + (x17_73 << 2) + 0x10
                        void* x0_94 = x14_70 + ((x11_23 + 0x11) << 2) + 0x10
                        int64_t j_257 = j_469
                        int64_t j_56
                        
                        do
                            v0 = *(x0_94 - 0x10)
                            v1 = *x0_94
                            v3 = *x17_75
                            j_56 = j_257
                            j_257 -= 8
                            x0_94 += x15_81 << 5
                            v0 = vaddq_f32(v0, *(x17_75 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x17_75 - 0x10) = v0
                            *x17_75 = v1
                            x17_75 += 0x20
                        while (j_56 != 8)
                        
                        if (x8_123 != j_469)
                            goto label_c3cf5c
                    else
                        j_469 = 0
                    label_c3cf5c:
                        int64_t j_372 = x8_123 - j_469
                        int32_t* x8_124 = x14_70 + ((x11_23 + 0x11 + j_469 * x15_81) << 2)
                        int32_t* x9_68 = x9_67 + ((j_469 + x8_123 * x22_2) << 2)
                        int64_t j_57
                        
                        do
                            v0.d = *x8_124
                            v1.d = *x9_68
                            j_57 = j_372
                            j_372 -= 1
                            x8_124 = &x8_124[x15_81]
                            v0.d = v0.d f+ v1.d
                            *x9_68 = v0.d
                            x9_68 = &x9_68[1]
                        while (j_57 != 1)
                    
                    x9_66 = zx.d(*(fp + i * 0x68 + 0x62))
                
                if (sx.d(x9_66.w) s> 1)
                    int64_t x8_126 = *x20_2
                    
                    if (x8_126 s>= 1)
                        int64_t x9_69 = *x6
                        int64_t x14_71 = *x7
                        int64_t x15_83 = x7[1]
                        int64_t j_470 = 0
                        
                        if (x8_126 u< 8 || x15_83 != 1)
                            goto label_c3d050
                        
                        int64_t x17_76 = x8_126 * x22_2
                        
                        if (x9_69 + (x17_76 << 2) u>= x14_71 + ((x8_126 + x11_23 + 0x11) << 2) + 4
                                || x9_69 + x8_126 * (x24_2 + 4)
                                u<= x14_71 + ((x11_23 + 0x11) << 2) + 4)
                            j_470 = x8_126 & 0xfffffffffffffff8
                            void* x17_78 = x9_69 + (x17_76 << 2) + 0x10
                            void* x0_100 = x14_71 + ((x11_23 + 0x11) << 2) + 0x14
                            int64_t j_258 = j_470
                            int64_t j_58
                            
                            do
                                v0 = *(x0_100 - 0x10)
                                v1 = *x0_100
                                v3 = *x17_78
                                j_58 = j_258
                                j_258 -= 8
                                x0_100 += x15_83 << 5
                                v0 = vaddq_f32(v0, *(x17_78 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x17_78 - 0x10) = v0
                                *x17_78 = v1
                                x17_78 += 0x20
                            while (j_58 != 8)
                            
                            if (x8_126 != j_470)
                                goto label_c3d050
                        else
                            j_470 = 0
                        label_c3d050:
                            int64_t j_373 = x8_126 - j_470
                            int32_t* x8_128 = x14_71 + ((x11_23 + 0x11 + j_470 * x15_83) << 2) + 4
                            int32_t* x9_70 = x9_69 + ((j_470 + x8_126 * x22_2) << 2)
                            int64_t j_59
                            
                            do
                                v0.d = *x8_128
                                v1.d = *x9_70
                                j_59 = j_373
                                j_373 -= 1
                                x8_128 = &x8_128[x15_83]
                                v0.d = v0.d f+ v1.d
                                *x9_70 = v0.d
                                x9_70 = &x9_70[1]
                            while (j_59 != 1)
                        
                        x9_66 = zx.d(*(fp + i * 0x68 + 0x62))
                    
                    if (sx.d(x9_66.w) s>= 3)
                        int64_t x8_130 = *x20_2
                        
                        if (x8_130 s>= 1)
                            int64_t x9_71 = *x6
                            int64_t x14_72 = *x7
                            int64_t x15_85 = x7[1]
                            int64_t j_471 = 0
                            
                            if (x8_130 u< 8 || x15_85 != 1)
                                goto label_c3d144
                            
                            int64_t x17_79 = x8_130 * x22_2
                            
                            if (x9_71 + (x17_79 << 2)
                                    u>= x14_72 + ((x8_130 + x11_23 + 0x11) << 2) + 8
                                    || x9_71 + x8_130 * (x24_2 + 4)
                                    u<= x14_72 + ((x11_23 + 0x11) << 2) + 8)
                                j_471 = x8_130 & 0xfffffffffffffff8
                                void* x17_81 = x9_71 + (x17_79 << 2) + 0x10
                                void* x0_106 = x14_72 + ((x11_23 + 0x11) << 2) + 0x18
                                int64_t j_259 = j_471
                                int64_t j_60
                                
                                do
                                    v0 = *(x0_106 - 0x10)
                                    v1 = *x0_106
                                    v3 = *x17_81
                                    j_60 = j_259
                                    j_259 -= 8
                                    x0_106 += x15_85 << 5
                                    v0 = vaddq_f32(v0, *(x17_81 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x17_81 - 0x10) = v0
                                    *x17_81 = v1
                                    x17_81 += 0x20
                                while (j_60 != 8)
                                
                                if (x8_130 != j_471)
                                    goto label_c3d144
                            else
                                j_471 = 0
                            label_c3d144:
                                int64_t j_374 = x8_130 - j_471
                                int32_t* x8_132 =
                                    x14_72 + ((x11_23 + 0x11 + j_471 * x15_85) << 2) + 8
                                int32_t* x9_72 = x9_71 + ((j_471 + x8_130 * x22_2) << 2)
                                int64_t j_61
                                
                                do
                                    v0.d = *x8_132
                                    v1.d = *x9_72
                                    j_61 = j_374
                                    j_374 -= 1
                                    x8_132 = &x8_132[x15_85]
                                    v0.d = v0.d f+ v1.d
                                    *x9_72 = v0.d
                                    x9_72 = &x9_72[1]
                                while (j_61 != 1)
                            
                            x9_66 = zx.d(*(fp + i * 0x68 + 0x62))
                        
                        if (sx.d(x9_66.w) s>= 4)
                            int64_t x8_134 = *x20_2
                            
                            if (x8_134 s>= 1)
                                int64_t x9_73 = *x6
                                int64_t x14_73 = *x7
                                int64_t x15_87 = x7[1]
                                int64_t j_472 = 0
                                
                                if (x8_134 u< 8 || x15_87 != 1)
                                    goto label_c3d238
                                
                                int64_t x17_82 = x8_134 * x22_2
                                
                                if (x9_73 + (x17_82 << 2)
                                        u>= x14_73 + ((x8_134 + x11_23 + 0x11) << 2) + 0xc
                                        || x9_73 + x8_134 * (x24_2 + 4)
                                        u<= x14_73 + ((x11_23 + 0x11) << 2) + 0xc)
                                    j_472 = x8_134 & 0xfffffffffffffff8
                                    void* x17_84 = x9_73 + (x17_82 << 2) + 0x10
                                    void* x0_112 = x14_73 + ((x11_23 + 0x11) << 2) + 0x1c
                                    int64_t j_260 = j_472
                                    int64_t j_62
                                    
                                    do
                                        v0 = *(x0_112 - 0x10)
                                        v1 = *x0_112
                                        v3 = *x17_84
                                        j_62 = j_260
                                        j_260 -= 8
                                        x0_112 += x15_87 << 5
                                        v0 = vaddq_f32(v0, *(x17_84 - 0x10))
                                        v1 = vaddq_f32(v1, v3)
                                        *(x17_84 - 0x10) = v0
                                        *x17_84 = v1
                                        x17_84 += 0x20
                                    while (j_62 != 8)
                                    
                                    if (x8_134 != j_472)
                                        goto label_c3d238
                                else
                                    j_472 = 0
                                label_c3d238:
                                    int64_t j_375 = x8_134 - j_472
                                    int32_t* x8_136 =
                                        x14_73 + ((x11_23 + 0x11 + j_472 * x15_87) << 2) + 0xc
                                    int32_t* x9_74 = x9_73 + ((j_472 + x8_134 * x22_2) << 2)
                                    int64_t j_63
                                    
                                    do
                                        v0.d = *x8_136
                                        v1.d = *x9_74
                                        j_63 = j_375
                                        j_375 -= 1
                                        x8_136 = &x8_136[x15_87]
                                        v0.d = v0.d f+ v1.d
                                        *x9_74 = v0.d
                                        x9_74 = &x9_74[1]
                                    while (j_63 != 1)
                                
                                x9_66 = zx.d(*(fp + i * 0x68 + 0x62))
                            
                            if (sx.d(x9_66.w) s>= 5)
                                int64_t x8_138 = *x20_2
                                
                                if (x8_138 s>= 1)
                                    int64_t x9_75 = *x6
                                    int64_t x13_64 = *x7
                                    int64_t x14_74 = x7[1]
                                    int64_t j_450 = 0
                                    
                                    if (x8_138 u< 8 || x14_74 != 1)
                                        goto label_c3d32c
                                    
                                    int64_t x16_151 = x8_138 * x22_2
                                    
                                    if (x9_75 + (x16_151 << 2)
                                            u>= x13_64 + ((x8_138 + x11_23 + 0x11) << 2) + 0x10
                                            || x9_75 + x8_138 * (x24_2 + 4)
                                            u<= x13_64 + ((x11_23 + 0x11) << 2) + 0x10)
                                        j_450 = x8_138 & 0xfffffffffffffff8
                                        int128_t* x16_153 = x9_75 + (x16_151 << 2) + 0x10
                                        int128_t* x17_89 = x13_64 + ((x11_23 + 0x11) << 2) + 0x20
                                        int64_t j_235 = j_450
                                        int64_t j_64
                                        
                                        do
                                            v0 = x17_89[-1]
                                            v1 = *x17_89
                                            v3 = *x16_153
                                            j_64 = j_235
                                            j_235 -= 8
                                            x17_89 = &x17_89[x14_74 * 2]
                                            v0 = vaddq_f32(v0, x16_153[-1])
                                            v1 = vaddq_f32(v1, v3)
                                            x16_153[-1] = v0
                                            *x16_153 = v1
                                            x16_153 = &x16_153[2]
                                        while (j_64 != 8)
                                        
                                        if (x8_138 != j_450)
                                            goto label_c3d32c
                                    else
                                        j_450 = 0
                                    label_c3d32c:
                                        int64_t j_350 = x8_138 - j_450
                                        int32_t* x8_140 =
                                            x13_64 + ((x11_23 + 0x11 + j_450 * x14_74) << 2) + 0x10
                                        int32_t* x9_76 = x9_75 + ((j_450 + x8_138 * x22_2) << 2)
                                        int64_t j_65
                                        
                                        do
                                            v0.d = *x8_140
                                            v1.d = *x9_76
                                            j_65 = j_350
                                            j_350 -= 1
                                            x8_140 = &x8_140[x14_74]
                                            v0.d = v0.d f+ v1.d
                                            *x9_76 = v0.d
                                            x9_76 = &x9_76[1]
                                        while (j_65 != 1)
            
            int32_t x13_65 = sx.d(*(fp + i * 0x68 + 0x64))
            
            if (x13_65 s>= 1)
                int64_t x8_141 = *x20_2
                
                if (x8_141 s>= 1)
                    int64_t x9_77 = *x6
                    int64_t x13_66 = *x7
                    int64_t x14_76 = x7[1]
                    int64_t j_451 = 0
                    
                    if (x8_141 u< 8 || x14_76 != 1)
                        goto label_c3d418
                    
                    int64_t x16_154 = x8_141 * x22_2
                    
                    if (x9_77 + (x16_154 << 2) u>= x13_66 + ((x8_141 + x11_23 + 0x16) << 2)
                            || x9_77 + x8_141 * (x24_2 + 4) u<= x13_66 + ((x11_23 + 0x16) << 2))
                        j_451 = x8_141 & 0xfffffffffffffff8
                        void* x16_156 = x9_77 + (x16_154 << 2) + 0x10
                        void* x17_95 = x13_66 + ((x11_23 + 0x16) << 2) + 0x10
                        int64_t j_236 = j_451
                        int64_t j_66
                        
                        do
                            v0 = *(x17_95 - 0x10)
                            v1 = *x17_95
                            v3 = *x16_156
                            j_66 = j_236
                            j_236 -= 8
                            x17_95 += x14_76 << 5
                            v0 = vaddq_f32(v0, *(x16_156 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x16_156 - 0x10) = v0
                            *x16_156 = v1
                            x16_156 += 0x20
                        while (j_66 != 8)
                        
                        if (x8_141 != j_451)
                            goto label_c3d418
                    else
                        j_451 = 0
                    label_c3d418:
                        int64_t j_351 = x8_141 - j_451
                        int32_t* x8_142 = x13_66 + ((x11_23 + 0x16 + j_451 * x14_76) << 2)
                        int32_t* x9_78 = x9_77 + ((j_451 + x8_141 * x22_2) << 2)
                        int64_t j_67
                        
                        do
                            v0.d = *x8_142
                            v1.d = *x9_78
                            j_67 = j_351
                            j_351 -= 1
                            x8_142 = &x8_142[x14_76]
                            v0.d = v0.d f+ v1.d
                            *x9_78 = v0.d
                            x9_78 = &x9_78[1]
                        while (j_67 != 1)
                    
                    x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                
                if (sx.d(x13_65.w) s> 1)
                    int64_t x8_144 = *x20_2
                    
                    if (x8_144 s>= 1)
                        int64_t x9_79 = *x6
                        int64_t x13_67 = *x7
                        int64_t x14_78 = x7[1]
                        int64_t j_452 = 0
                        
                        if (x8_144 u< 8 || x14_78 != 1)
                            goto label_c3d50c
                        
                        int64_t x16_157 = x8_144 * x22_2
                        
                        if (x9_79 + (x16_157 << 2) u>= x13_67 + ((x8_144 + x11_23 + 0x16) << 2) + 4
                                || x9_79 + x8_144 * (x24_2 + 4)
                                u<= x13_67 + ((x11_23 + 0x16) << 2) + 4)
                            j_452 = x8_144 & 0xfffffffffffffff8
                            void* x16_159 = x9_79 + (x16_157 << 2) + 0x10
                            void* x17_101 = x13_67 + ((x11_23 + 0x16) << 2) + 0x14
                            int64_t j_237 = j_452
                            int64_t j_68
                            
                            do
                                v0 = *(x17_101 - 0x10)
                                v1 = *x17_101
                                v3 = *x16_159
                                j_68 = j_237
                                j_237 -= 8
                                x17_101 += x14_78 << 5
                                v0 = vaddq_f32(v0, *(x16_159 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x16_159 - 0x10) = v0
                                *x16_159 = v1
                                x16_159 += 0x20
                            while (j_68 != 8)
                            
                            if (x8_144 != j_452)
                                goto label_c3d50c
                        else
                            j_452 = 0
                        label_c3d50c:
                            int64_t j_352 = x8_144 - j_452
                            int32_t* x8_146 = x13_67 + ((x11_23 + 0x16 + j_452 * x14_78) << 2) + 4
                            int32_t* x9_80 = x9_79 + ((j_452 + x8_144 * x22_2) << 2)
                            int64_t j_69
                            
                            do
                                v0.d = *x8_146
                                v1.d = *x9_80
                                j_69 = j_352
                                j_352 -= 1
                                x8_146 = &x8_146[x14_78]
                                v0.d = v0.d f+ v1.d
                                *x9_80 = v0.d
                                x9_80 = &x9_80[1]
                            while (j_69 != 1)
                        
                        x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                    
                    if (sx.d(x13_65.w) s>= 3)
                        int64_t x8_148 = *x20_2
                        
                        if (x8_148 s>= 1)
                            int64_t x9_81 = *x6
                            int64_t x13_68 = *x7
                            int64_t x14_80 = x7[1]
                            int64_t j_453 = 0
                            
                            if (x8_148 u< 8 || x14_80 != 1)
                                goto label_c3d600
                            
                            int64_t x16_160 = x8_148 * x22_2
                            
                            if (x9_81 + (x16_160 << 2)
                                    u>= x13_68 + ((x8_148 + x11_23 + 0x16) << 2) + 8
                                    || x9_81 + x8_148 * (x24_2 + 4)
                                    u<= x13_68 + ((x11_23 + 0x16) << 2) + 8)
                                j_453 = x8_148 & 0xfffffffffffffff8
                                void* x16_162 = x9_81 + (x16_160 << 2) + 0x10
                                void* x17_107 = x13_68 + ((x11_23 + 0x16) << 2) + 0x18
                                int64_t j_238 = j_453
                                int64_t j_70
                                
                                do
                                    v0 = *(x17_107 - 0x10)
                                    v1 = *x17_107
                                    v3 = *x16_162
                                    j_70 = j_238
                                    j_238 -= 8
                                    x17_107 += x14_80 << 5
                                    v0 = vaddq_f32(v0, *(x16_162 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x16_162 - 0x10) = v0
                                    *x16_162 = v1
                                    x16_162 += 0x20
                                while (j_70 != 8)
                                
                                if (x8_148 != j_453)
                                    goto label_c3d600
                            else
                                j_453 = 0
                            label_c3d600:
                                int64_t j_353 = x8_148 - j_453
                                int32_t* x8_150 =
                                    x13_68 + ((x11_23 + 0x16 + j_453 * x14_80) << 2) + 8
                                int32_t* x9_82 = x9_81 + ((j_453 + x8_148 * x22_2) << 2)
                                int64_t j_71
                                
                                do
                                    v0.d = *x8_150
                                    v1.d = *x9_82
                                    j_71 = j_353
                                    j_353 -= 1
                                    x8_150 = &x8_150[x14_80]
                                    v0.d = v0.d f+ v1.d
                                    *x9_82 = v0.d
                                    x9_82 = &x9_82[1]
                                while (j_71 != 1)
                            
                            x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                        
                        if (sx.d(x13_65.w) s>= 4)
                            int64_t x8_152 = *x20_2
                            
                            if (x8_152 s>= 1)
                                int64_t x9_83 = *x6
                                int64_t x13_69 = *x7
                                int64_t x14_82 = x7[1]
                                int64_t j_454 = 0
                                
                                if (x8_152 u< 8 || x14_82 != 1)
                                    goto label_c3d6f4
                                
                                int64_t x16_163 = x8_152 * x22_2
                                
                                if (x9_83 + (x16_163 << 2)
                                        u>= x13_69 + ((x8_152 + x11_23 + 0x16) << 2) + 0xc
                                        || x9_83 + x8_152 * (x24_2 + 4)
                                        u<= x13_69 + ((x11_23 + 0x16) << 2) + 0xc)
                                    j_454 = x8_152 & 0xfffffffffffffff8
                                    void* x16_165 = x9_83 + (x16_163 << 2) + 0x10
                                    void* x17_113 = x13_69 + ((x11_23 + 0x16) << 2) + 0x1c
                                    int64_t j_239 = j_454
                                    int64_t j_72
                                    
                                    do
                                        v0 = *(x17_113 - 0x10)
                                        v1 = *x17_113
                                        v3 = *x16_165
                                        j_72 = j_239
                                        j_239 -= 8
                                        x17_113 += x14_82 << 5
                                        v0 = vaddq_f32(v0, *(x16_165 - 0x10))
                                        v1 = vaddq_f32(v1, v3)
                                        *(x16_165 - 0x10) = v0
                                        *x16_165 = v1
                                        x16_165 += 0x20
                                    while (j_72 != 8)
                                    
                                    if (x8_152 != j_454)
                                        goto label_c3d6f4
                                else
                                    j_454 = 0
                                label_c3d6f4:
                                    int64_t j_354 = x8_152 - j_454
                                    int32_t* x8_154 =
                                        x13_69 + ((x11_23 + 0x16 + j_454 * x14_82) << 2) + 0xc
                                    int32_t* x9_84 = x9_83 + ((j_454 + x8_152 * x22_2) << 2)
                                    int64_t j_73
                                    
                                    do
                                        v0.d = *x8_154
                                        v1.d = *x9_84
                                        j_73 = j_354
                                        j_354 -= 1
                                        x8_154 = &x8_154[x14_82]
                                        v0.d = v0.d f+ v1.d
                                        *x9_84 = v0.d
                                        x9_84 = &x9_84[1]
                                    while (j_73 != 1)
                                
                                x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                            
                            if (sx.d(x13_65.w) s>= 5)
                                int64_t x8_156 = *x20_2
                                
                                if (x8_156 s>= 1)
                                    int64_t x9_85 = *x6
                                    int64_t x13_70 = *x7
                                    int64_t x14_84 = x7[1]
                                    int64_t j_455 = 0
                                    
                                    if (x8_156 u< 8 || x14_84 != 1)
                                        goto label_c3d7e8
                                    
                                    int64_t x16_166 = x8_156 * x22_2
                                    
                                    if (x9_85 + (x16_166 << 2)
                                            u>= x13_70 + ((x8_156 + x11_23 + 0x16) << 2) + 0x10
                                            || x9_85 + x8_156 * (x24_2 + 4)
                                            u<= x13_70 + ((x11_23 + 0x16) << 2) + 0x10)
                                        j_455 = x8_156 & 0xfffffffffffffff8
                                        void* x16_168 = x9_85 + (x16_166 << 2) + 0x10
                                        void* x17_119 = x13_70 + ((x11_23 + 0x16) << 2) + 0x20
                                        int64_t j_240 = j_455
                                        int64_t j_74
                                        
                                        do
                                            v0 = *(x17_119 - 0x10)
                                            v1 = *x17_119
                                            v3 = *x16_168
                                            j_74 = j_240
                                            j_240 -= 8
                                            x17_119 += x14_84 << 5
                                            v0 = vaddq_f32(v0, *(x16_168 - 0x10))
                                            v1 = vaddq_f32(v1, v3)
                                            *(x16_168 - 0x10) = v0
                                            *x16_168 = v1
                                            x16_168 += 0x20
                                        while (j_74 != 8)
                                        
                                        if (x8_156 != j_455)
                                            goto label_c3d7e8
                                    else
                                        j_455 = 0
                                    label_c3d7e8:
                                        int64_t j_355 = x8_156 - j_455
                                        int32_t* x8_158 =
                                            x13_70 + ((x11_23 + 0x16 + j_455 * x14_84) << 2) + 0x10
                                        int32_t* x9_86 = x9_85 + ((j_455 + x8_156 * x22_2) << 2)
                                        int64_t j_75
                                        
                                        do
                                            v0.d = *x8_158
                                            v1.d = *x9_86
                                            j_75 = j_355
                                            j_355 -= 1
                                            x8_158 = &x8_158[x14_84]
                                            v0.d = v0.d f+ v1.d
                                            *x9_86 = v0.d
                                            x9_86 = &x9_86[1]
                                        while (j_75 != 1)
                                    
                                    x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                                
                                if (sx.d(x13_65.w) s>= 6)
                                    int64_t x8_160 = *x20_2
                                    
                                    if (x8_160 s>= 1)
                                        int64_t x9_87 = *x6
                                        int64_t x13_71 = *x7
                                        int64_t x14_86 = x7[1]
                                        int64_t j_456 = 0
                                        
                                        if (x8_160 u< 8 || x14_86 != 1)
                                            goto label_c3d8dc
                                        
                                        int64_t x16_169 = x8_160 * x22_2
                                        
                                        if (x9_87 + (x16_169 << 2)
                                                u>= x13_71 + ((x8_160 + x11_23 + 0x16) << 2) + 0x14
                                                || x9_87 + x8_160 * (x24_2 + 4)
                                                u<= x13_71 + ((x11_23 + 0x16) << 2) + 0x14)
                                            j_456 = x8_160 & 0xfffffffffffffff8
                                            void* x16_171 = x9_87 + (x16_169 << 2) + 0x10
                                            void* x17_125 = x13_71 + ((x11_23 + 0x16) << 2) + 0x24
                                            int64_t j_241 = j_456
                                            int64_t j_76
                                            
                                            do
                                                v0 = *(x17_125 - 0x10)
                                                v1 = *x17_125
                                                v3 = *x16_171
                                                j_76 = j_241
                                                j_241 -= 8
                                                x17_125 += x14_86 << 5
                                                v0 = vaddq_f32(v0, *(x16_171 - 0x10))
                                                v1 = vaddq_f32(v1, v3)
                                                *(x16_171 - 0x10) = v0
                                                *x16_171 = v1
                                                x16_171 += 0x20
                                            while (j_76 != 8)
                                            
                                            if (x8_160 != j_456)
                                                goto label_c3d8dc
                                        else
                                            j_456 = 0
                                        label_c3d8dc:
                                            int64_t j_356 = x8_160 - j_456
                                            int32_t* x8_162 = x13_71
                                                + ((x11_23 + 0x16 + j_456 * x14_86) << 2) + 0x14
                                            int32_t* x9_88 = x9_87 + ((j_456 + x8_160 * x22_2) << 2)
                                            int64_t j_77
                                            
                                            do
                                                v0.d = *x8_162
                                                v1.d = *x9_88
                                                j_77 = j_356
                                                j_356 -= 1
                                                x8_162 = &x8_162[x14_86]
                                                v0.d = v0.d f+ v1.d
                                                *x9_88 = v0.d
                                                x9_88 = &x9_88[1]
                                            while (j_77 != 1)
                                        
                                        x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                                    
                                    if (sx.d(x13_65.w) s>= 7)
                                        int64_t x8_164 = *x20_2
                                        
                                        if (x8_164 s>= 1)
                                            int64_t x9_89 = *x6
                                            int64_t x13_72 = *x7
                                            int64_t x14_88 = x7[1]
                                            int64_t j_457 = 0
                                            
                                            if (x8_164 u< 8 || x14_88 != 1)
                                                goto label_c3d9d0
                                            
                                            int64_t x16_172 = x8_164 * x22_2
                                            
                                            if (x9_89 + (x16_172 << 2) u>= x13_72
                                                    + ((x8_164 + x11_23 + 0x16) << 2) + 0x18
                                                    || x9_89 + x8_164 * (x24_2 + 4)
                                                    u<= x13_72 + ((x11_23 + 0x16) << 2) + 0x18)
                                                j_457 = x8_164 & 0xfffffffffffffff8
                                                void* x16_174 = x9_89 + (x16_172 << 2) + 0x10
                                                void* x17_131 =
                                                    x13_72 + ((x11_23 + 0x16) << 2) + 0x28
                                                int64_t j_242 = j_457
                                                int64_t j_78
                                                
                                                do
                                                    v0 = *(x17_131 - 0x10)
                                                    v1 = *x17_131
                                                    v3 = *x16_174
                                                    j_78 = j_242
                                                    j_242 -= 8
                                                    x17_131 += x14_88 << 5
                                                    v0 = vaddq_f32(v0, *(x16_174 - 0x10))
                                                    v1 = vaddq_f32(v1, v3)
                                                    *(x16_174 - 0x10) = v0
                                                    *x16_174 = v1
                                                    x16_174 += 0x20
                                                while (j_78 != 8)
                                                
                                                if (x8_164 != j_457)
                                                    goto label_c3d9d0
                                            else
                                                j_457 = 0
                                            label_c3d9d0:
                                                int64_t j_357 = x8_164 - j_457
                                                int32_t* x8_166 = x13_72
                                                    + ((x11_23 + 0x16 + j_457 * x14_88) << 2)
                                                    + 0x18
                                                int32_t* x9_90 =
                                                    x9_89 + ((j_457 + x8_164 * x22_2) << 2)
                                                int64_t j_79
                                                
                                                do
                                                    v0.d = *x8_166
                                                    v1.d = *x9_90
                                                    j_79 = j_357
                                                    j_357 -= 1
                                                    x8_166 = &x8_166[x14_88]
                                                    v0.d = v0.d f+ v1.d
                                                    *x9_90 = v0.d
                                                    x9_90 = &x9_90[1]
                                                while (j_79 != 1)
                                            
                                            x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                                        
                                        if (sx.d(x13_65.w) s>= 8)
                                            int64_t x8_168 = *x20_2
                                            
                                            if (x8_168 s>= 1)
                                                int64_t x9_91 = *x6
                                                int64_t x13_73 = *x7
                                                int64_t x14_90 = x7[1]
                                                int64_t j_458 = 0
                                                
                                                if (x8_168 u< 8 || x14_90 != 1)
                                                    goto label_c3dac4
                                                
                                                int64_t x16_175 = x8_168 * x22_2
                                                
                                                if (x9_91 + (x16_175 << 2) u>= x13_73
                                                        + ((x8_168 + x11_23 + 0x16) << 2) + 0x1c
                                                        || x9_91 + x8_168 * (x24_2 + 4)
                                                        u<= x13_73 + ((x11_23 + 0x16) << 2) + 0x1c)
                                                    j_458 = x8_168 & 0xfffffffffffffff8
                                                    void* x16_177 = x9_91 + (x16_175 << 2) + 0x10
                                                    void* x17_137 =
                                                        x13_73 + ((x11_23 + 0x16) << 2) + 0x2c
                                                    int64_t j_243 = j_458
                                                    int64_t j_80
                                                    
                                                    do
                                                        v0 = *(x17_137 - 0x10)
                                                        v1 = *x17_137
                                                        v3 = *x16_177
                                                        j_80 = j_243
                                                        j_243 -= 8
                                                        x17_137 += x14_90 << 5
                                                        v0 = vaddq_f32(v0, *(x16_177 - 0x10))
                                                        v1 = vaddq_f32(v1, v3)
                                                        *(x16_177 - 0x10) = v0
                                                        *x16_177 = v1
                                                        x16_177 += 0x20
                                                    while (j_80 != 8)
                                                    
                                                    if (x8_168 != j_458)
                                                        goto label_c3dac4
                                                else
                                                    j_458 = 0
                                                label_c3dac4:
                                                    int64_t j_358 = x8_168 - j_458
                                                    int32_t* x8_170 = x13_73
                                                        + ((x11_23 + 0x16 + j_458 * x14_90) << 2)
                                                        + 0x1c
                                                    int32_t* x9_92 =
                                                        x9_91 + ((j_458 + x8_168 * x22_2) << 2)
                                                    int64_t j_81
                                                    
                                                    do
                                                        v0.d = *x8_170
                                                        v1.d = *x9_92
                                                        j_81 = j_358
                                                        j_358 -= 1
                                                        x8_170 = &x8_170[x14_90]
                                                        v0.d = v0.d f+ v1.d
                                                        *x9_92 = v0.d
                                                        x9_92 = &x9_92[1]
                                                    while (j_81 != 1)
                                                
                                                x13_65 = zx.d(*(fp + i * 0x68 + 0x64))
                                            
                                            if (sx.d(x13_65.w) s>= 9)
                                                int64_t x8_172 = *x20_2
                                                
                                                if (x8_172 s>= 1)
                                                    int64_t x9_93 = *x6
                                                    int64_t x12_46 = *x7
                                                    int64_t x13_74 = x7[1]
                                                    int64_t j_409 = 0
                                                    
                                                    if (x8_172 u< 8 || x13_74 != 1)
                                                        goto label_c3dbb8
                                                    
                                                    int64_t x15_140 = x8_172 * x22_2
                                                    
                                                    if (x9_93 + (x15_140 << 2) u>= x12_46
                                                            + ((x8_172 + x11_23 + 0x16) << 2)
                                                            + 0x20 || x9_93 + x8_172 * (x24_2 + 4)
                                                            u<= x12_46 + ((x11_23 + 0x16) << 2)
                                                            + 0x20)
                                                        j_409 = x8_172 & 0xfffffffffffffff8
                                                        void* x15_142 =
                                                            x9_93 + (x15_140 << 2) + 0x10
                                                        void* x16_182 =
                                                            x12_46 + ((x11_23 + 0x16) << 2) + 0x30
                                                        int64_t j_203 = j_409
                                                        int64_t j_82
                                                        
                                                        do
                                                            v0 = *(x16_182 - 0x10)
                                                            v1 = *x16_182
                                                            v3 = *x15_142
                                                            j_82 = j_203
                                                            j_203 -= 8
                                                            x16_182 += x13_74 << 5
                                                            v0 = vaddq_f32(v0, *(x15_142 - 0x10))
                                                            v1 = vaddq_f32(v1, v3)
                                                            *(x15_142 - 0x10) = v0
                                                            *x15_142 = v1
                                                            x15_142 += 0x20
                                                        while (j_82 != 8)
                                                        
                                                        if (x8_172 != j_409)
                                                            goto label_c3dbb8
                                                    else
                                                        j_409 = 0
                                                    label_c3dbb8:
                                                        int64_t j_316 = x8_172 - j_409
                                                        int32_t* x8_174 = x12_46 + ((x11_23 + 0x16
                                                            + j_409 * x13_74) << 2) + 0x20
                                                        int32_t* x9_94 =
                                                            x9_93 + ((j_409 + x8_172 * x22_2) << 2)
                                                        int64_t j_83
                                                        
                                                        do
                                                            v0.d = *x8_174
                                                            v1.d = *x9_94
                                                            j_83 = j_316
                                                            j_316 -= 1
                                                            x8_174 = &x8_174[x13_74]
                                                            v0.d = v0.d f+ v1.d
                                                            *x9_94 = v0.d
                                                            x9_94 = &x9_94[1]
                                                        while (j_83 != 1)
            
            int32_t x8_176 = x10_18.d + 0x1f
            
            if (*x21_1 s>= 0xc)
                int64_t x12_47 = sx.q(x8_176)
                int64_t j_84 = 0
                int64_t x15_143 = x12_47 + 4
                int64_t x16_184 = x12_47
                
                while (j_84 s< sx.q(*(fp + i * 0x68 + 0x66)))
                    int64_t x8_178 = *x20_2
                    
                    if (x8_178 s>= 1)
                        int64_t x9_96 = *x6
                        int64_t x17_140 = *x7
                        int64_t x0_123 = x7[1]
                        int64_t k_20 = 0
                        
                        if (x8_178 u< 8 || x0_123 != 1)
                            goto label_c3dce0
                        
                        int64_t x1_20 = j_84 + x12_47
                        
                        if (x9_96 + ((x8_178 * x22_2) << 2) u>= x17_140 + ((x8_178 + x1_20) << 2)
                                || x9_96 + (x24_2 + 4) * x8_178 u<= x17_140 + (x1_20 << 2))
                            k_20 = x8_178 & 0xfffffffffffffff8
                            void* x2_5 = x17_140 + (x15_143 << 2)
                            void* x3_5 = x9_96 + ((x22_2 * x8_178) << 2) + 0x10
                            int64_t k_11 = k_20
                            int64_t k
                            
                            do
                                v0 = *(x2_5 - 0x10)
                                v1 = *x2_5
                                v3 = *x3_5
                                k = k_11
                                k_11 -= 8
                                x2_5 += x0_123 << 5
                                v0 = vaddq_f32(v0, *(x3_5 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x3_5 - 0x10) = v0
                                *x3_5 = v1
                                x3_5 += 0x20
                            while (k != 8)
                            
                            if (x8_178 != k_20)
                                goto label_c3dce0
                        else
                            k_20 = 0
                        label_c3dce0:
                            int64_t k_10 = x8_178 - k_20
                            int32_t* x8_179 = x17_140 + ((x16_184 + k_20 * x0_123) << 2)
                            int32_t* x9_97 = x9_96 + ((k_20 + x22_2 * x8_178) << 2)
                            int64_t k_1
                            
                            do
                                v0.d = *x8_179
                                v1.d = *x9_97
                                k_1 = k_10
                                k_10 -= 1
                                x8_179 = &x8_179[x0_123]
                                v0.d = v0.d f+ v1.d
                                *x9_97 = v0.d
                                x9_97 = &x9_97[1]
                            while (k_1 != 1)
                    
                    j_84 += 1
                    x15_143 += 1
                    x16_184 += 1
                    
                    if (j_84 == 0xf)
                        break
                
                x8_176 = x10_18.d + 0x2e
            
            int32_t x9_98 = sx.d(*(fp + i * 0x68 + 0x68))
            int64_t x10_19 = sx.q(x8_176)
            
            if (x9_98 s>= 1)
                int64_t x8_180 = *x20_2
                
                if (x8_180 s>= 1)
                    int64_t x9_99 = *x6
                    int64_t x12_48 = *x7
                    int64_t x13_77 = x7[1]
                    int64_t j_410 = 0
                    
                    if (x8_180 u< 8 || x13_77 != 1)
                        goto label_c3ddd4
                    
                    int64_t x15_144 = x8_180 * x22_2
                    
                    if (x9_99 + (x15_144 << 2) u>= x12_48 + ((x8_180 + x10_19) << 2)
                            || x9_99 + x8_180 * (x24_2 + 4) u<= x12_48 + (x10_19 << 2))
                        j_410 = x8_180 & 0xfffffffffffffff8
                        void* x15_146 = x9_99 + (x15_144 << 2) + 0x10
                        void* x16_189 = x12_48 + (x10_19 << 2) + 0x10
                        int64_t j_204 = j_410
                        int64_t j_85
                        
                        do
                            v0 = *(x16_189 - 0x10)
                            v1 = *x16_189
                            v3 = *x15_146
                            j_85 = j_204
                            j_204 -= 8
                            x16_189 += x13_77 << 5
                            v0 = vaddq_f32(v0, *(x15_146 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_146 - 0x10) = v0
                            *x15_146 = v1
                            x15_146 += 0x20
                        while (j_85 != 8)
                        
                        if (x8_180 != j_410)
                            goto label_c3ddd4
                    else
                        j_410 = 0
                    label_c3ddd4:
                        int64_t j_317 = x8_180 - j_410
                        int32_t* x8_181 = x12_48 + ((x10_19 + j_410 * x13_77) << 2)
                        int32_t* x9_100 = x9_99 + ((j_410 + x8_180 * x22_2) << 2)
                        int64_t j_86
                        
                        do
                            v0.d = *x8_181
                            v1.d = *x9_100
                            j_86 = j_317
                            j_317 -= 1
                            x8_181 = &x8_181[x13_77]
                            v0.d = v0.d f+ v1.d
                            *x9_100 = v0.d
                            x9_100 = &x9_100[1]
                        while (j_86 != 1)
                    
                    x9_98 = zx.d(*(fp + i * 0x68 + 0x68))
                
                if (sx.d(x9_98.w) s> 1)
                    int64_t x8_183 = *x20_2
                    
                    if (x8_183 s>= 1)
                        int64_t x9_101 = *x6
                        int64_t x12_49 = *x7
                        int64_t x13_79 = x7[1]
                        int64_t j_411 = 0
                        
                        if (x8_183 u< 8 || x13_79 != 1)
                            goto label_c3dec8
                        
                        int64_t x15_147 = x8_183 * x22_2
                        
                        if (x9_101 + (x15_147 << 2) u>= x12_49 + ((x8_183 + x10_19) << 2) + 4
                                || x9_101 + x8_183 * (x24_2 + 4) u<= x12_49 + (x10_19 << 2) + 4)
                            j_411 = x8_183 & 0xfffffffffffffff8
                            void* x15_149 = x9_101 + (x15_147 << 2) + 0x10
                            void* x16_195 = x12_49 + (x10_19 << 2) + 0x14
                            int64_t j_205 = j_411
                            int64_t j_87
                            
                            do
                                v0 = *(x16_195 - 0x10)
                                v1 = *x16_195
                                v3 = *x15_149
                                j_87 = j_205
                                j_205 -= 8
                                x16_195 += x13_79 << 5
                                v0 = vaddq_f32(v0, *(x15_149 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x15_149 - 0x10) = v0
                                *x15_149 = v1
                                x15_149 += 0x20
                            while (j_87 != 8)
                            
                            if (x8_183 != j_411)
                                goto label_c3dec8
                        else
                            j_411 = 0
                        label_c3dec8:
                            int64_t j_318 = x8_183 - j_411
                            int32_t* x8_185 = x12_49 + ((x10_19 + j_411 * x13_79) << 2) + 4
                            int32_t* x9_102 = x9_101 + ((j_411 + x8_183 * x22_2) << 2)
                            int64_t j_88
                            
                            do
                                v0.d = *x8_185
                                v1.d = *x9_102
                                j_88 = j_318
                                j_318 -= 1
                                x8_185 = &x8_185[x13_79]
                                v0.d = v0.d f+ v1.d
                                *x9_102 = v0.d
                                x9_102 = &x9_102[1]
                            while (j_88 != 1)
                        
                        x9_98 = zx.d(*(fp + i * 0x68 + 0x68))
                    
                    if (sx.d(x9_98.w) s>= 3)
                        int64_t x8_187 = *x20_2
                        
                        if (x8_187 s>= 1)
                            int64_t x9_103 = *x6
                            int64_t x12_50 = *x7
                            int64_t x13_81 = x7[1]
                            int64_t j_412 = 0
                            
                            if (x8_187 u< 8 || x13_81 != 1)
                                goto label_c3dfbc
                            
                            int64_t x15_150 = x8_187 * x22_2
                            
                            if (x9_103 + (x15_150 << 2) u>= x12_50 + ((x8_187 + x10_19) << 2) + 8
                                    || x9_103 + x8_187 * (x24_2 + 4)
                                    u<= x12_50 + (x10_19 << 2) + 8)
                                j_412 = x8_187 & 0xfffffffffffffff8
                                void* x15_152 = x9_103 + (x15_150 << 2) + 0x10
                                void* x16_201 = x12_50 + (x10_19 << 2) + 0x18
                                int64_t j_206 = j_412
                                int64_t j_89
                                
                                do
                                    v0 = *(x16_201 - 0x10)
                                    v1 = *x16_201
                                    v3 = *x15_152
                                    j_89 = j_206
                                    j_206 -= 8
                                    x16_201 += x13_81 << 5
                                    v0 = vaddq_f32(v0, *(x15_152 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_152 - 0x10) = v0
                                    *x15_152 = v1
                                    x15_152 += 0x20
                                while (j_89 != 8)
                                
                                if (x8_187 != j_412)
                                    goto label_c3dfbc
                            else
                                j_412 = 0
                            label_c3dfbc:
                                int64_t j_319 = x8_187 - j_412
                                int32_t* x8_189 = x12_50 + ((x10_19 + j_412 * x13_81) << 2) + 8
                                int32_t* x9_104 = x9_103 + ((j_412 + x8_187 * x22_2) << 2)
                                int64_t j_90
                                
                                do
                                    v0.d = *x8_189
                                    v1.d = *x9_104
                                    j_90 = j_319
                                    j_319 -= 1
                                    x8_189 = &x8_189[x13_81]
                                    v0.d = v0.d f+ v1.d
                                    *x9_104 = v0.d
                                    x9_104 = &x9_104[1]
                                while (j_90 != 1)
                            
                            x9_98 = zx.d(*(fp + i * 0x68 + 0x68))
                        
                        if (sx.d(x9_98.w) s>= 4)
                            int64_t x8_191 = *x20_2
                            
                            if (x8_191 s>= 1)
                                int64_t x9_105 = *x6
                                int64_t x12_51 = *x7
                                int64_t x13_83 = x7[1]
                                int64_t j_413 = 0
                                
                                if (x8_191 u< 8 || x13_83 != 1)
                                    goto label_c3e0b0
                                
                                int64_t x15_153 = x8_191 * x22_2
                                
                                if (x9_105 + (x15_153 << 2)
                                        u>= x12_51 + ((x8_191 + x10_19) << 2) + 0xc
                                        || x9_105 + x8_191 * (x24_2 + 4)
                                        u<= x12_51 + (x10_19 << 2) + 0xc)
                                    j_413 = x8_191 & 0xfffffffffffffff8
                                    void* x15_155 = x9_105 + (x15_153 << 2) + 0x10
                                    void* x16_207 = x12_51 + (x10_19 << 2) + 0x1c
                                    int64_t j_207 = j_413
                                    int64_t j_91
                                    
                                    do
                                        v0 = *(x16_207 - 0x10)
                                        v1 = *x16_207
                                        v3 = *x15_155
                                        j_91 = j_207
                                        j_207 -= 8
                                        x16_207 += x13_83 << 5
                                        v0 = vaddq_f32(v0, *(x15_155 - 0x10))
                                        v1 = vaddq_f32(v1, v3)
                                        *(x15_155 - 0x10) = v0
                                        *x15_155 = v1
                                        x15_155 += 0x20
                                    while (j_91 != 8)
                                    
                                    if (x8_191 != j_413)
                                        goto label_c3e0b0
                                else
                                    j_413 = 0
                                label_c3e0b0:
                                    int64_t j_320 = x8_191 - j_413
                                    int32_t* x8_193 =
                                        x12_51 + ((x10_19 + j_413 * x13_83) << 2) + 0xc
                                    int32_t* x9_106 = x9_105 + ((j_413 + x8_191 * x22_2) << 2)
                                    int64_t j_92
                                    
                                    do
                                        v0.d = *x8_193
                                        v1.d = *x9_106
                                        j_92 = j_320
                                        j_320 -= 1
                                        x8_193 = &x8_193[x13_83]
                                        v0.d = v0.d f+ v1.d
                                        *x9_106 = v0.d
                                        x9_106 = &x9_106[1]
                                    while (j_92 != 1)
                                
                                x9_98 = zx.d(*(fp + i * 0x68 + 0x68))
                            
                            if (sx.d(x9_98.w) s>= 5)
                                int64_t x8_195 = *x20_2
                                
                                if (x8_195 s>= 1)
                                    int64_t x9_107 = *x6
                                    int64_t x12_52 = *x7
                                    int64_t x13_85 = x7[1]
                                    int64_t j_414 = 0
                                    
                                    if (x8_195 u< 8 || x13_85 != 1)
                                        goto label_c3e1a4
                                    
                                    int64_t x15_156 = x8_195 * x22_2
                                    
                                    if (x9_107 + (x15_156 << 2)
                                            u>= x12_52 + ((x8_195 + x10_19) << 2) + 0x10
                                            || x9_107 + x8_195 * (x24_2 + 4)
                                            u<= x12_52 + (x10_19 << 2) + 0x10)
                                        j_414 = x8_195 & 0xfffffffffffffff8
                                        void* x15_158 = x9_107 + (x15_156 << 2) + 0x10
                                        void* x16_213 = x12_52 + (x10_19 << 2) + 0x20
                                        int64_t j_208 = j_414
                                        int64_t j_93
                                        
                                        do
                                            v0 = *(x16_213 - 0x10)
                                            v1 = *x16_213
                                            v3 = *x15_158
                                            j_93 = j_208
                                            j_208 -= 8
                                            x16_213 += x13_85 << 5
                                            v0 = vaddq_f32(v0, *(x15_158 - 0x10))
                                            v1 = vaddq_f32(v1, v3)
                                            *(x15_158 - 0x10) = v0
                                            *x15_158 = v1
                                            x15_158 += 0x20
                                        while (j_93 != 8)
                                        
                                        if (x8_195 != j_414)
                                            goto label_c3e1a4
                                    else
                                        j_414 = 0
                                    label_c3e1a4:
                                        int64_t j_321 = x8_195 - j_414
                                        int32_t* x8_197 =
                                            x12_52 + ((x10_19 + j_414 * x13_85) << 2) + 0x10
                                        int32_t* x9_108 = x9_107 + ((j_414 + x8_195 * x22_2) << 2)
                                        int64_t j_94
                                        
                                        do
                                            v0.d = *x8_197
                                            v1.d = *x9_108
                                            j_94 = j_321
                                            j_321 -= 1
                                            x8_197 = &x8_197[x13_85]
                                            v0.d = v0.d f+ v1.d
                                            *x9_108 = v0.d
                                            x9_108 = &x9_108[1]
                                        while (j_94 != 1)
                                    
                                    x9_98 = zx.d(*(fp + i * 0x68 + 0x68))
                                
                                if (sx.d(x9_98.w) s>= 6)
                                    int64_t x8_199 = *x20_2
                                    
                                    if (x8_199 s>= 1)
                                        int64_t x9_109 = *x6
                                        int64_t x12_53 = *x7
                                        int64_t x13_87 = x7[1]
                                        int64_t j_415 = 0
                                        
                                        if (x8_199 u< 8 || x13_87 != 1)
                                            goto label_c3e298
                                        
                                        int64_t x15_159 = x8_199 * x22_2
                                        
                                        if (x9_109 + (x15_159 << 2)
                                                u>= x12_53 + ((x8_199 + x10_19) << 2) + 0x14
                                                || x9_109 + x8_199 * (x24_2 + 4)
                                                u<= x12_53 + (x10_19 << 2) + 0x14)
                                            j_415 = x8_199 & 0xfffffffffffffff8
                                            void* x15_161 = x9_109 + (x15_159 << 2) + 0x10
                                            void* x16_219 = x12_53 + (x10_19 << 2) + 0x24
                                            int64_t j_209 = j_415
                                            int64_t j_95
                                            
                                            do
                                                v0 = *(x16_219 - 0x10)
                                                v1 = *x16_219
                                                v3 = *x15_161
                                                j_95 = j_209
                                                j_209 -= 8
                                                x16_219 += x13_87 << 5
                                                v0 = vaddq_f32(v0, *(x15_161 - 0x10))
                                                v1 = vaddq_f32(v1, v3)
                                                *(x15_161 - 0x10) = v0
                                                *x15_161 = v1
                                                x15_161 += 0x20
                                            while (j_95 != 8)
                                            
                                            if (x8_199 != j_415)
                                                goto label_c3e298
                                        else
                                            j_415 = 0
                                        label_c3e298:
                                            int64_t j_322 = x8_199 - j_415
                                            int32_t* x8_201 =
                                                x12_53 + ((x10_19 + j_415 * x13_87) << 2) + 0x14
                                            int32_t* x9_110 =
                                                x9_109 + ((j_415 + x8_199 * x22_2) << 2)
                                            int64_t j_96
                                            
                                            do
                                                v0.d = *x8_201
                                                v1.d = *x9_110
                                                j_96 = j_322
                                                j_322 -= 1
                                                x8_201 = &x8_201[x13_87]
                                                v0.d = v0.d f+ v1.d
                                                *x9_110 = v0.d
                                                x9_110 = &x9_110[1]
                                            while (j_96 != 1)
                                        
                                        x9_98 = zx.d(*(fp + i * 0x68 + 0x68))
                                    
                                    if (sx.d(x9_98.w) s>= 7)
                                        int64_t x8_203 = *x20_2
                                        
                                        if (x8_203 s>= 1)
                                            int64_t x9_111 = *x6
                                            int64_t x12_54 = *x7
                                            int64_t x13_89 = x7[1]
                                            int64_t j_416 = 0
                                            
                                            if (x8_203 u< 8 || x13_89 != 1)
                                                goto label_c3e38c
                                            
                                            int64_t x15_162 = x8_203 * x22_2
                                            
                                            if (x9_111 + (x15_162 << 2)
                                                    u>= x12_54 + ((x8_203 + x10_19) << 2) + 0x18
                                                    || x9_111 + x8_203 * (x24_2 + 4)
                                                    u<= x12_54 + (x10_19 << 2) + 0x18)
                                                j_416 = x8_203 & 0xfffffffffffffff8
                                                void* x15_164 = x9_111 + (x15_162 << 2) + 0x10
                                                void* x16_225 = x12_54 + (x10_19 << 2) + 0x28
                                                int64_t j_210 = j_416
                                                int64_t j_97
                                                
                                                do
                                                    v0 = *(x16_225 - 0x10)
                                                    v1 = *x16_225
                                                    v3 = *x15_164
                                                    j_97 = j_210
                                                    j_210 -= 8
                                                    x16_225 += x13_89 << 5
                                                    v0 = vaddq_f32(v0, *(x15_164 - 0x10))
                                                    v1 = vaddq_f32(v1, v3)
                                                    *(x15_164 - 0x10) = v0
                                                    *x15_164 = v1
                                                    x15_164 += 0x20
                                                while (j_97 != 8)
                                                
                                                if (x8_203 != j_416)
                                                    goto label_c3e38c
                                            else
                                                j_416 = 0
                                            label_c3e38c:
                                                int64_t j_323 = x8_203 - j_416
                                                int32_t* x8_205 =
                                                    x12_54 + ((x10_19 + j_416 * x13_89) << 2) + 0x18
                                                int32_t* x9_112 =
                                                    x9_111 + ((j_416 + x8_203 * x22_2) << 2)
                                                int64_t j_98
                                                
                                                do
                                                    v0.d = *x8_205
                                                    v1.d = *x9_112
                                                    j_98 = j_323
                                                    j_323 -= 1
                                                    x8_205 = &x8_205[x13_89]
                                                    v0.d = v0.d f+ v1.d
                                                    *x9_112 = v0.d
                                                    x9_112 = &x9_112[1]
                                                while (j_98 != 1)
                                            
                                            x9_98 = zx.d(*(fp + i * 0x68 + 0x68))
                                        
                                        if (sx.d(x9_98.w) s>= 8)
                                            int64_t x8_207 = *x20_2
                                            
                                            if (x8_207 s>= 1)
                                                int64_t x9_113 = *x6
                                                int64_t x11_28 = *x7
                                                int64_t x12_55 = x7[1]
                                                int64_t j_398 = 0
                                                
                                                if (x8_207 u< 8 || x12_55 != 1)
                                                    goto label_c3e480
                                                
                                                int64_t x14_138 = x8_207 * x22_2
                                                
                                                if (x9_113 + (x14_138 << 2) u>= x11_28
                                                        + ((x8_207 + x10_19) << 2) + 0x1c
                                                        || x9_113 + x8_207 * (x24_2 + 4)
                                                        u<= x11_28 + (x10_19 << 2) + 0x1c)
                                                    j_398 = x8_207 & 0xfffffffffffffff8
                                                    void* x14_140 = x9_113 + (x14_138 << 2) + 0x10
                                                    void* x15_169 = x11_28 + (x10_19 << 2) + 0x2c
                                                    int64_t j_376 = j_398
                                                    int64_t j_99
                                                    
                                                    do
                                                        v0 = *(x15_169 - 0x10)
                                                        v1 = *x15_169
                                                        v3 = *x14_140
                                                        j_99 = j_376
                                                        j_376 -= 8
                                                        x15_169 += x12_55 << 5
                                                        v0 = vaddq_f32(v0, *(x14_140 - 0x10))
                                                        v1 = vaddq_f32(v1, v3)
                                                        *(x14_140 - 0x10) = v0
                                                        *x14_140 = v1
                                                        x14_140 += 0x20
                                                    while (j_99 != 8)
                                                    
                                                    if (x8_207 != j_398)
                                                        goto label_c3e480
                                                else
                                                    j_398 = 0
                                                label_c3e480:
                                                    int64_t j_291 = x8_207 - j_398
                                                    int32_t* x8_209 = x11_28
                                                        + ((x10_19 + j_398 * x12_55) << 2) + 0x1c
                                                    int32_t* x9_114 =
                                                        x9_113 + ((j_398 + x8_207 * x22_2) << 2)
                                                    int64_t j_100
                                                    
                                                    do
                                                        v0.d = *x8_209
                                                        v1.d = *x9_114
                                                        j_100 = j_291
                                                        j_291 -= 1
                                                        x8_209 = &x8_209[x12_55]
                                                        v0.d = v0.d f+ v1.d
                                                        *x9_114 = v0.d
                                                        x9_114 = &x9_114[1]
                                                    while (j_100 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x5e)) != 0)
                int64_t x8_212 = *x20_2
                
                if (x8_212 s>= 1)
                    int64_t x9_115 = *x6
                    int64_t x11_29 = *x7
                    int64_t x12_57 = x7[1]
                    int64_t j_417 = 0
                    
                    if (x8_212 u< 8 || x12_57 != 1)
                        goto label_c3e568
                    
                    int64_t x15_171 = x8_212 * x22_2
                    
                    if (x9_115 + (x15_171 << 2) u>= x11_29 + ((x8_212 + x10_19 + 8) << 2)
                            || x9_115 + x8_212 * (x24_2 + 4) u<= x11_29 + ((x10_19 + 8) << 2))
                        j_417 = x8_212 & 0xfffffffffffffff8
                        void* x15_173 = x9_115 + (x15_171 << 2) + 0x10
                        void* x16_232 = x11_29 + ((x10_19 + 8) << 2) + 0x10
                        int64_t j_211 = j_417
                        int64_t j_101
                        
                        do
                            v0 = *(x16_232 - 0x10)
                            v1 = *x16_232
                            v3 = *x15_173
                            j_101 = j_211
                            j_211 -= 8
                            x16_232 += x12_57 << 5
                            v0 = vaddq_f32(v0, *(x15_173 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_173 - 0x10) = v0
                            *x15_173 = v1
                            x15_173 += 0x20
                        while (j_101 != 8)
                        
                        if (x8_212 != j_417)
                            goto label_c3e568
                    else
                        j_417 = 0
                    label_c3e568:
                        int64_t j_324 = x8_212 - j_417
                        int32_t* x8_213 = x11_29 + ((x10_19 + 8 + j_417 * x12_57) << 2)
                        int32_t* x9_116 = x9_115 + ((j_417 + x8_212 * x22_2) << 2)
                        int64_t j_102
                        
                        do
                            v0.d = *x8_213
                            v1.d = *x9_116
                            j_102 = j_324
                            j_324 -= 1
                            x8_213 = &x8_213[x12_57]
                            v0.d = v0.d f+ v1.d
                            *x9_116 = v0.d
                            x9_116 = &x9_116[1]
                        while (j_102 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x37)) != 0)
                int64_t x8_216 = *x20_2
                
                if (x8_216 s>= 1)
                    int64_t x9_117 = *x6
                    int64_t x11_30 = *x7
                    int64_t x12_59 = x7[1]
                    int64_t j_418 = 0
                    
                    if (x8_216 u< 8 || x12_59 != 1)
                        goto label_c3e650
                    
                    int64_t x15_174 = x8_216 * x22_2
                    
                    if (x9_117 + (x15_174 << 2) u>= x11_30 + ((x8_216 + x10_19 + 9) << 2)
                            || x9_117 + x8_216 * (x24_2 + 4) u<= x11_30 + ((x10_19 + 9) << 2))
                        j_418 = x8_216 & 0xfffffffffffffff8
                        void* x15_176 = x9_117 + (x15_174 << 2) + 0x10
                        void* x16_237 = x11_30 + ((x10_19 + 9) << 2) + 0x10
                        int64_t j_212 = j_418
                        int64_t j_103
                        
                        do
                            v0 = *(x16_237 - 0x10)
                            v1 = *x16_237
                            v3 = *x15_176
                            j_103 = j_212
                            j_212 -= 8
                            x16_237 += x12_59 << 5
                            v0 = vaddq_f32(v0, *(x15_176 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_176 - 0x10) = v0
                            *x15_176 = v1
                            x15_176 += 0x20
                        while (j_103 != 8)
                        
                        if (x8_216 != j_418)
                            goto label_c3e650
                    else
                        j_418 = 0
                    label_c3e650:
                        int64_t j_325 = x8_216 - j_418
                        int32_t* x8_217 = x11_30 + ((x10_19 + 9 + j_418 * x12_59) << 2)
                        int32_t* x9_118 = x9_117 + ((j_418 + x8_216 * x22_2) << 2)
                        int64_t j_104
                        
                        do
                            v0.d = *x8_217
                            v1.d = *x9_118
                            j_104 = j_325
                            j_325 -= 1
                            x8_217 = &x8_217[x12_59]
                            v0.d = v0.d f+ v1.d
                            *x9_118 = v0.d
                            x9_118 = &x9_118[1]
                        while (j_104 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x38)) != 0)
                int64_t x8_220 = *x20_2
                
                if (x8_220 s>= 1)
                    int64_t x9_119 = *x6
                    int64_t x11_31 = *x7
                    int64_t x12_61 = x7[1]
                    int64_t j_419 = 0
                    
                    if (x8_220 u< 8 || x12_61 != 1)
                        goto label_c3e738
                    
                    int64_t x15_177 = x8_220 * x22_2
                    
                    if (x9_119 + (x15_177 << 2) u>= x11_31 + ((x8_220 + x10_19 + 0xa) << 2)
                            || x9_119 + x8_220 * (x24_2 + 4) u<= x11_31 + ((x10_19 + 0xa) << 2))
                        j_419 = x8_220 & 0xfffffffffffffff8
                        void* x15_179 = x9_119 + (x15_177 << 2) + 0x10
                        void* x16_242 = x11_31 + ((x10_19 + 0xa) << 2) + 0x10
                        int64_t j_213 = j_419
                        int64_t j_105
                        
                        do
                            v0 = *(x16_242 - 0x10)
                            v1 = *x16_242
                            v3 = *x15_179
                            j_105 = j_213
                            j_213 -= 8
                            x16_242 += x12_61 << 5
                            v0 = vaddq_f32(v0, *(x15_179 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x15_179 - 0x10) = v0
                            *x15_179 = v1
                            x15_179 += 0x20
                        while (j_105 != 8)
                        
                        if (x8_220 != j_419)
                            goto label_c3e738
                    else
                        j_419 = 0
                    label_c3e738:
                        int64_t j_326 = x8_220 - j_419
                        int32_t* x8_221 = x11_31 + ((x10_19 + 0xa + j_419 * x12_61) << 2)
                        int32_t* x9_120 = x9_119 + ((j_419 + x8_220 * x22_2) << 2)
                        int64_t j_106
                        
                        do
                            v0.d = *x8_221
                            v1.d = *x9_120
                            j_106 = j_326
                            j_326 -= 1
                            x8_221 = &x8_221[x12_61]
                            v0.d = v0.d f+ v1.d
                            *x9_120 = v0.d
                            x9_120 = &x9_120[1]
                        while (j_106 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x39)) != 0)
                int64_t x8_224 = *x20_2
                
                if (x8_224 s>= 1)
                    int64_t x9_121 = *x6
                    int64_t x11_32 = *x7
                    int64_t x12_63 = x7[1]
                    int64_t j_420 = 0
                    
                    if (x8_224 u< 8 || x12_63 != 1)
                        goto label_c3e820
                    
                    int64_t x15_180 = x8_224 * x22_2
                    
                    if (x9_121 + (x15_180 << 2) u>= x11_32 + ((x8_224 + x10_19 + 0xb) << 2)
                            || x9_121 + x8_224 * (x24_2 + 4) u<= x11_32 + ((x10_19 + 0xb) << 2))
                        j_420 = x8_224 & 0xfffffffffffffff8
                        int128_t* x15_182 = x9_121 + (x15_180 << 2) + 0x10
                        int128_t* x16_247 = x11_32 + ((x10_19 + 0xb) << 2) + 0x10
                        int64_t j_214 = j_420
                        int64_t j_107
                        
                        do
                            v0 = x16_247[-1]
                            v1 = *x16_247
                            v3 = *x15_182
                            j_107 = j_214
                            j_214 -= 8
                            x16_247 = &x16_247[x12_63 * 2]
                            v0 = vaddq_f32(v0, x15_182[-1])
                            v1 = vaddq_f32(v1, v3)
                            x15_182[-1] = v0
                            *x15_182 = v1
                            x15_182 = &x15_182[2]
                        while (j_107 != 8)
                        
                        if (x8_224 != j_420)
                            goto label_c3e820
                    else
                        j_420 = 0
                    label_c3e820:
                        int64_t j_327 = x8_224 - j_420
                        int32_t* x8_225 = x11_32 + ((x10_19 + 0xb + j_420 * x12_63) << 2)
                        int32_t* x9_122 = x9_121 + ((j_420 + x8_224 * x22_2) << 2)
                        int64_t j_108
                        
                        do
                            v0.d = *x8_225
                            v1.d = *x9_122
                            j_108 = j_327
                            j_327 -= 1
                            x8_225 = &x8_225[x12_63]
                            v0.d = v0.d f+ v1.d
                            *x9_122 = v0.d
                            x9_122 = &x9_122[1]
                        while (j_108 != 1)
            
            int32_t x9_125 = *x21_1
            uint64_t x11_33 = x10_19 + 0xc
            
            if (x9_125 s>= 0xd)
                if (zx.d(*(fp + i * 0x68 + 0x3a)) != 0)
                    int64_t x8_228 = *x20_2
                    
                    if (x8_228 s>= 1)
                        int64_t x9_123 = *x6
                        int64_t x12_65 = *x7
                        int64_t x13_105 = x7[1]
                        int64_t j_421 = 0
                        
                        if (x8_228 u< 8 || x13_105 != 1)
                            goto label_c3e920
                        
                        int64_t x15_183 = x8_228 * x22_2
                        
                        if (x9_123 + (x15_183 << 2) u>= x12_65 + ((x8_228 + x11_33) << 2)
                                || x9_123 + x8_228 * (x24_2 + 4) u<= x12_65 + (x11_33 << 2))
                            j_421 = x8_228 & 0xfffffffffffffff8
                            void* x15_185 = x9_123 + (x15_183 << 2) + 0x10
                            void* x16_252 = x12_65 + (x11_33 << 2) + 0x10
                            int64_t j_215 = j_421
                            int64_t j_109
                            
                            do
                                v0 = *(x16_252 - 0x10)
                                v1 = *x16_252
                                v3 = *x15_185
                                j_109 = j_215
                                j_215 -= 8
                                x16_252 += x13_105 << 5
                                v0 = vaddq_f32(v0, *(x15_185 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x15_185 - 0x10) = v0
                                *x15_185 = v1
                                x15_185 += 0x20
                            while (j_109 != 8)
                            
                            if (x8_228 != j_421)
                                goto label_c3e920
                        else
                            j_421 = 0
                        label_c3e920:
                            int64_t j_328 = x8_228 - j_421
                            int32_t* x8_229 = x12_65 + ((x11_33 + j_421 * x13_105) << 2)
                            int32_t* x9_124 = x9_123 + ((j_421 + x8_228 * x22_2) << 2)
                            int64_t j_110
                            
                            do
                                v0.d = *x8_229
                                v1.d = *x9_124
                                j_110 = j_328
                                j_328 -= 1
                                x8_229 = &x8_229[x13_105]
                                v0.d = v0.d f+ v1.d
                                *x9_124 = v0.d
                                x9_124 = &x9_124[1]
                            while (j_110 != 1)
                        
                        x9_125 = *x21_1
                
                x11_33 = zx.q((x10_19 + 0xd).d)
                
                if (x9_125 s>= 0xf)
                    if (zx.d(*(fp + i * 0x68 + 0x3b)) != 0)
                        int64_t x9_128 = *x20_2
                        
                        if (x9_128 s>= 1)
                            int64_t x11_35 = *x6
                            int64_t x12_66 = *x7
                            int64_t x13_107 = x7[1]
                            int64_t j_422 = 0
                            
                            if (x9_128 u< 8 || x13_107 != 1)
                                goto label_c3ea18
                            
                            int64_t x15_186 = x9_128 * x22_2
                            
                            if (x11_35 + (x15_186 << 2) u>= x12_66 + ((x9_128 + x10_19 + 0xd) << 2)
                                    || x11_35 + x9_128 * (x24_2 + 4)
                                    u<= x12_66 + ((x10_19 + 0xd) << 2))
                                j_422 = x9_128 & 0xfffffffffffffff8
                                void* x15_188 = x11_35 + (x15_186 << 2) + 0x10
                                void* x16_258 = x12_66 + ((x10_19 + 0xd) << 2) + 0x10
                                int64_t j_216 = j_422
                                int64_t j_111
                                
                                do
                                    v0 = *(x16_258 - 0x10)
                                    v1 = *x16_258
                                    v3 = *x15_188
                                    j_111 = j_216
                                    j_216 -= 8
                                    x16_258 += x13_107 << 5
                                    v0 = vaddq_f32(v0, *(x15_188 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_188 - 0x10) = v0
                                    *x15_188 = v1
                                    x15_188 += 0x20
                                while (j_111 != 8)
                                
                                if (x9_128 != j_422)
                                    goto label_c3ea18
                            else
                                j_422 = 0
                            label_c3ea18:
                                int64_t j_329 = x9_128 - j_422
                                int32_t* x9_129 = x12_66 + ((x10_19 + 0xd + j_422 * x13_107) << 2)
                                int32_t* x11_36 = x11_35 + ((j_422 + x9_128 * x22_2) << 2)
                                int64_t j_112
                                
                                do
                                    v0.d = *x9_129
                                    v1.d = *x11_36
                                    j_112 = j_329
                                    j_329 -= 1
                                    x9_129 = &x9_129[x13_107]
                                    v0.d = v0.d f+ v1.d
                                    *x11_36 = v0.d
                                    x11_36 = &x11_36[1]
                                while (j_112 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x3c)) != 0)
                        int64_t x8_234 = *x20_2
                        
                        if (x8_234 s>= 1)
                            int64_t x9_130 = *x6
                            int64_t x11_37 = *x7
                            int64_t x12_67 = x7[1]
                            int64_t j_423 = 0
                            
                            if (x8_234 u< 8 || x12_67 != 1)
                                goto label_c3eaf4
                            
                            int64_t x15_189 = x8_234 * x22_2
                            
                            if (x9_130 + (x15_189 << 2) u>= x11_37 + ((x8_234 + x10_19 + 0xe) << 2)
                                    || x9_130 + x8_234 * (x24_2 + 4)
                                    u<= x11_37 + ((x10_19 + 0xe) << 2))
                                j_423 = x8_234 & 0xfffffffffffffff8
                                void* x15_191 = x9_130 + (x15_189 << 2) + 0x10
                                void* x16_264 = x11_37 + ((x10_19 + 0xe) << 2) + 0x10
                                int64_t j_217 = j_423
                                int64_t j_113
                                
                                do
                                    v0 = *(x16_264 - 0x10)
                                    v1 = *x16_264
                                    v3 = *x15_191
                                    j_113 = j_217
                                    j_217 -= 8
                                    x16_264 += x12_67 << 5
                                    v0 = vaddq_f32(v0, *(x15_191 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_191 - 0x10) = v0
                                    *x15_191 = v1
                                    x15_191 += 0x20
                                while (j_113 != 8)
                                
                                if (x8_234 != j_423)
                                    goto label_c3eaf4
                            else
                                j_423 = 0
                            label_c3eaf4:
                                int64_t j_330 = x8_234 - j_423
                                int32_t* x8_235 = x11_37 + ((x10_19 + 0xe + j_423 * x12_67) << 2)
                                int32_t* x9_131 = x9_130 + ((j_423 + x8_234 * x22_2) << 2)
                                int64_t j_114
                                
                                do
                                    v0.d = *x8_235
                                    v1.d = *x9_131
                                    j_114 = j_330
                                    j_330 -= 1
                                    x8_235 = &x8_235[x12_67]
                                    v0.d = v0.d f+ v1.d
                                    *x9_131 = v0.d
                                    x9_131 = &x9_131[1]
                                while (j_114 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x3d)) != 0)
                        int64_t x8_238 = *x20_2
                        
                        if (x8_238 s>= 1)
                            int64_t x9_132 = *x6
                            int64_t x11_38 = *x7
                            int64_t x12_69 = x7[1]
                            int64_t j_424 = 0
                            
                            if (x8_238 u< 8 || x12_69 != 1)
                                goto label_c3ebdc
                            
                            int64_t x15_192 = x8_238 * x22_2
                            
                            if (x9_132 + (x15_192 << 2) u>= x11_38 + ((x8_238 + x10_19 + 0xf) << 2)
                                    || x9_132 + x8_238 * (x24_2 + 4)
                                    u<= x11_38 + ((x10_19 + 0xf) << 2))
                                j_424 = x8_238 & 0xfffffffffffffff8
                                void* x15_194 = x9_132 + (x15_192 << 2) + 0x10
                                void* x16_269 = x11_38 + ((x10_19 + 0xf) << 2) + 0x10
                                int64_t j_218 = j_424
                                int64_t j_115
                                
                                do
                                    v0 = *(x16_269 - 0x10)
                                    v1 = *x16_269
                                    v3 = *x15_194
                                    j_115 = j_218
                                    j_218 -= 8
                                    x16_269 += x12_69 << 5
                                    v0 = vaddq_f32(v0, *(x15_194 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_194 - 0x10) = v0
                                    *x15_194 = v1
                                    x15_194 += 0x20
                                while (j_115 != 8)
                                
                                if (x8_238 != j_424)
                                    goto label_c3ebdc
                            else
                                j_424 = 0
                            label_c3ebdc:
                                int64_t j_331 = x8_238 - j_424
                                int32_t* x8_239 = x11_38 + ((x10_19 + 0xf + j_424 * x12_69) << 2)
                                int32_t* x9_133 = x9_132 + ((j_424 + x8_238 * x22_2) << 2)
                                int64_t j_116
                                
                                do
                                    v0.d = *x8_239
                                    v1.d = *x9_133
                                    j_116 = j_331
                                    j_331 -= 1
                                    x8_239 = &x8_239[x12_69]
                                    v0.d = v0.d f+ v1.d
                                    *x9_133 = v0.d
                                    x9_133 = &x9_133[1]
                                while (j_116 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x3e)) != 0)
                        int64_t x8_242 = *x20_2
                        
                        if (x8_242 s>= 1)
                            int64_t x9_134 = *x6
                            int64_t x11_39 = *x7
                            int64_t x12_71 = x7[1]
                            int64_t j_425 = 0
                            
                            if (x8_242 u< 8 || x12_71 != 1)
                                goto label_c3ecc4
                            
                            int64_t x15_195 = x8_242 * x22_2
                            
                            if (x9_134 + (x15_195 << 2) u>= x11_39 + ((x8_242 + x10_19 + 0x10) << 2)
                                    || x9_134 + x8_242 * (x24_2 + 4)
                                    u<= x11_39 + ((x10_19 + 0x10) << 2))
                                j_425 = x8_242 & 0xfffffffffffffff8
                                void* x15_197 = x9_134 + (x15_195 << 2) + 0x10
                                void* x16_274 = x11_39 + ((x10_19 + 0x10) << 2) + 0x10
                                int64_t j_219 = j_425
                                int64_t j_117
                                
                                do
                                    v0 = *(x16_274 - 0x10)
                                    v1 = *x16_274
                                    v3 = *x15_197
                                    j_117 = j_219
                                    j_219 -= 8
                                    x16_274 += x12_71 << 5
                                    v0 = vaddq_f32(v0, *(x15_197 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_197 - 0x10) = v0
                                    *x15_197 = v1
                                    x15_197 += 0x20
                                while (j_117 != 8)
                                
                                if (x8_242 != j_425)
                                    goto label_c3ecc4
                            else
                                j_425 = 0
                            label_c3ecc4:
                                int64_t j_332 = x8_242 - j_425
                                int32_t* x8_243 = x11_39 + ((x10_19 + 0x10 + j_425 * x12_71) << 2)
                                int32_t* x9_135 = x9_134 + ((j_425 + x8_242 * x22_2) << 2)
                                int64_t j_118
                                
                                do
                                    v0.d = *x8_243
                                    v1.d = *x9_135
                                    j_118 = j_332
                                    j_332 -= 1
                                    x8_243 = &x8_243[x12_71]
                                    v0.d = v0.d f+ v1.d
                                    *x9_135 = v0.d
                                    x9_135 = &x9_135[1]
                                while (j_118 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x3f)) != 0)
                        int64_t x8_246 = *x20_2
                        
                        if (x8_246 s>= 1)
                            int64_t x9_136 = *x6
                            int64_t x11_40 = *x7
                            int64_t x12_73 = x7[1]
                            int64_t j_426 = 0
                            
                            if (x8_246 u< 8 || x12_73 != 1)
                                goto label_c3edac
                            
                            int64_t x15_198 = x8_246 * x22_2
                            
                            if (x9_136 + (x15_198 << 2) u>= x11_40 + ((x8_246 + x10_19 + 0x11) << 2)
                                    || x9_136 + x8_246 * (x24_2 + 4)
                                    u<= x11_40 + ((x10_19 + 0x11) << 2))
                                j_426 = x8_246 & 0xfffffffffffffff8
                                void* x15_200 = x9_136 + (x15_198 << 2) + 0x10
                                void* x16_279 = x11_40 + ((x10_19 + 0x11) << 2) + 0x10
                                int64_t j_220 = j_426
                                int64_t j_119
                                
                                do
                                    v0 = *(x16_279 - 0x10)
                                    v1 = *x16_279
                                    v3 = *x15_200
                                    j_119 = j_220
                                    j_220 -= 8
                                    x16_279 += x12_73 << 5
                                    v0 = vaddq_f32(v0, *(x15_200 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_200 - 0x10) = v0
                                    *x15_200 = v1
                                    x15_200 += 0x20
                                while (j_119 != 8)
                                
                                if (x8_246 != j_426)
                                    goto label_c3edac
                            else
                                j_426 = 0
                            label_c3edac:
                                int64_t j_333 = x8_246 - j_426
                                int32_t* x8_247 = x11_40 + ((x10_19 + 0x11 + j_426 * x12_73) << 2)
                                int32_t* x9_137 = x9_136 + ((j_426 + x8_246 * x22_2) << 2)
                                int64_t j_120
                                
                                do
                                    v0.d = *x8_247
                                    v1.d = *x9_137
                                    j_120 = j_333
                                    j_333 -= 1
                                    x8_247 = &x8_247[x12_73]
                                    v0.d = v0.d f+ v1.d
                                    *x9_137 = v0.d
                                    x9_137 = &x9_137[1]
                                while (j_120 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x40)) != 0)
                        int64_t x8_250 = *x20_2
                        
                        if (x8_250 s>= 1)
                            int64_t x9_138 = *x6
                            int64_t x11_41 = *x7
                            int64_t x12_75 = x7[1]
                            int64_t j_427 = 0
                            
                            if (x8_250 u< 8 || x12_75 != 1)
                                goto label_c3ee94
                            
                            int64_t x15_201 = x8_250 * x22_2
                            
                            if (x9_138 + (x15_201 << 2) u>= x11_41 + ((x8_250 + x10_19 + 0x12) << 2)
                                    || x9_138 + x8_250 * (x24_2 + 4)
                                    u<= x11_41 + ((x10_19 + 0x12) << 2))
                                j_427 = x8_250 & 0xfffffffffffffff8
                                void* x15_203 = x9_138 + (x15_201 << 2) + 0x10
                                void* x16_284 = x11_41 + ((x10_19 + 0x12) << 2) + 0x10
                                int64_t j_221 = j_427
                                int64_t j_121
                                
                                do
                                    v0 = *(x16_284 - 0x10)
                                    v1 = *x16_284
                                    v3 = *x15_203
                                    j_121 = j_221
                                    j_221 -= 8
                                    x16_284 += x12_75 << 5
                                    v0 = vaddq_f32(v0, *(x15_203 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_203 - 0x10) = v0
                                    *x15_203 = v1
                                    x15_203 += 0x20
                                while (j_121 != 8)
                                
                                if (x8_250 != j_427)
                                    goto label_c3ee94
                            else
                                j_427 = 0
                            label_c3ee94:
                                int64_t j_334 = x8_250 - j_427
                                int32_t* x8_251 = x11_41 + ((x10_19 + 0x12 + j_427 * x12_75) << 2)
                                int32_t* x9_139 = x9_138 + ((j_427 + x8_250 * x22_2) << 2)
                                int64_t j_122
                                
                                do
                                    v0.d = *x8_251
                                    v1.d = *x9_139
                                    j_122 = j_334
                                    j_334 -= 1
                                    x8_251 = &x8_251[x12_75]
                                    v0.d = v0.d f+ v1.d
                                    *x9_139 = v0.d
                                    x9_139 = &x9_139[1]
                                while (j_122 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x41)) != 0)
                        int64_t x8_254 = *x20_2
                        
                        if (x8_254 s>= 1)
                            int64_t x9_140 = *x6
                            int64_t x11_42 = *x7
                            int64_t x12_77 = x7[1]
                            int64_t j_428 = 0
                            
                            if (x8_254 u< 8 || x12_77 != 1)
                                goto label_c3ef7c
                            
                            int64_t x15_204 = x8_254 * x22_2
                            
                            if (x9_140 + (x15_204 << 2) u>= x11_42 + ((x8_254 + x10_19 + 0x13) << 2)
                                    || x9_140 + x8_254 * (x24_2 + 4)
                                    u<= x11_42 + ((x10_19 + 0x13) << 2))
                                j_428 = x8_254 & 0xfffffffffffffff8
                                void* x15_206 = x9_140 + (x15_204 << 2) + 0x10
                                void* x16_289 = x11_42 + ((x10_19 + 0x13) << 2) + 0x10
                                int64_t j_222 = j_428
                                int64_t j_123
                                
                                do
                                    v0 = *(x16_289 - 0x10)
                                    v1 = *x16_289
                                    v3 = *x15_206
                                    j_123 = j_222
                                    j_222 -= 8
                                    x16_289 += x12_77 << 5
                                    v0 = vaddq_f32(v0, *(x15_206 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_206 - 0x10) = v0
                                    *x15_206 = v1
                                    x15_206 += 0x20
                                while (j_123 != 8)
                                
                                if (x8_254 != j_428)
                                    goto label_c3ef7c
                            else
                                j_428 = 0
                            label_c3ef7c:
                                int64_t j_335 = x8_254 - j_428
                                int32_t* x8_255 = x11_42 + ((x10_19 + 0x13 + j_428 * x12_77) << 2)
                                int32_t* x9_141 = x9_140 + ((j_428 + x8_254 * x22_2) << 2)
                                int64_t j_124
                                
                                do
                                    v0.d = *x8_255
                                    v1.d = *x9_141
                                    j_124 = j_335
                                    j_335 -= 1
                                    x8_255 = &x8_255[x12_77]
                                    v0.d = v0.d f+ v1.d
                                    *x9_141 = v0.d
                                    x9_141 = &x9_141[1]
                                while (j_124 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x42)) != 0)
                        int64_t x8_258 = *x20_2
                        
                        if (x8_258 s>= 1)
                            int64_t x9_142 = *x6
                            int64_t x11_43 = *x7
                            int64_t x12_79 = x7[1]
                            int64_t j_429 = 0
                            
                            if (x8_258 u< 8 || x12_79 != 1)
                                goto label_c3f064
                            
                            int64_t x15_207 = x8_258 * x22_2
                            
                            if (x9_142 + (x15_207 << 2) u>= x11_43 + ((x8_258 + x10_19 + 0x14) << 2)
                                    || x9_142 + x8_258 * (x24_2 + 4)
                                    u<= x11_43 + ((x10_19 + 0x14) << 2))
                                j_429 = x8_258 & 0xfffffffffffffff8
                                void* x15_209 = x9_142 + (x15_207 << 2) + 0x10
                                void* x16_294 = x11_43 + ((x10_19 + 0x14) << 2) + 0x10
                                int64_t j_223 = j_429
                                int64_t j_125
                                
                                do
                                    v0 = *(x16_294 - 0x10)
                                    v1 = *x16_294
                                    v3 = *x15_209
                                    j_125 = j_223
                                    j_223 -= 8
                                    x16_294 += x12_79 << 5
                                    v0 = vaddq_f32(v0, *(x15_209 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_209 - 0x10) = v0
                                    *x15_209 = v1
                                    x15_209 += 0x20
                                while (j_125 != 8)
                                
                                if (x8_258 != j_429)
                                    goto label_c3f064
                            else
                                j_429 = 0
                            label_c3f064:
                                int64_t j_336 = x8_258 - j_429
                                int32_t* x8_259 = x11_43 + ((x10_19 + 0x14 + j_429 * x12_79) << 2)
                                int32_t* x9_143 = x9_142 + ((j_429 + x8_258 * x22_2) << 2)
                                int64_t j_126
                                
                                do
                                    v0.d = *x8_259
                                    v1.d = *x9_143
                                    j_126 = j_336
                                    j_336 -= 1
                                    x8_259 = &x8_259[x12_79]
                                    v0.d = v0.d f+ v1.d
                                    *x9_143 = v0.d
                                    x9_143 = &x9_143[1]
                                while (j_126 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x43)) != 0)
                        int64_t x8_262 = *x20_2
                        
                        if (x8_262 s>= 1)
                            int64_t x9_144 = *x6
                            int64_t x11_44 = *x7
                            int64_t x12_81 = x7[1]
                            int64_t j_430 = 0
                            
                            if (x8_262 u< 8 || x12_81 != 1)
                                goto label_c3f14c
                            
                            int64_t x15_210 = x8_262 * x22_2
                            
                            if (x9_144 + (x15_210 << 2) u>= x11_44 + ((x8_262 + x10_19 + 0x15) << 2)
                                    || x9_144 + x8_262 * (x24_2 + 4)
                                    u<= x11_44 + ((x10_19 + 0x15) << 2))
                                j_430 = x8_262 & 0xfffffffffffffff8
                                void* x15_212 = x9_144 + (x15_210 << 2) + 0x10
                                void* x16_299 = x11_44 + ((x10_19 + 0x15) << 2) + 0x10
                                int64_t j_224 = j_430
                                int64_t j_127
                                
                                do
                                    v0 = *(x16_299 - 0x10)
                                    v1 = *x16_299
                                    v3 = *x15_212
                                    j_127 = j_224
                                    j_224 -= 8
                                    x16_299 += x12_81 << 5
                                    v0 = vaddq_f32(v0, *(x15_212 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_212 - 0x10) = v0
                                    *x15_212 = v1
                                    x15_212 += 0x20
                                while (j_127 != 8)
                                
                                if (x8_262 != j_430)
                                    goto label_c3f14c
                            else
                                j_430 = 0
                            label_c3f14c:
                                int64_t j_337 = x8_262 - j_430
                                int32_t* x8_263 = x11_44 + ((x10_19 + 0x15 + j_430 * x12_81) << 2)
                                int32_t* x9_145 = x9_144 + ((j_430 + x8_262 * x22_2) << 2)
                                int64_t j_128
                                
                                do
                                    v0.d = *x8_263
                                    v1.d = *x9_145
                                    j_128 = j_337
                                    j_337 -= 1
                                    x8_263 = &x8_263[x12_81]
                                    v0.d = v0.d f+ v1.d
                                    *x9_145 = v0.d
                                    x9_145 = &x9_145[1]
                                while (j_128 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x44)) != 0)
                        int64_t x8_266 = *x20_2
                        
                        if (x8_266 s>= 1)
                            int64_t x9_146 = *x6
                            int64_t x11_45 = *x7
                            int64_t x12_83 = x7[1]
                            int64_t j_431 = 0
                            
                            if (x8_266 u< 8 || x12_83 != 1)
                                goto label_c3f234
                            
                            int64_t x15_213 = x8_266 * x22_2
                            
                            if (x9_146 + (x15_213 << 2) u>= x11_45 + ((x8_266 + x10_19 + 0x16) << 2)
                                    || x9_146 + x8_266 * (x24_2 + 4)
                                    u<= x11_45 + ((x10_19 + 0x16) << 2))
                                j_431 = x8_266 & 0xfffffffffffffff8
                                void* x15_215 = x9_146 + (x15_213 << 2) + 0x10
                                void* x16_304 = x11_45 + ((x10_19 + 0x16) << 2) + 0x10
                                int64_t j_225 = j_431
                                int64_t j_129
                                
                                do
                                    v0 = *(x16_304 - 0x10)
                                    v1 = *x16_304
                                    v3 = *x15_215
                                    j_129 = j_225
                                    j_225 -= 8
                                    x16_304 += x12_83 << 5
                                    v0 = vaddq_f32(v0, *(x15_215 - 0x10))
                                    v1 = vaddq_f32(v1, v3)
                                    *(x15_215 - 0x10) = v0
                                    *x15_215 = v1
                                    x15_215 += 0x20
                                while (j_129 != 8)
                                
                                if (x8_266 != j_431)
                                    goto label_c3f234
                            else
                                j_431 = 0
                            label_c3f234:
                                int64_t j_338 = x8_266 - j_431
                                int32_t* x8_267 = x11_45 + ((x10_19 + 0x16 + j_431 * x12_83) << 2)
                                int32_t* x9_147 = x9_146 + ((j_431 + x8_266 * x22_2) << 2)
                                int64_t j_130
                                
                                do
                                    v0.d = *x8_267
                                    v1.d = *x9_147
                                    j_130 = j_338
                                    j_338 -= 1
                                    x8_267 = &x8_267[x12_83]
                                    v0.d = v0.d f+ v1.d
                                    *x9_147 = v0.d
                                    x9_147 = &x9_147[1]
                                while (j_130 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x45)) != 0)
                        int64_t x8_270 = *x20_2
                        
                        if (x8_270 s>= 1)
                            int64_t x9_148 = *x6
                            int64_t x11_46 = *x7
                            int64_t x12_85 = x7[1]
                            int64_t j_432 = 0
                            
                            if (x8_270 u< 8 || x12_85 != 1)
                                goto label_c3f31c
                            
                            int64_t x15_216 = x8_270 * x22_2
                            
                            if (x9_148 + (x15_216 << 2) u>= x11_46 + ((x8_270 + x10_19 + 0x17) << 2)
                                    || x9_148 + x8_270 * (x24_2 + 4)
                                    u<= x11_46 + ((x10_19 + 0x17) << 2))
                                j_432 = x8_270 & 0xfffffffffffffff8
                                int128_t* x15_218 = x9_148 + (x15_216 << 2) + 0x10
                                void* x16_309 = x11_46 + ((x10_19 + 0x17) << 2) + 0x10
                                int64_t j_226 = j_432
                                int64_t j_131
                                
                                do
                                    v0 = *(x16_309 - 0x10)
                                    v1 = *x16_309
                                    v3 = *x15_218
                                    j_131 = j_226
                                    j_226 -= 8
                                    x16_309 += x12_85 << 5
                                    v0 = vaddq_f32(v0, x15_218[-1])
                                    v1 = vaddq_f32(v1, v3)
                                    x15_218[-1] = v0
                                    *x15_218 = v1
                                    x15_218 = &x15_218[2]
                                while (j_131 != 8)
                                
                                if (x8_270 != j_432)
                                    goto label_c3f31c
                            else
                                j_432 = 0
                            label_c3f31c:
                                int64_t j_339 = x8_270 - j_432
                                int32_t* x8_271 = x11_46 + ((x10_19 + 0x17 + j_432 * x12_85) << 2)
                                int32_t* x9_149 = x9_148 + ((j_432 + x8_270 * x22_2) << 2)
                                int64_t j_132
                                
                                do
                                    v0.d = *x8_271
                                    v1.d = *x9_149
                                    j_132 = j_339
                                    j_339 -= 1
                                    x8_271 = &x8_271[x12_85]
                                    v0.d = v0.d f+ v1.d
                                    *x9_149 = v0.d
                                    x9_149 = &x9_149[1]
                                while (j_132 != 1)
                    
                    if (zx.d(*(fp + i * 0x68 + 0x46)) != 0)
                        int64_t x8_274 = *x20_2
                        
                        if (x8_274 s>= 1)
                            int64_t x9_150 = *x6
                            int64_t x11_47 = *x7
                            int64_t x12_87 = x7[1]
                            int64_t j_433 = 0
                            int64_t x13_129 = sx.q(x10_19.d + 0x18)
                            
                            if (x8_274 u< 8 || x12_87 != 1)
                                goto label_c3f408
                            
                            int64_t x16_310 = x8_274 * x22_2
                            
                            if (x9_150 + (x16_310 << 2) u>= x11_47 + ((x8_274 + x13_129) << 2)
                                    || x9_150 + x8_274 * (x24_2 + 4)
                                    u<= x11_47 + (sx.q(x10_19.d + 0x18) << 2))
                                j_433 = x8_274 & 0xfffffffffffffff8
                                int128_t* x15_223 = x9_150 + (x16_310 << 2) + 0x10
                                void* x16_312 = x11_47 + (x13_129 << 2) + 0x10
                                int64_t j_227 = j_433
                                int64_t j_133
                                
                                do
                                    v0 = *(x16_312 - 0x10)
                                    v1 = *x16_312
                                    v3 = *x15_223
                                    j_133 = j_227
                                    j_227 -= 8
                                    x16_312 += x12_87 << 5
                                    v0 = vaddq_f32(v0, x15_223[-1])
                                    v1 = vaddq_f32(v1, v3)
                                    x15_223[-1] = v0
                                    *x15_223 = v1
                                    x15_223 = &x15_223[2]
                                while (j_133 != 8)
                                
                                if (x8_274 != j_433)
                                    goto label_c3f408
                            else
                                j_433 = 0
                            label_c3f408:
                                int64_t j_340 = x8_274 - j_433
                                int32_t* x8_275 = x11_47 + ((x13_129 + j_433 * x12_87) << 2)
                                int32_t* x9_151 = x9_150 + ((j_433 + x8_274 * x22_2) << 2)
                                int64_t j_134
                                
                                do
                                    v0.d = *x8_275
                                    v1.d = *x9_151
                                    j_134 = j_340
                                    j_340 -= 1
                                    x8_275 = &x8_275[x12_87]
                                    v0.d = v0.d f+ v1.d
                                    *x9_151 = v0.d
                                    x9_151 = &x9_151[1]
                                while (j_134 != 1)
                    
                    x9_125 = *x21_1
                    x11_33 = zx.q(x10_19.d + 0x19)
            
            int64_t fp_1 = sx.q(x11_33.d)
            int64_t x12_89 = 0
            int32_t lr_1 = x11_33.d + 1
            int32_t x19_2 = x11_33.d + 2
            int32_t x7_1 = x11_33.d + 3
            int32_t x22_3 = x11_33.d + 5
            int32_t x21_2 = x11_33.d + 6
            int32_t x28_1 = x11_33.d + 7
            int32_t x27_2 = x11_33.d + 8
            int32_t x24_3 = x11_33.d + 9
            int32_t x23_1 = x11_33.d + 0xa
            int32_t x17_166 = x11_33.d + 0xb
            int32_t x16_313 = x11_33.d + 0xc
            int32_t x15_224 = x11_33.d + 0xd
            int32_t x13_131 = x11_33.d + 0xe
            int32_t x14_207 = x11_33.d + 0xf
            int64_t x25_3
            
            x25_3 = x9_125 s< 0xe ? 0x12 : 0x14
            
            int64_t x26_1 = fp_1 + 4
            int32_t x11_48 = x11_33.d + 0x10
            var_570 = fp_1
            int32_t var_4e8
            int32_t x0_125
            int32_t x1_23
            int32_t x2_6
            int32_t x3_7
            int32_t x4_2
            int32_t x5
            int32_t x6_1
            int32_t x8_281
            int32_t x9_152
            int32_t x20_5
            
            do
                x20_5 = lr_1
                x4_2 = x21_2
                x9_152 = x19_2
                x8_281 = x7_1
                var_4b0.d = x17_166
                var_4c0 = x16_313
                var_4e0 = x15_224
                var_500 = x13_131
                var_4e8 = x14_207
                var_4c8 = x11_48
                
                if (zx.d(*(var_510 + i * 0x68 + x12_89 + 0x47)) != 0)
                    int64_t x15_225 = *var_530
                    
                    if (x15_225 s>= 1)
                        int64_t j_381 = 0
                        int64_t x13_132 = *var_550
                        int64_t x16_314 = *var_560
                        int64_t x17_167 = var_560[1]
                        
                        if (x15_225 u< 8 || x17_167 != 1)
                            goto label_c3f654
                        
                        if (x13_132 + ((x15_225 * x22_2) << 2)
                                u>= x16_314 + ((x15_225 + x12_89 + var_570) << 2)
                                || x13_132 + (x24_2 + 4) * x15_225 u<= x16_314 + (fp_1 << 2))
                            j_381 = x15_225 & 0xfffffffffffffff8
                            void* x14_209 = x16_314 + (x26_1 << 2)
                            void* x0_126 = x13_132 + ((x22_2 * x15_225) << 2) + 0x10
                            int64_t j_261 = j_381
                            int64_t j_135
                            
                            do
                                v0 = *(x14_209 - 0x10)
                                v1 = *x14_209
                                v3 = *x0_126
                                j_135 = j_261
                                j_261 -= 8
                                x14_209 += x17_167 << 5
                                v0 = vaddq_f32(v0, *(x0_126 - 0x10))
                                v1 = vaddq_f32(v1, v3)
                                *(x0_126 - 0x10) = v0
                                *x0_126 = v1
                                x0_126 += 0x20
                            while (j_135 != 8)
                            
                            if (x15_225 != j_381)
                                goto label_c3f654
                        else
                            j_381 = 0
                        label_c3f654:
                            int64_t j_292 = x15_225 - j_381
                            int32_t* x11_53 = x16_314 + ((fp_1 + j_381 * x17_167) << 2)
                            int32_t* x13_133 = x13_132 + ((j_381 + x22_2 * x15_225) << 2)
                            int64_t j_136
                            
                            do
                                v0.d = *x11_53
                                v1.d = *x13_133
                                j_136 = j_292
                                j_292 -= 1
                                x11_53 = &x11_53[x17_167]
                                v0.d = v0.d f+ v1.d
                                *x13_133 = v0.d
                                x13_133 = &x13_133[1]
                            while (j_136 != 1)
                
                x12_89 += 1
                fp_1 += 1
                x6_1 = x26_1.d
                x17_166 = var_4b0.d + 1
                x26_1 += 1
                lr_1 = x20_5 + 1
                x19_2 = x9_152 + 1
                x16_313 = var_4c0 + 1
                x7_1 = x8_281 + 1
                x5 = x22_3
                x22_3 += 1
                x15_224 = var_4e0 + 1
                x21_2 = x4_2 + 1
                x3_7 = x28_1
                x28_1 += 1
                x13_131 = var_500 + 1
                x2_6 = x27_2
                x27_2 += 1
                x1_23 = x24_3
                x14_207 = var_4e8 + 1
                x24_3 += 1
                x0_125 = x23_1
                x23_1 += 1
                x11_48 = var_4c8 + 1
            while (x12_89 != x25_3)
            
            int32_t x10_40 = *var_590
            x4 = var_5c8
            x7 = var_560
            x6 = var_550
            int64_t x13_134 = sx.q(fp_1.d)
            int32_t x12_90 = x10_40 s< 0xf ? 1 : 0
            int64_t x13_135
            
            if (x10_40 s< 0xf)
                x13_135 = x13_134 + 1
            else
                x13_135 = x13_134
            
            if (zx.d(*(var_510 + i * 0x68 + 0x6a)) != 0)
                int64_t x0_128 = *var_530
                
                if (x0_128 s>= 1)
                    int64_t x17_169 = *x6
                    int64_t x16_315 = *x7
                    int64_t x1_25 = x7[1]
                    int64_t j_382 = 0
                    
                    if (x0_128 u< 8 || x1_25 != 1)
                        goto label_c3f7a8
                    
                    int64_t x14_210 = x0_128 * x22_2
                    
                    if (x17_169 + (x14_210 << 2) u>= x16_315 + ((x0_128 + sx.q(x13_135.d)) << 2)
                            || x17_169 + x0_128 * (x24_2 + 4) u<= x16_315 + (sx.q(x13_135.d) << 2))
                        j_382 = x0_128 & 0xfffffffffffffff8
                        void* x14_211 = x17_169 + (x14_210 << 2) + 0x10
                        void* x15_228 = x16_315 + (sx.q(x12_90 + x20_5) << 2) + 0x10
                        int64_t j_268 = j_382
                        int64_t j_137
                        
                        do
                            v0 = *(x15_228 - 0x10)
                            v1 = *x15_228
                            v3 = *x14_211
                            j_137 = j_268
                            j_268 -= 8
                            x15_228 += x1_25 << 5
                            v0 = vaddq_f32(v0, *(x14_211 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x14_211 - 0x10) = v0
                            *x14_211 = v1
                            x14_211 += 0x20
                        while (j_137 != 8)
                        
                        if (x0_128 != j_382)
                            goto label_c3f7a8
                    else
                        j_382 = 0
                    label_c3f7a8:
                        int64_t j_293 = x0_128 - j_382
                        int32_t* x11_60 =
                            x16_315 + ((j_382 * x1_25) << 2) + (sx.q(x12_90 + x20_5) << 2)
                        int32_t* x16_316 = x17_169 + ((j_382 + x0_128 * x22_2) << 2)
                        int64_t j_138
                        
                        do
                            v0.d = *x11_60
                            v1.d = *x16_316
                            j_138 = j_293
                            j_293 -= 1
                            x11_60 = &x11_60[x1_25]
                            v0.d = v0.d f+ v1.d
                            *x16_316 = v0.d
                            x16_316 = &x16_316[1]
                        while (j_138 != 1)
            
            x20_2 = var_530
            
            if (zx.d(*(var_510 + i * 0x68 + 0x6b)) != 0)
                int64_t x0_130 = *x20_2
                
                if (x0_130 s>= 1)
                    int64_t x16_317 = *x6
                    int64_t x17_170 = *x7
                    int64_t x15_230 = x7[1]
                    int64_t j_383 = 0
                    
                    if (x0_130 u< 8 || x15_230 != 1)
                        goto label_c3f8c8
                    
                    int64_t x14_212 = x0_130 * x22_2
                    
                    if (x16_317 + (x14_212 << 2) u>= x17_170 + ((x0_130 + x13_135 + 1) << 2)
                            || x16_317 + x0_130 * (x24_2 + 4) u<= x17_170 + ((x13_135 + 1) << 2))
                        j_383 = x0_130 & 0xfffffffffffffff8
                        void* x14_213 = x16_317 + (x14_212 << 2) + 0x10
                        void* x1_29 = x17_170 + (sx.q(x12_90 + x9_152) << 2) + 0x10
                        int64_t j_269 = j_383
                        int64_t j_139
                        
                        do
                            v0 = *(x1_29 - 0x10)
                            v1 = *x1_29
                            v3 = *x14_213
                            j_139 = j_269
                            j_269 -= 8
                            x1_29 += x15_230 << 5
                            v0 = vaddq_f32(v0, *(x14_213 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x14_213 - 0x10) = v0
                            *x14_213 = v1
                            x14_213 += 0x20
                        while (j_139 != 8)
                        
                        if (x0_130 != j_383)
                            goto label_c3f8c8
                    else
                        j_383 = 0
                    label_c3f8c8:
                        int64_t j_294 = x0_130 - j_383
                        int32_t* x11_64 =
                            x17_170 + ((j_383 * x15_230) << 2) + (sx.q(x12_90 + x9_152) << 2)
                        int32_t* x15_232 = x16_317 + ((j_383 + x0_130 * x22_2) << 2)
                        int64_t j_140
                        
                        do
                            v0.d = *x11_64
                            v1.d = *x15_232
                            j_140 = j_294
                            j_294 -= 1
                            x11_64 = &x11_64[x15_230]
                            v0.d = v0.d f+ v1.d
                            *x15_232 = v0.d
                            x15_232 = &x15_232[1]
                        while (j_140 != 1)
            
            int32_t x1_31 = x1_23
            
            if (zx.d(*(var_510 + i * 0x68 + 0x6c)) != 0)
                int64_t x9_157 = *x20_2
                
                if (x9_157 s>= 1)
                    int64_t x17_171 = *x6
                    int64_t x16_318 = *x7
                    int64_t x0_131 = x7[1]
                    int64_t j_384 = 0
                    
                    if (x9_157 u< 8 || x0_131 != 1)
                        goto label_c3f9c8
                    
                    int64_t x14_214 = x9_157 * x22_2
                    
                    if (x17_171 + (x14_214 << 2) u>= x16_318 + ((x9_157 + sx.q(x13_135.d) + 2) << 2)
                            || x17_171 + x9_157 * (x24_2 + 4)
                            u<= x16_318 + ((sx.q(x13_135.d) + 2) << 2))
                        j_384 = x9_157 & 0xfffffffffffffff8
                        void* x14_215 = x17_171 + (x14_214 << 2) + 0x10
                        void* x15_236 = x16_318 + (sx.q(x12_90 + x8_281) << 2) + 0x10
                        int64_t j_262 = j_384
                        int64_t j_141
                        
                        do
                            v0 = *(x15_236 - 0x10)
                            v1 = *x15_236
                            v3 = *x14_215
                            j_141 = j_262
                            j_262 -= 8
                            x15_236 += x0_131 << 5
                            v0 = vaddq_f32(v0, *(x14_215 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x14_215 - 0x10) = v0
                            *x14_215 = v1
                            x14_215 += 0x20
                        while (j_141 != 8)
                        x1_31 = x1_23
                        
                        if (x9_157 != j_384)
                            goto label_c3f9c8
                    else
                        j_384 = 0
                    label_c3f9c8:
                        int64_t j_295 = x9_157 - j_384
                        int32_t* x9_159 =
                            x16_318 + ((j_384 * x0_131) << 2) + (sx.q(x12_90 + x8_281) << 2)
                        x1_31 = x1_23
                        int32_t* x11_69 = x17_171 + ((j_384 + x9_157 * x22_2) << 2)
                        int64_t j_142
                        
                        do
                            v0.d = *x9_159
                            v1.d = *x11_69
                            j_142 = j_295
                            j_295 -= 1
                            x9_159 = &x9_159[x0_131]
                            v0.d = v0.d f+ v1.d
                            *x11_69 = v0.d
                            x11_69 = &x11_69[1]
                        while (j_142 != 1)
            
            int32_t x24_6 = var_4b0.d
            
            if (zx.d(*(var_510 + i * 0x68 + 0x6d)) != 0)
                int64_t x9_163 = *x20_2
                
                if (x9_163 s>= 1)
                    int64_t x17_172 = *x6
                    int64_t x0_132 = *x7
                    int64_t x16_319 = x7[1]
                    int64_t j_385 = 0
                    
                    if (x9_163 u< 8 || x16_319 != 1)
                        goto label_c3fae4
                    
                    int64_t x14_216 = x9_163 * x22_2
                    
                    if (x17_172 + (x14_216 << 2) u>= x0_132 + ((x9_163 + sx.q(x13_135.d) + 3) << 2)
                            || x17_172 + x9_163 * (x24_2 + 4)
                            u<= x0_132 + ((sx.q(x13_135.d) + 3) << 2))
                        j_385 = x9_163 & 0xfffffffffffffff8
                        void* x14_217 = x17_172 + (x14_216 << 2) + 0x10
                        void* x15_241 = x0_132 + (sx.q(x12_90 + x6_1) << 2) + 0x10
                        int64_t j_263 = j_385
                        int64_t j_143
                        
                        do
                            v0 = *(x15_241 - 0x10)
                            v1 = *x15_241
                            v3 = *x14_217
                            j_143 = j_263
                            j_263 -= 8
                            x15_241 += x16_319 << 5
                            v0 = vaddq_f32(v0, *(x14_217 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x14_217 - 0x10) = v0
                            *x14_217 = v1
                            x14_217 += 0x20
                        while (j_143 != 8)
                        x1_31 = x1_23
                        
                        if (x9_163 != j_385)
                            goto label_c3fae4
                    else
                        j_385 = 0
                    label_c3fae4:
                        int64_t j_296 = x9_163 - j_385
                        int32_t* x9_165 =
                            x0_132 + ((j_385 * x16_319) << 2) + (sx.q(x12_90 + x6_1) << 2)
                        x1_31 = x1_23
                        int32_t* x11_74 = x17_172 + ((j_385 + x9_163 * x22_2) << 2)
                        int64_t j_144
                        
                        do
                            v0.d = *x9_165
                            v1.d = *x11_74
                            j_144 = j_296
                            j_296 -= 1
                            x9_165 = &x9_165[x16_319]
                            v0.d = v0.d f+ v1.d
                            *x11_74 = v0.d
                            x11_74 = &x11_74[1]
                        while (j_144 != 1)
            
            if (zx.d(*(var_510 + i * 0x68 + 0x6e)) != 0)
                int64_t x9_169 = *x20_2
                
                if (x9_169 s>= 1)
                    int64_t x17_173 = *x6
                    int64_t x16_320 = *x7
                    int64_t x0_133 = x7[1]
                    int64_t j_386 = 0
                    
                    if (x9_169 u< 8 || x0_133 != 1)
                        goto label_c3fbfc
                    
                    int64_t x14_218 = x9_169 * x22_2
                    
                    if (x17_173 + (x14_218 << 2) u>= x16_320 + ((x9_169 + sx.q(x13_135.d) + 4) << 2)
                            || x17_173 + x9_169 * (x24_2 + 4)
                            u<= x16_320 + ((sx.q(x13_135.d) + 4) << 2))
                        j_386 = x9_169 & 0xfffffffffffffff8
                        void* x14_219 = x17_173 + (x14_218 << 2) + 0x10
                        void* x15_246 = x16_320 + (sx.q(x12_90 + x5) << 2) + 0x10
                        int64_t j_264 = j_386
                        int64_t j_145
                        
                        do
                            v0 = *(x15_246 - 0x10)
                            v1 = *x15_246
                            v3 = *x14_219
                            j_145 = j_264
                            j_264 -= 8
                            x15_246 += x0_133 << 5
                            v0 = vaddq_f32(v0, *(x14_219 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x14_219 - 0x10) = v0
                            *x14_219 = v1
                            x14_219 += 0x20
                        while (j_145 != 8)
                        x1_31 = x1_23
                        
                        if (x9_169 != j_386)
                            goto label_c3fbfc
                    else
                        j_386 = 0
                    label_c3fbfc:
                        int64_t j_297 = x9_169 - j_386
                        int32_t* x9_171 =
                            x16_320 + ((j_386 * x0_133) << 2) + (sx.q(x12_90 + x5) << 2)
                        x1_31 = x1_23
                        int32_t* x11_79 = x17_173 + ((j_386 + x9_169 * x22_2) << 2)
                        int64_t j_146
                        
                        do
                            v0.d = *x9_171
                            v1.d = *x11_79
                            j_146 = j_297
                            j_297 -= 1
                            x9_171 = &x9_171[x0_133]
                            v0.d = v0.d f+ v1.d
                            *x11_79 = v0.d
                            x11_79 = &x11_79[1]
                        while (j_146 != 1)
            
            if (zx.d(*(var_510 + i * 0x68 + 0x6f)) != 0)
                int64_t x9_175 = *x20_2
                
                if (x9_175 s>= 1)
                    int64_t x17_174 = *x6
                    int64_t x16_321 = *x7
                    int64_t x0_134 = x7[1]
                    int64_t j_387 = 0
                    
                    if (x9_175 u< 8 || x0_134 != 1)
                        goto label_c3fd10
                    
                    int64_t x14_220 = x9_175 * x22_2
                    
                    if (x17_174 + (x14_220 << 2) u>= x16_321 + ((x9_175 + sx.q(x13_135.d) + 5) << 2)
                            || x17_174 + x9_175 * (x24_2 + 4)
                            u<= x16_321 + ((sx.q(x13_135.d) + 5) << 2))
                        j_387 = x9_175 & 0xfffffffffffffff8
                        void* x14_221 = x17_174 + (x14_220 << 2) + 0x10
                        void* x15_251 = x16_321 + (sx.q(x12_90 + x4_2) << 2) + 0x10
                        int64_t j_265 = j_387
                        int64_t j_147
                        
                        do
                            v0 = *(x15_251 - 0x10)
                            v1 = *x15_251
                            v3 = *x14_221
                            j_147 = j_265
                            j_265 -= 8
                            x15_251 += x0_134 << 5
                            v0 = vaddq_f32(v0, *(x14_221 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x14_221 - 0x10) = v0
                            *x14_221 = v1
                            x14_221 += 0x20
                        while (j_147 != 8)
                        x1_31 = x1_23
                        
                        if (x9_175 != j_387)
                            goto label_c3fd10
                    else
                        j_387 = 0
                    label_c3fd10:
                        int64_t j_298 = x9_175 - j_387
                        int32_t* x9_177 =
                            x16_321 + ((j_387 * x0_134) << 2) + (sx.q(x12_90 + x4_2) << 2)
                        x1_31 = x1_23
                        int32_t* x11_84 = x17_174 + ((j_387 + x9_175 * x22_2) << 2)
                        int64_t j_148
                        
                        do
                            v0.d = *x9_177
                            v1.d = *x11_84
                            j_148 = j_298
                            j_298 -= 1
                            x9_177 = &x9_177[x0_134]
                            v0.d = v0.d f+ v1.d
                            *x11_84 = v0.d
                            x11_84 = &x11_84[1]
                        while (j_148 != 1)
            
            if (zx.d(*(var_510 + i * 0x68 + 0x70)) != 0)
                int64_t x9_181 = *x20_2
                
                if (x9_181 s>= 1)
                    int64_t x17_175 = *x6
                    int64_t x16_322 = *x7
                    int64_t x0_135 = x7[1]
                    int64_t j_388 = 0
                    
                    if (x9_181 u< 8 || x0_135 != 1)
                        goto label_c3fe24
                    
                    int64_t x14_222 = x9_181 * x22_2
                    
                    if (x17_175 + (x14_222 << 2) u>= x16_322 + ((x9_181 + sx.q(x13_135.d) + 6) << 2)
                            || x17_175 + x9_181 * (x24_2 + 4)
                            u<= x16_322 + ((sx.q(x13_135.d) + 6) << 2))
                        j_388 = x9_181 & 0xfffffffffffffff8
                        int128_t* x14_223 = x17_175 + (x14_222 << 2) + 0x10
                        void* x15_256 = x16_322 + (sx.q(x12_90 + x3_7) << 2) + 0x10
                        int64_t j_266 = j_388
                        int64_t j_149
                        
                        do
                            v0 = *(x15_256 - 0x10)
                            v1 = *x15_256
                            v3 = *x14_223
                            j_149 = j_266
                            j_266 -= 8
                            x15_256 += x0_135 << 5
                            v0 = vaddq_f32(v0, x14_223[-1])
                            v1 = vaddq_f32(v1, v3)
                            x14_223[-1] = v0
                            *x14_223 = v1
                            x14_223 = &x14_223[2]
                        while (j_149 != 8)
                        x1_31 = x1_23
                        
                        if (x9_181 != j_388)
                            goto label_c3fe24
                    else
                        j_388 = 0
                    label_c3fe24:
                        int64_t j_299 = x9_181 - j_388
                        int32_t* x9_183 =
                            x16_322 + ((j_388 * x0_135) << 2) + (sx.q(x12_90 + x3_7) << 2)
                        int32_t* x11_89 = x17_175 + ((j_388 + x9_181 * x22_2) << 2)
                        int64_t j_150
                        
                        do
                            v0.d = *x9_183
                            v1.d = *x11_89
                            j_150 = j_299
                            j_299 -= 1
                            x9_183 = &x9_183[x0_135]
                            v0.d = v0.d f+ v1.d
                            *x11_89 = v0.d
                            x11_89 = &x11_89[1]
                        while (j_150 != 1)
            
            int32_t x0_136 = x0_125
            
            if (zx.d(*(var_510 + i * 0x68 + 0x71)) != 0)
                int64_t x8_290 = *x20_2
                
                if (x8_290 s>= 1)
                    int64_t x9_184 = *x6
                    int64_t x16_323 = *x7
                    int64_t x17_176 = x7[1]
                    int64_t j_389 = 0
                    
                    if (x8_290 u< 8 || x17_176 != 1)
                        goto label_c3ff30
                    
                    int64_t x14_224 = x8_290 * x22_2
                    
                    if (x9_184 + (x14_224 << 2) u>= x16_323 + ((x8_290 + sx.q(x13_135.d) + 7) << 2)
                            || x9_184 + x8_290 * (x24_2 + 4)
                            u<= x16_323 + ((sx.q(x13_135.d) + 7) << 2))
                        j_389 = x8_290 & 0xfffffffffffffff8
                        int128_t* x14_225 = x9_184 + (x14_224 << 2) + 0x10
                        void* x15_261 = x16_323 + (sx.q(x12_90 + x2_6) << 2) + 0x10
                        int64_t j_244 = j_389
                        int64_t j_151
                        
                        do
                            v0 = *(x15_261 - 0x10)
                            v1 = *x15_261
                            v3 = *x14_225
                            j_151 = j_244
                            j_244 -= 8
                            x15_261 += x17_176 << 5
                            v0 = vaddq_f32(v0, x14_225[-1])
                            v1 = vaddq_f32(v1, v3)
                            x14_225[-1] = v0
                            *x14_225 = v1
                            x14_225 = &x14_225[2]
                        while (j_151 != 8)
                        x0_136 = x0_125
                        x1_31 = x1_23
                        
                        if (x8_290 != j_389)
                            goto label_c3ff30
                    else
                        j_389 = 0
                    label_c3ff30:
                        int64_t j_300 = x8_290 - j_389
                        int32_t* x8_292 =
                            x16_323 + ((j_389 * x17_176) << 2) + (sx.q(x12_90 + x2_6) << 2)
                        x0_136 = x0_125
                        int32_t* x9_185 = x9_184 + ((j_389 + x8_290 * x22_2) << 2)
                        int64_t j_152
                        
                        do
                            v0.d = *x8_292
                            v1.d = *x9_185
                            j_152 = j_300
                            j_300 -= 1
                            x8_292 = &x8_292[x17_176]
                            v0.d = v0.d f+ v1.d
                            *x9_185 = v0.d
                            x9_185 = &x9_185[1]
                        while (j_152 != 1)
            
            if (zx.d(*(var_510 + i * 0x68 + 0x72)) != 0)
                int64_t x8_296 = *x20_2
                
                if (x8_296 s>= 1)
                    int64_t x9_186 = *x6
                    int64_t x16_324 = *x7
                    int64_t x17_177 = x7[1]
                    int64_t j_390 = 0
                    
                    if (x8_296 u< 8 || x17_177 != 1)
                        goto label_c40040
                    
                    int64_t x14_226 = x8_296 * x22_2
                    
                    if (x9_186 + (x14_226 << 2) u>= x16_324 + ((x8_296 + sx.q(x13_135.d) + 8) << 2)
                            || x9_186 + x8_296 * (x24_2 + 4)
                            u<= x16_324 + ((sx.q(x13_135.d) + 8) << 2))
                        j_390 = x8_296 & 0xfffffffffffffff8
                        int128_t* x14_227 = x9_186 + (x14_226 << 2) + 0x10
                        void* x15_266 = x16_324 + (sx.q(x12_90 + x1_31) << 2) + 0x10
                        int64_t j_245 = j_390
                        int64_t j_153
                        
                        do
                            v0 = *(x15_266 - 0x10)
                            v1 = *x15_266
                            v3 = *x14_227
                            j_153 = j_245
                            j_245 -= 8
                            x15_266 += x17_177 << 5
                            v0 = vaddq_f32(v0, x14_227[-1])
                            v1 = vaddq_f32(v1, v3)
                            x14_227[-1] = v0
                            *x14_227 = v1
                            x14_227 = &x14_227[2]
                        while (j_153 != 8)
                        x0_136 = x0_125
                        x1_31 = x1_23
                        
                        if (x8_296 != j_390)
                            goto label_c40040
                    else
                        j_390 = 0
                    label_c40040:
                        int64_t j_301 = x8_296 - j_390
                        int32_t* x8_298 =
                            x16_324 + ((j_390 * x17_177) << 2) + (sx.q(x12_90 + x1_31) << 2)
                        x0_136 = x0_125
                        int32_t* x9_187 = x9_186 + ((j_390 + x8_296 * x22_2) << 2)
                        int64_t j_154
                        
                        do
                            v0.d = *x8_298
                            v1.d = *x9_187
                            j_154 = j_301
                            j_301 -= 1
                            x8_298 = &x8_298[x17_177]
                            v0.d = v0.d f+ v1.d
                            *x9_187 = v0.d
                            x9_187 = &x9_187[1]
                        while (j_154 != 1)
            
            fp = var_510
            
            if (zx.d(*(fp + i * 0x68 + 0x73)) != 0)
                int64_t x8_301 = *x20_2
                
                if (x8_301 s>= 1)
                    int64_t x9_188 = *x6
                    int64_t x16_325 = *x7
                    int64_t x17_178 = x7[1]
                    int64_t j_391 = 0
                    
                    if (x8_301 u< 8 || x17_178 != 1)
                        goto label_c4014c
                    
                    int64_t x14_228 = x8_301 * x22_2
                    
                    if (x9_188 + (x14_228 << 2) u>= x16_325 + ((x8_301 + sx.q(x13_135.d) + 9) << 2)
                            || x9_188 + x8_301 * (x24_2 + 4)
                            u<= x16_325 + ((sx.q(x13_135.d) + 9) << 2))
                        j_391 = x8_301 & 0xfffffffffffffff8
                        int128_t* x14_229 = x9_188 + (x14_228 << 2) + 0x10
                        void* x15_271 = x16_325 + (sx.q(x12_90 + x0_136) << 2) + 0x10
                        int64_t j_246 = j_391
                        int64_t j_155
                        
                        do
                            v0 = *(x15_271 - 0x10)
                            v1 = *x15_271
                            v3 = *x14_229
                            j_155 = j_246
                            j_246 -= 8
                            x15_271 += x17_178 << 5
                            v0 = vaddq_f32(v0, x14_229[-1])
                            v1 = vaddq_f32(v1, v3)
                            x14_229[-1] = v0
                            *x14_229 = v1
                            x14_229 = &x14_229[2]
                        while (j_155 != 8)
                        x0_136 = x0_125
                        
                        if (x8_301 != j_391)
                            goto label_c4014c
                    else
                        j_391 = 0
                    label_c4014c:
                        int64_t j_302 = x8_301 - j_391
                        int32_t* x8_303 =
                            x16_325 + ((j_391 * x17_178) << 2) + (sx.q(x12_90 + x0_136) << 2)
                        int32_t* x9_189 = x9_188 + ((j_391 + x8_301 * x22_2) << 2)
                        int64_t j_156
                        
                        do
                            v0.d = *x8_303
                            v1.d = *x9_189
                            j_156 = j_302
                            j_302 -= 1
                            x8_303 = &x8_303[x17_178]
                            v0.d = v0.d f+ v1.d
                            *x9_189 = v0.d
                            x9_189 = &x9_189[1]
                        while (j_156 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x74)) != 0)
                int64_t x8_306 = *x20_2
                
                if (x8_306 s>= 1)
                    int64_t x9_190 = *x6
                    int64_t x16_326 = *x7
                    int64_t x17_179 = x7[1]
                    int64_t j_392 = 0
                    
                    if (x8_306 u< 8 || x17_179 != 1)
                        goto label_c40248
                    
                    int64_t x14_230 = x8_306 * x22_2
                    
                    if (x9_190 + (x14_230 << 2)
                            u>= x16_326 + ((x8_306 + sx.q(x13_135.d) + 0xa) << 2)
                            || x9_190 + x8_306 * (x24_2 + 4)
                            u<= x16_326 + ((sx.q(x13_135.d) + 0xa) << 2))
                        j_392 = x8_306 & 0xfffffffffffffff8
                        int128_t* x14_231 = x9_190 + (x14_230 << 2) + 0x10
                        void* x15_276 = x16_326 + (sx.q(x12_90 + x24_6) << 2) + 0x10
                        int64_t j_247 = j_392
                        int64_t j_157
                        
                        do
                            v0 = *(x15_276 - 0x10)
                            v1 = *x15_276
                            v3 = *x14_231
                            j_157 = j_247
                            j_247 -= 8
                            x15_276 += x17_179 << 5
                            v0 = vaddq_f32(v0, x14_231[-1])
                            v1 = vaddq_f32(v1, v3)
                            x14_231[-1] = v0
                            *x14_231 = v1
                            x14_231 = &x14_231[2]
                        while (j_157 != 8)
                        
                        if (x8_306 != j_392)
                            goto label_c40248
                    else
                        j_392 = 0
                    label_c40248:
                        int64_t j_303 = x8_306 - j_392
                        int32_t* x8_308 =
                            x16_326 + ((j_392 * x17_179) << 2) + (sx.q(x12_90 + x24_6) << 2)
                        int32_t* x9_191 = x9_190 + ((j_392 + x8_306 * x22_2) << 2)
                        int64_t j_158
                        
                        do
                            v0.d = *x8_308
                            v1.d = *x9_191
                            j_158 = j_303
                            j_303 -= 1
                            x8_308 = &x8_308[x17_179]
                            v0.d = v0.d f+ v1.d
                            *x9_191 = v0.d
                            x9_191 = &x9_191[1]
                        while (j_158 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x75)) != 0)
                int64_t x8_311 = *x20_2
                
                if (x8_311 s>= 1)
                    int64_t x9_192 = *x6
                    int64_t x10_123 = *x7
                    int64_t x16_327 = x7[1]
                    int64_t j_393 = 0
                    
                    if (x8_311 u< 8 || x16_327 != 1)
                        goto label_c40344
                    
                    int64_t x14_232 = x8_311 * x22_2
                    
                    if (x9_192 + (x14_232 << 2)
                            u>= x10_123 + ((x8_311 + sx.q(x13_135.d) + 0xb) << 2)
                            || x9_192 + x8_311 * (x24_2 + 4)
                            u<= x10_123 + ((sx.q(x13_135.d) + 0xb) << 2))
                        j_393 = x8_311 & 0xfffffffffffffff8
                        int128_t* x14_234 = x9_192 + (x14_232 << 2) + 0x10
                        void* x15_283 = x10_123 + (sx.q(x12_90 + var_4c0) << 2) + 0x10
                        int64_t j_228 = j_393
                        int64_t j_159
                        
                        do
                            v0 = *(x15_283 - 0x10)
                            v1 = *x15_283
                            v3 = *x14_234
                            j_159 = j_228
                            j_228 -= 8
                            x15_283 += x16_327 << 5
                            v0 = vaddq_f32(v0, x14_234[-1])
                            v1 = vaddq_f32(v1, v3)
                            x14_234[-1] = v0
                            *x14_234 = v1
                            x14_234 = &x14_234[2]
                        while (j_159 != 8)
                        
                        if (x8_311 != j_393)
                            goto label_c40344
                    else
                        j_393 = 0
                    label_c40344:
                        int64_t j_304 = x8_311 - j_393
                        int32_t* x8_313 =
                            x10_123 + ((j_393 * x16_327) << 2) + (sx.q(x12_90 + var_4c0) << 2)
                        int32_t* x9_193 = x9_192 + ((j_393 + x8_311 * x22_2) << 2)
                        int64_t j_160
                        
                        do
                            v0.d = *x8_313
                            v1.d = *x9_193
                            j_160 = j_304
                            j_304 -= 1
                            x8_313 = &x8_313[x16_327]
                            v0.d = v0.d f+ v1.d
                            *x9_193 = v0.d
                            x9_193 = &x9_193[1]
                        while (j_160 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x76)) != 0)
                int64_t x8_316 = *x20_2
                
                if (x8_316 s>= 1)
                    int64_t x9_194 = *x6
                    int64_t x10_124 = *x7
                    int64_t x11_111 = x7[1]
                    int64_t j_434 = 0
                    
                    if (x8_316 u< 8 || x11_111 != 1)
                        goto label_c40448
                    
                    int64_t x15_285 = x8_316 * x22_2
                    
                    if (x9_194 + (x15_285 << 2)
                            u>= x10_124 + ((x8_316 + sx.q(x13_135.d) + 0xc) << 2)
                            || x9_194 + x8_316 * (x24_2 + 4)
                            u<= x10_124 + ((sx.q(x13_135.d) + 0xc) << 2))
                        j_434 = x8_316 & 0xfffffffffffffff8
                        int128_t* x15_287 = x9_194 + (x15_285 << 2) + 0x10
                        void* x16_334 = x10_124 + (sx.q(x12_90 + var_4e0) << 2) + 0x10
                        int64_t j_229 = j_434
                        int64_t j_161
                        
                        do
                            v0 = *(x16_334 - 0x10)
                            v1 = *x16_334
                            v3 = *x15_287
                            j_161 = j_229
                            j_229 -= 8
                            x16_334 += x11_111 << 5
                            v0 = vaddq_f32(v0, x15_287[-1])
                            v1 = vaddq_f32(v1, v3)
                            x15_287[-1] = v0
                            *x15_287 = v1
                            x15_287 = &x15_287[2]
                        while (j_161 != 8)
                        
                        if (x8_316 != j_434)
                            goto label_c40448
                    else
                        j_434 = 0
                    label_c40448:
                        int64_t j_341 = x8_316 - j_434
                        int32_t* x8_318 =
                            x10_124 + ((j_434 * x11_111) << 2) + (sx.q(x12_90 + var_4e0) << 2)
                        int32_t* x9_195 = x9_194 + ((j_434 + x8_316 * x22_2) << 2)
                        int64_t j_162
                        
                        do
                            v0.d = *x8_318
                            v1.d = *x9_195
                            j_162 = j_341
                            j_341 -= 1
                            x8_318 = &x8_318[x11_111]
                            v0.d = v0.d f+ v1.d
                            *x9_195 = v0.d
                            x9_195 = &x9_195[1]
                        while (j_162 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x77)) != 0)
                int64_t x8_321 = *x20_2
                
                if (x8_321 s>= 1)
                    int64_t x9_196 = *x6
                    int64_t x10_125 = *x7
                    int64_t x11_113 = x7[1]
                    int64_t j_435 = 0
                    
                    if (x8_321 u< 8 || x11_113 != 1)
                        goto label_c4054c
                    
                    int64_t x15_288 = x8_321 * x22_2
                    
                    if (x9_196 + (x15_288 << 2)
                            u>= x10_125 + ((x8_321 + sx.q(x13_135.d) + 0xd) << 2)
                            || x9_196 + x8_321 * (x24_2 + 4)
                            u<= x10_125 + ((sx.q(x13_135.d) + 0xd) << 2))
                        j_435 = x8_321 & 0xfffffffffffffff8
                        int128_t* x15_290 = x9_196 + (x15_288 << 2) + 0x10
                        void* x16_342 = x10_125 + (sx.q(x12_90 + var_500) << 2) + 0x10
                        int64_t j_230 = j_435
                        int64_t j_163
                        
                        do
                            v0 = *(x16_342 - 0x10)
                            v1 = *x16_342
                            v3 = *x15_290
                            j_163 = j_230
                            j_230 -= 8
                            x16_342 += x11_113 << 5
                            v0 = vaddq_f32(v0, x15_290[-1])
                            v1 = vaddq_f32(v1, v3)
                            x15_290[-1] = v0
                            *x15_290 = v1
                            x15_290 = &x15_290[2]
                        while (j_163 != 8)
                        
                        if (x8_321 != j_435)
                            goto label_c4054c
                    else
                        j_435 = 0
                    label_c4054c:
                        int64_t j_342 = x8_321 - j_435
                        int32_t* x8_323 =
                            x10_125 + ((j_435 * x11_113) << 2) + (sx.q(x12_90 + var_500) << 2)
                        int32_t* x9_197 = x9_196 + ((j_435 + x8_321 * x22_2) << 2)
                        int64_t j_164
                        
                        do
                            v0.d = *x8_323
                            v1.d = *x9_197
                            j_164 = j_342
                            j_342 -= 1
                            x8_323 = &x8_323[x11_113]
                            v0.d = v0.d f+ v1.d
                            *x9_197 = v0.d
                            x9_197 = &x9_197[1]
                        while (j_164 != 1)
            
            if (zx.d(*(fp + i * 0x68 + 0x78)) != 0)
                int64_t x8_326 = *x20_2
                
                if (x8_326 s>= 1)
                    int64_t x9_198 = *x6
                    int64_t x10_126 = *x7
                    int64_t x11_115 = x7[1]
                    int64_t j_436 = 0
                    
                    if (x8_326 u< 8 || x11_115 != 1)
                        goto label_c40650
                    
                    int64_t x15_291 = x8_326 * x22_2
                    
                    if (x9_198 + (x15_291 << 2)
                            u>= x10_126 + ((x8_326 + sx.q(x13_135.d) + 0xe) << 2)
                            || x9_198 + x8_326 * (x24_2 + 4)
                            u<= x10_126 + ((sx.q(x13_135.d) + 0xe) << 2))
                        j_436 = x8_326 & 0xfffffffffffffff8
                        int128_t* x15_293 = x9_198 + (x15_291 << 2) + 0x10
                        void* x16_350 = x10_126 + (sx.q(x12_90 + var_4e8) << 2) + 0x10
                        int64_t j_231 = j_436
                        int64_t j_165
                        
                        do
                            v0 = *(x16_350 - 0x10)
                            v1 = *x16_350
                            v3 = *x15_293
                            j_165 = j_231
                            j_231 -= 8
                            x16_350 += x11_115 << 5
                            v0 = vaddq_f32(v0, x15_293[-1])
                            v1 = vaddq_f32(v1, v3)
                            x15_293[-1] = v0
                            *x15_293 = v1
                            x15_293 = &x15_293[2]
                        while (j_165 != 8)
                        
                        if (x8_326 != j_436)
                            goto label_c40650
                    else
                        j_436 = 0
                    label_c40650:
                        int64_t j_343 = x8_326 - j_436
                        int32_t* x8_328 =
                            x10_126 + ((j_436 * x11_115) << 2) + (sx.q(x12_90 + var_4e8) << 2)
                        int32_t* x9_199 = x9_198 + ((j_436 + x8_326 * x22_2) << 2)
                        int64_t j_166
                        
                        do
                            v0.d = *x8_328
                            v1.d = *x9_199
                            j_166 = j_343
                            j_343 -= 1
                            x8_328 = &x8_328[x11_115]
                            v0.d = v0.d f+ v1.d
                            *x9_199 = v0.d
                            x9_199 = &x9_199[1]
                        while (j_166 != 1)
            
            x21_1 = var_590
            
            if (zx.d(*(fp + i * 0x68 + 0x79)) != 0)
                int64_t x8_331 = *x20_2
                
                if (x8_331 s>= 1)
                    int64_t x9_200 = *x6
                    int64_t x10_127 = *x7
                    int64_t x11_117 = x7[1]
                    int64_t j_437 = 0
                    
                    if (x8_331 u< 8 || x11_117 != 1)
                        goto label_c40758
                    
                    int64_t x13_136 = x8_331 * x22_2
                    
                    if (x9_200 + (x13_136 << 2)
                            u>= x10_127 + ((x8_331 + sx.q(x13_135.d) + 0xf) << 2)
                            || x9_200 + x8_331 * (x24_2 + 4)
                            u<= x10_127 + ((sx.q(x13_135.d) + 0xf) << 2))
                        j_437 = x8_331 & 0xfffffffffffffff8
                        void* x13_138 = x9_200 + (x13_136 << 2) + 0x10
                        void* x15_300 = x10_127 + (sx.q(x12_90 + var_4c8) << 2) + 0x10
                        int64_t j_377 = j_437
                        int64_t j_167
                        
                        do
                            v0 = *(x15_300 - 0x10)
                            v1 = *x15_300
                            v3 = *x13_138
                            j_167 = j_377
                            j_377 -= 8
                            x15_300 += x11_117 << 5
                            v0 = vaddq_f32(v0, *(x13_138 - 0x10))
                            v1 = vaddq_f32(v1, v3)
                            *(x13_138 - 0x10) = v0
                            *x13_138 = v1
                            x13_138 += 0x20
                        while (j_167 != 8)
                        
                        if (x8_331 != j_437)
                            goto label_c40758
                    else
                        j_437 = 0
                    label_c40758:
                        int64_t j_289 = x8_331 - j_437
                        int32_t* x8_333 =
                            x10_127 + ((j_437 * x11_117) << 2) + (sx.q(x12_90 + var_4c8) << 2)
                        int32_t* x9_201 = x9_200 + ((j_437 + x8_331 * x22_2) << 2)
                        int64_t j_168
                        
                        do
                            v0.d = *x8_333
                            v1.d = *x9_201
                            j_168 = j_289
                            j_289 -= 1
                            x8_333 = &x8_333[x11_117]
                            v0.d = v0.d f+ v1.d
                            *x9_201 = v0.d
                            x9_201 = &x9_201[1]
                        while (j_168 != 1)
            
            x23 = zx.q(x23.d + 1)
        
        i += 1
    while (i s< sx.q(*fp))

char var_330
__builtin_strcpy(&var_330, "\"player_pre/kernel")
void* x0_147 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_330)
int128_t var_32f

if ((zx.d(var_330) & 1) != 0)
    operator delete(var_32f:0xf.q)
void* i_158 = *(x0_147 + 8)
int32_t var_190_1 = 0
int128_t* i_145 = sx.q(arg6)
i_146 = i_145
void* i_141 = i_158
void* const var_348
__builtin_memset(&var_348, 0, 0x18)
void* i_114 = i_145

if (arg6 != 0 && i_158 != 0 && 0x7fffffffffffffff s/ i_158 s< i_145)
    operator new(-1)
    i_145 = i_146
    i_158 = i_141

if (i_158 != 0 && i_145 != 0 && 0x7fffffffffffffff s/ i_158 s< i_145)
    operator new(-1)

int64_t x21_5 = i_145 * i_158
int64_t var_340
int64_t var_338

if (var_338 * var_340 != x21_5)
    void* const x8_340 = var_348
    
    if (x8_340 != 0)
        free(*(x8_340 - 8))
    
    if (x21_5 s< 1)
        var_348 = nullptr
    else
        if (x21_5 u>> 0x3e != 0)
            operator new(-1)
        
        int64_t x21_6 = x21_5 << 2
        int64_t x0_151 = malloc(x21_6 + 0x10)
        void* const x22_6
        
        if (x0_151 == 0)
            x22_6 = nullptr
            
            if (x21_6 != 0)
            label_c408c4:
                
                if (x22_6 == 0)
                    operator new(-1)
        else
            x22_6 = (x0_151 + 0x10) & 0xfffffffffffffff0
            *(x22_6 - 8) = x0_151
            
            if (x21_6 != 0)
                goto label_c408c4
        
        var_348 = x22_6

void* i_160 = i_158
int128_t v0_2
int128_t v1_2
float x
v0_2, v1_2, x = Eigen::internal::call_assignment_no_alias<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::assign_op<float, float> >(
    &var_348, &i_146, &var_1d8)
int64_t x13_139 = var_5c8

if (arg6 s>= 1)
    int64_t i_1 = 0
    v8.d = 0f
    v9.d = fconvert.s(1f)
    v10.d = fconvert.s(5f)
    v11.d = fconvert.s(-1f)
    int32_t* x21_7 = x13_139 * 0x80cf8 + 0x195e914
    v15.d = fconvert.s(10f)
    v12.d = fconvert.s(-20f)
    v13.d = fconvert.s(20f)
    
    do
        if (i_1 == 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + (i_1 << 2)) = 0x3f800000
        *(var_348 + ((i_145 + i_1) << 2)) = v0_2.d
        
        if (i_1 == 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + (i_145 << 1)) << 2)) = v0_2.d
        
        if (i_1 == 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_145 * 3 + i_1) << 2)) = v0_2.d
        
        if (i_1 == 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + (i_145 << 2)) << 2)) = v0_2.d
        
        if (i_1 == 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_145 * 5 + i_1) << 2)) = v0_2.d
        
        if (i_1 == 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        void* x8_366 = fp + i_1 * 0x44
        *(var_348 + ((i_1 + i_145 * 6) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_145 * 7 + i_1) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + (i_145 << 3)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_145 * 9 + i_1) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0xa) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0xb) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0xc) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0xd) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0xe) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_145 * 0xf + i_1) << 2)) = v0_2.d
        
        if (sx.d(*(x8_366 + 0x14518)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + (i_145 << 4)) << 2)) = v0_2.d
        int32_t x8_367 = sx.d(*(x8_366 + 0x14518))
        void* const x9_242
        
        if (*x21_7 s< 0xc)
            x9_242 = var_348
            v0_2.d = float.s(x8_367 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x8_367)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x9_242 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        void* x8_369 = fp + i_1 * 0x44
        *(x9_242 + ((i_145 * 0x11 + i_1) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x12) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x13) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x14) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x15) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x16) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x17) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x18) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x19) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x1a) << 2)) = v0_2.d
        
        if (sx.d(*(x8_369 + 0x1451a)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * 0x1b) << 2)) = v0_2.d
        int32_t x8_370 = sx.d(*(x8_369 + 0x1451a))
        void* const x9_264
        
        if (*x21_7 s< 0xc)
            x9_264 = var_348
            v0_2.d = float.s(x8_370 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x8_370)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x9_264 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x8_372 = 0
        *(x9_264 + ((i_1 + i_145 * 0x1c) << 2)) = v0_2.d
        
        do
            int64_t x13_140 = x8_372 + 0x1d
            bool cond:43_1 = x8_372.d s< sx.d(*(fp + i_1 * 0x44 + 0x1451c))
            x8_372 += 1
            
            if (cond:43_1)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * x13_140) << 2)) = v0_2.d
        while (x8_372.d != 0x1e)
        
        int32_t x9_266 = sx.d(*(fp + i_1 * 0x44 + 0x1451c))
        void* const x8_374
        
        if (*x21_7 s< 0xc)
            x8_374 = var_348
            v0_2.d = float.s(x9_266 - 0xa)
            v0_2.d = v0_2.d f/ v15.d
        else
            v0_2.d = float.s(x9_266)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x8_374 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        *(x8_374 + ((i_1 + i_145 * 0x3b) << 2)) = v0_2.d
        int64_t x22_7
        
        if (*x21_7 s< 0xc)
            x22_7 = 0x3c
        else
            void* x8_376 = fp + i_1 * 0x44
            
            if (sx.d(*(x8_376 + 0x1451e)) s> 0)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * 0x3c) << 2)) = v0_2.d
            v1_2.d = fconvert.s(0.5f)
            
            if (sx.d(*(x8_376 + 0x1451e)) s> 1)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * 0x3d) << 2)) = v0_2.d
            
            if (sx.d(*(x8_376 + 0x1451e)) s> 2)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * 0x3e) << 2)) = v0_2.d
            
            if (sx.d(*(x8_376 + 0x1451e)) s> 3)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_145 * 0x3f + i_1) << 2)) = v0_2.d
            
            if (sx.d(*(x8_376 + 0x1451e)) s> 4)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + (i_145 << 6)) << 2)) = v0_2.d
            v0_2.w = *(x8_376 + 0x1451e)
            v0_2.d = sx.d(v0_2.w)
            v0_2:4.d = sx.d(v0_2:2.w)
            v0_2:8.d = sx.d(v0_2:4.w)
            v0_2:0xc.d = sx.d(v0_2:6.w)
            v0_2.d = float.s(v0_2.d)
            v0_2.d = v0_2.d f* v1_2.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            v0_2.d = v0_2.d f+ v11.d
            x22_7 = 0x42
            *(var_348 + ((i_145 * 0x41 + i_1) << 2)) = v0_2.d
        
        void* x8_380 = fp + i_1 * 0x44
        int64_t x25_5 = x22_7 | 1
        
        if (sx.d(*(x8_380 + 0x14520)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * x22_7) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * x25_5) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 1)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 2)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 3)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 4)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 5)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 6)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 7)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_380 + 0x14520)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x25_5 + 8)) << 2)) = v0_2.d
        int32_t x8_381 = sx.d(*(x8_380 + 0x14520))
        void* const x9_304
        
        if (*x21_7 s< 0xc)
            x9_304 = var_348
            v0_2.d = float.s(x8_381 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x8_381)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x9_304 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        void* x8_383 = fp + i_1 * 0x44
        *(x9_304 + ((i_1 + i_145 * (x25_5 + 9)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0xb)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0xc)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0xd)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0xe)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0xf)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0x10)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0x11)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0x12)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0x13)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_383 + 0x14522)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x22_7 + 0x14)) << 2)) = v0_2.d
        int32_t x9_335 = sx.d(*(x8_383 + 0x14522))
        void* const x8_384
        
        if (*x21_7 s< 0xc)
            x8_384 = var_348
            v0_2.d = float.s(x9_335 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x9_335)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x8_384 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x25_6 = 0
        *(x8_384 + ((i_1 + i_145 * (x22_7 + 0x15)) << 2)) = v0_2.d
        
        do
            int64_t x12_104 = x22_7 + x25_6 + 0x16
            bool cond:105_1 = x25_6.d s< sx.d(*(fp + i_1 * 0x44 + 0x14530))
            x25_6 += 1
            
            if (cond:105_1)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * x12_104) << 2)) = v0_2.d
        while (x25_6.d != 0x32)
        
        int32_t x8_386 = sx.d(*(fp + i_1 * 0x44 + 0x14530))
        void* const x10_191
        
        if (*x21_7 s< 0xb)
            int32_t x8_387
            
            x8_387 = x8_386 s< 0x32 ? x8_386 : 0x32
            
            x10_191 = var_348
            v0_2.q = float.d(sx.q(x8_387 - 0x19))
            v0_2.q = v0_2.q f/ fconvert.d(25.0)
        else
            v0_2.q = float.d(sx.q(x8_386))
            v1_2.q = fconvert.d(10.0)
            v0_2.q = v0_2.q f/ v1_2.q
            v0_2, v1_2, x = asinh(v0_2.q)
            x10_191 = var_348
            v1_2.q = fconvert.d(-1.0)
            v0_2.q = v0_2.q f+ v1_2.q
        
        int64_t x8_389 = x22_7 + x25_6
        v0_2.d = fconvert.s(v0_2.q)
        void* x9_342 = fp + i_1 * 0x44
        *(x10_191 + ((i_1 + i_145 * (x8_389 + 0x16)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x17)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x18)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x19)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x1a)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x1b)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x1c)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x1d)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x1e)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x1f)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x20)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0xa)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x21)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0xb)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x22)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0xc)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x23)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0xd)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x24)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0xe)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x25)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0xf)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x26)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0x10)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x27)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0x11)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x28)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0x12)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x29)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_342 + 0x14524)) s> 0x13)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_389 + 0x2a)) << 2)) = v0_2.d
        int32_t x8_392 = sx.d(*(x9_342 + 0x14524))
        void* const x10_251
        
        if (*x21_7 s< 0xc)
            x10_251 = var_348
            v0_2.d = float.s(x8_392 - 0xa)
            v0_2.d = v0_2.d f/ v15.d
        else
            v0_2.d = float.s(x8_392)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x10_251 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x8_394 = x22_7 + x25_6
        void* x9_343 = fp + i_1 * 0x44
        *(x10_251 + ((i_1 + i_145 * (x8_394 + 0x2b)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x2c)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x2d)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x2e)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x2f)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x30)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x31)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x32)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x33)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x34)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_343 + 0x14528)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_394 + 0x35)) << 2)) = v0_2.d
        int32_t x8_397 = sx.d(*(x9_343 + 0x14528))
        void* const x10_272
        
        if (*x21_7 s< 0xc)
            x10_272 = var_348
            v0_2.d = float.s(x8_397 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x8_397)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x10_272 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x8_399 = x22_7 + x25_6
        void* x9_344 = fp + i_1 * 0x44
        *(x10_272 + ((i_1 + i_145 * (x8_399 + 0x36)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x37)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x38)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x39)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x3a)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x3b)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x3c)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x3d)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x3e)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x3f)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_344 + 0x1452a)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_399 + 0x40)) << 2)) = v0_2.d
        int32_t x8_402 = sx.d(*(x9_344 + 0x1452a))
        void* const x9_345
        
        if (*x21_7 s< 0xc)
            x9_345 = var_348
            v0_2.d = float.s(x8_402 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x8_402)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x9_345 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x8_404 = x22_7 + x25_6
        *(x9_345 + ((i_1 + i_145 * (x8_404 + 0x41)) << 2)) = v0_2.d
        int64_t x27_4 = 0
        
        do
            int64_t x13_151 = x8_404 + x27_4 + 0x42
            bool cond:239_1 = x27_4.d s< sx.d(*(fp + i_1 * 0x44 + 0x14526))
            x27_4 += 1
            
            if (cond:239_1)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * x13_151) << 2)) = v0_2.d
        while (x27_4.d != 0x28)
        
        int32_t x8_405 = sx.d(*(fp + i_1 * 0x44 + 0x14526))
        void* const x10_307
        
        if (*x21_7 s< 0xc)
            x10_307 = var_348
            v0_2.d = float.s(x8_405 - 0x14)
            v0_2.d = v0_2.d f/ v13.d
        else
            v0_2.d = float.s(x8_405)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x10_307 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x9_348 = x22_7 + x25_6 + x27_4
        void* x8_407 = fp + i_1 * 0x44
        *(x10_307 + ((i_1 + i_145 * (x9_348 + 0x42)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x43)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x44)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x45)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x46)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x47)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x48)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x49)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x4a)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 8)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x4b)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 9)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x4c)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 0xa)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x4d)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 0xb)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x4e)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 0xc)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x4f)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 0xd)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x50)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_407 + 0x14532)) s> 0xe)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_348 + 0x51)) << 2)) = v0_2.d
        int32_t x9_351 = sx.d(*(x8_407 + 0x14532))
        void* const x8_408
        
        if (*x21_7 s< 0xc)
            x8_408 = var_348
            v0_2.d = float.s(x9_351 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x9_351)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x8_408 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x9_354 = x22_7 + x25_6 + x27_4
        void* x11_236 = fp + i_1 * 0x44
        *(x8_408 + ((i_1 + i_145 * (x9_354 + 0x52)) << 2)) = v0_2.d
        
        if (sx.d(*(x11_236 + 0x14534)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_354 + 0x53)) << 2)) = v0_2.d
        
        if (sx.d(*(x11_236 + 0x14534)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_354 + 0x54)) << 2)) = v0_2.d
        
        if (sx.d(*(x11_236 + 0x14534)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_354 + 0x55)) << 2)) = v0_2.d
        
        if (sx.d(*(x11_236 + 0x14534)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_354 + 0x56)) << 2)) = v0_2.d
        
        if (sx.d(*(x11_236 + 0x14534)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x9_354 + 0x57)) << 2)) = v0_2.d
        int32_t x9_356 = sx.d(*(x11_236 + 0x14534))
        void* const x8_420
        
        if (*x21_7 s< 0xc)
            x8_420 = var_348
            v0_2.d = float.s(x9_356 - 5)
            v0_2.d = v0_2.d f/ v10.d
        else
            v0_2.d = float.s(x9_356)
            v0_2.d = v0_2.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x8_420 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x22_8 = x22_7 + x25_6 + x27_4
        *(x8_420 + ((i_1 + i_145 * (x22_8 + 0x58)) << 2)) = v0_2.d
        void* x11_237 = fp + i_1 * 0x44
        v0_2.d = *(x11_237 + 0x1453c)
        *(var_348 + ((i_1 + i_145 * (x22_8 + 0x59)) << 2)) = v0_2.d
        v0_2.d = *(x11_237 + 0x14540)
        *(var_348 + ((i_1 + i_145 * (x22_8 + 0x5a)) << 2)) = v0_2.d
        int64_t x8_424 = x22_8 + 0x5b
        
        if (*x21_7 s>= 0xc)
            void* x25_7 = fp + i_1 * 0x44
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * x8_424) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 1)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x5c)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 2)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x5d)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 3)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x5e)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 4)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x5f)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 5)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x60)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 6)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x61)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 7)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x62)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 8)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x63)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 9)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x64)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0xa)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x65)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0xb)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x66)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0xc)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x67)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0xd)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x68)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0xe)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x69)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0xf)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x6a)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0x10)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x6b)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0x11)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x6c)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0x12)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x6d)) << 2)) = v0_2.d
            
            if (sx.d(*(x25_7 + 0x14536)) s> 0x13)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x6e)) << 2)) = v0_2.d
            v0_2.w = *(x25_7 + 0x14536)
            v0_2.d = sx.d(v0_2.w)
            v0_2:4.d = sx.d(v0_2:2.w)
            v0_2:8.d = sx.d(v0_2:4.w)
            v0_2:0xc.d = sx.d(v0_2:6.w)
            v0_2.d = float.s(v0_2.d)
            v0_2.d = v0_2.d f/ v10.d
            int64_t v0_3
            float xa
            float x_1
            v0_3, xa, x_1 = asinhf(v0_2.d, v1_2.d, x)
            v0_3.d = v0_3.d f+ v11.d
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x6f)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x70)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 1)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x71)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 2)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x72)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 3)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x73)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 4)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x74)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 5)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x75)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 6)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x76)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 7)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x77)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 8)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x78)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 9)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x79)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0xa)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x7a)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0xb)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x7b)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0xc)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x7c)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0xd)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x7d)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0xe)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x7e)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0xf)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x7f)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0x10)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x80)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0x11)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x81)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0x12)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x82)) << 2)) = v0_3.d
            
            if (sx.d(*(x25_7 + 0x14538)) s> 0x13)
                v0_3.d = v9.d
            else
                v0_3.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x83)) << 2)) = v0_3.d
            v0_3.w = *(x25_7 + 0x14538)
            v0_3.d = sx.d(v0_3.w)
            v0_3:4.d = sx.d(v0_3:2.w)
            v0_3:8.d = sx.d(v0_3:4.w)
            v0_3:0xc.d = sx.d(v0_3:6.w)
            v0_3.d = float.s(v0_3.d)
            v0_3.d = v0_3.d f/ v10.d
            v0_2, v1_2, x = asinhf(v0_3.d, xa, x_1)
            v0_2.d = v0_2.d f+ v11.d
            x8_424 = x22_8 + 0x85
            *(var_348 + ((i_1 + i_145 * (x22_8 + 0x84)) << 2)) = v0_2.d
        
        void* x9_407 = fp + i_1 * 0x44
        int64_t x8_526 = x8_424 & 0xffffffff
        
        if (sx.d(*(x9_407 + 0x14544)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * x8_526) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14544)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 1)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14544)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 2)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14544)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 3)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14544)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 4)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14544)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 5)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14544)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 6)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14544)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 7)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 8)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 9)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0xa)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0xb)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 4)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0xc)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 5)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0xd)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 6)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0xe)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14546)) s> 7)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0xf)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14548)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x10)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14548)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x11)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14548)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x12)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x14548)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x13)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454a)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x14)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454a)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x15)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454a)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x16)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454a)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x17)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454c)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x18)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454c)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x19)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454c)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x1a)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454c)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x1b)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454e)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x1c)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454e)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x1d)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454e)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x1e)) << 2)) = v0_2.d
        
        if (sx.d(*(x9_407 + 0x1454e)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x8_526 + 0x1f)) << 2)) = v0_2.d
        int64_t x9_412 = x8_526 + 0x20
        
        if (*x21_7 - 0xc u<= 2)
            *(var_348 + ((i_1 + i_145 * x9_412) << 2)) = 0
            *(var_348 + ((i_1 + i_145 * (x8_526 + 0x21)) << 2)) = 0
            *(var_348 + ((i_1 + i_145 * (x8_526 + 0x22)) << 2)) = 0
            x9_412 = x8_526 + 0x24
            *(var_348 + ((i_1 + i_145 * (x8_526 + 0x23)) << 2)) = 0
        
        void* x8_528 = fp + i_1 * 0x44
        int64_t x13_186 = x9_412 & 0xffffffff
        
        if (sx.d(*(x8_528 + 0x14554)) s> 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * x13_186) << 2)) = v0_2.d
        
        if (sx.d(*(x8_528 + 0x14554)) s> 1)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x13_186 + 1)) << 2)) = v0_2.d
        
        if (sx.d(*(x8_528 + 0x14554)) s> 2)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x13_186 + 2)) << 2)) = v0_2.d
        int64_t x14_256 = x9_412 << 0x20
        
        if (sx.d(*(x8_528 + 0x14554)) s> 3)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x13_186 + 3)) << 2)) = v0_2.d
        
        if (zx.d(*(x8_528 + 0x14550)) != 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * ((x14_256 + 0x400000000) s>> 0x20)) << 2)) = v0_2.d
        
        if (zx.d(*(x8_528 + 0x14551)) != 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * ((x14_256 + 0x500000000) s>> 0x20)) << 2)) = v0_2.d
        
        if (zx.d(*(x8_528 + 0x14552)) != 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * ((x14_256 + 0x600000000) s>> 0x20)) << 2)) = v0_2.d
        int32_t x10_485 = *x21_7
        int32_t x8_532 = (x13_186 + 3).d + 4
        
        if (x10_485 - 0xc u<= 2)
            *(var_348 + ((i_1 + i_145 * sx.q(x8_532)) << 2)) = 0
            x10_485 = *x21_7
            x8_532 = (x13_186 + 3).d + 5
        
        if (x10_485 s>= 0xc)
            void* x9_419 = fp + i_1 * 0x44
            
            if (zx.d(*(x9_419 + 0x14556)) != 0)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * sx.q(x8_532)) << 2)) = v0_2.d
            
            if (zx.d(*(x9_419 + 0x14557)) != 0)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * sx.q(x8_532 + 1)) << 2)) = v0_2.d
            int64_t x10_491 = sx.q(x8_532 + 2)
            x8_532 += 3
            
            if (zx.d(*(x9_419 + 0x14558)) != 0)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * x10_491) << 2)) = v0_2.d
        
        int64_t x22_9 = 0
        uint64_t x25_8 = zx.q(x8_532)
        
        do
            int64_t x12_215 = x25_8 + x22_9
            bool cond:402_1 = x22_9.d s< sx.d(*(fp + i_1 * 0x44 + 0x1455a))
            x22_9 += 1
            
            if (cond:402_1)
                v0_2.d = v9.d
            else
                v0_2.d = v8.d
            
            *(var_348 + ((i_1 + i_145 * x12_215) << 2)) = v0_2.d
        while (x22_9.d != 0x28)
        
        int32_t x8_537 = sx.d(*(fp + i_1 * 0x44 + 0x1455a))
        void* const x8_344
        
        if (*x21_7 s< 0xb)
            int32_t x9_203
            
            x9_203 = x8_537 s< 0x32 ? x8_537 : 0x32
            
            x8_344 = var_348
            v0_2.d = float.s(x9_203)
            v0_2.d = v0_2.d f+ v12.d
            v0_2.d = v0_2.d f/ v13.d
        else
            v0_2.d = float.s(x8_537)
            v0_2.d = v0_2.d f/ v15.d
            v0_2, v1_2, x = asinhf(v0_2.d, v1_2.d, x)
            x8_344 = var_348
            v0_2.d = v0_2.d f+ v11.d
        
        int64_t x10_130 = x25_8 + x22_9
        void* x11_119 = fp + i_1 * 0x44
        x13_139 = var_5c8
        *(x8_344 + ((i_1 + i_145 * x10_130) << 2)) = v0_2.d
        
        if (zx.d(*(x11_119 + 0x1452c)) != 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x10_130 + 1)) << 2)) = v0_2.d
        
        if (zx.d(*(x11_119 + 0x1452d)) != 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + ((i_1 + i_145 * (x10_130 + 2)) << 2)) = v0_2.d
        int64_t x8_352 = i_1 + i_145 * (x10_130 + 3)
        i_1 += 1
        
        if (zx.d(*(x11_119 + 0x1452e)) != 0)
            v0_2.d = v9.d
        else
            v0_2.d = v8.d
        
        *(var_348 + (x8_352 << 2)) = v0_2.d
    while (i_1 != zx.q(arg6))

void* x9_424 = *x0_1
void* x23_5 = x13_139 * 0x80cf8 + &data_195dc48
int64_t x10_494 = *x23_5
int32_t x2_11 = x23.d

if (x10_494 s>= 1)
    int64_t x14_258 = sx.q(x2_11)
    int64_t x12_216 = x0_1[1]
    int64_t i_132 = 0
    int128_t* x11_312 = *(x13_139 * 0x80cf8 + &data_195dc38)
    int64_t x13_192 = x14_258 << 2
    
    if (x10_494 u< 8 || x12_216 != 1)
        goto label_c42a88
    
    int64_t x16_356 = x10_494 * x14_258
    
    if (x11_312 + (x16_356 << 2) u>= x9_424 + (x10_494 << 2) + 4
            || x11_312 + x10_494 * (x13_192 + 4) u<= x9_424 + 4)
        i_132 = x10_494 & 0xfffffffffffffff8
        void* x16_357 = x9_424 + 0x14
        void* x17_203 = x11_312 + (x16_356 << 2) + 0x10
        int64_t i_63 = i_132
        int64_t i_2
        
        do
            v0_2 = *(x16_357 - 0x10)
            v1_2 = *x16_357
            i_2 = i_63
            i_63 -= 8
            x16_357 += x12_216 << 5
            *(x17_203 - 0x10) = v0_2
            *x17_203 = v1_2
            x17_203 += 0x20
        while (i_2 != 8)
        
        if (x10_494 != i_132)
            goto label_c42a88
    else
        i_132 = 0
    label_c42a88:
        int64_t i_104 = x10_494 - i_132
        void* x15_305 = x11_312 + ((i_132 + x10_494 * x14_258) << 2)
        int32_t* x17_206 = x9_424 + ((i_132 * x12_216) << 2) + 4
        int64_t i_3
        
        do
            v0_2.d = *x17_206
            i_3 = i_104
            i_104 -= 1
            x17_206 = &x17_206[x12_216]
            *x15_305 = v0_2.d
            x15_305 += 4
        while (i_3 != 1)
    
    int64_t i_133 = 0
    
    if (x10_494 u< 8 || x12_216 != 1)
        goto label_c42b30
    
    void* x16_358 = x11_312 + x10_494 * (x13_192 + 4)
    
    if (x16_358 u>= x9_424 + (x10_494 << 2) + 8 || x11_312 + x10_494 * (x13_192 + 8) u<= x9_424 + 8)
        i_133 = x10_494 & 0xfffffffffffffff8
        void* x16_359 = x16_358 + 0x10
        void* x17_209 = x9_424 + 0x18
        int64_t i_64 = i_133
        int64_t i_4
        
        do
            v0_2 = *(x17_209 - 0x10)
            v1_2 = *x17_209
            i_4 = i_64
            i_64 -= 8
            x17_209 += x12_216 << 5
            *(x16_359 - 0x10) = v0_2
            *x16_359 = v1_2
            x16_359 += 0x20
        while (i_4 != 8)
        
        if (x10_494 != i_133)
            goto label_c42b30
    else
        i_133 = 0
    label_c42b30:
        int64_t i_105 = x10_494 - i_133
        int32_t* x14_260 = x9_424 + ((i_133 * x12_216) << 2) + 8
        void* x15_311 = x11_312 + ((i_133 + x10_494 * (x14_258 + 1)) << 2)
        int64_t i_5
        
        do
            v0_2.d = *x14_260
            i_5 = i_105
            i_105 -= 1
            x14_260 = &x14_260[x12_216]
            *x15_311 = v0_2.d
            x15_311 += 4
        while (i_5 != 1)
    
    int64_t i_127 = 0
    
    if (x10_494 u< 8 || x12_216 != 1)
        goto label_c42bd8
    
    void* x15_312 = x11_312 + x10_494 * (x13_192 + 8)
    
    if (x15_312 u>= x9_424 + (x10_494 << 2) + 0xc
            || x11_312 + x10_494 * (x13_192 + 0xc) u<= x9_424 + 0xc)
        i_127 = x10_494 & 0xfffffffffffffff8
        void* x15_313 = x15_312 + 0x10
        void* x16_362 = x9_424 + 0x1c
        int64_t i_60 = i_127
        int64_t i_6
        
        do
            v0_2 = *(x16_362 - 0x10)
            v1_2 = *x16_362
            i_6 = i_60
            i_60 -= 8
            x16_362 += x12_216 << 5
            *(x15_313 - 0x10) = v0_2
            *x15_313 = v1_2
            x15_313 += 0x20
        while (i_6 != 8)
        
        if (x10_494 != i_127)
            goto label_c42bd8
    else
        i_127 = 0
    label_c42bd8:
        int64_t i_98 = x10_494 - i_127
        int32_t* x14_266 = x9_424 + ((i_127 * x12_216) << 2) + 0xc
        int32_t* x16_364 = x11_312 + (i_127 << 2) + x10_494 * (x13_192 + 8)
        int64_t i_7
        
        do
            v0_2.d = *x14_266
            i_7 = i_98
            i_98 -= 1
            x14_266 = &x14_266[x12_216]
            *x16_364 = v0_2.d
            x16_364 = &x16_364[1]
        while (i_7 != 1)
    
    int64_t i_128 = 0
    
    if (x10_494 u< 8 || x12_216 != 1)
        goto label_c42c90
    
    void* x15_314 = x11_312 + x10_494 * (x13_192 + 0xc)
    
    if (x15_314 u>= x9_424 + (x10_494 << 2) + 0x10
            || x11_312 + x10_494 * (x13_192 + 0x10) u<= x9_424 + 0x10)
        i_128 = x10_494 & 0xfffffffffffffff8
        void* x15_315 = x15_314 + 0x10
        void* x16_367 = x9_424 + 0x20
        int64_t i_61 = i_128
        int64_t i_8
        
        do
            v0_2 = *(x16_367 - 0x10)
            v1_2 = *x16_367
            i_8 = i_61
            i_61 -= 8
            x16_367 += x12_216 << 5
            *(x15_315 - 0x10) = v0_2
            *x15_315 = v1_2
            x15_315 += 0x20
        while (i_8 != 8)
        
        if (x10_494 != i_128)
            goto label_c42c90
    else
        i_128 = 0
    label_c42c90:
        int64_t i_99 = x10_494 - i_128
        int32_t* x9_426 = x9_424 + ((i_128 * x12_216) << 2) + 0x10
        int32_t* x10_495 = x11_312 + (i_128 << 2) + x10_494 * (x13_192 + 0xc)
        int64_t i_9
        
        do
            v0_2.d = *x9_426
            i_9 = i_99
            i_99 -= 1
            x9_426 = &x9_426[x12_216]
            *x10_495 = v0_2.d
            x10_495 = &x10_495[1]
        while (i_9 != 1)

char var_360 = 0x14
int64_t var_35f
__builtin_strncpy(&var_35f, "player_pre", 0xb)
int128_t v0_4
int128_t v1_3
int128_t v2_1
v0_4, v1_3, v2_1 =
    sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_348, &var_360, 0)
int32_t x10_496 = arg6
int128_t* i_177 = i_146

if (x10_496 s>= 1)
    int64_t x9_427 = *x23_5
    
    if (x9_427 s>= 1)
        void* i_152 = i_141
        int64_t x0_158 = sx.q(x2_11 + 4)
        int128_t* x12_219 = *(x13_139 * 0x80cf8 + &data_195dc38)
        int64_t x17_215 = x9_427 * x0_158
        void* x1_44 = x12_219 + (x17_215 << 2)
        int64_t x10_497 = 0
        int64_t x11_314 = 0
        int64_t i_129 = x9_427 & 0xfffffffffffffff8
        void* x16_368 = &i_177[1]
        void* x3_12 = x1_44 + 0x10
        
        do
            int64_t x6_3
            
            if (((x9_427 u> 7 ? 1 : 0) & (i_152 == 1 ? 1 : 0)) != 0)
                x6_3 = x9_427 * x11_314
            
            int64_t i_142
            
            if (((x9_427 u> 7 ? 1 : 0) & (i_152 == 1 ? 1 : 0)) != 0 && (
                    x12_219 + ((x17_215 + x6_3) << 2) u>= i_177 + ((x9_427 + x11_314) << 2)
                    || x12_219 + (x6_3 << 2) + x9_427 * ((x0_158 << 2) + 4)
                    u<= i_177 + (x11_314 << 2)))
                int64_t i_72 = i_129
                void* x7_6 = x16_368
                void* x20_10 = x3_12
                int64_t i_10
                
                do
                    v0_4 = *(x7_6 - 0x10)
                    v1_3 = *x7_6
                    i_10 = i_72
                    i_72 -= 8
                    x7_6 += i_152 << 5
                    *(x20_10 - 0x10) = v0_4
                    *x20_10 = v1_3
                    x20_10 += 0x20
                while (i_10 != 8)
                i_142 = i_129
                
                if (x9_427 != i_129)
                    goto label_c42dc8
            else
                i_142 = 0
            label_c42dc8:
                int64_t i_71 = x9_427 - i_142
                void* x7_5 = i_177 + ((x11_314 + i_152 * i_142) << 2)
                void* x20_9 = x1_44 + ((i_142 + x10_497) << 2)
                int64_t i_11
                
                do
                    v0_4.d = *x7_5
                    i_11 = i_71
                    i_71 -= 1
                    x7_5 += i_152 << 2
                    *x20_9 = v0_4.d
                    x20_9 += 4
                while (i_11 != 1)
            x11_314 += 1
            x3_12 += x9_427 << 2
            x16_368 += 4
            x10_497 += x9_427
        while (x11_314 != i_114)
        
        i_177 = i_146
        x10_496 = arg6

if (i_177 != 0)
    v0_4, v1_3, v2_1 = free(*(i_177 - 8))
    x10_496 = arg6

int32_t x22_10

if (x10_496 s< 1)
    x22_10 = x2_11 + 4
else
    uint64_t x8_543 = zx.q(x10_496)
    int64_t i_116
    
    if (x10_496 u>= 8)
        i_116 = x8_543 & 0xfffffff8
        v1_3.d = x2_11 + 4
        v1_3:4.d = x2_11 + 4
        v1_3:8.d = x2_11 + 4
        v1_3:0xc.d = x2_11 + 4
        v0_4.d = 4
        v0_4:4.d = 4
        v0_4:8.d = 4
        v0_4:0xc.d = 4
        x22_10 = x2_11 + 4 + i_116.d
        int128_t* x10_499 = var_5c8 * 0x80cf8 + 0x195e908
        int128_t v1_4 = v1_3 + data_71c940
        v2_1.d = 8
        v2_1:4.d = 8
        v2_1:8.d = 8
        v2_1:0xc.d = 8
        int64_t i_84 = i_116
        int64_t i_12
        
        do
            x10_499[-1] = v1_4
            *x10_499 = v1_4 + v0_4
            v1_4 += v2_1
            i_12 = i_84
            i_84 -= 8
            x10_499 = &x10_499[2]
        while (i_12 != 8)
        
        if (i_116 != x8_543)
            goto label_c42ee8
    else
        i_116 = 0
        x22_10 = x2_11 + 4
    label_c42ee8:
        int32_t* x10_502 = &data_18ddc30 + var_5c8 * 0x80cf8 + (i_116 << 2) + 0x80cc8
        int64_t i_73 = x8_543 - i_116
        int32_t x9_428 = x22_10
        int64_t i_13
        
        do
            x22_10 = x9_428 + 1
            i_13 = i_73
            i_73 -= 1
            *x10_502 = x9_428
            x10_502 = &x10_502[1]
            x9_428 = x22_10
        while (i_13 != 1)

char var_378 = 0x1e
int64_t var_377
__builtin_strncpy(&var_377, "game_pre/kernel", 0x10)
void* x0_164
int128_t v2_2
int128_t v3_2
x0_164, v2_2, v3_2 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_378)
char var_368

if ((zx.d(var_378) & 1) != 0)
    v2_2, v3_2 = operator delete(var_368.q)
int64_t x19_7 = *(x0_164 + 8)
int64_t x14_271 = var_5c8
int32_t x11_315 = arg6
int64_t var_380 = 0
int32_t* var_388 = nullptr
int32_t* x20_11

if (x19_7 == 0)
    x20_11 = nullptr
else if (x19_7 s< 1)
    x20_11 = nullptr
    var_388 = nullptr
else
    if (x19_7 u>> 0x3e != 0)
        operator new(-1)
    
    int64_t x21_9 = x19_7 << 2
    int64_t x0_167
    x0_167, v2_2, v3_2 = malloc(x21_9 + 0x10)
    
    if (x0_167 == 0)
        x20_11 = nullptr
        
        if (x21_9 != 0)
        label_c42fc0:
            
            if (x20_11 == 0)
                v2_2, v3_2 = operator new(-1)
    else
        x20_11 = (x0_167 + 0x10) & 0xfffffffffffffff0
        *(x20_11 - 8) = x0_167
        
        if (x21_9 != 0)
            goto label_c42fc0
    
    x14_271 = var_5c8
    x11_315 = arg6
    var_388 = x20_11

float v0_5 = 0f
float v1_5 = fconvert.s(1f)

if (x11_315 == 2)
    v2_2.d = v1_5
else
    v2_2.d = v0_5

int64_t var_380_1 = x19_7
v3_2.q = 0x500000004
*x20_11 = v2_2.d
int32_t* x8_547 = var_388
v2_2.d = x11_315
v2_2:4.d = x11_315
uint64_t v2_3 = vceq_u32(v2_2, v3_2)

if (x11_315 == 3)
    v3_2.d = v1_5
else
    v3_2.d = v0_5

x8_547[1] = v3_2.d
int32_t* x8_548 = var_388
v3_2.d = fconvert.s(1f)
v3_2:4.d = fconvert.s(1f)
int64_t v2_4 = v2_3 & v3_2.q

if (x11_315 == 6)
    v3_2.d = v1_5
else
    v3_2.d = v0_5

*(x8_548 + 8) = v2_4
x8_548[4] = v3_2.d

if (sx.d(*(fp + 2)) s> 0)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

int32_t x9_431 = *(x14_271 * 0x80cf8 + 0x195e914)
x8_548[5] = v2_4.d

if (sx.d(*(fp + 2)) s> 1)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

x8_548[6] = v2_4.d
int64_t x9_475
void* x10_504
int32_t x11_317

if (x9_431 s<= 0xe)
    x10_504 = &x8_548[0x12]
    
    if (sx.d(*(fp + 6)) s> 0)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[7] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 1)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[8] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 2)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[9] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 3)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xa] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 4)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xb] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 5)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xc] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 6)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xd] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 7)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xe] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 8)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xf] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 9)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x10] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0xa)
        v0_5 = v1_5
    
    x8_548[0x11] = v0_5
    x11_317 = sx.d(*(fp + 6)) s> 0xb ? 1 : 0
    x9_475 = 0x13
else
    if (sx.d(*(fp + 2)) s> 2)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[7] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 0)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[8] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 1)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[9] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 2)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xa] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 3)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xb] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 4)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xc] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 5)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xd] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 6)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xe] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 7)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0xf] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 8)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x10] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 9)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x11] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 0xa)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x12] = v2_4.d
    
    if (sx.d(*(fp + 4)) s> 0xb)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x13] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x14] = v2_4.d
    int32_t* x8_549 = var_388
    
    if (sx.d(*(fp + 6)) s> 1)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x15] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 2)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x16] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 3)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x17] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 4)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x18] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 5)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x19] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 6)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x1a] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 7)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x1b] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 8)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x1c] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 9)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x1d] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0xa)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x1e] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0xb)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x1f] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0xc)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x20] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0xd)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x21] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0xe)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x22] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0xf)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x23] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x10)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x24] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x11)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_549[0x25] = v2_4.d
    x8_548 = var_388
    
    if (sx.d(*(fp + 6)) s> 0x12)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x26] = v2_4.d
    x10_504 = &x8_548[0x31]
    
    if (sx.d(*(fp + 6)) s> 0x13)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x27] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x14)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x28] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x15)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x29] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x16)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x2a] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x17)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x2b] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x18)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x2c] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x19)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x2d] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x1a)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x2e] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x1b)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    x8_548[0x2f] = v2_4.d
    
    if (sx.d(*(fp + 6)) s> 0x1c)
        v0_5 = v1_5
    
    x8_548[0x30] = v0_5
    x11_317 = sx.d(*(fp + 6)) s> 0x1d ? 1 : 0
    x9_475 = 0x32

*x10_504 = float.s(x11_317)
v0_5 = 0f
v1_5 = fconvert.s(1f)

if (sx.d(*(fp + 0xc)) s> 0)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

x8_548[x9_475] = v2_4.d
int64_t x9_488 = x9_475 | 4

if (sx.d(*(fp + 0xc)) s> 1)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_475 + 1] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 2)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_475 + 2] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 3)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_475 + 3] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 4)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_488] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 5)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_488 + 1] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 6)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_488 + 2] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 7)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_488 + 3] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 8)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_488 + 4] = v2_4.d

if (sx.d(*(fp + 0xc)) s> 9)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[x9_488 + 5] = v2_4.d
int32_t x8_569 = x9_488.d + 6

if (*(x14_271 * 0x80cf8 + 0x195e914) s>= 0xe)
    uint64_t x8_570 = zx.q(x8_569)
    
    if (sx.d(*(fp + 0xe)) s> 0)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_570] = v2_4.d
    int64_t x8_571 = x8_570 | 2
    
    if (sx.d(*(fp + 0xe)) s> 1)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_570 + 1] = v2_4.d
    x8_569 = x8_571.d + 0x26
    
    if (sx.d(*(fp + 0xe)) s> 2)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 3)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 1] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 4)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 2] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 5)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 3] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 6)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 4] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 7)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 5] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 8)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 6] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 9)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 7] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0xa)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 8] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0xb)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 9] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0xc)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0xa] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0xd)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0xb] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0xe)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0xc] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0xf)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0xd] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x10)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0xe] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x11)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0xf] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x12)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x10] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x13)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x11] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x14)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x12] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x15)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x13] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x16)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x14] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x17)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x15] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x18)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x16] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x19)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x17] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x1a)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x18] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x1b)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x19] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x1c)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x1a] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x1d)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x1b] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x1e)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x1c] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x1f)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x1d] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x20)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x1e] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x21)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x1f] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x22)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x20] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x23)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x21] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x24)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x22] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x25)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x23] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x26)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x24] = v2_4.d
    
    if (sx.d(*(fp + 0xe)) s> 0x27)
        v2_4.d = v1_5
    else
        v2_4.d = v0_5
    
    var_388[x8_571 + 0x25] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569)] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 1)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 1] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 2)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 2] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 3)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 3] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 4)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 4] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 5)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 5] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 6)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 6] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 7)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 7] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 8)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 8] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 9)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 9] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0xa)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0xa] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0xb)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0xb] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0xc)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0xc] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0xd)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0xd] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0xe)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0xe] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0xf)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0xf] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0x10)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0x10] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0x11)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0x11] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0x12)
    v2_4.d = v1_5
else
    v2_4.d = v0_5

var_388[zx.q(x8_569) + 0x12] = v2_4.d

if (sx.d(*(fp + 0xa)) s> 0x13)
    v0_5 = v1_5

var_388[zx.q(x8_569) + 0x13] = v0_5
char var_3a0 = 0x10
*(x14_271 * 0x80cf8 + 0x195e910) = x22_10
int64_t var_39f
__builtin_strncpy(&var_39f, "game_pre", 9)
float128 v0_6
int128_t v1_6
int128_t v4
int128_t v5
int128_t v6
int128_t v7
int128_t v16
int128_t v17
int128_t v18
int128_t v19
int128_t v20
int128_t v21
int128_t v22
int128_t v23
v0_6, v1_6, v4, v5, v6, v7, v16, v17, v18, v19, v20, v21, v22, v23 =
    sub_c48e30(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_388, &var_3a0, 0)
int64_t x9_530 = *x23_5
int64_t x10_612 = sx.q(x22_10)
int128_t* x8_576 = *(x13_139 * 0x80cf8 + &data_195dc38)
int64_t x15_317 = x9_530 * x10_612
int64_t x12_221 = x9_530
void* x16_369 = x8_576 + (x15_317 << 2)

if ((x16_369 & 3) == 0)
    int64_t x11_362 = zx.q(neg.d(x16_369.d u>> 2)) & 3
    
    x12_221 = x11_362 s< x9_530 ? x11_362 : x9_530

int128_t* i_207 = i_146
int64_t x14_272 = x9_530 - x12_221
int64_t x1_47 = var_5c8
int64_t x13_196

if (x14_272 s< 0)
    x13_196 = x14_272 + 3
else
    x13_196 = x14_272

int64_t x13_197 = x13_196 & 0xfffffffffffffffc

if (x12_221 s>= 1)
    int64_t i_134
    
    if (x12_221 u< 8 || (x16_369 u< i_207 + (x12_221 << 2)
            && i_207 u< x8_576 + ((x12_221 + x9_530 * x10_612) << 2)))
        i_134 = 0
    label_c43bac:
        int64_t i_100 = x12_221 - i_134
        void* x17_217 = i_207 + (i_134 << 2)
        void* x16_373 = x8_576 + ((i_134 + x9_530 * x10_612) << 2)
        int64_t i_14
        
        do
            v0_6.d = *x17_217
            x17_217 += 4
            i_14 = i_100
            i_100 -= 1
            *x16_373 = v0_6.d
            x16_373 += 4
        while (i_14 != 1)
    else
        i_134 = x12_221 & 0xfffffffffffffff8
        void* x15_328 = x8_576 + (x15_317 << 2) + 0x10
        void* x17_226 = &i_207[1]
        int64_t i_62 = i_134
        int64_t i_15
        
        do
            v0_6 = *(x17_226 - 0x10)
            v1_6 = *x17_226
            i_15 = i_62
            i_62 -= 8
            x17_226 += 0x20
            *(x15_328 - 0x10) = v0_6
            *x15_328 = v1_6
            x15_328 += 0x20
        while (i_15 != 8)
        
        if (x12_221 != i_134)
            goto label_c43bac

int64_t x15_318 = x13_197 + x12_221

if (x14_272 s>= 4)
    void* x16_374 = i_207 + (x12_221 << 2)
    void* x17_219 = x8_576 + ((x12_221 + x9_530 * x10_612) << 2)
    int64_t x0_169 = x12_221
    
    do
        v0_6 = *x16_374
        x16_374 += 0x10
        x0_169 += 4
        *x17_219 = v0_6
        x17_219 += 0x10
    while (x0_169 s< x15_318)

if (x15_318 s< x9_530)
    int64_t x14_273 = x14_272 - x13_197
    
    if (x14_273 u< 8)
    label_c43c78:
        int64_t i_86 = x9_530 - x15_318
        void* x11_363 = i_207 + (x15_318 << 2)
        void* x8_577 = x8_576 + ((x15_318 + x9_530 * x10_612) << 2)
        int64_t i_16
        
        do
            v0_6.d = *x11_363
            x11_363 += 4
            i_16 = i_86
            i_86 -= 1
            *x8_577 = v0_6.d
            x8_577 += 4
        while (i_16 != 1)
    else
        void* x13_199 = x8_576 + ((x12_221 + x9_530 * x10_612 + x13_197) << 2)
        void* x16_377 = i_207 + ((x12_221 + x13_197) << 2)
        
        if (x13_199 u< i_207 + (x9_530 << 2) && x16_377 u< x8_576 + ((x9_530 * (x10_612 + 1)) << 2))
            goto label_c43c78
        
        int64_t i_122 = x14_273 & 0xfffffffffffffff8
        void* x13_200 = x13_199 + 0x10
        x15_318 += i_122
        void* x16_378 = x16_377 + 0x10
        int64_t i_106 = i_122
        int64_t i_17
        
        do
            v0_6 = *(x16_378 - 0x10)
            v1_6 = *x16_378
            i_17 = i_106
            i_106 -= 8
            x16_378 += 0x20
            *(x13_200 - 0x10) = v0_6
            *x13_200 = v1_6
            x13_200 += 0x20
        while (i_17 != 8)
        
        if (x14_273 != i_122)
            goto label_c43c78

int128_t* i_178 = i_146

if (i_178 != 0)
    v0_6, v4, v5, v6, v7, v16, v17, v18, v19, v20, v21, v22, v23 = free(*(i_178 - 8))
    x1_47 = var_5c8

v0_6.d = fconvert.s(1f)
v0_6:4.d = fconvert.s(1f)
v0_6:8.d = fconvert.s(1f)
v0_6:0xc.d = fconvert.s(1f)
var_4e0.o = v0_6
void* var_5c0_2 = x23_5
int64_t var_520
void** var_180
void* const var_118
void** i_215

if (*(x1_47 * 0x80cf8 + 0x195e918) s>= 1)
    v4.d = 0x42b1722d
    v4:4.d = 0x42b1722d
    v4:8.d = 0x42b1722d
    v4:0xc.d = 0x42b1722d
    v5.d = 0xc2b1722d
    v5:4.d = 0xc2b1722d
    v5:8.d = 0xc2b1722d
    v5:0xc.d = 0xc2b1722d
    v6.d = 0x3fb8aa3b
    v6:4.d = 0x3fb8aa3b
    v6:8.d = 0x3fb8aa3b
    v6:0xc.d = 0x3fb8aa3b
    v7.d = 0xbf318000
    v7:4.d = 0xbf318000
    v7:8.d = 0xbf318000
    v7:0xc.d = 0xbf318000
    v16.d = 0x395e8083
    v16:4.d = 0x395e8083
    v16:8.d = 0x395e8083
    v16:0xc.d = 0x395e8083
    v17.d = 0x39506967
    v17:4.d = 0x39506967
    v17:8.d = 0x39506967
    v17:0xc.d = 0x39506967
    v18.d = 0x3ab743ce
    v18:4.d = 0x3ab743ce
    v18:8.d = 0x3ab743ce
    v18:0xc.d = 0x3ab743ce
    v19.d = 0x3d2aa9c1
    v19:4.d = 0x3d2aa9c1
    v19:8.d = 0x3d2aa9c1
    v19:0xc.d = 0x3d2aa9c1
    v20.d = 0x3e2aaaaa
    v20:4.d = 0x3e2aaaaa
    v20:8.d = 0x3e2aaaaa
    v20:0xc.d = 0x3e2aaaaa
    v21.d = 0x3c088908
    v21:4.d = 0x3c088908
    v21:8.d = 0x3c088908
    v21:0xc.d = 0x3c088908
    v22.d = 0xc38b0000
    v22:4.d = 0xc38b0000
    v22:8.d = 0xc38b0000
    v22:0xc.d = 0xc38b0000
    v23.d = 0x438b0000
    v23:4.d = 0x438b0000
    v23:8.d = 0x438b0000
    v23:0xc.d = 0x438b0000
    var_4c8.q = var_5c8 * 0x80cf8 + 0x195e91c
    char var_3d8
    void* x8_583 = &var_3d8 | 1
    void** var_5b8_2 = &i_141
    int64_t var_1f0
    void* x10_613 = &var_1f0 | 1
    int64_t var_208
    void* x8_585 = &var_208 | 1
    char var_3f0
    void* x8_586 = &var_3f0 | 1
    void*** var_600_1 = &var_180
    uint64_t x21_10 = zx.q(x22_10 + 1)
    int64_t x9_536 = muls.dp.d(x21_10.d, x21_10.d)
    void* i_159 = sx.q(x21_10.d)
    int64_t x9_537 = x9_536 << 2
    int32_t i_18 = 0
    v8 = fconvert.d(1.0)
    v9.d = fconvert.s(20f)
    int64_t x8_590 = 0x7fffffffffffffff s/ i_159
    var_5f0.q = x21_10
    var_510.o = v5
    var_500.o = v4
    var_530.o = v7
    var_520.o = v6
    var_550.o = v17
    int64_t var_540
    var_540.o = v16
    var_570.o = v19
    var_560.o = v18
    var_590.o = v21
    int64_t var_580
    var_580.o = v20
    int64_t var_5b0
    var_5b0.o = v23
    uint64_t var_5a0_2
    var_5a0_2.o = v22
    
    do
        std::__ndk1::to_string(i_18)
        int128_t* x0_173 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &i_146, nullptr)
        void* x8_593 = x0_173[1].q
        char v0_7 = (*x0_173).b
        __builtin_memset(x0_173, 0, 0x18)
        
        if ((zx.d(i_146.b) & 1) != 0)
            operator delete(var_190_1.q)
        
        int32_t i_111
        int64_t var_258
        int32_t* var_238
        void* const var_220
        void* i_161
        int32_t var_160
        int32_t* var_130
        
        if (*(var_5c8 * 0x80cf8 + 0x195e920) == 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_3f0)
            int64_t x22_12 = *x23_5
            int32_t x25_10 = *var_4c8.q
            int32_t x8_603 = var_5f0.d
            __builtin_memset(&i_174, 0, 0x48)
            i_215 = nullptr
            
            if (x8_603 != 0 && x22_12 != 0 && 0x7fffffffffffffff s/ x22_12 s< i_159)
                operator new(-1)
            
            int64_t x19_10 = x22_12 * i_159
            
            if (x19_10 != 0)
                if (x19_10 s< 1)
                    i_215 = nullptr
                else
                    if (x19_10 u>> 0x3e != 0)
                        operator new(-1)
                    
                    int64_t x19_11 = x19_10 << 2
                    int64_t x0_180 = malloc(x19_11 + 0x10)
                    void** i_245
                    
                    if (x0_180 == 0)
                        i_245 = nullptr
                        
                        if (x19_11 != 0)
                        label_c45068:
                            
                            if (i_245 == 0)
                                operator new(-1)
                    else
                        i_245 = (x0_180 + 0x10) & 0xfffffffffffffff0
                        i_245[-1] = x0_180
                        
                        if (x19_11 != 0)
                            goto label_c45068
                    
                    i_215 = i_245
            
            int64_t x9_567 = *x23_5
            int128_t* i_186 = *(x13_139 * 0x80cf8 + &data_195dc38)
            void* i_173 = i_159
            int64_t var_f0_2 = x22_12
            i_141 = i_159
            i_146 = i_186
            var_190_1.q = x9_567
            int128_t** var_188_7 = x13_139 * 0x80cf8 + &data_195dc38
            *var_600_1 = nullptr
            var_600_1[1] = 0
            int64_t var_170_4 = x9_567
            Eigen::Matrix<float, -1, -1, 0, -1, -1>::operator=<Eigen::Block<Eigen::Matrix<float, -1, -1, 1, -1, -1>, -1, -1, true> >(
                &i_215)
            int32_t x8_690 = *(x14_271 * 0x80cf8 + 0x195e914)
            size_t var_3e8
            void* var_3e0
            
            if (x8_690 s>= 0xd)
                if (x8_690 s< 0xf)
                    v8 = sub_c52eec(&i_215)
                else
                    uint64_t x8_691 = zx.q(var_3f0)
                    int64_t var_110_3 = 0
                    int32_t temp188_1 = x8_691.d & 1
                    size_t x24_14
                    
                    if (temp188_1 == 0)
                        x24_14 = x8_691 u>> 1
                    else
                        x24_14 = var_3e8
                    
                    var_118 = nullptr
                    void* var_108_3 = nullptr
                    void* x28_10
                    
                    x28_10 = temp188_1 == 0 ? x8_586 : var_3e0
                    
                    if (x24_14 + 0xb u>= -0x10)
                        goto label_c48af0
                    
                    void* x21_18
                    
                    if (x24_14 + 0xb u>= 0x17)
                        uint64_t x27_12 = (x24_14 + 0x1b) & 0xfffffffffffffff0
                        void* x0_245 = operator new(x27_12)
                        x21_18 = x0_245
                        var_108_3 = x0_245
                        var_118 = x27_12 | 1
                        size_t var_110_4 = x24_14
                        memcpy(x21_18, x28_10, x24_14)
                    else
                        x21_18 = &var_118 | 1
                        var_118.b = (x24_14.d << 1).b
                        
                        if (x24_14 != 0)
                            memcpy(x21_18, x28_10, x24_14)
                    
                    *(x21_18 + x24_14) = 0
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_118, "_layernorm1")
                    v8 = sub_c50890(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_215, &var_118)
                    
                    if ((zx.d(var_118.b) & 1) != 0)
                        operator delete(var_108_3)
            
            uint64_t x8_698 = zx.q(var_3f0)
            void* var_120_3 = nullptr
            int32_t temp187_1 = x8_698.d & 1
            size_t x24_15
            
            if (temp187_1 == 0)
                x24_15 = x8_698 u>> 1
            else
                x24_15 = var_3e8
            
            var_130 = nullptr
            int64_t var_128_3 = 0
            void* x28_11
            
            x28_11 = temp187_1 == 0 ? x8_586 : var_3e0
            
            if (x24_15 + 2 u>= -0x10)
                goto label_c48ab8
            
            void* x21_19
            
            if (x24_15 + 2 u>= 0x17)
                uint64_t x27_13 = (x24_15 + 0x12) & 0xfffffffffffffff0
                void* x0_251 = operator new(x27_13)
                x21_19 = x0_251
                var_120_3 = x0_251
                var_130 = x27_13 | 1
                size_t var_128_4 = x24_15
                memcpy(x21_19, x28_11, x24_15)
            else
                x21_19 = &var_130 | 1
                var_130.b = (x24_15.d << 1).b
                
                if (x24_15 != 0)
                    memcpy(x21_19, x28_11, x24_15)
            
            *(x21_19 + x24_15) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_130, 0x7882c9)
            int128_t v0_13
            int128_t v1_19
            v0_13, v1_19 =
                sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_215, &var_130, 0)
            int128_t* i_187 = var_b8.q
            var_b8.q = i_146
            i_146 = i_187
            i_176:7.o = i_141.o
            i_141.o = i_176:7.o
            
            if (i_187 != 0)
                free(*(i_187 - 8))
            
            if ((zx.d(var_130.b) & 1) != 0)
                operator delete(var_120_3)
            
            uint64_t x8_705 = zx.q(var_3f0)
            void* var_1e0_2 = nullptr
            int32_t temp194_1 = x8_705.d & 1
            size_t x24_16
            
            if (temp194_1 == 0)
                x24_16 = x8_705 u>> 1
            else
                x24_16 = var_3e8
            
            var_1f0 = 0
            int64_t var_1e8_3 = 0
            void* x28_12
            
            x28_12 = temp194_1 == 0 ? x8_586 : var_3e0
            
            int64_t x0_455
            char* x1_146
            
            if (x24_16 + 2 u>= -0x10)
            label_c48a88:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48a90:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48a98:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48aa0:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48aa8:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ab0:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ab8:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ac0:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ac8:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ad0:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ad8:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ae0:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48ae8:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
            label_c48af0:
                std::__ndk1::__basic_string_common<true>::__throw_length_error()
                x0_455, x1_146 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
                return sub_c48afc(x0_455, x1_146) __tailcall
            
            void* x21_20
            
            if (x24_16 + 2 u>= 0x17)
                uint64_t x27_14 = (x24_16 + 0x12) & 0xfffffffffffffff0
                void* x0_258 = operator new(x27_14)
                x21_20 = x0_258
                var_1e0_2 = x0_258
                var_1f0 = x27_14 | 1
                size_t var_1e8_4 = x24_16
                memcpy(x21_20, x28_12, x24_16)
            else
                x21_20 = x10_613
                var_1f0.b = (x24_16.d << 1).b
                
                if (x24_16 != 0)
                    memcpy(x21_20, x28_12, x24_16)
            
            *(x21_20 + x24_16) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_1f0, 0x733199)
            int128_t v0_14
            int128_t v1_20
            v0_14, v1_20 =
                sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_215, &var_1f0, 0)
            int128_t* i_188 = i_175
            i_175 = i_146
            i_146 = i_188
            int64_t var_c8_6
            v1_20 = var_c8_6.o
            var_c8_6.o = i_141.o
            i_141.o = v1_20
            
            if (i_188 != 0)
                free(*(i_188 - 8))
            
            if ((zx.d(var_1f0.b) & 1) != 0)
                operator delete(var_1e0_2)
            
            uint64_t x8_712 = zx.q(var_3f0)
            void* var_1f8_2 = nullptr
            int32_t temp201_1 = x8_712.d & 1
            size_t x24_17
            
            if (temp201_1 == 0)
                x24_17 = x8_712 u>> 1
            else
                x24_17 = var_3e8
            
            var_208 = 0
            int64_t var_200_3 = 0
            void* x28_13
            
            x28_13 = temp201_1 == 0 ? x8_586 : var_3e0
            
            if (x24_17 + 2 u>= -0x10)
                goto label_c48a90
            
            void* x21_21
            
            if (x24_17 + 2 u>= 0x17)
                uint64_t x27_15 = (x24_17 + 0x12) & 0xfffffffffffffff0
                void* x0_265 = operator new(x27_15)
                x21_21 = x0_265
                var_1f8_2 = x0_265
                var_208 = x27_15 | 1
                size_t var_200_4 = x24_17
                memcpy(x21_21, x28_13, x24_17)
            else
                x21_21 = x8_585
                var_208.b = (x24_17.d << 1).b
                
                if (x24_17 != 0)
                    memcpy(x21_21, x28_13, x24_17)
            
            *(x21_21 + x24_17) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_208, 0x767223)
            uint128_t v0_15
            uint128_t v1_21
            float128 v2_14
            float128 v3_11
            v0_15, v1_21, v2_14, v3_11 =
                sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_215, &var_208, 0)
            int128_t* i_189 = i_174
            i_174 = i_146
            i_146 = i_189
            int64_t var_e0_1
            v1_21 = var_e0_1.o
            var_e0_1.o = i_141.o
            i_141.o = v1_21
            
            if (i_189 != 0)
                v0_15, v1_21, v2_14, v3_11 = free(*(i_189 - 8))
            
            if ((zx.d(var_208.b) & 1) != 0)
                v0_15, v1_21, v2_14, v3_11 = operator delete(var_1f8_2)
            
            int64_t x21_22 = *var_5c0_2
            int32_t x9_575 = var_5f0.d
            __builtin_memset(&var_220, 0, 0x18)
            int64_t x19_18
            
            if (x9_575 == 0 || x21_22 == 0)
                x19_18 = x21_22 * i_159
                
                if (0 != x19_18)
                label_c45514:
                    void* const x8_722 = var_220
                    
                    if (x8_722 != 0)
                        v0_15, v1_21, v2_14, v3_11 = free(*(x8_722 - 8))
                    
                    if (x19_18 s< 1)
                        var_220 = nullptr
                    else
                        if (x19_18 u>> 0x3e != 0)
                            operator new(-1)
                        
                        int64_t x19_19 = x19_18 << 2
                        int64_t x0_273
                        x0_273, v0_15, v1_21, v2_14, v3_11 = malloc(x19_19 + 0x10)
                        void* const x23_9
                        
                        if (x0_273 == 0)
                            x23_9 = nullptr
                            
                            if (x19_19 != 0)
                            label_c45570:
                                
                                if (x23_9 == 0)
                                    v0_15, v1_21, v2_14, v3_11 = operator new(-1)
                        else
                            x23_9 = (x0_273 + 0x10) & 0xfffffffffffffff0
                            *(x23_9 - 8) = x0_273
                            
                            if (x19_19 != 0)
                                goto label_c45570
                        
                        var_220 = x23_9
            else if (0x7fffffffffffffff s/ x21_22 s>= i_159)
                x19_18 = x21_22 * i_159
                
                if (0 != x19_18)
                    goto label_c45514
            else
                v0_15, v1_21, v2_14, v3_11 = operator new(-1)
                x19_18 = x21_22 * i_159
                int64_t var_218_3
                int64_t var_210_2
                
                if (var_218_3 * var_210_2 != x19_18)
                    goto label_c45514
            int32_t x8_725 = var_5f0.d
            int64_t var_210_3 = x21_22
            __builtin_memset(&var_238, 0, 0x18)
            
            if (x8_725 != 0 && x8_590 s< i_159)
                v0_15, v1_21, v2_14, v3_11 = operator new(-1)
                int64_t var_230_3
                int64_t var_228_2
                
                if (var_230_3 * var_228_2 != x9_536)
                    goto label_c455e4
            else if (0 != x9_536)
            label_c455e4:
                int32_t* x8_729 = var_238
                
                if (x8_729 != 0)
                    v0_15, v1_21, v2_14, v3_11 = free(*(x8_729 - 8))
                
                if (x9_536 == 0)
                    var_238 = nullptr
                else
                    if (x9_536 u>> 0x3e != 0)
                        operator new(-1)
                    
                    int64_t x0_276
                    x0_276, v0_15, v1_21, v2_14, v3_11 = malloc(x9_537 + 0x10)
                    int32_t* x19_20
                    
                    if (x0_276 == 0)
                        x19_20 = nullptr
                        
                        if (x9_537 != 0)
                        label_c45644:
                            
                            if (x19_20 == 0)
                                v0_15, v1_21, v2_14, v3_11 = operator new(-1)
                    else
                        x19_20 = (x0_276 + 0x10) & 0xfffffffffffffff0
                        *(x19_20 - 8) = x0_276
                        
                        if (x9_537 != 0)
                            goto label_c45644
                    
                    var_238 = x19_20
            
            int32_t x8_735 = x22_12.d s/ x25_10
            int128_t* x9_580 = var_b8.q
            v0_15.q = float.d(sx.q(x8_735))
            int64_t var_a8_1
            int64_t x10_644 = var_a8_1 * i_176
            v0_15.q = sqrt(v0_15.q)
            v0_15.q = v8 f/ v0_15.q
            int64_t x11_394
            
            if (x10_644 s< 0)
                x11_394 = x10_644 + 3
            else
                x11_394 = x10_644
            
            v0_15.d = fconvert.s(v0_15.q)
            int64_t x11_395 = x11_394 & 0xfffffffffffffffc
            
            if (x10_644 s>= 4)
                int64_t x12_237 = 0
                v1_21 = vdupq_laneq_s32(v0_15, 0)
                int128_t* x13_209 = x9_580
                
                do
                    x12_237 += 4
                    *x13_209 = vmulq_f32(v1_21, *x13_209, 0)
                    x13_209 = &x13_209[1]
                while (x12_237 s< x11_395)
            
            if (x11_395 s< x10_644)
                int64_t x12_238 = x10_644 - x11_395
                int64_t x13_210 = x11_395
                int64_t j_441
                
                if (x12_238 u>= 8)
                    j_441 = x12_238 & 0xfffffffffffffff8
                    v1_21 = vdupq_laneq_s32(v0_15, 0)
                    x13_210 = x11_395 + j_441
                    void* x11_396 = x9_580 + (x11_395 << 2) + 0x10
                    int64_t j_345 = j_441
                    int64_t j_169
                    
                    do
                        v3_11 = *x11_396
                        j_169 = j_345
                        j_345 -= 8
                        v2_14 = vmulq_f32(*(x11_396 - 0x10), v1_21, 0)
                        v3_11 = vmulq_f32(v3_11, v1_21, 0)
                        *(x11_396 - 0x10) = v2_14
                        *x11_396 = v3_11
                        x11_396 += 0x20
                    while (j_169 != 8)
                
                if (x12_238 u< 8 || x12_238 != j_441)
                    int64_t j_287 = x10_644 - x13_210
                    int32_t* x9_581 = x9_580 + (x13_210 << 2)
                    int64_t j_170
                    
                    do
                        v1_21.d = *x9_581
                        j_170 = j_287
                        j_287 -= 1
                        v1_21.d = v1_21.d f* v0_15.d
                        *x9_581 = v1_21.d
                        x9_581 = &x9_581[1]
                    while (j_170 != 1)
            
            if (*var_4c8.q s>= 1)
                int64_t j_171 = 0
                int64_t x22_15 = sx.q(x8_735)
                
                do
                    void* i_148 = i_176
                    int64_t x24_18 = j_171 * x22_15
                    char* var_188_9 = &var_b8
                    int64_t var_138_1 = var_c8_6
                    var_160.q = var_c8_6
                    int128_t* i_203 = var_b8.q + ((i_148 * x24_18) << 2)
                    void* x10_648 = i_175 + ((var_c8_6 * x24_18) << 2)
                    var_190_1.q = x22_15
                    void*** var_150_2 = &i_175
                    int64_t var_148_2 = 0
                    var_180 = nullptr
                    int64_t var_178_4 = x24_18
                    int64_t var_140_2 = x24_18
                    int64_t var_158_2 = x22_15
                    i_146 = i_203
                    i_141 = i_148
                    void* i_170 = i_148
                    void* var_168_3 = x10_648
                    var_1d8.q = &var_238
                    float128 v0_16
                    float128 v1_22
                    float128 v2_15
                    float128 v3_12
                    float128 v5_3
                    float128 v17_2
                    float128 v18_2
                    float128 v19_2
                    float128 v20_2
                    float128 v21_2
                    float128 v22_2
                    float128 v23_2
                    float128 v24_2
                    float128 v25_2
                    float128 v26_2
                    float128 v27_2
                    float128 v28_2
                    float128 v29_2
                    v0_16, v1_22, v2_15, v3_12, v5_3, v17_2, v18_2, v19_2, v20_2, v21_2, v22_2, 
                        v23_2, v24_2, v25_2, v26_2, v27_2, v28_2, v29_2 = Eigen::NoAlias<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::MatrixBase>::operator=<Eigen::Product<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, Eigen::Transpose<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> >, 0> >(
                        &var_1d8)
                    int32_t* x27_16 = var_238
                    int64_t x28_14 = i_159 * i_159
                    int64_t x11_399
                    
                    if (x28_14 s< 0)
                        x11_399 = x28_14 + 7
                    else
                        x11_399 = x28_14
                    
                    int64_t x8_743
                    
                    if (x28_14 s< 0)
                        x8_743 = x28_14 + 3
                    else
                        x8_743 = x28_14
                    
                    int64_t x8_744 = x8_743 & 0xfffffffffffffffc
                    
                    if (x28_14 + 3 u>= 7)
                        v0_16 = *x27_16
                        
                        if (x28_14 s>= 8)
                            v1_22 = *(x27_16 + 0x10)
                            int64_t x11_401 = x11_399 & 0xfffffffffffffff8
                            
                            if (x28_14 s>= 0x10)
                                void* x12_240 = &x27_16[0xc]
                                int64_t x13_212 = 8
                                
                                do
                                    v2_15 = *(x12_240 - 0x10)
                                    v3_12 = *x12_240
                                    x13_212 += 8
                                    x12_240 += 0x20
                                    v0_16 = vmaxq_f32(v0_16, v2_15)
                                    v1_22 = vmaxq_f32(v1_22, v3_12)
                                while (x13_212 s< x11_401)
                            
                            v0_16 = vmaxq_f32(v0_16, v1_22)
                            
                            if (x8_744 s> x11_401)
                                v0_16 = vmaxq_f32(v0_16, *(x27_16 + (x11_401 << 2)))
                        
                        v1_22.d = v0_16:8.d
                        v2_15.d = v0_16:4.d
                        v3_12.d = v0_16:0xc.d
                        
                        if (v0_16.d f< v1_22.d)
                            v0_16.d = v1_22.d
                        else
                            v0_16.d = v0_16.d
                        
                        if (v2_15.d f< v3_12.d)
                            v1_22.d = v3_12.d
                        else
                            v1_22.d = v2_15.d
                        
                        if (v0_16.d f< v1_22.d)
                            v0_16.d = v1_22.d
                        else
                            v0_16.d = v0_16.d
                        
                        if (x8_744 s< x28_14)
                            int64_t k_15 = x28_14 + 3 - x8_744 - 3
                            void* x11_403 = &x27_16[x8_744]
                            int64_t k_2
                            
                            do
                                v1_22.d = *x11_403
                                x11_403 += 4
                                
                                if (v0_16.d f< v1_22.d)
                                    v0_16.d = v1_22.d
                                else
                                    v0_16.d = v0_16.d
                                
                                k_2 = k_15
                                k_15 -= 1
                            while (k_2 != 1)
                    else
                        v0_16.d = *x27_16
                        
                        if (x28_14 s>= 2)
                            int64_t k_14 = x28_14 - 1
                            void* x11_400 = &x27_16[1]
                            int64_t k_3
                            
                            do
                                v1_22.d = *x11_400
                                x11_400 += 4
                                
                                if (v0_16.d f< v1_22.d)
                                    v0_16.d = v1_22.d
                                else
                                    v0_16.d = v0_16.d
                                
                                k_3 = k_14
                                k_14 -= 1
                            while (k_3 != 1)
                    
                    Eigen::internal::assign_op<float, float> var_240
                    
                    if (not(v0_16.d f<= v9.d))
                        var_1d8.q = &var_238
                        void* i_165 = i_159
                        i_141 = nullptr
                        i_146 = nullptr
                        v0_16, v1_22, v5_3, v17_2, v18_2, v19_2, v20_2, v21_2, v22_2, v23_2, v24_2, 
                            v25_2, v26_2, v27_2, v28_2, v29_2 = Eigen::internal::call_dense_assignment_loop<Eigen::Matrix<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::internal::member_maxCoeff<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
                            &i_146, &var_1d8, &var_240)
                        int128_t* i_206 = i_146
                        void* i_204 = i_159
                        var_190_1.q = i_206
                        void* i_191 = i_159
                        int64_t var_188_10 = *(var_1d8.q + 8)
                        
                        if (i_204 s>= 1)
                            int32_t* x11_405 = var_238
                            int64_t x10_651 = 0
                            
                            do
                                if (i_191 s>= 1)
                                    int64_t x9_587 = 0
                                    
                                    do
                                        v1_22.d = x11_405[x9_587]
                                        x9_587 += 1
                                        v0_16.d = var_190_1.q[x9_587]
                                        v0_16.d = v1_22.d f- v0_16.d
                                        x11_405[x9_587] = v0_16.d
                                        i_191 = i_159
                                    while (x9_587 s< i_191)
                                    
                                    i_204 = i_159
                                
                                x10_651 += 1
                                x11_405 = &x11_405[i_191]
                            while (x10_651 s< i_204)
                            
                            i_206 = i_146
                        
                        if (i_206 != 0)
                            v0_16, v1_22, v5_3, v17_2, v18_2, v19_2, v20_2, v21_2, v22_2, v23_2, 
                                v24_2, v25_2, v26_2, v27_2, v28_2, v29_2 = free(*(i_206 - 8))
                            i_204 = i_159
                            i_191 = i_159
                        
                        x27_16 = var_238
                        x28_14 = i_204 * i_191
                        int64_t x8_748
                        
                        if (x28_14 s< 0)
                            x8_748 = x28_14 + 3
                        else
                            x8_748 = x28_14
                        
                        x8_744 = x8_748 & 0xfffffffffffffffc
                    
                    v17_2 = var_4e0.o
                    
                    if (x28_14 s>= 4)
                        int64_t x9_588 = 0
                        int32_t* x10_652 = x27_16
                        
                        do
                            v0_16 = *x10_652
                            v1_22.d = 0x3f000000
                            v1_22:4.d = 0x3f000000
                            v1_22:8.d = 0x3f000000
                            v1_22:0xc.d = 0x3f000000
                            float128 v6_6 = vmaxq_f32(vminq_f32(v0_16, var_500.o), var_510.o)
                            float128 v1_24 = vrndmq_f32(vfmaq_f32(v1_22, var_520.o, v6_6))
                            float128 v6_7 = vfmaq_f32(v6_6, var_530.o, v1_24)
                            float128 v7_3 = vmaxq_f32(v1_24, var_5a0_2.o)
                            float128 v6_8 = vfmaq_f32(v6_7, var_540.o, v1_24)
                            float128 v1_25 = vminq_f32(v7_3, var_5b0.o)
                            v5_3.d = 0x3f000000
                            v5_3:4.d = 0x3f000000
                            v5_3:8.d = 0x3f000000
                            v5_3:0xc.d = 0x3f000000
                            float128 v7_4 = vmulq_f32(v6_8, v6_8, 0)
                            float128 v2_17 = vfmaq_f32(var_560.o, var_550.o, v6_8)
                            uint128_t v3_14 = vfmaq_f32(var_580.o, var_570.o, v6_8)
                            uint128_t v1_26 = vcvtq_s32_f32(v1_25)
                            float128 v4_4 = vfmaq_f32(var_590.o, v6_8, v2_17)
                            float128 v2_18 = vmulq_f32(v6_8, v7_4, 0)
                            float128 v5_4 = vfmaq_f32(v5_3, v6_8, v3_14)
                            v3_14.d = v1_26.d s>> 2
                            v3_14:4.d = v1_26:4.d s>> 2
                            v3_14:8.d = v1_26:8.d s>> 2
                            v3_14:0xc.d = v1_26:0xc.d s>> 2
                            float128 v16_3 = vaddq_f32(v6_8, v17_2)
                            v5_3 = vfmaq_f32(v5_4, v2_18, v4_4)
                            v2_18.d = v3_14.d << 0x17
                            v2_18:4.d = v3_14:4.d << 0x17
                            v2_18:8.d = v3_14:8.d << 0x17
                            v2_18:0xc.d = v3_14:0xc.d << 0x17
                            float128 v16_4 = vfmaq_f32(v16_3, v7_4, v5_3)
                            float128 v2_19 = v2_18 i+ v17_2
                            uint128_t v1_27
                            v1_27.d = vmlaq_s32(v1_26, v3_14, not.o(zx.o(2))).d << 0x17
                            v1_27:4.d <<= 0x17
                            v1_27:8.d <<= 0x17
                            v1_27:0xc.d <<= 0x17
                            x9_588 += 4
                            *x10_652 = vmaxq_f32(
                                vmulq_f32(
                                    vmulq_f32(vmulq_f32(vmulq_f32(v16_4, v2_19, 0), v2_19, 0), 
                                        v2_19, 0), 
                                    v1_27 i+ v17_2, 0), 
                                v0_16)
                            x10_652 = &x10_652[4]
                        while (x9_588 s< x8_744)
                    
                    int64_t fp_3 = x28_14 - x8_744
                    
                    if (x28_14 s> x8_744)
                        int64_t x25_12
                        
                        if (fp_3 u>= 2)
                            int64_t k_21 = fp_3 & 0xfffffffffffffffe
                            x25_12 = x8_744 + k_21
                            void* x23_10 = &x27_16[x8_744]
                            int64_t k_19 = k_21
                            int64_t k_4
                            
                            do
                                v0_16.q = *x23_10
                                var_4c0.o = v0_16
                                v0_16.d = v0_16:4.d
                                var_4b0 = expf(v0_16.d)
                                expf(var_4c0.q.d)
                                k_4 = k_19
                                k_19 -= 2
                                v0_16:4.d = var_4b0.d
                                *x23_10 = v0_16.q
                                x23_10 += 8
                            while (k_4 != 2)
                            
                            if (fp_3 != k_21)
                                goto label_c45b58
                        else
                            x25_12 = x8_744
                        label_c45b58:
                            int64_t k_18 = x28_14 - x25_12
                            void* x23_11 = &x27_16[x25_12]
                            int64_t k_5
                            
                            do
                                v0_16.d = *x23_11
                                k_5 = k_18
                                k_18 -= 1
                                *x23_11 = expf(v0_16.d).d
                                x23_11 += 4
                            while (k_5 != 1)
                    
                    var_1d8.q = &var_238
                    void* i_166 = i_159
                    i_141 = nullptr
                    i_146 = nullptr
                    Eigen::internal::call_dense_assignment_loop<Eigen::Array<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::member_sum<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
                        &i_146, &var_1d8, &var_240)
                    int128_t* i_190 = i_146
                    void* i_211 = i_159
                    var_190_1.q = i_190
                    int64_t var_188_11 = *(var_1d8.q + 8)
                    
                    if (i_211 s>= 1)
                        void* i_209 = i_159
                        int32_t* x9_591 = var_238
                        int64_t x8_750 = 0
                        
                        do
                            if (i_209 s>= 1)
                                int64_t x12_242 = 0
                                
                                do
                                    x12_242 += 1
                                    x9_591[x12_242] = x9_591[x12_242] f/ var_190_1.q[x12_242]
                                    i_209 = i_159
                                while (x12_242 s< i_209)
                                
                                i_211 = i_159
                            
                            x8_750 += 1
                            x9_591 = &x9_591[i_209]
                        while (x8_750 s< i_211)
                        
                        i_190 = i_146
                        
                        if (i_190 != 0)
                            free(*(i_190 - 8))
                    else if (i_190 != 0)
                        free(*(i_190 - 8))
                    
                    int128_t* i_229 = i_174
                    var_180 = &i_174
                    int64_t var_168_2 = var_e0_1
                    var_190_1.q = var_e0_1
                    void* x8_738 = var_220 + ((i_159 * x24_18) << 2)
                    int64_t var_178_3 = 0
                    var_1c8.q = x22_15
                    int64_t* var_1c0_2 = &var_220
                    int64_t var_1b8_2 = 0
                    int64_t var_1b0_2 = x24_18
                    int64_t var_170_5 = x24_18
                    int64_t var_188_8 = x22_15
                    i_146 = &var_238
                    i_141 = i_229 + ((var_e0_1 * x24_18) << 2)
                    var_1d8.q = x8_738
                    void* i_162 = i_159
                    void* i_168 = i_159
                    Eigen::internal::generic_product_impl<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, Eigen::DenseShape, Eigen::DenseShape, 8>::evalTo<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> >(
                        &var_1d8, &var_238, var_5b8_2)
                    j_171 += 1
                while (j_171 s< sx.q(*var_4c8.q))
            
            __builtin_memset(&var_1d8, 0, 0x18)
            void* x19_21
            int32_t x22_16
            
            if (*(x14_271 * 0x80cf8 + 0x195e914) s> 0xe)
                uint64_t x8_757 = zx.q(var_3f0)
                x22_16 = x22_10
                int32_t temp236_1 = x8_757.d & 1
                size_t x24_20
                
                if (temp236_1 == 0)
                    x24_20 = x8_757 u>> 1
                else
                    x24_20 = var_3e8
                
                void* var_278_1 = nullptr
                int64_t var_288 = 0
                void* x28_16
                
                x28_16 = temp236_1 == 0 ? x8_586 : var_3e0
                
                int64_t var_280_1 = 0
                
                if (x24_20 + 0xa u>= -0x10)
                    goto label_c48ad0
                
                void* x21_24
                
                if (x24_20 + 0xa u>= 0x17)
                    uint64_t x27_18 = (x24_20 + 0x1a) & 0xfffffffffffffff0
                    void* x0_291 = operator new(x27_18)
                    x21_24 = x0_291
                    var_278_1 = x0_291
                    var_288 = x27_18 | 1
                    size_t var_280_2 = x24_20
                    memcpy(x21_24, x28_16, x24_20)
                else
                    x21_24 = &var_288 | 1
                    var_288.b = (x24_20.d << 1).b
                    
                    if (x24_20 != 0)
                        memcpy(x21_24, x28_16, x24_20)
                
                *(x21_24 + x24_20) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_288, "_attention")
                float128 v0_20
                float128 v1_31
                float128 v2_21
                float128 v3_17
                v0_20, v1_31, v2_21, v3_17 = sub_c48bf4(&i_146, 
                    &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_220, &var_288, 0)
                int128_t* i_192 = i_146
                
                if ((x22_16 & 0x80000000) != 0)
                    x19_21 = var_5c0_2
                    
                    if (i_192 != 0)
                        free(*(i_192 - 8))
                else
                    x19_21 = var_5c0_2
                    int64_t x9_596 = *x19_21
                    
                    if (x9_596 s>= 1)
                        void* i_154 = i_141
                        int128_t* x12_244 = *(x13_139 * 0x80cf8 + &data_195dc38)
                        int64_t x10_657 = 0
                        int64_t x11_410 = 0
                        int64_t j_442 = x9_596 & 0xfffffffffffffff8
                        void* x16_381 = &i_192[1]
                        void* x17_222 = &x12_244[1]
                        
                        do
                            int64_t x3_28
                            
                            if (((x9_596 u> 7 ? 1 : 0) & (i_154 == 1 ? 1 : 0)) != 0)
                                x3_28 = x9_596 * x11_410
                            
                            int64_t j_475
                            
                            if (((x9_596 u> 7 ? 1 : 0) & (i_154 == 1 ? 1 : 0)) != 0 && (
                                    x12_244 + (x3_28 << 2) u>= i_192 + ((x9_596 + x11_410) << 2)
                                    || i_192 + (x11_410 << 2)
                                    u>= x12_244 + ((x9_596 + x3_28) << 2)))
                                int64_t j_275 = j_442
                                void* x4_19 = x16_381
                                void* x5_15 = x17_222
                                int64_t j_172
                                
                                do
                                    v0_20 = *(x4_19 - 0x10)
                                    v1_31 = *x4_19
                                    v3_17 = *x5_15
                                    j_172 = j_275
                                    j_275 -= 8
                                    x4_19 += i_154 << 5
                                    v0_20 = vaddq_f32(v0_20, *(x5_15 - 0x10))
                                    v1_31 = vaddq_f32(v1_31, v3_17)
                                    *(x5_15 - 0x10) = v0_20
                                    *x5_15 = v1_31
                                    x5_15 += 0x20
                                while (j_172 != 8)
                                j_475 = j_442
                                
                                if (x9_596 != j_442)
                                    goto label_c45ed0
                            else
                                j_475 = 0
                            label_c45ed0:
                                int64_t j_274 = x9_596 - j_475
                                void* x4_18 = i_192 + ((x11_410 + i_154 * j_475) << 2)
                                void* x5_14 = x12_244 + ((j_475 + x10_657) << 2)
                                int64_t j_173
                                
                                do
                                    v0_20.d = *x4_18
                                    v1_31.d = *x5_14
                                    j_173 = j_274
                                    j_274 -= 1
                                    x4_18 += i_154 << 2
                                    v0_20.d = v0_20.d f+ v1_31.d
                                    *x5_14 = v0_20.d
                                    x5_14 += 4
                                while (j_173 != 1)
                            x11_410 += 1
                            x17_222 += x9_596 << 2
                            x16_381 += 4
                            x10_657 += x9_596
                        while (x11_410 != i_159)
                        
                        i_192 = i_146
                    
                    if (i_192 != 0)
                        free(*(i_192 - 8))
                
                if ((zx.d(var_288.b) & 1) != 0)
                    operator delete(var_278_1)
                
                v0_20.d = fconvert.s(1f)
                var_4b0.o = v0_20
            else
                uint64_t x8_753 = zx.q(var_3f0)
                x22_16 = x22_10
                int32_t temp237_1 = x8_753.d & 1
                size_t x24_19
                
                if (temp237_1 == 0)
                    x24_19 = x8_753 u>> 1
                else
                    x24_19 = var_3e8
                
                int64_t var_250_1 = 0
                var_258 = 0
                void* x28_15
                
                x28_15 = temp237_1 == 0 ? x8_586 : var_3e0
                
                void* var_248_1 = nullptr
                
                if (x24_19 + 0xd u>= -0x10)
                    goto label_c48ac8
                
                void* x21_23
                
                if (x24_19 + 0xd u>= 0x17)
                    uint64_t x27_17 = (x24_19 + 0x1d) & 0xfffffffffffffff0
                    void* x0_284 = operator new(x27_17)
                    x21_23 = x0_284
                    var_248_1 = x0_284
                    var_258 = x27_17 | 1
                    size_t var_250_2 = x24_19
                    memcpy(x21_23, x28_15, x24_19)
                else
                    x21_23 = &var_258 | 1
                    var_258.b = (x24_19.d << 1).b
                    
                    if (x24_19 != 0)
                        memcpy(x21_23, x28_15, x24_19)
                
                *(x21_23 + x24_19) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_258, "_rezero/alpha")
                int64_t* x0_288
                int128_t v0_19
                x0_288, v0_19 = sub_c4aa70(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_258)
                v0_19.d = **x0_288
                var_4b0.o = v0_19
                
                if ((zx.d(var_258.b) & 1) != 0)
                    operator delete(var_248_1)
                
                uint64_t x8_764 = zx.q(var_3f0)
                void* var_260_1 = nullptr
                int32_t temp250_1 = x8_764.d & 1
                size_t x24_21
                
                if (temp250_1 == 0)
                    x24_21 = x8_764 u>> 1
                else
                    x24_21 = var_3e8
                
                int64_t var_270 = 0
                int64_t var_268_1 = 0
                void* x28_17
                
                x28_17 = temp250_1 == 0 ? x8_586 : var_3e0
                
                if (x24_21 + 0xa u>= -0x10)
                    goto label_c48ae8
                
                void* x21_25
                
                if (x24_21 + 0xa u>= 0x17)
                    uint64_t x27_19 = (x24_21 + 0x1a) & 0xfffffffffffffff0
                    void* x0_299 = operator new(x27_19)
                    x21_25 = x0_299
                    var_260_1 = x0_299
                    var_270 = x27_19 | 1
                    size_t var_268_2 = x24_21
                    memcpy(x21_25, x28_17, x24_21)
                else
                    x21_25 = &var_270 | 1
                    var_270.b = (x24_21.d << 1).b
                    
                    if (x24_21 != 0)
                        memcpy(x21_25, x28_17, x24_21)
                
                *(x21_25 + x24_21) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_270, "_attention")
                float128 v1_32
                float128 v2_22
                float128 v3_18
                float128 v4_5
                uint128_t v5_5
                v1_32, v2_22, v3_18, v4_5, v5_5 = sub_c48bf4(&i_146, 
                    &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_220, &var_270, 0)
                int128_t* i_193 = i_146
                
                if ((x22_16 & 0x80000000) != 0)
                    x19_21 = var_5c0_2
                    
                    if (i_193 != 0)
                        free(*(i_193 - 8))
                else
                    x19_21 = var_5c0_2
                    int64_t x9_597 = *x19_21
                    
                    if (x9_597 s>= 1)
                        void* i_155 = i_141
                        v5_5 = var_4b0.o
                        int128_t* x12_246 = *(x13_139 * 0x80cf8 + &data_195dc38)
                        int64_t x10_658 = 0
                        int64_t x11_411 = 0
                        int64_t j_443 = x9_597 & 0xfffffffffffffff8
                        uint128_t v0_21 = vdupq_laneq_s32(v5_5, 0)
                        void* x16_382 = &i_193[1]
                        void* x17_223 = &x12_246[1]
                        
                        do
                            int64_t x3_32
                            
                            if (((x9_597 u> 7 ? 1 : 0) & (i_155 == 1 ? 1 : 0)) != 0)
                                x3_32 = x9_597 * x11_411
                            
                            int64_t j_476
                            
                            if (((x9_597 u> 7 ? 1 : 0) & (i_155 == 1 ? 1 : 0)) != 0 && (
                                    x12_246 + (x3_32 << 2) u>= i_193 + ((x9_597 + x11_411) << 2)
                                    || i_193 + (x11_411 << 2)
                                    u>= x12_246 + ((x9_597 + x3_32) << 2)))
                                int64_t j_277 = j_443
                                void* x4_24 = x16_382
                                void* x5_19 = x17_223
                                int64_t j_174
                                
                                do
                                    v1_32 = *(x4_24 - 0x10)
                                    v2_22 = *x4_24
                                    v3_18 = *(x5_19 - 0x10)
                                    v4_5 = *x5_19
                                    j_174 = j_277
                                    j_277 -= 8
                                    x4_24 += i_155 << 5
                                    float128 v1_33 = vmulq_f32(v0_21, v1_32, 0)
                                    float128 v2_23 = vmulq_f32(v0_21, v2_22, 0)
                                    v1_32 = vaddq_f32(v1_33, v3_18)
                                    v2_22 = vaddq_f32(v2_23, v4_5)
                                    *(x5_19 - 0x10) = v1_32
                                    *x5_19 = v2_22
                                    x5_19 += 0x20
                                while (j_174 != 8)
                                j_476 = j_443
                                
                                if (x9_597 != j_443)
                                    goto label_c46084
                            else
                                j_476 = 0
                            label_c46084:
                                int64_t j_276 = x9_597 - j_476
                                void* x4_23 = i_193 + ((x11_411 + i_155 * j_476) << 2)
                                void* x5_18 = x12_246 + ((j_476 + x10_658) << 2)
                                int64_t j_175
                                
                                do
                                    v1_32.d = *x4_23
                                    v2_22.d = *x5_18
                                    j_175 = j_276
                                    j_276 -= 1
                                    x4_23 += i_155 << 2
                                    v1_32.d = v5_5.d f* v1_32.d
                                    v1_32.d = v1_32.d f+ v2_22.d
                                    *x5_18 = v1_32.d
                                    x5_18 += 4
                                while (j_175 != 1)
                            x11_411 += 1
                            x17_223 += x9_597 << 2
                            x16_382 += 4
                            x10_658 += x9_597
                        while (x11_411 != i_159)
                        
                        i_193 = i_146
                    
                    if (i_193 != 0)
                        free(*(i_193 - 8))
                
                if ((zx.d(var_270.b) & 1) != 0)
                    operator delete(var_260_1)
            
            int64_t x9_598 = *x19_21
            int128_t* i_194 = *(x13_139 * 0x80cf8 + &data_195dc38)
            i_141 = i_159
            var_190_1.q = x9_598
            int128_t** var_188_12 = x13_139 * 0x80cf8 + &data_195dc38
            i_146 = i_194
            *var_600_1 = nullptr
            var_600_1[1] = 0
            int64_t var_170_6 = x9_598
            Eigen::Matrix<float, -1, -1, 0, -1, -1>::operator=<Eigen::Block<Eigen::Matrix<float, -1, -1, 1, -1, -1>, -1, -1, true> >(
                &i_215)
            i_111 = i_18
            int32_t x8_776 = *(x14_271 * 0x80cf8 + 0x195e914)
            
            if (x8_776 s>= 0xd)
                if (x8_776 s< 0xf)
                    v8 = sub_c52eec(&i_215)
                else
                    uint64_t x8_777 = zx.q(var_3f0)
                    int64_t var_298_1 = 0
                    int32_t temp257_1 = x8_777.d & 1
                    size_t x24_22
                    
                    if (temp257_1 == 0)
                        x24_22 = x8_777 u>> 1
                    else
                        x24_22 = var_3e8
                    
                    int64_t var_2a0 = 0
                    void* var_290_1 = nullptr
                    void* x28_18
                    
                    x28_18 = temp257_1 == 0 ? x8_586 : var_3e0
                    
                    if (x24_22 + 0xb u>= -0x10)
                        x0_455, x1_146 =
                            std::__ndk1::__basic_string_common<true>::__throw_length_error()
                        return sub_c48afc(x0_455, x1_146) __tailcall
                    
                    void* x21_26
                    
                    if (x24_22 + 0xb u>= 0x17)
                        uint64_t x27_20 = (x24_22 + 0x1b) & 0xfffffffffffffff0
                        void* x0_309 = operator new(x27_20)
                        x21_26 = x0_309
                        var_290_1 = x0_309
                        var_2a0 = x27_20 | 1
                        size_t var_298_2 = x24_22
                        memcpy(x21_26, x28_18, x24_22)
                    else
                        x21_26 = &var_2a0 | 1
                        var_2a0.b = (x24_22.d << 1).b
                        
                        if (x24_22 != 0)
                            memcpy(x21_26, x28_18, x24_22)
                    
                    *(x21_26 + x24_22) = 0
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_2a0, "_layernorm2")
                    v8 = sub_c50890(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_215, &var_2a0)
                    
                    if ((zx.d(var_2a0.b) & 1) != 0)
                        operator delete(var_290_1)
            
            uint64_t x8_784 = zx.q(var_3f0)
            void* var_2a8_1 = nullptr
            int32_t temp254_1 = x8_784.d & 1
            size_t x24_23
            
            if (temp254_1 == 0)
                x24_23 = x8_784 u>> 1
            else
                x24_23 = var_3e8
            
            int64_t var_2b8 = 0
            int64_t var_2b0_1 = 0
            void* x28_19
            
            x28_19 = temp254_1 == 0 ? x8_586 : var_3e0
            
            if (x24_23 + 7 u>= -0x10)
                goto label_c48ac0
            
            void* x21_27
            
            if (x24_23 + 7 u>= 0x17)
                uint64_t x27_21 = (x24_23 + 0x17) & 0xfffffffffffffff0
                void* x0_315 = operator new(x27_21)
                x21_27 = x0_315
                var_2a8_1 = x0_315
                var_2b8 = x27_21 | 1
                size_t var_2b0_2 = x24_23
                memcpy(x21_27, x28_19, x24_23)
            else
                x21_27 = &var_2b8 | 1
                var_2b8.b = (x24_23.d << 1).b
                
                if (x24_23 != 0)
                    memcpy(x21_27, x28_19, x24_23)
            
            *(x21_27 + x24_23) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_2b8, "_dense1")
            int128_t v0_22
            int128_t v1_34
            v0_22, v1_34 =
                sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_215, &var_2b8, 1)
            int128_t* i_195 = var_1d8.q
            var_1d8.q = i_146
            i_146 = i_195
            v1_34 = i_161.o
            i_161.o = i_141.o
            i_141.o = v1_34
            
            if (i_195 != 0)
                free(*(i_195 - 8))
            
            if ((zx.d(var_2b8.b) & 1) != 0)
                operator delete(var_2a8_1)
            
            if (*(x14_271 * 0x80cf8 + 0x195e914) s> 0xe)
                uint64_t x8_797 = zx.q(var_3f0)
                void* var_2d8_1 = nullptr
                int32_t temp262_1 = x8_797.d & 1
                size_t x24_25
                
                if (temp262_1 == 0)
                    x24_25 = x8_797 u>> 1
                else
                    x24_25 = var_3e8
                
                int64_t var_2e8 = 0
                int64_t var_2e0_1 = 0
                void* x28_21
                
                x28_21 = temp262_1 == 0 ? x8_586 : var_3e0
                
                if (x24_25 + 7 u>= -0x10)
                    goto label_c48ae0
                
                void* x21_29
                
                if (x24_25 + 7 u>= 0x17)
                    uint64_t x27_23 = (x24_25 + 0x17) & 0xfffffffffffffff0
                    void* x0_328 = operator new(x27_23)
                    x21_29 = x0_328
                    var_2d8_1 = x0_328
                    var_2e8 = x27_23 | 1
                    size_t var_2e0_2 = x24_25
                    memcpy(x21_29, x28_21, x24_25)
                else
                    x21_29 = &var_2e8 | 1
                    var_2e8.b = (x24_25.d << 1).b
                    
                    if (x24_25 != 0)
                        memcpy(x21_29, x28_21, x24_25)
                
                *(x21_29 + x24_25) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_2e8, "_dense2")
                float128 v1_37
                float128 v2_26
                float128 v3_20
                v0_6, v1_37, v2_26, v3_20 = sub_c48bf4(&i_146, 
                    &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_1d8, &var_2e8, 0)
                int128_t* i_197 = i_146
                
                if ((x22_16 & 0x80000000) != 0)
                    x23_5 = var_5c0_2
                    
                    if (i_197 != 0)
                        free(*(i_197 - 8))
                else
                    x23_5 = var_5c0_2
                    int64_t x9_605 = *x23_5
                    
                    if (x9_605 s>= 1)
                        void* i_157 = i_141
                        int128_t* x12_250 = *(x13_139 * 0x80cf8 + &data_195dc38)
                        int64_t x10_665 = 0
                        int64_t x11_417 = 0
                        int64_t j_445 = x9_605 & 0xfffffffffffffff8
                        void* x16_384 = &i_197[1]
                        void* x17_225 = &x12_250[1]
                        
                        do
                            int64_t x3_41
                            
                            if (((x9_605 u> 7 ? 1 : 0) & (i_157 == 1 ? 1 : 0)) != 0)
                                x3_41 = x9_605 * x11_417
                            
                            int64_t j_478
                            
                            if (((x9_605 u> 7 ? 1 : 0) & (i_157 == 1 ? 1 : 0)) != 0 && (
                                    x12_250 + (x3_41 << 2) u>= i_197 + ((x9_605 + x11_417) << 2)
                                    || i_197 + (x11_417 << 2)
                                    u>= x12_250 + ((x9_605 + x3_41) << 2)))
                                int64_t j_281 = j_445
                                void* x4_34 = x16_384
                                void* x5_27 = x17_225
                                int64_t j_176
                                
                                do
                                    v0_6 = *(x4_34 - 0x10)
                                    v1_37 = *x4_34
                                    v3_20 = *x5_27
                                    j_176 = j_281
                                    j_281 -= 8
                                    x4_34 += i_157 << 5
                                    v0_6 = vaddq_f32(v0_6, *(x5_27 - 0x10))
                                    v1_37 = vaddq_f32(v1_37, v3_20)
                                    *(x5_27 - 0x10) = v0_6
                                    *x5_27 = v1_37
                                    x5_27 += 0x20
                                while (j_176 != 8)
                                j_478 = j_445
                                
                                if (x9_605 != j_445)
                                    goto label_c466a8
                            else
                                j_478 = 0
                            label_c466a8:
                                int64_t j_280 = x9_605 - j_478
                                void* x4_33 = i_197 + ((x11_417 + i_157 * j_478) << 2)
                                void* x5_26 = x12_250 + ((j_478 + x10_665) << 2)
                                int64_t j_177
                                
                                do
                                    v0_6.d = *x4_33
                                    v1_37.d = *x5_26
                                    j_177 = j_280
                                    j_280 -= 1
                                    x4_33 += i_157 << 2
                                    v0_6.d = v0_6.d f+ v1_37.d
                                    *x5_26 = v0_6.d
                                    x5_26 += 4
                                while (j_177 != 1)
                            x11_417 += 1
                            x17_225 += x9_605 << 2
                            x16_384 += 4
                            x10_665 += x9_605
                        while (x11_417 != i_159)
                        
                        i_197 = i_146
                    
                    if (i_197 != 0)
                        free(*(i_197 - 8))
                
                if ((zx.d(var_2e8.b) & 1) != 0)
                    operator delete(var_2d8_1)
            else
                uint64_t x8_793 = zx.q(var_3f0)
                void* var_2c0_1 = nullptr
                int32_t temp263_1 = x8_793.d & 1
                size_t x24_24
                
                if (temp263_1 == 0)
                    x24_24 = x8_793 u>> 1
                else
                    x24_24 = var_3e8
                
                int64_t var_2d0 = 0
                int64_t var_2c8_1 = 0
                void* x28_20
                
                x28_20 = temp263_1 == 0 ? x8_586 : var_3e0
                
                if (x24_24 + 7 u>= -0x10)
                    goto label_c48ad8
                
                void* x21_28
                
                if (x24_24 + 7 u>= 0x17)
                    uint64_t x27_22 = (x24_24 + 0x17) & 0xfffffffffffffff0
                    void* x0_322 = operator new(x27_22)
                    x21_28 = x0_322
                    var_2c0_1 = x0_322
                    var_2d0 = x27_22 | 1
                    size_t var_2c8_2 = x24_24
                    memcpy(x21_28, x28_20, x24_24)
                else
                    x21_28 = &var_2d0 | 1
                    var_2d0.b = (x24_24.d << 1).b
                    
                    if (x24_24 != 0)
                        memcpy(x21_28, x28_20, x24_24)
                
                *(x21_28 + x24_24) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_2d0, "_dense2")
                float128 v1_35
                float128 v2_24
                float128 v3_19
                float128 v4_6
                uint128_t v5_6
                v1_35, v2_24, v3_19, v4_6, v5_6 = sub_c48bf4(&i_146, 
                    &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_1d8, &var_2d0, 0)
                int128_t* i_196 = i_146
                
                if ((x22_16 & 0x80000000) != 0)
                    x23_5 = var_5c0_2
                    
                    if (i_196 != 0)
                        free(*(i_196 - 8))
                else
                    x23_5 = var_5c0_2
                    int64_t x9_604 = *x23_5
                    
                    if (x9_604 s>= 1)
                        void* i_156 = i_141
                        v5_6 = var_4b0.o
                        int128_t* x12_248 = *(x13_139 * 0x80cf8 + &data_195dc38)
                        int64_t x10_664 = 0
                        int64_t x11_416 = 0
                        int64_t j_444 = x9_604 & 0xfffffffffffffff8
                        v0_6 = vdupq_laneq_s32(v5_6, 0)
                        void* x16_383 = &i_196[1]
                        void* x17_224 = &x12_248[1]
                        
                        do
                            int64_t x3_37
                            
                            if (((x9_604 u> 7 ? 1 : 0) & (i_156 == 1 ? 1 : 0)) != 0)
                                x3_37 = x9_604 * x11_416
                            
                            int64_t j_477
                            
                            if (((x9_604 u> 7 ? 1 : 0) & (i_156 == 1 ? 1 : 0)) != 0 && (
                                    x12_248 + (x3_37 << 2) u>= i_196 + ((x9_604 + x11_416) << 2)
                                    || i_196 + (x11_416 << 2)
                                    u>= x12_248 + ((x9_604 + x3_37) << 2)))
                                int64_t j_279 = j_444
                                void* x4_29 = x16_383
                                void* x5_23 = x17_224
                                int64_t j_178
                                
                                do
                                    v1_35 = *(x4_29 - 0x10)
                                    v2_24 = *x4_29
                                    v3_19 = *(x5_23 - 0x10)
                                    v4_6 = *x5_23
                                    j_178 = j_279
                                    j_279 -= 8
                                    x4_29 += i_156 << 5
                                    float128 v1_36 = vmulq_f32(v0_6, v1_35, 0)
                                    float128 v2_25 = vmulq_f32(v0_6, v2_24, 0)
                                    v1_35 = vaddq_f32(v1_36, v3_19)
                                    v2_24 = vaddq_f32(v2_25, v4_6)
                                    *(x5_23 - 0x10) = v1_35
                                    *x5_23 = v2_24
                                    x5_23 += 0x20
                                while (j_178 != 8)
                                j_477 = j_444
                                
                                if (x9_604 != j_444)
                                    goto label_c4651c
                            else
                                j_477 = 0
                            label_c4651c:
                                int64_t j_278 = x9_604 - j_477
                                void* x4_28 = i_196 + ((x11_416 + i_156 * j_477) << 2)
                                void* x5_22 = x12_248 + ((j_477 + x10_664) << 2)
                                int64_t j_179
                                
                                do
                                    v1_35.d = *x4_28
                                    v2_24.d = *x5_22
                                    j_179 = j_278
                                    j_278 -= 1
                                    x4_28 += i_156 << 2
                                    v1_35.d = v5_6.d f* v1_35.d
                                    v1_35.d = v1_35.d f+ v2_24.d
                                    *x5_22 = v1_35.d
                                    x5_22 += 4
                                while (j_179 != 1)
                            x11_416 += 1
                            x17_224 += x9_604 << 2
                            x16_383 += 4
                            x10_664 += x9_604
                        while (x11_416 != i_159)
                        
                        i_196 = i_146
                    
                    if (i_196 != 0)
                        free(*(i_196 - 8))
                
                if ((zx.d(var_2d0.b) & 1) != 0)
                    operator delete(var_2c0_1)
            
            void* x8_807 = var_1d8.q
            
            if (x8_807 != 0)
                free(*(x8_807 - 8))
            
            int32_t* x8_808 = var_238
            
            if (x8_808 != 0)
                free(*(x8_808 - 8))
            
            void* const x8_809 = var_220
            
            if (x8_809 != 0)
                free(*(x8_809 - 8))
            
            void** i_239 = i_215
            
            if (i_239 != 0)
                free(i_239[-1])
            
            int128_t* i_220 = i_174
            
            if (i_220 != 0)
                free(*(i_220 - 8))
            
            void** i_221 = i_175
            
            if (i_221 != 0)
                free(i_221[-1])
            
            void* x8_810 = var_b8.q
            
            if (x8_810 != 0)
                free(*(x8_810 - 8))
            
            if ((zx.d(var_3f0) & 1) != 0)
                operator delete(var_3e0)
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_3d8)
            int64_t x22_11 = *x23_5
            __builtin_memset(&var_b8, 0, 0x18)
            int32_t x25_9 = *var_4c8.q
            int32_t x8_598 = var_5f0.d
            i_175 = nullptr
            
            if (x8_598 != 0 && x22_11 != 0 && 0x7fffffffffffffff s/ x22_11 s< i_159)
                operator new(-1)
            
            int64_t x19_8 = x22_11 * i_159
            
            if (x19_8 != 0)
                if (x19_8 s< 1)
                    i_175 = nullptr
                else
                    if (x19_8 u>> 0x3e != 0)
                        operator new(-1)
                    
                    int64_t x19_9 = x19_8 << 2
                    int64_t x0_177 = malloc(x19_9 + 0x10)
                    void** i_236
                    
                    if (x0_177 == 0)
                        i_236 = nullptr
                        
                        if (x19_9 != 0)
                        label_c44084:
                            
                            if (i_236 == 0)
                                operator new(-1)
                    else
                        i_236 = (x0_177 + 0x10) & 0xfffffffffffffff0
                        i_236[-1] = x0_177
                        
                        if (x19_9 != 0)
                            goto label_c44084
                    
                    i_175 = i_236
            
            int64_t x9_539 = *x23_5
            int128_t* i_179 = *(x13_139 * 0x80cf8 + &data_195dc38)
            int64_t var_c0_1 = x22_11
            i_141 = i_159
            i_146 = i_179
            var_190_1.q = x9_539
            int128_t** var_188_1 = x13_139 * 0x80cf8 + &data_195dc38
            *var_600_1 = nullptr
            var_600_1[1] = 0
            int64_t var_170_1 = x9_539
            Eigen::Matrix<float, -1, -1, 0, -1, -1>::operator=<Eigen::Block<Eigen::Matrix<float, -1, -1, 1, -1, -1>, -1, -1, true> >(
                &i_175)
            uint64_t x8_608 = zx.q(var_3d8)
            void* var_d8_1 = nullptr
            int32_t temp186_1 = x8_608.d & 1
            uint64_t var_3d0
            uint64_t x24_7
            
            if (temp186_1 == 0)
                x24_7 = x8_608 u>> 1
            else
                x24_7 = var_3d0
            
            i_174 = nullptr
            int64_t var_e0_2 = 0
            void* var_3c8
            void* x28_3
            
            x28_3 = temp186_1 == 0 ? x8_583 : var_3c8
            
            if (x24_7 + 0xb u>= -0x10)
                goto label_c48a98
            
            void* x21_11
            
            if (x24_7 + 0xb u>= 0x17)
                uint64_t x27_5 = (x24_7 + 0x1b) & 0xfffffffffffffff0
                void* x0_183 = operator new(x27_5)
                x21_11 = x0_183
                var_d8_1 = x0_183
                i_174 = x27_5 | 1
                uint64_t var_e0_3 = x24_7
                memcpy(x21_11, x28_3, x24_7)
            else
                x21_11 = &i_174 | 1
                i_174.b = (x24_7.d << 1).b
                
                if (x24_7 != 0)
                    memcpy(x21_11, x28_3, x24_7)
            
            *(x21_11 + x24_7) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &i_174, "_layernorm1")
            int64_t v8_1 = sub_c50890(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_175, &i_174)
            
            if ((zx.d(i_174.b) & 1) != 0)
                operator delete(var_d8_1)
            
            uint64_t x8_615 = zx.q(var_3d8)
            void* var_f0_1 = nullptr
            int32_t temp193_1 = x8_615.d & 1
            uint64_t x24_8
            
            if (temp193_1 == 0)
                x24_8 = x8_615 u>> 1
            else
                x24_8 = var_3d0
            
            i_215 = nullptr
            int64_t var_f8_1 = 0
            void* x28_4
            
            x28_4 = temp193_1 == 0 ? x8_583 : var_3c8
            
            if (x24_8 + 2 u>= -0x10)
                goto label_c48aa0
            
            void* x21_12
            
            if (x24_8 + 2 u>= 0x17)
                uint64_t x27_6 = (x24_8 + 0x12) & 0xfffffffffffffff0
                void* x0_189 = operator new(x27_6)
                x21_12 = x0_189
                var_f0_1 = x0_189
                i_215 = x27_6 | 1
                uint64_t var_f8_2 = x24_8
                memcpy(x21_12, x28_4, x24_8)
            else
                x21_12 = &i_215 | 1
                i_215.b = (x24_8.d << 1).b
                
                if (x24_8 != 0)
                    memcpy(x21_12, x28_4, x24_8)
            
            *(x21_12 + x24_8) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &i_215, 0x7882c9)
            uint128_t v0_8
            uint128_t v1_7
            float128 v2_5
            float128 v3_3
            v0_8, v1_7, v2_5, v3_3 =
                sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_175, &i_215, 0)
            int128_t* i_180 = var_b8.q
            var_b8.q = i_146
            i_146 = i_180
            i_176:7.o = i_141.o
            i_141.o = i_176:7.o
            
            if (i_180 != 0)
                v0_8, v1_7, v2_5, v3_3 = free(*(i_180 - 8))
            
            if ((zx.d(i_215.b) & 1) != 0)
                v0_8, v1_7, v2_5, v3_3 = operator delete(var_f0_1)
            
            int64_t x21_13 = *var_5c0_2
            int32_t x9_543 = var_5f0.d
            __builtin_memset(&var_118, 0, 0x18)
            int64_t x19_13
            
            if (x9_543 == 0 || x21_13 == 0)
                x19_13 = x21_13 * i_159
                
                if (0 != x19_13)
                label_c44300:
                    void* const x8_625 = var_118
                    
                    if (x8_625 != 0)
                        v0_8, v1_7, v2_5, v3_3 = free(*(x8_625 - 8))
                    
                    if (x19_13 s< 1)
                        var_118 = nullptr
                    else
                        if (x19_13 u>> 0x3e != 0)
                            operator new(-1)
                        
                        int64_t x19_14 = x19_13 << 2
                        int64_t x0_197
                        x0_197, v0_8, v1_7, v2_5, v3_3 = malloc(x19_14 + 0x10)
                        void* const x23_6
                        
                        if (x0_197 == 0)
                            x23_6 = nullptr
                            
                            if (x19_14 != 0)
                            label_c44380:
                                
                                if (x23_6 == 0)
                                    v0_8, v1_7, v2_5, v3_3 = operator new(-1)
                        else
                            x23_6 = (x0_197 + 0x10) & 0xfffffffffffffff0
                            *(x23_6 - 8) = x0_197
                            
                            if (x19_14 != 0)
                                goto label_c44380
                        
                        var_118 = x23_6
            else if (0x7fffffffffffffff s/ x21_13 s>= i_159)
                x19_13 = x21_13 * i_159
                
                if (0 != x19_13)
                    goto label_c44300
            else
                v0_8, v1_7, v2_5, v3_3 = operator new(-1)
                x19_13 = x21_13 * i_159
                int64_t var_110_1
                int64_t var_108_1
                
                if (var_110_1 * var_108_1 != x19_13)
                    goto label_c44300
            int32_t x8_628 = var_5f0.d
            int64_t var_108_2 = x21_13
            __builtin_memset(&var_130, 0, 0x18)
            
            if (x8_628 != 0 && x8_590 s< i_159)
                v0_8, v1_7, v2_5, v3_3 = operator new(-1)
                int64_t var_128_1
                int64_t var_120_1
                
                if (var_128_1 * var_120_1 != x9_536)
                    goto label_c443f8
            else if (0 != x9_536)
            label_c443f8:
                int32_t* x8_632 = var_130
                
                if (x8_632 != 0)
                    v0_8, v1_7, v2_5, v3_3 = free(*(x8_632 - 8))
                
                if (x9_536 == 0)
                    var_130 = nullptr
                else
                    if (x9_536 u>> 0x3e != 0)
                        operator new(-1)
                    
                    int64_t x0_200
                    x0_200, v0_8, v1_7, v2_5, v3_3 = malloc(x9_537 + 0x10)
                    int32_t* x19_15
                    
                    if (x0_200 == 0)
                        x19_15 = nullptr
                        
                        if (x9_537 != 0)
                        label_c44458:
                            
                            if (x19_15 == 0)
                                v0_8, v1_7, v2_5, v3_3 = operator new(-1)
                    else
                        x19_15 = (x0_200 + 0x10) & 0xfffffffffffffff0
                        *(x19_15 - 8) = x0_200
                        
                        if (x9_537 != 0)
                            goto label_c44458
                    
                    var_130 = x19_15
            
            int32_t x8_638 = x22_11.d s/ x25_9
            int128_t* x9_548 = var_b8.q
            v0_8.q = float.d(sx.q(x8_638))
            int64_t var_a8
            int64_t x10_621 = var_a8 * i_176
            v0_8.q = sqrt(v0_8.q)
            v0_8.q = v8_1 f/ v0_8.q
            int64_t x11_369
            
            if (x10_621 s< 0)
                x11_369 = x10_621 + 3
            else
                x11_369 = x10_621
            
            v0_8.d = fconvert.s(v0_8.q)
            int64_t x11_370 = x11_369 & 0xfffffffffffffffc
            
            if (x10_621 s>= 4)
                int64_t x12_227 = 0
                v1_7 = vdupq_laneq_s32(v0_8, 0)
                int128_t* x13_202 = x9_548
                
                do
                    x12_227 += 4
                    *x13_202 = vmulq_f32(v1_7, *x13_202, 0)
                    x13_202 = &x13_202[1]
                while (x12_227 s< x11_370)
            
            if (x11_370 s< x10_621)
                int64_t x12_228 = x10_621 - x11_370
                int64_t x13_203 = x11_370
                int64_t j_438
                
                if (x12_228 u>= 8)
                    j_438 = x12_228 & 0xfffffffffffffff8
                    v1_7 = vdupq_laneq_s32(v0_8, 0)
                    x13_203 = x11_370 + j_438
                    void* x11_371 = x9_548 + (x11_370 << 2) + 0x10
                    int64_t j_344 = j_438
                    int64_t j_180
                    
                    do
                        v3_3 = *x11_371
                        j_180 = j_344
                        j_344 -= 8
                        v2_5 = vmulq_f32(*(x11_371 - 0x10), v1_7, 0)
                        v3_3 = vmulq_f32(v3_3, v1_7, 0)
                        *(x11_371 - 0x10) = v2_5
                        *x11_371 = v3_3
                        x11_371 += 0x20
                    while (j_180 != 8)
                
                if (x12_228 u< 8 || x12_228 != j_438)
                    int64_t j_286 = x10_621 - x13_203
                    int32_t* x9_549 = x9_548 + (x13_203 << 2)
                    int64_t j_181
                    
                    do
                        v1_7.d = *x9_549
                        j_181 = j_286
                        j_286 -= 1
                        v1_7.d = v1_7.d f* v0_8.d
                        *x9_549 = v1_7.d
                        x9_549 = &x9_549[1]
                    while (j_181 != 1)
            
            if (*var_4c8.q s>= 1)
                int64_t j_182 = 0
                int64_t x22_13 = sx.q(x8_638)
                
                do
                    void* i_147 = i_176
                    int64_t x24_9 = j_182 * x22_13
                    char* var_188_3 = &var_b8
                    void* i_172 = i_159
                    var_160.q = i_159
                    int128_t* i_201 = var_b8.q + ((i_147 * x24_9) << 2)
                    void* x10_625 = i_175 + ((i_159 * x24_9) << 2)
                    var_190_1.q = x22_13
                    void*** var_150_1 = &i_175
                    int64_t var_148_1 = 0
                    var_180 = nullptr
                    int64_t var_178_2 = x24_9
                    int64_t var_140_1 = x24_9
                    int64_t var_158_1 = x22_13
                    i_146 = i_201
                    i_141 = i_147
                    void* i_169 = i_147
                    void* var_168_1 = x10_625
                    var_1d8.q = &var_130
                    float128 v0_9
                    float128 v1_8
                    float128 v2_6
                    float128 v3_4
                    float128 v5_1
                    float128 v17_1
                    float128 v18_1
                    float128 v19_1
                    float128 v20_1
                    float128 v21_1
                    float128 v22_1
                    float128 v23_1
                    float128 v24_1
                    float128 v25_1
                    float128 v26_1
                    float128 v27_1
                    float128 v28_1
                    float128 v29_1
                    v0_9, v1_8, v2_6, v3_4, v5_1, v17_1, v18_1, v19_1, v20_1, v21_1, v22_1, v23_1, 
                        v24_1, v25_1, v26_1, v27_1, v28_1, v29_1 = Eigen::NoAlias<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::MatrixBase>::operator=<Eigen::Product<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, Eigen::Transpose<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> >, 0> >(
                        &var_1d8)
                    int32_t* x27_7 = var_130
                    int64_t x28_5 = i_159 * i_159
                    int64_t x11_374
                    
                    if (x28_5 s< 0)
                        x11_374 = x28_5 + 7
                    else
                        x11_374 = x28_5
                    
                    int64_t x8_646
                    
                    if (x28_5 s< 0)
                        x8_646 = x28_5 + 3
                    else
                        x8_646 = x28_5
                    
                    int64_t x8_647 = x8_646 & 0xfffffffffffffffc
                    
                    if (x28_5 + 3 u>= 7)
                        v0_9 = *x27_7
                        
                        if (x28_5 s>= 8)
                            v1_8 = *(x27_7 + 0x10)
                            int64_t x11_376 = x11_374 & 0xfffffffffffffff8
                            
                            if (x28_5 s>= 0x10)
                                void* x12_230 = &x27_7[0xc]
                                int64_t x13_205 = 8
                                
                                do
                                    v2_6 = *(x12_230 - 0x10)
                                    v3_4 = *x12_230
                                    x13_205 += 8
                                    x12_230 += 0x20
                                    v0_9 = vmaxq_f32(v0_9, v2_6)
                                    v1_8 = vmaxq_f32(v1_8, v3_4)
                                while (x13_205 s< x11_376)
                            
                            v0_9 = vmaxq_f32(v0_9, v1_8)
                            
                            if (x8_647 s> x11_376)
                                v0_9 = vmaxq_f32(v0_9, *(x27_7 + (x11_376 << 2)))
                        
                        v1_8.d = v0_9:8.d
                        v2_6.d = v0_9:4.d
                        v3_4.d = v0_9:0xc.d
                        
                        if (v0_9.d f< v1_8.d)
                            v0_9.d = v1_8.d
                        else
                            v0_9.d = v0_9.d
                        
                        if (v2_6.d f< v3_4.d)
                            v1_8.d = v3_4.d
                        else
                            v1_8.d = v2_6.d
                        
                        if (v0_9.d f< v1_8.d)
                            v0_9.d = v1_8.d
                        else
                            v0_9.d = v0_9.d
                        
                        if (x8_647 s< x28_5)
                            int64_t k_13 = x28_5 + 3 - x8_647 - 3
                            void* x11_378 = &x27_7[x8_647]
                            int64_t k_6
                            
                            do
                                v1_8.d = *x11_378
                                x11_378 += 4
                                
                                if (v0_9.d f< v1_8.d)
                                    v0_9.d = v1_8.d
                                else
                                    v0_9.d = v0_9.d
                                
                                k_6 = k_13
                                k_13 -= 1
                            while (k_6 != 1)
                    else
                        v0_9.d = *x27_7
                        
                        if (x28_5 s>= 2)
                            int64_t k_12 = x28_5 - 1
                            void* x11_375 = &x27_7[1]
                            int64_t k_7
                            
                            do
                                v1_8.d = *x11_375
                                x11_375 += 4
                                
                                if (v0_9.d f< v1_8.d)
                                    v0_9.d = v1_8.d
                                else
                                    v0_9.d = v0_9.d
                                
                                k_7 = k_12
                                k_12 -= 1
                            while (k_7 != 1)
                    
                    if (not(v0_9.d f<= v9.d))
                        var_1d8.q = &var_130
                        void* i_163 = i_159
                        i_141 = nullptr
                        i_146 = nullptr
                        v0_9, v1_8, v5_1, v17_1, v18_1, v19_1, v20_1, v21_1, v22_1, v23_1, v24_1, 
                            v25_1, v26_1, v27_1, v28_1, v29_1 = Eigen::internal::call_dense_assignment_loop<Eigen::Matrix<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::internal::member_maxCoeff<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
                            &i_146, &var_1d8, &var_258)
                        int128_t* i_205 = i_146
                        void* i_202 = i_159
                        var_190_1.q = i_205
                        void* i_182 = i_159
                        int64_t var_188_4 = *(var_1d8.q + 8)
                        
                        if (i_202 s>= 1)
                            int32_t* x11_380 = var_130
                            int64_t x10_628 = 0
                            
                            do
                                if (i_182 s>= 1)
                                    int64_t x9_555 = 0
                                    
                                    do
                                        v1_8.d = x11_380[x9_555]
                                        x9_555 += 1
                                        v0_9.d = var_190_1.q[x9_555]
                                        v0_9.d = v1_8.d f- v0_9.d
                                        x11_380[x9_555] = v0_9.d
                                        i_182 = i_159
                                    while (x9_555 s< i_182)
                                    
                                    i_202 = i_159
                                
                                x10_628 += 1
                                x11_380 = &x11_380[i_182]
                            while (x10_628 s< i_202)
                            
                            i_205 = i_146
                        
                        if (i_205 != 0)
                            v0_9, v1_8, v5_1, v17_1, v18_1, v19_1, v20_1, v21_1, v22_1, v23_1, 
                                v24_1, v25_1, v26_1, v27_1, v28_1, v29_1 = free(*(i_205 - 8))
                            i_202 = i_159
                            i_182 = i_159
                        
                        x27_7 = var_130
                        x28_5 = i_202 * i_182
                        int64_t x8_651
                        
                        if (x28_5 s< 0)
                            x8_651 = x28_5 + 3
                        else
                            x8_651 = x28_5
                        
                        x8_647 = x8_651 & 0xfffffffffffffffc
                    
                    v17_1 = var_4e0.o
                    
                    if (x28_5 s>= 4)
                        int64_t x9_556 = 0
                        int32_t* x10_629 = x27_7
                        
                        do
                            v0_9 = *x10_629
                            v1_8.d = 0x3f000000
                            v1_8:4.d = 0x3f000000
                            v1_8:8.d = 0x3f000000
                            v1_8:0xc.d = 0x3f000000
                            float128 v6_2 = vmaxq_f32(vminq_f32(v0_9, var_500.o), var_510.o)
                            float128 v1_10 = vrndmq_f32(vfmaq_f32(v1_8, var_520.o, v6_2))
                            float128 v6_3 = vfmaq_f32(v6_2, var_530.o, v1_10)
                            float128 v7_1 = vmaxq_f32(v1_10, var_5a0_2.o)
                            float128 v6_4 = vfmaq_f32(v6_3, var_540.o, v1_10)
                            float128 v1_11 = vminq_f32(v7_1, var_5b0.o)
                            v5_1.d = 0x3f000000
                            v5_1:4.d = 0x3f000000
                            v5_1:8.d = 0x3f000000
                            v5_1:0xc.d = 0x3f000000
                            float128 v7_2 = vmulq_f32(v6_4, v6_4, 0)
                            float128 v2_8 = vfmaq_f32(var_560.o, var_550.o, v6_4)
                            uint128_t v3_6 = vfmaq_f32(var_580.o, var_570.o, v6_4)
                            uint128_t v1_12 = vcvtq_s32_f32(v1_11)
                            float128 v4_2 = vfmaq_f32(var_590.o, v6_4, v2_8)
                            float128 v2_9 = vmulq_f32(v6_4, v7_2, 0)
                            float128 v5_2 = vfmaq_f32(v5_1, v6_4, v3_6)
                            v3_6.d = v1_12.d s>> 2
                            v3_6:4.d = v1_12:4.d s>> 2
                            v3_6:8.d = v1_12:8.d s>> 2
                            v3_6:0xc.d = v1_12:0xc.d s>> 2
                            float128 v16_1 = vaddq_f32(v6_4, v17_1)
                            v5_1 = vfmaq_f32(v5_2, v2_9, v4_2)
                            v2_9.d = v3_6.d << 0x17
                            v2_9:4.d = v3_6:4.d << 0x17
                            v2_9:8.d = v3_6:8.d << 0x17
                            v2_9:0xc.d = v3_6:0xc.d << 0x17
                            float128 v16_2 = vfmaq_f32(v16_1, v7_2, v5_1)
                            float128 v2_10 = v2_9 i+ v17_1
                            uint128_t v1_13
                            v1_13.d = vmlaq_s32(v1_12, v3_6, not.o(zx.o(2))).d << 0x17
                            v1_13:4.d <<= 0x17
                            v1_13:8.d <<= 0x17
                            v1_13:0xc.d <<= 0x17
                            x9_556 += 4
                            *x10_629 = vmaxq_f32(
                                vmulq_f32(
                                    vmulq_f32(vmulq_f32(vmulq_f32(v16_2, v2_10, 0), v2_10, 0), 
                                        v2_10, 0), 
                                    v1_13 i+ v17_1, 0), 
                                v0_9)
                            x10_629 = &x10_629[4]
                        while (x9_556 s< x8_647)
                    
                    int64_t fp_2 = x28_5 - x8_647
                    
                    if (x28_5 s> x8_647)
                        int64_t x25_11
                        
                        if (fp_2 u>= 2)
                            int64_t k_22 = fp_2 & 0xfffffffffffffffe
                            x25_11 = x8_647 + k_22
                            void* x23_7 = &x27_7[x8_647]
                            int64_t k_16 = k_22
                            int64_t k_8
                            
                            do
                                v0_9.q = *x23_7
                                var_4c0.o = v0_9
                                v0_9.d = v0_9:4.d
                                var_4b0 = expf(v0_9.d)
                                expf(var_4c0.q.d)
                                k_8 = k_16
                                k_16 -= 2
                                v0_9:4.d = var_4b0.d
                                *x23_7 = v0_9.q
                                x23_7 += 8
                            while (k_8 != 2)
                            
                            if (fp_2 != k_22)
                                goto label_c44968
                        else
                            x25_11 = x8_647
                        label_c44968:
                            int64_t k_17 = x28_5 - x25_11
                            void* x23_8 = &x27_7[x25_11]
                            int64_t k_9
                            
                            do
                                v0_9.d = *x23_8
                                k_9 = k_17
                                k_17 -= 1
                                *x23_8 = expf(v0_9.d).d
                                x23_8 += 4
                            while (k_9 != 1)
                    
                    var_1d8.q = &var_130
                    void* i_164 = i_159
                    i_141 = nullptr
                    i_146 = nullptr
                    Eigen::internal::call_dense_assignment_loop<Eigen::Array<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::member_sum<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
                        &i_146, &var_1d8, &var_258)
                    int128_t* i_181 = i_146
                    void* i_210 = i_159
                    var_190_1.q = i_181
                    int64_t var_188_5 = *(var_1d8.q + 8)
                    
                    if (i_210 s>= 1)
                        void* i_208 = i_159
                        int32_t* x9_559 = var_130
                        int64_t x8_653 = 0
                        
                        do
                            if (i_208 s>= 1)
                                int64_t x12_232 = 0
                                
                                do
                                    x12_232 += 1
                                    x9_559[x12_232] = x9_559[x12_232] f/ var_190_1.q[x12_232]
                                    i_208 = i_159
                                while (x12_232 s< i_208)
                                
                                i_210 = i_159
                            
                            x8_653 += 1
                            x9_559 = &x9_559[i_208]
                        while (x8_653 s< i_210)
                        
                        i_181 = i_146
                        
                        if (i_181 != 0)
                            free(*(i_181 - 8))
                    else if (i_181 != 0)
                        free(*(i_181 - 8))
                    
                    void* i_151 = i_175 + ((i_159 * x24_9) << 2)
                    void* i_171 = i_159
                    var_190_1.q = i_159
                    void* x8_641 = var_118 + ((i_159 * x24_9) << 2)
                    var_180 = &i_175
                    int64_t var_178_1 = 0
                    var_1c8.q = x22_13
                    int64_t* var_1c0_1 = &var_118
                    int64_t var_1b8_1 = 0
                    int64_t var_1b0_1 = x24_9
                    int64_t var_170_2 = x24_9
                    int64_t var_188_2 = x22_13
                    i_146 = &var_130
                    i_141 = i_151
                    var_1d8.q = x8_641
                    i_161 = i_159
                    void* i_167 = i_159
                    Eigen::internal::generic_product_impl<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, Eigen::DenseShape, Eigen::DenseShape, 8>::evalTo<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> >(
                        &var_1d8, &var_130, var_5b8_2)
                    j_182 += 1
                while (j_182 s< sx.q(*var_4c8.q))
            
            uint64_t x8_654 = zx.q(var_3d8)
            void* var_1e0_1 = nullptr
            int32_t temp211_1 = x8_654.d & 1
            uint64_t x24_10
            
            if (temp211_1 == 0)
                x24_10 = x8_654 u>> 1
            else
                x24_10 = var_3d0
            
            var_1f0 = 0
            int64_t var_1e8_1 = 0
            void* x28_6
            
            x28_6 = temp211_1 == 0 ? x8_583 : var_3c8
            
            if (x24_10 + 0xa u>= -0x10)
                goto label_c48a88
            
            void* x21_14
            
            if (x24_10 + 0xa u>= 0x17)
                uint64_t x27_8 = (x24_10 + 0x1a) & 0xfffffffffffffff0
                void* x0_208 = operator new(x27_8)
                x21_14 = x0_208
                var_1e0_1 = x0_208
                var_1f0 = x27_8 | 1
                uint64_t var_1e8_2 = x24_10
                memcpy(x21_14, x28_6, x24_10)
            else
                x21_14 = x10_613
                var_1f0.b = (x24_10.d << 1).b
                
                if (x24_10 != 0)
                    memcpy(x21_14, x28_6, x24_10)
            
            *(x21_14 + x24_10) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_1f0, "_attention")
            float128 v0_12
            float128 v1_17
            float128 v2_12
            float128 v3_9
            v0_12, v1_17, v2_12, v3_9 =
                sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_118, &var_1f0, 0)
            int128_t* i_183 = i_146
            void* x19_16
            
            if ((x22_10 & 0x80000000) != 0)
                x19_16 = var_5c0_2
                
                if (i_183 != 0)
                    free(*(i_183 - 8))
            else
                x19_16 = var_5c0_2
                int64_t x9_561 = *x19_16
                
                if (x9_561 s>= 1)
                    void* i_153 = i_141
                    int128_t* x12_234 = *(x13_139 * 0x80cf8 + &data_195dc38)
                    int64_t x10_632 = 0
                    int64_t x11_383 = 0
                    int64_t j_439 = x9_561 & 0xfffffffffffffff8
                    void* x16_379 = &i_183[1]
                    void* x17_220 = &x12_234[1]
                    
                    do
                        int64_t x3_16
                        
                        if (((x9_561 u> 7 ? 1 : 0) & (i_153 == 1 ? 1 : 0)) != 0)
                            x3_16 = x9_561 * x11_383
                        
                        int64_t j_473
                        
                        if (((x9_561 u> 7 ? 1 : 0) & (i_153 == 1 ? 1 : 0)) != 0 && (
                                x12_234 + (x3_16 << 2) u>= i_183 + ((x9_561 + x11_383) << 2)
                                || i_183 + (x11_383 << 2) u>= x12_234 + ((x9_561 + x3_16) << 2)))
                            int64_t j_271 = j_439
                            void* x4_9 = x16_379
                            void* x5_7 = x17_220
                            int64_t j_183
                            
                            do
                                v0_12 = *(x4_9 - 0x10)
                                v1_17 = *x4_9
                                v3_9 = *x5_7
                                j_183 = j_271
                                j_271 -= 8
                                x4_9 += i_153 << 5
                                v0_12 = vaddq_f32(v0_12, *(x5_7 - 0x10))
                                v1_17 = vaddq_f32(v1_17, v3_9)
                                *(x5_7 - 0x10) = v0_12
                                *x5_7 = v1_17
                                x5_7 += 0x20
                            while (j_183 != 8)
                            j_473 = j_439
                            
                            if (x9_561 != j_439)
                                goto label_c44ba8
                        else
                            j_473 = 0
                        label_c44ba8:
                            int64_t j_270 = x9_561 - j_473
                            void* x4_8 = i_183 + ((x11_383 + i_153 * j_473) << 2)
                            void* x5_6 = x12_234 + ((j_473 + x10_632) << 2)
                            int64_t j_184
                            
                            do
                                v0_12.d = *x4_8
                                v1_17.d = *x5_6
                                j_184 = j_270
                                j_270 -= 1
                                x4_8 += i_153 << 2
                                v0_12.d = v0_12.d f+ v1_17.d
                                *x5_6 = v0_12.d
                                x5_6 += 4
                            while (j_184 != 1)
                        x11_383 += 1
                        x17_220 += x9_561 << 2
                        x16_379 += 4
                        x10_632 += x9_561
                    while (x11_383 != i_159)
                    
                    i_183 = i_146
                
                if (i_183 != 0)
                    free(*(i_183 - 8))
            
            if ((zx.d(var_1f0.b) & 1) != 0)
                operator delete(var_1e0_1)
            
            int64_t x9_562 = *x19_16
            int128_t* i_184 = *(x13_139 * 0x80cf8 + &data_195dc38)
            i_141 = i_159
            var_190_1.q = x9_562
            int128_t** var_188_6 = x13_139 * 0x80cf8 + &data_195dc38
            i_146 = i_184
            *var_600_1 = nullptr
            var_600_1[1] = 0
            int64_t var_170_3 = x9_562
            Eigen::Matrix<float, -1, -1, 0, -1, -1>::operator=<Eigen::Block<Eigen::Matrix<float, -1, -1, 1, -1, -1>, -1, -1, true> >(
                &i_175)
            uint64_t x8_662 = zx.q(var_3d8)
            void* var_1f8_1 = nullptr
            int32_t temp229_1 = x8_662.d & 1
            uint64_t x24_11
            
            if (temp229_1 == 0)
                x24_11 = x8_662 u>> 1
            else
                x24_11 = var_3d0
            
            var_208 = 0
            int64_t var_200_1 = 0
            void* x28_7
            
            x28_7 = temp229_1 == 0 ? x8_583 : var_3c8
            
            if (x24_11 + 0xb u>= -0x10)
                goto label_c48a90
            
            i_111 = i_18
            void* x21_15
            
            if (x24_11 + 0xb u>= 0x17)
                uint64_t x27_9 = (x24_11 + 0x1b) & 0xfffffffffffffff0
                void* x0_217 = operator new(x27_9)
                x21_15 = x0_217
                var_1f8_1 = x0_217
                var_208 = x27_9 | 1
                uint64_t var_200_2 = x24_11
                memcpy(x21_15, x28_7, x24_11)
            else
                x21_15 = x8_585
                var_208.b = (x24_11.d << 1).b
                
                if (x24_11 != 0)
                    memcpy(x21_15, x28_7, x24_11)
            
            *(x21_15 + x24_11) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_208, "_layernorm2")
            v8 = sub_c50890(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_175, &var_208)
            
            if ((zx.d(var_208.b) & 1) != 0)
                operator delete(var_1f8_1)
            
            uint64_t x8_669 = zx.q(var_3d8)
            void* var_210_1 = nullptr
            int32_t temp249_1 = x8_669.d & 1
            uint64_t x24_12
            
            if (temp249_1 == 0)
                x24_12 = x8_669 u>> 1
            else
                x24_12 = var_3d0
            
            var_220 = nullptr
            int64_t var_218_1 = 0
            void* x28_8
            
            x28_8 = temp249_1 == 0 ? x8_583 : var_3c8
            
            if (x24_12 + 7 u>= -0x10)
                goto label_c48aa8
            
            void* x21_16
            
            if (x24_12 + 7 u>= 0x17)
                uint64_t x27_10 = (x24_12 + 0x17) & 0xfffffffffffffff0
                void* x0_223 = operator new(x27_10)
                x21_16 = x0_223
                var_210_1 = x0_223
                var_220 = x27_10 | 1
                uint64_t var_218_2 = x24_12
                memcpy(x21_16, x28_8, x24_12)
            else
                x21_16 = &var_220 | 1
                var_220.b = (x24_12.d << 1).b
                
                if (x24_12 != 0)
                    memcpy(x21_16, x28_8, x24_12)
            
            *(x21_16 + x24_12) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_220, "_dense1")
            sub_c48bf4(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_175, &var_220, 1)
            
            if ((zx.d(var_220.b) & 1) != 0)
                operator delete(var_210_1)
            
            uint64_t x8_676 = zx.q(var_3d8)
            void* var_228_1 = nullptr
            int32_t temp259_1 = x8_676.d & 1
            uint64_t x24_13
            
            if (temp259_1 == 0)
                x24_13 = x8_676 u>> 1
            else
                x24_13 = var_3d0
            
            var_238 = nullptr
            int64_t var_230_1 = 0
            void* x28_9
            
            x28_9 = temp259_1 == 0 ? x8_583 : var_3c8
            
            if (x24_13 + 7 u>= -0x10)
                goto label_c48ab0
            
            void* x21_17
            
            if (x24_13 + 7 u>= 0x17)
                uint64_t x27_11 = (x24_13 + 0x17) & 0xfffffffffffffff0
                void* x0_229 = operator new(x27_11)
                x21_17 = x0_229
                var_228_1 = x0_229
                var_238 = x27_11 | 1
                uint64_t var_230_2 = x24_13
                memcpy(x21_17, x28_9, x24_13)
            else
                x21_17 = &var_238 | 1
                var_238.b = (x24_13.d << 1).b
                
                if (x24_13 != 0)
                    memcpy(x21_17, x28_9, x24_13)
            
            *(x21_17 + x24_13) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_238, "_dense2")
            float128 v1_18
            float128 v2_13
            float128 v3_10
            v0_6, v1_18, v2_13, v3_10 =
                sub_c48bf4(&var_1d8, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_146, &var_238, 0)
            void* x8_682 = var_1d8.q
            
            if ((x22_10 & 0x80000000) != 0)
                x23_5 = var_5c0_2
                
                if (x8_682 != 0)
                    free(*(x8_682 - 8))
            else
                x23_5 = var_5c0_2
                int64_t x9_566 = *x23_5
                
                if (x9_566 s>= 1)
                    int128_t* x12_236 = *(x13_139 * 0x80cf8 + &data_195dc38)
                    int64_t x10_637 = 0
                    int64_t x11_387 = 0
                    int64_t j_440 = x9_566 & 0xfffffffffffffff8
                    void* x16_380 = x8_682 + 0x10
                    void* x17_221 = &x12_236[1]
                    
                    do
                        int64_t x3_21
                        
                        if (((x9_566 u> 7 ? 1 : 0) & (i_161 == 1 ? 1 : 0)) != 0)
                            x3_21 = x9_566 * x11_387
                        
                        int64_t j_474
                        
                        if (((x9_566 u> 7 ? 1 : 0) & (i_161 == 1 ? 1 : 0)) != 0 && (
                                x12_236 + (x3_21 << 2) u>= x8_682 + ((x9_566 + x11_387) << 2)
                                || x8_682 + (x11_387 << 2) u>= x12_236 + ((x9_566 + x3_21) << 2)))
                            int64_t j_273 = j_440
                            void* x4_14 = x16_380
                            void* x5_11 = x17_221
                            int64_t j_185
                            
                            do
                                v0_6 = *(x4_14 - 0x10)
                                v1_18 = *x4_14
                                v3_10 = *x5_11
                                j_185 = j_273
                                j_273 -= 8
                                x4_14 += i_161 << 5
                                v0_6 = vaddq_f32(v0_6, *(x5_11 - 0x10))
                                v1_18 = vaddq_f32(v1_18, v3_10)
                                *(x5_11 - 0x10) = v0_6
                                *x5_11 = v1_18
                                x5_11 += 0x20
                            while (j_185 != 8)
                            j_474 = j_440
                            
                            if (x9_566 != j_440)
                                goto label_c44f5c
                        else
                            j_474 = 0
                        label_c44f5c:
                            int64_t j_272 = x9_566 - j_474
                            int32_t* x4_13 = x8_682 + ((x11_387 + i_161 * j_474) << 2)
                            void* x5_10 = x12_236 + ((j_474 + x10_637) << 2)
                            int64_t j_186
                            
                            do
                                v0_6.d = *x4_13
                                v1_18.d = *x5_10
                                j_186 = j_272
                                j_272 -= 1
                                x4_13 = &x4_13[i_161]
                                v0_6.d = v0_6.d f+ v1_18.d
                                *x5_10 = v0_6.d
                                x5_10 += 4
                            while (j_186 != 1)
                        x11_387 += 1
                        x17_221 += x9_566 << 2
                        x16_380 += 4
                        x10_637 += x9_566
                    while (x11_387 != i_159)
                    
                    x8_682 = var_1d8.q
                
                if (x8_682 != 0)
                    free(*(x8_682 - 8))
            
            if ((zx.d(var_238.b) & 1) != 0)
                operator delete(var_228_1)
            
            int128_t* i_185 = i_146
            
            if (i_185 != 0)
                free(*(i_185 - 8))
            
            int32_t* x8_684 = var_130
            
            if (x8_684 != 0)
                free(*(x8_684 - 8))
            
            void* const x8_685 = var_118
            
            if (x8_685 != 0)
                free(*(x8_685 - 8))
            
            void** i_219 = i_175
            
            if (i_219 != 0)
                free(i_219[-1])
            
            void* x8_686 = var_b8.q
            
            if (x8_686 != 0)
                free(*(x8_686 - 8))
            
            if ((zx.d(var_3d8) & 1) != 0)
                operator delete(var_3c8)
        
        if ((zx.d(v0_7) & 1) != 0)
            operator delete(x8_593)
        
        i_18 = i_111 + 1
    while (i_18 s< *(x1_47 * 0x80cf8 + 0x195e918))

char var_408
__builtin_strncpy(&var_408, "$value_dense/kernel", 0x14)
void* x0_345
int128_t v0_23
int128_t v1_38
x0_345, v0_23, v1_38 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_408)
int128_t var_407

if ((zx.d(var_408) & 1) != 0)
    v0_23, v1_38 = operator delete(var_407:0xf.q)
int64_t x19_23 = *(x0_345 + 8)
int32_t x2_84 = arg6
int64_t var_1d0 = 0
var_1d8.q = 0

if (x19_23 != 0)
    if (x19_23 s< 1)
        var_1d8.q = 0
    else
        if (x19_23 u>> 0x3e != 0)
            operator new(-1)
        
        int64_t x20_12 = x19_23 << 2
        int64_t x0_348
        x0_348, v0_23, v1_38 = malloc(x20_12 + 0x10)
        void* const x21_30
        
        if (x0_348 == 0)
            x21_30 = nullptr
            
            if (x20_12 != 0)
            label_c468e4:
                
                if (x21_30 == 0)
                    v0_23, v1_38 = operator new(-1)
        else
            x21_30 = (x0_348 + 0x10) & 0xfffffffffffffff0
            *(x21_30 - 8) = x0_348
            
            if (x20_12 != 0)
                goto label_c468e4
        
        x2_84 = arg6
        var_1d8.q = x21_30

int64_t var_1d0_1 = x19_23
int64_t x19_24 = i_114 << 2
int128_t* i_213

if (x2_84 s< 1)
    i_213 = nullptr
else
    int64_t x0_350
    x0_350, v0_23, v1_38 = malloc(x19_24 + 0x10)
    
    if (x0_350 != 0)
        i_213 = (x0_350 + 0x10) & 0xfffffffffffffff0
        *(i_213 - 8) = x0_350
    
    if (x0_350 == 0 || i_213 == 0)
        v0_23, v1_38 = operator new(-1)
        i_213 = nullptr
    
    x2_84 = arg6

i_176 = 0
var_b8.q = 0
int64_t i_237 = 0
i_175 = nullptr
int64_t var_e0_4 = 0
i_174 = nullptr

if (x2_84 != 0)
    if (x2_84 s< 1)
        i_174 = nullptr
    else
        int64_t x0_352
        x0_352, v0_23, v1_38 = malloc(x19_24 + 0x10)
        int128_t* i_222
        
        if (x0_352 != 0)
            i_222 = (x0_352 + 0x10) & 0xfffffffffffffff0
            *(i_222 - 8) = x0_352
        
        if (x0_352 == 0 || i_222 == 0)
            v0_23, v1_38 = operator new(-1)
            i_222 = nullptr
        
        x2_84 = arg6
        i_174 = i_222

void* x8_819 = var_1d8.q
int64_t x10_666 = *x23_5
int64_t x9_607 = sx.q(*(x14_271 * 0x80cf8 + 0x195e910))
int64_t x21_31 = sx.q(x9.d)
int64_t x12_251 = x21_31

if ((x8_819 & 3) == 0)
    int64_t x11_421 = zx.q(neg.d(x8_819.d u>> 2)) & 3
    
    x12_251 = x11_421 s< x21_31 ? x11_421 : x21_31

int64_t x15_329 = x21_31 - x12_251
int128_t* x11_423 = *(x13_139 * 0x80cf8 + &data_195dc38)
int64_t x13_216

if (x15_329 s< 0)
    x13_216 = x15_329 + 3
else
    x13_216 = x15_329

int64_t x14_274 = x10_666 * x9_607
int64_t x13_217 = x13_216 & 0xfffffffffffffffc

if (x12_251 s>= 1)
    int64_t i_135
    
    if (x12_251 u< 8 || (x8_819 u< x11_423 + ((x12_251 + x10_666 * x9_607) << 2)
            && x11_423 + (x14_274 << 2) u< x8_819 + (x12_251 << 2)))
        i_135 = 0
    label_c46a30:
        int64_t i_107 = x12_251 - i_135
        void* x0_354 = x11_423 + ((i_135 + x10_666 * x9_607) << 2)
        int32_t* x16_388 = x8_819 + (i_135 << 2)
        int64_t i_19
        
        do
            v0_23.d = *x0_354
            x0_354 += 4
            i_19 = i_107
            i_107 -= 1
            *x16_388 = v0_23.d
            x16_388 = &x16_388[1]
        while (i_19 != 1)
    else
        i_135 = x12_251 & 0xfffffffffffffff8
        void* x17_252 = x8_819 + 0x10
        void* x0_415 = x11_423 + (x14_274 << 2) + 0x10
        int64_t i_66 = i_135
        int64_t i_20
        
        do
            v0_23 = *(x0_415 - 0x10)
            v1_38 = *x0_415
            i_20 = i_66
            i_66 -= 8
            x0_415 += 0x20
            *(x17_252 - 0x10) = v0_23
            *x17_252 = v1_38
            x17_252 += 0x20
        while (i_20 != 8)
        
        if (x12_251 != i_135)
            goto label_c46a30

int64_t x16_389 = x13_217 + x12_251

if (x15_329 s>= 4)
    void* x17_229 = x11_423 + ((x12_251 + x10_666 * x9_607) << 2)
    int128_t* x0_355 = x8_819 + (x12_251 << 2)
    int64_t x1_101 = x12_251
    
    do
        v0_23 = *x17_229
        x17_229 += 0x10
        x1_101 += 4
        *x0_355 = v0_23
        x0_355 = &x0_355[1]
    while (x1_101 s< x16_389)

int64_t x17_231 = x9 << 0x20
uint64_t x27_24 = zx.q(x21_31.d)

if (x16_389 s< x21_31)
    int64_t x15_330 = x15_329 - x13_217
    
    if (x15_330 u< 8)
    label_c46b28:
        int64_t i_78 = sx.q(x27_24.d) - x16_389
        void* x10_668 = x11_423 + ((x16_389 + x10_666 * x9_607) << 2)
        int32_t* x8_820 = x8_819 + (x16_389 << 2)
        int64_t i_21
        
        do
            v0_23.d = *x10_668
            x10_668 += 4
            i_21 = i_78
            i_78 -= 1
            *x8_820 = v0_23.d
            x8_820 = &x8_820[1]
        while (i_21 != 1)
    else
        void* x17_234 = x8_819 + ((x12_251 + x13_217) << 2)
        
        if (x17_234 u< x11_423 + ((x14_274 + sx.q(x9.d)) << 2)
                && x11_423 + ((x12_251 + x14_274 + x13_217) << 2) u< x8_819 + (x17_231 s>> 0x1e))
            goto label_c46b28
        
        int64_t i_130 = x15_330 & 0xfffffffffffffff8
        int128_t* x17_235 = x17_234 + 0x10
        x16_389 += i_130
        void* x12_255 = x11_423 + ((x12_251 + x10_666 * x9_607 + x13_217) << 2) + 0x10
        int64_t i_90 = i_130
        int64_t i_22
        
        do
            v0_23 = *(x12_255 - 0x10)
            v1_38 = *x12_255
            i_22 = i_90
            i_90 -= 8
            x12_255 += 0x20
            x17_235[-1] = v0_23
            *x17_235 = v1_38
            x17_235 = &x17_235[2]
        while (i_22 != 8)
        
        if (x15_330 != i_130)
            goto label_c46b28

var_4c8.q = x21_31
float128 v0_24
uint128_t v1_39
float128 v2_27
float128 v3_21
float128 v4_7
float128 v5_7
uint128_t v6_9
uint128_t v7_5
float128 v16_5
float128 v17_3
float128 v18_3
float128 v19_3
float128 v21_3
float128 v22_3
float128 v26_3
float128 v30_3

if (*(x14_271 * 0x80cf8 + 0x195e914) s<= 0xb)
    int64_t x13_258 = x9
    
    if (x2_84 s>= 1)
        int64_t x11_445 = sx.q(x27_24.d)
        int64_t i_23 = 0
        int64_t x12_287 = x11_445 + 4
        x13_258 = x21_31
        
        do
            int64_t x16_401 = var_1d8.q
            int64_t x2_90 = x21_31
            int64_t x6_12 = x16_401 + (x13_258 << 2)
            
            if ((x6_12 & 3) == 0)
                int64_t x17_248 = zx.q(neg.d(x6_12.d u>> 2)) & 3
                
                x2_90 = x17_248 s< x21_31 ? x17_248 : x21_31
            
            int64_t x0_403 = *x23_5
            int64_t x1_113 = sx.q(*(&data_18ddc30 + var_5c8 * 0x80cf8 + (i_23 << 2) + 0x80cc8))
            int128_t* x17_250 = *(x13_139 * 0x80cf8 + &data_195dc38)
            int64_t x4_36 = x21_31 - x2_90
            int64_t x5_28
            
            if (x4_36 s< 0)
                x5_28 = x4_36 + 3
            else
                x5_28 = x4_36
            
            int64_t x3_47 = x0_403 * x1_113
            
            if (x2_90 s>= 1)
                int64_t j_380
                
                if (x2_90 u< 8 || (x6_12 u< x17_250 + ((x2_90 + x0_403 * x1_113) << 2)
                        && x17_250 + (x3_47 << 2)
                        u< x16_401 + ((x2_90 + x21_31 + x21_31 * i_23) << 2)))
                    j_380 = 0
                label_c47b0c:
                    int64_t j_282 = x2_90 - j_380
                    void* x6_16 = x17_250 + ((j_380 + x0_403 * x1_113) << 2)
                    int32_t* x19_29 = x16_401 + ((j_380 + x13_258) << 2)
                    int64_t j_187
                    
                    do
                        v0_23.d = *x6_16
                        x6_16 += 4
                        j_187 = j_282
                        j_282 -= 1
                        *x19_29 = v0_23.d
                        x19_29 = &x19_29[1]
                    while (j_187 != 1)
                else
                    j_380 = x2_90 & 0xfffffffffffffff8
                    void* x7_18 = x16_401 + (x12_287 << 2)
                    void* x19_35 = x17_250 + (x3_47 << 2) + 0x10
                    int64_t j_378 = j_380
                    int64_t j_188
                    
                    do
                        v0_23 = *(x19_35 - 0x10)
                        v1_38 = *x19_35
                        j_188 = j_378
                        j_378 -= 8
                        x19_35 += 0x20
                        *(x7_18 - 0x10) = v0_23
                        *x7_18 = v1_38
                        x7_18 += 0x20
                    while (j_188 != 8)
                    
                    if (x2_90 != j_380)
                        goto label_c47b0c
            
            int64_t x6_17 = x5_28 & 0xfffffffffffffffc
            int64_t x5_29 = x6_17 + x2_90
            
            if (x4_36 s>= 4)
                void* x7_12 = x17_250 + ((x2_90 + x0_403 * x1_113) << 2)
                int128_t* x19_31 = x16_401 + ((x2_90 + x13_258) << 2)
                int64_t x20_16 = x2_90
                
                do
                    v0_23 = *x7_12
                    x7_12 += 0x10
                    x20_16 += 4
                    *x19_31 = v0_23
                    x19_31 = &x19_31[1]
                while (x20_16 s< x5_29)
            
            if (x5_29 s< x21_31)
                int64_t x4_37 = x4_36 - x6_17
                
                if (x4_37 u< 8)
                label_c47c04:
                    int64_t j_267 = x11_445 - x5_29
                    void* x17_251 = x17_250 + ((x5_29 + x0_403 * x1_113) << 2)
                    int32_t* x16_402 = x16_401 + ((x5_29 + x13_258) << 2)
                    int64_t j_189
                    
                    do
                        v0_23.d = *x17_251
                        x17_251 += 4
                        j_189 = j_267
                        j_267 -= 1
                        *x16_402 = v0_23.d
                        x16_402 = &x16_402[1]
                    while (j_189 != 1)
                else
                    int64_t x7_13 = x21_31 * i_23
                    
                    if (x16_401 + ((x2_90 + x21_31 + x7_13 + x6_17) << 2)
                            u< x17_250 + ((x21_31 + x3_47) << 2)
                            && x17_250 + ((x2_90 + x3_47 + x6_17) << 2)
                            u< x16_401 + (((zx.q(x9.d) << 0x20 s>> 0x1f) + x7_13) << 2))
                        goto label_c47c04
                    
                    int64_t j_379 = x4_37 & 0xfffffffffffffff8
                    x5_29 += j_379
                    void* x2_92 = x16_401 + ((x2_90 + x12_287 + x6_17) << 2)
                    void* x6_20 = x17_250 + ((x2_90 + x0_403 * x1_113 + x6_17) << 2) + 0x10
                    int64_t j_283 = j_379
                    int64_t j_190
                    
                    do
                        v0_23 = *(x6_20 - 0x10)
                        v1_38 = *x6_20
                        j_190 = j_283
                        j_283 -= 8
                        x6_20 += 0x20
                        *(x2_92 - 0x10) = v0_23
                        *x2_92 = v1_38
                        x2_92 += 0x20
                    while (j_190 != 8)
                    
                    if (x4_37 != j_379)
                        goto label_c47c04
            
            i_23 += 1
            x13_258 += x21_31
            x12_287 += x11_445
        while (i_23 != zx.q(arg6))
    
    int64_t x20_21 = sx.q((6 - arg6) * x27_24.d)
    int64_t x19_36 = var_1d8.q + (x13_258 << 0x20 s>> 0x1e)
    int64_t x23_13 = x20_21
    
    if ((x19_36 & 3) == 0)
        int64_t x8_884 = zx.q(neg.d(x19_36.d u>> 2)) & 3
        
        x23_13 = x8_884 s< x20_21 ? x8_884 : x20_21
    
    int64_t x21_33 = x20_21 - x23_13
    int64_t x8_886
    
    if (x21_33 s< 0)
        x8_886 = x21_33 + 3
    else
        x8_886 = x21_33
    
    int64_t x22_18 = x8_886 & 0xfffffffffffffffc
    
    if (x23_13 s>= 1)
        memset(x19_36, 0, x23_13 << 2)
    
    int64_t x24_27 = x22_18 + x23_13
    
    if (x21_33 s>= 4)
        int64_t x8_888
        
        if (x21_33 s> 7)
            x8_888 = x24_27
        else
            x8_888 = x23_13 + 4
        
        memset(x19_36 + (x23_13 << 2), 0, 
            (((x8_888 + not.q(x23_13)) << 2) + 0x10) & 0xfffffffffffffff0)
    
    if (x24_27 s< x20_21)
        memset(x19_36 + (x24_27 << 2), 0, (x21_33 - x22_18) << 2)
    
    char var_468 = 0x16
    int64_t var_467
    __builtin_strncpy(&var_467, "value_dense", 0xc)
    sub_c48e30(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_1d8, &var_468, 0)
    Eigen::Matrix<float, 1, -1, 1, 1, -1>::operator=<Eigen::Matrix<float, -1, 1, 0, -1, 1> >(
        &var_b8)
    int128_t* i_199 = i_146
    
    if (i_199 != 0)
        free(*(i_199 - 8))
    
    int64_t i_232 = i_176
    x23_5 = var_5c0_2
    i_146 = &var_b8
    var_180 = &var_b8
    int32_t var_160_2 = 0x3f800000
    int64_t var_f8_7 = 0
    i_215 = nullptr
    
    if (i_232 != 0 && 0x7fffffffffffffff s/ i_232 s<= 0)
        operator new(-1)
        
        if (i_232 != 0 && 0x7fffffffffffffff s/ i_232 s<= 0)
            operator new(-1)
    
    if (var_f8_7 != i_232)
        void** i_241 = i_215
        
        if (i_241 != 0)
            free(i_241[-1])
        
        if (i_232 s< 1)
            i_215 = nullptr
        else
            if (i_232 u>> 0x3e != 0)
                operator new(-1)
            
            int64_t x20_22 = i_232 << 2
            int64_t x0_413 = malloc(x20_22 + 0x10)
            void** i_247
            
            if (x0_413 == 0)
                i_247 = nullptr
                
                if (x20_22 != 0)
                label_c47e88:
                    
                    if (i_247 == 0)
                        operator new(-1)
            else
                i_247 = (x0_413 + 0x10) & 0xfffffffffffffff0
                i_247[-1] = x0_413
                
                if (x20_22 != 0)
                    goto label_c47e88
            
            i_215 = i_247
    
    Eigen::internal::call_dense_assignment_loop<Eigen::Matrix<float, 1, -1, 1, 1, -1>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::ArrayWrapper<Eigen::Matrix<float, 1, -1, 1, 1, -1> const> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_tanh_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_log_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float, float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_exp_op<float>, Eigen::ArrayWrapper<Eigen::Matrix<float, 1, -1, 1, 1, -1> const> const> const, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Array<float, 1, -1, 1, 1, -1> const> const> const> const> const>, Eigen::internal::assign_op<float, float> >(
        &i_215, &i_146, &var_118)
    void** i_224 = i_175
    i_175 = i_215
    int64_t i_238 = i_232
    i_215 = i_224
    int64_t i_248 = i_237
    
    if (i_224 != 0)
        free(i_224[-1])
    
    char var_480 = 0x16
    int64_t var_47f
    __builtin_strncpy(&var_47f, "value_final", 0xc)
    sub_c48e30(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_175, &var_480, 0)
    Eigen::Matrix<float, 1, -1, 1, 1, -1>::operator=<Eigen::Matrix<float, -1, 1, 0, -1, 1> >(&i_174)
    int128_t* i_200 = i_146
    
    if (i_200 != 0)
        free(*(i_200 - 8))
    
    char var_498 = 0x14
    int64_t var_497
    __builtin_strncpy(&var_497, "score_mean", 0xb)
    v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, v21_3, v22_3, 
        v26_3, v30_3 = sub_c48e30(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &i_175, &var_498, 0)
    int128_t* i_212 = i_146
    i_146 = i_213
    i_141 = i_114
    
    if (i_213 != 0)
        v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, v21_3, 
            v22_3, v26_3, v30_3 = free(*(i_213 - 8))
    
    i_213 = i_212
    v30_3 = var_4e0.o
else
    char var_420
    __builtin_strncpy(&var_420, "$value_final/kernel", 0x14)
    int64_t x0_362 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_420)
    int128_t var_41f
    
    if ((zx.d(var_420) & 1) != 0)
        operator delete(var_41f:0xf.q)
    char var_438
    __builtin_strcpy(&var_438, "\"score_mean/kernel")
    int64_t x0_365
    x0_365, v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, v21_3, 
        v22_3, v26_3, v30_3 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_438)
    int128_t var_437
    
    if ((zx.d(var_438) & 1) != 0)
        v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, v21_3, 
            v22_3, v26_3, v30_3 = operator delete(var_437:0xf.q)
    
    if (arg6 s< 1)
        v30_3 = var_4e0.o
    else
        int32_t x8_825 = x27_24.d
        int64_t x16_390 = sx.q(x8_825)
        int64_t x17_236 = zx.q(x8_825) << 0x20 s>> 0x1f
        int64_t x15_331 = var_4c8.q
        v6_9.d = float.s(arg6 - 1)
        int64_t x9_609 = x9 * 3
        uint64_t x4_35 = zx.q(arg6)
        int64_t x8_829
        
        if (x15_331 s< 0)
            x8_829 = x15_331 + 3
        else
            x8_829 = x15_331
        
        int64_t x10_670 = x9_609 << 0x20
        var_5f0.q = x17_236
        int64_t x9_612 = x9 * -0x300000000
        int64_t x22_17 = x8_829 & 0xfffffffffffffffc
        int64_t x8_830
        
        x8_830 = x15_331 s> 1 ? x15_331 : 1
        
        int64_t x8_831 = x8_830 << 2
        int64_t x8_832
        
        x8_832 = x10_670 s>= 0 ? x10_670 : -1
        
        int64_t x8_833
        
        x8_833 = x8_832 s< 1 ? x8_832 : 1
        
        int64_t x9_613
        
        x9_613 = x9_612 s> x10_670 ? x9_612 : x10_670
        
        int64_t x11_427 = x15_331 - x22_17
        int64_t i_121 = x11_427 & 0xfffffffffffffff8
        int64_t x8_834 = x8_833 * (x9_613 u>> 0x20)
        int64_t x28_22 = 0
        v7_5 = vdupq_laneq_s32(v6_9, 0)
        int64_t x11_428 = x22_17 + i_121
        int128_t* i_214 = i_213
        var_500.o = v6_9
        uint64_t var_510_1 = x4_35
        var_520.o = v7_5
        
        do
            int64_t x8_836 = var_1d8.q
            int64_t x3_44 = var_4c8.q
            int64_t x2_85 = var_5c8
            int64_t x16_391 = x8_836 + (x3_44 << 2)
            int64_t x12_261 = x3_44
            
            if ((x16_391 & 3) == 0)
                int64_t x9_617 = zx.q(neg.d(x16_391.d u>> 2)) & 3
                
                x12_261 = x9_617 s< x3_44 ? x9_617 : x3_44
            
            int64_t x10_671 = *x23_5
            int64_t x11_430 = sx.q(*(&data_18ddc30 + var_5c8 * 0x80cf8 + (x28_22 << 2) + 0x80cc8))
            int64_t x14_280 = x3_44 - x12_261
            int128_t* x9_620 = *(x13_139 * 0x80cf8 + &data_195dc38)
            int64_t x15_332
            
            if (x14_280 s< 0)
                x15_332 = x14_280 + 3
            else
                x15_332 = x14_280
            
            int64_t x13_220 = x10_671 * x11_430
            
            if (x12_261 s>= 1)
                int64_t i_136
                
                if (x12_261 u< 8 || (x16_391 u< x9_620 + ((x12_261 + x10_671 * x11_430) << 2)
                        && x9_620 + (x13_220 << 2) u< x8_836 + (x3_44 << 2) + (x12_261 << 2)))
                    i_136 = 0
                label_c46de4:
                    int64_t i_108 = x12_261 - i_136
                    void* x0_368 = x9_620 + ((i_136 + x10_671 * x11_430) << 2)
                    int32_t* x16_393 = x8_836 + (x16_390 << 2) + (i_136 << 2)
                    int64_t i_24
                    
                    do
                        v0_24.d = *x0_368
                        x0_368 += 4
                        i_24 = i_108
                        i_108 -= 1
                        *x16_393 = v0_24.d
                        x16_393 = &x16_393[1]
                    while (i_24 != 1)
                else
                    i_136 = x12_261 & 0xfffffffffffffff8
                    void* x0_384 = x9_620 + (x13_220 << 2) + 0x10
                    void* x17_246 = x8_836 + ((x16_390 + 4) << 2)
                    int64_t i_65 = i_136
                    int64_t i_25
                    
                    do
                        v0_24 = *(x0_384 - 0x10)
                        v1_39 = *x0_384
                        i_25 = i_65
                        i_65 -= 8
                        x0_384 += 0x20
                        *(x17_246 - 0x10) = v0_24
                        *x17_246 = v1_39
                        x17_246 += 0x20
                    while (i_25 != 8)
                    
                    if (x12_261 != i_136)
                        goto label_c46de4
            
            int64_t x16_394 = x15_332 & 0xfffffffffffffffc
            int64_t x15_333 = x16_394 + x12_261
            
            if (x14_280 s>= 4)
                void* x17_242 = x9_620 + ((x12_261 + x10_671 * x11_430) << 2)
                int64_t x1_106 = x12_261
                int128_t* x0_371 = x8_836 + (x16_390 << 2) + (x12_261 << 2)
                
                do
                    v0_24 = *x17_242
                    x17_242 += 0x10
                    x1_106 += 4
                    *x0_371 = v0_24
                    x0_371 = &x0_371[1]
                while (x1_106 s< x15_333)
            
            if (x15_333 s< x3_44)
                int64_t x14_281 = x14_280 - x16_394
                
                if (x14_281 u< 8)
                label_c46eec:
                    int64_t i_87 = x16_390 - x15_333
                    void* x8_837 = x9_620 + ((x15_333 + x10_671 * x11_430) << 2)
                    int32_t* x9_621 = x8_836 + (x16_390 << 2) + (x15_333 << 2)
                    int64_t i_26
                    
                    do
                        v0_24.d = *x8_837
                        x8_837 += 4
                        i_26 = i_87
                        i_87 -= 1
                        *x9_621 = v0_24.d
                        x9_621 = &x9_621[1]
                    while (i_26 != 1)
                else
                    int64_t x17_243 = x12_261 + x16_394
                    
                    if (x8_836 + (x3_44 << 2) + (x17_243 << 2) u< x9_620 + ((x3_44 + x13_220) << 2)
                            && x9_620 + ((x12_261 + x13_220 + x16_394) << 2)
                            u< x8_836 + ((x9 & 0xffffffff) << 0x20 s>> 0x1f << 2))
                        goto label_c46eec
                    
                    int64_t i_125 = x14_281 & 0xfffffffffffffff8
                    x15_333 += i_125
                    int128_t* x12_262 = x8_836 + ((x16_390 + 4) << 2) + (x17_243 << 2)
                    void* x16_397 = x9_620 + ((x12_261 + x10_671 * x11_430 + x16_394) << 2) + 0x10
                    int64_t i_109 = i_125
                    int64_t i_27
                    
                    do
                        v0_24 = *(x16_397 - 0x10)
                        v1_39 = *x16_397
                        i_27 = i_109
                        i_109 -= 8
                        x16_397 += 0x20
                        x12_262[-1] = v0_24
                        *x12_262 = v1_39
                        x12_262 = &x12_262[2]
                    while (i_27 != 8)
                    
                    if (x14_281 != i_125)
                        goto label_c46eec
            
            void* x17_244
            int32_t* x27_25
            
            if (x17_231 == 0)
                x27_25 = nullptr
                x17_244 = nullptr
            else
                int64_t x20_13 = 0x7fffffffffffffff s/ x3_44
                
                if (x20_13 s> 0)
                    if (x17_231 s< 1)
                        goto label_c46fc0
                    
                    goto label_c46f30
                
                v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = operator new(-1)
                void* x19_25
                
                if (x17_231 s>= 1)
                label_c46f30:
                    int64_t x0_379 = malloc((x17_231 s>> 0x1e) + 0x10)
                    void* x8_841
                    
                    if (x0_379 != 0)
                        x8_841 = (x0_379 + 0x10) & 0xfffffffffffffff0
                        *(x8_841 - 8) = x0_379
                    
                    if (x0_379 == 0 || x8_841 == 0)
                        operator new(-1)
                        x8_841 = nullptr
                    
                    x19_25 = x8_841
                    v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = memset(x8_841, 0, x8_831)
                    
                    if (x20_13 s<= 0)
                        goto label_c46fd0
                    
                    goto label_c46f74
                
            label_c46fc0:
                x19_25 = nullptr
                
                if (x20_13 s> 0)
                label_c46f74:
                    
                    if (x17_231 s< 1)
                        x27_25 = nullptr
                    else
                    label_c46f80:
                        int64_t x0_382 = malloc((x17_231 s>> 0x1e) + 0x10)
                        
                        if (x0_382 == 0)
                            x27_25 = nullptr
                            
                            if (x17_231 != 0)
                            label_c47030:
                                
                                if (x27_25 == 0)
                                    operator new(-1)
                        else
                            x27_25 = (x0_382 + 0x10) & 0xfffffffffffffff0
                            *(x27_25 - 8) = x0_382
                            
                            if (x17_231 != 0)
                                goto label_c47030
                        
                        v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = memset(x27_25, 0, x8_831)
                else
                label_c46fd0:
                    v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = operator new(-1)
                    
                    if (x17_231 s>= 1)
                        goto label_c46f80
                    
                    x27_25 = nullptr
                
                x2_85 = var_5c8
                x3_44 = var_4c8.q
                v6_9 = var_500.o
                x4_35 = var_510_1
                v7_5 = var_520.o
                x17_244 = x19_25
            
            void* x8_848 = x17_244 + (x22_17 << 2)
            void* x8_849 = x17_244 + (x3_44 << 2)
            int64_t x20_14 = 0
            int64_t x19_26 = x3_44
            var_4c0.q = x17_244
            void* x26_2 = x17_244 + ((x22_17 + 4) << 2)
            
            do
                if (x28_22 != x20_14)
                    int64_t x9_622 =
                        sx.q(*(&data_18ddc30 + x2_85 * 0x80cf8 + (x20_14 << 2) + 0x80cc8))
                    int64_t x11_432 = *x23_5
                    int128_t* x10_674 = *(x13_139 * 0x80cf8 + &data_195dc38)
                    int64_t x12_264 = x11_432 * x9_622
                    
                    if (x17_231 s>= 0x300000001)
                        int64_t x13_225 = 0
                        void* x14_282 = x10_674 + (x12_264 << 2)
                        void* x15_334 = x17_244
                        
                        do
                            v0_24 = *x14_282
                            x14_282 += 0x10
                            x13_225 += 4
                            *x15_334 = vaddq_f32(v0_24, *x15_334)
                            x15_334 += 0x10
                        while (x13_225 s< x22_17)
                    
                    if (x22_17 s< x3_44)
                        int64_t x13_227 = x22_17
                        
                        if (x11_427 u< 8)
                        label_c471b8:
                            void* x9_624 = x10_674 + ((x13_227 + x11_432 * x9_622) << 2)
                            void* x10_675 = x17_244 + (x13_227 << 2)
                            int64_t i_88 = x16_390 - x13_227
                            int64_t i_28
                            
                            do
                                v0_24.d = *x9_624
                                x9_624 += 4
                                v1_39.d = *x10_675
                                i_28 = i_88
                                i_88 -= 1
                                v0_24.d = v0_24.d f+ v1_39.d
                                *x10_675 = v0_24.d
                                x10_675 += 4
                            while (i_28 != 1)
                        else
                            if (x8_848 u< x10_674 + ((x3_44 + x12_264) << 2))
                                x13_227 = x22_17
                            
                            if (x8_848 u< x10_674 + ((x3_44 + x12_264) << 2)
                                    && x10_674 + (x22_17 << 2) + (x12_264 << 2) u< x8_849)
                                goto label_c471b8
                            
                            void* x14_285 = x26_2
                            void* x12_265 = x10_674 + ((x22_17 + 4) << 2) + (x12_264 << 2)
                            int64_t i_91 = i_121
                            int64_t i_29
                            
                            do
                                v0_24 = *(x12_265 - 0x10)
                                v1_39 = *x12_265
                                v3_21 = *x14_285
                                i_29 = i_91
                                i_91 -= 8
                                x12_265 += 0x20
                                v0_24 = vaddq_f32(v0_24, *(x14_285 - 0x10))
                                v1_39 = vaddq_f32(v1_39, v3_21)
                                *(x14_285 - 0x10) = v0_24
                                *x14_285 = v1_39
                                x14_285 += 0x20
                            while (i_29 != 8)
                            x13_227 = x11_428
                            
                            if (x11_427 != i_121)
                                goto label_c471b8
                    
                    int64_t x25_13 = *x23_5
                    int32_t* x24_26 = x27_25
                    int128_t* x21_32 = *(x13_139 * 0x80cf8 + &data_195dc38)
                    int64_t x23_12 =
                        x25_13 * sx.q(*(&data_18ddc30 + x2_85 * 0x80cf8 + (x20_14 << 2) + 0x80cc8))
                    void* fp_4 = x21_32 + (x23_12 << 2)
                    int64_t x8_860
                    
                    if (x19_26 == x25_13)
                    label_c472e8:
                        int64_t x8_862
                        
                        if (x19_26 s< 0)
                            x8_862 = x19_26 + 3
                        else
                            x8_862 = x19_26
                        
                        x8_860 = x8_862 & 0xfffffffffffffffc
                        
                        if (x19_26 s>= 4)
                            int64_t x9_626 = 0
                            int64_t x10_676 = 0
                            
                            do
                                x10_676 += 4
                                *(x24_26 + x9_626) = vmaxq_f32(*(x27_25 + x9_626), *(fp_4 + x9_626))
                                x9_626 += 0x10
                            while (x10_676 s< x8_860)
                    else
                        x19_26 = x25_13
                        
                        if (x25_13 != 0 && 0x7fffffffffffffff s/ x25_13 s<= 0)
                            v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = operator new(-1)
                            x17_244 = var_4c0.q
                            v7_5 = var_520.o
                            x4_35 = var_510_1
                            v6_9 = var_500.o
                            x3_44 = var_4c8.q
                            x2_85 = var_5c8
                            
                            if (x27_25 != 0)
                                goto label_c47220
                        else if (x27_25 != 0)
                        label_c47220:
                            v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = free(*(x27_25 - 8))
                            x17_244 = var_4c0.q
                            v7_5 = var_520.o
                            x4_35 = var_510_1
                            v6_9 = var_500.o
                            x3_44 = var_4c8.q
                            x2_85 = var_5c8
                        
                        if (x25_13 s> 0)
                            if (x25_13 u>> 0x3e != 0)
                                operator new(-1)
                            
                            int64_t x25_14 = x25_13 << 2
                            int64_t x0_388
                            x0_388, v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = malloc(x25_14 + 0x10)
                            
                            if (x0_388 == 0)
                                x24_26 = nullptr
                                
                                if (x25_14 != 0)
                                label_c472bc:
                                    
                                    if (x24_26 == 0)
                                        v0_24, v1_39, v2_27, v3_21, v6_9, v7_5 = operator new(-1)
                            else
                                x24_26 = (x0_388 + 0x10) & 0xfffffffffffffff0
                                *(x24_26 - 8) = x0_388
                                
                                if (x25_14 != 0)
                                    goto label_c472bc
                            
                            x2_85 = var_5c8
                            x3_44 = var_4c8.q
                            v6_9 = var_500.o
                            x4_35 = var_510_1
                            v7_5 = var_520.o
                            x17_244 = var_4c0.q
                            goto label_c472e8
                        
                        x24_26 = nullptr
                        x8_860 = neg.q(neg.q(x25_13) & 0xfffffffffffffffc)
                    
                    int64_t x9_627 = x19_26 - x8_860
                    
                    if (x19_26 s> x8_860)
                        if (x9_627 u< 8)
                        label_c473f4:
                            
                            do
                                v0_24.d = x27_25[x8_860]
                                v1_39.d = *(fp_4 + (x8_860 << 2))
                                x8_860 += 1
                                
                                if (v0_24.d f< v1_39.d)
                                    v0_24.d = v1_39.d
                                else
                                    v0_24.d = v0_24.d
                                
                                x24_26[x8_860] = v0_24.d
                            while (x19_26 != x8_860)
                        else
                            int64_t x11_433 = x8_860 << 2
                            void* x14_286 = &x24_26[x8_860]
                            void* x15_335 = &x24_26[x19_26]
                            
                            if (((x14_286 u< &x27_25[x19_26] ? 1 : 0)
                                    & (&x27_25[x8_860] u< x15_335 ? 1 : 0) & 1) != 0 || ((
                                    x14_286 u< x21_32 + ((x19_26 + x23_12) << 2) ? 1 : 0)
                                    & (x21_32 + ((x8_860 + x23_12) << 2) u< x15_335 ? 1 : 0) & 1) != 0)
                                goto label_c473f4
                            
                            int64_t i_120 = x9_627 & 0xfffffffffffffff8
                            x8_860 += i_120
                            int64_t x11_434 = x11_433 + 0x10
                            int64_t i_89 = i_120
                            int64_t i_30
                            
                            do
                                void* x13_238 = x27_25 + x11_434
                                void* x14_287 = fp_4 + x11_434
                                v0_24 = *(x13_238 - 0x10)
                                v1_39 = *x13_238
                                v2_27 = *(x14_287 - 0x10)
                                v3_21 = *x14_287
                                void* x13_239 = x24_26 + x11_434
                                i_30 = i_89
                                i_89 -= 8
                                x11_434 += 0x20
                                uint128_t v4_8 = vcgtq_f32(v2_27, v0_24)
                                uint128_t v5_8 = vcgtq_f32(v3_21, v1_39)
                                v0_24 = vbslq_s8(v4_8, v2_27, v0_24)
                                v1_39 = vbslq_s8(v5_8, v3_21, v1_39)
                                *(x13_239 - 0x10) = v0_24
                                *x13_239 = v1_39
                            while (i_30 != 8)
                            
                            if (x9_627 != i_120)
                                goto label_c473f4
                    
                    x23_5 = var_5c0_2
                    x27_25 = x24_26
                
                x20_14 += 1
            while (x20_14 != x4_35)
            
            int64_t x16_400 = var_5f0.q
            
            if (arg6 s>= 3)
                if (x17_231 s>= 0x300000001)
                    int64_t x8_865 = 0
                    void* x9_629 = x17_244
                    
                    do
                        x8_865 += 4
                        *x9_629 = vdivq_f32(*x9_629, v7_5)
                        x9_629 += 0x10
                    while (x8_865 s< x22_17)
                
                if (x22_17 s< x3_44)
                    int64_t x9_630 = x22_17
                    
                    if (x11_427 u>= 8)
                        int64_t i_74 = i_121
                        int64_t i_31
                        
                        do
                            v1_39 = *x26_2
                            i_31 = i_74
                            i_74 -= 8
                            v0_24 = vdivq_f32(*(x26_2 - 0x10), v7_5)
                            v1_39 = vdivq_f32(v1_39, v7_5)
                            *(x26_2 - 0x10) = v0_24
                            *x26_2 = v1_39
                            x26_2 += 0x20
                        while (i_31 != 8)
                        x9_630 = x11_428
                    
                    if (x11_427 u< 8 || x11_427 != i_121)
                        int64_t i_75 = x16_390 - x9_630
                        void* x9_632 = x17_244 + (x9_630 << 2)
                        int64_t i_32
                        
                        do
                            v0_24.d = *x9_632
                            i_32 = i_75
                            i_75 -= 1
                            v0_24.d = v0_24.d f/ v6_9.d
                            *x9_632 = v0_24.d
                            x9_632 += 4
                        while (i_32 != 1)
            
            int64_t x8_869 = var_1d8.q
            int64_t x9_633 = x3_44
            int64_t x12_271 = x8_869 + (x16_400 << 2)
            
            if ((x12_271 & 3) == 0)
                int64_t x9_635 = zx.q(neg.d(x12_271.d u>> 2)) & 3
                
                x9_633 = x9_635 s< x3_44 ? x9_635 : x3_44
            
            i_213 = i_214
            int64_t x10_682 = x3_44 - x9_633
            int64_t x11_436
            
            if (x10_682 s< 0)
                x11_436 = x10_682 + 3
            else
                x11_436 = x10_682
            
            if (x9_633 s>= 1)
                int64_t x13_240
                
                if (x9_633 u>= 8)
                    x13_240 = x9_633 << 2
                
                int64_t i_123
                
                if (x9_633 u>= 8 && (x12_271 u>= x17_244 + x13_240
                        || x17_244 u>= x8_869 + (x16_400 << 2) + x13_240))
                    i_123 = x9_633 & 0xfffffffffffffff8
                    void* x14_302 = x17_244 + 0x10
                    int64_t i_101 = i_123
                    void* x13_255 = x8_869 + ((x17_236 + 4) << 2)
                    int64_t i_33
                    
                    do
                        v0_24 = *(x14_302 - 0x10)
                        v1_39 = *x14_302
                        i_33 = i_101
                        i_101 -= 8
                        x14_302 += 0x20
                        *(x13_255 - 0x10) = v0_24
                        *x13_255 = v1_39
                        x13_255 += 0x20
                    while (i_33 != 8)
                    
                    if (x9_633 != i_123)
                        goto label_c47518
                else
                    i_123 = 0
                label_c47518:
                    int64_t x14_289 = i_123 << 2
                    int64_t i_92 = x9_633 - i_123
                    void* x12_274 = x17_244 + x14_289
                    int32_t* x14_290 = x8_869 + (x16_400 << 2) + x14_289
                    int64_t i_34
                    
                    do
                        v0_24.d = *x12_274
                        x12_274 += 4
                        i_34 = i_92
                        i_92 -= 1
                        *x14_290 = v0_24.d
                        x14_290 = &x14_290[1]
                    while (i_34 != 1)
            
            int64_t x12_275 = x11_436 & 0xfffffffffffffffc
            int64_t x11_437 = x12_275 + x9_633
            
            if (x10_682 s>= 4)
                int64_t x14_291 = x9_633 << 2
                void* x13_241 = x17_244 + x14_291
                float128* x14_292 = x8_869 + (x16_400 << 2) + x14_291
                int64_t x15_338 = x9_633
                
                do
                    v0_24 = *x13_241
                    x13_241 += 0x10
                    x15_338 += 4
                    *x14_292 = v0_24
                    x14_292 = &x14_292[1]
                while (x15_338 s< x11_437)
            
            if (x11_437 s< x3_44)
                int64_t x10_683 = x10_682 - x12_275
                
                if (x10_683 u< 8)
                label_c475f8:
                    int64_t x10_684 = x11_437 << 2
                    int64_t i_79 = x16_390 - x11_437
                    void* x8_870 = x17_244 + x10_684
                    int32_t* x10_685 = x8_869 + (x16_400 << 2) + x10_684
                    int64_t i_35
                    
                    do
                        v0_24.d = *x8_870
                        x8_870 += 4
                        i_35 = i_79
                        i_79 -= 1
                        *x10_685 = v0_24.d
                        x10_685 = &x10_685[1]
                    while (i_35 != 1)
                else
                    int64_t x12_276 = (x9_633 + x12_275) << 2
                    void* x13_244 = x17_244 + x12_276
                    
                    if (x8_869 + (x16_400 << 2) + x12_276 u< x17_244 + (x3_44 << 2)
                            && x13_244 u< x8_869 + ((x15_331 + x17_236) << 2))
                        goto label_c475f8
                    
                    int64_t i_117 = x10_683 & 0xfffffffffffffff8
                    x11_437 += i_117
                    void* x13_245 = x13_244 + 0x10
                    void* x12_277 = x8_869 + ((x17_236 + 4) << 2) + x12_276
                    int64_t i_95 = i_117
                    int64_t i_36
                    
                    do
                        v0_24 = *(x13_245 - 0x10)
                        v1_39 = *x13_245
                        i_36 = i_95
                        i_95 -= 8
                        x13_245 += 0x20
                        *(x12_277 - 0x10) = v0_24
                        *x12_277 = v1_39
                        x12_277 += 0x20
                    while (i_36 != 8)
                    
                    if (x10_683 != i_117)
                        goto label_c475f8
            
            int64_t x8_871 = var_1d8.q
            int64_t x12_278 = x8_871 + (sx.q(x9_609.d) << 2)
            int64_t x9_642 = x3_44
            
            if ((x12_278 & 3) == 0)
                int64_t x9_644 = zx.q(neg.d(x12_278.d u>> 2)) & 3
                
                x9_642 = x9_644 s< x3_44 ? x9_644 : x3_44
            
            int64_t x10_686 = x3_44 - x9_642
            int64_t x11_440
            
            if (x10_686 s< 0)
                x11_440 = x10_686 + 3
            else
                x11_440 = x10_686
            
            if (x9_642 s>= 1)
                int64_t x13_246
                
                if (x9_642 u>= 8)
                    x13_246 = x9_642 << 2
                
                int64_t i_124
                
                if (x9_642 u>= 8 && (x12_278 u>= &x27_25[x9_642]
                        || x27_25 u>= x8_871 + (x8_834 << 2) + x13_246))
                    i_124 = x9_642 & 0xfffffffffffffff8
                    void* x14_303 = &x27_25[4]
                    int64_t i_102 = i_124
                    void* x13_257 = x8_871 + ((x8_834 + 4) << 2)
                    int64_t i_37
                    
                    do
                        v0_24 = *(x14_303 - 0x10)
                        v1_39 = *x14_303
                        i_37 = i_102
                        i_102 -= 8
                        x14_303 += 0x20
                        *(x13_257 - 0x10) = v0_24
                        *x13_257 = v1_39
                        x13_257 += 0x20
                    while (i_37 != 8)
                    
                    if (x9_642 != i_124)
                        goto label_c4768c
                else
                    i_124 = 0
                label_c4768c:
                    int64_t i_93 = x9_642 - i_124
                    void* x12_283 = &x27_25[i_124]
                    int32_t* x14_297 = x8_871 + (x8_834 << 2) + (i_124 << 2)
                    int64_t i_38
                    
                    do
                        v0_24.d = *x12_283
                        x12_283 += 4
                        i_38 = i_93
                        i_93 -= 1
                        *x14_297 = v0_24.d
                        x14_297 = &x14_297[1]
                    while (i_38 != 1)
            
            int64_t x12_284 = x11_440 & 0xfffffffffffffffc
            int64_t x11_441 = x12_284 + x9_642
            
            if (x10_686 s>= 4)
                void* x13_248 = &x27_25[x9_642]
                float128* x14_299 = x8_871 + (x8_834 << 2) + (x9_642 << 2)
                int64_t x15_341 = x9_642
                
                do
                    v0_24 = *x13_248
                    x13_248 += 0x10
                    x15_341 += 4
                    *x14_299 = v0_24
                    x14_299 = &x14_299[1]
                while (x15_341 s< x11_441)
            
            if (x11_441 s< x3_44)
                int64_t x10_687 = x10_686 - x12_284
                
                if (x10_687 u< 8)
                label_c47778:
                    int64_t i_80 = x16_390 - x11_441
                    void* x8_872 = &x27_25[x11_441]
                    int32_t* x10_689 = x8_871 + (x8_834 << 2) + (x11_441 << 2)
                    int64_t i_39
                    
                    do
                        v0_24.d = *x8_872
                        x8_872 += 4
                        i_39 = i_80
                        i_80 -= 1
                        *x10_689 = v0_24.d
                        x10_689 = &x10_689[1]
                    while (i_39 != 1)
                else
                    int64_t x12_285 = (x9_642 + x12_284) << 2
                    void* x13_252 = &x27_25[x9_642 + x12_284]
                    
                    if (x8_871 + (x8_834 << 2) + x12_285 u< &x27_25[x3_44]
                            && x13_252 u< x8_871 + ((x8_834 + x15_331) << 2))
                        goto label_c47778
                    
                    int64_t i_118 = x10_687 & 0xfffffffffffffff8
                    x11_441 += i_118
                    int128_t* x13_253 = x13_252 + 0x10
                    uint128_t* x12_286 = x8_871 + ((x8_834 + 4) << 2) + x12_285
                    int64_t i_96 = i_118
                    int64_t i_40
                    
                    do
                        v0_24 = x13_253[-1]
                        v1_39 = *x13_253
                        i_40 = i_96
                        i_96 -= 8
                        x13_253 = &x13_253[2]
                        x12_286[-1] = v0_24
                        *x12_286 = v1_39
                        x12_286 = &x12_286[2]
                    while (i_40 != 8)
                    
                    if (x10_687 != i_118)
                        goto label_c47778
            
            char var_450 = 0x16
            __builtin_strncpy(&var_450 | 1, "value_dense", 0xb)
            char var_444_1 = 0
            sub_c48e30(&i_146, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_1d8, &var_450, 0)
            Eigen::Matrix<float, 1, -1, 1, 1, -1>::operator=<Eigen::Matrix<float, -1, 1, 0, -1, 1> >(
                &var_b8)
            int128_t* i_198 = i_146
            
            if (i_198 != 0)
                free(*(i_198 - 8))
            
            int64_t i_234 = i_176
            i_146 = &var_b8
            var_180 = &var_b8
            int32_t var_160_1 = 0x3f800000
            int64_t var_f8_3 = 0
            i_215 = nullptr
            
            if (i_234 != 0 && 0x7fffffffffffffff s/ i_234 s<= 0)
                operator new(-1)
                
                if (i_234 != 0 && 0x7fffffffffffffff s/ i_234 s<= 0)
                    operator new(-1)
            
            if (var_f8_3 != i_234)
                void** i_240 = i_215
                
                if (i_240 != 0)
                    free(i_240[-1])
                
                if (i_234 s< 1)
                    i_215 = nullptr
                else
                    if (i_234 u>> 0x3e != 0)
                        operator new(-1)
                    
                    int64_t x19_27 = i_234 << 2
                    int64_t x0_394 = malloc(x19_27 + 0x10)
                    void** i_246
                    
                    if (x0_394 == 0)
                        i_246 = nullptr
                        
                        if (x19_27 != 0)
                        label_c47934:
                            
                            if (i_246 == 0)
                                operator new(-1)
                    else
                        i_246 = (x0_394 + 0x10) & 0xfffffffffffffff0
                        i_246[-1] = x0_394
                        
                        if (x19_27 != 0)
                            goto label_c47934
                    
                    i_215 = i_246
            
            Eigen::internal::call_dense_assignment_loop<Eigen::Matrix<float, 1, -1, 1, 1, -1>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::ArrayWrapper<Eigen::Matrix<float, 1, -1, 1, 1, -1> const> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_tanh_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_log_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float, float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_exp_op<float>, Eigen::ArrayWrapper<Eigen::Matrix<float, 1, -1, 1, 1, -1> const> const> const, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Array<float, 1, -1, 1, 1, -1> const> const> const> const> const>, Eigen::internal::assign_op<float, float> >(
                &i_215, &i_146, &var_118)
            void** i_223 = i_175
            int64_t i_249 = i_237
            i_175 = i_215
            i_237 = i_234
            i_215 = i_223
            int64_t i_250 = i_249
            
            if (i_223 != 0)
                free(i_223[-1])
            
            i_215 = &i_175
            int64_t var_f8_5 = x0_362
            Eigen::internal::product_evaluator<Eigen::Product<Eigen::Matrix<float, 1, -1, 1, 1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, 0>, 7, Eigen::DenseShape, Eigen::DenseShape, float, float>::product_evaluator(
                &i_146)
            void* i_149 = i_141
            v8.d = *i_146
            
            if (i_149 != 0)
                free(*(i_149 - 8))
            
            *(i_174 + (x28_22 << 2)) = v8.d
            i_215 = &i_175
            int64_t var_f8_6 = x0_365
            v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, v21_3, 
                v22_3, v26_3, v30_3 = Eigen::internal::product_evaluator<Eigen::Product<Eigen::Matrix<float, 1, -1, 1, 1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, 0>, 7, Eigen::DenseShape, Eigen::DenseShape, float, float>::product_evaluator(
                &i_146)
            void* i_150 = i_141
            v8.d = *i_146
            
            if (i_150 != 0)
                v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, 
                    v21_3, v22_3, v26_3, v30_3 = free(*(i_150 - 8))
            
            *(i_213 + (x28_22 << 2)) = v8.d
            
            if (x27_25 != 0)
                v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, 
                    v21_3, v22_3, v26_3, v30_3 = free(*(x27_25 - 8))
            
            void* x8_881 = var_4c0.q
            
            if (x8_881 != 0)
                v0_24, v1_39, v2_27, v3_21, v4_7, v5_7, v6_9, v7_5, v16_5, v17_3, v18_3, v19_3, 
                    v21_3, v22_3, v26_3, v30_3 = free(*(x8_881 - 8))
            
            x4_35 = var_510_1
            v30_3 = var_4e0.o
            v6_9 = var_500.o
            v7_5 = var_520.o
            x28_22 += 1
        while (x28_22 != x4_35)

int128_t* i_233 = i_174
void* i_143

if (i_114 s< 0)
    i_143 = i_114 + 3
else
    i_143 = i_114

void* x8_900 = i_143 & 0xfffffffffffffffc

if (i_114 s>= 4)
    v0_24.d = 0x42b1722d
    v0_24:4.d = 0x42b1722d
    v0_24:8.d = 0x42b1722d
    v0_24:0xc.d = 0x42b1722d
    v1_39.d = 0xc2b1722d
    v1_39:4.d = 0xc2b1722d
    v1_39:8.d = 0xc2b1722d
    v1_39:0xc.d = 0xc2b1722d
    v2_27.d = 0x3fb8aa3b
    v2_27:4.d = 0x3fb8aa3b
    v2_27:8.d = 0x3fb8aa3b
    v2_27:0xc.d = 0x3fb8aa3b
    v3_21.d = 0xbf318000
    v3_21:4.d = 0xbf318000
    v3_21:8.d = 0xbf318000
    v3_21:0xc.d = 0xbf318000
    v4_7.d = 0x395e8083
    v4_7:4.d = 0x395e8083
    v4_7:8.d = 0x395e8083
    v4_7:0xc.d = 0x395e8083
    v5_7.d = 0x39506967
    v5_7:4.d = 0x39506967
    v5_7:8.d = 0x39506967
    v5_7:0xc.d = 0x39506967
    v6_9.d = 0x3ab743ce
    v6_9:4.d = 0x3ab743ce
    v6_9:8.d = 0x3ab743ce
    v6_9:0xc.d = 0x3ab743ce
    v7_5.d = 0x3d2aa9c1
    v7_5:4.d = 0x3d2aa9c1
    v7_5:8.d = 0x3d2aa9c1
    v7_5:0xc.d = 0x3d2aa9c1
    v16_5.d = 0x3e2aaaaa
    v16_5:4.d = 0x3e2aaaaa
    v16_5:8.d = 0x3e2aaaaa
    v16_5:0xc.d = 0x3e2aaaaa
    v17_3.d = 0x3c088908
    v17_3:4.d = 0x3c088908
    v17_3:8.d = 0x3c088908
    v17_3:0xc.d = 0x3c088908
    v18_3.d = 0xc38b0000
    v18_3:4.d = 0xc38b0000
    v18_3:8.d = 0xc38b0000
    v18_3:0xc.d = 0xc38b0000
    int64_t x9_660 = 0
    v19_3.d = 0x438b0000
    v19_3:4.d = 0x438b0000
    v19_3:8.d = 0x438b0000
    v19_3:0xc.d = 0x438b0000
    int128_t* i_242 = i_233
    
    do
        v21_3 = *i_242
        v22_3.d = 0x3f000000
        v22_3:4.d = 0x3f000000
        v22_3:8.d = 0x3f000000
        v22_3:0xc.d = 0x3f000000
        float128 v27_4 = vmaxq_f32(vminq_f32(v21_3, v0_24), v1_39)
        float128 v22_5 = vrndmq_f32(vfmaq_f32(v22_3, v2_27, v27_4))
        float128 v27_5 = vfmaq_f32(v27_4, v3_21, v22_5)
        float128 v28_3 = vmaxq_f32(v22_5, v18_3)
        float128 v27_6 = vfmaq_f32(v27_5, v4_7, v22_5)
        float128 v22_6 = vminq_f32(v28_3, v19_3)
        v26_3.d = 0x3f000000
        v26_3:4.d = 0x3f000000
        v26_3:8.d = 0x3f000000
        v26_3:0xc.d = 0x3f000000
        float128 v28_4 = vmulq_f32(v27_6, v27_6, 0)
        float128 v23_4 = vfmaq_f32(v6_9, v5_7, v27_6)
        float128 v24_4 = vfmaq_f32(v16_5, v7_5, v27_6)
        uint128_t v22_7 = vcvtq_s32_f32(v22_6)
        float128 v25_4 = vfmaq_f32(v17_3, v27_6, v23_4)
        float128 v23_5 = vmulq_f32(v27_6, v28_4, 0)
        float128 v26_4 = vfmaq_f32(v26_3, v27_6, v24_4)
        v24_4.d = v22_7.d s>> 2
        v24_4:4.d = v22_7:4.d s>> 2
        v24_4:8.d = v22_7:8.d s>> 2
        v24_4:0xc.d = v22_7:0xc.d s>> 2
        float128 v29_3 = vaddq_f32(v27_6, v30_3)
        v26_3 = vfmaq_f32(v26_4, v23_5, v25_4)
        v23_5.d = v24_4.d << 0x17
        v23_5:4.d = v24_4:4.d << 0x17
        v23_5:8.d = v24_4:8.d << 0x17
        v23_5:0xc.d = v24_4:0xc.d << 0x17
        float128 v29_4 = vfmaq_f32(v29_3, v28_4, v26_3)
        float128 v23_6 = v23_5 i+ v30_3
        uint128_t v22_8
        v22_8.d = vmlaq_s32(v22_7, v24_4, not.o(zx.o(2))).d << 0x17
        v22_8:4.d <<= 0x17
        v22_8:8.d <<= 0x17
        v22_8:0xc.d <<= 0x17
        x9_660 += 4
        *i_242 = vmaxq_f32(
            vmulq_f32(vmulq_f32(vmulq_f32(vmulq_f32(v29_4, v23_6, 0), v23_6, 0), v23_6, 0), 
                v22_8 i+ v30_3, 0), 
            v21_3)
        i_242 = &i_242[1]
    while (x9_660 s< x8_900)

void* x21_34 = i_114 - x8_900

if (i_114 s> x8_900)
    void* x22_19 = x8_900
    void* i_140
    
    if (x21_34 u>= 2)
        i_140 = x21_34 & 0xfffffffffffffffe
        x22_19 = x8_900 + i_140
        void* x24_28 = i_233 + (x8_900 << 2)
        void* i_113 = i_140
        void* i_41
        
        do
            v0_24.q = *x24_28
            var_4e0.o = v0_24
            v0_24.d = v0_24:4.d
            var_4c0.q = expf(v0_24.d)
            v0_24, v1_39, v2_27, v3_21 = expf(var_4e0.q.d)
            i_41 = i_113
            i_113 -= 2
            v0_24:4.d = var_4c0.o.d
            *x24_28 = v0_24.q
            x24_28 += 8
        while (i_41 != 2)
        x23_5 = var_5c0_2
    
    if (x21_34 u< 2 || x21_34 != i_140)
        void* i_112 = i_114 - x22_19
        void* x19_37 = i_233 + (x22_19 << 2)
        void* i_42
        
        do
            v0_24.d = *x19_37
            v0_24, v1_39, v2_27, v3_21 = expf(v0_24.d)
            i_42 = i_112
            i_112 -= 1
            *x19_37 = v0_24.d
            x19_37 += 4
        while (i_42 != 1)

int128_t* i_225 = i_174
float* x0_423
int64_t x15_343
float* x16_403
float* x17_253

if (arg6 == 0)
    x15_343 = var_5c8
    x17_253 = arg4
    x16_403 = arg5
    x0_423 = arg3
    v0_24.d = 0f
else
    x17_253 = arg4
    x16_403 = arg5
    x0_423 = arg3
    void* i_81 = i_114
    
    if ((i_225 & 3) == 0)
        void* i_119 = zx.q(neg.d(i_225.d u>> 2)) & 3
        
        i_81 = i_119 s< i_114 ? i_119 : i_114
    
    x15_343 = var_5c8
    int64_t x11_448 = i_114 - i_81
    int64_t x12_288
    
    if (x11_448 s< 0)
        x12_288 = x11_448 + 7
    else
        x12_288 = x11_448
    
    int64_t x10_696
    
    if (x11_448 s< 0)
        x10_696 = x11_448 + 3
    else
        x10_696 = x11_448
    
    if (x11_448 + 3 u>= 7)
        v0_24 = *(i_225 + (i_81 << 2))
        void* x10_698 = x10_696 & 0xfffffffffffffffc
        
        if (x11_448 s>= 8)
            void* x14_305 = i_225 + (i_81 << 2)
            v1_39 = *(x14_305 + 0x10)
            void* x12_289 = x12_288 & 0xfffffffffffffff8
            void* x11_449 = x12_289 + i_81
            
            if (x11_448 s>= 0x10)
                void* x13_261 = i_81 + 8
                void* x14_306 = x14_305 + 0x30
                
                do
                    v2_27 = *(x14_306 - 0x10)
                    v3_21 = *x14_306
                    x13_261 += 8
                    x14_306 += 0x20
                    v0_24 = vaddq_f32(v0_24, v2_27)
                    v1_39 = vaddq_f32(v1_39, v3_21)
                while (x13_261 s< x11_449)
            
            v0_24 = vaddq_f32(v1_39, v0_24)
            
            if (x10_698 s> x12_289)
                v0_24 = vaddq_f32(v0_24, *(i_225 + (x11_449 << 2)))
        
        int128_t v0_26 = vadd_f32(v0_24, vextq_s8(v0_24, v0_24, 8))
        void* x10_699 = x10_698 + i_81
        v0_24 = vpadd_f32(v0_26, v0_26)
        
        if (i_81 s>= 1)
            int128_t* i_243 = i_225
            void* i_43
            
            do
                v1_39.d = *i_243
                i_243 += 4
                i_43 = i_81
                i_81 -= 1
                v0_24.d = v0_24.d f+ v1_39.d
            while (i_43 != 1)
        
        while (x10_699 s< i_114)
            v1_39.d = *(i_225 + (x10_699 << 2))
            x10_699 += 1
            v0_24.d = v0_24.d f+ v1_39.d
    else
        v0_24.d = *i_225
        
        if (arg6 s>= 2)
            void* i_82 = i_114 - 1
            void* x10_697 = i_225 + 4
            void* i_44
            
            do
                v1_39.d = *x10_697
                x10_697 += 4
                i_44 = i_82
                i_82 -= 1
                v0_24.d = v0_24.d f+ v1_39.d
            while (i_44 != 1)

void* i_144

if (i_114 s< 0)
    i_144 = i_114 + 3
else
    i_144 = i_114

void* x10_701 = i_144 & 0xfffffffffffffffc

if (i_114 s>= 4)
    int64_t x11_451 = 0
    v1_39 = vdupq_laneq_s32(v0_24, 0)
    int128_t* i_244 = i_225
    
    do
        x11_451 += 4
        *i_244 = vdivq_f32(*i_244, v1_39)
        i_244 = &i_244[1]
    while (x11_451 s< x10_701)

void* x11_452 = i_114 - x10_701

if (i_114 s> x10_701)
    void* x12_290 = x10_701
    void* i_126
    
    if (x11_452 u>= 8)
        i_126 = x11_452 & 0xfffffffffffffff8
        v1_39 = vdupq_laneq_s32(v0_24, 0)
        x12_290 = x10_701 + i_126
        void* x10_702 = i_225 + (x10_701 << 2) + 0x10
        void* i_97 = i_126
        void* i_45
        
        do
            v3_21 = *x10_702
            i_45 = i_97
            i_97 -= 8
            v2_27 = vdivq_f32(*(x10_702 - 0x10), v1_39)
            v3_21 = vdivq_f32(v3_21, v1_39)
            *(x10_702 - 0x10) = v2_27
            *x10_702 = v3_21
            x10_702 += 0x20
        while (i_45 != 8)
    
    if (x11_452 u< 8 || x11_452 != i_126)
        void* i_83 = i_114 - x12_290
        void* x8_901 = i_225 + (x12_290 << 2)
        void* i_46
        
        do
            v1_39.d = *x8_901
            i_46 = i_83
            i_83 -= 1
            v1_39.d = v1_39.d f/ v0_24.d
            *x8_901 = v1_39.d
            x8_901 += 4
        while (i_46 != 1)

if (arg6 s>= 1)
    int128_t* i_230 = i_174
    int64_t i_47 = 0
    
    do
        v0_24.d = *(i_230 + i_47)
        v1_39.d = float.s(0x42480000)
        *(x0_423 + i_47) = v0_24.d
        v0_24.d = *(i_213 + i_47)
        v0_24.d = v0_24.d f* v1_39.d
        *(x17_253 + i_47) = v0_24.d
        v0_24.d = *(i_230 + i_47)
        v1_39.d = *i_230
        v0_24.d = v0_24.d f- v1_39.d
        *(x16_403 + i_47) = v0_24.d
        i_47 += 4
    while (zx.q(arg6) << 2 != i_47)

i_141 = *(x15_343 * 0x80cf8 + &data_195dc58)
int32_t var_190_2 = 0
int128_t v0_27
int128_t v1_40
v0_27, v1_40 = Eigen::internal::call_assignment_no_alias<Eigen::Matrix<float, 1, -1, 1, 1, -1>, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, 1, -1, 1, 1, -1> >, Eigen::internal::assign_op<float, float> >(
    x15_343 * 0x80cf8 + &data_195dc48:8, &i_146, &i_215)
void* x5_30 = var_4c8.q
*(*(x15_343 * 0x80cf8 + &data_195dc48:8) + (zx.q(arg8) << 2)) = 0x3f800000
void* x8_905 = *(x15_343 * 0x80cf8 + &data_195dc48:8)
int64_t x10_706 = *x23_5
void* x12_291 = x5_30
int64_t x9_664 = sx.q(*(x14_271 * 0x80cf8 + 0x195e910))

if (((x8_905 + 0xf4) & 3) == 0)
    void* x11_454 = zx.q(neg.d((x8_905 + 0xf4).d u>> 2)) & 3
    
    x12_291 = x11_454 s< x5_30 ? x11_454 : x5_30

int64_t x15_344 = x5_30 - x12_291
int128_t* x11_456 = *(x13_139 * 0x80cf8 + &data_195dc38)
int64_t x13_263

if (x15_344 s< 0)
    x13_263 = x15_344 + 3
else
    x13_263 = x15_344

int64_t x14_308 = x10_706 * x9_664
void* x13_264 = x13_263 & 0xfffffffffffffffc

if (x12_291 s>= 1)
    void* i_137
    
    if (x12_291 u< 8 || (x8_905 + 0xf4 u< x11_456 + ((x12_291 + x10_706 * x9_664) << 2)
            && x11_456 + (x14_308 << 2) u< x8_905 + (x12_291 << 2) + 0xf4))
        i_137 = nullptr
    label_c48490:
        int64_t i_110 = x12_291 - i_137
        void* x16_406 = x11_456 + ((i_137 + x10_706 * x9_664) << 2)
        int32_t* x0_426 = x8_905 + (i_137 << 2) + 0xf4
        int64_t i_48
        
        do
            v0_27.d = *x16_406
            x16_406 += 4
            i_48 = i_110
            i_110 -= 1
            *x0_426 = v0_27.d
            x0_426 = &x0_426[1]
        while (i_48 != 1)
    else
        i_137 = x12_291 & 0xfffffffffffffff8
        void* x17_269 = x8_905 + 0x104
        void* x0_453 = x11_456 + (x14_308 << 2) + 0x10
        void* i_68 = i_137
        void* i_49
        
        do
            v0_27 = *(x0_453 - 0x10)
            v1_40 = *x0_453
            i_49 = i_68
            i_68 -= 8
            x0_453 += 0x20
            *(x17_269 - 0x10) = v0_27
            *x17_269 = v1_40
            x17_269 += 0x20
        while (i_49 != 8)
        
        if (x12_291 != i_137)
            goto label_c48490

void* x16_407 = x13_264 + x12_291

if (x15_344 s>= 4)
    void* x17_259 = x11_456 + ((x12_291 + x10_706 * x9_664) << 2)
    int128_t* x0_428 = x8_905 + (x12_291 << 2) + 0xf4
    void* x1_122 = x12_291
    
    do
        v0_27 = *x17_259
        x17_259 += 0x10
        x1_122 += 4
        *x0_428 = v0_27
        x0_428 = &x0_428[1]
    while (x1_122 s< x16_407)

if (x16_407 s< x5_30)
    void* x15_345 = x15_344 - x13_264
    
    if (x15_345 u< 8)
    label_c48584:
        void* i_76 = sx.q(x27_24.d) - x16_407
        void* x9_666 = x11_456 + ((x16_407 + x10_706 * x9_664) << 2)
        int32_t* x10_708 = x8_905 + (x16_407 << 2) + 0xf4
        void* i_50
        
        do
            v0_27.d = *x9_666
            x9_666 += 4
            i_50 = i_76
            i_76 -= 1
            *x10_708 = v0_27.d
            x10_708 = &x10_708[1]
        while (i_50 != 1)
    else
        void* x17_261 = x8_905 + ((x12_291 + x13_264) << 2)
        
        if (x17_261 + 0xf4 u< x11_456 + ((x14_308 + sx.q(x9.d)) << 2)
                && x11_456 + ((x12_291 + x14_308 + x13_264) << 2)
                u< x8_905 + (x17_231 s>> 0x1e) + 0xf4)
            goto label_c48584
        
        void* i_131 = x15_345 & 0xfffffffffffffff8
        void* x17_262 = x17_261 + 0x104
        x16_407 += i_131
        void* x12_295 = x11_456 + ((x12_291 + x10_706 * x9_664 + x13_264) << 2) + 0x10
        void* i_94 = i_131
        void* i_51
        
        do
            v0_27 = *(x12_295 - 0x10)
            v1_40 = *x12_295
            i_51 = i_94
            i_94 -= 8
            x12_295 += 0x20
            *(x17_262 - 0x10) = v0_27
            *x17_262 = v1_40
            x17_262 += 0x20
        while (i_51 != 8)
        
        if (x15_345 != i_131)
            goto label_c48584

int64_t x10_709 = *(x15_343 * 0x80cf8 + &data_195dc48:8)
int64_t x8_906 = sx.q(x27_24.d)
int64_t x11_459 = sx.q(*(&data_18ddc30 + var_5c8 * 0x80cf8 + (sx.q(arg7) << 2) + 0x80cc8))
int64_t x12_298 = *x23_5
int64_t x0_435 = x10_709 + ((x8_906 + 0x3d) << 2)
void* x14_312 = x5_30

if ((x0_435 & 3) == 0)
    void* x13_267 = zx.q(neg.d(x0_435.d u>> 2)) & 3
    
    x14_312 = x13_267 s< x5_30 ? x13_267 : x5_30

int64_t x17_263 = x5_30 - x14_312
int128_t* x13_269 = *(x13_139 * 0x80cf8 + &data_195dc38)
int64_t x15_347

if (x17_263 s< 0)
    x15_347 = x17_263 + 3
else
    x15_347 = x17_263

void* x16_408 = x12_298 * x11_459
void* x15_348 = x15_347 & 0xfffffffffffffffc

if (x14_312 s>= 1)
    void* i_115
    
    if (x14_312 u< 8 || (x0_435 u< x13_269 + ((x14_312 + x12_298 * x11_459) << 2)
            && x13_269 + (x16_408 << 2) u< x10_709 + ((x14_312 + x8_906 + 0x3d) << 2)))
        i_115 = nullptr
    label_c48658:
        int64_t i_67 = x14_312 - i_115
        void* x0_437 = x13_269 + ((i_115 + x12_298 * x11_459) << 2)
        int32_t* x2_103 = x10_709 + ((i_115 + x8_906 + 0x3d) << 2)
        int64_t i_52
        
        do
            v0_27.d = *x0_437
            x0_437 += 4
            i_52 = i_67
            i_67 -= 1
            *x2_103 = v0_27.d
            x2_103 = &x2_103[1]
        while (i_52 != 1)
    else
        i_115 = x14_312 & 0xfffffffffffffff8
        void* x1_143 = x10_709 + ((x8_906 + 0x3d) << 2) + 0x10
        void* x2_115 = x13_269 + (x16_408 << 2) + 0x10
        void* i_70 = i_115
        void* i_53
        
        do
            v0_27 = *(x2_115 - 0x10)
            v1_40 = *x2_115
            i_53 = i_70
            i_70 -= 8
            x2_115 += 0x20
            *(x1_143 - 0x10) = v0_27
            *x1_143 = v1_40
            x1_143 += 0x20
        while (i_53 != 8)
        
        if (x14_312 != i_115)
            goto label_c48658

void* result = x15_348 + x14_312

if (x17_263 s>= 4)
    void* x1_129 = x13_269 + ((x14_312 + x12_298 * x11_459) << 2)
    int128_t* x2_105 = x10_709 + ((x14_312 + x8_906 + 0x3d) << 2)
    void* x3_55 = x14_312
    
    do
        v0_27 = *x1_129
        x1_129 += 0x10
        x3_55 += 4
        *x2_105 = v0_27
        x2_105 = &x2_105[1]
    while (x3_55 s< result)

if (result s< x5_30)
    void* x17_264 = x17_263 - x15_348
    
    if (x17_264 u< 8)
    label_c48744:
        void* i_85 = sx.q(x27_24.d) - result
        void* x12_300 = x13_269 + ((result + x12_298 * x11_459) << 2)
        int32_t* x10_710 = x10_709 + ((result + x8_906 + 0x3d) << 2)
        void* i_54
        
        do
            v0_27.d = *x12_300
            x12_300 += 4
            i_54 = i_85
            i_85 -= 1
            *x10_710 = v0_27.d
            x10_710 = &x10_710[1]
        while (i_54 != 1)
    else
        void* x1_132 = x10_709 + ((x14_312 + x15_348 + x8_906 + 0x3d) << 2)
        
        if (x1_132 u< x13_269 + ((x16_408 + x5_30) << 2)
                && x13_269 + ((x14_312 + x16_408 + x15_348) << 2)
                u< x10_709 + ((x5_30 + x8_906 + 0x3d) << 2))
            goto label_c48744
        
        void* i_138 = x17_264 & 0xfffffffffffffff8
        int128_t* x1_133 = x1_132 + 0x10
        result += i_138
        void* x14_316 = x13_269 + ((x14_312 + x12_298 * x11_459 + x15_348) << 2) + 0x10
        void* i_103 = i_138
        void* i_55
        
        do
            v0_27 = *(x14_316 - 0x10)
            v1_40 = *x14_316
            i_55 = i_103
            i_103 -= 8
            x14_316 += 0x20
            x1_133[-1] = v0_27
            *x1_133 = v1_40
            x1_133 = &x1_133[2]
        while (i_55 != 8)
        
        if (x17_264 != i_138)
            goto label_c48744

if (*(x14_271 * 0x80cf8 + 0x195e914) s>= 0xc)
    uint64_t x10_715 = zx.q(*(&data_18ddc30 + var_5c8 * 0x80cf8 + (zx.q(arg9.d) << 2) + 0x80048))
    
    if ((x10_715.d & 0x80000000) == 0)
        int64_t x11_461 = *(x15_343 * 0x80cf8 + &data_195dc48:8)
        int64_t x8_907 = x8_906 + sx.q((x8_906 + 0x3d).d)
        int64_t x9_668 = *x23_5
        void* x13_270 = x5_30
        int64_t x17_265 = x11_461 + (x8_907 << 2)
        
        if ((x17_265 & 3) == 0)
            void* x12_302 = zx.q(neg.d(x17_265.d u>> 2)) & 3
            
            x13_270 = x12_302 s< x5_30 ? x12_302 : x5_30
        
        int64_t x16_412 = x5_30 - x13_270
        int128_t* x12_304 = *(x13_139 * 0x80cf8 + &data_195dc38)
        int64_t x14_320
        
        if (x16_412 s< 0)
            x14_320 = x16_412 + 3
        else
            x14_320 = x16_412
        
        void* x15_350 = x9_668 * x10_715
        void* x14_321 = x14_320 & 0xfffffffffffffffc
        
        if (x13_270 s>= 1)
            void* i_139
            
            if (x13_270 u< 8 || (x17_265 u< x12_304 + ((x13_270 + x9_668 * x10_715) << 2)
                    && x12_304 + (x15_350 << 2) u< x11_461 + ((x13_270 + x8_907) << 2)))
                i_139 = nullptr
            label_c48828:
                result = x13_270 - i_139
                void* x17_267 = x12_304 + ((i_139 + x9_668 * x10_715) << 2)
                int32_t* x1_135 = x11_461 + ((x8_907 + i_139) << 2)
                void* i_56
                
                do
                    v0_27.d = *x17_267
                    x17_267 += 4
                    i_56 = result
                    result -= 1
                    *x1_135 = v0_27.d
                    x1_135 = &x1_135[1]
                while (i_56 != 1)
            else
                i_139 = x13_270 & 0xfffffffffffffff8
                result = x11_461 + (x8_907 << 2) + 0x10
                void* x1_145 = x12_304 + (x15_350 << 2) + 0x10
                void* i_69 = i_139
                void* i_57
                
                do
                    v0_27 = *(x1_145 - 0x10)
                    v1_40 = *x1_145
                    i_57 = i_69
                    i_69 -= 8
                    x1_145 += 0x20
                    *(result - 0x10) = v0_27
                    *result = v1_40
                    result += 0x20
                while (i_57 != 8)
                
                if (x13_270 != i_139)
                    goto label_c48828
        
        void* x17_268 = x14_321 + x13_270
        
        if (x16_412 s>= 4)
            result = x12_304 + ((x13_270 + x9_668 * x10_715) << 2)
            int128_t* x1_137 = x11_461 + ((x8_907 + x13_270) << 2)
            void* x2_111 = x13_270
            
            do
                v0_27 = *result
                result += 0x10
                x2_111 += 4
                *x1_137 = v0_27
                x1_137 = &x1_137[1]
            while (x2_111 s< x17_268)
        
        if (x17_268 s< x5_30)
            void* x16_413 = x16_412 - x14_321
            
            if (x16_413 u< 8)
            label_c4891c:
                void* i_77 = sx.q(x27_24.d) - x17_268
                void* x9_670 = x12_304 + ((x17_268 + x9_668 * x10_715) << 2)
                int32_t* x10_717 = x11_461 + ((x8_907 + x17_268) << 2)
                void* i_58
                
                do
                    v0_27.d = *x9_670
                    x9_670 += 4
                    i_58 = i_77
                    i_77 -= 1
                    *x10_717 = v0_27.d
                    x10_717 = &x10_717[1]
                while (i_58 != 1)
            else
                result = x13_270 + x14_321
                
                if (x11_461 + ((result + x8_907) << 2) u< x12_304 + ((x15_350 + x5_30) << 2)
                        && x12_304 + ((x13_270 + x15_350 + x14_321) << 2)
                        u< x11_461 + ((x5_30 + x8_907) << 2))
                    goto label_c4891c
                
                void* result_1 = x16_413 & 0xfffffffffffffff8
                x17_268 += result_1
                void* x13_272 = x11_461 + ((x8_907 + result) << 2) + 0x10
                void* x14_324 = x12_304 + ((x13_270 + x9_668 * x10_715 + x14_321) << 2) + 0x10
                result = result_1
                void* i_59
                
                do
                    v0_27 = *(x14_324 - 0x10)
                    v1_40 = *x14_324
                    i_59 = result
                    result -= 8
                    x14_324 += 0x20
                    *(x13_272 - 0x10) = v0_27
                    *x13_272 = v1_40
                    x13_272 += 0x20
                while (i_59 != 8)
                
                if (x16_413 != result_1)
                    goto label_c4891c

int128_t* i_226 = i_174

if (i_226 != 0)
    result = free(*(i_226 - 8))

void** i_227 = i_175

if (i_227 != 0)
    result = free(i_227[-1])

void* x8_908 = var_b8.q

if (x8_908 != 0)
    result = free(*(x8_908 - 8))

if (i_213 != 0)
    result = free(*(i_213 - 8))

void* x8_909 = var_1d8.q

if (x8_909 != 0)
    result = free(*(x8_909 - 8))

int32_t* x8_910 = var_388

if (x8_910 != 0)
    result = free(*(x8_910 - 8))

void* const x8_911 = var_348

if (x8_911 == 0)
    return result

return free(*(x8_911 - 8))
