// 函数: _Z25DefBinWriteMakeAssetEntryR16DefBinAssetEntryP6XAsseti
// 地址: 0xc856c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefMap* x0_1 = DefMapFromAssetType(zx.q(*(arg2 + 8)))
void* x0_3 = AssetTypeGetInfo(zx.q(*(arg2 + 8)))
AssetNameFromPath(XString::operator char const*())
int64_t* x8_2 = *arg2

if (x8_2 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg2, false, true)
    x8_2 = *arg2

void* x25 = *x8_2
int32_t x0_10 = DefinitionGetSize(x0_1)
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
char var_50 = 1
int32_t* var_48 = &var_6c
DefBinSerializeBlock(x25, x0_1, nullptr, &var_60)
__builtin_memset(arg1, 0, 0xa8)
*arg1 = *(arg2 + 8)
*(arg1 + 4) = *(x0_1 + 0x28)
*(arg1 + 8) = *(x0_3 + 0x28)
*(arg1 + 0xc) = arg3
int32_t x8_4 = var_6c
*(arg1 + 0x10) = x0_10
*(arg1 + 0x14) = x8_4
XString::Length()
strcpy(arg1 + 0x28, XString::operator char const*())
void var_78
XString::XString(&var_78)
AssetSourceGetFullPath(&var_78, zx.q(*(arg2 + 8)))
XString::~XString()
void var_88
XString::XString(&var_88)
AssetSideCarMakeFullPath(&var_88, zx.q(*(arg2 + 8)))
XString::~XString()
XGetFileModifiedTime(XString::operator char const*(), arg1 + 0x18)
XGetFileModifiedTime(XString::operator char const*(), arg1 + 0x20)
XString::~XString()
XString::~XString()
return XString::~XString()
