// 函数: _Z21OpenGL_GetTextureBitsP6XAssetP9ImageSpec
// 地址: 0xf920f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t x0 = TextureBindGraphicsBuffers(arg1)
int64_t* x8_2 = *arg1
int32_t x20 = *(*(*gOpenGLInterface + 0x4248) + mulu.dp.d(zx.d(x0), 0x158))

if (x8_2 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8_2 = *arg1

int64_t* x8_4 = *x8_2
int32_t x21_1 = **x8_4
int32_t var_50 = x21_1
int32_t x22 = *(*x8_4 + 4)
int32_t var_44 = 1
int32_t var_4c = x22
int32_t var_48 = TextureFormatPitch(x21_1, 1)
void* x0_8 = XMalloc(TextureFormatLinearImageSize(x21_1, x22, 1))
uint64_t x8_6 = *gOpenGLInterface
void* var_58 = x0_8

if (*(x8_6 + 0x40a0) != x20)
    int32_t x9_3 = *(x8_6 + 0x409c)
    *(x8_6 + 0x40a0) = x20
    
    if (x9_3 != 0)
        *(x8_6 + 0x409c) = 0
        glActiveTexture(0x84c0)
    
    glBindTexture(0xde1, zx.q(x20))

int32_t var_34
glGenFramebuffers(1, &var_34)
glBindFramebuffer(0x8d40, zx.q(var_34))
glFramebufferTexture2D(0x8d40, 0x8ce0, 0xde1, zx.q(x20), 0)
glReadPixels(0, 0, zx.q(x21_1), zx.q(x22), 0x1908, 0x1401, x0_8)
int32_t var_44_1 = 2
glBindFramebuffer(0x8d40, 0)
glDeleteFramebuffers(1, &var_34)
ImageBufferCopyToNewFormat(&var_58, arg2)
return XFree(var_58)
