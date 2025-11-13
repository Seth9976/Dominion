// 函数: _Z26Remodel_Achievement_OnGainPK6CardIDi
// 地址: 0xa26d04
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
        return CardIs(zx.q(*arg1), 0x103) __tailcall

return 0
