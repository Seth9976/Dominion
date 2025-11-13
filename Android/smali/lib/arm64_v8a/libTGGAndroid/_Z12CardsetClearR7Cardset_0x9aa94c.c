// 函数: _Z12CardsetClearR7Cardset
// 地址: 0x9aa94c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1520)
Cardset& x19 = arg1

if (x8 s>= 1)
    int64_t i = 0
    Cardset& x20_1 = x19
    
    do
        if (*x20_1 != 0)
            int128_t v0
            arg1, v0 = UI2Free(x20_1)
            x8 = *(x19 + 0x1520)
        
        i += 1
        x20_1 += 4
    while (i s< sx.q(x8))

*(x19 + 0x1520) = 0
*(x19 + 0x1528) = *RECT0
