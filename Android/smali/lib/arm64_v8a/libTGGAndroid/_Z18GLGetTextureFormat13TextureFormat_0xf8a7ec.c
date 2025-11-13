// 函数: _Z18GLGetTextureFormat13TextureFormat
// 地址: 0xf8a7ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* const x8)() = gGLTextureFormatConversionTable

if (*gGLTextureFormatConversionTable != arg1)
    int64_t (* x9_1)() = gGLTextureFormatConversionTable + 0x10
    
    if (*x9_1 == arg1)
        return x9_1
    
    x9_1 = gGLTextureFormatConversionTable + 0x20
    
    if (*x9_1 == arg1)
        return x9_1
    
    x9_1 = gGLTextureFormatConversionTable + 0x30
    
    if (*x9_1 == arg1)
        return x9_1
    
    x9_1 = gGLTextureFormatConversionTable + 0x40
    
    if (*x9_1 == arg1)
        return x9_1
    
    x9_1 = gGLTextureFormatConversionTable + 0x50
    
    if (*x9_1 == arg1)
        return x9_1
    
    x9_1 = gGLTextureFormatConversionTable + 0x60
    
    if (*x9_1 == arg1)
        return x9_1
    
    x8 = gGLTextureFormatConversionTable + 0x70
    
    if (*x8 != arg1)
        pthread_kill(pthread_self(), 6)
        XAsset* x0_2
        uint32_t x1
        int32_t x2
        int32_t x3
        int32_t* x4
        int32_t* x5
        x0_2, x1, x2, x3, x4, x5 = XNoReturn()
        return OpenGLInterface::LockTextureBuffer(x0_2, x1, x2, x3, x4, x5) __tailcall

return x8
