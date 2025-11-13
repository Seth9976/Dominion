// 函数: _Z17LocalSettingsFreeRP13LocalSettings
// 地址: 0x9db240
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LocalSettings* result = *arg1

if (result != 0)
    result = DefinitionDeleteBlock(result, *defMapLocalSettings)
    *arg1 = nullptr

return result
