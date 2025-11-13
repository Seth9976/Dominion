// 函数: _Z11HasHeirloomRK10DomCardDefR7XString
// 地址: 0xb0c66c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(arg1 + 0xc0) - 0xd04

if (x8_1 u> 0x16 || (1 << x8_1 & 0x40848b) == 0)
    return 0

*(arg1 + 0x58)
XFormatString("dom_card_heirloom_%s")
int64_t x0_4 = LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))

if (x0_4 == 0)
    int64_t x21_2 = LookupTranslationSafe(XString::operator char const*(), 1)
    XString::XString()
    
    if (x21_2 != 0)
        XString::operator=(arg2)
    else
    label_b0c720:
        *(arg1 + 0x58)
        XFormatString("**missing:%s**")
        XString::operator=(arg2)
        XString::~XString()
else
    XString::XString()
    
    if (x0_4 == 0)
        goto label_b0c720
    
    XString::operator=(arg2)

XString::~XString()
XString::~XString()
return 1
