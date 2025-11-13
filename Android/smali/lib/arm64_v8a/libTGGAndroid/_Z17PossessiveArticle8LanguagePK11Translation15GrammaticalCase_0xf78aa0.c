// 函数: _Z17PossessiveArticle8LanguagePK11Translation15GrammaticalCase
// 地址: 0xf78aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_5 = zx.q(arg1 - 1)

if (x8_5.d u<= 7)
    switch (x8_5)
        case 0
            return "their"
        case 1
            int32_t x8_2 = *(arg2 + 0x18) - 3
            
            if (arg3 != 1)
                if (x8_2 u>= 3)
                    return &data_772208
            else if (x8_2 u>= 3)
                return &data_7658ba
            
            return (&data_117f818)[sx.q(x8_2)]
        case 2
            int32_t x8 = *(arg2 + 0x18)
            void* const result
            
            if (x8 == 3)
                result = &data_755593
            else
                result = &data_74a4a5
            
            if (x8 == 5)
                return &data_74a4a9
            
            return result
        case 3
            if (*(arg2 + 0x18) == 4)
                return &data_7a714e
            
            return "onze"
        case 7
            uint32_t x8_4 = zx.d(*(arg2 + 0x24))
            
            if (*(arg2 + 0x18) != 2)
                if (x8_4 == 0)
                    return "le loro"
                
                return "la loro"
            
            if (x8_4 == 0)
                return "i loro"
            
            return "il loro"

return &data_793a18
