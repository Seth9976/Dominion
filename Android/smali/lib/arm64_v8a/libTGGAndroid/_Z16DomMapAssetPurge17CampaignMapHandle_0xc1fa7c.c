// 函数: _Z16DomMapAssetPurge17CampaignMapHandle
// 地址: 0xc1fa7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *gMapGlobals + mulu.dp.d(zx.d(arg1), 0x5118)
AssetCatalogPurgeAsset(*(x19 + 0x5080))
int64_t result = AssetCatalogFreeAsset(*(x19 + 0x5080))
*(x19 + 0x5080) = 0
return result
