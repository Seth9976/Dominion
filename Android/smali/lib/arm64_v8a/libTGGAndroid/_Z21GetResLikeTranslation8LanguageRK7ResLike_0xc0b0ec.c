// 函数: _Z21GetResLikeTranslation8LanguageRK7ResLike
// 地址: 0xc0b0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2

if (x8 == 0)
    int32_t x8_2 = *(arg2 + 4)
    
    if (x8_2 == 2)
        return GetLocTranslation(arg1, 0x94) __tailcall
    
    if (x8_2 == 1)
        return GetLocTranslation(arg1, 0x93) __tailcall
else
    if (x8 == 1)
        uint64_t x1_2 = zx.q(*(arg2 + 4))
        
        if (x1_2.d != 0x1000)
            return GetTokenTranslation(arg1, x1_2) __tailcall
        
        return GetLocTranslation(arg1, 0x95) __tailcall
    
    if (x8 == 3)
        return GetLocTranslation(arg1, 0x92) __tailcall

pthread_kill(pthread_self(), 6)
int64_t x0_6
DomWhereLike* x1_6
x0_6, x1_6 = XNoReturn()
return GetWhereLike(x0_6, x1_6) __tailcall
