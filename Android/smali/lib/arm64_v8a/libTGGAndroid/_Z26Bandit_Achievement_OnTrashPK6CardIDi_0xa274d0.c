// 函数: _Z26Bandit_Achievement_OnTrashPK6CardIDi
// 地址: 0xa274d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID const* x19 = arg1
int32_t* x0 = DomAchievementDataGet()
int32_t x22

if (arg2 s< 1)
    x22 = 0
else
    x22 = 0
    uint64_t i_1 = zx.q(arg2)
    uint64_t i
    
    do
        if ((CardIs(zx.q(*x19), 0x106) & 1) != 0)
            int32_t x8_2 = *x0 + 1
            *x0 = x8_2
            x22 |= x8_2 == 3 ? 1 : 0
        
        i = i_1
        i_1 -= 1
        x19 += 4
    while (i != 1)

return zx.q(x22) & 1
