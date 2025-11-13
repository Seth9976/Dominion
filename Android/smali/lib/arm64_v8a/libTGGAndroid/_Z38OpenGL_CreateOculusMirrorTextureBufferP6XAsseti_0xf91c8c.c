// 函数: _Z38OpenGL_CreateOculusMirrorTextureBufferP6XAsseti
// 地址: 0xf91c8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = *gOpenGLInterface
uint64_t x9 = zx.q(*(x10 + 0x4258))
int64_t x10_1
int32_t x11_1

if (x9.d != *(x10 + 0x4250))
    x10_1 = *(x10 + 0x4248)
    x11_1 = *(x10_1 + x9 * 0x158 + 0x150)
else
    x11_1 = x9.d + 1
    *(x10 + 0x4250) = x11_1
    x10_1 = *(x10 + 0x4248)

*(x10 + 0x4258) = x11_1
int32_t* x10_2 = x10_1 + x9 * 0x158
__builtin_memset(x10_2, 0, 0x150)
x10_2[0x54] = x9.d | *(x10 + 0x4260) << 0x10
int32_t x9_2 = *(x10 + 0x4260)
int32_t x9_3

if (x9_2 == 0xffff)
    x9_3 = 1
else
    x9_3 = x9_2 + 1

*(x10 + 0x425c) += 1
*(x10 + 0x4260) = x9_3
int32_t x8_1 = x10_2[0x54]
*(x10_2 + 0x138) = arg1
__builtin_memcpy(&x10_2[0x3b], 
    "\x2f\x81\x00\x00\x2f\x81\x00\x00\x2f\x81\x00\x00\x01\x26\x00\x00\x01\x26\x00\x00\x00\x00\x00\x00", 
    0x18)
*x10_2 = arg2
x10_2[1] = 2
return zx.q(x8_1)
