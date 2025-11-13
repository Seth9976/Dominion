// 函数: _Z37AssetUtilOverwriteAssetFromDefinitionP6XAssetPv
// 地址: 0xc7effc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_28
XString::XString(&var_28)
int32_t x0_2 = AssetPathExists(&var_28)
XString::~XString()

if ((x0_2 & 1) == 0)
    AssetNameFromPath(XString::operator char const*())
    AssetUtilCreateNewAsset(XString::operator char const*(), zx.q(*(arg1 + 8)))
    XString::~XString()

int64_t* x0_7 = AssetUtilGetDefAssetAndMarkDirty(arg1)

if (*x0_7 != 0)
    int64_t x8_1 = *(AssetTypeGetInfo(zx.q(*(arg1 + 8))) + 0x10)
    
    if (x8_1 != 0)
        x8_1(arg1, *x0_7)
    
    if ((zx.d(x0_7[2].b) & 1) == 0)
        DefinitionDeleteBlock(*x0_7, x0_7[3])
    
    *x0_7 = 0

DefParseTree* x0_12 = x0_7[1]

if (x0_12 != 0)
    DefParseTreeDelete(x0_12)
    x0_7[1] = 0

x0_7[1] = DefParseTreeMakeFromDefinition(arg2, x0_7[3])
DefinitionCompileAndLoadAsset(AssetUtilGetDefAssetAndMarkDirty(arg1), arg1)
int64_t* x20_1 = **gpAssetUtilData

if (x20_1 != 0)
    while (*x20_1 != arg1)
        x20_1 = x20_1[1]
        
        if (x20_1 == 0)
            break

*(arg1 + 0x24) -= 1
AssetCatalogSave(arg1)
void* x8_7 = x20_1[2]
int64_t* x9 = *gpAssetUtilData
int64_t* x8_8

if (x8_7 == 0)
    x8_8 = x9
else
    x8_8 = x8_7 + 8

*x8_8 = x20_1[1]
void* x8_9 = x20_1[1]
int64_t* x8_10

if (x8_9 == 0)
    x8_10 = &x9[1]
else
    x8_10 = x8_9 + 0x10

*x8_10 = x20_1[2]
x9[2].d -= 1
return XPooledFree(x20_1, 0x18)
