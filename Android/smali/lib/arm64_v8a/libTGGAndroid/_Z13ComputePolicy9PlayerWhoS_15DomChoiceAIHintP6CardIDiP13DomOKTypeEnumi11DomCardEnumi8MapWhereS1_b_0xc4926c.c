// 函数: _Z13ComputePolicy9PlayerWhoS_15DomChoiceAIHintP6CardIDiP13DomOKTypeEnumi11DomCardEnumi8MapWhereS1_b
// 地址: 0xc4926c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_78
__builtin_strncpy(&var_78, "*card_embed/embeddings", 0x17)
int64_t x21 = sx.q(arg1)
int32_t var_108 = arg8
DomOKTypeEnum* x26 = arg6
int64_t* x0_1
uint128_t v0
float128 v1
float128 v2
float128 v3
float128 v4
uint128_t v6
x0_1, v0, v1, v2, v3, v4, v6 = sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_78)
int128_t var_77

if ((zx.d(var_78) & 1) != 0)
    v0, v1, v2, v3, v4, v6 = operator delete(var_77:0xf.q)
int64_t x11 = *(x21 * 0x80cf8 + &data_195dc48)
int32_t x12 = x11.d << 1
int32_t x8_4

if (*(x21 * 0x80cf8 + 0x195e914) s> 0xb)
    x8_4 = x11.d
else
    x8_4 = 0

int64_t x27 = sx.q(x12 + x8_4 + 0x3d)
int64_t x28 = *(x21 * 0x80cf8 + &data_195dc48:8) + (sx.q(x12 + x8_4 + 0x3d) << 2)
int64_t x22 = *(x21 * 0x80cf8 + &data_195dc58) - x27
int64_t x23 = x22

if ((x28 & 3) == 0)
    int64_t x8_8 = zx.q(neg.d(x28.d u>> 2)) & 3
    
    x23 = x8_8 s< x22 ? x8_8 : x22

int64_t fp = x22 - x23
int64_t x8_10

if (fp s< 0)
    x8_10 = fp + 3
else
    x8_10 = fp

int64_t x24 = x8_10 & 0xfffffffffffffffc

if (x23 s>= 1)
    v0, v1, v2, v3, v4, v6 = memset(x28, 0, x23 << 2)

int64_t x25 = x24 + x23

if (fp s>= 4)
    int64_t x8_12
    
    if (x25 s> x23 + 4)
        x8_12 = x25
    else
        x8_12 = x23 + 4
    
    v0, v1, v2, v3, v4, v6 =
        memset(x28 + (x23 << 2), 0, (((x8_12 + not.q(x23)) << 2) + 0x10) & 0xfffffffffffffff0)

if (x25 s< x22)
    v0, v1, v2, v3, v4, v6 = memset(x28 + (x25 << 2), 0, (fp - x24) << 2)

int32_t x22_1 = arg5
int64_t x28_1 = x11
v0.d = float.s(x22_1)

if (x22_1 s>= 1)
    int64_t x10_2 = sx.q(x28_1.d)
    int64_t x8_17 = sx.q(x28_1.d)
    int64_t x13_1 = x27 + x10_2
    int64_t i = 0
    
    do
        uint64_t x1_3 =
            zx.q(*(&data_18ddc30 + x21 * 0x80cf8 + (zx.q(*(arg4 + (i << 2))) << 2) + 0x80048))
        
        if ((x1_3.d & 0x80000000) == 0)
            int64_t x2_3 = *(x21 * 0x80cf8 + &data_195dc48:8)
            int64_t x5 = x8_17
            int64_t x22_2 = x2_3 + (x27 << 2)
            
            if ((x22_2 & 3) == 0)
                int64_t x3_1 = zx.q(neg.d(x22_2.d u>> 2)) & 3
                
                x5 = x3_1 s< x8_17 ? x3_1 : x8_17
            
            int64_t x4 = *(x21 * 0x80cf8 + &data_195dc48)
            int64_t x3_2 = *(x21 * 0x80cf8 + &data_195dc38)
            int64_t x7 = x8_17 - x5
            int64_t x28_2
            
            if (x7 s< 0)
                x28_2 = x7 + 3
            else
                x28_2 = x7
            
            int64_t x6_1 = x4 * x1_3
            
            if (x5 s>= 1)
                int64_t j_36
                
                if (x5 u< 8 || (x22_2 u< x3_2 + ((x5 + x4 * x1_3) << 2)
                        && x3_2 + (x6_1 << 2) u< x2_3 + (x27 << 2) + (x5 << 2)))
                    j_36 = 0
                label_c49518:
                    int64_t j_26 = x5 - j_36
                    int32_t* x24_2 = x3_2 + ((j_36 + x4 * x1_3) << 2)
                    int32_t* x23_5 = x2_3 + (x27 << 2) + (j_36 << 2)
                    int64_t j
                    
                    do
                        v1.d = *x24_2
                        x24_2 = &x24_2[1]
                        v2.d = *x23_5
                        j = j_26
                        j_26 -= 1
                        v1.d = v1.d f+ v2.d
                        *x23_5 = v1.d
                        x23_5 = &x23_5[1]
                    while (j != 1)
                else
                    j_36 = x5 & 0xfffffffffffffff8
                    int128_t* x22_18 = x2_3 + ((x27 + 4) << 2)
                    int128_t* x24_14 = x3_2 + (x6_1 << 2) + 0x10
                    int64_t j_30 = j_36
                    int64_t j_1
                    
                    do
                        v1 = x24_14[-1]
                        v2 = *x24_14
                        v4 = *x22_18
                        j_1 = j_30
                        j_30 -= 8
                        x24_14 = &x24_14[2]
                        v1 = vaddq_f32(v1, x22_18[-1])
                        v2 = vaddq_f32(v2, v4)
                        x22_18[-1] = v1
                        *x22_18 = v2
                        x22_18 = &x22_18[2]
                    while (j_1 != 8)
                    
                    if (x5 != j_36)
                        goto label_c49518
            
            int64_t lr_1 = x28_2 & 0xfffffffffffffffc
            int64_t x28_3 = lr_1 + x5
            
            if (x7 s>= 4)
                int128_t* x22_5 = x3_2 + ((x5 + x4 * x1_3) << 2)
                int128_t* x23_7 = x2_3 + (x27 << 2) + (x5 << 2)
                int64_t x24_3 = x5
                
                do
                    v1 = *x22_5
                    x22_5 = &x22_5[1]
                    v2 = *x23_7
                    x24_3 += 4
                    *x23_7 = vaddq_f32(v1, v2)
                    x23_7 = &x23_7[1]
                while (x24_3 s< x28_3)
            
            if (x28_3 s< x8_17)
                int64_t x7_1 = x7 - lr_1
                
                if (x7_1 u< 8)
                label_c4961c:
                    int64_t j_16 = x10_2 - x28_3
                    int32_t* x2_4 = x3_2 + ((x28_3 + x4 * x1_3) << 2)
                    int32_t* x3_3 = x2_3 + (x27 << 2) + (x28_3 << 2)
                    int64_t j_2
                    
                    do
                        v1.d = *x2_4
                        x2_4 = &x2_4[1]
                        v2.d = *x3_3
                        j_2 = j_16
                        j_16 -= 1
                        v1.d = v1.d f+ v2.d
                        *x3_3 = v1.d
                        x3_3 = &x3_3[1]
                    while (j_2 != 1)
                else
                    int64_t x22_6 = x5 + lr_1
                    
                    if (x2_3 + (x27 << 2) + (x22_6 << 2) u< x3_2 + ((x8_17 + x6_1) << 2)
                            && x3_2 + ((x5 + x6_1 + lr_1) << 2) u< x2_3 + ((x8_17 + x27) << 2))
                        goto label_c4961c
                    
                    void* x5_1 = x2_3 + ((x27 + 4) << 2) + (x22_6 << 2)
                    int64_t j_32 = x7_1 & 0xfffffffffffffff8
                    x28_3 += j_32
                    void* x22_9 = x3_2 + ((x5 + x4 * x1_3 + lr_1) << 2) + 0x10
                    int64_t j_28 = j_32
                    int64_t j_3
                    
                    do
                        v1 = *(x22_9 - 0x10)
                        v2 = *x22_9
                        v4 = *x5_1
                        j_3 = j_28
                        j_28 -= 8
                        x22_9 += 0x20
                        v1 = vaddq_f32(v1, *(x5_1 - 0x10))
                        v2 = vaddq_f32(v2, v4)
                        *(x5_1 - 0x10) = v1
                        *x5_1 = v2
                        x5_1 += 0x20
                    while (j_3 != 8)
                    
                    if (x7_1 != j_32)
                        goto label_c4961c
            
            int64_t x2_5 = *(x21 * 0x80cf8 + &data_195dc48:8)
            int64_t x3_4 = *(x21 * 0x80cf8 + &data_195dc38)
            int64_t x4_2 = *(x21 * 0x80cf8 + &data_195dc48)
            int64_t x5_2 = x8_17
            int64_t x22_10 = x2_5 + (x13_1 << 2)
            
            if ((x22_10 & 3) == 0)
                int64_t x5_4 = zx.q(neg.d(x22_10.d u>> 2)) & 3
                
                x5_2 = x5_4 s< x8_17 ? x5_4 : x8_17
            
            int64_t x7_2 = x8_17 - x5_2
            int64_t x28_4
            
            if (x7_2 s< 0)
                x28_4 = x7_2 + 3
            else
                x28_4 = x7_2
            
            int64_t x6_7 = x4_2 * x1_3
            
            if (x5_2 s>= 1)
                int64_t j_37
                
                if (x5_2 u< 8 || (x22_10 u< x3_4 + ((x5_2 + x4_2 * x1_3) << 2)
                        && x3_4 + (x6_7 << 2) u< x2_5 + (x13_1 << 2) + (x5_2 << 2)))
                    j_37 = 0
                label_c496c0:
                    int64_t j_27 = x5_2 - j_37
                    int32_t* x24_8 = x3_4 + ((j_37 + x4_2 * x1_3) << 2)
                    int32_t* x23_16 = x2_5 + (x13_1 << 2) + (j_37 << 2)
                    int64_t j_4
                    
                    do
                        v1.d = *x23_16
                        v2.d = *x24_8
                        x24_8 = &x24_8[1]
                        
                        if (v1.d f< v2.d)
                            v1.d = v2.d
                        else
                            v1.d = v1.d
                        
                        j_4 = j_27
                        j_27 -= 1
                        *x23_16 = v1.d
                        x23_16 = &x23_16[1]
                    while (j_4 != 1)
                else
                    j_37 = x5_2 & 0xfffffffffffffff8
                    float128* x22_19 = x2_5 + ((x13_1 + 4) << 2)
                    int128_t* x24_16 = x3_4 + (x6_7 << 2) + 0x10
                    int64_t j_31 = j_37
                    int64_t j_5
                    
                    do
                        v1 = x22_19[-1]
                        v2 = *x22_19
                        v3 = x24_16[-1]
                        v4 = *x24_16
                        j_5 = j_31
                        j_31 -= 8
                        x24_16 = &x24_16[2]
                        uint128_t v5_2 = vcgtq_f32(v3, v1)
                        v6 = vcgtq_f32(v4, v2)
                        v1 = vbslq_s8(v5_2, v3, v1)
                        v2 = vbslq_s8(v6, v4, v2)
                        x22_19[-1] = v1
                        *x22_19 = v2
                        x22_19 = &x22_19[2]
                    while (j_5 != 8)
                    
                    if (x5_2 != j_37)
                        goto label_c496c0
            
            int64_t lr_2 = x28_4 & 0xfffffffffffffffc
            int64_t x28_5 = lr_2 + x5_2
            
            if (x7_2 s>= 4)
                int128_t* x22_13 = x3_4 + ((x5_2 + x4_2 * x1_3) << 2)
                int128_t* x23_18 = x2_5 + (x13_1 << 2) + (x5_2 << 2)
                int64_t x24_9 = x5_2
                
                do
                    v2 = *x22_13
                    x22_13 = &x22_13[1]
                    x24_9 += 4
                    *x23_18 = vmaxq_f32(*x23_18, v2)
                    x23_18 = &x23_18[1]
                while (x24_9 s< x28_5)
            
            if (x28_5 s< x8_17)
                int64_t x7_3 = x7_2 - lr_2
                
                if (x7_3 u< 8)
                label_c497d0:
                    int64_t j_17 = x10_2 - x28_5
                    int32_t* x1_5 = x3_4 + ((x28_5 + x4_2 * x1_3) << 2)
                    int32_t* x2_7 = x2_5 + (x13_1 << 2) + (x28_5 << 2)
                    int64_t j_6
                    
                    do
                        v1.d = *x2_7
                        v2.d = *x1_5
                        x1_5 = &x1_5[1]
                        
                        if (v1.d f< v2.d)
                            v1.d = v2.d
                        else
                            v1.d = v1.d
                        
                        j_6 = j_17
                        j_17 -= 1
                        *x2_7 = v1.d
                        x2_7 = &x2_7[1]
                    while (j_6 != 1)
                else
                    int64_t x22_14 = x5_2 + lr_2
                    
                    if (x2_5 + (x13_1 << 2) + (x22_14 << 2) u< x3_4 + ((x8_17 + x6_7) << 2)
                            && x3_4 + ((x5_2 + x6_7 + lr_2) << 2) u< x2_5 + ((x8_17 + x13_1) << 2))
                        goto label_c497d0
                    
                    void* x5_5 = x2_5 + ((x13_1 + 4) << 2) + (x22_14 << 2)
                    int64_t j_33 = x7_3 & 0xfffffffffffffff8
                    x28_5 += j_33
                    void* x22_17 = x3_4 + ((x5_2 + x4_2 * x1_3 + lr_2) << 2) + 0x10
                    int64_t j_29 = j_33
                    int64_t j_7
                    
                    do
                        v1 = *(x5_5 - 0x10)
                        v2 = *x5_5
                        v3 = *(x22_17 - 0x10)
                        v4 = *x22_17
                        j_7 = j_29
                        j_29 -= 8
                        x22_17 += 0x20
                        uint128_t v5_1 = vcgtq_f32(v3, v1)
                        v6 = vcgtq_f32(v4, v2)
                        v1 = vbslq_s8(v5_1, v3, v1)
                        v2 = vbslq_s8(v6, v4, v2)
                        *(x5_5 - 0x10) = v1
                        *x5_5 = v2
                        x5_5 += 0x20
                    while (j_7 != 8)
                    
                    if (x7_3 != j_33)
                        goto label_c497d0
        
        i += 1
    while (i != zx.q(x22_1))
    
    x22_1 = arg5
    x28_1 = x11
    
    if (x22_1 s>= 2)
        int64_t x9_2 = *(x21 * 0x80cf8 + &data_195dc48:8)
        int64_t x10_3 = x8_17
        int64_t x11_2 = x9_2 + (x27 << 2)
        
        if ((x11_2 & 3) == 0)
            int64_t x10_5 = zx.q(neg.d(x11_2.d u>> 2)) & 3
            
            x10_3 = x10_5 s< x8_17 ? x10_5 : x8_17
        
        int64_t x12_2 = x8_17 - x10_3
        int64_t x11_4
        
        if (x12_2 s< 0)
            x11_4 = x12_2 + 3
        else
            x11_4 = x12_2
        
        int64_t x11_5 = x11_4 & 0xfffffffffffffffc
        
        if (x10_3 s>= 1)
            int64_t i_50
            
            if (x10_3 u>= 8)
                i_50 = x10_3 & 0xfffffffffffffff8
                v1 = vdupq_laneq_s32(v0, 0)
                float128* x14_3 = x9_2 + (x27 << 2) + 0x10
                int64_t i_38 = i_50
                int64_t i_1
                
                do
                    v3 = *x14_3
                    i_1 = i_38
                    i_38 -= 8
                    v2 = vdivq_f32(x14_3[-1], v1)
                    v3 = vdivq_f32(v3, v1)
                    x14_3[-1] = v2
                    *x14_3 = v3
                    x14_3 = &x14_3[2]
                while (i_1 != 8)
                
                if (x10_3 != i_50)
                    goto label_c49924
            else
                i_50 = 0
            label_c49924:
                int64_t i_37 = x10_3 - i_50
                int32_t* x13_3 = x9_2 + ((i_50 + x27) << 2)
                int64_t i_2
                
                do
                    v1.d = *x13_3
                    i_2 = i_37
                    i_37 -= 1
                    v1.d = v1.d f/ v0.d
                    *x13_3 = v1.d
                    x13_3 = &x13_3[1]
                while (i_2 != 1)
        
        int64_t x13_4 = x11_5 + x10_3
        
        if (x12_2 s>= 4)
            v1 = vdupq_laneq_s32(v0, 0)
            int128_t* x14_5 = x9_2 + ((x10_3 + x27) << 2)
            int64_t x15_2 = x10_3
            
            do
                x15_2 += 4
                v2 = vdivq_f32(*x14_5, v1)
                *x14_5 = v2
                x14_5 = &x14_5[1]
            while (x15_2 s< x13_4)
        
        if (x13_4 s< x8_17)
            int64_t x8_18 = x12_2 - x11_5
            int64_t i_47
            
            if (x8_18 u>= 8)
                i_47 = x8_18 & 0xfffffffffffffff8
                v1 = vdupq_laneq_s32(v0, 0)
                x13_4 += i_47
                void* x10_9 = x9_2 + ((x10_3 + x11_5 + x27) << 2) + 0x10
                int64_t i_32 = i_47
                int64_t i_3
                
                do
                    v3 = *x10_9
                    i_3 = i_32
                    i_32 -= 8
                    v2 = vdivq_f32(*(x10_9 - 0x10), v1)
                    v3 = vdivq_f32(v3, v1)
                    *(x10_9 - 0x10) = v2
                    *x10_9 = v3
                    x10_9 += 0x20
                while (i_3 != 8)
            
            if (x8_18 u< 8 || x8_18 != i_47)
                int64_t i_24 = sx.q(x28_1.d) - x13_4
                int32_t* x9_3 = x9_2 + ((x13_4 + x27) << 2)
                int64_t i_4
                
                do
                    v1.d = *x9_3
                    i_4 = i_24
                    i_24 -= 1
                    v1.d = v1.d f/ v0.d
                    *x9_3 = v1.d
                    x9_3 = &x9_3[1]
                while (i_4 != 1)

v1.d = fconvert.s(3f)
v0.d = v0.d f/ v1.d
int32_t x23_23 = x27.d + x12

if (*(x21 * 0x80cf8 + 0x195e914) s>= 0xd)
    v0, v1, v2, v6 = asinhf(v0.d, v1.d, v2.d)
    v1.d = fconvert.s(-1f)
    v0.d = v0.d f+ v1.d

*(*(x21 * 0x80cf8 + &data_195dc48:8) + (sx.q(x23_23) << 2)) = v0.d

if (arg7 s>= 1)
    uint64_t i_29 = zx.q(arg7)
    uint64_t i_5
    
    do
        int32_t x12_3 = *x26
        x26 += 4
        i_5 = i_29
        i_29 -= 1
        *(*(x21 * 0x80cf8 + &data_195dc48:8) + (sx.q(x12_3 + x23_23) << 2)) = 0x3f800000
    while (i_5 != 1)

int64_t x10_13

if (*(x21 * 0x80cf8 + 0x195e914) s< 0xc)
    x10_13 = 0xdc
else
    x10_13 = 0xfa

int64_t x9_6 = x10_13 + sx.q(x23_23)

if (arg9 s>= 1)
    v0.d = float.s(arg9)
    *(*(x21 * 0x80cf8 + &data_195dc48:8) + (sx.q(arg9 + x9_6.d - 1) << 2)) = 0x3f800000
    v1.d = fconvert.s(-21f)
    v0.d = v0.d f+ v1.d
    v1.d = fconvert.s(20f)
    v0.d = v0.d f/ v1.d
    *(*(x21 * 0x80cf8 + &data_195dc48:8) + (sx.q(x9_6.d + 0x29) << 2)) = v0.d

int32_t x8_25 = arg10.d

if (var_108 != 0)
    int64_t x10_15 = x0_1[2]
    
    if (x10_15 s>= 1)
        int64_t x11_8 = *(x21 * 0x80cf8 + &data_195dc48:8)
        int64_t x12_5 = *x0_1
        int64_t x13_7 = x0_1[1]
        int64_t i_52 = 0
        uint64_t x14_6 = zx.q(var_108)
        
        if (x10_15 u< 8 || x13_7 != 1)
            goto label_c49b60
        
        if (x11_8 + ((x9_6 + 0x2a) << 2) u>= x12_5 + ((x10_15 + x14_6) << 2)
                || x12_5 + (zx.q(var_108) << 2) u>= x11_8 + ((x10_15 + x9_6 + 0x2a) << 2))
            i_52 = x10_15 & 0xfffffffffffffff8
            void* x16_7 = x11_8 + ((x9_6 + 0x2a) << 2) + 0x10
            void* x17_5 = x12_5 + (x14_6 << 2) + 0x10
            int64_t i_23 = i_52
            int64_t i_6
            
            do
                v0 = *(x17_5 - 0x10)
                v1 = *x17_5
                i_6 = i_23
                i_23 -= 8
                x17_5 += x13_7 << 5
                *(x16_7 - 0x10) = v0
                *x16_7 = v1
                x16_7 += 0x20
            while (i_6 != 8)
            
            if (x10_15 != i_52)
                goto label_c49b60
        else
            i_52 = 0
        label_c49b60:
            int64_t i_30 = x10_15 - i_52
            int32_t* x12_6 = x12_5 + ((x14_6 + i_52 * x13_7) << 2)
            int32_t* x11_9 = x11_8 + ((i_52 + x9_6 + 0x2a) << 2)
            int64_t i_7
            
            do
                v0.d = *x12_6
                i_7 = i_30
                i_30 -= 1
                x12_6 = &x12_6[x13_7]
                *x11_9 = v0.d
                x11_9 = &x11_9[1]
            while (i_7 != 1)

int32_t x26_1 = (x9_6 + 0x2a).d + x0_1[2].d
int32_t fp_2

if (*(x21 * 0x80cf8 + 0x195e914) s> 0xd)
    if (x8_25 != 0)
        *(*(x21 * 0x80cf8 + &data_195dc48:8) + (sx.q(x8_25 + x26_1 - 1) << 2)) = 0x3f800000
    
    fp_2 = 0x1c
else
    fp_2 = 0x15
    
    if (x8_25 != 0 && x8_25 s<= 0x14)
        *(*(x21 * 0x80cf8 + &data_195dc48:8) + (sx.q(x8_25 + x26_1 - 1) << 2)) = 0x3f800000
        fp_2 = 0x15

int32_t var_d0

if ((zx.d(arg12) & 1) != 0 && *(x21 * 0x80cf8 + 0x195e914) s>= 0xd)
    int64_t x9_10 = sx.q(x28_1.d)
    int64_t x24_18 = x28_1 << 0x20
    int64_t x27_1 = x9_10
    int64_t var_e0_1 = x9_10
    void* x1_6
    void* x2_11
    int64_t fp_3
    
    if (x24_18 != 0)
        uint64_t x23_24
        
        if (0x7fffffffffffffff s/ x9_10 s> 0)
            x23_24 = (x28_1 & 0xffffffff) << 2
            
            if (x24_18 s< 1)
                goto label_c4a9d0
            
            goto label_c49c34
        
        operator new(-1)
        v0, v1, v2, v6 = operator new(-1)
        x9_10 = var_e0_1
        x23_24 = (x28_1 & 0xffffffff) << 2
        void* var_138_1
        
        if (x24_18 s>= 1)
        label_c49c34:
            int64_t x0_8 = malloc(x23_24 + 0x10)
            void* x9_11
            
            if (x0_8 != 0)
                x9_11 = (x0_8 + 0x10) & 0xfffffffffffffff0
                *(x9_11 - 8) = x0_8
            
            if (x0_8 == 0 || x9_11 == 0)
                operator new(-1)
                x9_11 = nullptr
            
            var_138_1 = x9_11
            int64_t x8_33
            
            x8_33 = var_e0_1 s> 1 ? var_e0_1 : 1
            
            v0, v1, v2, v6 = memset(x9_11, 0, x8_33 << 2)
            
            if (0x7fffffffffffffff s/ var_e0_1 s<= 0)
                operator new(-1)
                v0, v1, v2, v6 = operator new(-1)
        else
        label_c4a9d0:
            var_138_1 = nullptr
            
            if (0x7fffffffffffffff s/ x9_10 s<= 0)
                operator new(-1)
                v0, v1, v2, v6 = operator new(-1)
        
        if (x24_18 s< 1)
            x1_6 = nullptr
            x2_11 = var_138_1
            fp_3 = x27_1
            
            if (x22_1 s> 0)
                goto label_c49d24
            
            goto label_c4a090
        
        int64_t x0_11
        x0_11, v0, v1, v2, v6 = malloc(x23_24 + 0x10)
        
        if (x0_11 != 0)
            x1_6 = (x0_11 + 0x10) & 0xfffffffffffffff0
            *(x1_6 - 8) = x0_11
        
        if (x0_11 == 0 || x1_6 == 0)
            v0, v1, v2, v6 = operator new(-1)
            x1_6 = nullptr
        
        if (x24_18 s>= 1)
            int64_t x8_37
            
            x8_37 = var_e0_1 s> 1 ? var_e0_1 : 1
            
            v0, v1, v2, v6 = memset(x1_6, 0, x8_37 << 2)
            x22_1 = arg5
        
        x2_11 = var_138_1
        fp_3 = x27_1
        
        if (x22_1 s<= 0)
            goto label_c4a090
        
        goto label_c49d24
    
    x1_6 = nullptr
    fp_3 = 0
    x2_11 = nullptr
    int64_t x0_15
    int64_t x25_4
    
    if (x22_1 s> 0)
    label_c49d24:
        int32_t x8_38
        
        if (x28_1.d s< 0)
            x8_38 = x28_1.d + 3
        else
            x8_38 = x28_1.d
        
        int32_t x9_14
        
        if (fp_3.d s< 0)
            x9_14 = fp_3.d + 3
        else
            x9_14 = fp_3.d
        
        int32_t x8_39 = x8_38 s>> 2
        int32_t x9_15 = x9_14 s>> 2
        x25_4 = zx.q(x8_39) << 0x20 s>> 0x1e
        void* x10_18 = x2_11 + (sx.q(x8_39) << 4)
        void* x8_40 = x1_6 + (sx.q(x9_15) << 4)
        int64_t x23_25 = zx.q(x9_15) << 0x20 s>> 0x1e
        int64_t x9_16 = fp_3 - x23_25
        int64_t x8_42 = var_e0_1 - x25_4
        int32_t var_110
        var_110.q = x9_16
        var_108.q = x8_42
        int64_t j_34 = x8_42 & 0xfffffffffffffff8
        int64_t x8_43 = x25_4 + j_34
        int64_t j_35 = x9_16 & 0xfffffffffffffff8
        int32_t var_e8
        var_e8.q = zx.q(x22_1)
        void* x12_8 = x1_6 + (fp_3 << 2)
        void* x11_12 = x2_11 + (x24_18 s>> 0x1e)
        int64_t x8_44 = x23_25 + j_35
        void* x22_21 = x1_6
        int64_t i_8 = 0
        int64_t x8_46 = sx.q(x28_1.d)
        
        if (x24_18 s<= 0x300000000)
            void* x9_27 = x1_6 + ((x23_25 + 4) << 2)
            v6.d = 0f
            
            do
                v0.d = fconvert.s(1f)
                var_d0.o = v6
                int64_t x28_7 = sx.q(
                    *(&data_18ddc30 + x21 * 0x80cf8 + (zx.q(*(arg4 + (i_8 << 2))) << 2) + 0x80048))
                int64_t var_100_2 = ldexpf(neg.d(i_8.d), v0.d)
                int64_t v0_2
                v0_2.d = fconvert.s(1f)
                float128 v3_4
                float128 v4_2
                float128 v5_4
                uint128_t v7_2
                v0, v1, v2, v3_4, v4_2, v5_4, v6, v7_2 = ldexpf(1 - x22_1 + i_8.d, v0_2.d)
                x0_15 = var_e0_1
                int64_t x10_30 = *(x21 * 0x80cf8 + &data_195dc48)
                int64_t x8_63 = *(x21 * 0x80cf8 + &data_195dc38)
                int64_t x9_28 = x10_30 * x28_7
                
                if (x25_4 s>= x0_15)
                    v6 = var_d0.o
                    v7_2 = var_100_2.o
                    x1_6 = x22_21
                    
                    if (fp_3 s>= 4)
                    label_c4a258:
                        int64_t x10_34 = 0
                        int128_t* x11_43 = x8_63 + (x9_28 << 2)
                        v1 = vdupq_laneq_s32(v0, 0)
                        void* x12_20 = x1_6
                        
                        do
                            v2 = *x11_43
                            x11_43 = &x11_43[1]
                            x10_34 += 4
                            *x12_20 = vaddq_f32(*x12_20, vmulq_f32(v1, v2, 0))
                            x12_20 += 0x10
                        while (x10_34 s< x23_25)
                else
                    v6 = var_d0.o
                    v7_2 = var_100_2.o
                    x1_6 = x22_21
                    int64_t x11_35 = x25_4
                    
                    if (var_108.q u< 8)
                    label_c4a200:
                        int32_t* x8_64 = x8_63 + ((x11_35 + x10_30 * x28_7) << 2)
                        int64_t j_18 = x8_46 - x11_35
                        void* x10_33 = x2_11 + (x11_35 << 2)
                        int64_t j_8
                        
                        do
                            v1.d = *x8_64
                            x8_64 = &x8_64[1]
                            v2.d = *x10_33
                            j_8 = j_18
                            j_18 -= 1
                            v1.d = v7_2.d f* v1.d
                            v1.d = v1.d f+ v2.d
                            *x10_33 = v1.d
                            x10_33 += 4
                        while (j_8 != 1)
                    else
                        if (x10_18 u< x8_63 + ((x0_15 + x9_28) << 2))
                            x11_35 = x25_4
                        
                        if (x10_18 u< x8_63 + ((x0_15 + x9_28) << 2)
                                && x8_63 + (x25_4 << 2) + (x9_28 << 2) u< x11_12)
                            goto label_c4a200
                        
                        void* x12_19 = x2_11 + ((x25_4 + 4) << 2)
                        v1 = vdupq_laneq_s32(v7_2, 0)
                        void* x9_29 = x8_63 + ((x25_4 + 4) << 2) + (x9_28 << 2)
                        int64_t j_24 = j_34
                        int64_t j_9
                        
                        do
                            v2 = *(x9_29 - 0x10)
                            v3_4 = *x9_29
                            v4_2 = *(x12_19 - 0x10)
                            v5_4 = *x12_19
                            j_9 = j_24
                            j_24 -= 8
                            x9_29 += 0x20
                            float128 v2_5 = vmulq_f32(v1, v2, 0)
                            float128 v3_5 = vmulq_f32(v1, v3_4, 0)
                            v2 = vaddq_f32(v2_5, v4_2)
                            v3_4 = vaddq_f32(v3_5, v5_4)
                            *(x12_19 - 0x10) = v2
                            *x12_19 = v3_4
                            x12_19 += 0x20
                        while (j_9 != 8)
                        x11_35 = x8_43
                        
                        if (var_108.q != j_34)
                            goto label_c4a200
                    
                    x8_63 = *(x21 * 0x80cf8 + &data_195dc38)
                    x9_28 = *(x21 * 0x80cf8 + &data_195dc48) * x28_7
                    
                    if (fp_3 s>= 4)
                        goto label_c4a258
                
                if (fp_3 s> x23_25)
                    int64_t x11_44 = x23_25
                    
                    if (var_110.q u< 8)
                    label_c4a328:
                        int64_t j_21 = fp_3 - x11_44
                        int32_t* x8_65 = x8_63 + ((x11_44 + x9_28) << 2)
                        void* x9_34 = x1_6 + (x11_44 << 2)
                        int64_t j_10
                        
                        do
                            v1.d = *x8_65
                            x8_65 = &x8_65[1]
                            v2.d = *x9_34
                            j_10 = j_21
                            j_21 -= 1
                            v1.d = v0.d f* v1.d
                            v1.d = v1.d f+ v2.d
                            *x9_34 = v1.d
                            x9_34 += 4
                        while (j_10 != 1)
                    else
                        if (x8_40 u< x8_63 + ((fp_3 + x9_28) << 2))
                            x11_44 = x23_25
                        
                        if (x8_40 u< x8_63 + ((fp_3 + x9_28) << 2)
                                && x8_63 + (x23_25 << 2) + (x9_28 << 2) u< x12_8)
                            goto label_c4a328
                        
                        int64_t j_25 = j_35
                        void* x12_21 = x9_27
                        v1 = vdupq_laneq_s32(v0, 0)
                        void* x10_42 = x8_63 + ((x23_25 + 4) << 2) + (x9_28 << 2)
                        int64_t j_11
                        
                        do
                            v2 = *(x10_42 - 0x10)
                            v3_4 = *x10_42
                            v4_2 = *(x12_21 - 0x10)
                            v5_4 = *x12_21
                            j_11 = j_25
                            j_25 -= 8
                            x10_42 += 0x20
                            float128 v2_7 = vmulq_f32(v1, v2, 0)
                            float128 v3_6 = vmulq_f32(v1, v3_4, 0)
                            v2 = vaddq_f32(v2_7, v4_2)
                            v3_4 = vaddq_f32(v3_6, v5_4)
                            *(x12_21 - 0x10) = v2
                            *x12_21 = v3_4
                            x12_21 += 0x20
                        while (j_11 != 8)
                        x11_44 = x8_44
                        
                        if (var_110.q != j_35)
                            goto label_c4a328
                
                i_8 += 1
                v6.d = v6.d f+ v7_2.d
            while (i_8 != var_e8.q)
        else
            void* x9_19 = x1_6 + ((x23_25 + 4) << 2)
            v6.d = 0f
            
            do
                v0.d = fconvert.s(1f)
                var_d0.o = v6
                int64_t x28_6 = sx.q(
                    *(&data_18ddc30 + x21 * 0x80cf8 + (zx.q(*(arg4 + (i_8 << 2))) << 2) + 0x80048))
                int64_t var_100_1 = ldexpf(neg.d(i_8.d), v0.d)
                int64_t v0_1
                v0_1.d = fconvert.s(1f)
                float128 v3_1
                float128 v4_1
                float128 v5_3
                uint128_t v7_1
                v0, v2, v3_1, v4_1, v5_3, v6, v7_1 = ldexpf(1 - x22_1 + i_8.d, v0_1.d)
                int64_t x9_21 = *(x21 * 0x80cf8 + &data_195dc48)
                v7_1 = var_100_1.o
                int64_t x8_52 = *(x21 * 0x80cf8 + &data_195dc38)
                int64_t x11_13 = 0
                int64_t x10_21 = x9_21 * x28_6
                v1 = vdupq_laneq_s32(v7_1, 0)
                int128_t* x12_9 = x8_52 + (x10_21 << 2)
                void* x13_9 = x2_11
                
                do
                    v2 = *x12_9
                    x12_9 = &x12_9[1]
                    x11_13 += 4
                    *x13_9 = vaddq_f32(*x13_9, vmulq_f32(v1, v2, 0))
                    x13_9 += 0x10
                while (x11_13 s< x25_4)
                
                x0_15 = var_e0_1
                x1_6 = x22_21
                
                if (x25_4 s< x0_15)
                    int64_t x11_15 = x25_4
                    
                    if (var_108.q u< 8)
                    label_c49f3c:
                        int32_t* x8_53 = x8_52 + ((x11_15 + x9_21 * x28_6) << 2)
                        void* x9_23 = x2_11 + (x11_15 << 2)
                        int64_t j_19 = x8_46 - x11_15
                        int64_t j_12
                        
                        do
                            v1.d = *x8_53
                            x8_53 = &x8_53[1]
                            v2.d = *x9_23
                            j_12 = j_19
                            j_19 -= 1
                            v1.d = v7_1.d f* v1.d
                            v1.d = v1.d f+ v2.d
                            *x9_23 = v1.d
                            x9_23 += 4
                        while (j_12 != 1)
                    else
                        if (x10_18 u< x8_52 + ((x0_15 + x10_21) << 2))
                            x11_15 = x25_4
                        
                        if (x10_18 u< x8_52 + ((x0_15 + x10_21) << 2)
                                && x8_52 + (x25_4 << 2) + (x10_21 << 2) u< x11_12)
                            goto label_c49f3c
                        
                        void* x12_12 = x2_11 + ((x25_4 + 4) << 2)
                        v1 = vdupq_laneq_s32(v7_1, 0)
                        int128_t* x10_22 = x8_52 + ((x25_4 + 4) << 2) + (x10_21 << 2)
                        int64_t j_22 = j_34
                        int64_t j_13
                        
                        do
                            v2 = x10_22[-1]
                            v3_1 = *x10_22
                            v4_1 = *(x12_12 - 0x10)
                            v5_3 = *x12_12
                            j_13 = j_22
                            j_22 -= 8
                            x10_22 = &x10_22[2]
                            float128 v2_2 = vmulq_f32(v1, v2, 0)
                            float128 v3_2 = vmulq_f32(v1, v3_1, 0)
                            v2 = vaddq_f32(v2_2, v4_1)
                            v3_1 = vaddq_f32(v3_2, v5_3)
                            *(x12_12 - 0x10) = v2
                            *x12_12 = v3_1
                            x12_12 += 0x20
                        while (j_13 != 8)
                        x11_15 = x8_43
                        
                        if (var_108.q != j_34)
                            goto label_c49f3c
                
                int64_t x9_24 = *(x21 * 0x80cf8 + &data_195dc48)
                int64_t x8_54 = *(x21 * 0x80cf8 + &data_195dc38)
                int64_t x10_25 = x9_24 * x28_6
                
                if (fp_3 s>= 4)
                    int64_t x11_23 = 0
                    int128_t* x12_13 = x8_54 + (x10_25 << 2)
                    v1 = vdupq_laneq_s32(v0, 0)
                    void* x13_10 = x1_6
                    
                    do
                        v2 = *x12_13
                        x12_13 = &x12_13[1]
                        x11_23 += 4
                        *x13_10 = vaddq_f32(*x13_10, vmulq_f32(v1, v2, 0))
                        x13_10 += 0x10
                    while (x11_23 s< x23_25)
                
                if (fp_3 s> x23_25)
                    int64_t x11_25 = x23_25
                    
                    if (var_110.q u< 8)
                    label_c4a048:
                        int64_t j_20 = fp_3 - x11_25
                        int32_t* x8_55 = x8_54 + ((x11_25 + x9_24 * x28_6) << 2)
                        void* x9_26 = x1_6 + (x11_25 << 2)
                        int64_t j_14
                        
                        do
                            v1.d = *x8_55
                            x8_55 = &x8_55[1]
                            v2.d = *x9_26
                            j_14 = j_20
                            j_20 -= 1
                            v1.d = v0.d f* v1.d
                            v1.d = v1.d f+ v2.d
                            *x9_26 = v1.d
                            x9_26 += 4
                        while (j_14 != 1)
                    else
                        if (x8_40 u< x8_54 + ((fp_3 + x10_25) << 2))
                            x11_25 = x23_25
                        
                        if (x8_40 u< x8_54 + ((fp_3 + x10_25) << 2)
                                && x8_54 + (x23_25 << 2) + (x10_25 << 2) u< x12_8)
                            goto label_c4a048
                        
                        void* x12_16 = x9_19
                        v1 = vdupq_laneq_s32(v0, 0)
                        int128_t* x10_26 = x8_54 + ((x23_25 + 4) << 2) + (x10_25 << 2)
                        int64_t j_23 = j_35
                        int64_t j_15
                        
                        do
                            v2 = x10_26[-1]
                            v3_1 = *x10_26
                            v4_1 = *(x12_16 - 0x10)
                            v5_3 = *x12_16
                            j_15 = j_23
                            j_23 -= 8
                            x10_26 = &x10_26[2]
                            float128 v2_4 = vmulq_f32(v1, v2, 0)
                            float128 v3_3 = vmulq_f32(v1, v3_1, 0)
                            v2 = vaddq_f32(v2_4, v4_1)
                            v3_1 = vaddq_f32(v3_3, v5_3)
                            *(x12_16 - 0x10) = v2
                            *x12_16 = v3_1
                            x12_16 += 0x20
                        while (j_15 != 8)
                        x11_25 = x8_44
                        
                        if (var_110.q != j_35)
                            goto label_c4a048
                
                i_8 += 1
                v6.d = var_d0.o.d f+ v7_1.d
            while (i_8 != var_e8.q)
        
        x28_1 = x11
        
        if (x24_18 s>= 0x300000001)
            goto label_c4a37c
    else
    label_c4a090:
        x0_15 = var_e0_1
        int32_t x8_57
        
        if (x28_1.d s< 0)
            x8_57 = x28_1.d + 3
        else
            x8_57 = x28_1.d
        
        x25_4 = zx.q(x8_57 s>> 2) << 0x20 s>> 0x1e
        v6.d = 0f
        
        if (x24_18 s>= 0x300000001)
        label_c4a37c:
            int64_t x8_66 = 0
            v0 = vdupq_laneq_s32(v6, 0)
            void* x9_35 = x2_11
            
            do
                x8_66 += 4
                *x9_35 = vdivq_f32(*x9_35, v0)
                x9_35 += 0x10
            while (x8_66 s< x25_4)
    
    if (x25_4 s< x0_15)
        int64_t x8_67 = x0_15 - x25_4
        int64_t i_44
        
        if (x8_67 u>= 8)
            i_44 = x8_67 & 0xfffffffffffffff8
            void* x10_44 = x2_11 + (x25_4 << 2)
            v0 = vdupq_laneq_s32(v6, 0)
            x25_4 += i_44
            void* x10_45 = x10_44 + 0x10
            int64_t i_33 = i_44
            int64_t i_9
            
            do
                v2 = *x10_45
                i_9 = i_33
                i_33 -= 8
                v1 = vdivq_f32(*(x10_45 - 0x10), v0)
                v2 = vdivq_f32(v2, v0)
                *(x10_45 - 0x10) = v1
                *x10_45 = v2
                x10_45 += 0x20
            while (i_9 != 8)
        
        if (x8_67 u< 8 || x8_67 != i_44)
            int64_t i_25 = sx.q(x28_1.d) - x25_4
            void* x9_36 = x2_11 + (x25_4 << 2)
            int64_t i_10
            
            do
                v0.d = *x9_36
                i_10 = i_25
                i_25 -= 1
                v0.d = v0.d f/ v6.d
                *x9_36 = v0.d
                x9_36 += 4
            while (i_10 != 1)
    
    int64_t x8_71
    
    if (fp_3 s< 0)
        x8_71 = fp_3 + 3
    else
        x8_71 = fp_3
    
    int64_t x9_37 = x8_71 & 0xfffffffffffffffc
    
    if (fp_3 s>= 4)
        int64_t x8_72 = 0
        v0 = vdupq_laneq_s32(v6, 0)
        void* x10_46 = x1_6
        
        do
            x8_72 += 4
            *x10_46 = vdivq_f32(*x10_46, v0)
            x10_46 += 0x10
        while (x8_72 s< x9_37)
    
    int64_t x10_47 = fp_3 - x9_37
    int32_t x8_74 = x26_1 + fp_2
    
    if (fp_3 s> x9_37)
        int64_t x11_48 = x9_37
        int64_t i_48
        
        if (x10_47 u>= 8)
            i_48 = x10_47 & 0xfffffffffffffff8
            v0 = vdupq_laneq_s32(v6, 0)
            x11_48 = x9_37 + i_48
            void* x9_38 = x1_6 + (x9_37 << 2) + 0x10
            int64_t i_35 = i_48
            int64_t i_11
            
            do
                v2 = *x9_38
                i_11 = i_35
                i_35 -= 8
                v1 = vdivq_f32(*(x9_38 - 0x10), v0)
                v2 = vdivq_f32(v2, v0)
                *(x9_38 - 0x10) = v1
                *x9_38 = v2
                x9_38 += 0x20
            while (i_11 != 8)
        
        if (x10_47 u< 8 || x10_47 != i_48)
            int64_t i_28 = fp_3 - x11_48
            void* x10_48 = x1_6 + (x11_48 << 2)
            int64_t i_12
            
            do
                v0.d = *x10_48
                i_12 = i_28
                i_28 -= 1
                v0.d = v0.d f/ v6.d
                *x10_48 = v0.d
                x10_48 += 4
            while (i_12 != 1)
    
    int64_t x9_39 = *(x21 * 0x80cf8 + &data_195dc48:8)
    int64_t x11_49 = x27_1
    int64_t x14_8 = x9_39 + (sx.q(x8_74) << 2)
    
    if ((x14_8 & 3) == 0)
        int64_t x10_50 = zx.q(neg.d(x14_8.d u>> 2)) & 3
        
        x11_49 = x10_50 s< x0_15 ? x10_50 : x0_15
    
    int64_t x12_22 = x0_15 - x11_49
    int64_t x13_13
    
    if (x12_22 s< 0)
        x13_13 = x12_22 + 3
    else
        x13_13 = x12_22
    
    int64_t x10_51 = sx.q(x8_74)
    int64_t x13_14 = x13_13 & 0xfffffffffffffffc
    
    if (x11_49 s>= 1)
        int64_t i_51
        
        if (x11_49 u< 8
                || (x14_8 u< x2_11 + (x11_49 << 2) && x2_11 u< x9_39 + ((x11_49 + x10_51) << 2)))
            i_51 = 0
        label_c4a530:
            int64_t i_39 = x11_49 - i_51
            void* x16_8 = x2_11 + (i_51 << 2)
            int32_t* x14_12 = x9_39 + ((i_51 + x10_51) << 2)
            int64_t i_13
            
            do
                v0.d = *x16_8
                x16_8 += 4
                i_13 = i_39
                i_39 -= 1
                *x14_12 = v0.d
                x14_12 = &x14_12[1]
            while (i_13 != 1)
        else
            i_51 = x11_49 & 0xfffffffffffffff8
            void* x15_15 = x9_39 + (x10_51 << 2) + 0x10
            void* x16_12 = x2_11 + 0x10
            int64_t i_43 = i_51
            int64_t i_14
            
            do
                v0 = *(x16_12 - 0x10)
                v1 = *x16_12
                i_14 = i_43
                i_43 -= 8
                x16_12 += 0x20
                *(x15_15 - 0x10) = v0
                *x15_15 = v1
                x15_15 += 0x20
            while (i_14 != 8)
            
            if (x11_49 != i_51)
                goto label_c4a530
    
    int64_t x14_13 = x13_14 + x11_49
    
    if (x12_22 s>= 4)
        void* x15_7 = x2_11 + (x11_49 << 2)
        uint128_t* x16_10 = x9_39 + ((x11_49 + x10_51) << 2)
        int64_t x17_6 = x11_49
        
        do
            v0 = *x15_7
            x15_7 += 0x10
            x17_6 += 4
            *x16_10 = v0
            x16_10 = &x16_10[1]
        while (x17_6 s< x14_13)
    
    if (x14_13 s< x0_15)
        int64_t x12_23 = x12_22 - x13_14
        
        if (x12_23 u< 8)
        label_c4a600:
            void* x11_54 = x2_11 + (x14_13 << 2)
            int64_t i_31 = sx.q(x28_1.d) - x14_13
            int32_t* x9_40 = x9_39 + ((x14_13 + x10_51) << 2)
            int64_t i_15
            
            do
                v0.d = *x11_54
                x11_54 += 4
                i_15 = i_31
                i_31 -= 1
                *x9_40 = v0.d
                x9_40 = &x9_40[1]
            while (i_15 != 1)
        else
            int64_t x11_50 = x11_49 + x13_14
            void* x13_16 = x9_39 + ((x11_50 + x10_51) << 2)
            void* x15_9 = x2_11 + (x11_50 << 2)
            
            if (x13_16 u< x2_11 + (x24_18 s>> 0x1e)
                    && x15_9 u< x9_39 + ((x10_51 + sx.q(x28_1.d)) << 2))
                goto label_c4a600
            
            int64_t i_45 = x12_23 & 0xfffffffffffffff8
            void* x13_17 = x13_16 + 0x10
            x14_13 += i_45
            void* x15_10 = x15_9 + 0x10
            int64_t i_42 = i_45
            int64_t i_16
            
            do
                v0 = *(x15_10 - 0x10)
                v1 = *x15_10
                i_16 = i_42
                i_42 -= 8
                x15_10 += 0x20
                *(x13_17 - 0x10) = v0
                *x13_17 = v1
                x13_17 += 0x20
            while (i_16 != 8)
            
            if (x12_23 != i_45)
                goto label_c4a600
    
    int64_t x9_41 = *(x21 * 0x80cf8 + &data_195dc48:8)
    int64_t x8_76 = sx.q(x8_74) + sx.q(x28_1.d)
    int64_t x12_25 = x9_41 + (x8_76 << 2)
    
    if ((x12_25 & 3) == 0)
        int64_t x10_53 = zx.q(neg.d(x12_25.d u>> 2)) & 3
        
        x27_1 = x10_53 s< x0_15 ? x10_53 : x0_15
    
    int64_t x10_54 = x0_15 - x27_1
    int64_t x11_56
    
    if (x10_54 s< 0)
        x11_56 = x10_54 + 3
    else
        x11_56 = x10_54
    
    int64_t x11_57 = x11_56 & 0xfffffffffffffffc
    
    if (x27_1 s>= 1)
        int64_t i_49
        
        if (x27_1 u< 8 || (x12_25 u< x1_6 + (x27_1 << 2) && x1_6 u< x9_41 + ((x27_1 + x8_76) << 2)))
            i_49 = 0
        label_c4a688:
            int64_t i_36 = x27_1 - i_49
            void* x14_14 = x1_6 + (i_49 << 2)
            int32_t* x12_29 = x9_41 + ((i_49 + x8_76) << 2)
            int64_t i_17
            
            do
                v0.d = *x14_14
                x14_14 += 4
                i_17 = i_36
                i_36 -= 1
                *x12_29 = v0.d
                x12_29 = &x12_29[1]
            while (i_17 != 1)
        else
            i_49 = x27_1 & 0xfffffffffffffff8
            void* x13_29 = x9_41 + (x8_76 << 2) + 0x10
            void* x14_22 = x1_6 + 0x10
            int64_t i_41 = i_49
            int64_t i_18
            
            do
                v0 = *(x14_22 - 0x10)
                v1 = *x14_22
                i_18 = i_41
                i_41 -= 8
                x14_22 += 0x20
                *(x13_29 - 0x10) = v0
                *x13_29 = v1
                x13_29 += 0x20
            while (i_18 != 8)
            
            if (x27_1 != i_49)
                goto label_c4a688
    
    int64_t x12_30 = x11_57 + x27_1
    
    if (x10_54 s>= 4)
        void* x13_20 = x1_6 + (x27_1 << 2)
        uint128_t* x14_16 = x9_41 + ((x27_1 + x8_76) << 2)
        int64_t x15_11 = x27_1
        
        do
            v0 = *x13_20
            x13_20 += 0x10
            x15_11 += 4
            *x14_16 = v0
            x14_16 = &x14_16[1]
        while (x15_11 s< x12_30)
    
    if (x12_30 s< x0_15)
        int64_t x10_55 = x10_54 - x11_57
        
        if (x10_55 u< 8)
        label_c4a758:
            int32_t* x10_57 = x1_6 + (x12_30 << 2)
            int64_t i_26 = sx.q(x28_1.d) - x12_30
            int32_t* x9_42 = x9_41 + ((x12_30 + x8_76) << 2)
            int64_t i_19
            
            do
                v0.d = *x10_57
                x10_57 = &x10_57[1]
                i_19 = i_26
                i_26 -= 1
                *x9_42 = v0.d
                x9_42 = &x9_42[1]
            while (i_19 != 1)
        else
            int64_t x11_58 = x27_1 + x11_57
            void* x13_22 = x9_41 + ((x11_58 + x8_76) << 2)
            void* x14_18 = x1_6 + (x11_58 << 2)
            
            if (x13_22 u< x1_6 + (x24_18 s>> 0x1e)
                    && x14_18 u< x9_41 + ((x8_76 + sx.q(x28_1.d)) << 2))
                goto label_c4a758
            
            int64_t i_46 = x10_55 & 0xfffffffffffffff8
            void* x13_23 = x13_22 + 0x10
            x12_30 += i_46
            void* x14_19 = x14_18 + 0x10
            int64_t i_40 = i_46
            int64_t i_20
            
            do
                v0 = *(x14_19 - 0x10)
                v1 = *x14_19
                i_20 = i_40
                i_40 -= 8
                x14_19 += 0x20
                *(x13_23 - 0x10) = v0
                *x13_23 = v1
                x13_23 += 0x20
            while (i_20 != 8)
            
            if (x10_55 != i_46)
                goto label_c4a758
        
        free(*(x1_6 - 8))
    else if (x1_6 != 0)
        free(*(x1_6 - 8))
    
    if (x2_11 != 0)
        free(*(x2_11 - 8))

char var_a0 = 0x18
int64_t var_9f
__builtin_strncpy(&var_9f, "policy_dense", 0xd)
int32_t* var_88
sub_c48e30(&var_88, &data_18ddc30 + muls.dp.d(arg1, 0x80cf8), x21 * 0x80cf8 + &data_195dc48:8, 
    &var_a0, 1)
int32_t* x19_3 = var_88
char var_b8
__builtin_strncpy(&var_b8, "&policy_final/kernel", 0x15)
int64_t* result
float128 v0_3
float128 v1_1
float128 v2_8
float128 v3_7
float128 v4_3
float128 v5_5
result, v0_3, v1_1, v2_8, v3_7, v4_3, v5_5 =
    sub_c48afc(&data_18ddc30 + muls.dp.d(arg1, 0x80cf8), &var_b8)
int64_t* result_1 = result
int32_t var_a8

if ((zx.d(var_b8) & 1) != 0)
    result, v0_3, v1_1, v2_8, v3_7, v4_3, v5_5 = operator delete(var_a8.q)
int64_t x8_78 = result_1[1]
int128_t v0_6

if (x8_78 == 0)
    v0_3.d = 0f
    
    if (x19_3 != 0)
        var_d0.o = v0_3
        result, v0_6 = free(*(x19_3 - 8))
else
    uint64_t x10_58 = zx.q(arg3)
    int64_t x9_44 = *result_1
    int64_t x14_20 = x8_78 * x10_58
    int64_t x13_25
    
    if (x8_78 s< 0)
        x13_25 = x8_78 + 7
    else
        x13_25 = x8_78
    
    int64_t x11_63
    
    if (x8_78 s< 0)
        x11_63 = x8_78 + 3
    else
        x11_63 = x8_78
    
    int32_t* x12_32 = x9_44 + (x14_20 << 2)
    
    if (x8_78 + 3 u>= 7)
        int64_t x11_64 = x11_63 & 0xfffffffffffffffc
        float128 v0_4 = vmulq_f32(*x19_3, *x12_32, 0)
        
        if (x8_78 s>= 8)
            int64_t x13_26 = x13_25 & 0xfffffffffffffff8
            float128 v1_2 = vmulq_f32(*(x19_3 + 0x10), *(x12_32 + 0x10), 0)
            
            if (x8_78 s>= 0x10)
                void* x14_21 = &x19_3[0xc]
                void* x15_13 = x9_44 + (x14_20 << 2) + 0x30
                int64_t x16_11 = 8
                
                do
                    v4_3 = *x14_21
                    v3_7 = *(x15_13 - 0x10)
                    v5_5 = *x15_13
                    x16_11 += 8
                    x15_13 += 0x20
                    v2_8 = vmulq_f32(*(x14_21 - 0x10), v3_7, 0)
                    v3_7 = vmulq_f32(v4_3, v5_5, 0)
                    v0_4 = vaddq_f32(v0_4, v2_8)
                    v1_2 = vaddq_f32(v1_2, v3_7)
                    x14_21 += 0x20
                while (x16_11 s< x13_26)
            
            v0_4 = vaddq_f32(v1_2, v0_4)
            
            if (x11_64 s> x13_26)
                int64_t x13_27 = x13_26 << 2
                v0_4 = vaddq_f32(v0_4, vmulq_f32(*(x19_3 + x13_27), *(x12_32 + x13_27), 0))
        
        int128_t v0_5 = vadd_f32(v0_4, vextq_s8(v0_4, v0_4, 8))
        v0_3 = vpadd_f32(v0_5, v0_5)
        
        if (x11_64 s< x8_78)
            int64_t i_34 = x8_78 - x11_64
            int32_t* x8_80 = x9_44 + ((x11_64 + x8_78 * x10_58) << 2)
            void* x9_47 = &x19_3[x11_64]
            int64_t i_21
            
            do
                v2_8.d = *x9_47
                x9_47 += 4
                uint128_t v1_4
                v1_4.d = *x8_80
                x8_80 = &x8_80[1]
                i_21 = i_34
                i_34 -= 1
                v1_4.d = v2_8.d f* v1_4.d
                v0_3.d = v0_3.d f+ v1_4.d
            while (i_21 != 1)
    else
        v0_3.d = *x19_3
        v1_1.d = *x12_32
        v0_3.d = v0_3.d f* v1_1.d
        
        if (x8_78 s>= 2)
            int64_t i_27 = x8_78 - 1
            int32_t* x9_46 = x9_44 + (x14_20 << 2) + 4
            void* x10_59 = &x19_3[1]
            int64_t i_22
            
            do
                v2_8.d = *x10_59
                x10_59 += 4
                v1_1.d = *x9_46
                x9_46 = &x9_46[1]
                i_22 = i_27
                i_27 -= 1
                v1_1.d = v2_8.d f* v1_1.d
                v0_3.d = v0_3.d f+ v1_1.d
            while (i_22 != 1)
    
    var_d0.o = v0_3
    result, v0_6 = free(*(x19_3 - 8))
return result
