// 函数: _Z23DefinitionLoadFileAssetP6XAssetb
// 地址: 0xc8a44c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = operator==(arg1 + 0x28, &data_793a18)

if ((result.d & 1) == 0)
    result = AssetRequiresReimport(arg1)
    
    if ((result.d & 1) != 0 || (arg2.d & 1) != 0)
    label_c8a4a0:
        
        if (zx.d(*gCompilingMode) != 0)
            void var_30
            XString::XString(&var_30)
            AssetSourceGetFullPath(&var_30, zx.q(*(arg1 + 8)))
            XString::~XString()
            void var_40
            XString::XString(&var_40)
            uint64_t x0_6 = XString::operator char const*()
            
            if (strrchr(XString::operator char const*(), 0x2f) == 0)
                strrchr(XString::operator char const*(), 0x5c)
            
            char var_38
            XString::XString(&var_38, x0_6)
            XString::~XString()
            void var_48
            XString::XString(&var_48)
            AssetSourceSetCurrentPath(&var_48)
            XString::~XString()
            int32_t var_54
            char** var_50
            AssetCatalogGetLabelsToElide(&var_50, &var_54)
            AssetUtilImportSource(XString::operator char const*(), XString::operator char const*(), 
                zx.q(*(arg1 + 8)), var_50, var_54)
            char var_60
            XString::XString(&var_60)
            AssetSourceSetCurrentPath(&var_60)
            XString::~XString()
            XString::~XString()
            return XString::~XString()
    else
        result = DefinitionLoadPackAsset(arg1)
        
        if ((result.d & 1) == 0)
            goto label_c8a4a0

return result
