// 函数: _Z22DomDeclareAbilityPower9UI2HandleRK10DomCardDef12AbilityIndex
// 地址: 0xb0d7b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x21 = arg3
XString::XString()
void var_28

if (x21 == 0 || (zx.d(*(arg2 + 0xce)) & 0x10) != 0)
    *(arg2 + 0x58)
    XFormatString("dom_ability_%s")
    
    if (LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage())) != 0)
        XString::operator=(&var_28)
    else if (LookupTranslationSafe(XString::operator char const*(), 1) != 0)
        XString::operator=(&var_28)
    else
        XString::GetString()
    label_b0d97c:
        XFormatString("**missing:%s**")
        XString::operator=(&var_28)
        XString::~XString()
else
    *(arg2 + 0x58)
    XFormatString("dom_card_ability_%s")
    char* x1_1
    
    if (*(arg2 + 0x6e0) != x21)
        if (*(arg2 + 0x6f0) == x21)
            x1_1 = *(arg2 + 0x6f8)
            
            if (x1_1 != 0 && zx.d(*x1_1) != 0)
                goto label_b0d8d0
            
            goto label_b0d908
        
        if (*(arg2 + 0x700) == x21)
            x1_1 = *(arg2 + 0x708)
            
            if (x1_1 != 0 && zx.d(*x1_1) != 0)
                goto label_b0d8d0
            
            goto label_b0d908
        
        if (*(arg2 + 0x710) == x21)
            x1_1 = *(arg2 + 0x718)
            
            if (x1_1 == 0 || zx.d(*x1_1) == 0)
                goto label_b0d908
            
            goto label_b0d8d0
        
        *(arg2 + 0x58)
        XFormatString("missing:%d_%s")
        XString::operator=(&var_28)
        XString::~XString()
        UI2SetState(zx.q(x19), &data_182cdf0, 0xffffffff, 0)
    else
        x1_1 = *(arg2 + 0x6e8)
        
        if (x1_1 == 0 || zx.d(*x1_1) == 0)
            goto label_b0d908
        
    label_b0d8d0:
        XFormatString("__%s")
        XString::operator char const*()
        char var_30
        XString::operator+=(&var_30)
        XString::~XString()
    label_b0d908:
        
        if (LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage())) != 0)
            XString::operator=(&var_28)
        else
            if (LookupTranslationSafe(XString::operator char const*(), 1) == 0)
                *(arg2 + 0x58)
                goto label_b0d97c
            
            XString::operator=(&var_28)

XString::~XString()
UI2SetText(zx.q(x19), &data_182cdd8, &var_28, 0xffffffff)
return XString::~XString()
