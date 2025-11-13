// 函数: sub_1093280
// 地址: 0x1093280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_1 = arg2 * arg1
int32_t x8 = arg1 << 1

if (arg2 s>= 1)
    int32_t x10_1 = 0
    int32_t i_3 = arg2
    float* x15_1 = arg4
    int32_t i
    
    do
        int64_t x16_1 = zx.q(x10_1) << 0x20 s>> 0x1e
        int64_t x17_2 = zx.q(x8 - 1 + x10_1) << 0x20 s>> 0x1e
        i = i_3
        i_3 -= 1
        x10_1 += x8
        *x15_1 = *(arg3 + x17_2) + *(arg3 + x16_1)
        x15_1[sx.q(x9_1)] = *(arg3 + x16_1) - *(arg3 + x17_2)
        x15_1 += zx.q(arg1) << 0x20 s>> 0x1e
    while (i != 1)

if (arg1 s<= 1)
    return 

int32_t x11_3
float v0

if (arg1 != 2)
    if (arg2 s>= 1)
        int32_t x11_2 = 0
        int32_t x12_2 = 0
        int32_t x4 = 1
        void* x5_1 = &arg4[2]
        int32_t x6_1 = x8
        int32_t x7_1 = x9_1
        
        do
            int64_t x19_1 = 0
            void* x20_1 = &arg3[2 + sx.q(x11_2)]
            void* x21_1 = arg3 - 0xc + (sx.q(x6_1) << 2)
            void* x22_1 = &arg3[sx.q(x4)]
            int64_t i_1 = 2
            
            do
                void* x25_1 = x5_1 + x19_1
                void* x26_1 = &arg4[2 + sx.q(x7_1)] + x19_1
                i_1 += 2
                *(x25_1 - 4) = *x21_1 + *(x22_1 + x19_1)
                float v2 = *x21_1
                float v3 = *(x22_1 + x19_1)
                *x25_1 = *(x20_1 + x19_1) - *(x21_1 + 4)
                v0 = *(x20_1 + x19_1)
                float* x25_2 = arg5 + 4 + x19_1
                x19_1 += 8
                v0 = *(x21_1 + 4) + v0
                x21_1 -= 8
                unimplemented  {fnmsub s1, s1, s2, s3}
                *(x26_1 - 4) = x25_2[-1]
                *x26_1 = vfma_f32(x25_2[-1] * v0, *x25_2, v3 - v2)
            while (i_1 s< sx.q(arg1))
            
            x12_2 += 1
            x11_2 += x8
            x7_1 += arg1
            x6_1 += x8
            x5_1 += zx.q(arg1) << 0x20 s>> 0x1e
            x4 += x8
        while (x12_2 != arg2)
    
    if (arg1 s< 0)
        x11_3 = arg1 + 1
    else
        x11_3 = arg1

if ((arg1 != 2 && arg1 - (x11_3 & 0xfffffffe) == 1) || arg2 s< 1)
    return 

int64_t x10_3 = zx.q(arg1 - 1) << 0x20 s>> 0x1e
void* x12_4 = arg3 + x10_3 + 4
int32_t i_2

do
    v0 = *(x12_4 - 4)
    i_2 = arg2
    arg2 -= 1
    *(arg4 + x10_3) = v0 + v0
    v0 = *x12_4
    x12_4 += zx.q(x8) << 0x20 s>> 0x1e
    *(&arg4[sx.q(x9_1)] + x10_3) = fneg(v0 + v0)
    x10_3 += zx.q(arg1) << 0x20 s>> 0x1e
while (i_2 != 1)
