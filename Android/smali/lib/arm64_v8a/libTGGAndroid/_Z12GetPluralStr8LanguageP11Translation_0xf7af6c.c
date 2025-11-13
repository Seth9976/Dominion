// 函数: _Z12GetPluralStr8LanguageP11Translation
// 地址: 0xf7af6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* entry_x8

if ((XString::IsEmpty() & 1) != 0)
    if (zx.d(*(arg2 + 0x26)) != 0)
        DefaultPlural_en(arg2)
        XString::operator=(arg2 + 8)
        XString::~XString()
        return XString::XString(entry_x8)
    
    if (zx.d(*(XString::operator char const*() + sx.q(XString::Length()) - 1)) != 0x5d)
        uint64_t x8_4 = zx.q(arg1 - 1)
        
        if (x8_4.d u> 0x12)
        label_f7b0d8:
            XString::GetString()
            XFormatString("%s_s")
            XString::operator=(arg2 + 8)
            XString::~XString()
            return XString::XString(entry_x8)
        
        switch (x8_4)
            case 0
                DefaultPlural_en(arg2)
                XString::operator=(arg2 + 8)
                XString::~XString()
                return XString::XString(entry_x8)
            case 1
                DefaultPlural_de(arg2, zx.q(*(arg2 + 0x18)))
                XString::operator=(arg2 + 8)
                XString::~XString()
                return XString::XString(entry_x8)
            case 2
                DefaultPlural_fr(arg2)
                XString::operator=(arg2 + 8)
                XString::~XString()
                return XString::XString(entry_x8)
            case 3
                DefaultPlural_nl(arg2)
                XString::operator=(arg2 + 8)
                XString::~XString()
                return XString::XString(entry_x8)
            case 4, 5, 8, 9, 0xa, 0xd
                goto label_f7b0d8
            case 6
                DefaultPlural_pt_br(arg2)
                XString::operator=(arg2 + 8)
                XString::~XString()
                return XString::XString(entry_x8)
            case 7
                DefaultPlural_it(arg2)
                XString::operator=(arg2 + 8)
                XString::~XString()
                return XString::XString(entry_x8)
            case 0xb
                void var_48
                XString::XString(&var_48)
                DefaultPlural_pl(&var_48, zx.q(*(arg2 + 0x18)))
                XString::operator=(arg2 + 8)
                XString::~XString()
                XString::~XString()
                return XString::XString(entry_x8)
            case 0xc, 0xe, 0xf, 0x11, 0x12
                XString::operator=(arg2 + 8)
                return XString::XString(entry_x8)
            case 0x10
                void var_40
                XString::XString(&var_40)
                void var_38
                XString::XString(&var_38)
                XString::operator=(arg2 + 8)
                XString::~XString()
                XString::~XString()
                return XString::XString(entry_x8)
    
    XString::operator=(arg2 + 8)

return XString::XString(entry_x8) __tailcall
