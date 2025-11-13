// 函数: sub_c77cf8
// 地址: 0xc77cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AssetPathFromFullPath(arg1)
XString::operator=(*gpAssetSourceAppData)
XString::~XString()
void var_70
char var_58

if ((XFindFileFirst(arg1, &var_70) & 1) != 0)
    int32_t x0_4
    
    do
        if ((XFindFileIsDirectory(&var_70) & 1) == 0)
            XFindFileGetFileWriteTime(&var_70)
            
            if ((MatchesExclusions(XFindFileGetFileName(&var_70), arg2, arg3) & 1) == 0)
                XString::XString()
                char var_78
                XString::Format(&var_78)
                SourceFilePathToAssetPath(XString::operator char const*())
                
                if ((XString::IsEmpty() & 1) == 0)
                    char* haystack = XString::operator char const*()
                    
                    if (zx.d(*haystack) != 0x21 && strstr(haystack, "/!") == 0
                            && strstr(haystack, "\!") == 0)
                        XString::XString(&var_58)
                        void* x0_20 = AssetPtrFromPathDontCreate(&var_58)
                        XString::~XString()
                        
                        if (x0_20 == 0 || *(x0_20 + 0xc) - 1 u>= 2)
                            int32_t x0_22 = AssetTypeFromPath(XString::operator char const*())
                            
                            if (zx.d(*gIsBuildingAssets) == 0)
                                void var_60
                                XString::XString(&var_60)
                                AssetCatalogNewSourceAsset(&var_60, zx.q(x0_22), nullptr)
                                XString::~XString()
                            else
                                DefinitionLoadFileAsset(
                                    AssetPtrFromPath(XString::operator char const*(), zx.q(x0_22)), 
                                    false)
                
                XString::~XString()
                XString::~XString()
        
        x0_4 = XFindFileNext(&var_70)
    while ((x0_4 & 1) != 0)
    XFindFileClose(&var_70)

XString::operator=(*gpAssetSourceAppData)
XFileSearchData var_88
int32_t result = XFindFileFirst(arg1, &var_88)

if ((result & 1) == 0)
    return result

int32_t x0_31

do
    if ((XFindFileIsDirectory(&var_88) & 1) != 0)
        char* x0_35 = XFindFileGetFileName(&var_88)
        
        if ((MatchesExclusions(x0_35, arg2, arg3) & 1) == 0 && zx.d(*x0_35) != 0x2e)
            XString::XString()
            XString::Format(&var_58)
            sub_c77cf8(XString::operator char const*(), arg2, zx.q(arg3))
            XString::~XString()
    
    x0_31 = XFindFileNext(&var_88)
while ((x0_31 & 1) != 0)
return XFindFileClose(&var_88)
