// 函数: _Z10Coven_Hintv
// 地址: 0xa8ae78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((InSupplyTops(0x100, 4) & 1) != 0)
    return 0

if (NumPlayers() s>= 1)
    int32_t x19_1 = 0
    int32_t x0_3
    
    do
        if (x19_1 != CurrentWho() && CountWhoWhereWhat(zx.q(x19_1), 0x462, 0x100) != 0)
            return 0
        
        x19_1 += 1
        x0_3 = NumPlayers()
    while (x19_1 s< x0_3)

return 1
