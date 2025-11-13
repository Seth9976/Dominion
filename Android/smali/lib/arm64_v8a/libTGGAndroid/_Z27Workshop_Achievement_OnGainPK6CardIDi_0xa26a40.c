// 函数: _Z27Workshop_Achievement_OnGainPK6CardIDi
// 地址: 0xa26a40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomAchievementDataGet()
int32_t i = CardWhat(zx.q(*arg1))
uint64_t x9 = zx.q(x0[4])
int64_t x8_1 = sx.q(x9.d)

if (x9.d s>= 1)
    if (*x0 == i)
        return 0
    
    int64_t x11_1 = 1
    int64_t x10_2
    
    do
        x10_2 = x11_1
        
        if (x9 == x11_1)
            break
        
        x11_1 = x10_2 + 1
    while (x0[x10_2] != i)
    
    if (x10_2 u< x9)
        return 0
    
    if (x9.d s> 3)
        x0[4] = x8_1.d + 1
        return zx.q(x8_1.d == 4 ? 1 : 0)

x0[4] = x8_1.d + 1
x0[x8_1] = i
return zx.q(x0[4] == 5 ? 1 : 0)
