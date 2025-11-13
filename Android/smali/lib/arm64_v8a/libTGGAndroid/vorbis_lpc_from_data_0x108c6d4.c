// 函数: vorbis_lpc_from_data
// 地址: 0x108c6d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
void var_50
void* x8_2 = &var_50 - (((zx.q(arg4 + 1) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
void* x22 = x8_2 - (((zx.q(arg4) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
float128 result
double v8

if (arg4 == 0xffffffff)
    v8 = nan.0
else
    int64_t x9_1 = sx.q(arg4)
    int32_t x12_2 = arg3 - 1 - arg4
    int32_t x10_5 = 0
    void* x23_1 = x22
    int64_t x13_1 = x9_1 << 2
    uint64_t x14_1 = zx.q(arg3 - arg4)
    int64_t x15_1 = neg.q(x9_1)
    int32_t x16_1 = x12_2
    int64_t x17_1 = x9_1
    float128 v1
    float128 v2
    float128 v3
    float128 v5
    int32_t i
    
    do
        result.q = 0.0
        
        if (x17_1 s< sx.q(arg3))
            uint64_t x1 = zx.q(x12_2 + x10_5)
            result.q = 0.0
            int64_t x18_1 = x17_1
            uint64_t x1_2
            
            if (x1 + 1 u>= 4)
                x1_2 = zx.q(x1.d + 1) & 3
                int64_t j_2 = zx.q(x16_1) + 1 - (x14_1 & 3)
                result.q = 0
                result:8.q = 0
                int64_t* x3 = arg1
                x18_1 = x17_1 + x1 + 1 - x1_2
                v1.q = 0
                v1:8.q = 0
                int64_t j
                
                do
                    int64_t* x5_2 = x3 + x13_1
                    v2.q = *x3
                    v3.q = x3[1]
                    x3 = &x3[2]
                    float128 v4
                    v4.q = *x5_2
                    v5.q = x5_2[1]
                    j = j_2
                    j_2 -= 4
                    v2 = vcvt_f64_f32(v2)
                    v3 = vcvt_f64_f32(v3)
                    v4 = vcvt_f64_f32(v4)
                    v5 = vcvt_f64_f32(v5)
                    result = vfmaq_f64(result, v4, v2)
                    v1 = vfmaq_f64(v1, v5, v3)
                while (j != 4)
                float128 v0 = vaddq_f64(v1, result)
                result = vaddq_f64(v0, vdupq_laneq_s64(v0, 1))
            
            if (x1 + 1 u< 4 || x1_2.d != 0)
                int32_t* x1_3 = arg1 + (x18_1 << 2)
                int32_t* x3_2 = arg1 + ((x18_1 + x15_1) << 2)
                int32_t j_3 = arg3 - x18_1.d
                int32_t j_1
                
                do
                    v1.d = *x1_3
                    x1_3 = &x1_3[1]
                    v2.d = *x3_2
                    x3_2 = &x3_2[1]
                    j_1 = j_3
                    j_3 -= 1
                    v1.q = fconvert.d(v1.d)
                    v2.q = fconvert.d(v2.d)
                    result.q = vfma_f64(result.q, v2.q, v1.q)
                while (j_1 != 1)
        
        *(x8_2 + (x17_1 << 3)) = result.q
        i = x17_1.d
        x17_1 -= 1
        x10_5 += 1
        x13_1 -= 4
        x16_1 += 1
        x14_1 = zx.q(x14_1.d + 1)
        x15_1 += 1
    while (i != 0)
    result.q = *x8_2
    v1.q = 0x3ff000000006df38
    v8 = result.q f* 1.0000000001
    
    if (arg4 s>= 1)
        v1.q = 0x3ddb7cdfd9d7bdbb
        v2.q = 0x3e112e0be826d695
        int64_t x14_2 = 0
        void* x11_2 = x8_2 - 8
        result.q = vfma_f64(1e-10, result.q, 1.0000000000000001e-09)
        void* x12_3 = x22 - 8
        void* x13_2 = x8_2
        
        while (true)
            if (v8 f< result.q)
                result, v2 =
                    memset(x22 + (zx.q(x14_2.d) << 3), 0, zx.q(arg4 - x14_2.d) << 0x20 s>> 0x1d)
                
                if (arg4 s<= 0)
                    break
            else
                v1.q = *(x8_2 + ((x14_2 + 1) << 3))
                uint64_t i_12 = x14_2 u>> 1 & 0x7fffffff
                v1.q = fneg(v1.q)
                
                if (x14_2 != 0)
                    int64_t x17_2
                    
                    if (x14_2 u>= 4)
                        v3.q = 0
                        v3:8.q = 0
                        int64_t i_10 = x14_2 & 0xfffffffffffffffc
                        x17_2 = x14_2 & 0x7ffffffffffffffc
                        v2.q = 0
                        v2:8.q = 0
                        v3.q = v1.q
                        void* x0 = x11_2
                        void* x1_4 = x22 + 0x10
                        int64_t i_1
                        
                        do
                            uint128_t v6 = *(x0 - 0x10)
                            v5 = *x0
                            *(x1_4 - 0x10)
                            *x1_4
                            x1_4 += 0x20
                            i_1 = i_10
                            i_10 -= 4
                            v5 = vextq_s8(v5, v5, 8)
                            v6 = vextq_s8(v6, v6, 8)
                            v3 = vfmsq_f64(v3, v5, 0)
                            v2 = vfmsq_f64(v2, v6, 0)
                            x0 -= 0x20
                        while (i_1 != 4)
                        float128 v1_1 = vaddq_f64(v2, v3)
                        v1 = vaddq_f64(v1_1, vdupq_laneq_s64(v1_1, 1))
                        
                        if (x14_2 != x17_2)
                            goto label_108c908
                    else
                        x17_2 = 0
                    label_108c908:
                        void* x18_5 = x13_2 - (x17_2 << 3)
                        
                        do
                            v2.q = *(x23_1 + (x17_2 << 3))
                            v3.q = *x18_5
                            x18_5 -= 8
                            x17_2 += 1
                            v1.q = vfms_f64(v1.q, v3.q, v2.q)
                        while (x14_2 != x17_2)
                
                v1.q = v1.q f/ v8
                *(x23_1 + (x14_2 << 3)) = v1.q
                
                if (i_12.d != 0)
                    uint64_t i_9 = i_12
                    void* x18_6 = x23_1
                    void* x0_1 = x12_3
                    uint64_t i_2
                    
                    do
                        v2.q = *x18_6
                        v3.q = *x0_1
                        i_2 = i_9
                        i_9 -= 1
                        v3.q = vfma_f64(v2.q, v3.q, v1.q)
                        *x18_6 = v3.q
                        x18_6 += 8
                        v3.q = *x0_1
                        v2.q = vfma_f64(v3.q, v2.q, v1.q)
                        *x0_1 = v2.q
                        x0_1 -= 8
                    while (i_2 != 1)
                
                if ((x14_2.d & 1) != 0)
                    uint64_t x14_4 = zx.q(i_12.d) << 3
                    v2.q = *(x23_1 + x14_4)
                    v2.q = vfma_f64(v2.q, v2.q, v1.q)
                    *(x23_1 + x14_4) = v2.q
                
                v1.q = v1.q f* v1.q
                x11_2 += 8
                x13_2 += 8
                bool cond:6_1 = x14_2 + 1 s< x9_1
                v8 = vfms_f64(v8, v1.q, v8)
                x12_3 += 8
                x14_2 += 1
                
                if (cond:6_1)
                    continue
                else if (arg4 s< 1)
                    break
            
            result.q = 0x3fefae147ae147ae
            uint64_t i_11 = zx.q(arg4)
            uint64_t i_7 = i_11
            float128 result_1 = result
            uint64_t i_3
            
            do
                v2.q = *x23_1
                i_3 = i_7
                i_7 -= 1
                v2.q = v2.q f* result_1.q
                *x23_1 = v2.q
                x23_1 += 8
                result_1.q = result_1.q f* 0.98999999999999999
            while (i_3 != 1)
            
            if (arg4 u> 3)
                i_7 = i_11 & 0xfffffffc
                void* x10_7 = x22 + 0x10
                void* x11_3 = arg2 + 8
                uint64_t i_8 = i_7
                uint64_t i_4
                
                do
                    result = *(x10_7 - 0x10)
                    result_1 = *x10_7
                    x10_7 += 0x20
                    i_4 = i_8
                    i_8 -= 4
                    result = vcvt_f32_f64(result, result)
                    result_1 = vcvt_f32_f64(result_1, result_1)
                    *(x11_3 - 8) = result.q
                    *x11_3 = result_1.q
                    x11_3 += 0x10
                while (i_4 != 4)
            
            if (arg4 u<= 3 || i_7 != i_11)
                void* x10_8 = arg2 + (i_7 << 2)
                int64_t* x11_4 = x22 + (i_7 << 3)
                uint64_t i_6 = i_11 - i_7
                uint64_t i_5
                
                do
                    result.q = *x11_4
                    x11_4 = &x11_4[1]
                    i_5 = i_6
                    i_6 -= 1
                    result.d = fconvert.s(result.q)
                    *x10_8 = result.d
                    x10_8 += 4
                while (i_5 != 1)
            
            break

if (*(x21 + 0x28) != x8)
    __stack_chk_fail()
    noreturn

result.d = fconvert.s(v8)
return result
