// 函数: _Z19CountPlayedThisTurnR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xae3cb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc) s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        int32_t x0_1 = CardWhat(arg1, zx.q(*(arg1 + sx.q(arg2) * 0x5a30 + 0x19b18 + (i << 2))))
        i += 1
        
        if (x0_1 == arg3)
            x20 += 1
    while (i s< sx.q(*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc)))

return zx.q(x20)
