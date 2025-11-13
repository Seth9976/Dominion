// 函数: _Z16AssetCreateOrGetRK7XString9AssetType
// 地址: 0xf70dd4
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
XAsset* result_1 = AssetPtrFromPath(XString::operator char const*(), zx.q(x19))
int32_t x8 = *(result_1 + 0xc)
XAsset* result = result_1

if (x8 == 0)
    if (*result != 0)
        AssetCatalogMakeWritable(result)
    else
        AssetCatalogLoadAsset(result, false, true)
        
        if (*(result + 0xc) == 4)
            result = AssetUtilCreateNewAsset(XString::operator char const*(), zx.q(x19))
        else
            AssetCatalogMakeWritable(result)
else if (x8 != 4)
    AssetCatalogMakeWritable(result)
else
    result = AssetUtilCreateNewAsset(XString::operator char const*(), zx.q(x19))

if (*(result + 0xc) == 4)
    result = AssetUtilCreateNewAsset(XString::operator char const*(), zx.q(x19))

XString::~XString()
return result
