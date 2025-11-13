// 函数: _Z21DomDefNameTranslationRK10DomCardDef
// 地址: 0xb37dec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
int64_t x8 = *(arg1 + 0xc8)
char var_18
char const* const x0

if (x8 != 0x4000000000000)
    if ((x8 & 0x40000) != 0)
        *(arg1 + 0x58)
        x0 = "dom_card_type_%s"
        goto label_b37e48
    
    if ((x8 & 0x100000) == 0)
        *(arg1 + 0x58)
        x0 = "dom_card_title_%s"
        goto label_b37e48
    
    *(arg1 + 0x58)
    XString::operator=(&var_18)
else
    *(arg1 + 0x58)
    x0 = "dom_expansion_name_%s"
label_b37e48:
    XFormatString(x0)
    XString::operator=(&var_18)
    XString::~XString()
int64_t result = LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))
XString::~XString()
return result
