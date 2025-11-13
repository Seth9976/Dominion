// 函数: _Z16ToggleColorblindv
// 地址: 0x9ab35c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetLocalSettings()
*(x0 + 0x30) ^= 1
return SaveLocalSettings() __tailcall
