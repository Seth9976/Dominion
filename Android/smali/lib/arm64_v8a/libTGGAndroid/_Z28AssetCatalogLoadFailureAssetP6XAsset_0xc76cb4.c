// 函数: _Z28AssetCatalogLoadFailureAssetP6XAsset
// 地址: 0xc76cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::GetString()
XTrace("Can't load asset: '%s'")
AssetPathFromName("sys/FailureAsset", zx.q(*(arg1 + 8)))
int64_t* x0_3 = AssetPtrFromPath(XString::operator char const*(), zx.q(*(arg1 + 8)))
XString::~XString()

if (*x0_3 != 0)
    DefinitionPurgeAsset(x0_3)
    *x0_3 = 0

DefinitionLoadFileAsset(x0_3, false)

if (*x0_3 != 0)
    XString::operator char const*()

if (*x0_3 == 0 || *x0_3 == 0)
    AssetUtilsMakeDatalessFailureAsset(x0_3)

DefMap* x0_9 = DefMapFromAssetType(zx.q(*(arg1 + 8)))
int64_t x0_11 = DefinitionNewDeepCopy(*x0_3, x0_9)
int32_t x8_4 = *(arg1 + 8)
*arg1 = x0_11
*(arg1 + 0xc) = 4
void* result = AssetTypeGetInfo(zx.q(x8_4))
int64_t x21_1 = *(result + 8)

if (x21_1 == 0)
    return result

return x21_1(XString::operator char const*(), **arg1)
