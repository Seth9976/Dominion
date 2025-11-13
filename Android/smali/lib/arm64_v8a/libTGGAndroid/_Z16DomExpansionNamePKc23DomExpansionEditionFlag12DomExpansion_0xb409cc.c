// 函数: _Z16DomExpansionNamePKc23DomExpansionEditionFlag12DomExpansion
// 地址: 0xb409cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int32_t x22 = arg2
int32_t x0 = GetCurrentLanguage()
XString* entry_x8

if (LookupTranslation(arg1, nullptr, zx.q(x0)) == 0)
    XFormatString("*%s*")
    
    if (x21 == 0x13)
        XString::XString(entry_x8)
    else
    label_b40a3c:
        
        if (x22 == 0)
            if (DefaultEditionFlag(GameLatestVersion(4, true), zx.q(x21)) == 0)
                XString::XString(entry_x8)
            else if (LookupTranslation("dom_expansion_only1E", nullptr, zx.q(x0)) == 0)
            label_b40ad8:
                XFormatString("*%s*")
                StringReplace(XString::operator char const*(), "[expansion]", 
                    XString::operator char const*())
                XString::~XString()
            else
            label_b40aac:
                void var_40
                XString::XString(&var_40)
                StringReplace(XString::operator char const*(), "[expansion]", 
                    XString::operator char const*())
                XString::~XString()
        else
            if (x22 == 2)
                if (LookupTranslation("dom_expansion_with1E", nullptr, zx.q(x0)) != 0)
                    goto label_b40aac
                
                goto label_b40ad8
            
            XString::XString(entry_x8)
else
    void var_38
    XString::XString(&var_38)
    
    if (x21 != 0x13)
        goto label_b40a3c
    
    XString::XString(entry_x8)
return XString::~XString()
