// 函数: _Z26AssetCatalogNewMemoryAsset9AssetTypeP14DefAssetHeader
// 地址: 0xc76e60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
uint64_t x8 = *gpAssetAppData
*(x8 + 0x28) += 1
XFormatString("!Mem\%d")
AssetPathFromName(XString::operator char const*(), zx.q(x20))
DefAssetHeader** result = AssetPtrFromPath(XString::operator char const*(), zx.q(x20))
*result = arg2
*(result + 0xc) = 3
XString::operator=(&result[2])
XString::~XString()
XString::~XString()
return result
