// 函数: _Z32TextureCreateMemoryTextureDecodejji13TextureFormat15TextureFileTypePh
// 地址: 0xfd7650
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = AssetCatalogNewMemoryAsset(3, DefinitionNew(*macro_ptr_DefTexture))
int64_t* result_1 = result
uint32_t*** x8_1

if (result == 0)
    result_1 = AssetPtrGetNull(3)
    x8_1 = *result_1
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8_1 = *result_1
else
    x8_1 = *result_1
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8_1 = *result_1

*(result_1 + 0x24) += 1
uint32_t** x28 = *x8_1
uint32_t* x0_2 = XMalloc(0x50)
DefinitionFillBlockWithDefaults(x0_2, *macro_ptr_DefTextureImportData)
*x0_2 = arg1
x0_2[1] = arg2
x0_2[6] = arg4
x0_2[7] = 0
x0_2[4] = 1
x0_2[5] = arg5
x0_2[0xf] = 1
int32_t* x0_3 = XCalloc(0x10)
*(x0_2 + 0x48) = x0_3
*x0_3 = arg3
*(*(x0_2 + 0x48) + 8) = arg6
*x28 = x0_2
*(result_1 + 0x24) -= 1
return result
