// 函数: _Z18ServerSettingsFreev
// 地址: 0x9dec30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *(gGameSettings + 0x18)

if (result != 0)
    result = DefinitionDeleteBlock(result, *defMapServerSettings)
    *(gGameSettings + 0x18) = 0

return result
