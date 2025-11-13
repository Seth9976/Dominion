// 函数: _ZN15OpenGLInterface17UnlockIndexBufferEji
// 地址: 0xf90bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 0x4248)
uint64_t x22 = zx.q(arg2) & 0xffff
int32_t x20 = *(x21 + mulu.dp.d(x22.d, 0x158))
int32_t* x8_1 = *gOpenGLInterface + 0x4090

if (*x8_1 != 0)
    *x8_1 = 0
    glBindVertexArray(0)
    uint64_t x8_2 = *gpRenderAppData
    *(x8_2 + 0x14) += 1

if (zx.d(*gGLHasVAO) != 0)
    glBindBuffer(0x8893, zx.q(x20))
else
    int32_t* x8_5 = *gOpenGLInterface + 0x4098
    
    if (*x8_5 != x20)
        *x8_5 = x20
        glBindBuffer(0x8893, zx.q(x20))

int64_t x3

if (zx.d(*(x21 + x22 * 0x158 + 0xc)) == 0)
    x3 = 0x88e4
else
    x3 = 0x88e0

int32_t entry_x2
int64_t x0 = glBufferData(0x8893, sx.q(entry_x2), *(x21 + x22 * 0x158 + 0xd8), x3)

if (zx.d(*(x21 + x22 * 0x158 + 0xc)) != 0)
    return x0

int64_t x0_2 = XFree(*(x21 + x22 * 0x158 + 0xd8))
*(x21 + x22 * 0x158 + 0xd8) = 0
return x0_2
