// 函数: _Z14CountCardTypesP11DomCardEnumPi
// 地址: 0xae173c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardID var_cd8
int32_t x0_2 = CardsOwnedScoring(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cd8)
int32_t x21 = 0
int32_t var_58 = x0_2

if (x0_2 != 0)
    CardID* i = &var_cd8
    
    do
        int32_t j = CardWhat(*(DomGetContext() + 8), zx.q(*i))
        uint64_t x25_1
        
        if (x21 s< 1)
            x25_1 = 0
        else
            x25_1 = 0
            uint64_t x8_4 = zx.q(x21)
            
            while (*(arg1 + (x25_1 << 2)) != j)
                x25_1 += 1
                
                if (x8_4 == x25_1)
                    x25_1 = zx.q(x8_4.d)
                    goto label_ae1794
        
        if (x25_1.d == x21)
        label_ae1794:
            GameAssert(true)
            arg2[zx.q(x21)] = 0
            *(arg1 + (sx.q(x21) << 2)) = j
            x21 += 1
        
        i += 4
        arg2[zx.q(x25_1.d)] += 1
    while (i != &var_cd8 + (sx.q(x0_2) << 2))

return zx.q(x21)
