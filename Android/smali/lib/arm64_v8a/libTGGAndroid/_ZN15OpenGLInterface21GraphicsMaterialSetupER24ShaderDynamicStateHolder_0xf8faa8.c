// 函数: _ZN15OpenGLInterface21GraphicsMaterialSetupER24ShaderDynamicStateHolder
// 地址: 0xf8faa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ShaderDynamicStateHolder* entry_x1
int64_t* x22 = *(entry_x1 + 0x358)
int32_t x0_1 = ShaderBindGraphicsBuffers(*x22, 0)

if (x0_1 != 0)
    uint64_t x8_1 = *gOpenGLInterface
    
    if (*(x8_1 + 0x4050) != x0_1)
        *(x8_1 + 0x4050) = x0_1
        int32_t* x23_1 = *(x8_1 + 0x4248) + mulu.dp.d(x0_1 & 0xffff, 0x158)
        glUseProgram(zx.q(*x23_1))
        memset(*gOpenGLInterface + 0x20, 0xfe, sx.q(x23_1[0x41] << 4))
    
    uint64_t i_1 = zx.q(x22[0xcb].d)
    
    if (i_1.d s>= 1)
        void* x21_1 = &x22[0xcc]
        uint64_t i
        
        do
            if ((GLGraphicsSetSpecialRenderState(*(x21_1 + 4), *(x21_1 + 8), *(x21_1 + 0x18), 
                    zx.q(*x21_1), entry_x1) & 1) == 0)
                GLGraphicsSetGenericRenderState(x21_1, entry_x1)
            
            i = i_1
            i_1 -= 1
            x21_1 += 0x20
        while (i != 1)
    
    GLSetFunctionRenderState(&x22[0x196], x22[0x194].d)

return zx.q(x0_1 != 0 ? 1 : 0)
