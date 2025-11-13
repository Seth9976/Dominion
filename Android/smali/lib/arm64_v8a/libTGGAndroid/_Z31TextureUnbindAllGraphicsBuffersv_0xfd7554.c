// 函数: _Z31TextureUnbindAllGraphicsBuffersv
// 地址: 0xfd7554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_1
__builtin_memset(&i_1, 0, 0x14)
int64_t result = AssetCatalogGetAllAssetsOfType(3, &i_1)
void* i = i_1

if (i != 0)
    do
        XAsset* x19_1 = *i
        i = *(i + 8)
        result = AssetCatalogAssetPtrIsLoaded(x19_1)
        
        if ((result.d & 1) != 0)
            int64_t* x8_1 = *x19_1
            
            if (x8_1 == 0)
                AssetCatalogLoadAsset(x19_1, false, true)
                x8_1 = *x19_1
            
            *(x19_1 + 0x24) += 1
            result = TextureUnbindGraphicsBuffers(*x8_1)
            *(x19_1 + 0x24) -= 1
    while (i != 0)
    
    i = i_1
    
    if (i != 0)
        goto label_fd7590
else if (i != 0)
label_fd7590:
    
    do
        void* i_2 = i
        i = *(i + 8)
        result = XPooledFree(i_2, 0x18)
    while (i != 0)

return result
