// 函数: _ZN6SoLoud6Soloud22setVisualizationEnableEb
// 地址: 0x106ef60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
int32_t x9

if ((entry_x1 & 1) != 0)
    x9 = 2
else
    x9 = 0

*(arg1 + 0x20b4) = (*(arg1 + 0x20b4) & 0xfffffffd) | x9
