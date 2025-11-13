// 函数: _Z25TextureCreateForRenderingjj13TextureFormat11TextureTypePKc
// 地址: 0xfd7784
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefAssetHeader* x0_1 = DefinitionNew(*macro_ptr_DefTexture)
uint32_t**** result
uint32_t**** result_3

if (arg5 == 0)
    uint32_t**** result_2 = AssetCatalogNewMemoryAsset(3, x0_1)
    result = result_2
    result_3 = result_2
    
    if (result_2 == 0)
        result_3 = AssetPtrGetNull(3)
else
    uint32_t**** result_1 = AssetCatalogNewAsset(arg5, 3, x0_1)
    result = result_1
    result_3 = result_1
    
    if (result_1 == 0)
        result_3 = AssetPtrGetNull(3)

uint32_t*** x8_1 = *result_3

if (x8_1 == 0)
    AssetCatalogLoadAsset(result_3, false, true)
    x8_1 = *result_3

*(result_3 + 0x24) += 1
uint32_t** x26 = *x8_1
uint32_t* x0_5 = XMalloc(0x50)
DefinitionFillBlockWithDefaults(x0_5, *macro_ptr_DefTextureImportData)
*x0_5 = arg1
x0_5[1] = arg2
x0_5[6] = arg3
x0_5[7] = arg4
x0_5[0xf] = 0
*(x0_5 + 0x48) = 0
*(x0_5 + 0x10) = 0x800000001
*x26 = x0_5
*(result_3 + 0x24) -= 1
return result
