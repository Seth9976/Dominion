// 函数: _Z18FontGetGlyphOffsetP6XAssetf
// 地址: 0x1003268
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

void* x19_2 = *x8
int64_t result
float v0_1
int128_t v2
result, v0_1, v2 = stbtt_ScaleForMappingEmToPixels(*(x19_2 + 0x38), arg2)
*(x19_2 + 0x4c)
v2.d = v0_1 * *(x19_2 + 0x48)
return result
