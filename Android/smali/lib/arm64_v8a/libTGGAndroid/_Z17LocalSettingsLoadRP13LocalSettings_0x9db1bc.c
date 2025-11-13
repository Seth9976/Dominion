// 函数: _Z17LocalSettingsLoadRP13LocalSettings
// 地址: 0x9db1bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
XString::XString(&var_38)
HalFilePathCreate(&var_38, 0)
XString::~XString()
void var_30
LocalSettings* x0_3 = DefXMLReadFileIntoDefinitionBlock(*defMapLocalSettings, &var_30)
*arg1 = x0_3

if (x0_3 == 0)
    LocalSettings* x0_5 = DefinitionAllocDefaultBlock(*defMapLocalSettings)
    *arg1 = x0_5
    *(x0_5 + 0x24) = 3

return XString::~XString()
