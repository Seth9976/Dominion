// 函数: _Z25DefBinReadPackFileCatalogPKc
// 地址: 0xc86748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_2
__builtin_memset(&i_2, 0, 0x14)
int32_t x0 = DefBinReadLocationsFromPackFile(arg1, &i_2, *gCompilingMode)
void* i_1

if ((x0 & 1) == 0)
    i_1 = i_2
else
    i_1 = i_2
    
    if (i_1 != 0)
        void* i_4 = i_1
        void* i
        
        do
            i = *(i_4 + 0x28)
            void var_60
            XString::XString(&var_60)
            int32_t x0_3 = AssetCatalogAssetIsLoaded(&var_60)
            XString::~XString()
            
            if ((x0_3 & 1) == 0)
                void var_68
                XString::XString(&var_68)
                int32_t x23_2 = *(i_4 + 8)
                char var_70
                XString::XString(&var_70)
                AssetCatalogNewPackAsset(&var_68, zx.q(x23_2), &var_70, *(i_4 + 0xc), 
                    *(i_4 + 0x10), *(i_4 + 0x14))
                XString::~XString()
                XString::~XString()
            else
                XString::operator char const*()
                XTrace("Asset in pack is already loaded '%s'")
            
            i_4 = i
        while (i != 0)

while (i_1 != 0)
    void* i_3 = i_1
    i_1 = *(i_1 + 0x28)
    XString::~XString()
    XPooledFree(i_3, 0x38)

return zx.q(x0) & 1
