// 函数: sub_1091888
// 地址: 0x1091888
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg2 * arg1
float v0
float v1

if (arg2 s>= 1)
    int32_t x13_1 = x8 << 1
    int32_t x10_1 = arg1 << 2
    int32_t x11_1 = arg1 << 1
    int32_t x9_1 = 0
    int32_t i_3 = arg2
    int32_t* x7_1 = arg3
    int32_t i
    
    do
        v0 = x7_1[sx.q(x13_1 + x8)] f+ x7_1[sx.q(x8)]
        i = i_3
        i_3 -= 1
        v1 = x7_1[sx.q(x13_1)] f+ *x7_1
        *(arg4 + (sx.q(x9_1) << 2)) = v1 + v0
        *(arg4 + (sx.q(x10_1 - 1 + x9_1) << 2)) = v1 - v0
        *(arg4 + (sx.q(x11_1 - 1 + x9_1) << 2)) = *x7_1 f- x7_1[sx.q(x13_1)]
        v0 = x7_1[sx.q(x13_1 + x8)]
        v1 = x7_1[sx.q(x8)]
        int32_t x19_3 = x11_1 + x9_1
        x7_1 += zx.q(arg1) << 0x20 s>> 0x1e
        x9_1 += x10_1
        *(arg4 + (sx.q(x19_3) << 2)) = v0 - v1
    while (i != 1)

if (arg1 s<= 1)
    return 

float v2
float v3
float v5

if (arg1 != 2 && arg2 s>= 1)
    int32_t x11_2 = arg1 << 1
    int32_t x9_2 = 0
    int32_t x10_2 = 0
    int32_t x13_3 = arg1 << 2
    int64_t x16_4 = zx.q(arg1) << 0x20 s>> 0x1e
    void* x17_3 = arg3 + (sx.q(x8) << 3)
    void* x18_1 = arg3 + (sx.q(x8) << 2)
    int64_t x7_2 = sx.q(x11_2)
    void* x19_4 = arg3 + muls.dp.d(x8, 0xc)
    int32_t x20_1 = 1
    void* x21_1 = arg3
    
    do
        int64_t x22_1 = 0
        float* x23_1 = arg4 - 0xc + (sx.q(x11_2) << 2)
        void* x26_2 = arg4 - 0xc + ((x7_2 + sx.q(x11_2)) << 2)
        int64_t i_1 = 2
        
        do
            float* fp_1 = arg5 + x22_1
            void* lr_1 = x18_1 + x22_1
            v0 = *fp_1
            float* fp_2 = arg6 + x22_1
            void* lr_2 = x17_3 + x22_1
            float v4 = *fp_2
            v5 = fp_2[1]
            float v6 = *(lr_2 + 4)
            float v7 = *(lr_2 + 8)
            float* fp_3 = arg7 + x22_1
            void* lr_3 = x19_4 + x22_1
            float temp0_1 = vfma_f32(*(lr_1 + 4) * v0, *(lr_1 + 8), fp_1[1])
            unimplemented  {fnmsub s0, s3, s0, s2}
            v2 = *fp_3
            v3 = fp_3[1]
            float temp0_2 = vfma_f32(v6 * v4, v7, v5)
            unimplemented  {fnmsub s4, s7, s4, s6}
            void* fp_4 = x21_1 + x22_1
            i_1 += 2
            float temp0_3 = vfma_f32(*(lr_3 + 4) * v2, *(lr_3 + 8), v3)
            unimplemented  {fnmsub s2, s6, s2, s16}
            v6 = *(fp_4 + 4)
            v7 = *(fp_4 + 8)
            float v16 = temp0_3 + temp0_1
            v1 = temp0_3 - temp0_1
            v3 = v2 + v0
            v0 = v0 - v2
            v2 = v7 + v4
            v4 = v7 - v4
            v7 = v6 + temp0_2
            v5 = v6 - temp0_2
            float* fp_5 = arg4 + 8 + ((x7_2 + sx.q(x9_2)) << 2) + x22_1
            *(arg4 + (sx.q(x20_1) << 2) + x22_1) = v16 + v7
            *(arg4 + (sx.q(x9_2) << 2) + x22_1 + 8) = v3 + v2
            *x23_1 = v5 - v0
            x23_1[1] = v1 - v4
            x23_1 = &x23_1[-2]
            fp_5[-1] = v0 + v5
            *fp_5 = v1 + v4
            *x26_2 = v7 - v16
            *(x26_2 + 4) = v3 - v2
            x26_2 -= 8
            x22_1 += 8
        while (i_1 s< sx.q(arg1))
        
        x10_2 += 1
        x9_2 += x13_3
        x11_2 += x13_3
        x20_1 += x13_3
        x19_4 += x16_4
        x17_3 += x16_4
        x18_1 += x16_4
        x21_1 += x16_4
    while (x10_2 != arg2)

if ((arg1 != 2 && (arg1 & 1) != 0) || arg2 s< 1)
    return 

int64_t x11_5 = sx.q(arg1 + x8 - 1)
int64_t x9_4 = zx.q(arg1) << 0x20 s>> 0x1e
int64_t x8_1 = sx.q((arg2 * 3 + 1) * arg1 - 1)
int64_t x13_8 = (x11_5 + sx.q(x8)) << 2
int32_t i_2

do
    v2 = *(arg3 + (x11_5 << 2))
    v3 = *(arg3 + (x8_1 << 2))
    void* x14_4 = arg3 + x9_4
    float* x15_4 = arg4 + x9_4
    v5 = (v2 - v3) * 0.707106769f
    x15_4[-1] = v5 + *(x14_4 - 4)
    float* x16_5 = arg4 + ((sx.q(arg1) + sx.q(arg1 << 1)) << 2)
    v2 = (v3 + v2) * -0.707106769f
    x16_5[-1] = *(x14_4 - 4) - v5
    i_2 = arg2
    arg2 -= 1
    arg4 += zx.q(arg1 << 2) << 0x20 s>> 0x1e
    *x15_4 = v2 - *(arg3 + x13_8)
    v3 = *(arg3 + x13_8)
    arg3 = x14_4
    *x16_5 = v3 + v2
while (i_2 != 1)
