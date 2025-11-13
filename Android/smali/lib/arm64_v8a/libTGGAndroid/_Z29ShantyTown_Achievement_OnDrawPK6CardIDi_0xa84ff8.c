// 函数: _Z29ShantyTown_Achievement_OnDrawPK6CardIDi
// 地址: 0xa84ff8
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

int32_t x8_3 = x8_2 + arg2
x0[1] = x8_3
return zx.q(x8_3 s> 5 ? 1 : 0)
