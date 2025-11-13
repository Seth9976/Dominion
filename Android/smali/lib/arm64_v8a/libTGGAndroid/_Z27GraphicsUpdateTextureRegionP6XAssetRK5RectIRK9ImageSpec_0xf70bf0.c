// 函数: _Z27GraphicsUpdateTextureRegionP6XAssetRK5RectIRK9ImageSpec
// 地址: 0xf70bf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gGraphicsInterface == 0)
    return 

XAsset* x20_1 = arg1
int128_t var_40 = *arg2
void*** x8_1 = *arg1

if (x8_1 == 0)
    if (*(x20_1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_1, false, true)
    x8_1 = *x20_1

void* x8_4 = **x8_1
XAsset* x22_1 = *(x8_4 + 0x28)

if (x22_1 != 0)
    int64_t x0_4
    int64_t x1_2
    x0_4, x1_2 = RectIOffset(&var_40, x8_4 + 0x34)
    x20_1 = x22_1
    var_40.q = x0_4
    var_40:8.q = x1_2

int64_t* x0_5 = *gGraphicsInterface
(*(*x0_5 + 0x40))(x0_5, x20_1, &var_40, arg3)
