// 函数: _ZN15OpenGLInterface26TextureBufferCreateMipmapsEj
// 地址: 0xf8af24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gOpenGLInterface
int16_t entry_x1
int32_t x19 = *(*(arg1 + 0x4248) + mulu.dp.d(zx.d(entry_x1), 0x158))

if (*(x8 + 0x40a0) != x19)
    int32_t x9_2 = *(x8 + 0x409c)
    *(x8 + 0x40a0) = x19
    
    if (x9_2 != 0)
        *(x8 + 0x409c) = 0
        glActiveTexture(0x84c0)
    
    glBindTexture(0xde1, zx.q(x19))

return glGenerateMipmap(0xde1) __tailcall
