// 函数: _Z23Mine_Achievement_OnGainPK6CardIDi
// 地址: 0xa2719c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = DomAchievementDataGet()
void* x0_1 = DomGetContext()
uint64_t x8 = zx.q(x0[4].d)

if (x8.d s>= 1)
    int64_t i = *(*(x0_1 + 0x10) + 0x40)
    int64_t x10_2
    
    if (*x0 != i)
        int64_t x11_1 = 1
        
        do
            x10_2 = x11_1
            
            if (x8 == x11_1)
                break
            
            x11_1 = x10_2 + 1
        while (x0[x10_2] != i)
    
    if (*x0 == i || x10_2 u< x8)
        int32_t x0_3 = CardWhat(zx.q(*arg1))
        
        if (x0_3 == 0x106)
            return 1
        
        int64_t x9_2 = sx.q(*(x0 + 0x44))
        
        if (x9_2.d s<= 7)
            *(x0 + 0x44) = x9_2.d + 1
            *(x0 + (x9_2 << 2) + 0x24) = x0_3

return 0
