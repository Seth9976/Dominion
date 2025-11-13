// 函数: _ZN15OpenGLInterface19UpdateTextureBufferEP6XAssetRK5RectIRK9ImageSpec
// 地址: 0xf8ace4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RectIWidth(arg3)
RectIHeight(arg3)
RectI const& x19 = arg2
int64_t* x8

if (arg2 == 0)
    x19 = AssetPtrGetNull(3)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int64_t* x23 = **x8
int64_t var_48 = *x23
int64_t x0_3
int64_t x1_1
x0_3, x1_1 = RectISet(V2I0, &var_48)
int64_t var_68 = x0_3
int64_t var_60 = x1_1
int64_t x0_5
int64_t x1_3
x0_5, x1_3 = RectIntersect(&var_68, arg3)
int64_t var_58 = x0_5
int64_t var_50 = x1_3
operator==(&var_58, arg3)
int64_t* entry_x3
TextureFormatPitch(entry_x3[1].d, zx.q(*(entry_x3 + 0x14)))
int16_t x0_9 = TextureBindGraphicsBuffers(arg2)
int32_t x9_2 = x23[3].d
uint64_t x8_3 = *gOpenGLInterface
int64_t (* const x25)() = gGLTextureFormatConversionTable
int32_t x22_1 = *(*(x8_3 + 0x4248) + mulu.dp.d(zx.d(x0_9), 0x158))

if (*gGLTextureFormatConversionTable != x9_2)
    int64_t (* x10_2)() = gGLTextureFormatConversionTable + 0x10
    
    if (*x10_2 == x9_2)
        x25 = x10_2
    else
        x10_2 = gGLTextureFormatConversionTable + 0x20
        
        if (*x10_2 == x9_2)
            x25 = x10_2
        else
            x10_2 = gGLTextureFormatConversionTable + 0x30
            
            if (*x10_2 == x9_2)
                x25 = x10_2
            else
                x10_2 = gGLTextureFormatConversionTable + 0x40
                
                if (*x10_2 == x9_2)
                    x25 = x10_2
                else
                    x10_2 = gGLTextureFormatConversionTable + 0x50
                    
                    if (*x10_2 == x9_2)
                        x25 = x10_2
                    else
                        x10_2 = gGLTextureFormatConversionTable + 0x60
                        
                        if (*x10_2 != x9_2)
                            x25 = gGLTextureFormatConversionTable + 0x70
                            
                            if (*x25 != x9_2)
                                pthread_kill(pthread_self(), 6)
                                int64_t* x0_17 = XNoReturn()
                                *(x19 + 0x24) -= 1
                                sub_1101e04(x0_17)
                                noreturn
                        else
                            x25 = x10_2

if (*(x8_3 + 0x40a0) != x22_1)
    int32_t x9_4 = *(x8_3 + 0x409c)
    *(x8_3 + 0x40a0) = x22_1
    
    if (x9_4 != 0)
        *(x8_3 + 0x409c) = 0
        glActiveTexture(0x84c0)
    
    glBindTexture(0xde1, zx.q(x22_1))

int64_t result = glTexSubImage2D(0xde1, 0, zx.q(*arg3), zx.q(*(arg3 + 4)), zx.q(RectIWidth(arg3)), 
    zx.q(RectIHeight(arg3)), zx.q(*(x25 + 8)), zx.q(*(x25 + 0xc)), *entry_x3)
*(x19 + 0x24) -= 1
return result
