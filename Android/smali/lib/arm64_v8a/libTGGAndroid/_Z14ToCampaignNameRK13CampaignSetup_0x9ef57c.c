// 函数: _Z14ToCampaignNameRK13CampaignSetup
// 地址: 0x9ef57c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = *(arg1 + 0x5010)
int32_t x23 = *(arg1 + 0x5014)
int32_t x26 = *(arg1 + 0x5018)
int32_t x20 = *(arg1 + 0x501c)
*(arg1 + 8)
int32_t x0 = GetCurrentLanguage()
char* x0_45
char* x0_128
char* x0_136
char const* const x1_41
char const* const x1_46
char* x2_8
char* x2_20
char* x2_21
char const* const x3_1
char* x4_6

if (x26 != 0)
    int32_t x8_1
    int32_t x21_1
    
    if (x26 s>= x24)
        if (x24 != 0x5dc || x26 != 0x5dc)
            x8_1 = x24
            x21_1 = x20
            x24 = x26
            x20 = x23
            
            if (x8_1 s> 0x865)
                goto label_9ef5d0
            
            goto label_9ef7d8
        
        int64_t x0_2 = LandscapeType(zx.q(x20))
        int64_t x0_4 = LandscapeType(zx.q(x23))
        
        x21_1 = x0_2 u< x0_4 ? x23 : x20
        
        if (x0_2 u>= x0_4)
            x20 = x23
        
        goto label_9ef67c
    
    x8_1 = x26
    x21_1 = x23
    
    if (x8_1 s<= 0x865)
    label_9ef7d8:
        
        if (x8_1 == 0x5dc)
            if (x24 == 0x5dc)
            label_9ef67c:
                int32_t x1_33
                int32_t x22_1
                char* x23_10
                char* x24_1
                char* x25_1
                
                if (LandscapeType(zx.q(x20)) == LandscapeType(zx.q(x21_1)))
                    LandscapeTypeKey(zx.q(x20), 0xffffffff)
                    XString::GetString()
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    XString::GetString()
                    XFormatString("dom_campaign_%s_%s")
                    XString::operator char const*()
                    XFormatString("%s_%d")
                    void* x0_17 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    
                    if (x0_17 == 0)
                        x22_1 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_1 = 1
                    else if (*(x0_17 + 0x20) != 1)
                        x22_1 = 3
                    else
                        x22_1 = 1
                    
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    x23_10 = XString::operator char const*()
                    LandscapeTypeKey(zx.q(x20), 1)
                    x24_1 = XString::operator char const*()
                    *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_1), 2)
                    XString::~XString()
                    x25_1 = XString::operator char const*()
                    x1_33 = 2
                    goto label_9f03b0
                
                char* x26_1
                
                if (LandscapeType(zx.q(x20)) u>= LandscapeType(zx.q(x21_1)))
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    XString::GetString()
                    LandscapeTypeKey(zx.q(x20), 0xffffffff)
                    XString::GetString()
                    XFormatString("dom_campaign_%s_%s")
                    XString::operator char const*()
                    XFormatString("%s_%d")
                    void* x0_84 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    
                    if (x0_84 == 0)
                        x22_1 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_1 = 1
                    else if (*(x0_84 + 0x20) != 1)
                        x22_1 = 3
                    else
                        x22_1 = 1
                    
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    x23_10 = XString::operator char const*()
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    x24_1 = XString::operator char const*()
                    *(DomDefGet(zx.q(x21_1), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_1), 2)
                    XString::~XString()
                    x25_1 = XString::operator char const*()
                    LandscapeTypeKey(zx.q(x20), 0xffffffff)
                    x26_1 = XString::operator char const*()
                    *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                else
                    LandscapeTypeKey(zx.q(x20), 0xffffffff)
                    XString::GetString()
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    XString::GetString()
                    XFormatString("dom_campaign_%s_%s")
                    XString::operator char const*()
                    XFormatString("%s_%d")
                    void* x0_58 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    
                    if (x0_58 == 0)
                        x22_1 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_1 = 1
                    else if (*(x0_58 + 0x20) != 1)
                        x22_1 = 3
                    else
                        x22_1 = 1
                    
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    x23_10 = XString::operator char const*()
                    LandscapeTypeKey(zx.q(x20), 0xffffffff)
                    x24_1 = XString::operator char const*()
                    *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_1), 2)
                    XString::~XString()
                    x25_1 = XString::operator char const*()
                    x1_33 = -1
                label_9f03b0:
                    LandscapeTypeKey(zx.q(x21_1), x1_33)
                    x26_1 = XString::operator char const*()
                    *(DomDefGet(zx.q(x21_1), 0x17) + 0x58)
                
                XFormatString("dom_card_title_%s")
                DoTranslateArticle(XString::operator char const*(), zx.q(x22_1), 2)
                XString::~XString()
                CampaignName(x23_10, x24_1, x25_1, x26_1, XString::operator char const*())
                XString::~XString()
                goto label_9f04f8
            
            if (x24 == 0x834)
                LandscapeTypeKey(zx.q(x20), 0xffffffff)
                XString::GetString()
                XFormatString("dom_campaign_exp_%s")
                XString::operator char const*()
                XFormatString("%s_%d")
                void* x0_211 = LookupTranslationSafe(XString::operator char const*(), 
                    zx.q(GetCurrentLanguage()))
                int32_t x22_10
                
                if (x0_211 == 0)
                    x22_10 = 1
                    LookupTranslationSafe(XString::operator char const*(), 1)
                else if (x0 != 7)
                    x22_10 = 1
                else if (*(x0_211 + 0x20) != 1)
                    x22_10 = 3
                else
                    x22_10 = 1
                
                XString::~XString()
                XString::~XString()
                char* x0_245 = XString::operator char const*()
                LandscapeTypeKey(zx.q(x20), 0xffffffff)
                char* x0_247 = XString::operator char const*()
                *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                XFormatString("dom_card_title_%s")
                DoTranslateArticle(XString::operator char const*(), zx.q(x22_10), 2)
                XString::~XString()
                char* x0_251 = XString::operator char const*()
                ExpName(zx.q(x21_1))
                CampaignName(x0_245, x0_247, x0_251, "expansion", XString::operator char const*())
                XString::~XString()
                goto label_9f05c0
            
            if (x24 == 0x866)
                goto label_9f0084
            
            if (x24 == 0x8fc || x24 == 0x92e)
            label_9f0084:
                LandscapeTypeKey(zx.q(x20), 0xffffffff)
                XString::GetString()
                XFormatString("dom_campaign_bells_%s")
                XString::operator char const*()
                XFormatString("%s_%d")
                void* x0_116 = LookupTranslationSafe(XString::operator char const*(), 
                    zx.q(GetCurrentLanguage()))
                int32_t x21_6
                
                if (x0_116 == 0)
                    x21_6 = 1
                    LookupTranslationSafe(XString::operator char const*(), 1)
                else if (x0 != 7)
                    x21_6 = 1
                else if (*(x0_116 + 0x20) != 1)
                    x21_6 = 3
                else
                    x21_6 = 1
                
                XString::~XString()
                XString::~XString()
                char* x0_167 = XString::operator char const*()
                LandscapeTypeKey(zx.q(x20), 0xffffffff)
                char* x0_169 = XString::operator char const*()
                *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                XFormatString("dom_card_title_%s")
                DoTranslateArticle(XString::operator char const*(), zx.q(x21_6), 2)
                XString::~XString()
                x2_21 = XString::operator char const*()
                x3_1 = &data_793a18
                x0_136 = x0_167
                x1_46 = x0_169
                goto label_9f05b4
            
            if (x24 == 0x898 || x24 == 0x8ca)
                goto label_9f0084
        else if (x8_1 == 0x834)
            if (x24 == 0x834)
                XFormatString("%s_%d")
                
                if (LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage())) == 0)
                    LookupTranslationSafe(XString::operator char const*(), 1)
                
                char* x0_199 = XString::operator char const*()
                ExpName(zx.q(x20))
                char* x0_201 = XString::operator char const*()
                ExpName(zx.q(x21_1))
                CampaignName(x0_199, "expansion0", x0_201, "expansion1", 
                    XString::operator char const*())
                XString::~XString()
                XString::~XString()
                return XString::~XString()
            
            if (x24 == 0x866 || x24 == 0x898)
                goto label_9efe28
            
            if (x24 == 0x8ca || x24 == 0x8fc || x24 == 0x92e)
            label_9efe28:
                XFormatString("%s_%d")
                
                if (LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage())) == 0)
                    LookupTranslationSafe(XString::operator char const*(), 1)
                
                char* x0_91 = XString::operator char const*()
                ExpName(zx.q(x20))
                x2_8 = XString::operator char const*()
                x0_45 = x0_91
                goto label_9efe9c
        
        char* x0_270
        char const* const x1_85
        char const* const x1_93
        char* x2_35
        char* x3_3
        char* x4_3
        char* x4_5
        char* x20_12
        char* x22_7
        char* x23_20
        char* x23_23
        char* x24_4
        
        if (x8_1 == 0x384)
            switch (x24)
                case 0x384
                    XFormatString("%s_%d")
                    void* x0_223 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x22_13
                    
                    if (x0_223 == 0)
                        x22_13 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_13 = 1
                    else if (*(x0_223 + 0x20) != 1)
                        x22_13 = 3
                    else
                        x22_13 = 1
                    
                    x23_23 = XString::operator char const*()
                    CategoryKey(zx.q(x20))
                    XFormatString("dom_category_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_13), 1)
                    XString::~XString()
                    x24_4 = XString::operator char const*()
                    CategoryKey(zx.q(x21_1))
                    XFormatString("dom_category_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_13), 1)
                    XString::~XString()
                    x4_6 = XString::operator char const*()
                    x1_46 = "cat1"
                    x3_1 = "cat2"
                label_9f10c4:
                    x0_136 = x23_23
                    x2_21 = x24_4
                    goto label_9f05b8
                case 0x3e8
                    XFormatString("%s_%d")
                    void* x0_104 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x22_3
                    
                    if (x0_104 == 0)
                        x22_3 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_3 = 1
                    else if (*(x0_104 + 0x20) != 1)
                        x22_3 = 3
                    else
                        x22_3 = 1
                    
                    char* x0_280 = XString::operator char const*()
                    CategoryKey(zx.q(x20))
                    XFormatString("dom_category_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_3), 1)
                    XString::~XString()
                    char* x0_284 = XString::operator char const*()
                    *(DomDefGet(zx.q(x21_1), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_3), 2)
                    XString::~XString()
                    x4_6 = XString::operator char const*()
                    x1_46 = &data_755ccc
                    x3_1 = "card"
                    x0_136 = x0_280
                    x2_21 = x0_284
                    goto label_9f05b8
                case 0x5dc
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    XString::GetString()
                    XFormatString("dom_campaign_cat_%s")
                    XString::operator char const*()
                    XFormatString("%s_%d")
                    void* x0_230 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x22_14
                    
                    if (x0_230 == 0)
                        x22_14 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_14 = 1
                    else if (*(x0_230 + 0x20) != 1)
                        x22_14 = 3
                    else
                        x22_14 = 1
                    
                    XString::~XString()
                    XString::~XString()
                    char* x0_306 = XString::operator char const*()
                    CategoryKey(zx.q(x20))
                    XFormatString("dom_category_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_14), 1)
                    XString::~XString()
                    char* x0_310 = XString::operator char const*()
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    char* x0_312 = XString::operator char const*()
                    *(DomDefGet(zx.q(x21_1), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_14), 2)
                    XString::~XString()
                    x4_5 = XString::operator char const*()
                    x1_93 = &data_755ccc
                    x0_270 = x0_306
                    x2_35 = x0_310
                    x3_3 = x0_312
                label_9f11b8:
                    CampaignName(x0_270, x1_93, x2_35, x3_3, x4_5)
                label_9f04f8:
                    XString::~XString()
                    goto label_9f05c0
                case 0x834
                    XFormatString("%s_%d")
                    void* x0_181 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x22_6
                    
                    if (x0_181 == 0)
                        x22_6 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_6 = 1
                    else if (*(x0_181 + 0x20) != 1)
                        x22_6 = 3
                    else
                        x22_6 = 1
                    
                    x23_20 = XString::operator char const*()
                    CategoryKey(zx.q(x20))
                    XFormatString("dom_category_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_6), 1)
                    XString::~XString()
                    x20_12 = XString::operator char const*()
                    ExpName(zx.q(x21_1))
                    x4_3 = XString::operator char const*()
                    x1_85 = &data_755ccc
                label_9f1004:
                    CampaignName(x23_20, x1_85, x20_12, "expansion", x4_3)
                    goto label_9f05c0
                case 0x866, 0x898
                label_9f05f0:
                    XFormatString("%s_%d")
                    void* x0_177 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x21_12
                    
                    if (x0_177 == 0)
                        x21_12 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x21_12 = 1
                    else if (*(x0_177 + 0x20) != 1)
                        x21_12 = 3
                    else
                        x21_12 = 1
                    
                    x22_7 = XString::operator char const*()
                    CategoryKey(zx.q(x20))
                    XFormatString("dom_category_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x21_12), 1)
                    XString::~XString()
                    x2_20 = XString::operator char const*()
                    x1_41 = &data_755ccc
                label_9f0784:
                    x0_128 = x22_7
                    goto label_9f078c
                case 0x8ca, 0x8fc, 0x92e
                    goto label_9f05f0
        else if (x8_1 == 0x3e8)
            switch (x24 == 0x8fc)
                case 0x3e8
                    XFormatString("%s_%d")
                    void* x0_215 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x22_11
                    
                    if (x0_215 == 0)
                        x22_11 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_11 = 1
                    else if (*(x0_215 + 0x20) != 1)
                        x22_11 = 3
                    else
                        x22_11 = 1
                    
                    x23_23 = XString::operator char const*()
                    *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_11), 2)
                    XString::~XString()
                    x24_4 = XString::operator char const*()
                    *(DomDefGet(zx.q(x21_1), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_11), 2)
                    XString::~XString()
                    x4_6 = XString::operator char const*()
                    x1_46 = "card1"
                    x3_1 = "card2"
                    goto label_9f10c4
                case 0x5dc
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    XString::GetString()
                    XFormatString("dom_campaign_card_%s")
                    XString::operator char const*()
                    XFormatString("%s_%d")
                    void* x0_28 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x22_2
                    
                    if (x0_28 == 0)
                        x22_2 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x22_2 = 1
                    else if (*(x0_28 + 0x20) != 1)
                        x22_2 = 3
                    else
                        x22_2 = 1
                    
                    XString::~XString()
                    XString::~XString()
                    char* x0_259 = XString::operator char const*()
                    *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_2), 2)
                    XString::~XString()
                    char* x0_263 = XString::operator char const*()
                    LandscapeTypeKey(zx.q(x21_1), 0xffffffff)
                    char* x0_265 = XString::operator char const*()
                    *(DomDefGet(zx.q(x21_1), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_2), 2)
                    XString::~XString()
                    x4_5 = XString::operator char const*()
                    x1_93 = "card"
                    x0_270 = x0_259
                    x2_35 = x0_263
                    x3_3 = x0_265
                    goto label_9f11b8
                case 0x834
                    int32_t x8_37
                    
                    if (x20 s< 0)
                        x8_37 = x20 + 0xff
                    else
                        x8_37 = x20
                    
                    int32_t x22_12
                    void* x0_219
                    
                    if (x21_1 != x8_37 s>> 8)
                        XFormatString("%s_%d")
                        x0_219 = LookupTranslationSafe(XString::operator char const*(), 
                            zx.q(GetCurrentLanguage()))
                        
                        if (x0_219 == 0)
                            x22_12 = 1
                            LookupTranslationSafe(XString::operator char const*(), 1)
                        else if (x0 == 7)
                        label_9f09c0:
                            
                            if (*(x0_219 + 0x20) != 1)
                                x22_12 = 3
                            else
                                x22_12 = 1
                        else
                            x22_12 = 1
                    else
                        XFormatString("%s_%d")
                        x0_219 = LookupTranslationSafe(XString::operator char const*(), 
                            zx.q(GetCurrentLanguage()))
                        
                        if (x0_219 == 0)
                            x22_12 = 1
                            LookupTranslationSafe(XString::operator char const*(), 1)
                        else
                            if (x0 == 7)
                                goto label_9f09c0
                            
                            x22_12 = 1
                    x23_20 = XString::operator char const*()
                    *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x22_12), 2)
                    XString::~XString()
                    x20_12 = XString::operator char const*()
                    ExpName(zx.q(x21_1))
                    x4_3 = XString::operator char const*()
                    x1_85 = "card"
                    goto label_9f1004
                case 0x866
                    goto label_9f02d0
                case 0x898, 0x8ca
                    goto label_9f02d0
                case 0x8fc, 0x92e
                label_9f02d0:
                    XFormatString("%s_%d")
                    void* x0_140 = LookupTranslationSafe(XString::operator char const*(), 
                        zx.q(GetCurrentLanguage()))
                    int32_t x21_10
                    
                    if (x0_140 == 0)
                        x21_10 = 1
                        LookupTranslationSafe(XString::operator char const*(), 1)
                    else if (x0 != 7)
                        x21_10 = 1
                    else if (*(x0_140 + 0x20) != 1)
                        x21_10 = 3
                    else
                        x21_10 = 1
                    
                    x22_7 = XString::operator char const*()
                    *(DomDefGet(zx.q(x20), 0x17) + 0x58)
                    XFormatString("dom_card_title_%s")
                    DoTranslateArticle(XString::operator char const*(), zx.q(x21_10), 2)
                    XString::~XString()
                    x2_20 = XString::operator char const*()
                    x1_41 = "card"
                    goto label_9f0784
    else
    label_9ef5d0:
        
        if (x8_1 == 0x866 || x8_1 == 0x898)
        label_9ef8a8:
            
            if (x24 == 0x866 || x24 == 0x898)
                goto label_9efbd0
            
            if (x24 == 0x8ca || x24 == 0x92e || x24 == 0x8fc)
                goto label_9efbd0
        
        if (x8_1 == 0x8ca || x8_1 == 0x8fc || x8_1 == 0x92e)
            goto label_9ef8a8
else
    char* x21_7
    
    switch (x24)
        case 0x384
            XFormatString("%s_%d")
            void* x0_68 =
                LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
            int32_t x20_8
            
            if (x0_68 == 0)
                x20_8 = 1
                LookupTranslationSafe(XString::operator char const*(), 1)
            else if (x0 != 7)
                x20_8 = 1
            else if (*(x0_68 + 0x20) != 1)
                x20_8 = 3
            else
                x20_8 = 1
            
            x21_7 = XString::operator char const*()
            CategoryKey(zx.q(x23))
            XFormatString("dom_category_%s")
            DoTranslateArticle(XString::operator char const*(), zx.q(x20_8), 1)
            XString::~XString()
            x2_20 = XString::operator char const*()
            x1_41 = &data_755ccc
        label_9f0200:
            x0_128 = x21_7
        label_9f078c:
            CampaignName(x0_128, x1_41, x2_20, &data_793a18, &data_793a18)
            XString::~XString()
            return XString::~XString()
        case 0x3e8
            XFormatString("%s_%d")
            void* x0_21 =
                LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
            int32_t x20_2
            
            if (x0_21 == 0)
                x20_2 = 1
                LookupTranslationSafe(XString::operator char const*(), 1)
            else if (x0 != 7)
                x20_2 = 1
            else if (*(x0_21 + 0x20) != 1)
                x20_2 = 3
            else
                x20_2 = 1
            
            x21_7 = XString::operator char const*()
            *(DomDefGet(zx.q(x23), 0x17) + 0x58)
            XFormatString("dom_card_title_%s")
            DoTranslateArticle(XString::operator char const*(), zx.q(x20_2), 2)
            XString::~XString()
            x2_20 = XString::operator char const*()
            x1_41 = "card"
            goto label_9f0200
        case 0x5dc
            LandscapeTypeKey(zx.q(x23), 0xffffffff)
            XString::GetString()
            XFormatString("dom_campaign_%s")
            XString::operator char const*()
            XFormatString("%s_%d")
            void* x0_75 =
                LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
            int32_t x20_10
            
            if (x0_75 == 0)
                x20_10 = 1
                LookupTranslationSafe(XString::operator char const*(), 1)
            else if (x0 != 7)
                x20_10 = 1
            else if (*(x0_75 + 0x20) != 1)
                x20_10 = 3
            else
                x20_10 = 1
            
            XString::~XString()
            XString::~XString()
            char* x0_129 = XString::operator char const*()
            LandscapeTypeKey(zx.q(x23), 0xffffffff)
            char* x0_131 = XString::operator char const*()
            *(DomDefGet(zx.q(x23), 0x17) + 0x58)
            XFormatString("dom_card_title_%s")
            DoTranslateArticle(XString::operator char const*(), zx.q(x20_10), 2)
            XString::~XString()
            x2_21 = XString::operator char const*()
            x3_1 = &data_793a18
            x0_136 = x0_129
            x1_46 = x0_131
        label_9f05b4:
            x4_6 = &data_793a18
        label_9f05b8:
            CampaignName(x0_136, x1_46, x2_21, x3_1, x4_6)
        label_9f05c0:
            XString::~XString()
            XString::~XString()
            return XString::~XString()
        case 0x834
            XFormatString("%s_%d")
            
            if (LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
                    == 0)
                LookupTranslationSafe(XString::operator char const*(), 1)
            
            char* x0_42 = XString::operator char const*()
            ExpName(zx.q(x23))
            x2_8 = XString::operator char const*()
            x0_45 = x0_42
        label_9efe9c:
            CampaignName(x0_45, "expansion", x2_8, &data_793a18, &data_793a18)
            XString::~XString()
            return XString::~XString()
        case 0x866, 0x898
            CampaignPieceKey(zx.q(x23))
            XFormatString("dom_campaign_%s")
            XString::operator char const*()
            XFormatString("%s_%d")
            
            if (LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
                    == 0)
                LookupTranslationSafe(XString::operator char const*(), 1)
            
            XString::~XString()
            CampaignName(XString::operator char const*(), &data_793a18, &data_793a18, &data_793a18, 
                &data_793a18)
            return XString::~XString()
        case 0x8ca, 0x8fc, 0x92e
        label_9efbd0:
            XFormatString("%s_%d")
            
            if (LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
                    == 0)
                LookupTranslationSafe(XString::operator char const*(), 1)
            
            CampaignName(XString::operator char const*(), &data_793a18, &data_793a18, &data_793a18, 
                &data_793a18)
            return XString::~XString()
pthread_kill(pthread_self(), 6)
int32_t x0_318
int32_t x1_112
int32_t x2_37
x0_318, x1_112, x2_37 = XNoReturn()
return GetDayOfTheWeek(x0_318, x1_112, x2_37) __tailcall
