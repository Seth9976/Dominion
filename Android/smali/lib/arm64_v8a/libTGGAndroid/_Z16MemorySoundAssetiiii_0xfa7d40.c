// 函数: _Z16MemorySoundAssetiiii
// 地址: 0xfa7d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = AssetCatalogNewMemoryAsset(0x15, DefinitionNew(*macro_ptr_DefSound))
int64_t* result_1 = result
void** x8_1

if (result == 0)
    result_1 = AssetPtrGetNull(0x15)
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
void* x26 = *x8_1
int32_t* x0_2 = XMalloc(0x20)
DefinitionFillBlockWithDefaults(x0_2, *macro_ptr_DefSoundImportData)
*(x0_2 + 0x18) = XCalloc(arg1)
x0_2[2] = arg3
x0_2[3] = arg1
*x0_2 = arg2
x0_2[1] = arg4
x0_2[4] = 1
x0_2[5] = arg1
*(x26 + 0x38) = x0_2
*(result_1 + 0x24) -= 1
return result
