// 函数: _Z24AssetUtilNewAssetFromDef7XStringPv9AssetType
// 地址: 0xc7f254
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
AssetCatalogPurgeAsset(AssetPtrFromPath(XString::operator char const*(), zx.q(x19)))
DefMap* x0_3 = DefMapFromAssetType(zx.q(x19))
void** x0_4 = XCalloc(0x20)
DefAssetHeader* x23 = x0_4
x0_4[3] = x0_3
*x0_4 = arg2
*(x23 + 8) = DefParseTreeMakeFromDefinition(arg2, x0_3)
XAsset* x0_8 = AssetCatalogNewAsset(XString::operator char const*(), zx.q(x19), x23)
int32_t x0_9 = AssetCatalogSave(x0_8)
AssetCatalogDelete(x0_8)
return zx.q(x0_9) & 1
