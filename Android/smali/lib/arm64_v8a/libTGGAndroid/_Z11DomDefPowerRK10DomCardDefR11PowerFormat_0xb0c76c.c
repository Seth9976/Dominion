// 函数: _Z11DomDefPowerRK10DomCardDefR11PowerFormat
// 地址: 0xb0c76c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
*(arg1 + 0x58)
XString::XString()
int64_t x8 = *(arg1 + 0xc8)

if ((x8 & 0x40000) == 0)
    char const* const x0_1
    
    if ((x8 & 0x100000) != 0)
        *(arg1 + 0x58)
        x0_1 = "%s_desc"
    else
        x0_1 = "dom_card_power_%s"
    
    XFormatString(x0_1)
    goto label_b0c800

int32_t x25
void var_48

if (*(arg1 + 0xc0) == 0x1400)
    XFormatString("dom_card_category_base")
label_b0c800:
    XString::operator=(&var_48)
    XString::~XString()
    x25 = 0
else if (x8 != 0x4000000000000)
    XFormatString("dom_card_category_landscape")
    XString::operator=(&var_48)
    XString::~XString()
    x25 = 2
else
    XFormatString("dom_card_category_expansion")
    XString::operator=(&var_48)
    XString::~XString()
    x25 = 1
int64_t x0_6 = LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
int64_t x0_8

if (x0_6 == 0)
    x0_8 = LookupTranslationSafe(XString::operator char const*(), 1)

XString* entry_x8
int32_t x24

if (x0_6 == 0 && x0_8 == 0)
    XFormatString("**missing:%s**")
    XString::operator=(entry_x8)
    XString::~XString()
    x24 = 1
    
    if (x25 != 0)
        goto label_b0c864
else
    XString::operator=(entry_x8)
    x24 = 0
    
    if (x25 != 0)
    label_b0c864:
        
        if (x25 == 2)
            CardTypeString(*(arg1 + 0xc8) & 0xfffbffffffffffff, true)
            StringReplace(XString::operator char const*(), "[landscape]", 
                XString::operator char const*())
            XString::operator=(entry_x8)
        else
            if (x25 != 1)
                pthread_kill(pthread_self(), 6)
                int64_t x0_82
                bool x1_7
                x0_82, x1_7 = XNoReturn()
                return CardTypeString(x0_82, x1_7) __tailcall
            
            *(arg1 + 0x58)
            XFormatString("dom_expansion_name_%s")
            L(XString::operator char const*(), nullptr)
            char var_58
            XString::XString(&var_58)
            StringReplace(XString::operator char const*(), "[expansion]", 
                XString::operator char const*())
            XString::operator=(entry_x8)
            XString::~XString()
        
        XString::~XString()
        XString::~XString()

*arg2 = 0

if ((x24 & 1) == 0)
    int32_t x0_25 = XString::IsEmpty()
    int32_t x0_28
    
    if ((x0_25 & 1) == 0)
        x0_28 = HasMod(XString::operator char const*(), "narrow", nullptr)
    
    if ((x0_25 & 1) != 0 || (x0_28 & 1) == 0)
        if ((XString::IsEmpty() & 1) == 0
                && (HasMod(XString::operator char const*(), "wide", nullptr) & 1) != 0)
            *arg2 = 2
    else
        *arg2 = 1
    
    if (*(GetLocalSettings() + 0x28) != 0)
        if (*(GetLocalSettings() + 0x10) == 0x10)
            goto label_b0c9fc
        
        if (*(GetLocalSettings() + 0x10) == 0x11)
            goto label_b0c9fc
        
        if (*(GetLocalSettings() + 0x10) == 0x13)
            goto label_b0c9fc
        
        if (*(GetLocalSettings() + 0x10) != 0x12)
            goto label_b0ca24
        
        goto label_b0c9fc
    
label_b0c9fc:
    int32_t x0_40 = XString::IsEmpty()
    int32_t x0_43
    
    if ((x0_40 & 1) == 0)
        x0_43 = HasMod(XString::operator char const*(), "break_none", nullptr)
    
    char* x0_54
    void* const x2_4
    char* x0_45
    void* const x21_1
    
    if ((x0_40 & 1) != 0 || (x0_43 & 1) == 0)
        int32_t x0_47 = XString::IsEmpty()
        int32_t x0_50
        
        if ((x0_47 & 1) == 0)
            x0_50 = HasMod(XString::operator char const*(), "break_large", nullptr)
        
        if ((x0_47 & 1) == 0 && (x0_50 & 1) != 0)
            x0_45 = XString::operator char const*()
            x21_1 = "{auto_card_gap}"
            goto label_b0ca84
        
        int32_t x0_56 = XString::IsEmpty()
        int32_t x0_59
        
        if ((x0_56 & 1) == 0)
            x0_59 = HasMod(XString::operator char const*(), "break_small", nullptr)
        
        int32_t x0_61
        int32_t x0_64
        
        if ((x0_56 & 1) != 0 || (x0_59 & 1) == 0)
            x0_61 = XString::IsEmpty()
            
            if ((x0_61 & 1) == 0)
                x0_64 = HasMod(XString::operator char const*(), "small", nullptr)
        
        char* x0_66
        char const* const x2_5
        
        if (((x0_56 & 1) != 0 || (x0_59 & 1) == 0) && ((x0_61 & 1) != 0 || (x0_64 & 1) == 0))
            x0_66 = XString::operator char const*()
            x2_5 = "{auto_card_gap}"
        else
            x0_66 = XString::operator char const*()
            x2_5 = "{auto_card_gap_small}"
        
        StringReplace(x0_66, "[gap]", x2_5)
        XString::operator=(entry_x8)
        XString::~XString()
        x0_54 = XString::operator char const*()
        x2_4 = &data_793a18
    else
    label_b0ca24:
        x0_45 = XString::operator char const*()
        x21_1 = &data_793a18
    label_b0ca84:
        StringReplace(x0_45, "[gap]", x21_1)
        XString::operator=(entry_x8)
        XString::~XString()
        x0_54 = XString::operator char const*()
        x2_4 = x21_1
    StringReplace(x0_54, "[gap_line]", x2_4)
    XString::operator=(entry_x8)
    XString::~XString()

if ((zx.d(*(arg1 + 0xca)) & 4) != 0)
    StringReplace(XString::operator char const*(), "auto_card_line", "****")
    XString::operator=(entry_x8)
    XString::~XString()
    StringReplace(XString::operator char const*(), "****", "auto_card_line_white")
    XString::operator=(entry_x8)
    XString::~XString()

return XString::~XString()
