// 函数: sub_1086e50
// 地址: 0x1086e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t x25 = sx.q(*(arg1 + 4))
int64_t v8
v8.d = *(arg1 + 0xc)
int64_t x10 = x25 << 2
void var_80
void* x22 = &var_80 - ((x10 + 0xf) & 0xfffffffffffffff0)
int32_t x8_1 = *(arg1 + 0xe8)
int64_t v9
v9.d = *(arg2 + 0x3c)
uint64_t j_5

if (x8_1 s> 5)
    j_5 = zx.q(x8_1 u>> 1)
else
    j_5 = 2

int32_t x8_2

if (x8_1 s< 0)
    x8_2 = x8_1 + 1
else
    x8_2 = x8_1

if (x25.d s>= 1)
    void* x8_5 = *(arg1 + 0x30)
    int64_t i_5 = 0
    
    if (x25.d u< 8)
        goto label_1086ef0
    
    void* x11_6 = x22 + x10
    float128 v1
    float128 v2
    
    if (((x22 u< arg3 + x10 ? 1 : 0) & (x11_6 u> arg3 ? 1 : 0) & 1) != 0)
        i_5 = 0
    label_1086ef0:
        int64_t x11_1 = i_5 << 2
        int32_t* x10_1 = arg3 + x11_1
        int32_t* x8_6 = x8_5 + x11_1
        void* x11_2 = x22 + x11_1
        int64_t i_3 = x25 - i_5
        int64_t i
        
        do
            v1.d = *x10_1
            x10_1 = &x10_1[1]
            v2.d = *x8_6
            x8_6 = &x8_6[1]
            i = i_3
            i_3 -= 1
            v1.d = v2.d f* v1.d
            *x11_2 = v1.d
            x11_2 += 4
        while (i != 1)
    else
        i_5 = 0
        
        if (((x22 u< x8_5 + x10 ? 1 : 0) & (x8_5 u< x11_6 ? 1 : 0) & 1) != 0)
            goto label_1086ef0
        
        i_5 = x25 & 0xfffffffffffffff8
        void* x10_7 = arg3 + 0x10
        void* x11_7 = x8_5 + 0x10
        void* x12_5 = x22 + 0x10
        int64_t i_4 = i_5
        int64_t i_1
        
        do
            v1 = *(x10_7 - 0x10)
            v2 = *x10_7
            float128 v3 = *(x11_7 - 0x10)
            float128 v4 = *x11_7
            x10_7 += 0x20
            x11_7 += 0x20
            i_1 = i_4
            i_4 -= 8
            v1 = vmulq_f32(v3, v1, 0)
            v2 = vmulq_f32(v4, v2, 0)
            *(x12_5 - 0x10) = v1
            *x12_5 = v2
            x12_5 += 0x20
        while (i_1 != 8)
        
        if (i_5 != x25)
            goto label_1086ef0

int64_t v10
v10.d = v9.d f- float.s((x8_2 s>> 1) - 2)
int64_t v11
v11.d = 0f
uint128_t v0_1
float128 v1_1
float128 v2_1
uint128_t v3_1
float128 v4_1
float128 v5
float128 v6
float128 v7
float128 v16
v0_1, v1_1, v2_1, v3_1, v4_1, v5, v6, v7, v16 = mdct_forward(arg1 + 0x10, x22, x22)
v0_1.d = *x22
v1_1.d = *(x22 + 4)
v2_1.q = 0x3fe6666666666666
v3_1.d = v0_1.d f* v0_1.d
v1_1.q = fconvert.d(v1_1.d)
v3_1.q = fconvert.d(v3_1.d)
v1_1.q = v1_1.q f* v1_1.q
v1_1.q = vfma_f64(v3_1.q, v1_1.q, 0.69999999999999996)
v2_1.d = *(x22 + 8)
v3_1.q = 0x3fc999999999999a
int64_t x8_7 = sx.q(*(arg5 + 0x8c))
v2_1.q = fconvert.d(v2_1.d)
v2_1.q = v2_1.q f* v2_1.q
v1_1.q = vfma_f64(v1_1.q, v2_1.q, 0.20000000000000001)
v3_1.d = fconvert.s(v1_1.q)

if (x8_7.d == 0)
    v1_1.d = *(arg5 + 0x88)
    v2_1.d = v1_1.d f+ v3_1.d
    *(arg5 + 0x84) = v2_1.d
    *(arg5 + 0x88) = v3_1.d
else
    v1_1.q = *(arg5 + 0x84)
    v2_1 = vadd_f32(v1_1, vdup_laneq_s32(v3_1, 0))
    *(arg5 + 0x84) = v2_1.q

void* x9_2 = arg5 + (x8_7 << 2)
v4_1.d = *(x9_2 + 0x48)
int32_t x8_8

if (x8_7.d s> 0xd)
    x8_8 = 0
else
    x8_8 = x8_7.d + 1

v1_1.d = vmaxnm_f32(v10.d, v11.d)
int64_t x10_2

if (x25 s< 0)
    x10_2 = x25 + 1
else
    x10_2 = x25

v4_1.d = v2_1.d f- v4_1.d
*(arg5 + 0x84) = v4_1.d
*(x9_2 + 0x48) = v3_1.d
*(arg5 + 0x8c) = x8_8

if (x25.d s>= 2)
    v3_1.d = 0x3d800000
    v4_1.d = 0xc43f2770
    v5.d = 0x3540a8c1
    v2_1.d = v2_1.d f* 0.0625f
    v2_1.d = float.s(v2_1.d & 0x7fffffff)
    v4_1.d = vfma_f32(-764.616211f, v2_1.d, 7.1771143e-07f)
    v3_1.q = fconvert.d(-15.0)
    v5.q = fconvert.d(0.5)
    v2_1.d = 0xc3bf2770
    v4_1.q = fconvert.d(v4_1.d)
    v4_1.q = vfma_f64(v3_1.q, v4_1.q, v5.q)
    v3_1.d = 0x34c0a8c1
    int64_t x8_9 = 0
    int64_t x9_3 = 0
    v4_1.d = fconvert.s(v4_1.q)
    v5.d = fconvert.s(-8f)
    
    while (true)
        void* x11_5 = x22 + (x9_3 << 2)
        v6.d = *(x11_5 + 4)
        v0_1.d = v0_1.d f* v0_1.d
        x9_3 += 2
        v0_1.d = vfma_f32(v0_1.d, v6.d, v6.d)
        v0_1.d = float.s(v0_1.d & 0x7fffffff)
        v0_1.d = vfma_f32(-382.308105f, v0_1.d, 3.58855715e-07f)
        v0_1.d = vmaxnm_f32(v0_1.d, v4_1.d)
        v0_1.d = vmaxnm_f32(v0_1.d, v8.d)
        *(x22 + x8_9) = v0_1.d
        
        if (x9_3 s>= x10_2 s>> 1)
            break
        
        v0_1.d = *(x11_5 + 8)
        v4_1.d = v4_1.d f+ v5.d
        x8_9 += 4

v0_1.d = vminnm_f32(v1_1.d, v9.d)
v1_1.d = 0x47c34f80
v2_1.d = 0xc7c34f80
int32_t result = 0

for (int64_t i_2 = 0; i_2 != 7; )
    int64_t x14_2 = sx.q(*(arg4 + i_2 * 0x18 + 4))
    
    if (x14_2.d s< 1)
        v3_1.d = 0f
    else
        int32_t* x15_1 = arg4 + i_2 * 0x18
        int64_t x17_1 = sx.q(*x15_1)
        int32_t* x15_2 = *(x15_1 + 8)
        int64_t j_4
        
        if (x14_2.d u>= 8)
            j_4 = x14_2 & 0xfffffffffffffff8
            void* x18_1 = x22 + 0x10 + (x17_1 << 2)
            int128_t* x1_1 = &x15_2[4]
            v3_1.q = 0
            v3_1:8.q = 0
            int64_t j_2 = j_4
            v4_1.q = 0
            v4_1:8.q = 0
            int64_t j
            
            do
                v5 = *(x18_1 - 0x10)
                v6 = *x18_1
                v7 = x1_1[-1]
                v16 = *x1_1
                x18_1 += 0x20
                j = j_2
                j_2 -= 8
                x1_1 = &x1_1[2]
                v3_1 = vfmaq_f32(v3_1, v5, v7)
                v4_1 = vfmaq_f32(v4_1, v6, v16)
            while (j != 8)
            float128 v3_2 = vaddq_f32(v4_1, v3_1)
            float128 v3_3 = vaddq_f32(v3_2, vextq_s8(v3_2, v0_1, 8))
            v3_1 = vaddq_f32(v3_3, vdupq_laneq_s32(v3_3, 1))
            
            if (j_4 != x14_2)
                goto label_108714c
        else
            j_4 = 0
            v3_1.d = 0f
        label_108714c:
            
            do
                v4_1.d = *(x22 + (x17_1 << 2) + (j_4 << 2))
                v5.d = x15_2[j_4]
                j_4 += 1
                v3_1.d = vfma_f32(v3_1.d, v5.d, v4_1.d)
            while (j_4 s< x14_2)
    
    void* x17_3 = arg5 + i_2 * 0x90
    v4_1.d = *(arg4 + i_2 * 0x18 + 0x10)
    int64_t x15_3 = sx.q(*(x17_3 + 0x44))
    v6 = v2_1
    v3_1.d = v4_1.d f* v3_1.d
    v7 = v1_1
    int32_t x16_1
    
    x16_1 = x15_3.d s< 1 ? 0x10 : -1
    
    int32_t x16_2 = x16_1 + x15_3.d
    v5.d = *(x17_3 + (sx.q(x16_2) << 2))
    v4_1.d = vmaxnm_f32(v3_1.d, v5.d)
    v5.d = vminnm_f32(v3_1.d, v5.d)
    
    if (j_5 != 0)
        uint64_t j_3 = j_5
        v7 = v1_1
        v6 = v2_1
        uint64_t j_1
        
        do
            int32_t x1_2
            
            x1_2 = x16_2 s< 1 ? 0x10 : -1
            
            x16_2 += x1_2
            v16.d = *(arg5 + i_2 * 0x90 + (sx.q(x16_2) << 2))
            j_1 = j_3
            j_3 -= 1
            v6.d = vmaxnm_f32(v6.d, v16.d)
            v7.d = vminnm_f32(v7.d, v16.d)
        while (j_1 != 1)
    
    *(arg5 + i_2 * 0x90 + (x15_3 << 2)) = v3_1.d
    int32_t x15_4
    
    if (x15_3.d s> 0xf)
        x15_4 = 0
    else
        x15_4 = x15_3.d + 1
    
    void* x16_4 = arg2 + (i_2 << 2)
    *(x17_3 + 0x44) = x15_4
    v3_1.d = *(x16_4 + 4)
    v4_1.d = v4_1.d f- v6.d
    v6.d = *(x16_4 + 0x20)
    v3_1.d = v3_1.d f+ v0_1.d
    v5.d = v5.d f- v7.d
    v6.d = v6.d f- v0_1.d
    int32_t result_1
    
    if (v4_1.d f> v3_1.d)
        result_1 = result | 5
    else
        result_1 = result
    
    i_2 += 1
    
    if (v5.d f< v6.d)
        result = result_1 | 2
    else
        result = result_1

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
