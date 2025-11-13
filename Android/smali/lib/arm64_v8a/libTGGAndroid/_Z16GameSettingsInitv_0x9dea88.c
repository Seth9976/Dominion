// 函数: _Z16GameSettingsInitv
// 地址: 0x9dea88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
XString::XString(&var_38)
HalFilePathCreate(&var_38, 0)
XString::~XString()
void var_30
int64_t x0_3 = DefXMLReadFileIntoDefinitionBlock(*defMapLocalSettings, &var_30)
*gGameSettings = x0_3

if (x0_3 == 0)
    void* x0_5 = DefinitionAllocDefaultBlock(*defMapLocalSettings)
    *gGameSettings = x0_5
    *(x0_5 + 0x24) = 3

XString::~XString()
XString::XString(&var_38)
HalFilePathCreate(&var_38, 1)
XString::~XString()
int64_t x0_9 = DefXMLReadFileIntoDefinitionBlock(*defMapChannelSettings, &var_30)
*(gGameSettings + 8) = x0_9

if (x0_9 == 0)
    *(gGameSettings + 8) = DefinitionAllocDefaultBlock(*defMapChannelSettings)

XString::~XString()
return GameProfilesLoad(gGameSettings + 0x10)
