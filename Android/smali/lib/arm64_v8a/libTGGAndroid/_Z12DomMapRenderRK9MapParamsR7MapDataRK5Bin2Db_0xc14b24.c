// 函数: _Z12DomMapRenderRK9MapParamsR7MapDataRK5Bin2Db
// 地址: 0xc14b24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *TEXTURE_SYS_WHITE_PIXEL
int64_t var_38 = 0x40000000800

if (*(GetLocalSettings() + 0x3c) != 1)
    result = MapToTexture(arg1, arg2, arg3, &var_38)

if ((arg4.d & 1) != 0)
    int64_t* x8_1 = *result
    
    if (x8_1 == 0)
        if (result[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(result, false, true)
        x8_1 = *result
    
    int32_t* x8_4 = **x8_1
    int32_t x20_1 = *x8_4
    int32_t x21_1 = x8_4[1]
    int32_t x0_7 = TextureFormatLinearImageSize(x20_1, x21_1, 1)
    uint32_t x0_9 = TextureFormatPitch(x20_1, 1)
    int32_t var_3c_1 = 1
    uint8_t* var_50 = XMalloc(x0_7)
    TextureGetRenderData(result, &var_50)
    AssetCatalogPurgeAsset(result)
    XGetSaveGameFolder(true)
    XFormatString("%smap.png")
    
    if ((PNGExportTexture(XString::operator char const*(), 1, var_50, x0_9, x20_1, x21_1) & 1) == 0)
        XString::GetString()
        XTrace("PNGExportTexture failed to png write %s")
    
    XString::GetString()
    XTrace("DomMapWriteFile %s")
    XFree(var_50)
    XString::~XString()

if ((zx.d(data_18c7578) & 1) == 0 && __cxa_guard_acquire(&data_18c7578) != 0)
    data_18c7570 = AssetPtrFromPath("xbin/atlases/res/atlas-campaign-0.texture", 3)
    __cxa_guard_release(&data_18c7578)

AssetCatalogPurgeAsset(data_18c7570)

if ((zx.d(data_18c7588) & 1) == 0 && __cxa_guard_acquire(&data_18c7588) != 0)
    data_18c7580 = AssetPtrFromPath("xbin/atlases/res/atlas-campaign_masks-0.texture", 3)
    __cxa_guard_release(&data_18c7588)

AssetCatalogPurgeAsset(data_18c7580)

if ((zx.d(data_18c7598) & 1) == 0 && __cxa_guard_acquire(&data_18c7598) != 0)
    data_18c7590 = AssetPtrFromPath("xbin/atlases/res/atlas-campaign_terrain-0.texture", 3)
    __cxa_guard_release(&data_18c7598)

AssetCatalogPurgeAsset(data_18c7590)
AssetCatalogPurgeAsset(*TEXTURE_EFFECTS_CHART_CHART_LINES_OWNED)
AssetCatalogPurgeAsset(*TEXTURE_EFFECTS_CHART_PARCHMENT_GRUNGE)
return result
