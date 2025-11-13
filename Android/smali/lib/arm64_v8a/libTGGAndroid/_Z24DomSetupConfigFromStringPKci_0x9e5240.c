// 函数: _Z24DomSetupConfigFromStringPKci
// 地址: 0x9e5240
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_19c0[0x1670]
XString::XString(&var_19c0, arg1)

if ((operator==(&var_19c0, "-") & 1) == 0)
    char var_3350[0x320]
    XString::XString(&var_3350, arg1)
    int32_t x0_5 = operator==(&var_3350, " ")
    XString::~XString()
    XString::~XString()
    
    if ((x0_5 & 1) == 0)
        memcpy(&var_3350, DEFAULT_SETUP, 0x1990)
        uint32_t x8_1 = zx.d(*arg1)
        
        if (x8_1 != 0)
            if (x8_1 != 0x2d)
                HandleOptions(&var_3350, arg1)
                ParseSetupKingdom(0x17, &var_3350, arg1)
            else
                DomSetupConfigFromString(arg1, 0x17)
                memcpy(&var_3350, &var_19c0, 0x1990)
        
        int64_t entry_x8
        return memcpy(entry_x8, &var_3350, 0x1990)
else
    XString::~XString()

return ParseSetupString(arg1, arg2)
