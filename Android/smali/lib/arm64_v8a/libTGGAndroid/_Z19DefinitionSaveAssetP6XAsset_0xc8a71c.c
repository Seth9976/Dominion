// 函数: _Z19DefinitionSaveAssetP6XAsset
// 地址: 0xc8a71c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_2c
char** var_28
AssetCatalogGetLabelsToElide(&var_28, &var_2c)
int32_t x19_1

if (var_2c == 0)
    void var_40
    XString::XString(&var_40)
    AssetSideCarMakeFullPath(&var_40, zx.q(*(arg1 + 8)))
    XString::~XString()
    void var_38
    
    if ((operator==(&var_38, &data_793a18) & 1) != 0)
        void var_50
        XString::XString(&var_50)
        AssetSourceGetFullPath(&var_50, zx.q(*(arg1 + 8)))
        XString::operator=(&var_38)
        XString::~XString()
        XString::~XString()
    
    void* x8_1 = *arg1
    
    if ((DefXMLWriteFile(*(x8_1 + 8), *(x8_1 + 0x18), XString::operator char const*()) & 1) == 0)
        XString::operator char const*()
        XTrace("Failed to write xml file: '%s'")
        x19_1 = 0
    else
        x19_1 = DefBinWriteXbinFile(arg1)
    
    XString::~XString()
else
    XFormatString("Can't save, current build settings elide data labels.")
    XMsgBox("Can't save", XString::operator char const*())
    XString::~XString()
    x19_1 = 0

return zx.q(x19_1) & 1
