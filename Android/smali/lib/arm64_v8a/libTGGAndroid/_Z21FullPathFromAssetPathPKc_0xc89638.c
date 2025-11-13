// 函数: _Z21FullPathFromAssetPathPKc
// 地址: 0xc89638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
char* entry_x8

if (strchr(arg1, 0x3a) != 0)
    return XString::operator=(entry_x8)

if (strncasecmp(arg1, "sys", 3) == 0)
    AppGetSysPath()
    XFormatString("%s/%s")
    XString::operator=(entry_x8)
else
    int32_t x0_8 = strncasecmp(arg1, "res", 3)
    int32_t x0_10
    
    if (x0_8 != 0)
        x0_10 = strncasecmp(arg1, "xbin", 4)
    
    if (x0_8 == 0 || x0_10 == 0)
        if (zx.d(*AppGetResPath()) == 0)
            return XString::operator=(entry_x8)
        
        XFormatString("%s/%s")
        XString::operator=(entry_x8)
    else
        XTrace("Non standard asset path %s")
        AppGetResPath()
        XFormatString("%s/%s")
        XString::operator=(entry_x8)

return XString::~XString()
