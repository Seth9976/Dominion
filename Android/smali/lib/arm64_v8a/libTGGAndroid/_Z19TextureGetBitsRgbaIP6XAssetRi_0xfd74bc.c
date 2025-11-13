// 函数: _Z19TextureGetBitsRgbaIP6XAssetRi
// 地址: 0xfd74bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t*** x8 = *arg1

if (x8 == 0)
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

*(arg1 + 0x24) += 1
int32_t** x21 = *x8

if (x21[2] == 0)
    int64_t var_38
    TextureGetImageData(arg1, &var_38)
    x21[2] = var_38

*arg2 = **x21
int64_t result = x21[2]
*(arg1 + 0x24) -= 1
return result
