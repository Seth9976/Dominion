// 函数: _Z37TextureAsychronousGetNumberInProgressv
// 地址: 0xfd71e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *gpTextureAppData
int32_t x19

if (zx.d(*x8) == 0)
    x19 = 0
else
    MutexLock(&x8[4])
    int64_t i = 0
    x19 = 0
    
    do
        uint64_t x8_1 = *gpTextureAppData
        void* x25_1 = x8_1 + i
        int32_t x9_1 = *(x25_1 + 0x30)
        
        if (x9_1 == 1)
            x19 += 1
        else if (x9_1 == 3)
            *(x25_1 + 0x30) = 0
            *(x8_1 + i + 0x38) = 0
        else if (x9_1 == 2)
            void* x26_1 = x8_1 + i
            int64_t* x21_1 = *(x26_1 + 0x38)
            int64_t* x8_2 = *x21_1
            
            if (x8_2 == 0)
                if (x21_1[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                AssetCatalogLoadAsset(x21_1, false, true)
                x8_2 = *x21_1
            
            **(*x8_2 + 0x18) = 1
            TextureBindGraphicsBuffers(*(x26_1 + 0x38))
            TextureAsyncronousFree(*(x26_1 + 0x38))
            *(x25_1 + 0x30) = 0
            *(x26_1 + 0x38) = 0
        
        i += 0x10
    while (i != 0xa0)
    
    MutexUnlock(*gpTextureAppData + 4)

return zx.q(x19)
