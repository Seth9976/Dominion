// 函数: _Z19DomMapAssetPurgeAllv
// 地址: 0xc1fab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MutexLock(gMapGlobals + 0x68)
MutexLock(gMapGlobals + 0x40)
uint64_t x8 = zx.q(*(gMapGlobals + 8))

if (x8.d != 0)
    void* i_3 = *gMapGlobals
    int64_t x12_1 = 0x5110
    void* i = i_3
    
    do
        if (zx.d(*(i_3 + x12_1 + 2)) != 0)
            while (i != 0xffffffff)
                XAsset* x0_2 = *(i + 0x5080)
                
                if (x0_2 != 0)
                    AssetCatalogPurgeAsset(x0_2)
                    AssetCatalogFreeAsset(*(i + 0x5080))
                    *(i + 0x5080) = 0
                    i_3 = *gMapGlobals
                    x8 = zx.q(*(gMapGlobals + 8))
                
                if (i == 0)
                    i = i_3
                else
                    i += 0x5118
                
                void* x10_2 = i_3 + mulu.dp.d(x8.d, 0x5118)
                
                if (i u>= x10_2)
                    break
                
                void* x11_2 = i + 0x5110
                
                while (zx.d(*(x11_2 + 2)) == 0)
                    i += 0x5118
                    x11_2 += 0x5118
                    
                    if (i u>= x10_2)
                        goto label_c1fb90
            
            break
        
        i += 0x5118
        x12_1 += 0x5118
    while (i u< i_3 + x8 * 0x5118)

label_c1fb90:
void* i_2 = *(gMapGlobals + 0x28)

if (i_2 != 0)
    void* i_1
    
    do
        i_1 = *(i_2 + 8)
        XPooledFree(i_2, 0x18)
        i_2 = i_1
    while (i_1 != 0)

*(gMapGlobals + 0x28) = 0
*(gMapGlobals + 0x30) = 0
*(gMapGlobals + 0x38) = 0
MutexUnlock(gMapGlobals + 0x40)
return MutexUnlock(gMapGlobals + 0x68) __tailcall
