// 函数: _Z22AssetCreateIfNecessaryRK7XString9AssetType
// 地址: 0xf71100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
char var_38
XString::XString(&var_38)
XString::operator+(arg1)
AssetTypeGetName(zx.q(x19))
char var_40
XString::XString(&var_40)
void var_30
XString::operator+(&var_30)
XString::~XString()
XString::~XString()
XString::~XString()
XAsset* x0_7 = AssetPtrFromPath(XString::operator char const*(), zx.q(x19))
int32_t x8 = *(x0_7 + 0xc)
XAsset* result

if (x8 == 0)
    if (*x0_7 != 0)
        result = nullptr
    else
        AssetCatalogLoadAsset(x0_7, false, true)
        
        if (*(x0_7 + 0xc) == 4)
            goto label_f711a4
        
        result = nullptr
else if (x8 != 4)
    result = nullptr
else
label_f711a4:
    AssetPathFromName(XString::operator char const*(), zx.q(x19))
    XString::operator char const*()
    XTrace("Creating (necessary) %s")
    DefAssetHeader* x0_12 = AssetUtilNewDefHeader(zx.q(x19))
    XAsset* result_1 = AssetCatalogNewAsset(XString::operator char const*(), zx.q(x19), x0_12)
    result = result_1
    AssetCatalogSave(result_1)
    XString::~XString()

XString::~XString()
return result
