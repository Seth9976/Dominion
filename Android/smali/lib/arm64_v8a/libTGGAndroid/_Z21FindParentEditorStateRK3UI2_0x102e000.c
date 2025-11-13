// 函数: _Z21FindParentEditorStateRK3UI2
// 地址: 0x102e000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg1 + 0x17d0)

if (x22 == 0)
    return &data_793a18

while (*(x22 + 0x17d0) != 0)
    int64_t* x20_1 = *(x22 + 0x1688)
    int64_t* x8_2 = *x20_1
    
    if (x8_2 == 0)
        if (x20_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x20_1, false, true)
        x8_2 = *x20_1
    
    char* result = AttribMapGetString(*gUI2AttribTable, **x8_2 + sx.q(*(x22 + 0x1690)) * 0x18, 0x6f)
    
    if (result != 0 && zx.d(*result) != 0)
        return result
    
    x22 = *(x22 + 0x17d0)
    
    if (x22 == 0)
        break

return &data_793a18
