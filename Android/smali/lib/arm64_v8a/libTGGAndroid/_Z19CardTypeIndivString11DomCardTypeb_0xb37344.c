// 函数: _Z19CardTypeIndivString11DomCardTypeb
// 地址: 0xb37344
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(CardTypeDefGet(arg1) + 8)
XFormatString("dom_card_type_%s")
int32_t x0_1 = GetCurrentLanguage()
Translation* x0_3 = LookupTranslationSafe(XString::operator char const*(), zx.q(x0_1))
char* entry_x8

if (x0_3 == 0)
    XString::XString(entry_x8)
else
    char* x0_5 = TranslationString(zx.q(x0_1), x0_3, false)
    int32_t x20_1
    
    if ((arg2.d & 1) != 0)
        x20_1 = 2
    else
        x20_1 = 1
    
    FormatWithArticle(zx.q(x0_1), TranslationArticle(zx.q(x0_1), x0_3, zx.q(x20_1), 2, 0), 
        zx.q(x20_1), x0_5, &data_793a18)
return XString::~XString()
