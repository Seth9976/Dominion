// 函数: _Z12GetNResLikes8LanguageRK7ResLikei19LogReplacementFlags15GrammaticalCase
// 地址: 0xc0b4e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t x22 = arg5
int32_t x21 = arg4
XString::XString()
int32_t x8 = *arg2
char const* const x0_2

if (x8 != 0)
    if (x8 == 2)
        goto label_c0b608
    
    if (x8 != 1)
        goto label_c0b570
    
    int32_t x9_1 = *(arg2 + 4)
    
    if (x9_1 == 0x601)
        x0_2 = "%d{vp}"
        goto label_c0b6e8
    
    if (x9_1 != 0xc00)
        goto label_c0b570
    
    GetDebtStr(arg3)
    goto label_c0b6f4

int32_t x9_2 = *(arg2 + 4)
int64_t x1_5
XString* entry_x8
int32_t var_58
int64_t result

if (x9_2 == 0)
label_c0b608:
    CardCostParse(zx.q(arg3))
    GetCoinStr(var_58)
    int32_t var_54
    char var_60
    
    if (var_54 s>= 1)
        XString::operator+=(&var_60)
    XString::operator=(entry_x8)
    result = XString::~XString()
    
    if ((x21 & 4) == 0)
    label_c0b704:
        
        if ((x21 & 8) == 0)
            return result
        
        x1_5 = 0x91
    else
        x1_5 = 0x90
else if (x9_2 != 3)
label_c0b570:
    int32_t x0_46
    
    if (arg3 != 1)
        Translation* x0_15 = GetResLikeTranslation(zx.q(x20), arg2)
        TranslationString(zx.q(x20), x0_15, true)
        char* x0_19 = TranslationArticle(zx.q(x20), x0_15, 1, zx.q(x22), 0)
        
        if (x20 - 0x12 u< 2)
            XFormatString("%s%s")
        else if (x20 == 0x11)
            XFormatString("%s%s%s")
        else if (x20 == 0x10)
            XFormatString("%s%s")
        else if (zx.d(*x0_19) == 0)
            XFormatString("%s")
        else
            XFormatString("%s %s")
        
        x0_46 = arg3
    else
        char* x2_4
        
        if (x8 == 0)
            Translation* x0_25 = GetResLikeTranslation(zx.q(x20), arg2)
            TranslationString(zx.q(x20), x0_25, false)
            x2_4 = TranslationArticle(zx.q(x20), x0_25, 1, zx.q(x22), 0)
            
            if (x20 - 0x12 u< 2)
                XFormatString("%s%s")
            else if (x20 == 0x11)
                XFormatString("%s%s%s")
            else if (x20 == 0x10)
                XFormatString("%s%s")
            else
            label_c0b8f4:
                
                if (zx.d(*x2_4) == 0)
                    XFormatString("%s")
                else
                    XFormatString("%s %s")
        else
            if (x8 != 1)
                if (x8 != 3)
                    pthread_kill(pthread_self(), 6)
                    int64_t x0_50
                    int32_t x1_28
                    int32_t x2_8
                    x0_50, x1_28, x2_8 = XNoReturn()
                    return CardsetUnknown(x0_50, x1_28, x2_8) __tailcall
                
                Translation* x0_4 = GetResLikeTranslation(zx.q(x20), arg2)
                TranslationString(zx.q(x20), x0_4, false)
                char* x0_8 = TranslationArticle(zx.q(x20), x0_4, 2, zx.q(x22), 0)
                
                if (x20 - 0x12 u< 2)
                    XFormatString("%s%s")
                else if (x20 == 0x11)
                    XFormatString("%s%s%s")
                else if (x20 == 0x10)
                    XFormatString("%s%s")
                else if (zx.d(*x0_8) == 0)
                    XFormatString("%s")
                else
                    XFormatString("%s %s")
                
                goto label_c0b6f4
            
            int32_t x0_31 = TokenArticleStyle(zx.q(*(arg2 + 4)))
            
            if (x0_31 != 4)
                Translation* x0_40 = GetResLikeTranslation(zx.q(x20), arg2)
                char* x0_42 = TranslationString(zx.q(x20), x0_40, false)
                FormatWithArticle(zx.q(x20), 
                    TranslationArticle(zx.q(x20), x0_40, zx.q(x0_31), zx.q(x22), 0), zx.q(x0_31), 
                    x0_42, &data_793a18)
                goto label_c0b6f4
            
            Translation* x0_33 = GetResLikeTranslation(zx.q(x20), arg2)
            TranslationString(zx.q(x20), x0_33, false)
            x2_4 = TranslationArticle(zx.q(x20), x0_33, 1, zx.q(x22), 0)
            
            if (x20 - 0x12 u< 2)
                XFormatString("%s%s")
            else if (x20 == 0x11)
                XFormatString("%s%s%s")
            else
                if (x20 != 0x10)
                    goto label_c0b8f4
                
                XFormatString("%s%s")
        x0_46 = 1
    
    XStringFromInt(x0_46)
    void var_68
    LocStringReplace(zx.q(x20), 0x8f, "[N]", &var_68, "[resource]", &var_58)
    XString::operator=(entry_x8)
    XString::~XString()
    XString::~XString()
    result = XString::~XString()
    
    if ((x21 & 4) == 0)
        goto label_c0b704
    
    x1_5 = 0x90
else
    x0_2 = "%d{potion}"
label_c0b6e8:
    XFormatString(x0_2)
label_c0b6f4:
    XString::operator=(entry_x8)
    result = XString::~XString()
    
    if ((x21 & 4) == 0)
        goto label_c0b704
    
    x1_5 = 0x90
LocStringReplace(zx.q(x20), x1_5, "[resources]", entry_x8)
XString::operator=(entry_x8)
return XString::~XString()
