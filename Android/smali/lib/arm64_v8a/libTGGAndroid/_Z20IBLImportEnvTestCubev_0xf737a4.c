// 函数: _Z20IBLImportEnvTestCubev
// 地址: 0xf737a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)
XAsset* result = AssetPtrFromPathDontCreate(&var_18)
XString::~XString()

if (result == 0)
    char var_28
    XString::XString(&var_28)
    DefAssetHeader* x0_11 = AssetUtilNewDefHeader(3)
    void var_30
    XString::XString(&var_30)
    int32_t x0_13 = TextureReimport("env_asset", x0_11, &var_30)
    XString::~XString()
    
    if ((x0_13 & 1) == 0)
        XString::~XString()
        return nullptr
    
    result = AssetCatalogNewAsset("res/vr/test/env_asset.texture", 3, x0_11)
    XString::~XString()
    
    if ((TextureIsCubemap(result) & 1) == 0)
        result = HDREquiToCube(DEFAULT_IBL_CONFIG, "res/vr/test/env_asset_cube", result)
else if ((TextureIsCubemap(result) & 1) == 0)
    result = HDREquiToCube(DEFAULT_IBL_CONFIG, "res/vr/test/env_asset_cube", result)

if ((TextureHasMips(result) & 1) == 0)
    TextureCreateMipmaps(result)

return result
