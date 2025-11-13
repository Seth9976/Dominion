// 函数: _Z14DevilsWorkshopv
// 地址: 0xa9600c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CountCardsGainedThisTurn()
int64_t x0_1

if (x0 s< 2)
    if (x0 == 1)
        return GainUpTo(4, 0x476, 0) __tailcall
    
    x0_1 = 0x106
else
    x0_1 = 0xd2b

return GainCard(x0_1, 0x476, 0, 0, 5) __tailcall
