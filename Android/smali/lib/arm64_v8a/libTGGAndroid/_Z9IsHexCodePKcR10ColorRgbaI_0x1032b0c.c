// 函数: _Z9IsHexCodePKcR10ColorRgbaI
// 地址: 0x1032b0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (strlen(arg1) != 6)
    x19_1 = 0
else
    char var_18
    XString::XString(&var_18, arg1)
    char var_28
    XString::XString(&var_28, &arg1[2])
    char var_30
    XString::XString(&var_30, &arg1[4])
    int32_t var_34
    int32_t var_38
    
    if (sscanf(XString::operator char const*(), "%x", &var_34) == 0)
        x19_1 = 0
    else
        int32_t var_3c
        
        if (sscanf(XString::operator char const*(), "%x", &var_38) == 0)
            x19_1 = 0
        else if (sscanf(XString::operator char const*(), "%x", &var_3c) == 0)
            x19_1 = 0
        else
            *arg2 = var_34.b
            *(arg2 + 1) = var_38.b
            char x8_3 = var_3c.b
            *(arg2 + 3) = 0xff
            *(arg2 + 2) = x8_3
            x19_1 = 1
    XString::~XString()
    XString::~XString()
    XString::~XString()

return zx.q(x19_1)
