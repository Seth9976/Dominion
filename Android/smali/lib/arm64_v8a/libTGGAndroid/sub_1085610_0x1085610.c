// 函数: sub_1085610
// 地址: 0x1085610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t* x23 = arg2
int64_t x22 = arg5
int64_t* x25 = *arg2
int64_t x9 = x25[2].d
int64_t x24 = *(x25 + 0x14)
int64_t x19 = *arg2[3]
int32_t x20 = (*x25).d
int32_t x21 = (x25[1]).d
int64_t var_4b0[0x80]
memset(&var_4b0, 0, 0x400)
int64_t var_8b0[0x80]
void* result
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
int128_t v4
int128_t v5
result, v0, v1, v2, v3, v4, v5 = memset(&var_8b0, 0, 0x400)
int32_t x8_3 = *(x23 + 0xc)

if (x8_3 s>= 1)
    int64_t x10_1 = x19 << 0x20
    int64_t x10_3 = sx.q(arg4)
    int64_t i = 0
    int64_t x21_1 = sx.q(x19.d)
    int64_t var_9c0_1 = x24
    int128_t var_a0
    void* var_8f0_1 = &var_a0:0xc
    int64_t x9_3 = sx.q((x21 - x20) s/ x9.d)
    int64_t* var_988_1 = x23
    int64_t var_980_1 = x22
    int64_t* var_990_1 = x25
    int64_t var_960_1 = x21_1
    
    do
        if (x9_3.d s>= 1)
            int64_t x20_1 = x9
            int32_t x8_6 = 1 << (i.d & 0xffffffff)
            int32_t x8_7 = (arg4 s< 1 ? 1 : 0) | (i != 0 ? 1 : 0)
            int64_t x11_1 = 0
            int64_t i_1 = i
            
            do
                int64_t var_940_1 = x11_1
                
                if ((x8_7 & 1) == 0)
                    int64_t x19_1 = 0
                    
                    do
                        int64_t x8_9 = *(x22 + (x19_1 << 3))
                        int64_t x1 = *(x8_9 + (x11_1 << 3))
                        
                        if (x10_1 s>= 0x100000001)
                            int64_t x8_10 = x8_9 + (x11_1 << 3)
                            int64_t x9_7 = 1
                            
                            do
                                x1 *= x24
                                
                                if (x11_1 + x9_7 s< x9_3)
                                    x1 += *(x8_10 + (x9_7 << 3))
                                
                                x11_1 = var_940_1
                                x9_7 += 1
                            while (x9_7 s< x21_1)
                        
                        result = x23[3]
                        
                        if (x1 s< *(result + 8))
                            result, v0, v1, v2, v3, v4, v5 = vorbis_book_encode(result, x1, arg1)
                            x11_1 = var_940_1
                            x23[8] += sx.q(result.d)
                        
                        x19_1 += 1
                    while (x19_1 != x10_3)
                
                if (x10_1 s>= 1 && x11_1 s< x9_3)
                    int64_t var_9a0_1 = x20_1 * x11_1
                    int64_t var_998_1 = 0
                    
                    do
                        if (arg4 s>= 1)
                            int64_t x8_19 = *x25
                            int64_t x12_1 = 0
                            int64_t x9_10 = x8_19 + (var_940_1 + var_998_1) * x20_1
                            int64_t var_928_1 = x11_1
                            int64_t x10_9 = x8_19 + x11_1 * x20_1
                            
                            do
                                int64_t* x8_22 = *(x22 + (x12_1 << 3)) + (x11_1 << 3)
                                int64_t x9_12 = *x8_22
                                
                                if (i == 0)
                                    var_8b0[x9_12] += x20_1
                                
                                if ((*(x25 + (x9_12 << 2) + 0x20) & x8_6) != 0)
                                    int64_t* x24_1 = *(*(x23[4] + (x9_12 << 3)) + (i << 3))
                                    
                                    if (x24_1 != 0)
                                        int64_t x26_1 = *x24_1
                                        int32_t x9_14 = x20_1.d s/ x26_1.d
                                        int32_t x21_2
                                        
                                        if (x9_14 s< 1)
                                            x21_2 = 0
                                        else
                                            int64_t x25_1 = 0
                                            x21_2 = 0
                                            int64_t x10_15 = *(arg3 + (x12_1 << 3))
                                            int64_t x8_24 = x26_1 << 0x20
                                            int64_t x8_25 = sx.q(x26_1.d)
                                            int64_t x8_26 = x8_25 << 2
                                            int64_t x9_16 = x10_15 + (x10_9 << 2)
                                            void* x22_1 = x10_15 + ((x8_19 + var_9a0_1) << 2)
                                            void* x12_2 = x22_1 - 4
                                            void* x19_2 = x22_1 + 0x10
                                            
                                            while (true)
                                                int32_t x27_1 = x24_1[0xa].d
                                                int32_t x28_1 = *(x24_1 + 0x54)
                                                int32_t x20_2 = x24_1[0xb].d
                                                v0.q = 0
                                                v0:8.q = 0
                                                int32_t x23_1 = x27_1 s>> 1
                                                uint128_t var_90
                                                __builtin_memset(&var_90, 0, 0x20)
                                                int32_t x1_2
                                                
                                                if (x20_2 != 1)
                                                    if (x26_1.d s< 1)
                                                        x1_2 = 0
                                                    else
                                                        int64_t x11_8 =
                                                            (x26_1 & 0xffffffff) << 0x20 s>> 0x1e
                                                        x1_2 = 0
                                                        void* x10_25 = var_8f0_1 + x11_8
                                                        void* x11_9 = x12_2 + x11_8
                                                        int32_t j_9 = x26_1.d
                                                        int32_t j
                                                        
                                                        do
                                                            int32_t x13_3 = ((x20_2 s>> 1) - x28_1
                                                                + *x11_9) s/ x20_2
                                                            int32_t x14_4
                                                            
                                                            if (x13_3 s>= x23_1)
                                                                x14_4 = (x13_3 - x23_1) << 1
                                                            else
                                                                x14_4 = ((x23_1 - x13_3) << 1) - 1
                                                            
                                                            int32_t x15_1
                                                            
                                                            if (x14_4 s< x27_1)
                                                                x15_1 = x14_4
                                                            else
                                                                x15_1 = x27_1 - 1
                                                            
                                                            *x10_25 = x28_1 + x13_3 * x20_2
                                                            x10_25 -= 4
                                                            int32_t x13_5
                                                            
                                                            x13_5 = x14_4 s< 0 ? 0 : x15_1
                                                            
                                                            j = j_9
                                                            j_9 -= 1
                                                            x1_2 = x13_5 + x1_2 * x27_1
                                                            x11_9 -= 4
                                                        while (j != 1)
                                                else if (x26_1.d s< 1)
                                                    x1_2 = 0
                                                else
                                                    int64_t x9_18 =
                                                        sx.q(x26_1.d) - zx.q(x26_1.d - 1)
                                                    v0, v1, v2, v3, v4, v5 = memcpy(
                                                        var_8f0_1 + (x9_18 << 2), 
                                                        x9_16 - 4 + ((x9_18
                                                            + ((x8_24 * x25_1) s>> 0x20)) << 2), 
                                                        (x26_1 & 0xffffffff) << 2)
                                                    x1_2 = 0
                                                    int32_t j_7 = x26_1.d
                                                    int32_t* x8_36 = x12_2 + (sx.q(x26_1.d) << 2)
                                                    int32_t j_1
                                                    
                                                    do
                                                        int32_t x10_19 = *x8_36 - x28_1
                                                        int32_t x10_22
                                                        
                                                        if (x10_19 s>= x23_1)
                                                            x10_22 = (x10_19 - x23_1) << 1
                                                        else
                                                            x10_22 = ((x23_1 - x10_19) << 1) - 1
                                                        
                                                        int32_t x11_7
                                                        
                                                        if (x10_22 s< x27_1)
                                                            x11_7 = x10_22
                                                        else
                                                            x11_7 = x27_1 - 1
                                                        
                                                        int32_t x10_23
                                                        
                                                        x10_23 = x10_22 s< 0 ? 0 : x11_7
                                                        
                                                        j_1 = j_7
                                                        j_7 -= 1
                                                        x1_2 = x10_23 + x1_2 * x27_1
                                                        x8_36 -= 4
                                                    while (j_1 != 1)
                                                
                                                void* x8_39 = *(x24_1[3] + 0x10)
                                                void* x19_4
                                                int32_t x21_4
                                                int64_t x5_1
                                                
                                                if (sx.d(*(x8_39 + sx.q(x1_2))) s<= 0)
                                                    v0.q = 0
                                                    v0:8.q = 0
                                                    int128_t var_b0
                                                    __builtin_memset(&var_b0, 0, 0x20)
                                                    int64_t x9_24 = x24_1[1]
                                                    x19_4 = x19_2
                                                    
                                                    if (x9_24 s< 1)
                                                        x5_1 = x8_25
                                                        goto label_1085a54
                                                    
                                                    x5_1 = x8_25
                                                    x21_4 = x21_2
                                                    int64_t x11_10 = x26_1 & 0xffffffff
                                                    int64_t x12_4 = x26_1 & 7
                                                    int64_t x10_27 = 0
                                                    int64_t j_14 = x11_10 - x12_4
                                                    int32_t x15_2 = -1
                                                    
                                                    do
                                                        if (sx.d(*(x8_39 + x10_27)) s>= 1)
                                                            int32_t x16_2
                                                            
                                                            if (x26_1.d s< 1)
                                                                x16_2 = 0
                                                                
                                                                if (x15_2 == 0xffffffff
                                                                    || x16_2 s< x15_2)
                                                                label_1085b84:
                                                                    v0 = var_a0
                                                                    x1_2 = x10_27.d
                                                                    x15_2 = x16_2
                                                                    var_90 = var_b0
                                                                    uint128_t var_80_1 = v0
                                                            else
                                                                int64_t j_15
                                                                
                                                                if (x11_10 u>= 8)
                                                                    int128_t* x18_1 = &var_a0
                                                                    v0.q = 0
                                                                    v0:8.q = 0
                                                                    int64_t j_11 = j_14
                                                                    void* x17_1 = x19_4
                                                                    v1.q = 0
                                                                    v1:8.q = 0
                                                                    int64_t j_2
                                                                    
                                                                    do
                                                                        v2 = x18_1[-1]
                                                                        v3 = *x18_1
                                                                        v4 = *(x17_1 - 0x10)
                                                                        v5 = *x17_1
                                                                        x18_1 = &x18_1[2]
                                                                        j_2 = j_11
                                                                        j_11 -= 8
                                                                        x17_1 += 0x20
                                                                        v2 -= v4
                                                                        v3 -= v5
                                                                        v0 = vmlaq_s32(v0, v2, v2)
                                                                        v1 = vmlaq_s32(v1, v3, v3)
                                                                    while (j_2 != 8)
                                                                    v0.d = vaddvq_u32(v1 + v0)
                                                                    x16_2 = v0.d
                                                                    j_15 = j_14
                                                                    
                                                                    if (x12_4 != 0)
                                                                        goto label_1085b54
                                                                else
                                                                    j_15 = 0
                                                                    x16_2 = 0
                                                                label_1085b54:
                                                                    int64_t x0_3 = j_15 << 2
                                                                    int64_t j_12 = x11_10 - j_15
                                                                    void* x18_2 = x22_1 + x0_3
                                                                    void* x0_4 = &var_b0 + x0_3
                                                                    int64_t j_3
                                                                    
                                                                    do
                                                                        int32_t x2_2 = *x0_4
                                                                        x0_4 += 4
                                                                        int32_t x3 = *x18_2
                                                                        x18_2 += 4
                                                                        j_3 = j_12
                                                                        j_12 -= 1
                                                                        int32_t x2_3 = x2_2 - x3
                                                                        x16_2 += x2_3 * x2_3
                                                                    while (j_3 != 1)
                                                                
                                                                if (x15_2 == 0xffffffff
                                                                        || x16_2 s< x15_2)
                                                                    goto label_1085b84
                                                        
                                                        int32_t j_4 = var_b0.d
                                                        int128_t* x16_3 = &var_b0
                                                        
                                                        for (; j_4 s>= x28_1 + (x27_1 - 1) * x20_2; 
                                                                j_4 = *x16_3)
                                                            *x16_3 = 0
                                                            x16_3 += 4
                                                        
                                                        if ((j_4 & 0x80000000) == 0)
                                                            j_4 += x20_2
                                                            *x16_3 = j_4
                                                        
                                                        x10_27 += 1
                                                        *x16_3 = neg.d(j_4)
                                                    while (x10_27 != x9_24)
                                                    
                                                    if (x26_1.d s>= 1)
                                                        goto label_1085a60
                                                else
                                                    x5_1 = x8_25
                                                    x19_4 = x19_2
                                                label_1085a54:
                                                    x21_4 = x21_2
                                                    
                                                    if (x26_1.d s>= 1)
                                                    label_1085a60:
                                                        
                                                        if ((x1_2 & 0x80000000) == 0)
                                                            int64_t x9_23 = x26_1 & 0xffffffff
                                                            int32_t* x8_41 =
                                                                x9_16 + ((x25_1 * x5_1) << 2)
                                                            int64_t j_13
                                                            
                                                            if (x9_23 u>= 8)
                                                                int64_t x11_11 = x9_23 << 2
                                                                int64_t x10_30 =
                                                                    x10_15 + ((x9_10 + x5_1 * x25_1) << 2)
                                                                
                                                                if (x10_30 u< &var_90 + x11_11)
                                                                    j_13 = 0
                                                                
                                                                if (x10_30 u< &var_90 + x11_11
                                                                        && &var_90 u< x10_30 + x11_11)
                                                                    goto label_1085c5c
                                                                
                                                                int64_t x11_14 = x26_1 & 7
                                                                j_13 = x9_23 - x11_14
                                                                int64_t x12_7 = 0
                                                                x8_41 = &x8_41[j_13]
                                                                int64_t j_10 = j_13
                                                                int64_t j_5
                                                                
                                                                do
                                                                    void* x14_5 = &var_90 + x12_7
                                                                    int128_t* x15_3 = x22_1 + x12_7
                                                                    j_5 = j_10
                                                                    j_10 -= 8
                                                                    x12_7 += 0x20
                                                                    v1 = x15_3[1] - *(x14_5 + 0x10)
                                                                    *x15_3 -= *x14_5
                                                                    x15_3[1] = v1
                                                                while (j_5 != 8)
                                                                
                                                                if (x11_14 != 0)
                                                                    goto label_1085c5c
                                                            else
                                                                j_13 = 0
                                                            label_1085c5c:
                                                                int64_t j_8 = x9_23 - j_13
                                                                void* x10_31 = &var_90 + (j_13 << 2)
                                                                int64_t j_6
                                                                
                                                                do
                                                                    int32_t x11_15 = *x10_31
                                                                    x10_31 += 4
                                                                    j_6 = j_8
                                                                    j_8 -= 1
                                                                    *x8_41 -= x11_15
                                                                    x8_41 = &x8_41[1]
                                                                while (j_6 != 1)
                                                result, v0, v1, v2, v3, v4, v5 =
                                                    vorbis_book_encode(x24_1)
                                                x25_1 += 1
                                                x21_2 = result.d + x21_4
                                                
                                                if (x25_1 == zx.q(x9_14))
                                                    break
                                                
                                                x26_1 = *x24_1
                                                x19_2 = x19_4 + x8_26
                                                x12_2 += x8_26
                                                x22_1 += x8_26
                                            
                                            x23 = var_988_1
                                            x22 = var_980_1
                                            x25 = var_990_1
                                            x8_22 = *(x22 + (x12_1 << 3)) + (var_928_1 << 3)
                                        
                                        int64_t x10_32 = sx.q(x21_2)
                                        x21_1 = var_960_1
                                        x23[7] += x10_32
                                        i = i_1
                                        x20_1 = x9
                                        *x8_22
                                        var_4b0[*x8_22] += x10_32
                                
                                x11_1 = var_928_1
                                x12_1 += 1
                            while (x12_1 != x10_3)
                        
                        x11_1 += 1
                        bool cond:1_1 = var_998_1 + 1 s>= x21_1
                        var_998_1 += 1
                        
                        if (cond:1_1)
                            break
                        
                        var_9a0_1 += x20_1
                    while (x11_1 s< x9_3)
                
                x24 = var_9c0_1
            while (x11_1 s< x9_3)
            
            x8_3 = *(x23 + 0xc)
        
        i += 1
    while (i s< sx.q(x8_3))

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
