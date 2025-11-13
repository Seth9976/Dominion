// 函数: _Z16DefaultPlural_enRK7XString
// 地址: 0xf78f28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_2 = zx.q(zx.d(*(XString::operator char const*() + sx.q(XString::Length()) - 1)) - 0x66)
char var_28

if (x8_2.d u> 0x13)
label_f78fdc:
    XString::XString(&var_28)
    XString::operator+(arg1)
    return XString::~XString()

char var_30
XString* entry_x8

switch (x8_2)
    case 0
        int32_t x0_4 = XString::Length()
        uint32_t x8_4
        
        if (x0_4 s>= 2)
            x8_4 = zx.d(*(XString::operator char const*() + sx.q(XString::Length()) - 2))
        
        if (x0_4 s>= 2 && x8_4 == 0x66)
            XString::XString(&var_28)
            XString::operator+(arg1)
            return XString::~XString()
        
        XString::XString()
        int32_t x0_35 = XString::operator char const*()
        XString::Length()
        XString::AppendLength(&var_28, x0_35)
        XString::XString(&var_30)
        XString::operator+(&var_28)
        XString::~XString()
        return XString::~XString()
    case 1, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xe, 0xf, 0x10, 0x11
        goto label_f78fdc
    case 2
        int32_t x0_16 = XString::Length()
        int32_t x8_10
        
        if (x0_16 s>= 2)
            x8_10 = zx.d(*(XString::operator char const*() + sx.q(XString::Length()) - 2)) | 0x10
        
        if (x0_16 s< 2 || x8_10 != 0x73)
            XString::XString(&var_28)
            XString::operator+(arg1)
        else
            XString::XString(&var_28)
            XString::operator+(arg1)
        
        return XString::~XString()
    case 0xd
        return XString::XString(entry_x8) __tailcall
    case 0x12
        XString::XString(&var_28)
        XString::operator+(arg1)
        return XString::~XString()
    case 0x13
        int32_t x0_26 = XString::Length()
        int64_t x0_31
        
        if (x0_26 s>= 2)
            x0_31 = memchr("aeiou", 
                zx.d(*(XString::operator char const*() + sx.q(XString::Length()) - 2)), 0x16)
        
        if (x0_26 s>= 2 && x0_31 != 0)
            XString::XString(&var_28)
            XString::operator+(arg1)
            return XString::~XString()
        
        XString::XString()
        int32_t x0_42 = XString::operator char const*()
        XString::Length()
        XString::AppendLength(&var_28, x0_42)
        XString::XString(&var_30)
        XString::operator+(&var_28)
        XString::~XString()
        return XString::~XString()
