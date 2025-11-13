// 函数: _vp_psy_init
// 地址: 0x1089078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = zx.q(arg4)
memset(arg1, 0, 0x60)
int32_t x19 = *arg3
double v0
v0.d = float.s(x19)
v0.d = v0.d f* fconvert.s(8f)
arg1[0x12] = x19
int128_t v8
v8.d = float.s(sx.d(arg5))
double v11
v11.d = fconvert.s(0.25f)
uint64_t x20 =
    vcvtd_s64_f64(vrndx_f64(log(fconvert.d(v0.d)) * 1.4426950408889634) + fconvert.d(-1.0))
double v0_1
v0_1.d = v8.d f* v11.d
double v9 = fconvert.d(0.5)
double v10 = float.d(sx.q(x24.d))
*(arg1 + 0x40) = x20
double v0_2
int128_t v1_1
double v2_1
int128_t v3
v0_2, v1_1, v2_1, v3 = log(fconvert.d(v0_1.d) * v9 / v10)
v2_1.d = float.s(x24.d)
v2_1.d = v2_1.d f+ v11.d
v2_1.d = v2_1.d f* v8.d
v1_1.q = float.d(sx.q(x19))
v3.q = float.d(sx.q(1 << (x20.d + 1)))
double temp0_1 = vfma_f64(-5.9657840728759766, v0_2, 1.4426950216293335)
unimplemented  {fnmsub d0, d0, d3, d1}
uint64_t x19_1 = vcvtd_s64_f64(temp0_1)
*(arg1 + 0x38) = x19_1
int64_t bytes = (x24 & 0xffffffff) << 0x20 s>> 0x1e
uint64_t x19_2 = x24
arg1[0x13] = vcvtd_s64_f64(vfma_f64(v9, 
    vfma_f64(-5.9657840728759766, log(fconvert.d(v2_1.d) * v9 / v10), 1.4426950216293335), v3.q))
    - x19_1.d + 1
int64_t x0_1 = malloc(bytes)
int64_t bytes_1 = (x24 & 0xffffffff) << 0x20 s>> 0x1d
*(arg1 + 0x20) = x0_1
uint128_t* x0_3 = malloc(bytes_1)
*(arg1 + 0x28) = x0_3
int64_t x0_5
int64_t x1
int64_t x2
int64_t x3
uint128_t v0_4
int128_t v6
x0_5, x1, x2, x3, v0_4, v6 = malloc(bytes_1)
v0_4.d = 0f
int64_t var_e0 = x0_5
*(arg1 + 0x30) = x0_5
*(arg1 + 8) = arg2
*arg1 = x19_2.d
*(arg1 + 0x50) = arg5
arg1[0x16] = 0x3f800000

if (arg5 s< 0x6590)
    arg1[0x16] = v0_4.d
else if (arg5 s< 0x9470)
    v0_4.d = 0x3f70a3d7
    arg1[0x16] = v0_4.d
else if (arg5 s>= 0xb3b1)
    v0_4.d = 0x3fa33333
    arg1[0x16] = v0_4.d

v8.q = v10 + v10
v0_4.q = float.d(arg5)
double var_198 = v0_4.q
double v14 = fconvert.d(1.0) f/ v0_4.q
int64_t x28 = 0
int64_t x23_1 = 0
int64_t x27 = sx.q(x19_2.d)
v6.d = 0x42c80000
v6:4.d = 0x42c80000
v6:8.d = 0x42c80000
v6:0xc.d = 0x42c80000
double v15
v15.d = fconvert.s(4f)
uint128_t var_f0 = data_71b4d0
uint128_t v1_4
float128 v2_2
uint128_t v3_1
bool cond:1_1

do
    v0_4.q = float.d(x28 + 1)
    v0_4.q = vfma_f64(2.7488713472395148, v0_4.q, 0.08664337545633316)
    float128 v5_1
    float128 v6_1
    v0_4, x0_5, x1, x2, x3, v1_4, v2_2, v3_1, v5_1, v6_1 = exp(x0_5, x1, x2, x3, v0_4.q)
    v0_4.q = v8.q f* v0_4.q
    v0_4.q = v0_4.q f* v14
    v0_4.q = vrndx_f64(v0_4.q)
    int64_t x8_5 = sx.q(vcvtd_s32_f64(v0_4.q))
    int64_t x9_1 = x23_1 - x8_5
    
    if (x23_1 s< x8_5)
        int64_t x10_1 = x23_1 - x27
        
        if (x23_1 s< x27)
            v1_4.d = *(&data_871dfc + (x28 << 2))
            v0_4.d = *(&data_871dfc + ((x28 + 1) << 2))
            v6_1 = v6
            int64_t x9_2
            
            x9_2 = x10_1 u> x9_1 ? x10_1 : x9_1
            
            v2_2.d = float.s(sx.d(x8_5 - x23_1))
            int64_t x9_3 = neg.q(x9_2)
            v0_4.d = v0_4.d f- v1_4.d
            v0_4.d = v0_4.d f/ v2_2.d
            int64_t x10_2
            
            if (x9_3 u>= 8)
                int64_t i_7 = x9_3 & 0xfffffffffffffff8
                v2_2.d = v0_4.d f* v15.d
                x10_2 = x23_1 + i_7
                v3_1 = vfmaq_n_f32(vdupq_laneq_s32(v1_4, 0), var_f0, 0)
                v2_2 = vdupq_laneq_s32(v2_2, 0)
                v1_4.d = vfma_f32(v1_4.d, v0_4.d, float.s(sx.d(i_7)))
                void* x12_1 = x0_1 + 0x10 + (x23_1 << 2)
                int64_t i_5 = i_7
                int64_t i
                
                do
                    float128 v4_2 = vaddq_f32(v3_1, v2_2)
                    float128 v3_3 = vaddq_f32(v3_1, v6_1)
                    float128 v5_2 = vaddq_f32(v4_2, v6_1)
                    i = i_5
                    i_5 -= 8
                    *(x12_1 - 0x10) = v3_3
                    *x12_1 = v5_2
                    v3_1 = vaddq_f32(v4_2, v2_2)
                    x12_1 += 0x20
                while (i != 8)
                x23_1 = x10_2
                
                if (i_7 != x9_3)
                    goto label_1089360
            else
                x10_2 = x23_1
            label_1089360:
                x23_1 = x10_2
                
                do
                    v2_2.d = v1_4.d f+ 100f
                    *(x0_1 + (x23_1 << 2)) = v2_2.d
                    x23_1 += 1
                    
                    if (x23_1 s>= x8_5)
                        break
                    
                    v1_4.d = v1_4.d f+ v0_4.d
                while (x23_1 s< x27)
    
    cond:1_1 = x28 != 0x56
    x28 += 1
while (cond:1_1)

if (x23_1 s< x27)
    void* x8_6 = x0_1 + (x23_1 << 2)
    int32_t x9_4 = *(x8_6 - 4)
    int64_t i_4 = x27 - x23_1
    int64_t i_1
    
    do
        i_1 = i_4
        i_4 -= 1
        *x8_6 = x9_4
        x8_6 += 4
    while (i_1 != 1)

int32_t* x25_3

if (x19_2.d s< 1)
    x25_3 = arg1
    v3_1.q = var_198 * fconvert.d(0.5)
else
    int64_t x28_1 = sx.q(*(arg2 + 0x78))
    int64_t i_2 = 0
    int64_t x25_2 = arg5 s/ sx.q(x19_2.d << 1)
    int64_t x22_1 = -0x63
    int64_t x23_2 = 1
    uint64_t var_1a8_1 = x19_2
    
    do
        int64_t x19_3 = x25_2 * i_2
        v8.d = float.s(sx.d(x19_3))
        v0_4.d = v8.d f* 0.000739999989f
        v0_4.q = fconvert.d(v0_4.d)
        v9 = atan(v0_4.q) * 13.100000381469727
        double v0_5
        v0_5.d = float.s(sx.d(x19_3 * x19_3))
        v0_5.d = v0_5.d f* 1.84999998e-08f
        v0_4, v1_4, v2_2, v3_1 = atan(fconvert.d(v0_5.d))
        v1_4.d = v8.d f* 9.99999975e-05f
        v0_4.q = vfma_f64(v9, v0_4.q, 2.2400000095367432)
        v1_4.q = fconvert.d(v1_4.d)
        v0_4.q = v0_4.q f+ v1_4.q
        v1_4.d = fconvert.s(v0_4.q)
        int128_t var_d0
        var_d0.d = v1_4.d
        
        if (x22_1 + x28_1 s< i_2)
            v0_4.d = *(arg2 + 0x70)
            int64_t x19_4 = x25_2 * x22_1
            v0_4.d = v1_4.d f- v0_4.d
            v11 = fconvert.d(v0_4.d)
            
            do
                v9.d = float.s(sx.d(x19_4))
                v0_4.d = v9.d f* 0.000739999989f
                v0_4.q = fconvert.d(v0_4.d)
                v8 = atan(v0_4.q)
                int128_t v0_6
                v0_6.d = float.s(sx.d(x19_4 * x19_4))
                v0_6.d = v0_6.d f* 1.84999998e-08f
                v0_6.q = fconvert.d(v0_6.d)
                v0_4, v1_4, v2_2, v3_1 = atan(v0_6.q)
                v1_4.d = v9.d f* 9.99999975e-05f
                v1_4.q = fconvert.d(v1_4.d)
                v1_4.q = vfma_f64(v1_4.q, v8.q, 13.100000381469727)
                v0_4.q = vfma_f64(v1_4.q, v0_4.q, 2.2400000095367432)
                
                if (v0_4.q f>= v11)
                    break
                
                x22_1 += 1
                x19_4 += x25_2
            while (x28_1 + x22_1 s< i_2)
        
        int64_t x8_15
        
        if (x23_2 s<= x27)
            v0_4 = v3
            v11.d = var_d0.d
            int64_t x24_2 = x25_2 * x23_2
            int64_t x19_5 = i_2 + sx.q(*(arg2 + 0x7c))
            bool cond:11_1
            
            do
                if (x23_2 s>= x19_5)
                    v9.d = float.s(sx.d(x24_2))
                    v0_4.d = v9.d f* 0.000739999989f
                    v0_4.q = fconvert.d(v0_4.d)
                    v8 = atan(v0_4.q)
                    int128_t v0_7
                    v0_7.d = float.s(sx.d(x24_2 * x24_2))
                    v0_7.d = v0_7.d f* 1.84999998e-08f
                    v0_7.q = fconvert.d(v0_7.d)
                    v0_4, v1_4, v2_2, v3_1 = atan(v0_7.q)
                    v2_2.d = *(arg2 + 0x74)
                    v1_4.d = v9.d f* 9.99999975e-05f
                    v1_4.q = fconvert.d(v1_4.d)
                    v1_4.q = vfma_f64(v1_4.q, v8.q, 13.100000381469727)
                    v0_4.q = vfma_f64(v1_4.q, v0_4.q, 2.2400000095367432)
                    v1_4.d = v2_2.d f+ v11.d
                    v1_4.q = fconvert.d(v1_4.d)
                    bool cond:12_1 = v0_4.q f>= v1_4.q
                    v0_4 = v3
                    
                    if (cond:12_1)
                        goto label_1089550
                
                x8_15 = x23_2 + 1
                cond:11_1 = x23_2 s< x27
                x24_2 += x25_2
                x23_2 = x8_15
            while (cond:11_1)
        else
            v0_4 = v3
        label_1089550:
            x8_15 = x23_2
        
        x23_2 = x8_15
        *(var_e0 + (i_2 << 3)) = x8_15 + (x22_1 << 0x10) - 0x10001
        i_2 += 1
    while (i_2 != x27)
    
    x19_2 = var_1a8_1
    v11 = fconvert.d(0.5)
    
    if (x19_2.d s<= 0)
        x25_3 = arg1
        v3_1.q = var_198 * v11
    else
        x25_3 = arg1
        int64_t i_8 = 0
        v3_1.q = var_198 * v11
        v1_4.q = fconvert.d(1.0) / v10
        v9.d = fconvert.s(0.25f)
        uint128_t var_110_1 = v1_4
        uint128_t var_100_1 = v3_1
        
        if (x19_2.d == 1)
        label_10896dc:
            
            do
                v0_4.d = float.s(sx.d(i_8))
                v0_4.d = v0_4.d f+ v9.d
                v0_4.q = fconvert.d(v0_4.d)
                v0_4.q = v3_1.q f* v0_4.q
                v0_4.q = v0_4.q f* v1_4.q
                v0_4, v1_4, v2_2, v3_1 = log(v0_4.q)
                v0_4.q = vfma_f64(-5.9657840728759766, v0_4.q, 1.4426950216293335)
                v0_4.q = vfma_f64(v11, v0_4.q, v3.q)
                v1_4 = var_110_1
                v3_1 = var_100_1
                *(x0_3 + (i_8 << 3)) = vcvtd_s64_f64(v0_4.q)
                i_8 += 1
            while (x27 != i_8)
        else
            uint128_t var_140_1 = vdupq_laneq_s64(v0_4, 0)
            v0_4 = data_71a9c0
            uint128_t v2_3 = vdupq_laneq_s64(v3_1, 0)
            uint128_t var_130_1 = vdupq_laneq_s64(v1_4, 0)
            v1_4.q = 0x3ff7154760000000
            v1_4:8.q = 0x3ff7154760000000
            uint128_t var_150_1 = v1_4
            v1_4.q = -0x3fe8230980000000
            v1_4:8.q = -0x3fe8230980000000
            i_8 = x27 & 0xfffffffffffffffe
            uint128_t var_160_1 = v1_4
            v1_4.q = fconvert.d(0.5)
            v1_4:8.q = fconvert.d(0.5)
            v8.d = fconvert.s(0.25f)
            v8:4.d = fconvert.s(0.25f)
            uint128_t var_170_1 = v1_4
            v1_4.q = 2
            v1_4:8.q = 2
            int64_t i_6 = i_8
            uint128_t* x22_2 = x0_3
            int64_t i_3
            
            do
                float128 v0_8 = vcvtq_f64_s64(v0_4)
                float128 v0_13 = vmulq_f64(
                    vmulq_f64(v2_3, vcvt_f64_f32(vadd_f32(vcvt_f32_f64(v0_8, v0_8), v8)), 0), 
                    var_130_1, 0)
                float128 var_f0_1 = v0_13
                v0_13.q = v0_13:8.q
                var_e0.o = log(v0_13.q)
                float128 v0_15
                float128 v1_5
                float128 v2_4
                v0_15, v1_5, v2_4, v3_1 = log(var_f0_1.q)
                i_3 = i_6
                i_6 -= 2
                v0_15:8.q = var_e0.o.q
                *x22_2 = vcvtq_s64_f64(vfmaq_f64(var_170_1, var_140_1, 
                    vfmaq_f64(var_160_1, var_150_1, v0_15)))
                x22_2 = &x22_2[1]
                v0_4 += v1_4
            while (i_3 != 2)
            x19_2 = var_1a8_1
            v1_4 = var_110_1
            v3_1 = var_100_1
            
            if (i_8 != x27)
                goto label_10896dc

v1_4.d = *(arg2 + 0x18)
v2_2.d = *(arg2 + 0x1c)
v0_4.q = v3_1.q f/ v10
v0_4.d = fconvert.s(v0_4.q)
int64_t x0_7
double v10_1
double v11_1
double v14_1
double v15_1
x0_7, v10_1, v11_1, v14_1, v15_1 = sub_108986c(arg2 + 0x24, x19_2.d, v0_4.d, v1_4.q, v2_2.q)
*(x25_3 + 0x10) = x0_7
int64_t* x0_8 = malloc(0x18)
*(x25_3 + 0x18) = x0_8
int32_t* x0_10 = malloc(bytes)
*x0_8 = x0_10
int32_t* x0_12 = malloc(bytes)
x0_8[1] = x0_12
int32_t* result = malloc(bytes)
x0_8[2] = result

if (x19_2.d s>= 1)
    void* x19_6 = *(x25_3 + 8)
    int32_t* result_1 = result
    int64_t x20_3 = 0
    
    do
        double v0_17
        double v1_6
        double v2_5
        double v3_4
        v0_17, result, v1_6, v2_5, v3_4 = log((float.d(x20_3) + v11_1) * v14_1 * v11_1 / v10_1)
        v0_17.d = fconvert.s(vfma_f64(-11.931568145751953, v0_17, 2.885390043258667))
        v0_17.d = vmaxnm_f32(v0_17.d, 0f)
        v0_17.d = vminnm_f32(v0_17.d, fconvert.s(16f))
        uint32_t temp0_18 = vcvts_s32_f32(v0_17.d)
        v1_6.d = float.s(temp0_18)
        int64_t x10_5 = zx.q(temp0_18) << 0x20 s>> 0x1e
        v3_4.d = *(x19_6 + 0x84 + x10_5 + 4)
        v2_5.d = *(x19_6 + 0x84 + x10_5)
        v0_17.d = v0_17.d f- v1_6.d
        v3_4.d = v3_4.d f* v0_17.d
        v1_6 = v15_1 - fconvert.d(v0_17.d)
        v2_5.d = fconvert.s(vfma_f64(fconvert.d(v3_4.d), v1_6, fconvert.d(v2_5.d)))
        x0_10[x20_3] = v2_5.d
        v3_4.d = *(x19_6 + 0xc8 + x10_5 + 4)
        v2_5.d = *(x19_6 + 0xc8 + x10_5)
        x20_3 += 1
        v3_4.d = v3_4.d f* v0_17.d
        v2_5.d = fconvert.s(vfma_f64(fconvert.d(v3_4.d), v1_6, fconvert.d(v2_5.d)))
        x0_12[x20_3] = v2_5.d
        v3_4.d = *(x19_6 + 0x10c + x10_5 + 4)
        v2_5.d = *(x19_6 + 0x10c + x10_5)
        v0_17.d = v3_4.d f* v0_17.d
        v0_17.d = fconvert.s(vfma_f64(fconvert.d(v0_17.d), v1_6, fconvert.d(v2_5.d)))
        result_1[x20_3] = v0_17.d
    while (x27 != x20_3)

return result
