// 函数: _Z16DefaultPlural_deRK7XString17GrammaticalGender
// 地址: 0xf79cc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2
XString::XString()
XString::Length()
XString var_28
char var_38

if ((EndingIs(arg1, "nis", &var_28) & 1) != 0)
label_f79d5c:
    XString::XString(&var_38)
    XString::operator+(arg1)
    XString::~XString()
else
    if ((EndingIs(arg1, "ling", &var_28) & 1) != 0)
        goto label_f79d5c
    
    if ((EndingIs(arg1, "ich", &var_28) & 1) != 0)
        goto label_f79d5c
    
    if ((EndingIs(arg1, "ig", &var_28) & 1) != 0)
        goto label_f79d5c
    
    if ((EndingIs(arg1, "tum", &var_28) & 1) == 0)
        XString* entry_x8
        
        if ((EndingIs(arg1, "en", &var_28) & 1) != 0)
            XString::XString(entry_x8)
        else if ((EndingIs(arg1, "chen", &var_28) & 1) != 0)
            XString::XString(entry_x8)
        else if ((EndingIs(arg1, "lein", &var_28) & 1) != 0)
            XString::XString(entry_x8)
        else if (x21 == 3)
            int32_t x0_30 = EndingIs(arg1, "el", &var_28)
            int32_t x0_32
            
            if ((x0_30 & 1) == 0)
                x0_32 = EndingIs(arg1, "er", &var_28)
            
            if ((x0_30 & 1) == 0 && (x0_32 & 1) == 0)
                if ((EndingIs(arg1, "in", &var_28) & 1) == 0)
                    if ((EndingIs(arg1, "sal", &var_28) & 1) == 0)
                        goto label_f79f78
                    
                    XString::XString(&var_38)
                    XString::operator+(arg1)
                    XString::~XString()
                else
                    XString::XString(&var_38)
                    XString::operator+(arg1)
                    XString::~XString()
            else
                XString::XString(&var_38)
                XString::operator+(&var_28)
                XString::~XString()
        else if (x21 != 2)
        label_f79f78:
            int32_t x8_8 = ror.d(
                zx.d(*(XString::operator char const*() + sx.q(XString::Length()) - 1)) - 0x61, 1)
            
            if (x8_8 u> 0xc)
            label_f79fe8:
                
                if (x21 == 4 || x21 == 2)
                    XString::XString(&var_38)
                    XString::operator+(arg1)
                else
                    XString::XString(&var_38)
                    XString::operator+(arg1)
            else if ((1 << x8_8 & 0x1491) == 0)
                if (x8_8 != 2)
                    goto label_f79fe8
                
                XString::XString(&var_38)
                XString::operator+(arg1)
            else
                XString::XString(&var_38)
                XString::operator+(arg1)
            
            XString::~XString()
        else
            int32_t x0_25 = EndingIs(arg1, "el", &var_28)
            int32_t x0_27
            
            if ((x0_25 & 1) == 0)
                x0_27 = EndingIs(arg1, "er", &var_28)
            
            if ((x0_25 & 1) == 0 && (x0_27 & 1) == 0)
                goto label_f79f78
            
            XString::XString(entry_x8)
    else
        UmlautFirstVowel(arg1)
        char var_40
        XString::XString(&var_40)
        XString::operator+(&var_38)
        XString::~XString()
        XString::~XString()
return XString::~XString()
