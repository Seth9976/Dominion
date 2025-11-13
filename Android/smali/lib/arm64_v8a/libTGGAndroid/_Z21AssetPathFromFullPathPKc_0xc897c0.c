// 函数: _Z21AssetPathFromFullPathPKc
// 地址: 0xc897c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_30
XString::XString(&var_30)
AssetPathNormalize(&var_30)
XString::~XString()
AppGetResPath()
char var_40
XString::XString(&var_40)
AssetPathNormalize(&var_40)
XString::~XString()
XString* entry_x8

if (strncasecmp(XString::operator char const*(), XString::operator char const*(), 
        sx.q(XString::Length())) == 0)
    void* x8 = XString::operator char const*() + sx.q(XString::Length())
    char* x9_1 = x8
    void* x20_3
    
    if (zx.d(*x9_1) == 0x2f)
        x20_3 = &x9_1[1]
    else
        x20_3 = x8
    
    int32_t x0_22 = strncmp(x20_3, "res/", 4)
    int32_t x0_24
    
    if (x0_22 != 0)
        x0_24 = strncmp(x20_3, "xbin/", 5)
    
    if (x0_22 == 0 || x0_24 == 0)
        XString::XString(entry_x8)
    else
        XString::XString(entry_x8)
else
    AppGetSysPath()
    char var_50
    XString::XString(&var_50)
    AssetPathNormalize(&var_50)
    XString::~XString()
    
    if (strncasecmp(XString::operator char const*(), XString::operator char const*(), 
            sx.q(XString::Length())) == 0)
        void* x8_1 = XString::operator char const*() + sx.q(XString::Length())
        char* x9_3 = x8_1
        void* x20_5
        
        if (zx.d(*x9_3) == 0x2f)
            x20_5 = &x9_3[1]
        else
            x20_5 = x8_1
        
        if (strncmp(x20_5, "sys/", 4) == 0)
            XString::XString(entry_x8)
        else
            XString::XString(entry_x8)
    else
        XString::XString(entry_x8)
    
    XString::~XString()
XString::~XString()
return XString::~XString()
