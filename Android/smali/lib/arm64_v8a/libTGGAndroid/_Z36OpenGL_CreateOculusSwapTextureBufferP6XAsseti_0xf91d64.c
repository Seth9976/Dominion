// 函数: _Z36OpenGL_CreateOculusSwapTextureBufferP6XAsseti
// 地址: 0xf91d64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = *gOpenGLInterface
uint64_t x22 = zx.q(*(x10 + 0x4258))
int32_t x11_1
int64_t x23

if (x22.d != *(x10 + 0x4250))
    x23 = *(x10 + 0x4248)
    x11_1 = *(x23 + x22 * 0x158 + 0x150)
else
    x11_1 = x22.d + 1
    *(x10 + 0x4250) = x11_1
    x23 = *(x10 + 0x4248)

int32_t* x21 = x23 + x22 * 0x158
int128_t v0
v0.q = 0
v0:8.q = 0
*(x10 + 0x4258) = x11_1
__builtin_memset(&x21[0x40], 0, 0x50)
__builtin_memset(x21, 0, 0xf0)
*(x21 + 0xf0) = zx.o(0)
v0 = data_71d490
x21[0x54] = x22.d | *(x10 + 0x4260) << 0x10
int32_t x10_4 = *(x10 + 0x4260)
int32_t x10_5

if (x10_4 == 0xffff)
    x10_5 = 1
else
    x10_5 = x10_4 + 1

*(x10 + 0x425c) += 1
*(x10 + 0x4260) = x10_5
*x21 = arg2
x21[1] = 2
*(x21 + 0xec) = v0
*(x21 + 0xfc) = 0x2601
*(x21 + 0x138) = arg1
uint64_t x8 = *gOpenGLInterface
uint64_t x2

if (*(x8 + 0x40a0) != arg2)
    int32_t x9_2 = *(x8 + 0x409c)
    *(x8 + 0x40a0) = arg2
    
    if (x9_2 != 0)
        *(x8 + 0x409c) = 0
        glActiveTexture(0x84c0)
    
    glBindTexture(0xde1, zx.q(arg2))
    x2 = zx.q(x21[0x3f])
else
    x2 = 0x2601

glTexParameteri(0xde1, 0x2800, x2)
glTexParameteri(0xde1, 0x2801, zx.q(x21[0x3e]))
glTexParameteri(0xde1, 0x2802, zx.q(x21[0x3b]))
glTexParameteri(0xde1, 0x2803, zx.q(x21[0x3c]))
int32_t var_54
glGetIntegerv(0x8ca6, &var_54)
void* x24_2 = x23 + x22 * 0x158
glGenFramebuffers(1, x24_2 + 0xe4)
glBindFramebuffer(0x8d40, zx.q(*(x24_2 + 0xe4)))

if ((zx.d(data_24219e0) & 1) == 0 && __cxa_guard_acquire(&data_24219e0) != 0)
    data_24219d8 = eglGetProcAddress("glRenderbufferStorageMultisampleEXT")
    __cxa_guard_release(&data_24219e0)

if ((zx.d(data_24219f0) & 1) == 0 && __cxa_guard_acquire(&data_24219f0) != 0)
    data_24219e8 = eglGetProcAddress("glFramebufferTexture2DMultisampleEXT")
    __cxa_guard_release(&data_24219f0)

int64_t* x8_5 = *arg1

if (x8_5 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8_5 = *arg1

int32_t* x20_1 = **x8_5
void* x22_1 = x23 + x22 * 0x158
glGenRenderbuffers(1, x22_1 + 0xe8)
glBindRenderbuffer(0x8d41, zx.q(*(x22_1 + 0xe8)))
data_24219d8(0x8d41, zx.q(*(*gAppInterface + 0x30)), 0x81a5, zx.q(*x20_1), zx.q(x20_1[1]))
glBindRenderbuffer(0x8d41, 0)
data_24219e8(0x8d40, 0x8ce0, 0xde1, zx.q(arg2), 0, zx.q(*(*gAppInterface + 0x30)))
glFramebufferRenderbuffer(0x8d40, 0x8d00, 0x8d41, zx.q(*(x22_1 + 0xe8)))
glCheckFramebufferStatus(0x8d40)
glBindFramebuffer(0x8d40, zx.q(var_54))
return zx.q(x21[0x54])
