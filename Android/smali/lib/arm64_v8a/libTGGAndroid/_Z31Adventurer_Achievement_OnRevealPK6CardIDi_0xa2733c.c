// 函数: _Z31Adventurer_Achievement_OnRevealPK6CardIDi
// 地址: 0xa2733c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = DomAchievementDataGet()
int64_t i = *(*(DomGetContext() + 0x10) + 0x40)

if ((CardIs(zx.q(*arg1), 0x106) & 1) == 0)
    x0[4].d = 0
    return 0

uint64_t x8_1 = zx.q(x0[4].d)

if (x8_1.d s>= 1)
    if (*x0 == i)
        return 1
    
    int64_t x10_1 = 1
    int64_t x9_2
    
    do
        x9_2 = x10_1
        
        if (x8_1 == x10_1)
            break
        
        x10_1 = x9_2 + 1
    while (x0[x9_2] != i)
    
    if (x9_2 u< x8_1)
        return 1

x0[4].d = x8_1.d + 1
x0[sx.q(x8_1.d)] = i
return 0
