// 函数: sub_1093460
// 地址: 0x1093460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

int32_t x8_1 = arg2 * arg1
int32_t x9_1 = arg1 << 1
int32_t x10_1 = x8_1 << 1
int32_t x11_1 = x9_1 + arg1
int32_t i_2 = arg2
int32_t* x18_1 = arg4
int32_t* x6_1 = arg3
float v2
float v3
int32_t i

do
    int32_t* x7_1 = x6_1 + (zx.q(x9_1) << 0x20 s>> 0x1e)
    v2 = *x6_1
    v3 = x7_1[-1]
    x6_1 += zx.q(x11_1) << 0x20 s>> 0x1e
    i = i_2
    i_2 -= 1
    *x18_1 = vfma_f32(v2, v3, fconvert.s(2f))
    v2 = v2 - v3
    v3 = *x7_1 * 1.73205078f
    x18_1[sx.q(x8_1)] = v2 - v3
    x18_1[sx.q(x10_1)] = v3 + v2
    x18_1 += zx.q(arg1) << 0x20 s>> 0x1e
while (i != 1)

if (arg1 == 1 || arg2 s< 1)
    return 

int32_t x12_2 = 0
int32_t x13_2 = 0
float v1 = fconvert.s(0.5f)
void* x18_2 = &arg4[2]

do
    if (arg1 s>= 3)
        int64_t x3 = 0
        void* x19_1 = &arg3[sx.q(x9_1)]
        int64_t x21_1 = -0xc
        int64_t i_1 = 2
        
        do
            void* x23_1 = x19_1 + x3
            float* x24_1 = x19_1 + x21_1
            int32_t* x25_1 = &arg3[2 + sx.q(x12_2)] + x3
            float v4 = x25_1[-1]
            float* x26_1 = x18_2 + x3
            i_1 += 2
            v2 = *x24_1 + *(x23_1 + 4)
            x26_1[-1] = v4 + v2
            v3 = *(x23_1 + 8)
            float v5 = x24_1[1]
            float v6 = *x25_1
            float temp0_2 = vfms_f64(v4, v2, v1)
            float* x25_2 = arg5 + x3
            *x26_1 = v6 + v3 - v5
            float temp0_3 = vfma_f32(v6, v5 - v3, v1)
            int32_t* x26_2 = &arg4[2 + sx.q(x8_1)] + x3
            float* x23_2 = arg6 + x3
            v4 = (*(x23_1 + 4) - *x24_1) * 0.866025388f
            v5 = (x24_1[1] + *(x23_1 + 8)) * 0.866025388f
            unimplemented  {fnmsub s16, s6, s16, s17}
            x26_2[-1] = *x25_2
            v3 = temp0_3 - v4
            float* x24_2 = &arg4[2 + sx.q(x10_1)] + x3
            *x26_2 = vfma_f32(*x25_2 * (v4 + temp0_3), x25_2[1], temp0_2 - v5)
            *x23_2
            x3 += 8
            x21_1 -= 8
            unimplemented  {fnmsub s4, s6, s2, s4}
            x24_2[-1] = x23_2[1] * v3
            *x24_2 = vfma_f32(*x23_2 * v3, x23_2[1], v5 + temp0_2)
        while (i_1 s< sx.q(arg1))
    
    x13_2 += 1
    x9_1 += x11_1
    x12_2 += x11_1
    x10_1 += arg1
    x8_1 += arg1
    x18_2 += zx.q(arg1) << 0x20 s>> 0x1e
while (x13_2 != arg2)
