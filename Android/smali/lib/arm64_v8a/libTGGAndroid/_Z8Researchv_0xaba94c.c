// 函数: _Z8Researchv
// 地址: 0xaba94c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int64_t result = TrashOne(7, 0)

if (result.d != 0)
    result = CostOnlyCoin(result)
    
    if (result.d != 0)
        int32_t i_1 = result.d
        int32_t var_28_1 = 0
        
        if (result.d s>= 1)
            void var_ca8
            int32_t i
            
            do
                result = TopDeckCard()
                
                if (result.d == 0)
                    break
                
                int32_t x20_1 = result.d
                MoveCardToCard(zx.q(x20_1), 0x3eb, zx.q(ThisCard(true, nullptr)), 4, 0, 1)
                result = operator+=(&var_ca8, zx.q(x20_1))
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (var_28_1 != 0)
                FromList(&var_ca8)
                void var_1930
                return StartOfNextTurn(sub_ac1038, nullptr, &var_1930, 1, 2)

return result
