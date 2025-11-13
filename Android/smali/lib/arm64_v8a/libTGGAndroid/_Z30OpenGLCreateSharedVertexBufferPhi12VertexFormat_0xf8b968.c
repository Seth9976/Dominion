// 函数: _Z30OpenGLCreateSharedVertexBufferPhi12VertexFormat
// 地址: 0xf8b968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg3
int32_t x0_1
int128_t v0
x0_1, v0 = VertexFormatGetStride(zx.q(arg3))
uint64_t x24 = zx.q(x22)
uint64_t x9 = *gOpenGLInterface
int32_t x1 = *(x9 + (zx.q(x22) << 2) + 0x42f8)

if (x1 == 0)
    glGenBuffers(1, x9 + (zx.q(x22) << 2) + 0x42f8)
    uint64_t x8_4 = *gOpenGLInterface
    int32_t x1_2 = *(x8_4 + (x24 << 2) + 0x42f8)
    
    if (*(x8_4 + 0x4094) != x1_2)
        *(x8_4 + 0x4094) = x1_2
        glBindBuffer(0x8892, x1_2)
        uint64_t x8_6 = *gpRenderAppData
        *(x8_6 + 0x10) += 1
    
    glBufferData(0x8892, sx.q(x0_1 * 0x16e360), 0, 0x88e4)
else if (*(x9 + 0x4094) != x1)
    *(x9 + 0x4094) = x1
    glBindBuffer(0x8892, x1)
    uint64_t x8_3 = *gpRenderAppData
    *(x8_3 + 0x10) += 1

uint64_t x10 = *gOpenGLInterface
uint64_t x9_7 = zx.q(*(x10 + 0x4258))
int64_t x10_1
int32_t x11_3

if (x9_7.d != *(x10 + 0x4250))
    x10_1 = *(x10 + 0x4248)
    x11_3 = *(x10_1 + x9_7 * 0x158 + 0x150)
else
    x11_3 = x9_7.d + 1
    *(x10 + 0x4250) = x11_3
    x10_1 = *(x10 + 0x4248)

*(x10 + 0x4258) = x11_3
v0.q = 0
v0:8.q = 0
int32_t* x25 = x10_1 + x9_7 * 0x158
__builtin_memset(x25, 0, 0x150)
uint64_t x24_1 = x24 << 2
x25[0x54] = x9_7.d | *(x10 + 0x4260) << 0x10
int32_t x9_9 = *(x10 + 0x4260)
int32_t x9_10

if (x9_9 == 0xffff)
    x9_10 = 1
else
    x9_10 = x9_9 + 1

*(x10 + 0x425c) += 1
*(x10 + 0x4260) = x9_10
int32_t x8_11 = *(*gOpenGLInterface + x24_1 + 0x42f8)
x25[1] = 0
x25[2] = arg2
x25[3].b = 0
x25[0x38] = x22
x25[0x51].b = 1
*x25 = x8_11
x25[0x50] = *(*gOpenGLInterface + x24_1 + 0x433c)
glFinish(v0)
glBufferSubData(0x8892, sx.q(*(*gOpenGLInterface + x24_1 + 0x433c)) * sx.q(x0_1), sx.q(arg2), arg1)
uint64_t x8_19 = *gOpenGLInterface + x24_1
*(x8_19 + 0x433c) += arg2 s/ x0_1
return zx.q(x25[0x54])
