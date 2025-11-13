// 函数: _ZN15OpenGLInterface19ReleaseShaderBufferE10ShaderTypej
// 地址: 0xf90464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gOpenGLInterface
uint32_t entry_x2
int32_t* x21 = *(x8 + 0x4248) + mulu.dp.d(entry_x2 & 0xffff, 0x158)

if (zx.d(*(arg1 + 0x5040)) == 0)
    int32_t x20_1 = *x21
    int32_t var_34 = 0
    int32_t var_50[0x4]
    glGetAttachedShaders(zx.q(x20_1), 4, &var_34, &var_50)
    
    if (var_34 s>= 1)
        int64_t i = 0
        
        do
            glDeleteShader(zx.q(var_50[i]))
            i += 1
        while (i s< sx.q(var_34))
    
    arg2 = glDeleteProgram(zx.q(x20_1))
    x8 = *gOpenGLInterface

if (*(x8 + 0x4050) == entry_x2)
    *(x8 + 0x4050) = 0xffffffff

int32_t x10_1 = *(x8 + 0x4258)
*(x8 + 0x4258) = zx.d(x21[0x54].w)
x21[0x54] = x10_1
*(x8 + 0x425c) -= 1
return OpenGLRemoveVAOWithShaderOrIndexBuffer(entry_x2, arg2)
