// 函数: _Z35MiningVillage_Achievement_OnAnyGainPK6CardIDi
// 地址: 0xa84bb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg2
int32_t* x0 = DomAchievementDataGet()
int32_t x8_1 = *(*(DomGetContext() + 8) + 0x19ec)

if (x8_1 != *x0)
    *x0 = 0
    *x0 = x8_1

if (i_1 s>= 1)
    int32_t i
    
    do
        if ((CardIs(zx.q(*arg1), 0x30e) & 1) != 0)
            x0[1].b = 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)

if (zx.d(x0[1].b) != 0 && zx.d(*(x0 + 5)) != 0)
    return 1

return 0
