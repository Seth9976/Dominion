// 函数: _Z31GameDlgManagerRefreshMainLayoutv
// 地址: 0x9cb8e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gGameDlgManager + 0x2c) != 0x27)
    return 

uint64_t x0 = zx.q(*(gGameDlgManager + 0x30))

if (x0.d != 0)
    return UI2ForceRefreshSubtree(UI2GetHandle(x0, "tbl_center_holder")) __tailcall
