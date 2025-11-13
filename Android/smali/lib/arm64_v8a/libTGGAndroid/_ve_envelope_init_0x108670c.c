// 函数: _ve_envelope_init
// 地址: 0x108670c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 0x30)
int64_t x21 = sx.q(*(arg2 + 4))
*(arg1 + 4) = 0x4000000080
int32_t x9 = *(x8 + 0x1390)
*arg1 = x21.d
arg1[3] = x9
*(arg1 + 0xf8) = 0x80
int64_t x8_1 = *(x8 + 8)
int64_t x8_2

if (x8_1 s< 0)
    x8_2 = x8_1 + 1
else
    x8_2 = x8_1

*(arg1 + 0x110) = x8_2 s>> 1
*(arg1 + 0x30) = calloc(0x80, 4)
uint128_t v0
uint128_t v1
float128 v2
v0, v1, v2 = mdct_init(&arg1[4], 0x80)
v0 = data_71c940
float128* x23 = *(arg1 + 0x30)
int64_t i = 0
v1.q = 0x3f9954a49d7f2b6f
v1:8.q = 0x3f9954a49d7f2b6f
uint128_t var_e0 = v1

do
    uint128_t var_a0_1 = v0
    v2 = var_e0
    v0.q = sx.q(var_a0_1:8.d)
    v0:8.q = sx.q(v0:0xc.d)
    v1.q = sx.q(var_a0_1.d)
    v1:8.q = sx.q(v1:4.d)
    float128 v0_1 = vcvtq_f64_s64(v0)
    float128 v1_1 = vcvtq_f64_s64(v1)
    float128 v0_2 = vmulq_f64(v0_1, v2, 0)
    float128 v1_2 = vmulq_f64(v1_1, v2, 0)
    double x = v0_2.q
    v0_2.q = v0_2:8.q
    double var_c0_1 = sin(v0_2.q)
    sin(x)
    int128_t v0_4
    v0_4.q = v1_2:8.q
    int128_t v1_3
    v1_3:8.q = var_c0_1
    int128_t var_d0_1 = sin(v0_4.q)
    float128 v0_6
    v0_6, v1, v2 = sin(v1_2.q)
    v0_6:8.q = var_d0_1.q
    float128 v0_8 = vcvt_high_f32_f64(vcvt_f32_f64(v0_6, v0_6), v1_3)
    *(x23 + i) = vmulq_f32(v0_8, v0_8, 0)
    i += 0x10
    v1.d = 4
    v1:4.d = 4
    v1:8.d = 4
    v1:0xc.d = 4
    v0 = var_a0_1 i+ v1
while (i != 0x200)

uint128_t var_160 = data_71c940
v1.q = 0x400000002
*(arg1 + 0x68) = 0x600000006
*(arg1 + 0x38) = 0x400000002
v1.q = fconvert.d(0.5)
v1:8.q = fconvert.d(0.5)
int64_t x22 = 0
int32_t x25 = 4
uint128_t var_140 = v1
v1.q = 0x400921fb54442d18
v1:8.q = 0x400921fb54442d18
int64_t v11
v11.d = fconvert.s(1f)
*(arg1 + 0x50) = 0x500000004
*(arg1 + 0x80) = 0x800000009
*(arg1 + 0x98) = 0x80000000d
*(arg1 + 0xb0) = 0x800000011
*(arg1 + 0xc8) = 0x800000016

while (true)
    void* x0_3
    uint128_t v0_10
    float128 v1_4
    float128 v2_2
    uint128_t v3_1
    float128 v4_1
    x0_3, v0_10, v1_4, v2_2, v3_1, v4_1 = malloc(zx.q(x25) << 0x20 s>> 0x1e)
    *(arg1 + x22 * 0x18 + 0x40) = x0_3
    int32_t* x24_2
    
    if (x25 s<= 0)
        x24_2 = arg1 + x22 * 0x18 + 0x48
        v1_4.d = *x24_2
    else
        x24_2 = arg1 + x22 * 0x18 + 0x48
        v1_4.d = *x24_2
        v0_10.q = float.d(sx.q(x25))
        v0_10.q = fconvert.d(1.0) f/ v0_10.q
        uint64_t x25_1 = zx.q(x25)
        uint128_t var_120_1 = v0_10
        int64_t i_3
        
        if (x25 u>= 8)
            v3_1 = var_160
            i_3 = x25_1 & 0xfffffff8
            v2_2.q = 0
            v2_2:8.q = 0
            uint128_t var_130_1 = vdupq_laneq_s64(v0_10, 0)
            uint128_t v0_11
            v0_11.q = 0
            v0_11:8.q = 0
            v2_2.d = v1_4.d
            void* x27_1 = x0_3 + 0x10
            int64_t i_2 = i_3
            int64_t i_1
            
            do
                uint128_t var_a0_2 = v0_11
                v0_11.d = 4
                v0_11:4.d = 4
                v0_11:8.d = 4
                v0_11:0xc.d = 4
                v4_1 = var_140
                uint128_t v0_12 = v3_1 + v0_11
                uint128_t var_f0_1 = v3_1
                float128 var_e0_1 = v2_2
                v1_4.q = sx.q(v3_1:8.d)
                v1_4:8.q = sx.q(v3_1:0xc.d)
                v2_2.q = sx.q(v3_1.d)
                v2_2:8.q = sx.q(v3_1:4.d)
                v3_1.q = sx.q(v0_12:8.d)
                v3_1:8.q = sx.q(v0_12:0xc.d)
                v0_12.q = sx.q(v0_12.d)
                v0_12:8.q = sx.q(v0_12:4.d)
                float128 v1_5 = vcvtq_f64_s64(v1_4)
                float128 v2_3 = vcvtq_f64_s64(v2_2)
                float128 v3_2 = vcvtq_f64_s64(v3_1)
                float128 v0_13 = vcvtq_f64_s64(v0_12)
                float128 v2_4 = vaddq_f64(v2_3, v4_1)
                float128 v1_6 = vaddq_f64(v1_5, v4_1)
                float128 v0_14 = vaddq_f64(v0_13, v4_1)
                float128 v3_3 = vaddq_f64(v3_2, v4_1)
                v4_1 = var_130_1
                float128 v1_7 = vmulq_f64(v1_6, v4_1, 0)
                float128 v2_5 = vmulq_f64(v2_4, v4_1, 0)
                float128 v3_4 = vmulq_f64(v3_3, v4_1, 0)
                float128 v0_15 = vmulq_f64(v0_14, v4_1, 0)
                v4_1 = v1
                float128 v0_16 = vmulq_f64(v0_15, v4_1, 0)
                float128 v1_8 = vmulq_f64(v1_7, v4_1, 0)
                float128 v0_17 = vmulq_f64(v3_4, v4_1, 0)
                float128 v2_6 = vmulq_f64(v2_5, v4_1, 0)
                float128 var_c0_3 = v0_17
                v0_17.q = v1_8:8.q
                double var_100_1 = sin(v0_17.q)
                sin(v1_8.q)
                int128_t v0_19
                v0_19.q = v2_6:8.q
                int128_t v1_9
                v1_9:8.q = var_100_1
                double var_110_2 = sin(v0_19.q)
                sin(v2_6.q)
                int128_t v0_21
                v0_21.q = var_c0_3:8.q
                int128_t v1_10
                v1_10:8.q = var_110_2
                double var_110_3 = sin(v0_21.q)
                sin(var_c0_3.q)
                int128_t v0_23
                v0_23.q = v0_16:8.q
                int128_t v1_11
                v1_11:8.q = var_110_3
                int128_t var_110_4 = sin(v0_23.q)
                float128 v0_25
                float128 v1_12
                float128 v2_10
                int128_t v3_5
                v0_25, v1_12, v2_10, v3_5, v4_1 = sin(v0_16.q)
                v4_1.d = 8
                v4_1:4.d = 8
                v4_1:8.d = 8
                v4_1:0xc.d = 8
                v1_12 = v1_10
                i_1 = i_2
                i_2 -= 8
                v3_1 = var_f0_1 i+ v4_1
                int128_t v1_13 = vcvt_f32_f64(v1_12, v1_12)
                v0_25:8.q = var_110_4.q
                int128_t v0_26 = vcvt_f32_f64(v0_25, v0_25)
                float128 v1_14 = vcvt_high_f32_f64(v1_13, v1_9)
                v2_2 = vaddq_f32(var_e0_1, v1_14)
                v0_11 = vcvt_high_f32_f64(v0_26, v1_11)
                *(x27_1 - 0x10) = v1_14
                *x27_1 = v0_11
                x27_1 += 0x20
                v0_11 = vaddq_f32(var_a0_2, v0_11)
            while (i_1 != 8)
            float128 v0_27 = vaddq_f32(v0_11, v2_2)
            v2_2 = var_120_1
            v0_10 = vaddq_f32(v0_27, vextq_s8(v0_27, v0_27, 8))
            v1_4 = vaddq_f32(v0_10, vdupq_laneq_s32(v0_10, 1))
            
            if (i_3 != x25_1)
                goto label_1086b24
        else
            i_3 = 0
            v2_2 = v0_10
        label_1086b24:
            
            do
                v0_10.q = float.d(sx.q(i_3.d))
                v0_10.q = v0_10.q f+ fconvert.d(0.5)
                v0_10.q = v0_10.q f* v2_2.q
                v0_10.q = v0_10.q f* 3.1415926535897931
                float128 var_a0_4 = v1_4
                v0_10, v1_4, v2_2 = sin(v0_10.q)
                v2_2 = var_120_1
                v0_10.d = fconvert.s(v0_10.q)
                *(x0_3 + (i_3 << 2)) = v0_10.d
                i_3 += 1
                v1_4.d = var_a0_4.d f+ v0_10.d
            while (x25_1 != i_3)
        *x24_2 = v1_4.d
    
    x22 += 1
    v0_10.d = v11.d f/ v1_4.d
    *x24_2 = v0_10.d
    
    if (x22 == 7)
        break
    
    x25 = *(arg1 + x22 * 0x18 + 0x3c)

int64_t x0_5 = calloc(x21 * 7, 0x90)
int64_t x8_7 = *(arg1 + 0xf8)
*(arg1 + 0xe0) = x0_5
int64_t result = calloc(x8_7, 4)
*(arg1 + 0xf0) = result
return result
