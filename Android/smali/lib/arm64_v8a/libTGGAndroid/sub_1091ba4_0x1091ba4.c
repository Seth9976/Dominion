// 函数: sub_1091ba4
// 地址: 0x1091ba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1 << 1
float v0
float v1

if (arg2 s>= 1)
    int32_t x9_1 = 0
    int32_t i_3 = arg2
    int32_t* x14_1 = arg3
    int32_t i
    
    do
        int32_t x15_1 = x8 - 1 + x9_1
        i = i_3
        i_3 -= 1
        *(arg4 + (sx.q(x9_1) << 2)) = x14_1[sx.q(arg2 * arg1)] f+ *x14_1
        v0 = *x14_1
        v1 = x14_1[sx.q(arg2 * arg1)]
        x14_1 += zx.q(arg1) << 0x20 s>> 0x1e
        x9_1 += x8
        *(arg4 + (sx.q(x15_1) << 2)) = v0 - v1
    while (i != 1)

if (arg1 s<= 1)
    return 

int32_t x9_3

if (arg1 != 2)
    if (arg2 s>= 1)
        int32_t x9_2 = 0
        int32_t x10_2 = 0
        int64_t x13_1 = zx.q(arg1) << 0x20 s>> 0x1e
        void* x16_3 = arg3 + (sx.q(arg2 * arg1) << 2) + 8
        int32_t x17_1 = 1
        void* x18_1 = arg3
        int32_t x4 = x8
        
        do
            int64_t x5_1 = 0
            void* x7_1 = arg4 - 0xc + (sx.q(x4) << 2)
            int64_t i_1 = 2
            
            do
                float* x21_1 = arg5 + 4 + x5_1
                int32_t* x22_1 = x16_3 + x5_1
                v0 = x21_1[-1]
                v1 = *x21_1
                float v2 = x22_1[-1]
                int32_t v3 = *x22_1
                void* x21_2 = x18_1 + x5_1
                i_1 += 2
                float v5 = v1 * v2
                unimplemented  {fnmsub s5, s3, s0, s5}
                *(arg4 + 8 + (sx.q(x9_2) << 2) + x5_1) = v5 + *(x21_2 + 8)
                float v4 = *(x21_2 + 8)
                float temp0_1 = vfma_f32(v2 * v0, v3, v1)
                *(x7_1 + 4) = v5 - v4
                *(arg4 + (sx.q(x17_1) << 2) + x5_1) = *(x21_2 + 4) + temp0_1
                x5_1 += 8
                *x7_1 = *(x21_2 + 4) - temp0_1
                x7_1 -= 8
            while (i_1 s< sx.q(arg1))
            
            x10_2 += 1
            x9_2 += x8
            x4 += x8
            x17_1 += x8
            x16_3 += x13_1
            x18_1 += x13_1
        while (x10_2 != arg2)
    
    if (arg1 s< 0)
        x9_3 = arg1 + 1
    else
        x9_3 = arg1

if ((arg1 != 2 && arg1 - (x9_3 & 0xfffffffe) == 1) || arg2 s< 1)
    return 

int64_t x9_6 = zx.q(arg1) << 0x20 s>> 0x1e
int64_t x10_6 = sx.q((arg2 + 1) * arg1 - 1)
int32_t i_2

do
    v0 = *(arg3 + (x10_6 << 2))
    float* x11_4 = arg4 + x9_6
    arg3 += x9_6
    i_2 = arg2
    arg2 -= 1
    *x11_4 = fneg(v0)
    arg4 += zx.q(x8) << 0x20 s>> 0x1e
    x11_4[-1] = *(arg3 - 4)
while (i_2 != 1)
