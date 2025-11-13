// 函数: _Z19ChannelSettingsLoadRP15ChannelSettings
// 地址: 0x9db26c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
XString::XString(&var_38)
HalFilePathCreate(&var_38, 1)
XString::~XString()
void var_30
ChannelSettings* x0_3 = DefXMLReadFileIntoDefinitionBlock(*defMapChannelSettings, &var_30)
*arg1 = x0_3

if (x0_3 == 0)
    *arg1 = DefinitionAllocDefaultBlock(*defMapChannelSettings)

return XString::~XString()
