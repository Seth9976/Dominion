// 函数: _Z38OpenGLRemoveVAOWithShaderOrIndexBufferjj
// 地址: 0xf8bfb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = nullptr

while (true)
    uint64_t x8_1 = *gOpenGLInterface
    int64_t x8_3
    void* x9_1
    
    if (x23 == 0)
        void* x10_2 = *(x8_1 + 0x4248)
        x9_1 = x10_2
        x8_3 = x10_2 + zx.q(*(x8_1 + 0x4250)) * 0x158
        
        if (x9_1 u>= x8_3)
            return 
    else
        x9_1 = x23 + 0x158
        x8_3 = *(x8_1 + 0x4248) + zx.q(*(x8_1 + 0x4250)) * 0x158
        
        if (x9_1 u>= x8_3)
            return 
    
    void* x24_1 = x9_1 + 0xa8
    
    while (zx.d(*(x24_1 + 0xaa)) == 0)
        void* x9_3 = x24_1 + 0xb0
        x24_1 += 0x158
        
        if (x9_3 u>= x8_3)
            return 
    
    x23 = x24_1 - 0xa8
    
    if (*(x24_1 - 0xa4) == 0)
        if (*(x24_1 - 0x94) != 0 && *(x24_1 - 0x90) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x94) = 0
            *(x24_1 - 0x8c) = 0
        
        if (*(x24_1 - 0x88) != 0 && *(x24_1 - 0x84) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x88) = 0
            *(x24_1 - 0x80) = 0
        
        if (*(x24_1 - 0x7c) != 0 && *(x24_1 - 0x78) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x7c) = 0
            *(x24_1 - 0x74) = 0
        
        if (*(x24_1 - 0x70) != 0 && *(x24_1 - 0x6c) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x70) = 0
            *(x24_1 - 0x68) = 0
        
        if (*(x24_1 - 0x64) != 0 && *(x24_1 - 0x60) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x64) = 0
            *(x24_1 - 0x5c) = 0
        
        if (*(x24_1 - 0x58) != 0 && *(x24_1 - 0x54) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x58) = 0
            *(x24_1 - 0x50) = 0
        
        if (*(x24_1 - 0x4c) != 0 && *(x24_1 - 0x48) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x4c) = 0
            *(x24_1 - 0x44) = 0
        
        if (*(x24_1 - 0x40) != 0 && *(x24_1 - 0x3c) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x40) = 0
            *(x24_1 - 0x38) = 0
        
        if (*(x24_1 - 0x34) != 0 && *(x24_1 - 0x30) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x34) = 0
            *(x24_1 - 0x2c) = 0
        
        if (*(x24_1 - 0x28) != 0 && *(x24_1 - 0x24) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x28) = 0
            *(x24_1 - 0x20) = 0
        
        if (*(x24_1 - 0x1c) != 0 && *(x24_1 - 0x18) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x1c) = 0
            *(x24_1 - 0x14) = 0
        
        if (*(x24_1 - 0x10) != 0 && *(x24_1 - 0xc) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 0x10) = 0
            *(x24_1 - 8) = 0
        
        if (*(x24_1 - 4) != 0 && *x24_1 == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 - 4) = 0
            *(x24_1 + 4) = 0
        
        if (*(x24_1 + 8) != 0 && *(x24_1 + 0xc) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 + 8) = 0
            *(x24_1 + 0x10) = 0
        
        if (*(x24_1 + 0x14) != 0 && *(x24_1 + 0x18) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 + 0x18) = 0
            *(x24_1 + 0x14) = 0
        
        if (*(x24_1 + 0x20) != 0 && *(x24_1 + 0x24) == arg1)
            glDeleteVertexArrays(1)
            *(x24_1 + 0x20) = 0
            *(x24_1 + 0x28) = 0
