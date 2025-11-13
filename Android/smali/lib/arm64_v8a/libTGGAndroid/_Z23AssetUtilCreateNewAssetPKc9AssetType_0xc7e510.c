// 函数: _Z23AssetUtilCreateNewAssetPKc9AssetType
// 地址: 0xc7e510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2.d
AssetPathFromName(arg1, arg2)
XString::operator char const*()
XTrace("Creating %s")
int64_t* x0_2 = DefMapFromAssetType(zx.q(x19))
char* x0_3 = DefParseTreeAlloc()
*(x0_3 + 0x20) = x0_2
*x0_2
XString::operator=(x0_3)
DefAssetHeader* x0_4 = XCalloc(0x20)
*(x0_4 + 0x18) = x0_2
*(x0_4 + 8) = x0_3
*x0_4 = DefParseTreeMakeDefinition(x0_3, x0_2)
XAsset* result_1 = AssetCatalogNewAsset(XString::operator char const*(), zx.q(x19), x0_4)
XAsset* result

if ((AssetCatalogSave(result_1) & 1) != 0)
    result = result_1
else
    result = nullptr

XString::~XString()
return result
