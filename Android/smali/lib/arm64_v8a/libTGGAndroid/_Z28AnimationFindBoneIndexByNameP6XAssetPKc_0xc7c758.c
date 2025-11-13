// 函数: _Z28AnimationFindBoneIndexByNameP6XAssetPKc
// 地址: 0xc7c758
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
DefStructureImportData*** x8

if (arg1 == 0)
    x19 = AssetPtrGetNull(2)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int64_t result = FindBoneIndexByName(**x8, arg2)
*(x19 + 0x24) -= 1
return result
