// 函数: _Z15Tower_OnScoringv
// 地址: 0xa6e63c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_a8[0x1a]
int32_t x0_1 = EmptySupplyPiles(&var_a8)
CardsOwnedScoring()
int32_t var_b0
int64_t x8 = sx.q(var_b0)
int32_t x19_1

if (x8.d == 0)
    x19_1 = 0
else
    void var_d30
    
    if (x0_1 s<= 0)
        void* x20_2 = &var_d30
        int64_t i_2 = x8 << 2
        int64_t i
        
        do
            int32_t x19_2 = *x20_2
            
            if ((CardIs(zx.q(x19_2), 8) & 1) == 0)
                BoardPileSource(zx.q(x19_2))
            
            i = i_2
            i_2 -= 4
            x20_2 += 4
        while (i != 4)
        x19_1 = 0
    else
        x19_1 = 0
        uint64_t x22_1 = zx.q(x0_1)
        void* i_1 = &var_d30
        
        do
            int32_t x20_1 = *i_1
            
            if ((CardIs(zx.q(x20_1), 8) & 1) == 0)
                int32_t j = BoardPileSource(zx.q(x20_1))
                int32_t x8_1
                
                if (var_a8[0] == j)
                    x8_1 = 1
                else
                    int64_t x9_1 = 1
                    int64_t x8_3
                    
                    do
                        x8_3 = x9_1
                        
                        if (x22_1 == x9_1)
                            break
                        
                        x9_1 = x8_3 + 1
                    while (var_a8[x8_3] != j)
                    
                    x8_1 = x8_3 u< x22_1 ? 1 : 0
                
                x19_1 += x8_1
            
            i_1 += 4
        while (i_1 != &var_d30 + (x8 << 2))

return zx.q(x19_1)
