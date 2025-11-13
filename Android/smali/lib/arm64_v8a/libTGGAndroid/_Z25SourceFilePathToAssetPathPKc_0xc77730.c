// 函数: _Z25SourceFilePathToAssetPathPKc
// 地址: 0xc77730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s2 = strchr(arg1, 0x2e)
char* x0_1 = strrchr(arg1, 0x2e)
char* entry_x8

if (x0_1 == 0)
    return XString::XString(entry_x8) __tailcall

char var_48
XString::XString(&var_48, arg1)
AssetPathFromFullPath(XString::operator char const*())
int32_t var_68
char** var_58

if (strcasecmp(x0_1, ".xml") == 0)
    int32_t x0_20 = AssetTypeFromPath(XString::operator char const*())
    
    if (x0_20 == 0)
        XString::XString(entry_x8)
    else
        int32_t var_5c
        AssetTypeGetExtentions(zx.q(x0_20), &var_58, &var_5c)
        
        if (var_5c == 0)
            XString::XString(entry_x8)
        else
            char* x0_23 = SymbolMapLookupName(gAssetTypeSymbolMap, x0_20)
            
            if (var_5c s< 1)
            label_c7795c:
                XString::XString(entry_x8)
            else
                int64_t x22_1 = 0
                strlen(x0_23)
                
                while (true)
                    XString::XString()
                    XString::AppendLength(&var_68, arg1.d)
                    var_58[x22_1]
                    XString::operator+=(&var_68)
                    FullPathFromAssetPath(XString::operator char const*())
                    
                    if ((XFileExists(XString::operator char const*()) & 1) != 0)
                        XString::XString(entry_x8)
                        XString::~XString()
                        XString::~XString()
                        break
                    
                    XString::~XString()
                    XString::~XString()
                    x22_1 += 1
                    
                    if (x22_1 s>= sx.q(var_5c))
                        goto label_c7795c
else
    int32_t x20_1 = 0
    
    while (true)
        AssetTypeGetExtentions(zx.q(x20_1), &var_58, &var_68)
        uint64_t x24_1 = zx.q(var_68)
        
        if (x24_1.d s>= 1)
            char** x25_1 = var_58
            
            while (true)
                char* s1 = *x25_1
                
                if (strcasecmp(s1, s2) != 0 && strcasecmp(s1, x0_1) != 0)
                    uint64_t temp0_1 = x24_1
                    x24_1 -= 1
                    x25_1 = &x25_1[1]
                    
                    if (temp0_1 == 1)
                        goto label_c777ac
                    
                    continue
                
                SymbolMapLookupName(gAssetTypeSymbolMap, x20_1)
                char var_50
                XString::Append(&var_50)
                XString::Append(&var_50)
                XString::XString(entry_x8)
                break
            
            break
        
    label_c777ac:
        x20_1 += 1
        
        if (x20_1 == 0x26)
            XString::XString(entry_x8)
            break
XString::~XString()
return XString::~XString()
