// 函数: _Z13GetArticleStr8LanguageP11Translationb11ArticleType15GrammaticalCase
// 地址: 0xf7b210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg1
int32_t x20 = arg5
int32_t x23 = arg4
XString::XString()
void var_38

if ((arg3.d & 1) == 0)
    XString::operator=(&var_38)
else
    GetPluralStr(zx.q(x22), arg2)
    XString::operator=(&var_38)
    XString::~XString()
XString* entry_x8

if (x22 u> 0x13)
label_f7b300:
    uint64_t x8_2 = zx.q(x23 - 1)
    
    if (x8_2.d u> 4)
    label_f7b510:
        pthread_kill(pthread_self(), 6)
        int64_t* x0_16 = XNoReturn()
        XString::~XString()
        XString::~XString()
        sub_1101e04(x0_16)
        noreturn
    
    switch (x8_2)
        case 0
            XString::XString(entry_x8)
        case 1
            IndefiniteArticle(zx.q(x22), arg2, zx.q(x20), 0)
            XString::GetString()
            XFormatString("%s %s")
        case 2
            if (x22 != 8)
                DefiniteArticle(zx.q(x22), arg2, zx.q(x20), 0)
                XString::GetString()
                XFormatString("%s %s")
            else
                XString::GetString()
                XFormatString("%s%s")
        case 3
            goto label_f7b510
        case 4
            uint64_t x8_4 = zx.q(x22 - 1)
            
            if (x8_4.d u<= 7)
                switch (x8_4)
                    case 1
                        int32_t x8_9 = *(arg2 + 0x18) - 3
                        
                        if (x20 != 1)
                            if (x8_9 u< 3)
                                (&data_117f818)[sx.q(x8_9)]
                        else if (x8_9 u< 3)
                            (&data_117f818)[sx.q(x8_9)]
                    case 2
                        *(arg2 + 0x18)
                    case 3
                        *(arg2 + 0x18)
                    label_f7b4d4:
                    case 7
                        *(arg2 + 0x18)
                        *(arg2 + 0x24)
                        goto label_f7b4d4
            
            XString::GetString()
            XFormatString("%s %s")
else if ((1 << x22 & 0xd1000) == 0)
    if (x22 != 0x11)
        goto label_f7b300
    
    if (x23 != 2)
        XString::XString(entry_x8)
    else
        XString::GetString()
        XFormatString("%s%s")
else
    XString::XString(entry_x8)
return XString::~XString()
