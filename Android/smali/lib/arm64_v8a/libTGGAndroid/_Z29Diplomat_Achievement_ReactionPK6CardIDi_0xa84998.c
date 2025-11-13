// 函数: _Z29Diplomat_Achievement_ReactionPK6CardIDi
// 地址: 0xa84998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = DomAchievementDataGet()
int64_t x9 = *(DomGetContext() + 0x68)
int32_t x8_1

if (x9 != *x0)
    x8_1 = 0
    *x0 = x9
    x0[1] = 0
else
    x8_1 = x0[1].d

x0[1].d = x8_1 + 1
return zx.q(x8_1 s> 0 ? 1 : 0)
