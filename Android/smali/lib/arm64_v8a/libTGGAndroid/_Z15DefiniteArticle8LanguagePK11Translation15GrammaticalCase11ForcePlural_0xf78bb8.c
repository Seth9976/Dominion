// 函数: _Z15DefiniteArticle8LanguagePK11Translation15GrammaticalCase11ForcePlural
// 地址: 0xf78bb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1 - 1)
void* x9_1
void* x10_2
bool cond:2_1

if (x8.d u<= 0xe)
    switch (x8)
        case 0
            return &data_74a4a1
        case 1
            int32_t x8_2 = *(arg2 + 0x18) - 3
            
            if (arg3 != 1)
                if (x8_2 u>= 3)
                    return &data_772208
            else if (x8_2 u>= 3)
                return &data_7658ba
            
            return (&data_117f818)[sx.q(x8_2)]
        case 2
            int32_t x8_4 = *(arg2 + 0x18) - 3
            
            if (x8_4 u>= 3)
                return &data_74dd28
            
            return (&data_117f7d0)[sx.q(x8_4)]
        case 3
            x9_1 = &data_76ed10
            x10_2 = &data_781b22
            cond:2_1 = *(arg2 + 0x18) == 4
        label_f78d34:
            
            if (cond:2_1)
                return x10_2
            
            return x9_1
        case 6
            int32_t x8_6
            
            if (arg4 == 2)
                x8_6 = *(arg2 + 0x18)
                
                if (zx.d(*(arg2 + 0x24)) != 0)
                    x9_1 = &data_7658b4
                    x10_2 = &data_779687
                else
                    x9_1 = &data_774cd1
                    x10_2 = &data_772206
            else if (arg4 == 1)
                x8_6 = *(arg2 + 0x18)
                x9_1 = &data_7658b4
                x10_2 = &data_779687
            else
                if (arg4 != 0)
                    pthread_kill(pthread_self(), 6)
                    void* x0_13
                    Translation* x1
                    int64_t x2
                    int64_t x3
                    x0_13, x1, x2, x3 = XNoReturn()
                    return IndefiniteArticle(x0_13, x1, x2, x3) __tailcall
                
                x8_6 = *(arg2 + 0x18)
                x9_1 = &data_774cd1
                x10_2 = &data_772206
            
            cond:2_1 = x8_6 == 2
            goto label_f78d34
        case 7
            return &data_74a49e
        case 0xe
            uint64_t x8_8 = zx.q(zx.d(*XString::operator char const*()) - 0x41)
            
            if (x8_8.d u<= 0x34 && (1 << x8_8 & 0x10411100104111) != 0)
                return &data_7658b7
            
            return &data_774cd1
return &data_793a18
