// 函数: _Z21AssetRequiresReimportP6XAsset
// 地址: 0xc8a1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (zx.d(*gCompilingMode) == 0)
    x19_1 = 0
else
    DefLoadXbinPathFromAssetPath(XString::operator char const*())
    void* i_1
    __builtin_memset(&i_1, 0, 0x14)
    int32_t var_30
    void* i
    
    if ((DefBinReadLocationsFromPackFile(XString::operator char const*(), &i_1, true) & 1) == 0
            || var_30 != 1)
        x19_1 = 1
        i = i_1
        
        if (i != 0)
        label_c8a35c:
            
            do
                void* i_2 = i
                i = *(i + 0x28)
                XString::~XString()
                XPooledFree(i_2, 0x38)
            while (i != 0)
    else
        void* i_3 = i_1
        void var_50
        XString::XString(&var_50)
        AssetSourceGetFullPath(&var_50, zx.q(*(arg1 + 8)))
        XString::~XString()
        uint64_t var_58
        
        if ((XFileExists(XString::operator char const*()) & 1) == 0)
            x19_1 = 0
        else if ((XGetFileModifiedTime(XString::operator char const*(), &var_58) & 1) == 0
                || var_58 != *(i_3 + 0x18))
            x19_1 = 1
        else
            void var_68
            XString::XString(&var_68)
            AssetSideCarMakeFullPath(&var_68, zx.q(*(arg1 + 8)))
            XString::~XString()
            int32_t x0_12 = XString::IsEmpty()
            uint64_t var_70
            
            if ((x0_12 & 1) == 0)
                var_70 = 0
                XGetFileModifiedTime(XString::operator char const*(), &var_70)
            
            if ((x0_12 & 1) == 0 && var_70 != *(i_3 + 0x20))
                x19_1 = 1
            else if (*(arg1 + 8) != 4)
                x19_1 = 0
            else
                XAsset* x0_15 = XGetFileModifiedTime(XString::operator char const*(), &var_70)
                
                if ((x0_15.d & 1) == 0)
                    x19_1 = 1
                else if ((AssetShaderRequiresReimport(x0_15, var_70) & 1) == 0)
                    x19_1 = 0
                else
                    x19_1 = 1
            
            XString::~XString()
        XString::~XString()
        i = i_1
        
        if (i != 0)
            goto label_c8a35c
    XString::~XString()

return zx.q(x19_1)
