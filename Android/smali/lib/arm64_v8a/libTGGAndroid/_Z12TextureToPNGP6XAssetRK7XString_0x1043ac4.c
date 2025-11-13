// 函数: _Z12TextureToPNGP6XAssetRK7XString
// 地址: 0x1043ac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int32_t* x8_3 = **x8
int32_t x21 = *x8_3
int32_t x22 = x8_3[1]
int32_t x0_4 = TextureFormatLinearImageSize(x21, x22, 1)
uint32_t x0_6 = TextureFormatPitch(x21, 1)
uint32_t var_48 = x0_6
int32_t var_44 = 1
int32_t var_50 = x21
int32_t var_4c = x22
uint8_t* var_58 = XMalloc(x0_4)
TextureGetRenderData(arg1, &var_58)
AssetCatalogPurgeAsset(arg1)

if ((PNGExportTexture(XString::operator char const*(), 1, var_58, x0_6, x21, x22) & 1) == 0)
    XString::GetString()
    XTrace("PNGExportTexture failed to png write %s")

return XFree(var_58)
