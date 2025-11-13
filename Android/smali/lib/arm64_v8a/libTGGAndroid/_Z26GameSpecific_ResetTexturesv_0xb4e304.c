// 函数: _Z26GameSpecific_ResetTexturesv
// 地址: 0xb4e304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x836f0) s>= 1)
    int64_t i = 0
    
    do
        AssetCatalogPurgeAsset(*(gDomClient + (i << 3) + 0x82ef0))
        i += 1
    while (i s< sx.q(*(gDomClient + 0x836f0)))

*(gDomClient + 0x836f0) = 0

if (*(gDomClient + 0x836f4) s>= 1)
    int64_t i_1 = 0
    int64_t (* x21_1)() = gDomClient + 0x836e8
    
    do
        XAsset* x0_2 = *x21_1
        x21_1 -= 8
        AssetCatalogPurgeAsset(x0_2)
        i_1 += 1
    while (i_1 s< sx.q(*(gDomClient + 0x836f4)))

*(gDomClient + 0x836f4) = 0

if (*(gCampaignDlg + 8) == 0)
    return 

return DomMapAssetPurgeAll() __tailcall
