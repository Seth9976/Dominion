// 函数: sub_1092f38
// 地址: 0x1092f38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(arg2 * arg1)
int32_t x9 = arg1 << 2
int32_t x10 = arg1 << 1
float v0
float v1
float v2
float v3
float v4

if (arg2 s>= 1)
    int64_t x11_1 = sx.q(x21.d)
    int32_t x13_1 = x9 - 1
    int32_t* x18_1 = arg4
    int32_t i_3 = arg2
    int32_t* x19_1 = arg3
    int32_t i
    
    do
        int32_t* x20_1 = x19_1 + (zx.q(x10) << 0x20 s>> 0x1e)
        v0 = *x19_1
        v1 = arg3[sx.q(x13_1)]
        v2 = x20_1[-1]
        v3 = *x20_1
        x19_1 += zx.q(x9) << 0x20 s>> 0x1e
        x13_1 += x9
        v4 = v0 - v1
        v0 = v1 + v0
        v1 = v2 + v2
        v2 = v3 + v3
        i = i_3
        i_3 -= 1
        *x18_1 = v0 + v1
        x18_1[x11_1] = v4 - v2
        *(x18_1 + ((x21 & 0xffffffff) << 0x20 s>> 0x1d)) = v0 - v1
        x18_1[x11_1 + (sx.q(x21.d) << 1)] = v4 + v2
        x18_1 += zx.q(arg1) << 0x20 s>> 0x1e
    while (i != 1)

int32_t x14_3 = arg1 - 1

if (arg1 s<= 1)
    return 

int32_t x8_7
float v5
float v6

if (arg1 != 2)
    if (arg2 s>= 1)
        int32_t x8_1 = x21.d
        int32_t x12_2 = 0
        int32_t x13_2 = 0
        int64_t x15_2 = zx.q(arg1) << 0x20 s>> 0x1e
        void* x21_1 = arg4
        void* x16_3 = &arg4[sx.q(x8_1) * 2]
        void* x17_2 = &arg4[sx.q(x8_1)]
        int32_t x18_2 = x10 + 1
        void* x19_2 = arg4 + muls.dp.d(x8_1, 0xc)
        int32_t x20_2 = 1
        int32_t x22_1 = x9
        
        do
            int64_t x23_1 = 0
            void* x26_1 = &arg3[sx.q(x10)]
            int64_t fp_1 = -0xc
            int64_t i_1 = 2
            
            do
                float* x11_2 = &arg3[sx.q(x22_1)] + fp_1
                v1 = *x11_2
                v2 = x11_2[1]
                float* x11_3 = x26_1 + fp_1
                v0 = *(&arg3[2 + sx.q(x12_2)] + x23_1)
                v3 = *(&arg3[sx.q(x20_2)] + x23_1)
                v4 = *(x26_1 + x23_1 + 8)
                v5 = *x11_3
                v6 = x11_3[1]
                float v7 = *(&arg3[sx.q(x18_2)] + x23_1)
                float v16 = v0 - v2
                float v18 = v1 + v3
                float v17 = v4 - v6
                float v19 = v5 + v7
                void* x8_3 = x21_1 + x23_1
                *(x8_3 + 4) = v19 + v18
                *(x8_3 + 8) = v17 + v16
                float* x8_4 = arg5 + 4 + x23_1
                v0 = v2 + v0
                v2 = v6 + v4
                v1 = v3 - v1
                v3 = v7 - v5
                v7 = v3 + v0
                void* x11_4 = x17_2 + x23_1
                unimplemented  {fnmsub s4, s5, s6, s4}
                *(x11_4 + 4) = *x8_4 * v7
                float* x8_5 = arg6 + 4 + x23_1
                v0 = v0 - v3
                *(x11_4 + 8) = vfma_f32(x8_4[-1] * v7, *x8_4, v1 - v2)
                v7 = v16 - v17
                void* x11_5 = x16_3 + x23_1
                unimplemented  {fnmsub s4, s6, s5, s4}
                *(x11_5 + 4) = *x8_5 * v7
                float* x8_6 = arg7 + x23_1
                i_1 += 2
                *(x11_5 + 8) = vfma_f32(x8_5[-1] * v7, *x8_5, v18 - v19)
                *x8_6
                void* x11_6 = x19_2 + x23_1
                x23_1 += 8
                fp_1 -= 8
                unimplemented  {fnmsub s2, s4, s1, s2}
                *(x11_6 + 4) = x8_6[1] * v0
                *(x11_6 + 8) = vfma_f32(*x8_6 * v0, x8_6[1], v1 + v2)
            while (i_1 s< sx.q(arg1))
            
            x13_2 += 1
            x12_2 += x9
            x10 += x9
            x22_1 += x9
            x19_2 += x15_2
            x16_3 += x15_2
            x17_2 += x15_2
            x21_1 += x15_2
            x18_2 += x9
            x20_2 += x9
        while (x13_2 != arg2)
    
    if (arg1 s< 0)
        x8_7 = arg1 + 1
    else
        x8_7 = arg1

if ((arg1 != 2 && arg1 - (x8_7 & 0xfffffffe) == 1) || arg2 s< 1)
    return 

int64_t x11_7 = sx.q(x21.d)
int64_t x12_3 = zx.q(arg1) << 0x20 s>> 0x1e
void* x13_3 = &arg4[sx.q(x14_3)]
int64_t x10_1 = 0
void* x15_4 = &arg4[x11_7 + sx.q(x14_3)]
int32_t i_2

do
    float* x17_3 = arg3 + x12_3 - 4 + x10_1
    float* x18_3 = &arg3[sx.q(arg1 * 3)] - 4 + x10_1
    v2 = *x17_3
    v3 = x17_3[1]
    v5 = *x18_3
    v4 = x18_3[1]
    i_2 = arg2
    arg2 -= 1
    x10_1 += zx.q(x9) << 0x20 s>> 0x1e
    v6 = v4 + v3
    v3 = v4 - v3
    v4 = v2 - v5
    v2 = v5 + v2
    *x13_3 = v2 + v2
    *x15_4 = (v4 - v6) * 1.41421354f
    *(x13_3 + ((x21 & 0xffffffff) << 0x20 s>> 0x1d)) = v3 + v3
    *(x13_3 + ((x11_7 + (sx.q(x21.d) << 1)) << 2)) = (v4 + v6) * -1.41421354f
    x13_3 += x12_3
    x15_4 += x12_3
while (i_2 != 1)
