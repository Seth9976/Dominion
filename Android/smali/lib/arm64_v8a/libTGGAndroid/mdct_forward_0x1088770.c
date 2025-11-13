// 函数: mdct_forward
// 地址: 0x1088770
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x22 + 0x28)
int64_t x25 = sx.q(*arg1)
int32_t x10 = x25.d s>> 3
void var_60
void* x23 = &var_60 - (((x25 << 2) + 0xf) & 0xfffffffffffffff0)
int64_t x18 = *(arg1 + 8)
int64_t x9_2 = zx.q(x25.d s>> 1) << 0x20 s>> 0x1e
int64_t x21 = (x25 & 0xfffffffe) << 0x20 s>> 0x21
void* x1 = x23 + x9_2
int64_t x24 = (x25 & 0xfffffffc) << 0x20 s>> 0x22
void* x11_1 = arg2 + x9_2 + (sx.q(x25.d s>> 2) << 2)
int64_t x15 = x18 + x9_2
int64_t x9_6
int32_t i_2
float128 v0
float128 v1
float128 v2
float128 v3
float128 v4

if (x25.d s< 8)
    i_2 = 0
    x9_6 = x15
else
    int64_t x12_1 = sx.q(x10)
    int32_t x14_1
    
    x14_1 = x10 s> 2 ? x10 : 2
    
    int64_t x9_3
    
    x9_3 = x12_1 s> 2 ? x12_1 : 2
    
    uint64_t x14_3 = zx.q(x14_1 - 1) & 0xfffffffe
    int64_t x2 = x24 + x21
    int32_t* x13_3 = x11_1 + 4
    x9_6 = x18 + ((x21 - 2 - x14_3) << 2)
    int64_t x4_4
    int64_t x5_2
    
    if (((x9_3 - 1) u>> 1) + 1 u>= 5)
        int64_t x4_2
        
        x4_2 = x12_1 s> 2 ? x12_1 : 2
        
        x4_4 = (x4_2 - 1) & 0xfffffffffffffffe
        x5_2 = (x4_2 - 1) << 1 & 0xfffffffffffffffc
    
    int64_t x18_1
    
    if (((x9_3 - 1) u>> 1) + 1 u< 5 || ((x1 u< arg2 + ((x5_2 + x24 + x21) << 2) + 0x10 ? 1 : 0)
            & (x13_3 u< x23 + ((x4_4 + x21) << 2) + 8 ? 1 : 0) & 1) != 0 || ((x1 u< arg2 + (x2 << 2) - 4
            ? 1 : 0) & (arg2 + ((x2 - 4 - x5_2) << 2) u< x23 + ((x4_4 + x21) << 2) + 8 ? 1 : 0) & 1) != 0
            || ((x23 u< x18 ? 1 : 0)
            & (x18 + ((x21 - 2 - x4_4) << 2) u< x23 + ((x4_4 + x21) << 2) + 8 ? 1 : 0) & 1) != 0)
        x18_1 = 0
    else
        int64_t x3_9
        
        if (((((x9_3 - 1) u>> 1) + 1) & 3) == 0)
            x3_9 = 4
        else
            x3_9 = (((x9_3 - 1) u>> 1) + 1) & 3
        
        int64_t i = ((x9_3 - 1) u>> 1) + 1 - x3_9
        int32_t* x2_6 = x18 + (x21 << 2) - 0x20
        x18_1 = i << 1
        x15 -= i << 3
        void* x0_1 = &x13_3[i * 4]
        x11_1 -= i << 4
        void* x4_10 = arg2 + ((x24 + x21) << 2) - 0x20
        void* x5_7 = x1
        
        do
            v0.d = *(x4_10 + 0x18)
            i -= 4
            v0:4.d = *(x4_10 + 8)
            v0:8.d = *(x4_10 - 8)
            v0:0xc.d = *(x4_10 - 0x18)
            v1.d = *x13_3
            v2.d = x13_3[1]
            v3.d = x13_3[2]
            v4.d = x13_3[3]
            v1:4.d = x13_3[4]
            v2:4.d = x13_3[5]
            v3:4.d = x13_3[6]
            v4:4.d = x13_3[7]
            v1:8.d = x13_3[8]
            v2:8.d = x13_3[9]
            v3:8.d = x13_3[0xa]
            v4:8.d = x13_3[0xb]
            v1:0xc.d = x13_3[0xc]
            v2:0xc.d = x13_3[0xd]
            v3:0xc.d = x13_3[0xe]
            v4:0xc.d = x13_3[0xf]
            x13_3 = &x13_3[0x10]
            float128 v5
            v5.d = *(x4_10 + 0x10)
            float128 v6
            v6.d = *x2_6
            uint128_t v7
            v7.d = x2_6[1]
            v6:4.d = x2_6[2]
            v7:4.d = x2_6[3]
            v6:8.d = x2_6[4]
            v7:8.d = x2_6[5]
            v6:0xc.d = x2_6[6]
            v7:0xc.d = x2_6[7]
            v0 = vaddq_f32(v1, v0)
            v5:4.d = *x4_10
            x2_6 -= 0x20
            v5:8.d = *(x4_10 - 0x10)
            void* x6_9 = x4_10 - 0x20
            x4_10 -= 0x40
            v5:0xc.d = *x6_9
            v1 = vaddq_f32(v3, v5)
            uint128_t v3_1 = vrev64q_s32(v7)
            uint128_t v2_1 = vrev64q_s32(v6)
            v3 = vextq_s8(v3_1, v3_1, 8)
            v2 = vextq_s8(v2_1, v2_1, 8)
            float128 v5_1 = vmulq_f32(v1, v3, 0)
            v4 = vmulq_f32(v3, v0, 0)
            v5 = vfmaq_f32(v5_1, v0, v2)
            v6 = vfmaq_f32(vnegq_f32(v4), v1, v2)
            *x5_7 = v5.d
            *(x5_7 + 4) = v6.d
            *(x5_7 + 8) = v5:4.d
            *(x5_7 + 0xc) = v6:4.d
            *(x5_7 + 0x10) = v5:8.d
            *(x5_7 + 0x14) = v6:8.d
            *(x5_7 + 0x18) = v5:0xc.d
            *(x5_7 + 0x1c) = v6:0xc.d
            x5_7 += 0x20
        while (i != 0)
        
        x13_3 = x0_1
    
    int32_t* x11_2 = x11_1 - 8
    void* x17_4 = x23 + ((x18_1 + x21) << 2) + 4
    void* x15_1 = x15 - 4
    
    do
        v0.d = *x11_2
        v1.d = *x13_3
        v2.d = x11_2[-2]
        v3.d = x13_3[2]
        x18_1 += 2
        v0.d = v1.d f+ v0.d
        x11_2 -= 0x10
        v2.d = v3.d f+ v2.d
        v3.d = *(x15_1 - 4)
        v1.d = *x15_1
        x13_3 = &x13_3[4]
        v1.d = v2.d f* v1.d
        v1.d = vfma_f32(v1.d, v3.d, v0.d)
        *(x17_4 - 4) = v1.d
        v3.d = *(x15_1 - 4)
        v1.d = *x15_1
        x15_1 -= 8
        v0.d = v1.d f* v0.d
        unimplemented  {fnmsub s0, s3, s2, s0}
        *x17_4 = v0.d
        x17_4 += 8
    while (x18_1 s< x12_1)
    
    x11_1 = arg2 + ((x2 - 4 - (zx.q((x14_1 - 1) u>> 1) << 2)) << 2)
    i_2 = x14_3.d + 2

int32_t x14_4 = x21.d - x10
int32_t* x12_2 = arg2 + 4

if (i_2 s< x14_4)
    uint64_t i_1 = zx.q(i_2)
    int32_t x10_2 = x21.d - 1 - x10 - i_2
    uint64_t x10_3 = zx.q(x10_2) & 0xfffffffe
    void* x11_3 = x11_1 - 8
    void* x17_5 = x23 + (((i_1 & 0xfffffffe) + x21) << 2) + 4
    void* x18_5 = x9_6 - 4
    
    do
        v0.d = *x11_3
        v1.d = *x12_2
        v2.d = *(x11_3 - 8)
        v3.d = x12_2[2]
        x11_3 -= 0x10
        v0.d = v0.d f- v1.d
        v1.d = *(x18_5 - 4)
        v4.d = *x18_5
        v2.d = v2.d f- v3.d
        x12_2 = &x12_2[4]
        v3.d = v2.d f* v4.d
        v1.d = vfma_f32(v3.d, v1.d, v0.d)
        *(x1 + (i_1 << 2)) = v1.d
        v3.d = *(x18_5 - 4)
        v1.d = *x18_5
        i_1 += 2
        x18_5 -= 8
        v0.d = v1.d f* v0.d
        unimplemented  {fnmsub s0, s3, s2, s0}
        *x17_5 = v0.d
        x17_5 += 8
    while (i_1 s< sx.q(x14_4))
    
    x9_6 += (-2 - x10_3) << 2
    x12_2 = arg2 + (((zx.q(x10_2 u>> 1) << 2) + 5) << 2)
    i_2 = x10_3.d + i_2 + 2

if (i_2 s< x21.d)
    uint64_t i_3 = zx.q(i_2)
    void* x8_2 = arg2 + (x25 << 2) - 8
    void* x9_7 = x9_6 - 4
    
    do
        v0.d = *x8_2
        v2.d = *(x8_2 - 8)
        v1.d = *x12_2
        v3.d = x12_2[2]
        v0.d = fneg(v0.d)
        v2.d = fneg(v2.d)
        v0.d = v0.d f- v1.d
        v2.d = v2.d f- v3.d
        v3.d = *(x9_7 - 4)
        v1.d = *x9_7
        uint64_t x11_5 = (i_3 & 0xfffffffe) u>> 1
        v1.d = v2.d f* v1.d
        v1.d = vfma_f32(v1.d, v3.d, v0.d)
        *(x1 + (i_3 << 2)) = v1.d
        v3.d = *(x9_7 - 4)
        v1.d = *x9_7
        i_3 += 2
        x8_2 -= 0x10
        v0.d = v1.d f* v0.d
        x9_7 -= 8
        unimplemented  {fnmsub s0, s3, s2, s0}
        x12_2 = &x12_2[4]
        *(x1 + (4 | (0x7fffffff & x11_5) << 3)) = v0.d
    while (i_3 s< x21)

int64_t result = sub_108800c(arg1, x1, x21.d)
int64_t x11_6 = sx.q(*arg1)
void* x8_3 = *(arg1 + 8)
int64_t* x9_8 = *(arg1 + 0x10)
float v0_1 = fconvert.s(0.5f)
void* x12_3 = x23
void* x10_6 = x23 + (sx.q(x11_6.d s>> 1) << 2)
int32_t* x11_7 = x8_3 + (x11_6 << 2)
void* x13_5 = x10_6
float v1_1

do
    float v5_2 = *x11_7
    void* x14_7 = x10_6 + (*x9_8 << 2)
    void* x15_7 = x10_6 + (*(x9_8 + 4) << 2)
    v1_1 = *x14_7
    float v2_2 = *(x14_7 + 4)
    float v4_1 = *x15_7
    float v3_2 = *(x15_7 + 4)
    float v7_1 = v2_2 - v3_2
    float v16_1 = v4_1 + v1_1
    v1_1 = v1_1 - v4_1
    v4_1 = v5_2 * v7_1
    v2_2 = (v3_2 + v2_2) * v0_1
    v1_1 = v1_1 * v0_1
    float temp0_4 = vfma_f32(v16_1 * v5_2, x11_7[1], v7_1)
    unimplemented  {fnmsub s4, s6, s16, s4}
    *x12_3 = temp0_4 + v2_2
    *(x13_5 - 8) = v2_2 - temp0_4
    *(x12_3 + 4) = v4_1 + v1_1
    *(x13_5 - 4) = v4_1 - v1_1
    int64_t x14_8 = x9_8[1].d
    int64_t x15_8 = *(x9_8 + 0xc)
    v5_2 = x11_7[2]
    int32_t v6_2 = x11_7[3]
    x9_8 = &x9_8[2]
    x11_7 = &x11_7[4]
    void* x14_9 = x10_6 + (x14_8 << 2)
    void* x15_9 = x10_6 + (x15_8 << 2)
    v1_1 = *x14_9
    v2_2 = *(x14_9 + 4)
    v4_1 = *x15_9
    v3_2 = *(x15_9 + 4)
    v7_1 = v2_2 - v3_2
    v16_1 = v4_1 + v1_1
    v1_1 = v1_1 - v4_1
    v4_1 = v5_2 * v7_1
    v2_2 = (v3_2 + v2_2) * v0_1
    v1_1 = v1_1 * v0_1
    float temp0_5 = vfma_f32(v16_1 * v5_2, v6_2, v7_1)
    unimplemented  {fnmsub s4, s6, s16, s4}
    *(x12_3 + 8) = temp0_5 + v2_2
    *(x13_5 - 0x10) = v2_2 - temp0_5
    *(x12_3 + 0xc) = v4_1 + v1_1
    *(x13_5 - 0xc) = v4_1 - v1_1
    x13_5 -= 0x10
    x12_3 += 0x10
while (x12_3 u< x13_5)

if (x25.d s>= 4)
    int64_t x10_7 = x21 << 2
    int64_t x9_9 = 0
    float* x8_4 = x8_3 + x10_7
    int64_t x10_8 = x10_7 - 4
    
    do
        arg3[x9_9] = vfma_f32(*x8_4 * *x23, x8_4[1], *(x23 + 4)) f* arg1[6]
        *x23
        v0_1 = *(x23 + 4)
        x23 += 8
        v1_1 = *x8_4
        x8_4[1]
        x8_4 = &x8_4[2]
        x9_9 += 1
        unimplemented  {fnmsub s0, s3, s2, s0}
        *(arg3 + x10_8) = v1_1 * v0_1 f* arg1[6]
        x10_8 -= 4
    while (x9_9 s< x24)

if (*(x22 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
