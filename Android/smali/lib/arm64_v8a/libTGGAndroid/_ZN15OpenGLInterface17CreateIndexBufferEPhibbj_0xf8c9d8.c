// 函数: _ZN15OpenGLInterface17CreateIndexBufferEPhibbj
// 地址: 0xf8c9d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = arg4.d
int32_t x19 = arg3.d
int32_t* x8_1 = *gOpenGLInterface + 0x4090
int32_t* x21 = arg2

if (*x8_1 != 0)
    *x8_1 = 0
    glBindVertexArray(0)
    uint64_t x8_2 = *gpRenderAppData
    *(x8_2 + 0x14) += 1

int32_t var_64
glGenBuffers(1, &var_64)
int32_t x1_1 = var_64

if (zx.d(*gGLHasVAO) != 0)
    glBindBuffer(0x8893, x1_1)
else
    int32_t* x8_5 = *gOpenGLInterface + 0x4098
    
    if (*x8_5 != x1_1)
        *x8_5 = x1_1
        glBindBuffer(0x8893, x1_1)

uint64_t x25 = zx.q(*(arg1 + 0x4258))
int32_t x20_1

if ((arg5 & 1) != 0)
    x20_1 = 0x88e0
else
    x20_1 = 0x88e4

int32_t x8_7
int64_t x27

if (x25.d != *(arg1 + 0x4250))
    x27 = *(arg1 + 0x4248)
    x8_7 = *(x27 + x25 * 0x158 + 0x150)
else
    x8_7 = x25.d + 1
    *(arg1 + 0x4250) = x8_7
    x27 = *(arg1 + 0x4248)

*(arg1 + 0x4258) = x8_7
int128_t v0
v0.q = 0
v0:8.q = 0
int32_t* x26 = x27 + x25 * 0x158
__builtin_memset(x26, 0, 0x150)
x26[0x54] = x25.d | *(arg1 + 0x4260) << 0x10
int32_t x8_11 = *(arg1 + 0x4260)
int32_t x8_12

if (x8_11 == 0xffff)
    x8_12 = 1
else
    x8_12 = x8_11 + 1

*(arg1 + 0x425c) += 1
*(arg1 + 0x4260) = x8_12
x26[3].b = arg5.b & 1
*x26 = var_64
x26[1] = 1
int32_t entry_x5

if (entry_x5 == 0)
label_f8cbe4:
    void* x9_11 = x27 + x25 * 0x158
    *(x9_11 + 8) = x19
    *(x9_11 + 0x146) = x24.b & 1
    glBufferData(0x8893, sx.q(x19), x21, zx.q(x20_1), v0)
else
    int32_t x8_14 = entry_x5 & 0xffff
    
    if (x8_14 u>= *(arg1 + 0x4250))
        goto label_f8cbe4
    
    int64_t x12_1 = *(arg1 + 0x4248)
    void* x9_7 = x12_1 + mulu.dp.d(x8_14, 0x158)
    void* const x22_1
    
    if (*(x9_7 + 0x150) == entry_x5)
        x22_1 = x9_7
    else
        x22_1 = nullptr
    
    if (x21 == 0 || x22_1 == 0 || zx.d(*(x22_1 + 0x144)) == 0)
        goto label_f8cbe4
    
    uint64_t x13_1 = zx.q(x8_14)
    int32_t x8_15 = x24 & 1
    int32_t x9_9
    
    x9_9 = x8_15 != 0 ? 2 : 1
    
    int32_t x28_1 = x19 s>> x9_9
    char x8_20
    uint64_t x13_2
    int32_t* x23_1
    int32_t x24_1
    int64_t fp_1
    
    if (x8_15 != 0)
    label_f8cba0:
        int32_t x0 = x28_1 << 2
        fp_1 = x12_1
        int32_t* x0_1
        uint128_t v0_1
        uint128_t v1_1
        uint128_t v2_1
        x0_1, v0_1, v1_1, v2_1 = XMalloc(x0)
        x23_1 = x0_1
        
        if (x28_1 s< 1)
            x24_1 = x0
            x13_2 = x13_1
        else
            uint64_t x9_10 = zx.q(x28_1)
            int64_t i_7 = 0
            
            if ((x24 & 1) == 0)
                void* x12_2
                
                if (x28_1 u>= 8)
                    x12_2 = &x23_1[x9_10]
                
                if (x28_1 u< 8 || ((x23_1 u< x22_1 + 0x141 ? 1 : 0)
                        & (x12_2 u> x22_1 + 0x140 ? 1 : 0) & 1) != 0)
                    x24_1 = x0
                label_f8cd5c:
                    
                    do
                        x23_1[i_7] = *(x22_1 + 0x140) + zx.d(*(x21 + (i_7 << 1)))
                        i_7 += 1
                    while (x9_10 != i_7)
                else
                    x24_1 = x0
                    
                    if (((x23_1 u< x21 + (x9_10 << 1) ? 1 : 0) & (x12_2 u> x21 ? 1 : 0) & 1) != 0)
                        goto label_f8cd5c
                    
                    int32_t temp0_1 = *(x22_1 + 0x140)
                    v0_1.d = temp0_1
                    v0_1:4.d = temp0_1
                    v0_1:8.d = temp0_1
                    v0_1:0xc.d = temp0_1
                    i_7 = x9_10 & 0xfffffff8
                    void* x11_7 = &x21[2]
                    void* x12_4 = &x23_1[4]
                    int64_t i_5 = i_7
                    int64_t i
                    
                    do
                        v1_1.q = *(x11_7 - 8)
                        v2_1.q = *x11_7
                        x11_7 += 0x10
                        i = i_5
                        i_5 -= 8
                        v1_1 = vaddw_u16(v0_1, v1_1)
                        v2_1 = vaddw_u16(v0_1, v2_1)
                        *(x12_4 - 0x10) = v1_1
                        *x12_4 = v2_1
                        x12_4 += 0x20
                    while (i != 8)
                    
                    if (i_7 != x9_10)
                        goto label_f8cd5c
            else if (x28_1 u>= 8)
                void* x13_5 = &x23_1[x9_10]
                
                if (((x23_1 u< x22_1 + 0x141 ? 1 : 0) & (x13_5 u> x22_1 + 0x140 ? 1 : 0) & 1) != 0)
                    x24_1 = x0
                    goto label_f8ce98
                
                x24_1 = x0
                
                if (((x23_1 u< &x21[x9_10] ? 1 : 0) & (x13_5 u> x21 ? 1 : 0) & 1) != 0)
                    goto label_f8ce98
                
                int32_t temp0_2 = *(x22_1 + 0x140)
                v0_1.d = temp0_2
                v0_1:4.d = temp0_2
                v0_1:8.d = temp0_2
                v0_1:0xc.d = temp0_2
                i_7 = x9_10 & 0xfffffff8
                int64_t x11_14 = 0
                int64_t i_4 = i_7
                int64_t i_1
                
                do
                    void* x13_6 = x21 + x11_14
                    void* x13_7 = x23_1 + x11_14
                    i_1 = i_4
                    i_4 -= 8
                    x11_14 += 0x20
                    v2_1 = *(x13_6 + 0x10) + v0_1
                    *x13_7 = *x13_6 + v0_1
                    *(x13_7 + 0x10) = v2_1
                while (i_1 != 8)
                
                if (i_7 != x9_10)
                    goto label_f8ce98
            else
                x24_1 = x0
            label_f8ce98:
                
                do
                    i_7 += 1
                    x23_1[i_7] = x21[i_7] + *(x22_1 + 0x140)
                while (x9_10 != i_7)
            
            x13_2 = x13_1
        
        x8_20 = 1
    else if (x28_1 s<= 0)
        x24_1 = x28_1 << 1
        fp_1 = x12_1
        x13_2 = x13_1
        x23_1 = XMalloc(x24_1)
        x8_20 = 0
    else
        uint64_t fp_2 = zx.q(x28_1)
        int64_t x8_18 = 0
        
        while (true)
            if (*(x22_1 + 0x140) + zx.d(*(x21 + x8_18)) s>= 0x10000)
                goto label_f8cba0
            
            x8_18 += 2
            
            if (fp_2 << 1 == x8_18)
                int32_t x0_3 = x28_1 << 1
                x24_1 = x0_3
                int32_t* x0_4
                int128_t v0_2
                int128_t v1_2
                int128_t v2_2
                x0_4, v0_2, v1_2, v2_2 = XMalloc(x0_3)
                x23_1 = x0_4
                
                if (x28_1 s< 1)
                    fp_1 = x12_1
                    x13_2 = x13_1
                    x8_20 = 0
                else
                    int64_t i_6 = 0
                    
                    if (x28_1 u>= 8)
                        uint64_t x10_3 = fp_2 << 1
                        void* x12_9 = x23_1 + x10_3
                        
                        if (((x23_1 u< x22_1 + 0x141 ? 1 : 0) & (x12_9 u> x22_1 + 0x140 ? 1 : 0)
                                & 1) != 0)
                            x13_2 = x13_1
                            goto label_f8cf08
                        
                        x13_2 = x13_1
                        
                        if (((x23_1 u< x21 + x10_3 ? 1 : 0) & (x12_9 u> x21 ? 1 : 0) & 1) != 0)
                            goto label_f8cf08
                        
                        int16_t temp0_3 = *(x22_1 + 0x140)
                        v0_2.w = temp0_3
                        v0_2:2.w = temp0_3
                        v0_2:4.w = temp0_3
                        v0_2:6.w = temp0_3
                        i_6 = fp_2 & 0xfffffff8
                        int64_t x10_7 = 0
                        int64_t i_3 = i_6
                        int64_t i_2
                        
                        do
                            void* x12_10 = x21 + x10_7
                            v1_2.q = *x12_10
                            v2_2.q = *(x12_10 + 8)
                            void* x12_11 = x23_1 + x10_7
                            i_2 = i_3
                            i_3 -= 8
                            x10_7 += 0x10
                            *x12_11 = (v1_2 + v0_2).q
                            *(x12_11 + 8) = (v2_2 + v0_2).q
                        while (i_2 != 8)
                        
                        if (i_6 != fp_2)
                            goto label_f8cf08
                    else
                        x13_2 = x13_1
                    label_f8cf08:
                        
                        do
                            int64_t x11_20 = i_6 << 1
                            i_6 += 1
                            *(x23_1 + x11_20) = *(x21 + x11_20) + *(x22_1 + 0x140)
                        while (fp_2 != i_6)
                    
                    fp_1 = x12_1
                    x8_20 = 0
                
                break
    
    void* x10_8 = x27 + x25 * 0x158
    *(x10_8 + 8) = x19
    *(x10_8 + 0x146) = x8_20
    int32_t x8_21 = *(fp_1 + x13_2 * 0x158 + 0x140)
    *(x10_8 + 0x144) = 1
    *(x10_8 + 0x140) = x8_21
    glBufferData(0x8893, sx.q(x24_1), x23_1, zx.q(x20_1))
    XFree(x23_1)

return zx.q(x26[0x54])
