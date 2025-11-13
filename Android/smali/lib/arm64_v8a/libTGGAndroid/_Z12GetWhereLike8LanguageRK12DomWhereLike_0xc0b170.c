// 函数: _Z12GetWhereLike8LanguageRK12DomWhereLike
// 地址: 0xc0b170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
Translation* x0 = GetWhereLikeTranslation(arg1, arg2)
int32_t x22_1

if (*arg2 == 0)
    int32_t x8_1 = *(arg2 + 4)
    x22_1 = 3
    
    if (x8_1 - 0x45f u< 4 || x8_1 - 0x3ea u< 3)
        if (x19 == 7)
            x22_1 = 3
        else
            x22_1 = 5
    else if (x8_1 == 0x3e9)
        x22_1 = 1
else
    x22_1 = 3

char* x0_2 = TranslationString(zx.q(x19), x0, false)
return FormatWithArticle(zx.q(x19), TranslationArticle(zx.q(x19), x0, zx.q(x22_1), 2, 0), 
    zx.q(x22_1), x0_2, &data_793a18) __tailcall
