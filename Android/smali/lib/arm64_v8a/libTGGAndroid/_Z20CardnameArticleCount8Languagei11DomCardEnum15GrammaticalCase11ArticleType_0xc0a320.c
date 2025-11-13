// 函数: _Z20CardnameArticleCount8Languagei11DomCardEnum15GrammaticalCase11ArticleType
// 地址: 0xc0a320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = arg5
int32_t x19 = arg1.d
Translation* x0 = CardnameTranslation(arg1, zx.q(arg3))
void* x0_3 = DomDefGet(zx.q(arg3), zx.q(DomCurrentGameVersion()))
char* x0_5 = TranslationString(zx.q(x19), x0, (arg2 != 1 ? 1 : 0).b)
char* x0_7 = TranslationMeasure(zx.q(x19), x0)

if (arg2 s>= 2)
    XStringFromInt(arg2)
    FormatCard(zx.q(x19), XString::operator char const*(), 1, x0_5, x0_7)
    return XString::~XString()

if (x24 == 0)
    int64_t x8_1 = *(x0_3 + 0xc8)
    int32_t x9_7
    bool cond:4_1
    
    if (x19 != 3)
        int32_t x9_8
        
        if ((x8_1 & 0x13000000) == 0)
            x9_8 = 2
        else
            x9_8 = 1
        
        if ((x8_1 & 0x4000000) == 0)
            x9_7 = x9_8
        else
            x9_7 = 3
        
        cond:4_1 = (x8_1 & 0x30080068000400) == 0
    else
        int32_t x9_1
        
        if ((x8_1 & 0x11000000) != 0)
            x9_1 = 3
        else
            x9_1 = 2
        
        int32_t x9_2
        
        if ((x8_1 & 0x2000000) == 0)
            x9_2 = x9_1
        else
            x9_2 = 1
        
        int32_t x9_3
        
        if ((x8_1 & 0x4000000) == 0)
            x9_3 = x9_2
        else
            x9_3 = 3
        
        int32_t x9_4
        
        if ((x8_1 & 0x40000000) == 0)
            x9_4 = x9_3
        else
            x9_4 = 1
        
        int32_t x9_5
        
        if ((x8_1 & 0x400) == 0)
            x9_5 = x9_4
        else
            x9_5 = 2
        
        int32_t x9_6
        
        if ((x8_1 & 0x8000000) == 0)
            x9_6 = x9_5
        else
            x9_6 = 1
        
        if ((x8_1 & 0x80020000000) == 0)
            x9_7 = x9_6
        else
            x9_7 = 3
        
        cond:4_1 = (x8_1 & 0x30000000000000) == 0
    
    x24 = cond:4_1 ? x9_7 : 1

return FormatCard(zx.q(x19), TranslationArticle(zx.q(x19), x0, zx.q(x24), 2, 0), zx.q(x24), x0_5, 
    x0_7) __tailcall
