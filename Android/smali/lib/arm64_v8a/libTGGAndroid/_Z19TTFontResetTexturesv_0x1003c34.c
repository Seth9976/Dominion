// 函数: _Z19TTFontResetTexturesv
// 地址: 0x1003c34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = AssetCatalogGetFirstIter()
int64_t* i = result

if (result != 0)
    do
        result = AssetCatalogGetNextIter(&i)
        
        if (result[1].d == 0x25 && *(result + 0xc) != 0)
            int64_t* x8_6 = *result
            
            if (x8_6 == 0)
                AssetCatalogLoadAsset(result, false, true)
                x8_6 = *result
            
            *(*x8_6 + 0x38)
            result = RegionAllocator::Clear()
    while (i != 0)

return result
