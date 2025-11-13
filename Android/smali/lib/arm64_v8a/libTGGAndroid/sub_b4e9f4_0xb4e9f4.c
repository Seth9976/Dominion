// 函数: sub_b4e9f4
// 地址: 0xb4e9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_18
int32_t var_14
int64_t x1_1

if ((IsWinner(ActiveGame(), zx.q(LocalWho()), &var_14, &var_18) & 1) == 0)
    x1_1 = 5
else
    x1_1 = 4

DomSoundGameMessage(0xffffffff, x1_1)
GameDlgManagerShow(0x7f8, 5)
Now()
return XTrace("start start %d")
