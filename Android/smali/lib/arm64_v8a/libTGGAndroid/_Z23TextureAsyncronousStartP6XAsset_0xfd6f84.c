// 函数: _Z23TextureAsyncronousStartP6XAsset
// 地址: 0xfd6f84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

while (true)
    int32_t*** x8_2 = *arg1
    XAsset* x19_1 = arg1
    
    if (x8_2 == 0)
        if (*(x19_1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x19_1, false, true)
        x8_2 = *x19_1
    
    int32_t** x21_1 = *x8_2
    int32_t* x22_1 = *x21_1
    
    if (x22_1 == 0)
        break
    
    arg1 = *(x22_1 + 0x28)
    
    if (arg1 == 0)
        if (x21_1[1].d == 0)
            if (x22_1[5] != 8)
                arg1 = TextureFormatIsCompressed(zx.q(x22_1[6]))
            
            if (x22_1[5] == 8 || (arg1.d & 1) != 0 || x22_1[0xf] != 1)
                return TextureBindGraphicsBuffers(x19_1) __tailcall
            
            if (x21_1[3] == 0)
                void* x0_4 = XPooledCalloc(0x30)
                x21_1[3] = x0_4
                char* x8_7 = *gpTextureAppData
                
                if (zx.d(*x8_7) == 0)
                    *x8_7 = 1
                    MutexInit(*gpTextureAppData + 4)
                
                int32_t* x23 = *(x22_1 + 0x48)
                *(x0_4 + 0x10) =
                    XMalloc(TextureFormatLinearImageSize(*x22_1, x22_1[1], zx.q(x22_1[6])))
                *(x0_4 + 0x18) = *x22_1
                *(x0_4 + 0x1c) = x22_1[1]
                *(x0_4 + 0x20) = TextureFormatPitch(*x22_1, zx.q(x22_1[6]))
                *(x0_4 + 0x24) = x22_1[6]
                *(x0_4 + 0x28) = x22_1[5]
                int32_t x0_11 = *x23
                *(x0_4 + 4) = x0_11
                uint8_t* x0_12 = XMalloc(x0_11)
                *(x0_4 + 8) = x0_12
                AssetCatalogLoadHWBuffer(x19_1, x0_12, 0, *(x0_4 + 4), *(x23 + 8))
                MutexLock(*gpTextureAppData + 4)
                uint64_t x8_14 = *gpTextureAppData
                int32_t* x9_2 = x8_14 + 0x30
                int64_t x10_10
                
                if (*x9_2 == 0)
                    x10_10 = 0
                label_fd71c8:
                    *x9_2 = 1
                    *(x8_14 + (x10_10 << 4) + 0x38) = x19_1
                    x8_14 = *gpTextureAppData
                else
                    x9_2 = x8_14 + 0x40
                    
                    if (*x9_2 == 0)
                        x10_10 = 1
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0x50
                    
                    if (*x9_2 == 0)
                        x10_10 = 2
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0x60
                    
                    if (*x9_2 == 0)
                        x10_10 = 3
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0x70
                    
                    if (*x9_2 == 0)
                        x10_10 = 4
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0x80
                    
                    if (*x9_2 == 0)
                        x10_10 = 5
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0x90
                    
                    if (*x9_2 == 0)
                        x10_10 = 6
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0xa0
                    
                    if (*x9_2 == 0)
                        x10_10 = 7
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0xb0
                    
                    if (*x9_2 == 0)
                        x10_10 = 8
                        goto label_fd71c8
                    
                    x9_2 = x8_14 + 0xc0
                    
                    if (*x9_2 == 0)
                        x10_10 = 9
                        goto label_fd71c8
                return MutexUnlock(x8_14 + 4) __tailcall
        
        break
