// 函数: _Z11IBLReimportPKcP14DefAssetHeader7XString
// 地址: 0xf738f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = XMalloc(0x40)
*arg2 = x0
DefinitionFillBlockWithDefaults(x0, *macro_ptr_IBLDef)
strlen(arg1)
char var_28
XString::XString(&var_28, arg1)
char var_40
XString::XString(&var_40)
XString::operator+(&var_28)
XString::~XString()
DefAssetHeader* x0_6 = AssetUtilNewDefHeader(3)
char* x0_7 = XString::operator char const*()
void var_48
XString::XString(&var_48)
int32_t x0_10 = TextureReimport(x0_7, x0_6, &var_48)
XString::~XString()

if ((x0_10 & 1) != 0)
    XAsset* x0_12 = AssetCatalogNewAsset(XString::operator char const*(), 3, x0_6)
    XAsset* x21_2 = x0_12
    
    if ((TextureIsCubemap(x0_12) & 1) == 0)
        x21_2 = HDREquiToCube(x0, XString::operator char const*(), x21_2)
    
    if ((TextureHasMips(x21_2) & 1) == 0)
        TextureCreateMipmaps(x21_2)
    
    *(x0 + 0x28) = 0
    *(x0 + 0x30) = HDRCubeToIrradiance(x0, XString::operator char const*(), x21_2)
    *(x0 + 0x38) = HDRCubeToPrefilter(x0, XString::operator char const*(), x21_2)

XString::~XString()
XString::~XString()
return zx.q(x0_10) & 1
