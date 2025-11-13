// 函数: spVertexAttachment_computeWorldVertices
// 地址: 0xfb745c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_2 = *(arg2 + 8)
int32_t x13 = *(arg2 + 0x34)
int64_t x10 = *(arg2 + 0x38)
int64_t x8 = *(arg1 + 0x30)
int64_t x17 = *(arg1 + 0x40)
int32_t x12 = (arg4 s>> 1) * arg7
int32_t x15 = x12 + arg6
float v0
float v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5

if (x8 == 0)
    int64_t x13_1
    
    x13_1 = x13 s> 0 ? x10 : x17
    
    if (x12 s>= 1)
        v0 = *(x9_2 + 0x6c)
        v1 = *(x9_2 + 0x78)
        int64_t i = sx.q(arg6)
        void* x12_3 = x13_1 + (sx.q(arg3) << 2) + 4
        void* x13_3 = arg5 + (sx.q(arg6) << 2) + 4
        
        do
            v2.d = *(x12_3 - 4)
            v3.d = *x12_3
            v4.d = *(x9_2 + 0x64)
            v5.d = *(x9_2 + 0x68)
            i += sx.q(arg7)
            x12_3 += 8
            v4.d = v2.d f* v4.d
            v5.d = v3.d f* v5.d
            v4.d = v4.d f+ v5.d
            v4.d = v0 f+ v4.d
            *(x13_3 - 4) = v4.d
            v4.d = *(x9_2 + 0x70)
            v5.d = *(x9_2 + 0x74)
            v2.d = v2.d f* v4.d
            v3.d = v3.d f* v5.d
            v2.d = v2.d f+ v3.d
            v2.d = v1 f+ v2.d
            *x13_3 = v2.d
            x13_3 += zx.q(arg7) << 0x20 s>> 0x1e
        while (i s< sx.q(x15))
    
    return 

void* x9 = *(x9_2 + 8)
int64_t x9_1
int32_t x11_1
int32_t x16_1
bool cond:1_1
bool cond:2_1

if (arg3 s>= 1)
    x11_1 = 0
    x16_1 = 0
    int32_t x14_1 = 0
    
    do
        arg1 = zx.q(*(x8 + (sx.q(x11_1) << 2)))
        x14_1 += 2
        x11_1 = x11_1 + arg1.d + 1
        x16_1 += arg1.d
    while (x14_1 s< arg3)
    
    x9_1 = *(x9 + 0x10)
    cond:1_1 = x12 s< 1
    cond:2_1 = x12 s< 1
    
    if (x13 == 0)
        goto label_fb7630
    
    goto label_fb74c0

x16_1 = 0
x11_1 = 0
x9_1 = *(x9 + 0x10)
cond:1_1 = x12 s< 1
cond:2_1 = x12 s< 1

if (x13 != 0)
label_fb74c0:
    
    if (not(cond:1_1))
        int32_t x12_1 = x16_1 << 1
        int64_t i_1 = sx.q(arg6)
        int32_t x16_2 = x12_1 + x16_1
        
        do
            int32_t x1 = *(x8 + (sx.q(x11_1) << 2))
            int32_t x0 = x11_1 + 1
            
            if (x1 s< 1)
                v1 = 0f
                x11_1 = x0
                v0 = 0f
            else
                x11_1 = x1 + x0
                int32_t* x0_1 = x8 + (sx.q(x0) << 2)
                void* x1_1 = x17 + 8 + (sx.q(x16_2) << 2)
                int64_t* x2 = x10 + (sx.q(x12_1) << 2)
                v0 = 0f
                int64_t j_2 = sx.q(x11_1) - sx.q(x0)
                v1 = 0f
                int64_t j
                
                do
                    int64_t x5_1 = sx.q(*x0_1)
                    x0_1 = &x0_1[1]
                    v2.q = *(x1_1 - 8)
                    j = j_2
                    j_2 -= 1
                    x16_2 += 3
                    void* x5_2 = *(x9_1 + (x5_1 << 3))
                    v3.q = *x2
                    x2 = &x2[1]
                    x12_1 += 2
                    v4.q = *(x5_2 + 0x64)
                    v5.q = *(x5_2 + 0x70)
                    int128_t v2_1 = vadd_f32(v2, v3)
                    v3.d = *(x5_2 + 0x6c)
                    v4 = vmul_f32(v2_1, v4, 0)
                    v2 = vmul_f32(v2_1, v5, 0)
                    v5.d = *(x5_2 + 0x78)
                    v4.d = v4.d f+ v4:4.d
                    v3.d = v3.d f+ v4.d
                    v4.d = *x1_1
                    x1_1 += 0xc
                    v2.d = v2.d f+ v2:4.d
                    v2.d = v5.d f+ v2.d
                    v3.d = v4.d f* v3.d
                    v2.d = v4.d f* v2.d
                    v1 = v1 f+ v3.d
                    v0 = v0 f+ v2.d
                while (j != 1)
            
            arg1 = arg5 + (i_1 << 2)
            i_1 += sx.q(arg7)
            *arg1 = v1
            *(arg1 + 4) = v0
        while (i_1 s< sx.q(x15))
else
label_fb7630:
    
    if (not(cond:2_1))
        int32_t x10_2 = x16_1 * 3
        int64_t i_2 = sx.q(arg6)
        
        do
            int32_t x17_2 = *(x8 + (sx.q(x11_1) << 2))
            int32_t x16_4 = x11_1 + 1
            
            if (x17_2 s< 1)
                v1 = 0f
                v0 = 0f
                x11_1 = x16_4
            else
                x11_1 = x17_2 + x16_4
                int32_t* x16_5 = x8 + (sx.q(x16_4) << 2)
                void* x17_3 = x17 + 8 + (sx.q(x10_2) << 2)
                v0 = 0f
                arg1 = sx.q(x11_1) - sx.q(x16_4)
                v1 = 0f
                void* j_1
                
                do
                    int64_t x1_3 = sx.q(*x16_5)
                    x16_5 = &x16_5[1]
                    v2.d = *(x17_3 - 8)
                    v3.d = *(x17_3 - 4)
                    j_1 = arg1
                    arg1 -= 1
                    x10_2 += 3
                    void* x1_4 = *(x9_1 + (x1_3 << 3))
                    v4.d = *(x1_4 + 0x64)
                    v5.d = *(x1_4 + 0x6c)
                    v4.d = v2.d f* v4.d
                    v2.d = v2.d f* *(x1_4 + 0x70)
                    v4.d = v4.d f+ v3.d f* *(x1_4 + 0x68)
                    v4.d = v5.d f+ v4.d
                    v3.d = v3.d f* *(x1_4 + 0x74)
                    v2.d = v2.d f+ v3.d
                    v3.d = *x17_3
                    x17_3 += 0xc
                    v2.d = *(x1_4 + 0x78) f+ v2.d
                    v4.d = v3.d f* v4.d
                    v2.d = v3.d f* v2.d
                    v1 = v1 f+ v4.d
                    v0 = v0 f+ v2.d
                while (j_1 != 1)
            
            float* x16_3 = arg5 + (i_2 << 2)
            i_2 += sx.q(arg7)
            *x16_3 = v1
            x16_3[1] = v0
        while (i_2 s< sx.q(x15))
