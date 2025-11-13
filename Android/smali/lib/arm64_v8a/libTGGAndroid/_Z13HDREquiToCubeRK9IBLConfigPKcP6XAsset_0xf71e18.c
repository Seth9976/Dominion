// 函数: _Z13HDREquiToCubeRK9IBLConfigPKcP6XAsset
// 地址: 0xf71e18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* var_40
DrawCubemap(arg3, &var_40, *arg1, zx.q(*(arg1 + 4)))
char var_48
XString::XString(&var_48)
XString::operator+=(&var_48)
XAsset* result = TextureMakeCubeMap(&var_48, &var_40, 1)
AssetCatalogSave(result)
AssetCatalogPurgeAsset(result)
XString::~XString()
return result
