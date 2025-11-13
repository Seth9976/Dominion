// 函数: _ZN9LocString8AsStringERb
// 地址: 0xf78078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* entry_x8

if ((XString::IsEmpty() & 1) != 0)
    return XString::XString(entry_x8) __tailcall

void* x22 = *(arg1 + 8)
XString* x0_3

if (x22 == 0)
    char* x0_5 = XString::operator char const*()
    
    if (*gTranslations == 0)
        *(arg1 + 8) = 0
        x0_3 = entry_x8
    else
        ToKey(x0_5, nullptr)
        x22 = LookupTranslationSafe(XString::GetString(), 0)
        XString::~XString()
        *(arg1 + 8) = x22
        
        if (x22 != 0)
            goto label_f780bc
        
        x0_3 = entry_x8
else
label_f780bc:
    x0_3 = entry_x8
    char* entry_x1
    *entry_x1 = *(x22 + 0x26)
    *(arg1 + 8)

return XString::XString(x0_3)
