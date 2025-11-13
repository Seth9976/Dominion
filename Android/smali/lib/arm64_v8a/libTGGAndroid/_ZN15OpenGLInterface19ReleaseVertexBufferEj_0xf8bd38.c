// 函数: _ZN15OpenGLInterface19ReleaseVertexBufferEj
// 地址: 0xf8bd38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 == 0)
    return 

int32_t* x19_1 = arg1 + 0x4250
uint32_t x8_1 = entry_x1 & 0xffff

if (x8_1 u>= *x19_1)
    return 

int64_t x21_1 = *(arg1 + 0x4248)
int32_t* x20_1 = x21_1 + mulu.dp.d(x8_1, 0x158)

if (x20_1[0x54] != entry_x1)
    return 

uint64_t x22_1 = zx.q(x8_1)

if (zx.d(*(x21_1 + x22_1 * 0x158 + 0x144)) == 0)
    int32_t var_24 = *x20_1
    glDeleteBuffers(1, &var_24)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x14) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x20) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x2c) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x38) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x44) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x50) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x5c) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x68) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x74) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x80) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x8c) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0x98) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0xa4) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0xb0) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0xbc) != 0)
        glDeleteVertexArrays(1)
    
    if (*(x21_1 + x22_1 * 0x158 + 0xc8) != 0)
        glDeleteVertexArrays(1)
    
    arg1 = (*(x21_1 + x22_1 * 0x158 + 0xd8)).d
    
    if (arg1 != 0)
        XFree(arg1)
        *(x21_1 + x22_1 * 0x158 + 0xd8) = 0
    
    x8_1 = zx.d(x20_1[0x54].w)

int32_t x9_5 = x19_1[2]
x19_1[2] = x8_1
x20_1[0x54] = x9_5
x19_1[3] -= 1
