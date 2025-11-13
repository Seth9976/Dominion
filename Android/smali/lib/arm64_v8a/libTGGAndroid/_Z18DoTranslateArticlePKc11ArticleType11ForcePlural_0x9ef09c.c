// 函数: _Z18DoTranslateArticlePKc11ArticleType11ForcePlural
// 地址: 0x9ef09c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
Translation* x0_2 = LookupTranslationSafe(arg1, zx.q(GetCurrentLanguage()))
XString* entry_x8
Translation* x22

if (x0_2 == 0)
    x22 = LookupTranslationSafe(arg1, 1)
    XString::XString()
    
    if (x22 != 0)
        goto label_9ef0fc
    
    XFormatString("*%s*")
else
    x22 = x0_2
    XString::XString()
label_9ef0fc:
    int32_t x0_7 = GetCurrentLanguage()
    XString::operator=(entry_x8)
    char* result = TranslationArticle(zx.q(x0_7), x22, zx.q(x20), 2, zx.q(arg3))
    
    if (result == 0 || zx.d(*result) == 0)
        return result
    
    FormatWithArticle(zx.q(x0_7), result, zx.q(x20), XString::operator char const*(), &data_793a18)
XString::operator=(entry_x8)
return XString::~XString()
