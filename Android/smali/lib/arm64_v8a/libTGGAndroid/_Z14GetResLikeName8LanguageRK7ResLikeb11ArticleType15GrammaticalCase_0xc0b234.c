// 函数: _Z14GetResLikeName8LanguageRK7ResLikeb11ArticleType15GrammaticalCase
// 地址: 0xc0b234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg4
int32_t x22 = arg1.d
Translation* x0 = GetResLikeTranslation(arg1, arg2)
char* x0_2 = TranslationString(zx.q(x22), x0, arg3 & 1)
return FormatWithArticle(zx.q(x22), TranslationArticle(zx.q(x22), x0, zx.q(x20), zx.q(arg5), 0), 
    zx.q(x20), x0_2, &data_793a18) __tailcall
