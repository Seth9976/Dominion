// 函数: _Z22PlayerInfoFloatingOpen9PlayerWho
// 地址: 0xb0017c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gPlayerInfoPopup = arg1
int64_t x0_3

if (*(GameGetPlayer(ActiveGame() + 8, zx.q(arg1)) + 0x14) == 3)
    x0_3 = 0x7f4
else
    x0_3 = 0x7f3

return GameDlgManagerShow(x0_3, 5) __tailcall
