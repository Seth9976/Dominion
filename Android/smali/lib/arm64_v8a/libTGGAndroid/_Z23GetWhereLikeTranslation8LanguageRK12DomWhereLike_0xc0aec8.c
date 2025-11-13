// 函数: _Z23GetWhereLikeTranslation8LanguageRK12DomWhereLike
// 地址: 0xc0aec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
uint64_t x1_1

if (x8 == 0)
    int32_t x8_3 = *(arg2 + 4)
    x1_1 = 0x97
    
    if (x8_3 s<= 0x45e)
        if (x8_3 == 0x3e9)
            return GetLocTranslation(arg1, 0x9b) __tailcall
        
        if (x8_3 == 0x3ea)
            return GetLocTranslation(arg1, 0x96) __tailcall
        
        if (x8_3 == 0x3ec)
            return GetLocTranslation(arg1, 0x98) __tailcall
    else
        uint64_t x8_4 = zx.q(x8_3 - 0x45f)
        
        if (x8_4.d u<= 3)
            switch (x8_4)
                case 0
                    return GetLocTranslation(arg1, 0xa1) __tailcall
                case 1
                    return GetLocTranslation(arg1, 0xa0) __tailcall
                case 2
                    return GetLocTranslation(arg1, 0xa2) __tailcall
                case 3
                    return GetLocTranslation(arg1, 0xa3) __tailcall
else
    if (x8 != 1)
        if (x8 == 2 && *(arg2 + 4) == 0x401)
            return GetLocTranslation(arg1, 0x9f) __tailcall
        
        pthread_kill(pthread_self(), 6)
        void* x0_11
        int64_t x1_11
        x0_11, x1_11 = XNoReturn()
        return GetTokenTranslation(x0_11, x1_11) __tailcall
    
    int64_t x8_6 = sx.q(*(arg2 + 4))
    
    if (x8_6.d u>= 4)
        return GetLocTranslation(arg1, 0x97) __tailcall
    
    x1_1 = zx.q(*(&data_71b680 + (x8_6 << 2)))

return GetLocTranslation(arg1, x1_1) __tailcall
