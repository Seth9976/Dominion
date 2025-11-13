// 函数: _ZN15OpenGLInterface19CreateTextureBufferEP6XAssetjjjj13TextureFormat11TextureType
// 地址: 0xf8afec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = zx.q(*(arg1 + 0x4258))
int32_t x23 = arg7
uint32_t x19 = arg4
uint32_t x20 = arg3
int32_t x9_1
int64_t x28

if (x27.d != *(arg1 + 0x4250))
    x28 = *(arg1 + 0x4248)
    x9_1 = *(x28 + x27 * 0x158 + 0x150)
else
    x9_1 = x27.d + 1
    *(arg1 + 0x4250) = x9_1
    x28 = *(arg1 + 0x4248)

*(arg1 + 0x4258) = x9_1
int32_t* x25 = x28 + x27 * 0x158
__builtin_memset(&x25[0x40], 0, 0x50)
__builtin_memset(x25, 0, 0xf0)
*(x25 + 0xf0) = zx.o(0)
x25[0x54] = x27.d | *(arg1 + 0x4260) << 0x10
int32_t x12 = *(arg1 + 0x4260)
int128_t v1 = data_71c5e0
int32_t x9_6 = 1
int32_t x11

if (x12 == 0xffff)
    x11 = 1
else
    x11 = x12 + 1

*(arg1 + 0x425c) += 1
*(arg1 + 0x4260) = x11
*x25 = 0x200000000
*(x25 + 0xec) = v1
void* x21_1 = &x25[0x3f]
*x21_1 = 0x2600
*(x25 + 0x138) = arg2
int32_t entry_x7
x25[0x52].b = (entry_x7 == 1 ? 1 : 0).b
int32_t x8_1 = *(arg1 + 0x5048)

if (x8_1 s< x20 || x8_1 s< x19)
    x9_6 = 1
    
    while (true)
        x19 u>>= 1
        x20 u>>= 1
        x9_6 += 1
        
        if (x19 s<= x8_1)
            if (x20 s<= x8_1)
                break

*(x28 + x27 * 0x158 + 0x14c) = x9_6

if (entry_x7 == 6)
    void* x21_3 = x28 + x27 * 0x158
    glGenRenderbuffers(1, x21_3 + 0xe8)
    glBindRenderbuffer(0x8d41, zx.q(*(x21_3 + 0xe8)))
    
    if ((zx.d(data_24219c0) & 1) == 0 && __cxa_guard_acquire(&data_24219c0) != 0)
        data_24219b8 = eglGetProcAddress("glRenderbufferStorageMultisampleEXT")
        __cxa_guard_release(&data_24219c0)
    
    data_24219b8(0x8d41, zx.q(*(*gAppInterface + 0x30)), 0x81a5, zx.q(x20), zx.q(x19))
    glBindRenderbuffer(0x8d41, 0)
else
    void* x24_1 = &x25[0x3e]
    int32_t var_64
    
    if (entry_x7 == 5)
        glGetIntegerv(0x8ca6, &var_64)
        void* x22_1 = x28 + x27 * 0x158
        glGenFramebuffers(1, x22_1 + 0xe4)
        glBindFramebuffer(0x8d40, zx.q(*(x22_1 + 0xe4)))
        
        if ((zx.d(data_24219d0) & 1) == 0)
            goto label_f8b61c
        
        goto label_f8b1d0
    
    if (entry_x7 != 4)
        int32_t var_6c_1 = x23
        glGenTextures(1, &var_64)
        *x25 = var_64
        int32_t x24_2 = var_64
        int32_t* x8_13 = *gOpenGLInterface + 0x409c
        
        if (entry_x7 != 1)
            if (x8_13[1] != x24_2)
                int32_t x9_16 = *x8_13
                x8_13[1] = x24_2
                
                if (x9_16 != 0)
                    *x8_13 = 0
                    glActiveTexture(0x84c0)
                
                x23 = 0xde1
                glBindTexture(0xde1, zx.q(x24_2))
            else
                x23 = 0xde1
        else if (x8_13[0x31] != x24_2)
            int32_t x9_15 = *x8_13
            x8_13[0x31] = x24_2
            
            if (x9_15 != 0)
                *x8_13 = 0
                glActiveTexture(0x84c0)
            
            x23 = 0x8513
            glBindTexture(0x8513, zx.q(x24_2))
        else
            x23 = 0x8513
        
        glTexParameteri(zx.q(x23), 0x2800, zx.q(*x21_1))
        glTexParameteri(zx.q(x23), 0x2801, zx.q(*x24_1))
        glTexParameteri(zx.q(x23), 0x2802, zx.q(x25[0x3b]))
        glTexParameteri(zx.q(x23), 0x2803, zx.q(x25[0x3c]))
        glTexParameteri(zx.q(x23), 0x8072, zx.q(x25[0x3d]))
        x24_1 = zx.q(var_6c_1)
        
        if (entry_x7 u>= 2)
            uint64_t x1_7
            int32_t var_68
            
            if (entry_x7 != 3)
            label_f8b60c:
                
                while (true)
                    pthread_kill(pthread_self(), 6)
                    XNoReturn()
                label_f8b61c:
                    
                    if (__cxa_guard_acquire(&data_24219d0) != 0)
                        data_24219c8 = eglGetProcAddress("glFramebufferTexture2DMultisampleEXT")
                        __cxa_guard_release(&data_24219d0)
                    
                label_f8b1d0:
                    glGenTextures(1, &var_68)
                    int32_t x22_2 = var_68
                    uint64_t x8_4 = *gOpenGLInterface
                    
                    if (*(x8_4 + 0x40a0) != x22_2)
                        int32_t x9_8 = *(x8_4 + 0x409c)
                        *(x8_4 + 0x40a0) = x22_2
                        
                        if (x9_8 != 0)
                            *(x8_4 + 0x409c) = 0
                            glActiveTexture(0x84c0)
                        
                        glBindTexture(0xde1, zx.q(x22_2))
                        x22_2 = var_68
                    
                    *x25 = x22_2
                    glTexParameteri(0xde1, 0x2800, zx.q(*x21_1))
                    glTexParameteri(0xde1, 0x2801, zx.q(*x24_1))
                    glTexParameteri(0xde1, 0x2802, zx.q(x25[0x3b]))
                    glTexParameteri(0xde1, 0x2803, zx.q(x25[0x3c]))
                    int64_t (* const x8_6)() = gGLTextureFormatConversionTable
                    
                    if (*gGLTextureFormatConversionTable == x23)
                        goto label_f8b300
                    
                    int64_t (* x9_10)() = gGLTextureFormatConversionTable + 0x10
                    
                    if (*x9_10 != x23)
                        x9_10 = gGLTextureFormatConversionTable + 0x20
                        
                        if (*x9_10 != x23)
                            x9_10 = gGLTextureFormatConversionTable + 0x30
                            
                            if (*x9_10 != x23)
                                x9_10 = gGLTextureFormatConversionTable + 0x40
                                
                                if (*x9_10 != x23)
                                    x9_10 = gGLTextureFormatConversionTable + 0x50
                                    
                                    if (*x9_10 != x23)
                                        x9_10 = gGLTextureFormatConversionTable + 0x60
                                        
                                        if (*x9_10 != x23)
                                            x8_6 = gGLTextureFormatConversionTable + 0x70
                                            
                                            if (*x8_6 == x23)
                                                goto label_f8b300
                                            
                                            continue
                    
                    x8_6 = x9_10
                label_f8b300:
                    glTexImage2D(0xde1, 0, zx.q(*(x8_6 + 4)), zx.q(x20), zx.q(x19), 0, 
                        zx.q(*(x8_6 + 8)), zx.q(*(x8_6 + 0xc)), 0)
                    data_24219c8(0x8d40, 0x8ce0, 0xde1, zx.q(var_68), 0, 
                        zx.q(*(*gAppInterface + 0x30)))
                    glCheckFramebufferStatus(0x8d40)
                    x1_7 = zx.q(var_64)
                    break
            else
                glGetIntegerv(0x8ca6, &var_68)
                x21_1 = x28 + x27 * 0x158
                glGenFramebuffers(1, x21_1 + 0xe4)
                glBindFramebuffer(0x8d40, zx.q(*(x21_1 + 0xe4)))
                int64_t (* const x8_16)() = gGLTextureFormatConversionTable
                
                if (*gGLTextureFormatConversionTable == x24_1.d)
                    goto label_f8b594
                
                int64_t (* x9_18)() = gGLTextureFormatConversionTable + 0x10
                
                if (*x9_18 != x24_1.d)
                    x9_18 = gGLTextureFormatConversionTable + 0x20
                    
                    if (*x9_18 == x24_1.d)
                        goto label_f8b570
                    
                    x9_18 = gGLTextureFormatConversionTable + 0x30
                    
                    if (*x9_18 == x24_1.d)
                        goto label_f8b570
                    
                    x9_18 = gGLTextureFormatConversionTable + 0x40
                    
                    if (*x9_18 == x24_1.d)
                        goto label_f8b570
                    
                    x9_18 = gGLTextureFormatConversionTable + 0x50
                    
                    if (*x9_18 == x24_1.d)
                        goto label_f8b570
                    
                    x9_18 = gGLTextureFormatConversionTable + 0x60
                    
                    if (*x9_18 == x24_1.d)
                        goto label_f8b570
                    
                    x8_16 = gGLTextureFormatConversionTable + 0x70
                    
                    if (*x8_16 == x24_1.d)
                        goto label_f8b594
                    
                    goto label_f8b60c
                
            label_f8b570:
                x8_16 = x9_18
            label_f8b594:
                glTexImage2D(zx.q(x23), 0, zx.q(*(x8_16 + 4)), zx.q(x20), zx.q(x19), 0, 
                    zx.q(*(x8_16 + 8)), zx.q(*(x8_16 + 0xc)), 0)
                glFramebufferTexture2D(0x8d40, 0x8ce0, 0xde1, zx.q(var_64), 0)
                glCheckFramebufferStatus(0x8d40)
                x1_7 = zx.q(var_68)
            glBindFramebuffer(0x8d40, x1_7)
    else
        void* x21_2 = x28 + x27 * 0x158
        glGenRenderbuffers(1, x21_2 + 0xe8)
        glBindRenderbuffer(0x8d41, zx.q(*(x21_2 + 0xe8)))
        glRenderbufferStorage(0x8d41, 0x81a5, zx.q(x20), zx.q(x19))

return zx.q(x25[0x54])
