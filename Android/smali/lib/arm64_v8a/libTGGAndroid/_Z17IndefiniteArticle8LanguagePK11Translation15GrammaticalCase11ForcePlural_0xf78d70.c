// 函数: _Z17IndefiniteArticle8LanguagePK11Translation15GrammaticalCase11ForcePlural
// 地址: 0xf78d70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1 - 2)

if (x8.d u<= 0x11)
    switch (x8)
        case 0
            int32_t x8_1 = *(arg2 + 0x18)
            
            if (arg3 != 1)
                if (x8_1 - 3 u>= 3)
                    return "einen"
                
                return (&data_117f800)[sx.q(x8_1 - 3)]
            
            void* const result
            
            if (x8_1 == 3)
                result = "eine"
            else
                result = &data_739dca
            
            if (x8_1 == 5)
                return &data_793a18
            
            return result
        case 1
            int32_t x8_3 = *(arg2 + 0x18) - 3
            
            if (x8_3 u>= 3)
                return &data_7a335c
            
            return (&data_117f7e8)[sx.q(x8_3)]
        case 2
            return &data_769e33
        case 5
            int32_t x8_7 = *(arg2 + 0x18)
            
            if (arg4 == 0)
                if (x8_7 == 2)
                    return &data_77d292
                
                return &data_75d4ca
            
            if (x8_7 == 2)
                return &data_74dd24
            
            return "umas"
        case 6
            if (*(arg2 + 0x18) == 2)
                return &data_7a335c
            
            return &data_7256ee
        case 0xa, 0xb, 0xe, 0xf, 0x10, 0x11
            return &data_793a18
        case 0xd
            return &data_79739b

uint64_t x8_5 = zx.q(zx.d(*XString::operator char const*()) - 0x41)

if (x8_5.d u<= 0x34 && (1 << x8_5 & 0x10411100104111) != 0)
    return &data_7211d1

return &data_774cd1
