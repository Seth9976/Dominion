// 函数: _Z29OpenGL_ReleaseBufferForReloadv
// 地址: 0xf922d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = glFinish()
void* x9 = nullptr
int32_t* x8 = *gOpenGLInterface

while (true)
    void* x12_1
    
    if (x9 == 0)
        x12_1 = *(x8 + 0x4248)
        x9 = x12_1
    else
        x12_1 = *(x8 + 0x4248)
        x9 += 0x158
    
    int64_t x13_2 = x12_1 + zx.q(x8[0x1094]) * 0x158
    
    if (x9 u>= x13_2)
        break
    
    while (true)
        int32_t x12_2 = *(x9 + 0x150)
        
        if (x12_2 u>> 0x10 != 0)
            if (*(x9 + 4) u> 1)
                break
            
            if (zx.d(*(x9 + 0x144)) == 0)
                break
            
            int32_t x13_5 = x8[0x1096]
            x8[0x1096] = x12_2 & 0xffff
            *(x9 + 0x150) = x13_5
            x8[0x1097] -= 1
            break
        
        x9 += 0x158
        
        if (x9 u>= x13_2)
            goto label_f9238c

label_f9238c:
int64_t x20 = 0
int64_t x21 = 0x433c

while (true)
    *(x8 + x21) = 0
    uint64_t fp_1 = *gOpenGLInterface
    void* x22_1 = fp_1 + x20
    
    if (*(x22_1 + 0x4380) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_1 + 0x4380) = 0
        *(x22_1 + 0x4388) = 0
    
    if (*(x22_1 + 0x438c) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_4 = fp_1 + x20
        *(x8_4 + 0x4390) = 0
        *(x8_4 + 0x438c) = 0
        *(x8_4 + 0x4394) = 0
    
    void* x22_2 = fp_1 + x20
    
    if (*(x22_2 + 0x4398) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_2 + 0x439c) = 0
        *(x22_2 + 0x4398) = 0
        *(x22_2 + 0x43a0) = 0
    
    if (*(x22_2 + 0x43a4) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_7 = fp_1 + x20
        *(x8_7 + 0x43a8) = 0
        *(x8_7 + 0x43a4) = 0
        *(x8_7 + 0x43ac) = 0
    
    void* x22_3 = fp_1 + x20
    
    if (*(x22_3 + 0x43b0) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_3 + 0x43b4) = 0
        *(x22_3 + 0x43b0) = 0
        *(x22_3 + 0x43b8) = 0
    
    if (*(x22_3 + 0x43bc) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_10 = fp_1 + x20
        *(x8_10 + 0x43c0) = 0
        *(x8_10 + 0x43bc) = 0
        *(x8_10 + 0x43c4) = 0
    
    void* x22_4 = fp_1 + x20
    
    if (*(x22_4 + 0x43c8) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_4 + 0x43cc) = 0
        *(x22_4 + 0x43c8) = 0
        *(x22_4 + 0x43d0) = 0
    
    if (*(x22_4 + 0x43d4) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_13 = fp_1 + x20
        *(x8_13 + 0x43d8) = 0
        *(x8_13 + 0x43d4) = 0
        *(x8_13 + 0x43dc) = 0
    
    void* x22_5 = fp_1 + x20
    
    if (*(x22_5 + 0x43e0) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_5 + 0x43e4) = 0
        *(x22_5 + 0x43e0) = 0
        *(x22_5 + 0x43e8) = 0
    
    if (*(x22_5 + 0x43ec) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_16 = fp_1 + x20
        *(x8_16 + 0x43f0) = 0
        *(x8_16 + 0x43ec) = 0
        *(x8_16 + 0x43f4) = 0
    
    void* x22_6 = fp_1 + x20
    
    if (*(x22_6 + 0x43f8) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_6 + 0x43fc) = 0
        *(x22_6 + 0x43f8) = 0
        *(x22_6 + 0x4400) = 0
    
    if (*(x22_6 + 0x4404) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_19 = fp_1 + x20
        *(x8_19 + 0x4408) = 0
        *(x8_19 + 0x4404) = 0
        *(x8_19 + 0x440c) = 0
    
    void* x22_7 = fp_1 + x20
    
    if (*(x22_7 + 0x4410) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_7 + 0x4414) = 0
        *(x22_7 + 0x4410) = 0
        *(x22_7 + 0x4418) = 0
    
    if (*(x22_7 + 0x441c) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_22 = fp_1 + x20
        *(x8_22 + 0x4420) = 0
        *(x8_22 + 0x441c) = 0
        *(x8_22 + 0x4424) = 0
    
    void* x22_8 = fp_1 + x20
    
    if (*(x22_8 + 0x4428) != 0)
        result = glDeleteVertexArrays(1)
        *(x22_8 + 0x442c) = 0
        *(x22_8 + 0x4428) = 0
        *(x22_8 + 0x4430) = 0
    
    if (*(x22_8 + 0x4434) != 0)
        result = glDeleteVertexArrays(1)
        void* x8_25 = fp_1 + x20
        *(x8_25 + 0x4438) = 0
        *(x8_25 + 0x4434) = 0
        *(x8_25 + 0x443c) = 0
    
    if (x20 == 0xc00)
        break
    
    x8 = *gOpenGLInterface
    x21 += 4
    x20 += 0xc0

return result
