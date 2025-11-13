// 函数: _Z24AssetCatalogMakeWritableP6XAsset
// 地址: 0xc76e08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1

if (x8 != 0)
    if ((zx.d(*(x8 + 0x10)) & 1) == 0)
        return 
    
    DefinitionPurgeAsset(arg1)
    *arg1 = 0

DefinitionLoadFileAsset(arg1, true)

if (*arg1 == 0)
    return AssetCatalogLoadFailureAsset(arg1) __tailcall

return XString::operator char const*() __tailcall
