// 函数: _Z20DefParseReadAssetPtrPP6XAssetP12DefParseItem
// 地址: 0xc8b31c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_28
XString::XString(&var_28)
AssetSourceLocalPathToAssetPath(&var_28)
XString::~XString()
int32_t x19_1

if ((AssetPathIsValid(XString::operator char const*()) & 1) != 0)
    *arg1 = DefAssetPtrFromPath(XString::operator char const*(), zx.q(*(*(arg2 + 0x20) + 0x40)))
    x19_1 = 1
else
    SourceFilePathToAssetPath(XString::operator char const*())
    void var_18
    
    if (*(*(arg2 + 0x20) + 0x40) == 0)
        XString::operator=(&var_18)
    label_c8b3f8:
        XString::~XString()
        *arg1 = DefAssetPtrFromPath(XString::operator char const*(), zx.q(*(*(arg2 + 0x20) + 0x40)))
        x19_1 = 1
    else
        if (AssetTypeFromPath(XString::operator char const*()) == *(*(arg2 + 0x20) + 0x40))
            XString::operator=(&var_18)
            goto label_c8b3f8
        
        if ((AssetNameIsValid(XString::operator char const*()) & 1) != 0)
            AssetPathFromName(XString::operator char const*(), zx.q(*(*(arg2 + 0x20) + 0x40)))
            XString::operator=(&var_18)
            XString::~XString()
            goto label_c8b3f8
        
        XString::~XString()
        x19_1 = 0

XString::~XString()
return zx.q(x19_1)
