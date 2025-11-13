// 函数: _Z16AssetCatalogSaveP6XAsset
// 地址: 0xc770a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*gCompilingMode) != 0)
    int64_t* x20_1 = *arg1
    
    if (x20_1[1] == 0)
        DefMap* x0_3 = DefMapFromAssetType(zx.q(*(arg1 + 8)))
        x20_1[1] = DefParseTreeMakeFromDefinition(*x20_1, x0_3)
        
        if ((DefinitionSaveAsset(arg1) & 1) != 0)
            *(arg1 + 0xc) = 1
            return 1
    else if ((DefinitionSaveAsset(arg1) & 1) != 0)
        *(arg1 + 0xc) = 1
        return 1

return 0
