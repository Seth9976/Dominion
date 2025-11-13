// 函数: _Z16DefaultPlural_frRK7XString
// 地址: 0xf7921c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::Length()
XString::XString()
XString var_28
int32_t x0_1 = EndingIs(arg1, "ail", &var_28)
int32_t x0_3

if ((x0_1 & 1) == 0)
    x0_3 = EndingIs(arg1, "al", &var_28)

char var_30

if ((x0_1 & 1) == 0 && (x0_3 & 1) == 0)
    int32_t x0_8 = EndingIs(arg1, "eau", &var_28)
    int32_t x0_10
    
    if ((x0_8 & 1) == 0)
        x0_10 = EndingIs(arg1, "eu", &var_28)
    
    if ((x0_8 & 1) == 0 && (x0_10 & 1) == 0)
        int32_t x8_4 = zx.d(*(XString::operator char const*() + sx.q(XString::Length()) - 1)) - 0x73
        XString* entry_x8
        
        if (x8_4 u> 7 || (1 << x8_4 & 0xa1) == 0)
            XString::XString(&var_30)
            XString::operator+(arg1)
            XString::~XString()
        else
            XString::XString(entry_x8)
    else
        XString::XString(&var_30)
        XString::operator+(arg1)
        XString::~XString()
else
    XString::XString(&var_30)
    XString::operator+(&var_28)
    XString::~XString()
return XString::~XString()
