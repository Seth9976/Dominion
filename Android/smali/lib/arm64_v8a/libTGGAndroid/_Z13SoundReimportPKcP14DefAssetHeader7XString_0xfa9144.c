// 函数: _Z13SoundReimportPKcP14DefAssetHeader7XString
// 地址: 0xfa9144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_2 = strrchr(XString::operator char const*(), 0x2e)
int32_t* x0_4

if (x0_2 != 0)
    x0_4 = SymbolMapLookupValue(gpSoundStorageFormatSymbolMap, x0_2 + 1)

int32_t x25

if (x0_2 == 0 || x0_4 == 0)
    x25 = 0
else
    x25 = *x0_4
    
    if (x25 == 4)
        int64_t* x0_8 = DefXMLReadFileIntoDefinition(*(arg2 + 0x18), 
            XString::operator char const*(), nullptr, 0)
        
        if (x0_8 == 0)
            XString::operator char const*()
            XTrace("failed to read xmlsound %s")
        else
            DefinitionDeleteBlock(*arg2, *(arg2 + 0x18))
            DefParseTreeDelete(*(arg2 + 8))
            *(arg2 + 8) = x0_8[1]
            *arg2 = *x0_8
            XFree(x0_8)
        
        return zx.q(x0_8 != 0 ? 1 : 0)

DefSoundImportData* x0_12 = XMalloc(0x20)
DefinitionFillBlockWithDefaults(x0_12, *macro_ptr_DefSoundImportData)
DefSoundImportSpec* x0_14 = DefParseTreeMakeDefinition(*(arg2 + 8), *macro_ptr_DefSoundImportSpec)
int32_t x21_1

if (zx.d(*gIsBuildingEmscriptenAssets) == 0)
    if (x25 == 2)
        void var_58
        XString::XString(&var_58)
        x21_1 = ReadOgg(&var_58, x0_12, x0_14)
        goto label_fa925c
    
    if (x25 == 3)
        void var_50
        XString::XString(&var_50)
        x21_1 = ReadWav(&var_50, x0_12, x0_14)
        goto label_fa925c
    
    XString::operator char const*()
    XTrace("unknown sound file type %s")
    DefinitionDeleteBlock(x0_14, *macro_ptr_DefSoundImportSpec)
else
    XString var_48
    x21_1 = SoundImportToMP3(arg1, &var_48, x0_12, XString::XString(&var_48))
label_fa925c:
    XString::~XString()
    DefinitionDeleteBlock(x0_14, *macro_ptr_DefSoundImportSpec)
    
    if ((x21_1 & 1) != 0)
        *(*arg2 + 0x38) = x0_12
        return 1
XFree(x0_12)
return 0
