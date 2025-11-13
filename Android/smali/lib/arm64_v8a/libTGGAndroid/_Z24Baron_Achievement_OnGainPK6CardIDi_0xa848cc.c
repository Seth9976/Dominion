// 函数: _Z24Baron_Achievement_OnGainPK6CardIDi
// 地址: 0xa848cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomAchievementDataGet()
int32_t x8 = *x0
*x0 = x8 + 1
return zx.q(x8 s> 2 ? 1 : 0)
