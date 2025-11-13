// 函数: _Z17GetServerSettingsv
// 地址: 0x9e0f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
XString::XString(&var_38)
HalFilePathCreate(&var_38, 1)
XString::~XString()
uint64_t var_40 = 0
HalFilePath var_30
int32_t x0_3 = HalGetFileModifiedTime(&var_30, &var_40)
void* result = *(gGameSettings + 0x18)
DefMap* x0_5

if ((x0_3 & 1) != 0)
    uint64_t x8_1 = var_40
    
    if (result == 0)
        *(gGameSettings + 0x20) = x8_1
    label_9e1048:
        void* result_1 = DefXMLReadFileIntoDefinitionBlock(*defMapServerSettings, &var_30)
        result = result_1
        *(gGameSettings + 0x18) = result_1
        
        if (result_1 == 0)
            XLog("Failed to load server_status.xml")
            x0_5 = *defMapServerSettings
            goto label_9e1068
    else if (x8_1 != *(gGameSettings + 0x20))
        *(gGameSettings + 0x20) = x8_1
        DefinitionDeleteBlock(result, *defMapServerSettings)
        *(gGameSettings + 0x18) = 0
        goto label_9e1048
else if (result == 0)
    x0_5 = *defMapServerSettings
label_9e1068:
    void* result_2 = DefinitionAllocDefaultBlock(x0_5)
    result = result_2
    *(gGameSettings + 0x18) = result_2
XString::~XString()
return result
