// 函数: _Z10DomDefNameRK10DomCardDef8LanguageP13DefNameSourceb
// 地址: 0x9e6538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2
XString::XString()
int64_t x8 = *(arg1 + 0xc8)
char var_48
char const* const x0

if (x8 != 0x4000000000000)
    if ((x8 & 0x40000) != 0)
        *(arg1 + 0x58)
        x0 = "dom_card_type_%s"
        goto label_9e65b0
    
    if ((x8 & 0x100000) == 0)
        *(arg1 + 0x58)
        x0 = "dom_card_title_%s"
        goto label_9e65b0
    
    *(arg1 + 0x58)
    XString::operator=(&var_48)
else
    *(arg1 + 0x58)
    x0 = "dom_expansion_name_%s"
label_9e65b0:
    XFormatString(x0)
    XString::operator=(&var_48)
    XString::~XString()
Translation* x24 = LookupTranslationSafe(XString::operator char const*(), zx.q(x22))

if (arg3 != 0)
    *arg3 = 0

if (x24 == 0)
    x24 = LookupTranslationSafe(XString::operator char const*(), 1)
    
    if (arg3 != 0)
        *arg3 = 1

XString::XString()
char* entry_x8

if (x24 == 0)
    *(arg1 + 0x58)
    XFormatString("**missing:%s**")
    void var_50
    XString::operator=(&var_50)
    XString::~XString()
    
    if (arg3 != 0)
        *arg3 = 2
    
    XString::XString(entry_x8)
else
    TranslationString(zx.q(x22), x24, arg4 & 1)
    XString::XString(entry_x8)
XString::~XString()
return XString::~XString()
