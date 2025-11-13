// 函数: _Z17AssetNameFromPathPKc
// 地址: 0xc773c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* entry_x8

if (zx.d(*arg1) != 0)
    if (strstr(arg1, "./") != 0)
    label_c7743c:
        strrchr(arg1, 0x2e)
        XString::XString()
        char var_28
        XString::AppendLength(&var_28, arg1.d)
        XString::XString(entry_x8)
        return XString::~XString()
    
    if (strstr(arg1, ".\") != 0)
        goto label_c7743c
    
    char* s1 = strrchr(arg1, 0x2e)
    int32_t x0_4
    
    if (s1 != 0)
        x0_4 = strcasecmp(s1, ".xpack")
    
    if (s1 != 0 && x0_4 == 0)
        goto label_c7743c
    
    AssetTypeFromPath(arg1)
    
    if (zx.d(*arg1) != 0)
        goto label_c7743c

return XString::XString(entry_x8) __tailcall
