// 函数: _ZN15OpenGLInterface13DrawPrimitiveEijj12VertexFormatiiji
// 地址: 0xf8d908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x4270) s> 0)
    return 

int32_t* x8_2 = *gOpenGLInterface + 0x4050
uint32_t x25_1 = *x8_2

if (x25_1 == 0xffffffff)
    return 

int64_t x10_1 = *(arg1 + 0x4248)
uint64_t fp_1 = zx.q(arg3) & 0xffff
int32_t* x28_1 = x10_1 + mulu.dp.d(fp_1.d, 0x158)
int32_t x1 = *x28_1
uint32_t x22_1 = arg4
void* x23_1 = arg1

if (x8_2[0x11] != x1)
    x8_2[0x11] = x1
    glBindBuffer(0x8892, x1)
    uint64_t x8_3 = *gpRenderAppData
    *(x8_3 + 0x10) += 1

if ((OpenGLBindOrCreateVAO(x28_1, x25_1, x22_1) & 1) == 0)
    GLBindVertexStream(x25_1, zx.q(arg5), 0)
    
    if (x22_1 != 0)
        int32_t x1_3 = *(*(x23_1 + 0x4248) + mulu.dp.d(x22_1 & 0xffff, 0x158))
        
        if (zx.d(*gGLHasVAO) != 0)
            glBindBuffer(0x8893, x1_3)
        else
            int32_t* x8_6 = *gOpenGLInterface + 0x4098
            
            if (*x8_6 != x1_3)
                *x8_6 = x1_3
                glBindBuffer(0x8893, x1_3)
    
    if (arg8 != 0)
        int64_t x27_2 = *(x23_1 + 0x4248)
        uint64_t x26_2 = zx.q(arg8) & 0xffff
        int32_t x1_4 = *(x27_2 + mulu.dp.d(x26_2.d, 0x158))
        int32_t* x8_8 = *gOpenGLInterface + 0x4094
        
        if (*x8_8 != x1_4)
            *x8_8 = x1_4
            glBindBuffer(0x8892, x1_4)
            uint64_t x8_9 = *gpRenderAppData
            *(x8_9 + 0x10) += 1
        
        GLBindVertexStream(x25_1, zx.q(*(x27_2 + x26_2 * 0x158 + 0xe0)), 1)

uint64_t x0_4 = zx.q(*(GLModeFromDxPrimitiveType + (sx.q(arg2) << 2)))
int32_t arg_0

if (x22_1 == 0)
    uint64_t x2_1 = zx.q(arg7)
    uint64_t x1_6 = zx.q(*(x10_1 + fp_1 * 0x158 + 0x140))
    
    if (arg_0 s< 1)
        glDrawArrays(x0_4, x1_6, x2_1)
    else
        glDrawArraysInstanced(x0_4, x1_6, x2_1, zx.q(arg_0))
else
    uint64_t x8_11 = zx.q(arg2 - 1)
    
    if (x8_11.d u> 4)
        pthread_kill(pthread_self(), 6)
        return OpenGLInterface::SetScissor(XNoReturn()) __tailcall
    
    int32_t x3 = arg6
    
    switch (x8_11)
        case 1
            x3 = arg6 << 1
        case 2
            x3 = arg6 + 1
        case 3
            x3 = arg6 * 3
        case 4
            x3 = arg6 + 2
    
    int64_t x8_13 = *(x23_1 + 0x4248)
    uint64_t x9_12 = zx.q(x22_1) & 0xffff
    int32_t x4
    
    if (zx.d(*(x8_13 + mulu.dp.d(x9_12.d, 0x158) + 0x146)) == 0)
        x4 = 0x1403
    else
        x4 = 0x1405
    
    if (arg_0 s< 1)
        int32_t x1_8 = *(x8_13 + x9_12 * 0x158 + 0x140)
        glDrawRangeElements(x0_4, x1_8, zx.q(x1_8 + arg7), x3, x4, 0)
    else
        glDrawElementsInstanced(x0_4, zx.q(x3), zx.q(x4), 0, zx.q(arg_0))

int32_t x12_1

x12_1 = arg_0 s> 1 ? arg_0 : 1

uint64_t x8_15 = *gpRenderAppData
int32_t x10_7 = *(x8_15 + 0xc) + x12_1 * arg7
int32_t x11_3 = *(x8_15 + 4) + 1
*(x8_15 + 8) += x12_1 * arg6
*(x8_15 + 0xc) = x10_7
*(x8_15 + 4) = x11_3
