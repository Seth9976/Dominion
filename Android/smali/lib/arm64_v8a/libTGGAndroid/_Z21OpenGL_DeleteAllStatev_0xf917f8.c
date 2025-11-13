// 函数: _Z21OpenGL_DeleteAllStatev
// 地址: 0xf917f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**gAppInterface + 0x90))()
*(*gOpenGLInterface + 0x5040) = 1
TextureUnbindAllGraphicsBuffers()
ShaderUnbindAllGraphicsBuffers()
uint64_t x19 = *gOpenGLInterface
void* x22 = nullptr
*(x19 + 0x5040) = 0

while (true)
    uint64_t x8_3 = zx.q(*(x19 + 0x4250))
    
    while (true)
        int64_t x9_2
        
        if (x22 != 0)
            x22 += 0x158
            x9_2 = *(x19 + 0x4248) + x8_3 * 0x158
            
            if (x22 u< x9_2)
                goto label_f91890
            
            goto label_f918d8
        
        void* x9_3 = *(x19 + 0x4248)
        x22 = x9_3
        x9_2 = x9_3 + x8_3 * 0x158
        
        if (x22 u>= x9_2)
        label_f918d8:
            int64_t result = memset(x19 + 0x42f8, 0, 0xd48)
            
            while (true)
                void* x10_2 = *(x19 + 0x4248)
                void* x9_5 = x10_2
                
                while (true)
                    int64_t x10_3 = x10_2 + zx.q(*(x19 + 0x4250)) * 0x158
                    
                    if (x9_5 u>= x10_3)
                    label_f91950:
                        *(x19 + 0x4250) = 0
                        *(x19 + 0x4258) = 0
                        return result
                    
                    int32_t x11_2
                    
                    while (true)
                        x11_2 = *(x9_5 + 0x150)
                        
                        if (x11_2 u>> 0x10 != 0)
                            break
                        
                        x9_5 += 0x158
                        
                        if (x9_5 u>= x10_3)
                            goto label_f91950
                    
                    int32_t x10_4 = *(x19 + 0x4258)
                    *(x19 + 0x4258) = x11_2 & 0xffff
                    *(x9_5 + 0x150) = x10_4
                    *(x19 + 0x425c) -= 1
                    
                    if (x9_5 == 0)
                        break
                    
                    x10_2 = *(x19 + 0x4248)
                    x9_5 += 0x158
        else
        label_f91890:
            
            while (zx.d(*(x22 + 0x152)) == 0)
                x22 += 0x158
                
                if (x22 u>= x9_2)
                    goto label_f918d8
            
            if (*(x22 + 4) u<= 1)
                void* x0_1 = *(x22 + 0xd8)
                
                if (x0_1 != 0)
                    XFree(x0_1)
                    *(x22 + 0xd8) = 0
                    x19 = *gOpenGLInterface
                    break
