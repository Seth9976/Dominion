// 函数: _Z28TextureUnbindGraphicsBuffersP10DefTexture
// 地址: 0xfd7310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) != 0)
    (*(**gGraphicsInterface + 0x28))()
    *(arg1 + 8) = 0

void* result = *(arg1 + 0x10)

if (result != 0)
    result = XFree(result)
    *(arg1 + 0x10) = 0

if (*(arg1 + 0x18) == 0)
    return result

MutexLock(*gpTextureAppData + 4)
int32_t x23 = 0
int32_t x8_5 = 1

while (true)
    int32_t x24_1 = x8_5
    
    if (x23 u<= 9)
        uint64_t x8_6 = *gpTextureAppData
        
        if (*(x8_6 + (zx.q(x23) << 4) + 0x30) == 0)
            goto label_fd73a0
        
        int64_t* x21_1 = *(x8_6 + (zx.q(x23) << 4) + 0x38)
        int64_t* x8_7 = *x21_1
        
        if (x8_7 == 0)
            if (x21_1[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x21_1, false, true)
            
            if (**x21_1 != arg1)
                goto label_fd73a0
        else if (*x8_7 != arg1)
            goto label_fd73a0
        
        if (*(x8_6 + (zx.q(x23) << 4) + 0x30) != 1)
            TextureAsyncronousFree(*(x8_6 + (zx.q(x23) << 4) + 0x38))
            x24_1 = 0
            *(x8_6 + (zx.q(x23) << 4) + 0x30) = 0
            *(x8_6 + (zx.q(x23) << 4) + 0x38) = 0
        label_fd73a0:
            x23 += 1
            x8_5 = x24_1
            continue
        
        MutexUnlock(*gpTextureAppData + 4)
        XSleep(0x64)
        MutexLock(*gpTextureAppData + 4)
    
    x23 = 0
    x8_5 = 1
    
    if ((x24_1 & 1) == 0)
        break

return MutexUnlock(*gpTextureAppData + 4) __tailcall
