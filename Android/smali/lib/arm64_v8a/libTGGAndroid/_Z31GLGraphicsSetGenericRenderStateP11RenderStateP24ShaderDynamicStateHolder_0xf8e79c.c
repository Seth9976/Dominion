// 函数: _Z31GLGraphicsSetGenericRenderStateP11RenderStateP24ShaderDynamicStateHolder
// 地址: 0xf8e79c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(*(arg1 + 0x10) + 0x18)

if (x8_1 == 0xf)
    int64_t* x23_1 = *(arg1 + 0x18)
    
    if (x23_1 != 0)
        uint64_t x26_1 = zx.q(TextureBindGraphicsBuffers(x23_1).d) & 0xffff
        int64_t x25_1 = *(*gOpenGLInterface + 0x4248)
        OpenGLBufferData* x21_1 = x25_1 + mulu.dp.d(x26_1.d, 0x158)
        
        if (*(x21_1 + 0x10) == 0)
            int64_t* x8_7 = *x23_1
            int32_t x20_2 = *(arg1 + 8)
            
            if (x8_7 == 0)
                if (x23_1[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                AssetCatalogLoadAsset(x23_1, false, true)
                x8_7 = *x23_1
            
            int32_t x23_2
            
            if (*(**x8_7 + 0x1c) != 1)
                x23_2 = *x21_1
                
                if (zx.d(*(x25_1 + x26_1 * 0x158 + 0x147)) == 0)
                    int32_t* x8_31 = *gOpenGLInterface + (zx.q(x20_2 + 0x20) << 2) + 0x4020
                    
                    if (*x8_31 != x23_2)
                        *x8_31 = x23_2
                        int32_t* x8_33 = *gOpenGLInterface + 0x409c
                        
                        if (*x8_33 != x20_2)
                            *x8_33 = x20_2
                            glActiveTexture(zx.q(x20_2 + 0x84c0))
                        
                        glBindTexture(0xde1, zx.q(x23_2))
                else
                    int32_t* x8_26 = *gOpenGLInterface + (zx.q(x20_2 + 0x58) << 2) + 0x4020
                    
                    if (*x8_26 != x23_2)
                        *x8_26 = x23_2
                        int32_t* x8_28 = *gOpenGLInterface + 0x409c
                        
                        if (*x8_28 != x20_2)
                            *x8_28 = x20_2
                            glActiveTexture(zx.q(x20_2 + 0x84c0))
                        
                        glBindTexture(0x8d65, zx.q(x23_2))
            else
                x23_2 = *x21_1
                int32_t* x8_14 = *gOpenGLInterface + (zx.q(x20_2 + 0x50) << 2) + 0x4020
                
                if (*x8_14 != x23_2)
                    *x8_14 = x23_2
                    int32_t* x8_16 = *gOpenGLInterface + 0x409c
                    
                    if (*x8_16 != x20_2)
                        *x8_16 = x20_2
                        glActiveTexture(zx.q(x20_2 + 0x84c0))
                    
                    glBindTexture(0x8513, zx.q(x23_2))
            void* x23_3 = *(arg2 + 0x358)
            
            if (*(x23_3 + 0xca0) s>= 1)
                int64_t i = 0
                FunctionalRenderState* x22_2 = x23_3 + 0xcb0
                
                do
                    GLSetSamplerRenderState(x20_2, x22_2, x21_1)
                    i += 1
                    x22_2 += 0x28
                while (i s< sx.q(*(x23_3 + 0xca0)))
            
            int64_t x19_2 = sx.q(*(arg1 + 4))
            int32_t var_44_1 = x20_2
            
            if (*(*gOpenGLInterface + (x19_2 << 4) + 0x20) != x20_2)
                glUniform1i(zx.q(x19_2.d), zx.q(x20_2))
                *(*gOpenGLInterface + (x19_2 << 4) + 0x20) = x20_2
else
    void* __offset(RenderState, 0x18) x19_1
    int64_t x20_1
    int128_t v0_1
    
    if (x8_1 == 4)
        x19_1 = arg1 + 0x18
        x20_1 = sx.q(*(x19_1 - 0x14))
        int64_t x9_9 = *gOpenGLInterface + (x20_1 << 4)
        
        if (((*(x9_9 + 0x20) ^ *x19_1) | (*(x9_9 + 0x28) ^ *(x19_1 + 8))) != 0)
            arg1, v0_1 = glUniform4fv(zx.q(x20_1.d), 1, x19_1)
            *(*gOpenGLInterface + (x20_1 << 4) + 0x20) = *x19_1
    else
        if (x8_1 != 1)
            pthread_kill(pthread_self(), 6)
            RenderState* x0_13
            ShaderDynamicStateHolder* x1_4
            x0_13, x1_4 = XNoReturn()
            return GLGraphicsSetSpecialRenderState(x0_13, x1_4) __tailcall
        
        x19_1 = arg1 + 0x18
        x20_1 = sx.q(*(x19_1 - 0x14))
        int64_t x9_2 = *gOpenGLInterface + (x20_1 << 4)
        
        if (((*(x9_2 + 0x20) ^ *x19_1) | (*(x9_2 + 0x28) ^ *(x19_1 + 8))) != 0)
            arg1, v0_1 = glUniform4iv(zx.q(x20_1.d), 1, x19_1)
            *(*gOpenGLInterface + (x20_1 << 4) + 0x20) = *x19_1
