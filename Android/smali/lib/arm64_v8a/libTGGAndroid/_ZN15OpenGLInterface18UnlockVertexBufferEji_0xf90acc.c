// 函数: _ZN15OpenGLInterface18UnlockVertexBufferEji
// 地址: 0xf90acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *(arg1 + 0x4248)
uint64_t x21 = zx.q(arg2) & 0xffff
int32_t x1 = *(x20 + mulu.dp.d(x21.d, 0x158))
int32_t* x8_1 = *gOpenGLInterface + 0x4094

if (*x8_1 != x1)
    *x8_1 = x1
    glBindBuffer(0x8892, x1)
    uint64_t x8_2 = *gpRenderAppData
    *(x8_2 + 0x10) += 1

int64_t x3

if (zx.d(*(x20 + x21 * 0x158 + 0xc)) == 0)
    x3 = 0x88e4
else
    x3 = 0x88e0

int32_t entry_x2
int64_t x0 = glBufferData(0x8892, sx.q(entry_x2), *(x20 + x21 * 0x158 + 0xd8), x3)

if (zx.d(*(x20 + x21 * 0x158 + 0xc)) != 0)
    return x0

int64_t x0_2 = XFree(*(x20 + x21 * 0x158 + 0xd8))
*(x20 + x21 * 0x158 + 0xd8) = 0
return x0_2
