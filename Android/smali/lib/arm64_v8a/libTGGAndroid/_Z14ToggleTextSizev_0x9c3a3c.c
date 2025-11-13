// 函数: _Z14ToggleTextSizev
// 地址: 0x9c3a3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetLocalSettings()
*(x0 + 0x28) = (*(x0 + 0x28) + 1) s% 3
SaveLocalSettings()
return GameSpecific_NotifyTextToggle() __tailcall
