// 函数: _Z18TranslationArticle8LanguageP11Translation11ArticleType15GrammaticalCase11ForcePlural
// 地址: 0xf7be74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 5)
    if (arg3 == 3)
        return DefiniteArticle(arg1, arg2, zx.q(arg4), zx.q(arg5)) __tailcall
    
    if (arg3 != 2)
        return &data_793a18
    
    return IndefiniteArticle(arg1, arg2, zx.q(arg4), zx.q(arg5)) __tailcall

uint64_t x8_1 = zx.q(arg1.d - 1)

if (x8_1.d u<= 7)
    switch (x8_1)
        case 0
            return "their"
        case 1
            int32_t x8_5 = *(arg2 + 0x18) - 3
            
            if (arg4 != 1)
                if (x8_5 u>= 3)
                    return &data_772208
            else if (x8_5 u>= 3)
                return &data_7658ba
            
            return (&data_117f818)[sx.q(x8_5)]
        case 2
            int32_t x8_3 = *(arg2 + 0x18)
            void* const x9_2
            
            if (x8_3 == 3)
                x9_2 = &data_755593
            else
                x9_2 = &data_74a4a5
            
            if (x8_3 == 5)
                return &data_74a4a9
            
            return x9_2
        case 3
            if (*(arg2 + 0x18) == 4)
                return &data_7a714e
            
            return "onze"
        case 7
            char const* const x9_4
            char const* const x10_4
            
            if (*(arg2 + 0x18) != 2)
                x9_4 = "la loro"
                x10_4 = "le loro"
            else
                x9_4 = "il loro"
                x10_4 = "i loro"
            
            if (zx.d(*(arg2 + 0x24)) == 0)
                return x10_4
            
            return x9_4

return &data_793a18
