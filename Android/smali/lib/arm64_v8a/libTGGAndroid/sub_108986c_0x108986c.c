// 函数: sub_108986c
// 地址: 0x108986c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v15
double var_a0 = v15
uint64_t x8 = _ReadMSR(tpidr_el0)
uint64_t var_8090 = x8
int64_t x8_1 = *(x8 + 0x28)
int64_t x26 = sx.q(arg2)
void* x27 = &var_8090 - (((zx.q(arg2) << 0x20 s>> 0x1e) + 0xf) & 0xfffffffffffffff0)
int64_t result = malloc(0x88)
void var_7890
uint128_t v0
uint128_t v1
float128 v2
float128 v3
float128 v4
int128_t v7
v0, v1, v2, v3, v4, v7 = memset(&var_7890, 0, 0x7700)
v0 = arg4.o
data_71c5f0
data_71a9c0
data_71c940
v0.d f- 0f
int16_t x10 = (v0.d f> 0f ? 1 : 0).w
int16_t x8_3 = (v0.d f< 0f ? 1 : 0).w
int64_t x28 = 0
int64_t i = 0
uint128_t v5 = vdupq_laneq_s32(arg5.o, 0)
uint128_t v6 = vdupq_laneq_s32(v0, 0)
void var_188
void* x13 = &var_188
int64_t v8
v8.d = fconvert.s(-30f)
v7.q = 0x10
v7:8.q = 0x10
void* const x12 = &data_871e10
int128_t v12
v12.w = x10
v12:2.w = x10
v12:4.w = x10
v12:6.w = x10
int128_t v13
v13.w = x8_3
v13:2.w = x8_3
v13:4.w = x8_3
v13:6.w = x8_3
int64_t v14
v14.d = fconvert.s(-10f)
void* x21 = &var_7890
void* var_7ff8 = &var_188
int128_t var_8030
__builtin_memcpy(&var_8030, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x
        00", 
    0x30)
int128_t var_8020
int128_t var_8010

do
    v0.d = *(&data_871dfc + (i << 4))
    v2.d = *(&data_871dfc + (4 | (0xfffffffffffffff & i) << 4))
    v3.d = *((4 | (0xfffffffffffffff & i) << 4) + 0x871e00)
    v1.d = *(&data_871dfc + (8 | (0xfffffffffffffff & i) << 4))
    v4.d = *(&data_871dfc + (0xc | (0xfffffffffffffff & i) << 4))
    v0.d = vminnm_f32(v0.d, v2.d)
    v2.d = vminnm_f32(v2.d, v3.d)
    v3.d = *((4 | (0xfffffffffffffff & i) << 4) + 0x871e08)
    v0.d = vminnm_f32(v0.d, v1.d)
    v1.d = vminnm_f32(v2.d, v4.d)
    v0.d = vminnm_f32(v0.d, v4.d)
    v1.d = vminnm_f32(v1.d, v3.d)
    int64_t j = 0
    int32_t var_190 = v0.d
    int32_t var_18c_1 = v1.d
    void* const x9_5 = x12
    
    do
        int64_t x10_3 = x28 + j
        int32_t v0_1 = v8.d
        
        if (x10_3 + 2 u<= 0x57)
            v0_1 = *(x9_5 - 0xc)
        
        if (x10_3 + 3 u< 0x58)
            v1.d = *(x9_5 - 8)
            
            if (not(v0_1 f<= v1.d))
                v0_1 = v1.d
        else if (not(v0_1 f<= v8.d))
            v0_1 = v8.d
        
        if (x28 + j + 4 u< 0x58)
            v1.d = *(x9_5 - 4)
            
            if (not(v0_1 f<= v1.d))
                v0_1 = v1.d
        else if (not(v0_1 f<= v8.d))
            v0_1 = v8.d
        
        if (x28 + j + 5 u< 0x58)
            v1.d = *x9_5
            
            if (not(v0_1 f<= v1.d))
                v0_1 = v1.d
        else if (not(v0_1 f<= v8.d))
            v0_1 = v8.d
        
        *(x13 + (j << 2)) = v0_1
        j += 1
        x9_5 += 4
    while (j != 0x36)
    
    int64_t x23_1 = &var_7890 + i * 0x700
    memcpy(x23_1 + 0x1c0, &data_8723f0 + i * 0x540, 0xe0)
    memcpy(x23_1 + 0x2a0, i * 0x540 + 0x8724d0, 0xe0)
    memcpy(x23_1 + 0x380, i * 0x540 + 0x8725b0, 0xe0)
    memcpy(x23_1 + 0x460, i * 0x540 + 0x872690, 0xe0)
    memcpy(x23_1 + 0x540, i * 0x540 + 0x872770, 0xe0)
    memcpy(x23_1 + 0x620, i * 0x540 + 0x872850, 0xe0)
    memcpy(x23_1, &data_8723f0 + i * 0x540, 0xe0)
    uint128_t v5_1
    float128 v7_1
    float128 v16_1
    float128 v17_1
    float128 v19_1
    uint128_t v20_1
    uint128_t v21_1
    float128 v22_1
    int128_t v23_1
    v5_1, v7_1, v16_1, v17_1, v19_1, v20_1, v21_1, v22_1, v23_1 =
        memcpy(x23_1 + 0xe0, &data_8723f0 + i * 0x540, 0xe0)
    v22_1 = var_8030
    v19_1.d = 4
    v19_1:4.d = 4
    v19_1:8.d = 4
    v19_1:0xc.d = 4
    v17_1.q = -1
    v17_1:8.q = -1
    int64_t j_1 = 0
    void* x9_6 = x21
    
    do
        int64_t k = 0
        v0 = var_8020
        v1 = var_8010
        v2 = v22_1
        
        do
            uint128_t v3_1 = v7 - v0
            v5_1.q = 4
            v5_1:8.q = 4
            uint128_t v4_1 = v7 - v1
            v1 += v5_1
            v0 += v5_1
            uint128_t v5_2 = vcgtq_s64(v3_1, sx.o(-1))
            uint128_t v6_1 = vcgtq_s64(v4_1, sx.o(-1))
            vmovn_s64(v5_2)
            vmovn_s64(v3_1)
            float128 v4_3 = vfmaq_f32(v6, 
                vcvtq_f32_s32(vbslq_s8(vmovn_high_s64(v6_1), vmovn_high_s64(v4_1), 
                    v2 i+ not.o(zx.o(0xf)))), 
                v5)
            uint128_t v5_9
            v5_9.d = zx.d((v12 & vmovn_s32(vcltzq_f32(v4_3, 0))).w)
            v5_9:4.d = zx.d(v5_9:2.w)
            v5_9:8.d = zx.d(v5_9:4.w)
            v5_9:0xc.d = zx.d(v5_9:6.w)
            v5_9.d <<= 0x1f
            v5_9:4.d <<= 0x1f
            v5_9:8.d <<= 0x1f
            v5_9:0xc.d <<= 0x1f
            float128 v4_4 = v4_3 & vcgezq_s32(v5_9)
            uint128_t v5_13
            v5_13.d = zx.d((v13 & vmovn_s32(vcgtzq_f32(v4_4, 0))).w)
            v5_13:4.d = zx.d(v5_13:2.w)
            v5_13:8.d = zx.d(v5_13:4.w)
            v5_13:0xc.d = zx.d(v5_13:6.w)
            v5_13.d <<= 0x1f
            v5_13:4.d <<= 0x1f
            v5_13:8.d <<= 0x1f
            v5_13:0xc.d <<= 0x1f
            *(x9_6 + k) = vaddq_f32(*(x9_6 + k), v4_4 & vcgezq_s32(v5_13))
            k += 0x10
            v2 += v19_1
        while (k != 0xe0)
        
        j_1 += 1
        x9_6 += 0xe0
    while (j_1 != 8)
    
    int64_t i_2 = i
    int64_t j_2 = 0
    int128_t var_7f90[0x70]
    int128_t (* x22_1)[0x70] = &var_7f90
    void* var_7fc8_1 = x21
    v0.d = *(arg1 + (i_2 << 2))
    v15 = fconvert.d(v0.d)
    
    do
        int32_t x9_7
        
        x9_7 = j_2 u> 2 ? j_2.d : 2
        
        v0.q = float.d(sx.q(x9_7))
        void* x9_9 = &var_7890 + i_2 * 0x700 + j_2 * 0xe0
        v1 = *x9_9
        v2 = *(x9_9 + 0x10)
        v3 = *(x9_9 + 0x20)
        v4 = *(x9_9 + 0x30)
        v5_1 = *(x9_9 + 0x40)
        uint128_t v6_2 = *(x9_9 + 0x50)
        v7_1 = *(x9_9 + 0x60)
        v16_1 = *(x9_9 + 0x70)
        v17_1 = *(x9_9 + 0x80)
        int128_t v18_1 = *(x9_9 + 0x90)
        v19_1 = *(x9_9 + 0xa0)
        v20_1 = *(x9_9 + 0xb0)
        v21_1 = *(x9_9 + 0xc0)
        v22_1 = *(x9_9 + 0xd0)
        v0.q = vfma_f64(70.0, v0.q, fconvert.d(-10.0))
        v0.q = v0.q f+ v15
        v0.d = fconvert.s(v0.q)
        float128 v0_2 = vdupq_laneq_s32(v0, 0)
        float128 v1_1 = vaddq_f32(v1, v0_2)
        float128 v2_1 = vaddq_f32(v2, v0_2)
        float128 v3_4 = vaddq_f32(v3, v0_2)
        float128 v4_5 = vaddq_f32(v4, v0_2)
        float128 v5_14 = vaddq_f32(v5_1, v0_2)
        float128 v6_3 = vaddq_f32(v6_2, v0_2)
        float128 v7_2 = vaddq_f32(v7_1, v0_2)
        float128 v16_2 = vaddq_f32(v16_1, v0_2)
        float128 v17_2 = vaddq_f32(v17_1, v0_2)
        float128 v18_2 = vaddq_f32(v18_1, v0_2)
        float128 v19_2 = vaddq_f32(v19_1, v0_2)
        float128 v20_2 = vaddq_f32(v20_1, v0_2)
        float128 v21_2 = vaddq_f32(v21_1, v0_2)
        float128 v0_3 = vaddq_f32(v22_1, v0_2)
        *x9_9 = v1_1
        *(x9_9 + 0x10) = v2_1
        *(x9_9 + 0x20) = v3_4
        *(x9_9 + 0x30) = v4_5
        *(x9_9 + 0x40) = v5_14
        *(x9_9 + 0x50) = v6_3
        *(x9_9 + 0x60) = v7_2
        *(x9_9 + 0x70) = v16_2
        *(x9_9 + 0x80) = v17_2
        *(x9_9 + 0x90) = v18_2
        *(x9_9 + 0xa0) = v19_2
        *(x9_9 + 0xb0) = v20_2
        *(x9_9 + 0xc0) = v21_2
        *(x9_9 + 0xd0) = v0_3
        uint128_t* x23_2 = &var_7f90[j_2 * 0xe]
        uint128_t v0_4
        float128 v1_2
        float128 v2_2
        float128 v3_5
        float128 v4_6
        float128 v5_15
        float128 v6_4
        float128 v7_3
        float128 v16_3
        float128 v17_3
        float128 v18_3
        float128 v19_3
        float128 v20_3
        float128 v21_3
        v0_4, v1_2, v2_2, v3_5, v4_6, v5_15, v6_4, v7_3, v16_3, v17_3, v18_3, v19_3, v20_3, v21_3, 
            v22_1 = memcpy(x23_2, &var_190, 0xe0)
        v1_2 = *x23_2
        v2_2 = x23_2[1]
        v3_5 = x23_2[2]
        v4_6 = x23_2[3]
        v5_15 = x23_2[4]
        v6_4 = x23_2[5]
        v7_3 = x23_2[6]
        v16_3 = x23_2[7]
        v17_3 = x23_2[8]
        v18_3 = x23_2[9]
        v19_3 = x23_2[0xa]
        v20_3 = x23_2[0xb]
        v21_3 = x23_2[0xc]
        v22_1 = x23_2[0xd]
        v0_4.d = float.s(j_2.d)
        v0_4.d = vfma_f32(70f, v0_4.d, v14.d)
        float128 v0_5 = vdupq_laneq_s32(v0_4, 0)
        int64_t k_1 = 0
        v1 = vaddq_f32(v0_5, v1_2)
        v2 = vaddq_f32(v0_5, v2_2)
        v3 = vaddq_f32(v0_5, v3_5)
        v4 = vaddq_f32(v0_5, v4_6)
        v5_1 = vaddq_f32(v0_5, v5_15)
        v6_2 = vaddq_f32(v0_5, v6_4)
        v7_1 = vaddq_f32(v0_5, v7_3)
        v16_1 = vaddq_f32(v0_5, v16_3)
        v17_1 = vaddq_f32(v0_5, v17_3)
        v18_1 = vaddq_f32(v0_5, v18_3)
        v19_1 = vaddq_f32(v0_5, v19_3)
        v20_1 = vaddq_f32(v0_5, v20_3)
        v21_1 = vaddq_f32(v0_5, v21_3)
        v0 = vaddq_f32(v0_5, v22_1)
        *x23_2 = v1
        x23_2[1] = v2
        x23_2[2] = v3
        x23_2[3] = v4
        x23_2[4] = v5_1
        x23_2[5] = v6_2
        x23_2[6] = v7_1
        x23_2[7] = v16_1
        x23_2[8] = v17_1
        x23_2[9] = v18_1
        x23_2[0xa] = v19_1
        x23_2[0xb] = v20_1
        x23_2[0xc] = v21_1
        x23_2[0xd] = v0
        
        do
            v0.q = *(x21 + k_1)
            v1.q = *(x22_1 + k_1)
            v1 = vcgt_f32(v0, v1)
            
            if ((v1.d & 1) != 0)
                *(x22_1 + k_1) = v0.d
            
            if ((v1:4.d & 1) != 0)
                *(x22_1 + k_1 + 4) = v0:4.d
            
            k_1 += 8
        while (k_1 != 0xe0)
        
        i_2 = i
        j_2 += 1
        x22_1 = &(*x22_1)[0xe]
        x21 += 0xe0
    while (j_2 != 8)
    
    int128_t (* x8_6)[0x70] = &var_7f90
    int64_t j_3 = 1
    void* x9_14 = var_7fc8_1
    
    do
        for (int64_t k_2 = 0; k_2 != 0xe0; k_2 += 8)
            void* x12_1 = x8_6 + k_2
            v0.q = *x12_1
            v1.q = *(x12_1 + 0xe0)
            v1 = vcgt_f32(v1, v0)
            
            if ((v1.d & 1) != 0)
                *(x12_1 + 0xe0) = v0.d
            
            if ((v1:4.d & 1) != 0)
                *(x8_6 + k_2 + 0xe4) = v0:4.d
        
        for (int64_t k_3 = 0; k_3 != 0xe0; k_3 += 8)
            void* x12_6 = x9_14 + k_3
            v0.q = *(x8_6 + k_3 + 0xe0)
            v1.q = *(x12_6 + 0xe0)
            v1 = vcgt_f32(v1, v0)
            
            if ((v1.d & 1) != 0)
                *(x12_6 + 0xe0) = v0.d
            
            if ((v1:4.d & 1) != 0)
                *(x9_14 + k_3 + 0xe4) = v0:4.d
        
        j_3 += 1
        x8_6 = &(*x8_6)[0xe]
        x9_14 += 0xe0
    while (j_3 != 8)
    
    x13 = var_7ff8
    i = i_2 + 1
    x28 += 4
    x12 += 0x10
    x21 = var_7fc8_1 + 0x700
while (i != 0x11)

v0.d = arg3
v0.q = fconvert.d(v0.d)
double v9 = fconvert.d(1.0)
int64_t var_8088
__builtin_memcpy(&var_8088, 
    "\x00\x00\x00\x80\xf6\xdc\x27\xc0\x00\x00\x00\xa0\x42\x2e\xd6\x3f\x80\x38\x65\xc9\x68\x8a\x10\x40", 
    0x18)
double v11 = v9 f/ v0.q
double var_8060 = 2.885390043258667
v0.d = 0xc3480000
uint64_t x13_4 = zx.q(arg2)
int64_t i_1 = 0
uint32_t x22_2 = -1
v12.q = fconvert.d(0.125)
var_8030.d = 0xc3480000
int64_t k_19 = x13_4 & 0xfffffff8
v0.d = 0x4479c000
v0:4.d = 0x4479c000
v0:8.d = 0x4479c000
v0:0xc.d = 0x4479c000
int64_t var_7fb0_2 = 0x4005fdb042ca7100

do
    int64_t x0_10
    int64_t x1_9
    int64_t x2_1
    int64_t x3_1
    x0_10, x1_9, x2_1, x3_1 = malloc(0x40)
    double v0_6 = float.d(sx.q(i_1.d))
    double var_7fc8_2 = v0_6 * fconvert.d(0.5)
    double var_8080
    double var_8078
    double x = vfma_f64(var_8078, v0_6, var_8080)
    *(result + (i_1 << 3)) = x0_10
    double v10
    v10.d = arg3
    uint32_t temp0_9 = vcvtmd_s32_f64(exp(x0_10, x1_9, x2_1, x3_1, x) * v11)
    double v0_7
    v0_7.d = float.s(temp0_9)
    v0_7.d = vfma_f32(fconvert.s(1f), v0_7.d, v10.d)
    double v0_8 = log(fconvert.d(v0_7.d))
    v13.q = var_8088
    uint32_t temp0_12 = vcvtpd_s32_f64(vfma_f64(v13.q, v0_8, var_8060))
    v0_8.d = float.s(temp0_9 + 1)
    v0_8.d = v0_8.d f* v10.d
    double v0_9 = log(fconvert.d(v0_8.d))
    uint32_t x10_9
    
    if (i_1 s< sx.q(temp0_12))
        x10_9 = i_1.d
    else
        x10_9 = temp0_12
    
    uint32_t temp0_14 = vcvtmd_s32_f64(vfma_f64(v13.q, v0_9, var_8060))
    uint32_t x9_16
    
    x9_16 = temp0_14 s< 0x10 ? temp0_14 : 0x10
    
    v13.q = var_7fc8_2
    var_8010.d = x10_9 & not.d(x10_9 s>> 0x1f)
    uint32_t x8_13
    
    if (x22_2 s> not.d(temp0_12))
        x8_13 = x22_2
    else
        x8_13 = not.d(temp0_12)
    
    uint32_t x8_14 = not.d(x8_13)
    int64_t j_4 = 0
    var_8020.q = zx.q(x8_14) & zx.q(not.d(x8_14 s>> 0x1f))
    int64_t x8_16 = sx.q(x9_16)
    uint128_t var_7ff0
    var_7ff0.q = i_1 + 1
    
    do
        int64_t x0_11
        int64_t x1_10
        int64_t x2_2
        int64_t x3_2
        uint128_t v0_10
        uint128_t v1_7
        x0_11, x1_10, x2_2, x3_2, v0_10, v1_7 = malloc(0xe8)
        *(x0_10 + (j_4 << 3)) = x0_11
        
        if (arg2 s>= 1)
            int64_t k_13 = k_19
            void* x9_17 = x27 + 0x10
            int64_t k_22 = 0
            
            if (arg2 u>= 8)
                int64_t k_4
                
                do
                    *(x9_17 - 0x10) = v0
                    *x9_17 = v0
                    k_4 = k_13
                    k_13 -= 8
                    x9_17 += 0x20
                while (k_4 != 8)
                k_22 = k_19
            
            if (arg2 u< 8 || k_22 != x13_4)
                void* x8_19 = x27 + (k_22 << 2)
                int64_t k_14 = x13_4 - k_22
                int64_t k_5
                
                do
                    k_5 = k_14
                    k_14 -= 1
                    *x8_19 = 0x4479c000
                    x8_19 += 4
                while (k_5 != 1)
        
        int64_t x25_1 = var_8020.q
        uint128_t var_7fe0
        var_7fe0.q = x0_11
        
        if (var_8010.d s<= x8_16.d)
            bool cond:17_1
            
            do
                v0_10.q = float.d(sx.q(x25_1.d))
                v1_7.q = fconvert.d(0.5)
                int64_t k_6 = 0
                uint64_t x28_2 = 0
                v13.q = v0_10.q f* v1_7.q
                float128 v2_4
                int128_t v3_6
                
                do
                    v0_10.q = float.d(sx.q(k_6.d))
                    v0_10.q = vfma_f64(v13.q, v0_10.q, v12.q)
                    v10 = v0_10.q f* 0.69314700365066528
                    v0_10.q = v10 + 2.7055496595113482
                    int64_t x0_12
                    int64_t x1_11
                    int64_t x2_3
                    int64_t x3_3
                    double v0_11
                    v0_11, x0_12, x1_11, x2_3, x3_3 = exp(x0_11, x1_10, x2_2, x3_2, v0_10.q)
                    uint32_t temp0_16 = vcvtd_s32_f64(v0_11 * v11)
                    v0_10, x0_11, x1_10, x2_2, x3_2, v1_7, v2_4, v3_6 =
                        exp(x0_12, x1_11, x2_3, x3_3, v10 + 2.7921930349676813)
                    int32_t x8_21 = temp0_16 & not.d(temp0_16 s>> 0x1f)
                    v0_10.q = vfma_f64(v9, v0_10.q, v11)
                    uint32_t temp0_18 = vcvtd_s32_f64(v0_10.q)
                    int32_t x8_22
                    
                    x8_22 = x8_21 s> arg2 ? arg2 : x8_21
                    
                    int32_t x9_21 = temp0_18 & not.d(temp0_18 s>> 0x1f)
                    
                    if (x8_22 s< x28_2.d)
                        x28_2 = zx.q(x8_22)
                    else
                        x28_2 = zx.q(x28_2.d)
                    
                    int32_t x8_23
                    
                    x8_23 = x9_21 s> arg2 ? arg2 : x9_21
                    
                    if (x28_2.d s< x8_23 && x28_2.d s< arg2)
                        int64_t x11_2 = sx.q(x28_2.d)
                        int64_t x8_24 = sx.q(x8_23)
                        int64_t x10_10 = x11_2 - x26
                        int64_t x12_12 = x11_2 - x8_24
                        v0_10.d = *(&var_7890 + x25_1 * 0x700 + j_4 * 0xe0 + (k_6 << 2))
                        int64_t x9_24
                        
                        x9_24 = x10_10 u> x12_12 ? x10_10 : x12_12
                        
                        int64_t x9_25 = neg.q(x9_24)
                        x28_2 = x11_2
                        
                        if (x9_25 u< 4)
                        label_108a1f4:
                            
                            do
                                v1_7.d = *(x27 + (x28_2 << 2))
                                
                                if (not(v1_7.d f<= v0_10.d))
                                    *(x27 + (x28_2 << 2)) = v0_10.d
                                
                                x28_2 += 1
                                
                                if (x28_2 s>= x8_24)
                                    break
                            while (x28_2 s< x26)
                        else
                            int64_t x10_11 = x9_25 & 0xfffffffffffffffc
                            v1_7 = vdupq_laneq_s32(v0_10, 0)
                            x28_2 = x10_11 + x11_2
                            void* x11_3 = x27 + (x11_2 << 2)
                            int64_t x12_13 = x10_11
                            int64_t temp6_1
                            
                            do
                                v2_4 = vmovn_s32(vcgtq_f32(*x11_3, v1_7))
                                
                                if ((zx.d(v2_4.w) & 1) == 0)
                                    if ((zx.d(v2_4:2.w) & 1) != 0)
                                        goto label_108a174
                                    
                                    goto label_108a1b0
                                
                                *x11_3 = v0_10.d
                                
                                if ((zx.d(v2_4:2.w) & 1) != 0)
                                label_108a174:
                                    *(x11_3 + 4) = v0_10.d
                                    
                                    if ((zx.d(v2_4:4.w) & 1) == 0)
                                        goto label_108a1b8
                                    
                                    goto label_108a180
                                
                            label_108a1b0:
                                
                                if ((zx.d(v2_4:4.w) & 1) != 0)
                                label_108a180:
                                    *(x11_3 + 8) = v0_10.d
                                    
                                    if ((zx.d(v2_4:6.w) & 1) != 0)
                                        *(x11_3 + 0xc) = v0_10.d
                                else
                                label_108a1b8:
                                    
                                    if ((zx.d(v2_4:6.w) & 1) != 0)
                                        *(x11_3 + 0xc) = v0_10.d
                                
                                temp6_1 = x12_13
                                x12_13 -= 4
                                x11_3 += 0x10
                            while (temp6_1 != 4)
                            
                            if (x10_11 != x9_25)
                                goto label_108a1f4
                    
                    k_6 += 1
                while (k_6 != 0x38)
                
                v13.q = var_7fc8_2
                
                if (x28_2.d s< arg2)
                    v0_10.d = *(&var_7890 + x25_1 * 0x700 + j_4 * 0xe0 + 0xdc)
                    int64_t x11_4 = sx.q(x28_2.d)
                    int64_t x8_27 = x26 - x11_4
                    int64_t x9_26 = x11_4
                    int64_t k_20
                    
                    if (x8_27 u> 3)
                        k_20 = x8_27 & 0xfffffffffffffffc
                        v1_7 = vdup_laneq_s32(v0_10, 0)
                        x9_26 = k_20 + x11_4
                        void* x11_5 = x27 + 8 + (x11_4 << 2)
                        int64_t k_17 = k_20
                        int64_t k_7
                        
                        do
                            v3_6.q = *(x11_5 - 8)
                            v2_4.q = *x11_5
                            v3_6 = vcgt_f32(v3_6, v1_7)
                            
                            if ((v3_6.d & 1) != 0)
                                *(x11_5 - 8) = v0_10.d
                            
                            if ((v3_6:4.d & 1) != 0)
                                *(x11_5 - 4) = v0_10.d
                            
                            v2_4 = vcgt_f32(v2_4, v1_7)
                            
                            if ((v2_4.d & 1) != 0)
                                *x11_5 = v0_10.d
                            
                            if ((v2_4:4.d & 1) != 0)
                                *(x11_5 + 4) = v0_10.d
                            
                            k_7 = k_17
                            k_17 -= 4
                            x11_5 += 0x10
                        while (k_7 != 4)
                    
                    if (x8_27 u<= 3 || x8_27 != k_20)
                        void* x8_28 = x27 + (x9_26 << 2)
                        int64_t k_15 = x26 - x9_26
                        int64_t k_8
                        
                        do
                            v1_7.d = *x8_28
                            
                            if (not(v1_7.d f<= v0_10.d))
                                *x8_28 = v0_10.d
                            
                            k_8 = k_15
                            k_15 -= 1
                            x8_28 += 4
                        while (k_8 != 1)
                
                cond:17_1 = x25_1 s< x8_16
                x25_1 += 1
            while (cond:17_1)
        
        i_1 = var_7ff0.q
        
        if (i_1 u<= 0x10)
            int64_t k_9 = 0
            uint64_t x25_2 = 0
            float128 v2_6
            int128_t v3_7
            
            do
                v0_10.q = float.d(sx.q(k_9.d))
                v0_10.q = vfma_f64(v13.q, v0_10.q, v12.q)
                v10 = v0_10.q f* 0.69314700365066528
                v0_10.q = v10 + 2.7055496595113482
                int64_t x0_13
                int64_t x1_12
                int64_t x2_4
                int64_t x3_4
                double v0_12
                v0_12, x0_13, x1_12, x2_4, x3_4 = exp(x0_11, x1_10, x2_2, x3_2, v0_10.q)
                uint32_t temp0_20 = vcvtd_s32_f64(v0_12 * v11)
                v0_10, x0_11, x1_10, x2_2, x3_2, v1_7, v2_6, v3_7 =
                    exp(x0_13, x1_12, x2_4, x3_4, v10 + 2.7921930349676813)
                int32_t x8_30 = temp0_20 & not.d(temp0_20 s>> 0x1f)
                v0_10.q = vfma_f64(v9, v0_10.q, v11)
                uint32_t temp0_22 = vcvtd_s32_f64(v0_10.q)
                int32_t x8_31
                
                x8_31 = x8_30 s> arg2 ? arg2 : x8_30
                
                int32_t x9_28 = temp0_22 & not.d(temp0_22 s>> 0x1f)
                
                if (x8_31 s< x25_2.d)
                    x25_2 = zx.q(x8_31)
                else
                    x25_2 = zx.q(x25_2.d)
                
                int32_t x8_32
                
                x8_32 = x9_28 s> arg2 ? arg2 : x9_28
                
                if (x25_2.d s< x8_32 && x25_2.d s< arg2)
                    int64_t x11_6 = sx.q(x25_2.d)
                    int64_t x8_33 = sx.q(x8_32)
                    int64_t x10_12 = x11_6 - x26
                    int64_t x12_15 = x11_6 - x8_33
                    v0_10.d = *(&var_7890 + i_1 * 0x700 + j_4 * 0xe0 + (k_9 << 2))
                    int64_t x9_31
                    
                    x9_31 = x10_12 u> x12_15 ? x10_12 : x12_15
                    
                    int64_t x9_32 = neg.q(x9_31)
                    x25_2 = x11_6
                    
                    if (x9_32 u< 4)
                    label_108a424:
                        
                        do
                            v1_7.d = *(x27 + (x25_2 << 2))
                            
                            if (not(v1_7.d f<= v0_10.d))
                                *(x27 + (x25_2 << 2)) = v0_10.d
                            
                            x25_2 += 1
                            
                            if (x25_2 s>= x8_33)
                                break
                        while (x25_2 s< x26)
                    else
                        int64_t x10_13 = x9_32 & 0xfffffffffffffffc
                        v1_7 = vdupq_laneq_s32(v0_10, 0)
                        x25_2 = x10_13 + x11_6
                        void* x11_7 = x27 + (x11_6 << 2)
                        int64_t x12_16 = x10_13
                        int64_t temp7_1
                        
                        do
                            v2_6 = vmovn_s32(vcgtq_f32(*x11_7, v1_7))
                            
                            if ((zx.d(v2_6.w) & 1) == 0)
                                if ((zx.d(v2_6:2.w) & 1) != 0)
                                    goto label_108a3a4
                                
                                goto label_108a3e0
                            
                            *x11_7 = v0_10.d
                            
                            if ((zx.d(v2_6:2.w) & 1) != 0)
                            label_108a3a4:
                                *(x11_7 + 4) = v0_10.d
                                
                                if ((zx.d(v2_6:4.w) & 1) == 0)
                                    goto label_108a3e8
                                
                                goto label_108a3b0
                            
                        label_108a3e0:
                            
                            if ((zx.d(v2_6:4.w) & 1) != 0)
                            label_108a3b0:
                                *(x11_7 + 8) = v0_10.d
                                
                                if ((zx.d(v2_6:6.w) & 1) != 0)
                                    *(x11_7 + 0xc) = v0_10.d
                            else
                            label_108a3e8:
                                
                                if ((zx.d(v2_6:6.w) & 1) != 0)
                                    *(x11_7 + 0xc) = v0_10.d
                            
                            temp7_1 = x12_16
                            x12_16 -= 4
                            x11_7 += 0x10
                        while (temp7_1 != 4)
                        
                        if (x10_13 != x9_32)
                            goto label_108a424
                
                k_9 += 1
            while (k_9 != 0x38)
            
            if (x25_2.d s< arg2)
                v0_10.d = *(&var_7890 + i_1 * 0x700 + j_4 * 0xe0 + 0xdc)
                int64_t x11_8 = sx.q(x25_2.d)
                int64_t x8_36 = x26 - x11_8
                int64_t x9_33 = x11_8
                int64_t k_21
                
                if (x8_36 u> 3)
                    k_21 = x8_36 & 0xfffffffffffffffc
                    v1_7 = vdup_laneq_s32(v0_10, 0)
                    x9_33 = k_21 + x11_8
                    void* x11_9 = x27 + 8 + (x11_8 << 2)
                    int64_t k_18 = k_21
                    int64_t k_10
                    
                    do
                        v3_7.q = *(x11_9 - 8)
                        v2_6.q = *x11_9
                        v3_7 = vcgt_f32(v3_7, v1_7)
                        
                        if ((v3_7.d & 1) != 0)
                            *(x11_9 - 8) = v0_10.d
                        
                        if ((v3_7:4.d & 1) != 0)
                            *(x11_9 - 4) = v0_10.d
                        
                        v2_6 = vcgt_f32(v2_6, v1_7)
                        
                        if ((v2_6.d & 1) != 0)
                            *x11_9 = v0_10.d
                        
                        if ((v2_6:4.d & 1) != 0)
                            *(x11_9 + 4) = v0_10.d
                        
                        k_10 = k_18
                        k_18 -= 4
                        x11_9 += 0x10
                    while (k_10 != 4)
                
                if (x8_36 u<= 3 || x8_36 != k_21)
                    void* x8_37 = x27 + (x9_33 << 2)
                    int64_t k_16 = x26 - x9_33
                    int64_t k_11
                    
                    do
                        v1_7.d = *x8_37
                        
                        if (not(v1_7.d f<= v0_10.d))
                            *x8_37 = v0_10.d
                        
                        k_11 = k_16
                        k_16 -= 1
                        x8_37 += 4
                    while (k_11 != 1)
        
        int64_t k_12 = 0
        int32_t* x25_3 = var_7fe0.q + 8
        
        do
            v1_7.q = var_7fb0_2
            v0_10.q = float.d(sx.q(k_12.d))
            v0_10.q = vfma_f64(v13.q, v0_10.q, v12.q)
            v0_10.q = vfma_f64(v1_7.q, v0_10.q, 0.69314700365066528)
            v0_10, x0_11, x1_10, x2_2, x3_2, v1_7 = exp(x0_11, x1_10, x2_2, x3_2, v0_10.q)
            v0_10.q = v0_10.q f* v11
            uint32_t temp0_25 = vcvtd_s32_f64(v0_10.q)
            int32_t x8_40
            
            if ((temp0_25 & 0x80000000) != 0 || temp0_25 s>= arg2)
                x8_40 = -0x3b864000
            else
                x8_40 = *(x27 + (sx.q(temp0_25) << 2))
            
            k_12 += 1
            *x25_3 = x8_40
            x25_3 = &x25_3[1]
        while (k_12 != 0x38)
        
        int32_t* x10_14 = var_7fe0.q
        v1_7.d = var_8030.d
        v0_10.d = x10_14[2]
        bool cond:14_1 = v0_10.d f> v1_7.d
        v0_10.d = 0f
        
        if (not(cond:14_1))
            v0_10.d = x10_14[3]
            bool cond:19_1 = v0_10.d f> v1_7.d
            v0_10.d = fconvert.s(1f)
            
            if (not(cond:19_1))
                v0_10.d = x10_14[4]
                bool cond:22_1 = v0_10.d f> v1_7.d
                v0_10.d = fconvert.s(2f)
                
                if (not(cond:22_1))
                    v0_10.d = x10_14[5]
                    bool cond:26_1 = v0_10.d f> v1_7.d
                    v0_10.d = fconvert.s(3f)
                    
                    if (not(cond:26_1))
                        v0_10.d = x10_14[6]
                        bool cond:32_1 = v0_10.d f> v1_7.d
                        v0_10.d = fconvert.s(4f)
                        
                        if (not(cond:32_1))
                            v0_10.d = x10_14[7]
                            bool cond:33_1 = v0_10.d f> v1_7.d
                            v0_10.d = fconvert.s(5f)
                            
                            if (not(cond:33_1))
                                v0_10.d = x10_14[8]
                                bool cond:36_1 = v0_10.d f> v1_7.d
                                v0_10.d = fconvert.s(6f)
                                
                                if (not(cond:36_1))
                                    v0_10.d = x10_14[9]
                                    bool cond:39_1 = v0_10.d f> v1_7.d
                                    v0_10.d = fconvert.s(7f)
                                    
                                    if (not(cond:39_1))
                                        v0_10.d = x10_14[0xa]
                                        bool cond:40_1 = v0_10.d f> v1_7.d
                                        v0_10.d = fconvert.s(8f)
                                        
                                        if (not(cond:40_1))
                                            v0_10.d = x10_14[0xb]
                                            bool cond:41_1 = v0_10.d f> v1_7.d
                                            v0_10.d = fconvert.s(9f)
                                            
                                            if (not(cond:41_1))
                                                v0_10.d = x10_14[0xc]
                                                bool cond:42_1 = v0_10.d f> v1_7.d
                                                v0_10.d = fconvert.s(10f)
                                                
                                                if (not(cond:42_1))
                                                    v0_10.d = x10_14[0xd]
                                                    bool cond:43_1 = v0_10.d f> v1_7.d
                                                    v0_10.d = fconvert.s(11f)
                                                    
                                                    if (not(cond:43_1))
                                                        v0_10.d = x10_14[0xe]
                                                        bool cond:44_1 = v0_10.d f> v1_7.d
                                                        v0_10.d = fconvert.s(12f)
                                                        
                                                        if (not(cond:44_1))
                                                            v0_10.d = x10_14[0xf]
                                                            bool cond:45_1 = v0_10.d f> v1_7.d
                                                            v0_10.d = fconvert.s(13f)
                                                            
                                                            if (not(cond:45_1))
                                                                v0_10.d = x10_14[0x10]
                                                                bool cond:46_1 = v0_10.d f> v1_7.d
                                                                v0_10.d = fconvert.s(14f)
                                                                
                                                                if (not(cond:46_1))
                                                                    v0_10.d = x10_14[0x11]
                                                                    bool cond:47_1 = v0_10.d f> v1_7.d
                                                                    v0_10.d = fconvert.s(15f)
                                                                    
                                                                    if (not(cond:47_1))
                                                                        v0_10.d = fconvert.s(16f)
        
        int64_t x8_41 = 0x39
        *x10_14 = v0_10.d
        int32_t x8_43
        
        while (true)
            v0_10.d = x10_14[x8_41]
            
            if (v0_10.d f> v1_7.d)
                x8_43 = x8_41.d - 2
                break
            
            int64_t x9_34 = x8_41 - 1
            bool cond:21_1 = x8_41 - 2 u> 0x12
            x8_41 = x9_34
            
            if (not(cond:21_1))
                x8_43 = x9_34.d - 2
                break
        
        j_4 += 1
        v0_10.d = float.s(x8_43)
        x10_14[1] = v0_10.d
    while (j_4 != 8)
    
    x22_2 -= 1
while (i_1 != 0x11)

if (*(var_8090 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
