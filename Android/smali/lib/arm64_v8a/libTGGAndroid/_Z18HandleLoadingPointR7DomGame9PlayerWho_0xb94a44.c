// 函数: _Z18HandleLoadingPointR7DomGame9PlayerWho
// 地址: 0xb94a44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x150c) != 2)
    return 

int32_t x8_1 = *(arg1 + 0x1510)
DomGame& x19_1 = arg1

if (x8_1 == 3)
    if (*(x19_1 + 0x1a24) s>= *(x19_1 + 0x151c) - 1)
        arg1 = ActiveGame()
        
        if (*(x19_1 + 0xd40) s>= 1)
            DomGame& x20_2 = arg1
            int32_t i = 0
            
            do
                arg1 = LogGet(x20_2, zx.q(i))
                int32_t x8_8 = *(arg1 + 0x14)
                i += 1
                *(arg1 + 0xc) = x8_8
                *(arg1 + 0x10) = x8_8
            while (i s< *(x19_1 + 0xd40))
else if (x8_1 == 2)
    int32_t x20_1 = arg2
    arg1 = LogGet(ActiveGame(), zx.q(x20_1))
    
    if (*(x19_1 + 0x1510) == 2 && *(x19_1 + 0x1514) == x20_1
            && *(arg1 + 0x14) s>= *(x19_1 + 0x1518))
        *(x19_1 + 0x150c) = 2
