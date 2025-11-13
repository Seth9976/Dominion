// 函数: mdct_init
// 地址: 0x1087428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v11
double var_80 = v11
double x_4
double x_5 = x_4
double x_3
double x_6 = x_3
int32_t x8_1

if (arg2 s< 0)
    x8_1 = arg2 + 3
else
    x8_1 = arg2

int32_t x23 = x8_1 s>> 2
int32_t* x0_1 = malloc(zx.q(x23) << 0x20 s>> 0x1e)
void* x0_3 = malloc(zx.q(x23 + arg2) << 0x20 s>> 0x1e)
int64_t v10
v10.d = float.s(arg2)
float128 result
float128 v2
uint128_t v3
int128_t v4
result, v2, v3, v4 = log(fconvert.d(v10.d))
result.q = result.q f* 1.4426950408889634
result.q = vrndx_f64(result.q)
uint32_t temp0_1 = vcvtd_s32_f64(result.q)
*arg1 = arg2
arg1[1] = temp0_1
*(arg1 + 8) = x0_3
*(arg1 + 0x10) = x0_1

if (arg2 s>= 4)
    int64_t i_11 = 0
    uint64_t x24_1 = zx.q(arg2 u>> 1)
    result.q = float.d(sx.q(arg2))
    v3.q = float.d(sx.q(arg2 << 1))
    uint64_t x25_1 = zx.q(x23)
    float128 result_1 = result
    
    if (x23 u<= 3)
        goto label_10878b0
    
    int64_t x13_1 = (x25_1 - 1) << 3
    int32_t x8_6 = 0 != (mulu.dp.q(x25_1 - 1, 8) u>> 0x40).q ? 1 : 0
    void* x12_1 = x0_3 + (x24_1 << 2)
    float128 v1_1
    
    if (x13_1 + x0_3 u< x13_1 || (x8_6 & 1) != 0 || x13_1 + x0_3 + 4 u< x13_1 || (x8_6 & 1) != 0
        || x13_1 + x12_1 u< x13_1 || (x8_6 & 1) != 0 || x13_1 + x12_1 + 4 u< x13_1)
    label_10878a0:
        i_11 = 0
    label_10878b0:
        result.q = fconvert.d(1.0)
        v2.q = result.q f/ result_1.q
        result.q = result.q f/ v3.q
        int32_t x23_2 = i_11.d << 2
        int64_t i_6 = x25_1 - i_11
        void* x27_2 = x0_3 + (i_11 << 3)
        int32_t x28_1 = 1 | (0x7fffffff & i_11.d) << 1
        x_4 = v2.q f* 3.1415926535897931
        v11 = result.q f* 3.1415926535897931
        int64_t i
        
        do
            result.q = float.d(sx.q(x23_2))
            x_3 = x_4 f* result.q
            double v0_39
            v0_39.d = fconvert.s(cos(x_3))
            *x27_2 = v0_39.d
            double v0_41
            v0_41.d = fconvert.s(sin(x_3))
            v0_41.d = fneg(v0_41.d)
            x_3 = v11 * float.d(sx.q(x28_1))
            *(x27_2 + 4) = v0_41.d
            double v0_43
            v0_43.d = fconvert.s(cos(x_3))
            int32_t* x26_1 = x27_2 + (x24_1 << 2)
            *x26_1 = v0_43.d
            result, v1_1, v2 = sin(x_3)
            result.d = fconvert.s(result.q)
            x23_2 += 4
            i = i_6
            i_6 -= 1
            x27_2 += 8
            x28_1 += 2
            x26_1[1] = result.d
        while (i != 1)
    else
        i_11 = 0
        
        if ((x8_6 & 1) != 0)
            goto label_10878b0
        
        uint64_t x8_7 = x25_1 << 3
        uint64_t x9_3 = x24_1 << 2
        void* x15_2 = x0_3 + x8_7
        void* x18_1 = x0_3 + x8_7 + x9_3
        void* x17_1 = x0_3 + x9_3
        
        if (((x0_3 u< x15_2 ? 1 : 0) & (x0_3 + 4 u< x15_2 - 4 ? 1 : 0) & 1) != 0
                || ((x0_3 u< x18_1 - 4 ? 1 : 0) & (x17_1 u< x15_2 - 4 ? 1 : 0) & 1) != 0
                || ((x0_3 u< x18_1 ? 1 : 0) & (x17_1 + 4 u< x15_2 - 4 ? 1 : 0) & 1) != 0
                || ((x0_3 + 4 u< x18_1 - 4 ? 1 : 0) & (x17_1 u< x15_2 ? 1 : 0) & 1) != 0
                || ((x0_3 + 4 u< x18_1 ? 1 : 0) & (x17_1 + 4 u< x15_2 ? 1 : 0) & 1) != 0)
            goto label_10878a0
        
        i_11 = 0
        
        if (((x17_1 u< x18_1 ? 1 : 0) & (x17_1 + 4 u< x18_1 - 4 ? 1 : 0) & 1) != 0)
            goto label_10878b0
        
        uint128_t var_190_1 = v3
        uint128_t v1_2 = vdupq_laneq_s64(v3, 0)
        v2.q = fconvert.d(1.0)
        v2:8.q = fconvert.d(1.0)
        data_71a9c0
        v4 = data_71c940
        uint128_t v0_1 = vdupq_laneq_s64(result_1, 0)
        float128 var_c0_1
        __builtin_memcpy(&var_c0_1, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x"
        "00\x00\x03\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        v3.q = 0x400921fb54442d18
        v3:8.q = 0x400921fb54442d18
        float128 v0_2 = vdivq_f64(v2, v0_1)
        v1_1 = vdivq_f64(v2, v1_2)
        v2.q = 1
        v2:8.q = 1
        float128 v0_3 = vmulq_f64(v0_2, v3, 0)
        i_11 = x25_1 & 0xfffffffc
        float128 var_130_1 = v2
        float128 var_150_1 = vmulq_f64(v1_1, v3, 0)
        result.q = 4
        result:8.q = 4
        int64_t i_8 = i_11
        float128 result_2 = result
        int64_t i_1
        
        do
            result.d = v4.d << 2
            result:4.d = v4:4.d << 2
            result:8.d = v4:8.d << 2
            result:0xc.d = v4:0xc.d << 2
            v1_1.q = sx.q(result:8.d)
            v1_1:8.q = sx.q(result:0xc.d)
            result.q = sx.q(result.d)
            result:8.q = sx.q(result:4.d)
            float128 v0_4 = vcvtq_f64_s64(result)
            float128 v1_3 = vcvtq_f64_s64(v1_1)
            float128 v0_5 = vmulq_f64(v0_3, v0_4, 0)
            float128 v0_6 = vmulq_f64(v0_3, v1_3, 0)
            x_3 = v0_6:8.q
            double x = v0_6.q
            double var_110_1 = cos(x_3)
            cos(x)
            int128_t v0_9
            v0_9:8.q = var_110_1
            x_4 = v0_5:8.q
            int128_t var_120_1 = cos(x_4)
            float128 v0_12
            int128_t v1_5
            float128 v2_1
            v0_12, v1_5, v2_1 = cos(v0_5.q)
            v0_12:8.q = var_120_1.q
            float128 v0_14 = vcvt_high_f32_f64(vcvt_f32_f64(v0_12, v0_12), v0_9)
            int128_t var_110_2
            var_110_2.q = v0_14.q
            var_110_2:8.q = var_120_1.q
            double var_120_2 = sin(x_3)
            sin(x)
            int128_t v0_17
            v0_17:8.q = var_120_2
            double var_120_3 = sin(x_4)
            float128 v0_20
            uint128_t v1_7
            uint128_t v3_1
            int128_t v4_1
            v0_20, v1_7, v3_1, v4_1 = sin(v0_5.q)
            v3_1 = var_130_1
            v1_7.q = var_c0_1.q << 1
            v1_7:8.q <<= 1
            v0_20:8.q = var_120_3
            uint128_t v2_3 = vorrq_s8(v1_7, v3_1)
            uint128_t v1_8 = vmovn_s64(v2_3)
            int128_t v0_21 = vcvt_f32_f64(v0_20, v0_20)
            v1_8.q = sx.q(v1_8.d)
            v1_8:8.q = sx.q(v1_8:4.d)
            float128 v1_9 = vcvtq_f64_s64(v1_8)
            float128 v0_22 = vcvt_high_f32_f64(v0_21, v0_17)
            int32_t* x8_17 = x0_3 - 4 + (v2_3.q << 2)
            int128_t var_b0_1
            v2_3.q = var_b0_1.q << 1
            v2_3:8.q <<= 1
            uint128_t v2_4 = vorrq_s8(v2_3, v3_1)
            v3_1.q = var_110_2.q
            v4_1.q = var_110_2:8.q
            v3_1:8.q = v0_14:8.q
            v4_1:8.q = var_120_1:8.q
            uint128_t v2_5
            v2_5.q = sx.q(vmovn_s64(v2_4).d)
            v2_5:8.q = sx.q(v2_5:4.d)
            float128 v4_2 = vnegq_f32(v0_22)
            float128 v0_23 = vcvtq_f64_s64(v2_5)
            v2_5 = var_150_1
            *x8_17 = v3_1.d
            x8_17[1] = v4_2.d
            x8_17[2] = v3_1:4.d
            x8_17[3] = v4_2:4.d
            x8_17[4] = v3_1:8.d
            x8_17[5] = v4_2:8.d
            x8_17[6] = v3_1:0xc.d
            x8_17[7] = v4_2:0xc.d
            float128 v0_24 = vmulq_f64(v2_5, v0_23, 0)
            x_3 = v0_24:8.q
            float128 v1_10 = vmulq_f64(v2_5, v1_9, 0)
            double x_1 = v0_24.q
            double var_110_3 = cos(x_3)
            cos(x_1)
            int128_t v0_27
            v0_27:8.q = var_110_3
            x_4 = v1_10:8.q
            int128_t var_120_4 = cos(x_4)
            float128 v0_30
            int128_t v1_12
            float128 v2_6
            v0_30, v1_12, v2_6 = cos(v1_10.q)
            v0_30:8.q = var_120_4.q
            float128 v0_32 = vcvt_high_f32_f64(vcvt_f32_f64(v0_30, v0_30), v0_27)
            int128_t var_110_4
            var_110_4.q = v0_32.q
            var_110_4:8.q = var_120_4.q
            double var_120_5 = sin(x_3)
            sin(x_1)
            int128_t v0_35
            v0_35:8.q = var_120_5
            int128_t var_120_6 = sin(x_4)
            int128_t v2_7
            int128_t v4_3
            result, v1_1, v2_7, v3, v4_3 = sin(v1_10.q)
            var_b0_1 += result_2
            i_1 = i_8
            i_8 -= 4
            int32_t* x8_19 = x0_3 + ((v1_7.q + x24_1) << 2)
            var_c0_1 += result_2
            result:8.q = var_120_6.q
            v1_1.q = var_110_4.q
            float128 v2_9
            v2_9.q = var_110_4:8.q
            v1_1:8.q = v0_32:8.q
            v2_9:8.q = var_120_4:8.q
            v2 = vcvt_high_f32_f64(vcvt_f32_f64(v2_9, result), v0_35)
            result.d = 4
            result:4.d = 4
            result:8.d = 4
            result:0xc.d = 4
            v4 += result
            *x8_19 = v1_1.d
            x8_19[1] = v2.d
            x8_19[2] = v1_1:4.d
            x8_19[3] = v2:4.d
            x8_19[4] = v1_1:8.d
            x8_19[5] = v2:8.d
            x8_19[6] = v1_1:0xc.d
            x8_19[7] = v2:0xc.d
        while (i_1 != 4)
        v3 = var_190_1
        
        if (i_11 != x25_1)
            goto label_10878b0
    
    int32_t x8_21
    
    if (arg2 s< 0)
        x8_21 = arg2 + 7
    else
        x8_21 = arg2
    
    if (arg2 s>= 8)
        int32_t x8_22 = x8_21 s>> 3
        int64_t i_10 = 0
        int64_t x26_2 = sx.q(arg2)
        uint64_t x24_3 = zx.q(x8_22)
        
        if (x8_22 u> 3)
            v1_1.q = fconvert.d(1.0)
            v1_1:8.q = fconvert.d(1.0)
            float128 v0_46 = vdivq_f64(v1_1, vdupq_laneq_s64(result_1, 0))
            v2 = data_71c940
            v1_1.q = 0x400921fb54442d18
            v1_1:8.q = 0x400921fb54442d18
            i_10 = x24_3 & 0xfffffffc
            float128 var_110_5 = vmulq_f64(v0_46, v1_1, 0)
            result.q = fconvert.d(0.5)
            result:8.q = fconvert.d(0.5)
            void* x27_3 = x0_3 + (x26_2 << 2)
            float128 result_4 = result
            result.q = fconvert.d(-0.5)
            result:8.q = fconvert.d(-0.5)
            int64_t i_9 = i_10
            float128 result_3 = result
            int64_t i_2
            
            do
                result.d = v2.d << 2
                result:4.d = v2:4.d << 2
                result:8.d = v2:8.d << 2
                result:0xc.d = v2:0xc.d << 2
                result.d = 2
                result:4.d = 2
                result:8.d = 2
                result:0xc.d = 2
                v1_1.q = 2
                v1_1:8.q = 2
                result.q = 2
                result:8.q = sx.q(result:0xc.d)
                float128 v0_47 = vcvtq_f64_s64(result)
                float128 v1_15 = vcvtq_f64_s64(v1_1)
                float128 v0_48 = vmulq_f64(var_110_5, v0_47, 0)
                float128 v0_49 = vmulq_f64(var_110_5, v1_15, 0)
                x_3 = v0_49:8.q
                double x_2 = v0_49.q
                double var_e0_3 = cos(x_3)
                cos(x_2)
                int128_t v0_52
                v0_52:8.q = var_e0_3
                x_4 = v0_48:8.q
                double var_f0_2 = cos(x_4)
                float128 v0_55
                float128 v1_17
                float128 v2_11
                v0_55, v1_17, v2_11 = cos(v0_48.q)
                float128 v1_18 = vmulq_f64(v0_52, result_4, 0)
                v0_55:8.q = var_f0_2
                float128 v0_56 = vmulq_f64(v0_55, result_4, 0)
                float128 v1_20 = vcvt_high_f32_f64(vcvt_f32_f64(v1_18, v1_18), v0_56)
                int128_t var_e0_4
                var_e0_4.q = v1_20.q
                var_e0_4:8.q = result_4.q
                double var_f0_3 = sin(x_3)
                sin(x_2)
                int128_t v0_59
                v0_59:8.q = var_f0_3
                int128_t var_b0_2 = sin(x_4)
                float128 v0_62
                float128 v1_22
                int128_t v2_12
                float128 v3_3
                int128_t v4_4
                float128 v5_1
                v0_62, v1_22, v2_12, v3_3, v4_4, v5_1 = sin(v0_48.q)
                v0_62:8.q = var_b0_2.q
                v4_4.q = var_e0_4.q
                v5_1.q = var_e0_4:8.q
                v4_4:8.q = v1_20:8.q
                v5_1:8.q = result_4:8.q
                v1_1 = vmulq_f64(v0_59, result_3, 0)
                result = vmulq_f64(v0_62, result_3, 0)
                i_2 = i_9
                i_9 -= 4
                float128 v5_3 = vcvt_high_f32_f64(vcvt_f32_f64(v5_1, v1_1), result)
                result.d = 4
                result:4.d = 4
                result:8.d = 4
                result:0xc.d = 4
                *x27_3 = v4_4.d
                *(x27_3 + 4) = v5_3.d
                *(x27_3 + 8) = v4_4:4.d
                *(x27_3 + 0xc) = v5_3:4.d
                *(x27_3 + 0x10) = v4_4:8.d
                *(x27_3 + 0x14) = v5_3:8.d
                *(x27_3 + 0x18) = v4_4:0xc.d
                *(x27_3 + 0x1c) = v5_3:0xc.d
                x27_3 += 0x20
                v2 += result
            while (i_2 != 4)
        
        if (x8_22 u<= 3 || i_10 != x24_3)
            result.q = fconvert.d(1.0)
            result.q = result.q f/ result_1.q
            v2 = data_71a990
            int32_t x23_3 = 2 | (0x3fffffff & i_10.d) << 2
            int64_t* x22_1 = x0_3 + (i_10 << 3) + (x26_2 << 2)
            int64_t i_7 = x24_3 - i_10
            x_4 = result.q f* 3.1415926535897931
            int64_t i_3
            
            do
                result.q = float.d(sx.q(x23_3))
                x_3 = x_4 f* result.q
                int128_t var_a0_4 = cos(x_3)
                float128 v0_66
                float128 v1_23
                v0_66, v1_23 = sin(x_3)
                i_3 = i_7
                i_7 -= 1
                x23_3 += 4
                v1_23:8.q = v0_66.q
                float128 v0_67 = vmulq_f64(v1_23, v2, 0)
                *x22_1 = vcvt_f32_f64(v0_67, v0_67).q
                x22_1 = &x22_1[1]
            while (i_3 != 1)
        
        if (arg2 s>= 8)
            int64_t x8_25 = 0
            int32_t i_5 = 1 << (temp0_1 - 2)
            
            do
                int32_t x12_3 = 0
                int32_t x13_4 = 0
                int32_t i_4 = i_5
                
                do
                    int32_t x15_4 = 1 << x13_4
                    x13_4 += 1
                    int32_t x15_5
                    
                    if ((i_4 & x8_25.d) == 0)
                        x15_5 = 0
                    else
                        x15_5 = x15_4
                    
                    i_4 = i_5 s>> x13_4
                    x12_3 |= x15_5
                while (i_4 != 0)
                
                int64_t x15_6 = 4 | (0x1fffffffffffffff & x8_25) << 3
                x8_25 += 1
                x0_1[x8_25 * 2] = (((1 << (temp0_1 - 1)) - 1) & not.d(x12_3)) - 1
                *(x0_1 + x15_6) = x12_3
            while (x8_25 != x24_3)

result.d = fconvert.s(4f)
result.d = result.d f/ v10.d
arg1[6] = result.d
return result
