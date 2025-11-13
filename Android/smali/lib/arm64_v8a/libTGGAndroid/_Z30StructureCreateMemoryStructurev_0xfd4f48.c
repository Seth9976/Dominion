// 函数: _Z30StructureCreateMemoryStructurev
// 地址: 0xfd4f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = AssetCatalogNewMemoryAsset(2, DefinitionNew(*macro_ptr_DefStructure))
int64_t* result_1 = result
int64_t* x8

if (result == 0)
    result_1 = AssetPtrGetNull(2)
    x8 = *result_1
    
    if (x8 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8 = *result_1
else
    x8 = *result_1
    
    if (x8 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8 = *result_1

*(result_1 + 0x24) += 1
DefinitionFillBlockWithDefaults(*x8, *macro_ptr_DefStructure)
*(result_1 + 0x24) -= 1
return result
