// 函数: _Z31Conspirator_Achievement_OnBonusPK6CardIDi
// 地址: 0xa84914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomAchievementDataGet()
int32_t x9 = *(*(DomGetContext() + 8) + 0x19ec)
int32_t x8_2

if (x9 != *x0)
    x8_2 = 0
    *x0 = 0
    *x0 = x9
else
    x8_2 = x0[1]

x0[1] = x8_2 + 1
return zx.q(x8_2 s> 1 ? 1 : 0)
