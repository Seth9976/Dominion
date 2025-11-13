// 函数: vorbis_lsp_to_curve
// 地址: 0x1094818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t var_78 = arg9.q
double v8 = arg8.q
double v9 = arg7.q
float* x23 = arg1
int128_t v2

if (arg6 s>= 1)
    int64_t i_4 = 0
    uint64_t x27_1 = zx.q(arg6)
    
    if (arg6 u> 3)
        i_4 = x27_1 & 0xfffffffc
        int64_t i_3 = i_4
        int128_t* x24_1 = arg5
        int128_t* x25_1 = arg5
        int64_t i
        
        do
            arg7 = *x25_1
            x25_1 = &x25_1[1]
            float128 v1 = vcvt_high_f64_f32(arg7)
            float128 v0 = vcvt_f64_f32(arg7)
            int64_t var_e0
            var_e0.o = v0
            v0.q = v0:8.q
            int32_t var_c0
            var_c0.o = v1
            int64_t var_d0
            var_d0.o = cos(v0.q)
            cos(var_e0.o.q)
            int128_t v0_2
            v0_2:8.q = var_d0
            var_d0.o = v0_2
            v0_2.q = var_c0.o:8.q
            var_e0.o = cos(v0_2.q)
            float128 v0_4
            float128 v1_2
            v0_4, arg1, v1_2, v2 = cos(var_c0.o.q)
            v1_2 = var_d0.o
            i = i_3
            i_3 -= 4
            float128 v1_3 = vaddq_f64(v1_2, v1_2)
            v0_4:8.q = var_e0.o.q
            *x24_1 = vcvt_high_f32_f64(vcvt_f32_f64(v1_3, v1_3), vaddq_f64(v0_4, v0_4))
            x24_1 = x25_1
        while (i != 4)
    
    if (arg6 u<= 3 || i_4 != x27_1)
        int32_t* x24_2 = arg5 + (i_4 << 2)
        int64_t i_2 = x27_1 - i_4
        int64_t i_1
        
        do
            arg7.d = *x24_2
            arg7.q = fconvert.d(arg7.d)
            arg7, arg1, arg8, v2 = cos(arg7.q)
            arg7.q = arg7.q f+ arg7.q
            arg7.d = fconvert.s(arg7.q)
            i_1 = i_2
            i_2 -= 1
            *x24_2 = arg7.d
            x24_2 = &x24_2[1]
        while (i_1 != 1)

if (arg3 s>= 1)
    arg8.d = fconvert.s(1f)
    arg8:4.d = fconvert.s(1f)
    arg8:8.d = fconvert.s(1f)
    arg8:0xc.d = fconvert.s(1f)
    arg7.q = float.d(sx.q(arg4))
    int64_t x24_3 = sx.q(arg6)
    v2 = data_71c450
    arg7.q = 3.1415926535897931 f/ arg7.q
    uint64_t x27_2 = 0
    arg9.d = fconvert.s(0.5f)
    v11.d = fconvert.s(4f)
    int32_t var_98
    var_98.q = (((x24_3 - 2) u>> 1) + 1) & 0xfffffffffffffff8
    v13.d = fconvert.s(arg7.q)
    v14.d = fconvert.s(2f)
    
    do
        int32_t x25_2 = *(arg2 + (sx.q(x27_2.d) << 2))
        arg7.d = float.s(x25_2)
        arg7.d = arg7.d f* v13.d
        arg7.q = fconvert.d(arg7.d)
        int64_t x0
        int64_t x1
        int64_t x2
        int64_t x3
        uint128_t v0_5
        float128 v3_1
        uint128_t v4_1
        float128 v5_1
        float128 v6_1
        float128 v7_1
        float128 v16_1
        float128 v17_1
        v0_5, x0, x1, x2, x3, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1 = cos(arg7.q)
        v0_5.q = v0_5.q f+ v0_5.q
        v0_5.d = fconvert.s(v0_5.q)
        int32_t x9_6
        float128 v1_5
        float128 v2_1
        
        if (arg6 s< 2)
            x9_6 = 1
            v2_1 = arg9
            v1_5 = arg9
        else
            int64_t x8_7
            
            if (((x24_3 - 2) u>> 1) + 1 u>= 8)
                v4_1 = v2
                v5_1 = arg8
                int64_t j_1 = var_98.q
                void* x9_7 = &arg5[2]
                uint128_t v3_2 = vdupq_laneq_s32(v0_5, 0)
                uint128_t v1_6 = v4_1
                float128 v2_2 = v5_1
                int64_t j
                
                do
                    v6_1.d = *x9_7
                    v7_1.d = *(x9_7 + 4)
                    v6_1:4.d = *(x9_7 + 8)
                    v7_1:4.d = *(x9_7 + 0xc)
                    v6_1:8.d = *(x9_7 + 0x10)
                    v7_1:8.d = *(x9_7 + 0x14)
                    v6_1:0xc.d = *(x9_7 + 0x18)
                    v7_1:0xc.d = *(x9_7 + 0x1c)
                    v16_1.d = *(x9_7 - 0x20)
                    v17_1.d = *(x9_7 - 0x1c)
                    v16_1:4.d = *(x9_7 - 0x18)
                    v17_1:4.d = *(x9_7 - 0x14)
                    v16_1:8.d = *(x9_7 - 0x10)
                    v17_1:8.d = *(x9_7 - 0xc)
                    v16_1:0xc.d = *(x9_7 - 8)
                    v17_1:0xc.d = *(x9_7 - 4)
                    j = j_1
                    j_1 -= 8
                    x9_7 += 0x40
                    float128 v18_1 = vsubq_f32(v3_2, v6_1)
                    v6_1 = vsubq_f32(v3_2, v7_1)
                    v7_1 = vsubq_f32(v3_2, v16_1)
                    v16_1 = vsubq_f32(v3_2, v17_1)
                    v2_2 = vmulq_f32(v18_1, v2_2, 0)
                    v5_1 = vmulq_f32(v6_1, v5_1, 0)
                    v1_6 = vmulq_f32(v7_1, v1_6, 0)
                    v4_1 = vmulq_f32(v16_1, v4_1, 0)
                while (j != 8)
                v3_1 = vmulq_f32(v5_1, v4_1, 0)
                uint128_t v1_7 = vmulq_f32(v2_2, v1_6, 0)
                x9_6 = ((arg6 - 2) & 0xfffffffe) + 3
                x8_7 =
                    ((x24_3 - 2) & 0xfffffffffffffffe) + 3 - (((((x24_3 - 2) u>> 1) + 1) & 7) << 1)
                float128 v2_3 = vextq_s8(v3_1, v0_5, 8)
                v4_1 = vextq_s8(v1_7, v0_5, 8)
                v2_1 = vmulq_f32(v3_1, v2_3, 0)
                v1_5 = vmulq_f32(v1_7, v4_1, 0)
                v2_1.d = v2_1.d f* v2_1:4.d
                v2_1:4.d = v2_1:4.d f* v2_1:4.d
                v2_1:8.d = v2_1:8.d f* v2_1:4.d
                v2_1:0xc.d = v2_1:0xc.d f* v2_1:4.d
                v1_5.d = v1_5.d f* v1_5:4.d
                v1_5:4.d = v1_5:4.d f* v1_5:4.d
                v1_5:8.d = v1_5:8.d f* v1_5:4.d
                v1_5:0xc.d = v1_5:0xc.d f* v1_5:4.d
                
                if (((x24_3 - 2) u>> 1) + 1 != var_98.q)
                    goto label_1094ad4
            else
                x8_7 = 1
                v1_5 = arg9
                v2_1 = arg9
            label_1094ad4:
                
                do
                    void* x9_8 = arg5 + (x8_7 << 2)
                    v3_1.d = *(x9_8 - 4)
                    v4_1.d = *x9_8
                    x8_7 += 2
                    v3_1.d = v0_5.d f- v3_1.d
                    v4_1.d = v0_5.d f- v4_1.d
                    v1_5.d = v3_1.d f* v1_5.d
                    v2_1.d = v4_1.d f* v2_1.d
                while (x8_7 s< x24_3)
                
                x9_6 = ((arg6 - 2) & 0xfffffffe) + 3
        
        int64_t x28_1 = sx.q(x27_2.d)
        
        if (x9_6 != arg6)
            v3_1.d = v14.d f- v0_5.d
            v2_1.d = v2_1.d f* v2_1.d
            v4_1.d = v0_5.d f+ v14.d
            v1_5.d = v1_5.d f* v1_5.d
            v0_5.d = v2_1.d f* v3_1.d
            v1_5.d = v1_5.d f* v4_1.d
        else
            v4_1.d = vfms_f64(v11.d, v0_5.d, v0_5.d)
            v2_1.d = v2_1.d f* v2_1.d
            v3_1.d = *(arg5 + (sx.q(arg6 - 1) << 2))
            v0_5.d = v0_5.d f- v3_1.d
            v1_5.d = v0_5.d f* v1_5.d
            v0_5.d = v2_1.d f* v4_1.d
            v1_5.d = v1_5.d f* v1_5.d
        
        v0_5.d = v1_5.d f+ v0_5.d
        v0_5.q = fconvert.d(v0_5.d)
        v0_5.q = sqrt(v0_5.q)
        v0_5.q = fconvert.d(v9.d) f/ v0_5.q
        v0_5.q = v0_5.q f- fconvert.d(v8.d)
        v0_5.q = v0_5.q f* 0.1151292473077774
        arg7, arg1 = exp(x0, x1, x2, x3, v0_5.q)
        arg7.d = fconvert.s(arg7.q)
        x27_2 = x28_1 + 1
        x23[x28_1] = x23[x28_1] f* arg7.d
        
        if (*(arg2 + (x27_2 << 2)) == x25_2)
            uint64_t x9_9 = x27_2 << 2
            x27_2 = zx.q(x28_1.d + 1)
            float* x8_12 = &x23[x27_2]
            int32_t* x9_10 = arg2 + 4 + x9_9
            int32_t x10_6
            
            do
                x27_2 = zx.q(x27_2.d + 1)
                *x8_12 = *x8_12 f* arg7.d
                x8_12 = &x8_12[1]
                x10_6 = *x9_10
                x9_10 = &x9_10[1]
            while (x10_6 == x25_2)
    while (x27_2.d s< arg3)

arg9.q = var_78
