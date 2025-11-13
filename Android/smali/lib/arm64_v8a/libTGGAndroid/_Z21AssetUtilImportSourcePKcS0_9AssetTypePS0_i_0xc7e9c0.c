// 函数: _Z21AssetUtilImportSourcePKcS0_9AssetTypePS0_i
// 地址: 0xc7e9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3
int64_t var_48 = TimerStart()
void* x0_2 = AssetTypeGetInfo(zx.q(x23))
DefMap* x0_4 = DefMapFromAssetType(zx.q(x23))
XAsset* x0_6 = AssetPtrFromPath(arg2, zx.q(x23))
AssetCatalogPurgeAsset(x0_6)
char var_60
XString::XString(&var_60)
AssetSideCarMakeFullPath(&var_60, zx.q(x23))
XString::~XString()
XString::XString()
int32_t x19_1
char var_68
DefAssetHeader* x24_1

if ((XString::IsEmpty() & 1) == 0)
    if ((XFileExists(XString::operator char const*()) & 1) == 0)
        int64_t* x0_23 = DefMapFromAssetType(zx.q(x23))
        char* x0_24 = DefParseTreeAlloc()
        *(x0_24 + 0x20) = x0_23
        *x0_23
        XString::operator=(x0_24)
        DefAssetHeader* x0_25 = XCalloc(0x20)
        x24_1 = x0_25
        *(x0_25 + 0x18) = x0_23
        *(x0_25 + 8) = x0_24
        *x24_1 = DefParseTreeMakeDefinition(x0_24, x0_23)
    label_c7eb58:
        XString::operator=(&var_68)
    label_c7ebb4:
        
        if (*(x0_2 + 0x18) == 0)
        label_c7ec28:
            char var_90
            XString::XString(&var_90)
            AssetCatalogNewSourceAsset(&var_90, zx.q(x23), x24_1)
            XString::~XString()
            int64_t x8_2 = *(x0_2 + 8)
            
            if (x8_2 != 0)
                x8_2(arg2, *x24_1)
            
            if ((DefBinWriteXbinFile(x0_6) & 1) == 0)
                x19_1 = 0
            else
                TimerStop(&var_48)
                XTrace("Imported source asset %s %d ms")
                x19_1 = 1
        else if ((XString::IsEmpty() & 1) == 0)
            if ((XFileExists(XString::operator char const*()) & 1) == 0)
                DefinitionDelete(x24_1)
                
                if (strstr(arg1, "sys\failureasset") == 0)
                    XString::operator char const*()
                    XTrace("reimport failed because file doesn't exist: '%s'")
                
                x19_1 = 0
            else
                int64_t x25_4 = *(x0_2 + 0x18)
                void var_88
                XString::XString(&var_88)
                int32_t x0_40 = x25_4(arg2, x24_1, &var_88)
                XString::~XString()
                
                if ((x0_40 & 1) != 0)
                    goto label_c7ec28
                
                DefinitionDelete(x24_1)
                XTrace("reimport failed: '%s'")
                x19_1 = 0
        else
            DefinitionDelete(x24_1)
            XTrace("reimport failed because no source path: '%s'")
            x19_1 = 0
    else
        DefAssetHeader* x0_20 =
            DefXMLReadFileIntoDefinition(x0_4, XString::operator char const*(), arg4, arg5)
        x24_1 = x0_20
        
        if (x0_20 != 0)
            goto label_c7eb58
        
        XString::operator char const*()
        XTrace("reimport %s failed to read: '%s'")
        x19_1 = 0
else
    int64_t x0_15
    
    if (x23 == 0x18)
        XString::operator=(&var_68)
        int64_t* x0_30 = DefMapFromAssetType(0x18)
        char* x0_31 = DefParseTreeAlloc()
        *(x0_31 + 0x20) = x0_30
        *x0_30
        XString::operator=(x0_31)
        DefAssetHeader* x0_32 = XCalloc(0x20)
        x24_1 = x0_32
        *(x0_32 + 0x18) = x0_30
        *(x0_32 + 8) = x0_31
        x0_15 = DefParseTreeMakeDefinition(x0_31, x0_30)
    label_c7ebac:
        *x24_1 = x0_15
        goto label_c7ebb4
    
    if (x23 == 0x23)
        XString::operator=(&var_68)
        int64_t* x0_11 = DefMapFromAssetType(0x23)
        char* x0_12 = DefParseTreeAlloc()
        *(x0_12 + 0x20) = x0_11
        *x0_11
        XString::operator=(x0_12)
        DefAssetHeader* x0_13 = XCalloc(0x20)
        x24_1 = x0_13
        *(x0_13 + 0x18) = x0_11
        *(x0_13 + 8) = x0_12
        x0_15 = DefParseTreeMakeDefinition(x0_12, x0_11)
        goto label_c7ebac
    
    DefAssetHeader* x0_49 = DefXMLReadFileIntoDefinition(x0_4, arg1, arg4, arg5)
    x24_1 = x0_49
    
    if (x0_49 != 0)
        if (x23 == 0x19 || x23 == 5)
            XString::operator=(&var_68)
        else
            DefParseTreeFindItemString(*(x24_1 + 8), "importSourcePath")
            XString::operator=(&var_68)
            XString::~XString()
            
            if ((XString::IsEmpty() & 1) == 0)
                void var_78
                XString::XString(&var_78)
                AssetSourceLocalPathToAssetPath(&var_78)
                XString::~XString()
                FullPathFromAssetPath(XString::operator char const*())
                XString::operator=(&var_68)
                XString::~XString()
                XString::~XString()
        
        goto label_c7ebb4
    
    if (strstr(arg1, "sys\failureasset") == 0)
        XTrace("reimport %s failed to read: '%s'")
    
    x19_1 = 0
XString::~XString()
XString::~XString()
return zx.q(x19_1)
