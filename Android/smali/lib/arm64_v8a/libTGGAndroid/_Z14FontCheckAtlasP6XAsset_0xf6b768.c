// 函数: _Z14FontCheckAtlasP6XAsset
// 地址: 0xf6b768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = FontGetDef(arg1)

if (*(result + 0x1c) != 0)
    void* x21_1 = *(result + 0x20)
    int32_t x8_1 = *(x21_1 + 0x10)
    
    if (x8_1 != 0)
        int64_t* x20_1 = *(x21_1 + 8)
        int64_t* x9_1 = *x20_1
        
        if (x9_1 == 0)
            if (x20_1[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            result = AssetCatalogLoadAsset(x20_1, false, true)
            x9_1 = *x20_1
            x8_1 = *(x21_1 + 0x10)
        
        if (x8_1 != *(**x9_1 + 0x30))
            XString::operator char const*()
            XTrace("didn't find asset in atlas forcing a reimport %s")
            AssetCatalogPurgeAsset(arg1)
            return AssetCatalogLoadAsset(arg1, true, false) __tailcall

return result
