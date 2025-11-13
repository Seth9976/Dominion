// 函数: sub_108222c
// 地址: 0x108222c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg1
int32_t x8_1 = *(arg1 + muls.dp.d(arg2, 0x38) - 0x34)
double v0
double v1
double v2
double v5
int32_t x10

if (arg2 s< 1)
    v0 = 0.0
    v2 = 0.0
    v1 = 0.0
    x10 = *arg3
    
    if ((x10 & 0x80000000) == 0)
    label_1082340:
        v1 = v1 + float.d(sx.q(x9))
        v2 = v2 + float.d(sx.q(x9 * x9))
        v0 = v0 + float.d(sx.q(x10 * x9))
else
    v5.d = *(arg5 + 0x454)
    uint64_t i_1 = zx.q(arg2)
    void* x11_1 = &arg1[7]
    v1 = 0.0
    double v3 = 0.0
    v2 = 0.0
    v0 = 0.0
    double v4 = 0.0
    uint64_t i
    
    do
        double v7
        v7.d = *(x11_1 + 4)
        double v16
        v16.d = *(x11_1 + 8)
        int32_t x13_1 = *(x11_1 + 0x18)
        int32_t x12_1 = *x11_1
        i = i_1
        i_1 -= 1
        v1 = v1 + float.d(sx.q(sx.q(v7.d):4.d))
        v7.d = *(x11_1 + 0xc)
        v3 = v3 + float.d(sx.q(sx.q(v16.d):4.d))
        v16.d = *(x11_1 + 0x14)
        double v17
        v17.d = *(x11_1 - 0x14)
        int64_t v18
        v18.d = *(x11_1 - 0x10)
        v2 = v2 + float.d(sx.q(sx.q(v7.d):4.d))
        v7.d = float.s(x12_1 + x13_1)
        v0 = v0 + float.d(sx.q(sx.q(v16.d):4.d))
        v16.d = float.s(x12_1 + 1)
        v7.d = v5.d f* v7.d
        v7.d = v7.d f/ v16.d
        v16.d = *(x11_1 - 0xc)
        v7 = fconvert.d(v7.d) + fconvert.d(1.0)
        v1 = vfma_f64(v1, v7, float.d(sx.q(sx.q(v17.d):4.d)))
        v17.d = *(x11_1 - 4)
        v2 = vfma_f64(v2, v7, float.d(sx.q(sx.q(v16.d):4.d)))
        v3 = vfma_f64(v3, v7, float.d(sx.q(sx.q(v18.d):4.d)))
        v0 = vfma_f64(v0, v7, float.d(sx.q(sx.q(v17.d):4.d)))
        v4 = vfma_f64(v4 + float.d(sx.q(x13_1)), v7, float.d(sx.q(x12_1)))
        x11_1 += 0x38
    while (i != 1)
    x10 = *arg3
    
    if ((x10 & 0x80000000) == 0)
        goto label_1082340
int32_t x10_2 = *arg4

if ((x10_2 & 0x80000000) == 0)
    v1 = v1 + float.d(sx.q(x8_1))
    v2 = v2 + float.d(sx.q(x8_1 * x8_1))
    v0 = v0 + float.d(sx.q(x10_2 * x8_1))

v5 = v1 * v1
unimplemented  {fnmsub d5, d2, d4, d5}
int32_t x9_3

if (v5 <= 0.0)
    x9_3 = 1
    *arg3 = 0
else
    unimplemented  {fnmsub d2, d3, d2, d6}
    unimplemented  {fnmsub d0, d0, d4, d1}
    v1 = v2 / v5
    v0 = v0 / v5
    double temp0_6 = vfma_f64(v1, v0, float.d(sx.q(x9)))
    double temp0_7 = vfma_f64(v1, v0, float.d(sx.q(x8_1)))
    double temp0_8 = vrndx_f64(temp0_6)
    double temp0_9 = vrndx_f64(temp0_7)
    uint32_t temp0_10 = vcvtd_s32_f64(temp0_8)
    uint32_t x8_2 = vcvtd_s32_f64(temp0_9)
    *arg3 = temp0_10
    *arg4 = x8_2
    int32_t x9_2 = *arg3
    
    if (x9_2 s< 0x400)
        if (x8_2 s>= 0x400)
            goto label_1082454
        
        goto label_10823f8
    
    x9_2 = 0x3ff
    *arg3 = 0x3ff
    x8_2 = *arg4
    
    if (x8_2 s< 0x400)
    label_10823f8:
        
        if ((x9_2 & 0x80000000) != 0)
            *arg3 = 0
            x8_2 = *arg4
    else
    label_1082454:
        x8_2 = 0x3ff
        *arg4 = 0x3ff
        
        if ((*arg3 & 0x80000000) != 0)
            *arg3 = 0
            x8_2 = *arg4
    
    x9_3 = 0
    
    if ((x8_2 & 0x80000000) == 0)
        return 0

*arg4 = 0
return zx.q(x9_3)
