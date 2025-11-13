// 函数: _Z18TextureAsyncThreadPv
// 地址: 0xfd6db4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpTextureAppData

if (zx.d(*(x8 + 1)) == 0)
    do
        MutexLock(x8 + 4)
        uint64_t x8_8 = *gpTextureAppData
        int32_t* x22_1 = x8_8 + 0x30
        
        if (*x22_1 != 1)
            x22_1 = x8_8 + 0x40
            
            if (*x22_1 != 1)
                x22_1 = x8_8 + 0x50
                
                if (*x22_1 != 1)
                    x22_1 = x8_8 + 0x60
                    
                    if (*x22_1 != 1)
                        x22_1 = x8_8 + 0x70
                        
                        if (*x22_1 != 1)
                            x22_1 = x8_8 + 0x80
                            
                            if (*x22_1 != 1)
                                x22_1 = x8_8 + 0x90
                                
                                if (*x22_1 != 1)
                                    x22_1 = x8_8 + 0xa0
                                    
                                    if (*x22_1 != 1)
                                        x22_1 = x8_8 + 0xb0
                                        
                                        if (*x22_1 != 1)
                                            if (*(x8_8 + 0xc0) == 1)
                                                x22_1 = x8_8 + 0xc0
                                            else
                                                x22_1 = nullptr
        
        MutexUnlock(x8_8 + 4)
        void* x8_4 = *(***(x22_1 + 8) + 0x18)
        int32_t x0_3 =
            TextureLoadImage(zx.q(*(x8_4 + 0x28)), x8_4 + 0x10, *(x8_4 + 8), *(x8_4 + 4), 1)
        MutexLock(*gpTextureAppData + 4)
        int32_t x8_6
        
        if ((x0_3 & 1) == 0)
            x8_6 = 3
        else
            x8_6 = 2
        
        *x22_1 = x8_6
        MutexUnlock(*gpTextureAppData + 4)
        x8 = *gpTextureAppData
    while (zx.d(*(x8 + 1)) == 0)

return 0
