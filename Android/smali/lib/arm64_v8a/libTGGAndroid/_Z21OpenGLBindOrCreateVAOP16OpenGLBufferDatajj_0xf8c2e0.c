// 函数: _Z21OpenGLBindOrCreateVAOP16OpenGLBufferDatajj
// 地址: 0xf8c2e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int32_t* x23

if (zx.d(*(arg1 + 0x144)) == 0)
    x23 = arg1 + 0x14
label_f8c34c:
    int64_t x8_4
    
    if (x23[1] != arg2 || x23[2] != arg3)
        if (x23[4] == arg2 && x23[5] == arg3)
            x8_4 = 1
            goto label_f8c5f0
        
        if (x23[7] == arg2 && x23[8] == arg3)
            x8_4 = 2
            goto label_f8c5f0
        
        if (x23[0xa] == arg2 && x23[0xb] == arg3)
            x8_4 = 3
            goto label_f8c5f0
        
        if (x23[0xd] == arg2 && x23[0xe] == arg3)
            x8_4 = 4
            goto label_f8c5f0
        
        if (x23[0x10] == arg2 && x23[0x11] == arg3)
            x8_4 = 5
            goto label_f8c5f0
        
        if (x23[0x13] == arg2 && x23[0x14] == arg3)
            x8_4 = 6
            goto label_f8c5f0
        
        if (x23[0x16] == arg2 && x23[0x17] == arg3)
            x8_4 = 7
            goto label_f8c5f0
        
        if (x23[0x19] == arg2 && x23[0x1a] == arg3)
            x8_4 = 8
            goto label_f8c5f0
        
        if (x23[0x1c] == arg2 && x23[0x1d] == arg3)
            x8_4 = 9
            goto label_f8c5f0
        
        if (x23[0x1f] == arg2 && x23[0x20] == arg3)
            x8_4 = 0xa
            goto label_f8c5f0
        
        if (x23[0x22] == arg2 && x23[0x23] == arg3)
            x8_4 = 0xb
            goto label_f8c5f0
        
        if (x23[0x25] == arg2 && x23[0x26] == arg3)
            x8_4 = 0xc
            goto label_f8c5f0
        
        if (x23[0x28] == arg2 && x23[0x29] == arg3)
            x8_4 = 0xd
            goto label_f8c5f0
        
        if (x23[0x2b] == arg2 && x23[0x2c] == arg3)
            x8_4 = 0xe
            goto label_f8c5f0
        
        if (x23[0x2e] != arg2 || x23[0x2f] != arg3)
            goto label_f8c820
        
        x8_4 = 0xf
        goto label_f8c5f0
    
    x8_4 = 0
label_f8c5f0:
    int32_t x0 = x23[x8_4 * 3]
    int32_t* x8_36 = *gOpenGLInterface + 0x4090
    
    if (*x8_36 == x0)
        return 1
    
    *x8_36 = x0
    glBindVertexArray(x0)
    result = 1
else
    uint64_t x8_1 = zx.q(*(arg1 + 0xe0))
    uint64_t x9_1 = *gOpenGLInterface
    x23 = x9_1 + x8_1 * 0xc0 + 0x4380
    
    if (arg3 == 0)
        goto label_f8c34c
    
    int64_t x10_4
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x4384) == arg2)
        x10_4 = 0
    label_f8c770:
        uint64_t x11_1 = *gOpenGLInterface
        int32_t x0_1 = *(x9_1 + x8_1 * 0xc0 + x10_4 * 0xc + 0x4380)
        
        if (*(x11_1 + 0x4090) != x0_1)
            *(x11_1 + 0x4090) = x0_1
            glBindVertexArray(x0_1)
            uint64_t x8_41 = *gpRenderAppData
            *(x8_41 + 0x14) += 1
            x11_1 = *gOpenGLInterface
        
        int32_t x1 = *(*(x11_1 + 0x4248) + mulu.dp.d(arg3 & 0xffff, 0x158))
        
        if (zx.d(*gGLHasVAO) != 0)
            glBindBuffer(0x8893, x1)
        else if (*(x11_1 + 0x4098) != x1)
            *(x11_1 + 0x4098) = x1
            glBindBuffer(0x8893, x1)
        
        return 1
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x4390) == arg2)
        x10_4 = 1
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x439c) == arg2)
        x10_4 = 2
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43a8) == arg2)
        x10_4 = 3
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43b4) == arg2)
        x10_4 = 4
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43c0) == arg2)
        x10_4 = 5
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43cc) == arg2)
        x10_4 = 6
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43d8) == arg2)
        x10_4 = 7
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43e4) == arg2)
        x10_4 = 8
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43f0) == arg2)
        x10_4 = 9
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x43fc) == arg2)
        x10_4 = 0xa
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x4408) == arg2)
        x10_4 = 0xb
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x4414) == arg2)
        x10_4 = 0xc
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x4420) == arg2)
        x10_4 = 0xd
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x442c) == arg2)
        x10_4 = 0xe
        goto label_f8c770
    
    if (*(x9_1 + x8_1 * 0xc0 + 0x4438) == arg2)
        x10_4 = 0xf
        goto label_f8c770
    
label_f8c820:
    int32_t x0_2
    void* x21_2
    int64_t x24_1
    
    if (*x23 == 0)
        x24_1 = 0
        x21_2 = x23
    label_f8c98c:
        glGenVertexArrays(1, x21_2)
        void* x8_62 = x23 + x24_1 * 0xc
        *(x8_62 + 4) = arg2
        *(x8_62 + 8) = arg3
        x0_2 = *x21_2
        int32_t* x8_64 = *gOpenGLInterface + 0x4090
        
        if (*x8_64 == x0_2)
            return 0
        
        *x8_64 = x0_2
    else
        x21_2 = &x23[3]
        
        if (*x21_2 == 0)
            x24_1 = 1
            goto label_f8c98c
        
        x21_2 = &x23[6]
        
        if (*x21_2 == 0)
            x24_1 = 2
            goto label_f8c98c
        
        x21_2 = &x23[9]
        
        if (*x21_2 == 0)
            x24_1 = 3
            goto label_f8c98c
        
        x21_2 = &x23[0xc]
        
        if (*x21_2 == 0)
            x24_1 = 4
            goto label_f8c98c
        
        x21_2 = &x23[0xf]
        
        if (*x21_2 == 0)
            x24_1 = 5
            goto label_f8c98c
        
        x21_2 = &x23[0x12]
        
        if (*x21_2 == 0)
            x24_1 = 6
            goto label_f8c98c
        
        x21_2 = &x23[0x15]
        
        if (*x21_2 == 0)
            x24_1 = 7
            goto label_f8c98c
        
        x21_2 = &x23[0x18]
        
        if (*x21_2 == 0)
            x24_1 = 8
            goto label_f8c98c
        
        x21_2 = &x23[0x1b]
        
        if (*x21_2 == 0)
            x24_1 = 9
            goto label_f8c98c
        
        x21_2 = &x23[0x1e]
        
        if (*x21_2 == 0)
            x24_1 = 0xa
            goto label_f8c98c
        
        x21_2 = &x23[0x21]
        
        if (*x21_2 == 0)
            x24_1 = 0xb
            goto label_f8c98c
        
        x21_2 = &x23[0x24]
        
        if (*x21_2 == 0)
            x24_1 = 0xc
            goto label_f8c98c
        
        x21_2 = &x23[0x27]
        
        if (*x21_2 == 0)
            x24_1 = 0xd
            goto label_f8c98c
        
        x21_2 = &x23[0x2a]
        
        if (*x21_2 == 0)
            x24_1 = 0xe
            goto label_f8c98c
        
        x21_2 = &x23[0x2d]
        
        if (*x21_2 == 0)
            x24_1 = 0xf
            goto label_f8c98c
        
        XTrace("Ran out of VAO slots!")
        int32_t* x8_61 = *gOpenGLInterface + 0x4090
        
        if (*x8_61 == 0)
            return 0
        
        x0_2 = 0
        *x8_61 = 0
    glBindVertexArray(x0_2)
    result = 0
uint64_t x8_37 = *gpRenderAppData
*(x8_37 + 0x14) += 1
return result
