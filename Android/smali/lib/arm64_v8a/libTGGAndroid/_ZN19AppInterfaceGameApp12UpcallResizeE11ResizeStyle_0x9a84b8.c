// 函数: _ZN19AppInterfaceGameApp12UpcallResizeE11ResizeStyle
// 地址: 0x9a84b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 == 0)
    *(GetLocalSettings() + 0x20) = 0
    SaveLocalSettings()
else if (entry_x1 == 2)
    *(GetLocalSettings() + 0x20) = 1
    SaveLocalSettings()

return GameDlgManagerRefreshMainLayout() __tailcall
