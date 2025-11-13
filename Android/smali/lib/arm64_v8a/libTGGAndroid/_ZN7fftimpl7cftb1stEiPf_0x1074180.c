// 函数: _ZN7fftimpl7cftb1stEiPf
// 地址: 0x1074180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26 = arg1 s>> 3
int64_t x20 = (arg1 & 0xfffffff8) << 0x20 s>> 0x23
int64_t x21 = zx.q(x26) << 0x20 s>> 0x1f
int64_t x10 = x21 + x20
float v0 = *arg2
float v1 = arg2[1]
int64_t x8 = 4 | (0xfffffffffffffff & x20) << 4
int64_t x25 = zx.q(x26) << 0x20 s>> 0x1d
int64_t x11_1 = zx.q(x26 << 2) << 0x20 s>> 0x1e
int64_t x27 = x10 << 3
int64_t x12_1 = (zx.q(x21.d) | 1) << 0x20 s>> 0x1e
int64_t x9_1 = (1 | zx.q((0x7fffffff & x10.d) << 1)) << 0x20 s>> 0x1e
float v3 = *(arg2 + x8)
float v4 = *(arg2 + x25)
float v6 = *(arg2 + x11_1)
float v16 = arg2[x10 * 2]
float v17 = *(arg2 + x12_1)
double v5
v5.d = *(arg2 + x9_1)
float v7 = fneg(v1) - v3
v1 = v3 - v1
int64_t v8
v8.d = fconvert.s(1.5707963267948966 / float.d(sx.q(x21.d)))
double v2
v2.d = v0 + v6
v0 = v0 - v6
v3 = v4 + v16
v4 = v4 - v16
v6 = v17 f+ v5.d
v5.d = v17 f- v5.d
v16 = v2.d f+ v3
v2.d = v2.d f- v3
*arg2 = v16
arg2[1] = v7 - v6
*(arg2 + x25) = v2.d
*(arg2 + x12_1) = v7 + v6
*(arg2 + x11_1) = v0 f+ v5.d
*(arg2 + x8) = v1 + v4
arg2[x10 * 2] = v0 f- v5.d
*(arg2 + x9_1) = v1 - v4
float cosp_1
float sinp_1
int64_t result = sincosf(&sinp_1, &cosp_1, v8.d f+ v8.d)
int64_t v9
v9.d = cosp_1
int64_t v10
v10.d = sinp_1
int64_t v12
v12.d = v10.d f+ v10.d
float v2_1 = v9.d f* (v12.d f+ v12.d)
float v7_1 = v9.d f* v2_1
v2_1 = v9.d f- v10.d f* v2_1
float v3_1 = v10.d f- v7_1
int32_t x10_1 = 0
float sinp_2 = 0f
float cosp_2 = fconvert.s(1f)
int64_t v11
v11.d = fconvert.s(4f)
float v6_1 = fconvert.s(1f)
float v0_1 = v9.d
float v1_1 = v10.d
int64_t v13
v13.d = v3_1 + v3_1
v7_1 = 0f
float v16_1
float v17_1
float v18_1
float v19_1
float v20_1
float v21_1

while (true)
    int32_t fp_1
    
    if (x10_1 + 0x80 s> x26 - 4)
        fp_1 = x26 - 4
    else
        fp_1 = x10_1 + 0x80
    
    if (x10_1 + 2 s< fp_1)
        int64_t x14_1 = sx.q(x10_1)
        int64_t x0_1 = zx.q(x10_1) << 0x20 s>> 0x1e
        int64_t i = x14_1 + 2
        int64_t x11_2 = x27 + 8 + x0_1
        int64_t x12_2 = (8 | (0xfffffffffffffff & x20) << 4) + x0_1
        int64_t x13_1 = x25 - 8 - x0_1
        int64_t x14_2 = x0_1 + 0x14
        int64_t x15_1 = (zx.q(x26) << 0x20 s>> 0x1b) - 0x10 - x0_1
        int64_t x16_1 = (zx.q(x26) << 0x20 s>> 0x1c) - 8 - x0_1
        int64_t x17_3 = ((x21 + x14_1) << 2) + 0x14
        result = x27 - 0x10 - x0_1
        
        do
            void* x2_1 = arg2 + x14_2
            float* x3_1 = arg2 + x12_2
            void* x1_1 = arg2 + x17_3
            void* x4_1 = arg2 + x11_2
            v17_1 = *(x2_1 - 0xc)
            v18_1 = *(x2_1 - 8)
            v19_1 = *x3_1
            v20_1 = x3_1[1]
            v21_1 = *(x1_1 - 0xc)
            float v22_1 = *(x1_1 - 8)
            float v23_1 = *x4_1
            float v24_1 = *(x4_1 + 4)
            float v26_1 = fneg(v18_1)
            float v25_1 = v17_1 + v19_1
            v17_1 = v17_1 - v19_1
            v18_1 = v20_1 - v18_1
            v19_1 = v21_1 + v23_1
            float v27_1 = v22_1 + v24_1
            v21_1 = v21_1 - v23_1
            v22_1 = v22_1 - v24_1
            v20_1 = v26_1 - v20_1
            v23_1 = v25_1 + v19_1
            v19_1 = v25_1 - v19_1
            v24_1 = v17_1 + v22_1
            v25_1 = v18_1 + v21_1
            v17_1 = v17_1 - v22_1
            v18_1 = v18_1 - v21_1
            *(x2_1 - 0xc) = v23_1
            *(x2_1 - 8) = v20_1 - v27_1
            *(x1_1 - 0xc) = v19_1
            *(x1_1 - 8) = v20_1 + v27_1
            *x3_1 = v0_1 * v24_1 - v1_1 * v25_1
            x3_1[1] = v0_1 * v25_1 + v1_1 * v24_1
            *x4_1 = v3_1 * v18_1 + v2_1 * v17_1
            *(x4_1 + 4) = v2_1 * v18_1 - v3_1 * v17_1
            v17_1 = *(x2_1 - 4)
            v18_1 = *x2_1
            v19_1 = x3_1[2]
            v20_1 = x3_1[3]
            v21_1 = *(x1_1 - 4)
            v22_1 = *x1_1
            v23_1 = *(x4_1 + 8)
            v24_1 = *(x4_1 + 0xc)
            v25_1 = v17_1 + v19_1
            v26_1 = fneg(v18_1) - v20_1
            v27_1 = v21_1 + v23_1
            float v29_1 = v25_1 + v27_1
            v25_1 = v25_1 - v27_1
            v27_1 = v22_1 + v24_1
            *(x2_1 - 4) = v29_1
            *x2_1 = v26_1 - v27_1
            *(x1_1 - 4) = v25_1
            *x1_1 = v26_1 + v27_1
            cosp_2 = cosp_2 - v12.d f* v1_1
            v16_1 = v17_1 - v19_1
            v17_1 = v20_1 - v18_1
            v18_1 = v21_1 - v23_1
            v19_1 = v22_1 - v24_1
            sinp_2 = v12.d f* v0_1 + sinp_2
            v20_1 = v16_1 + v19_1
            v21_1 = v17_1 + v18_1
            v6_1 = v6_1 - v13.d f* v3_1
            v7_1 = v13.d f* v2_1 + v7_1
            v16_1 = v16_1 - v19_1
            v17_1 = v17_1 - v18_1
            float* x2_2 = arg2 + x13_1
            float* x1_2 = arg2 + result
            x3_1[2] = cosp_2 * v20_1 - sinp_2 * v21_1
            x3_1[3] = cosp_2 * v21_1 + sinp_2 * v20_1
            void* x3_2 = arg2 + x16_1
            *(x4_1 + 8) = v7_1 * v17_1 + v6_1 * v16_1
            *(x4_1 + 0xc) = v6_1 * v17_1 - v7_1 * v16_1
            void* x4_2 = arg2 + x15_1
            v19_1 = *x2_2
            v20_1 = x2_2[1]
            v21_1 = x1_2[2]
            v22_1 = x1_2[3]
            v23_1 = *x3_2
            v24_1 = *(x3_2 + 4)
            v25_1 = *(x4_2 + 8)
            v26_1 = *(x4_2 + 0xc)
            float v28_1 = fneg(v20_1)
            v27_1 = v19_1 + v21_1
            v19_1 = v19_1 - v21_1
            v20_1 = v22_1 - v20_1
            v21_1 = v23_1 + v25_1
            v23_1 = v23_1 - v25_1
            v25_1 = v24_1 + v26_1
            v24_1 = v24_1 - v26_1
            v22_1 = v28_1 - v22_1
            v26_1 = v27_1 + v21_1
            v21_1 = v27_1 - v21_1
            v27_1 = v19_1 + v24_1
            v28_1 = v20_1 + v23_1
            v19_1 = v19_1 - v24_1
            v20_1 = v20_1 - v23_1
            v23_1 = v22_1 - v25_1
            v22_1 = v22_1 + v25_1
            v24_1 = v1_1 * v27_1
            v25_1 = v0_1 * v28_1
            v28_1 = v1_1 * v28_1
            v27_1 = v0_1 * v27_1
            v0_1 = v0_1 - v12.d f* sinp_2
            v16_1 = v2_1 * v20_1
            v1_1 = v1_1 + v12.d f* cosp_2
            v17_1 = v2_1 * v19_1
            v2_1 = v2_1 - v13.d f* v7_1
            v19_1 = v3_1 * v19_1
            v20_1 = v3_1 * v20_1
            v3_1 = v3_1 + v13.d f* v6_1
            *x2_2 = v26_1
            x2_2[1] = v23_1
            *x3_2 = v21_1
            *(x3_2 + 4) = v22_1
            x1_2[2] = v24_1 - v25_1
            x1_2[3] = v28_1 + v27_1
            *(x4_2 + 8) = v16_1 + v19_1
            *(x4_2 + 0xc) = v20_1 - v17_1
            v16_1 = x2_2[-2]
            v17_1 = x2_2[-1]
            v18_1 = *x1_2
            v19_1 = x1_2[1]
            v20_1 = *(x3_2 - 8)
            v21_1 = *(x3_2 - 4)
            v22_1 = *x4_2
            v23_1 = *(x4_2 + 4)
            v25_1 = fneg(v17_1)
            v24_1 = v16_1 + v18_1
            v16_1 = v16_1 - v18_1
            v17_1 = v19_1 - v17_1
            v18_1 = v20_1 + v22_1
            v26_1 = v21_1 + v23_1
            v20_1 = v20_1 - v22_1
            v21_1 = v21_1 - v23_1
            v19_1 = v25_1 - v19_1
            v22_1 = v24_1 + v18_1
            v18_1 = v24_1 - v18_1
            v23_1 = v16_1 + v21_1
            v24_1 = v17_1 + v20_1
            v16_1 = v16_1 - v21_1
            v17_1 = v17_1 - v20_1
            i += 4
            x2_2[-2] = v22_1
            x2_2[-1] = v19_1 - v26_1
            x11_2 += 0x10
            x12_2 += 0x10
            x13_1 -= 0x10
            x17_3 += 0x10
            x14_2 += 0x10
            x15_1 -= 0x10
            x16_1 -= 0x10
            *(x3_2 - 8) = v18_1
            *(x3_2 - 4) = v19_1 + v26_1
            result -= 0x10
            *x1_2 = sinp_2 * v23_1 - cosp_2 * v24_1
            x1_2[1] = sinp_2 * v24_1 + cosp_2 * v23_1
            *x4_2 = v6_1 * v17_1 + v7_1 * v16_1
            *(x4_2 + 4) = v7_1 * v17_1 - v6_1 * v16_1
        while (i s< sx.q(fp_1))
    
    if (x26 - 4 s<= x10_1 + 0x80)
        break
    
    float cosp
    float sinp
    result = sincosf(&sinp, &cosp, v8.d f* float.s(fp_1))
    cosp_2 = cosp
    sinp_2 = sinp
    x10_1 = fp_1
    v7_1 = cosp_2 * sinp_2 f* v11.d
    v0_1 = v9.d f* cosp_2 - v10.d f* sinp_2
    v1_1 = v9.d f* sinp_2 + v10.d f* cosp_2
    v6_1 = cosp_2 - sinp_2 * v7_1
    v2_1 = v0_1 * v1_1 f* v11.d
    v7_1 = sinp_2 - cosp_2 * v7_1
    v16_1 = v0_1 * v2_1
    v2_1 = v0_1 - v1_1 * v2_1
    v3_1 = v1_1 - v16_1

int64_t x8_3 = x20 << 2
int64_t x9_6 = x20 * 7
sinp_2 = float.s(0x3f3504f3)
float* x11_3 = &arg2[x20]
float* x10_2 = arg2 + x20 * 0xc
void* x13_3 = &arg2[x9_6]
float* x8_4 = &arg2[sx.q(x9_6.d)]
void* x14_3 = &arg2[x8_3 + x20]
float* x9_7 = &arg2[x8_3 + x20]
cosp_2 = x11_3[-2]
v6_1 = x11_3[-1]
v7_1 = x10_2[-2]
v16_1 = x10_2[-1]
v17_1 = *(x13_3 - 8)
v18_1 = x8_4[-1]
v19_1 = *(x14_3 - 8)
v20_1 = x9_7[-1]
v21_1 = v7_1 + v17_1
v7_1 = v7_1 - v17_1
v17_1 = v16_1 + v18_1
v16_1 = v16_1 - v18_1
v18_1 = cosp_2 + v19_1
cosp_2 = cosp_2 - v19_1
v19_1 = fneg(v6_1) - v20_1
v6_1 = v20_1 - v6_1
v20_1 = v18_1 + v21_1
v18_1 = v18_1 - v21_1
v21_1 = v19_1 - v17_1
v17_1 = v19_1 + v17_1
v19_1 = cosp_2 + v16_1
cosp_2 = cosp_2 - v16_1
v16_1 = v6_1 + v7_1
v6_1 = v6_1 - v7_1
x11_3[-2] = v20_1
x11_3[-1] = v21_1
x10_2[-2] = v18_1
x10_2[-1] = v17_1
*(x14_3 - 8) = v0_1 * v19_1 - v1_1 * v16_1
x9_7[-1] = v0_1 * v16_1 + v1_1 * v19_1
*(x13_3 - 8) = v3_1 * v6_1 + v2_1 * cosp_2
x8_4[-1] = v2_1 * v6_1 - v3_1 * cosp_2
cosp_2 = *x11_3
v6_1 = x11_3[1]
v7_1 = *x9_7
v16_1 = x9_7[1]
v17_1 = *x10_2
v18_1 = x10_2[1]
v19_1 = *x8_4
v20_1 = x8_4[1]
v21_1 = cosp_2 + v7_1
cosp_2 = cosp_2 - v7_1
v7_1 = v17_1 + v19_1
v17_1 = v17_1 - v19_1
v19_1 = v18_1 + v20_1
v18_1 = v18_1 - v20_1
v20_1 = fneg(v6_1)
v6_1 = v16_1 - v6_1
v16_1 = v20_1 - v16_1
v20_1 = v21_1 + v7_1
v7_1 = v21_1 - v7_1
v21_1 = cosp_2 + v18_1
cosp_2 = cosp_2 - v18_1
v18_1 = v6_1 + v17_1
v6_1 = v6_1 - v17_1
v17_1 = v16_1 - v19_1
v16_1 = v16_1 + v19_1
v19_1 = v21_1 - v18_1
v18_1 = v18_1 + v21_1
v21_1 = v6_1 + cosp_2
cosp_2 = v6_1 - cosp_2
v6_1 = float.s(0xbf3504f3)
*x11_3 = v20_1
x11_3[1] = v17_1
*x10_2 = v7_1
x10_2[1] = v16_1
*x9_7 = v19_1 * sinp_2
x9_7[1] = v18_1 * sinp_2
*x8_4 = v21_1 * v6_1
x8_4[1] = cosp_2 * v6_1
sinp_2 = x11_3[2]
cosp_2 = x11_3[3]
v6_1 = x9_7[2]
v7_1 = x9_7[3]
v16_1 = x10_2[2]
v17_1 = x10_2[3]
v18_1 = x8_4[2]
v19_1 = x8_4[3]
v21_1 = fneg(cosp_2)
v20_1 = sinp_2 + v6_1
sinp_2 = sinp_2 - v6_1
cosp_2 = v7_1 - cosp_2
v6_1 = v16_1 + v18_1
v16_1 = v16_1 - v18_1
v18_1 = v17_1 + v19_1
v17_1 = v17_1 - v19_1
v7_1 = v21_1 - v7_1
v19_1 = v20_1 + v6_1
v6_1 = v20_1 - v6_1
v20_1 = sinp_2 + v17_1
v21_1 = cosp_2 + v16_1
sinp_2 = sinp_2 - v17_1
cosp_2 = cosp_2 - v16_1
x11_3[2] = v19_1
x11_3[3] = v7_1 - v18_1
x10_2[2] = v6_1
x10_2[3] = v7_1 + v18_1
x9_7[2] = v1_1 * v20_1 - v0_1 * v21_1
x9_7[3] = v1_1 * v21_1 + v0_1 * v20_1
x8_4[2] = v2_1 * cosp_2 + v3_1 * sinp_2
x8_4[3] = v3_1 * cosp_2 - v2_1 * sinp_2
return result
