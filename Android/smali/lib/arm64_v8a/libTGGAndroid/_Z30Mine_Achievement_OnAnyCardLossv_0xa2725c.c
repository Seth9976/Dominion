// 函数: _Z30Mine_Achievement_OnAnyCardLossv
// 地址: 0xa2725c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomAchievementDataGet()

if (*(x0 + 0x44) s>= 1)
    int32_t i = 0
    
    do
        if (CountWhereWhat(0x3ea, zx.q(*(x0 + 0x24 + (sx.q(i) << 2))), 0xffffffff) == 0)
            int64_t i_1 = sx.q(i)
            i -= 1
            int64_t x8_3 = sx.q(*(x0 + 0x44)) - 1
            *(x0 + 0x44) = x8_3.d
            *(x0 + 0x24 + (i_1 << 2)) = *(x0 + 0x24 + (x8_3 << 2))
        
        i += 1
    while (i s< *(x0 + 0x44))

return 0
