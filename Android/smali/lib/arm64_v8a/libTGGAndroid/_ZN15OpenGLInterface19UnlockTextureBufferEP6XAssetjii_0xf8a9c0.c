// 函数: _ZN15OpenGLInterface19UnlockTextureBufferEP6XAssetjii
// 地址: 0xf8a9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(arg1 + 0x4248)
uint64_t x23 = zx.q(arg3) & 0xffff
int32_t x24 = *(x22 + mulu.dp.d(x23.d, 0x158))
int64_t x8 = *(x22 + mulu.dp.d(x23.d, 0x158) + 0xd8)
int64_t* x19 = arg2
int64_t* x8_1

if (arg2 == 0)
    x19 = AssetPtrGetNull(3)
    x8_1 = *x19
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8_1 = *x19
else
    x8_1 = *x19
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8_1 = *x19

*(x19 + 0x24) += 1
int64_t (* const x28)() = gGLTextureFormatConversionTable
int32_t* x27 = **x8_1
int32_t x8_4 = *(x22 + x23 * 0x158 + 0x14c)
uint64_t x0 = zx.q(x27[6])
int32_t x26 = x27[4]
void* fp = *(x27 + 0x48)
uint32_t x10_2 = (*x27 u/ x8_4) u>> arg4
uint32_t x8_6 = (x27[1] u/ x8_4) u>> arg4
uint32_t x23_1

x23_1 = x10_2 != 0 ? x10_2 : 1

uint32_t x22_1

x22_1 = x8_6 != 0 ? x8_6 : 1

if (*gGLTextureFormatConversionTable == x0.d)
    goto label_f8aae0

int64_t (* x8_7)() = gGLTextureFormatConversionTable + 0x10

if (*x8_7 == x0.d)
label_f8aadc:
    x28 = x8_7
label_f8aae0:
    int32_t x8_8 = x27[7]
    int32_t entry_x4
    
    if (x8_8 == 1)
        uint64_t x8_14 = *gOpenGLInterface
        
        if (*(x8_14 + 0x4160) != x24)
            int32_t x9_13 = *(x8_14 + 0x409c)
            *(x8_14 + 0x4160) = x24
            
            if (x9_13 != 0)
                *(x8_14 + 0x409c) = 0
                glActiveTexture(0x84c0)
            
            glBindTexture(0x8513, zx.q(x24))
        
        glTexImage2D(zx.q(*(gCubeSideList + (sx.q(entry_x4) << 2))), zx.q(arg4), zx.q(*(x28 + 4)), 
            zx.q(x23_1), zx.q(x22_1), 0, zx.q(*(x28 + 8)), zx.q(*(x28 + 0xc)), x8, x8)
    label_f8ac70:
        int64_t result = XFree(*(x22 + mulu.dp.d(x23.d, 0x158) + 0xd8))
        *(x22 + mulu.dp.d(x23.d, 0x158) + 0xd8) = 0
        *(x19 + 0x24) -= 1
        return result
    
    if (x8_8 == 0)
        uint64_t x8_9 = *gOpenGLInterface
        
        if (*(x8_9 + 0x40a0) != x24)
            int32_t x9_11 = *(x8_9 + 0x409c)
            *(x8_9 + 0x40a0) = x24
            
            if (x9_11 != 0)
                *(x8_9 + 0x409c) = 0
                glActiveTexture(0x84c0)
            
            glBindTexture(0xde1, zx.q(x24))
            x0 = zx.q(x27[6])
        
        int32_t x0_1 = TextureFormatIsCompressed(x0)
        uint64_t x2 = zx.q(*(x28 + 4))
        
        if ((x0_1 & 1) == 0)
            glTexImage2D(0xde1, zx.q(arg4), x2, zx.q(x23_1), zx.q(x22_1), 0, zx.q(*(x28 + 8)), 
                zx.q(*(x28 + 0xc)), x8, x8)
        else
            glCompressedTexImage2D(0xde1, zx.q(arg4), x2, zx.q(x23_1), zx.q(x22_1), 0, 
                zx.q(*(fp + (sx.q(arg4 + x26 * entry_x4) << 4))), 0)
        
        if (zx.d(*(*gAppInterface + 0x35)) != 0 && x27[6] s<= 0x6e)
            glGenerateMipmap(0xde1)
        
        goto label_f8ac70
else
    x8_7 = gGLTextureFormatConversionTable + 0x20
    
    if (*x8_7 == x0.d)
        goto label_f8aadc
    
    x8_7 = gGLTextureFormatConversionTable + 0x30
    
    if (*x8_7 == x0.d)
        goto label_f8aadc
    
    x8_7 = gGLTextureFormatConversionTable + 0x40
    
    if (*x8_7 == x0.d)
        goto label_f8aadc
    
    x8_7 = gGLTextureFormatConversionTable + 0x50
    
    if (*x8_7 == x0.d)
        goto label_f8aadc
    
    x8_7 = gGLTextureFormatConversionTable + 0x60
    
    if (*x8_7 == x0.d)
        goto label_f8aadc
    
    x28 = gGLTextureFormatConversionTable + 0x70
    
    if (*x28 == x0.d)
        goto label_f8aae0
    
    pthread_kill(pthread_self(), 6)
    XNoReturn()

pthread_kill(pthread_self(), 6)
int64_t* x0_8 = XNoReturn()
*(x19 + 0x24) -= 1
sub_1101e04(x0_8)
noreturn
