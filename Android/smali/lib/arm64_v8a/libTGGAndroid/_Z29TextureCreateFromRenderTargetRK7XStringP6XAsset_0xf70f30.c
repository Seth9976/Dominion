// 函数: _Z29TextureCreateFromRenderTargetRK7XStringP6XAsset
// 地址: 0xf70f30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = AssetCreateOrGet(arg1, 3)
int64_t* result_1 = result
int64_t* x8

if (result == 0)
    result_1 = AssetPtrGetNull(3)
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
int64_t* x23 = *x8
int32_t* x22 = *x23
int64_t* x8_1

if (x22 == 0)
    int32_t* x0_2 = XMalloc(0x50)
    x22 = x0_2
    DefinitionFillBlockWithDefaults(x0_2, *macro_ptr_DefTextureImportData)
    *x23 = x22
    x8_1 = *arg2
    
    if (x8_1 == 0)
    label_f70fe4:
        
        if (*(arg2 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(arg2, false, true)
        x8_1 = *arg2
else
    x8_1 = *arg2
    
    if (x8_1 == 0)
        goto label_f70fe4

int64_t* x23_1 = *x8_1
*x22 = **x23_1
int32_t x8_6 = *(*x23_1 + 4)
x22[4] = 1
x22[0xf] = 1
x22[1] = x8_6
x22[6] = *(*x23_1 + 0x18)
int64_t x0_6 = XCalloc(0x10)
int32_t x8_9 = *x22
int32_t x24 = x22[1]
*(x22 + 0x48) = x0_6
int32_t var_50 = x8_9
uint64_t x0_7 = zx.q(x22[6])
int32_t var_44 = x0_7.d
int32_t x8_10 = TextureFormatBytesPerPixel(x0_7) * *x22
int64_t var_58 = XMalloc(x24 * x8_10)
TextureGetRenderData(arg2, &var_58)
int32_t* x10 = *(x22 + 0x48)
*x10 = x24 * x8_10
*(x10 + 8) = var_58
x22[5] = 8
int32_t x8_15 = *(*x23_1 + 0x18)
x22[8] = 0
x22[9] = 1
x22[6] = x8_15
x22[7] = 0
*(result_1 + 0x24) -= 1
return result
