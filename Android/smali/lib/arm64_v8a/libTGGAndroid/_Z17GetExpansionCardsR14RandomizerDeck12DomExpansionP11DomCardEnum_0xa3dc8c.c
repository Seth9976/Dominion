// 函数: _Z17GetExpansionCardsR14RandomizerDeck12DomExpansionP11DomCardEnum
// 地址: 0xa3dc8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22

if (*(arg1 + 0xc80) s< 1)
    x22 = 0
else
    int64_t i = 0
    x22 = 0
    
    do
        int32_t x23_1 = *(arg1 + (i << 2))
        int32_t var_34
        
        if ((IsLandscape(zx.q(x23_1)) & 1) == 0 && DomCardExp(zx.q(x23_1), &var_34) == arg2)
            *(arg3 + (sx.q(x22) << 2)) = x23_1
            x22 += 1
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xc80)))

return zx.q(x22)
