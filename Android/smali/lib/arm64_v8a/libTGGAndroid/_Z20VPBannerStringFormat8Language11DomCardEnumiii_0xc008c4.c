// 函数: _Z20VPBannerStringFormat8Language11DomCardEnumiii
// 地址: 0xc008c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
void* x0_1 = LookupBannerDef(zx.q(arg2))
XString* entry_x8

if (x0_1 == 0)
    return XString::XString(entry_x8) __tailcall

TranslationString(zx.q(x21), LookupTranslationSafe(*(x0_1 + 0x10), zx.q(x21)), 
    (arg3 != 1 ? 1 : 0).b)
char var_50
XString::XString(&var_50)
int32_t x8 = *(x0_1 + 0x18)
void* const x1_3
char* x2_1
char* x20_1

if (x8 == 2)
    char* x0_12 = XString::operator char const*()
    XStringFromInt(arg3)
    StringReplace(x0_12, "[X]", XString::operator char const*())
    XString::operator=(&var_50)
    XString::~XString()
    XString::~XString()
    char* x0_17 = XString::operator char const*()
    XStringFromInt(arg4)
    StringReplace(x0_17, "[Y]", XString::operator char const*())
    XString::operator=(&var_50)
    XString::~XString()
    XString::~XString()
    x20_1 = XString::operator char const*()
    XStringFromInt(arg5)
    x2_1 = XString::operator char const*()
    x1_3 = &data_74f17f
label_c00a74:
    StringReplace(x20_1, x1_3, x2_1)
    XString::operator=(&var_50)
    XString::~XString()
else
    if (x8 != 1)
        if (x8 != 0)
            pthread_kill(pthread_self(), 6)
            DomGame* x0_47
            PlayerScoreInfo* x1_13
            int64_t x2_9
            int64_t x3_3
            int32_t x4_1
            x0_47, x1_13, x2_9, x3_3, x4_1 = XNoReturn()
            return SetScoreInfo(x0_47, x1_13, x2_9, x3_3, x4_1) __tailcall
        
        x20_1 = XString::operator char const*()
        XStringFromInt(arg3)
        x2_1 = XString::operator char const*()
        x1_3 = &data_79783f
        goto label_c00a74
    
    char* x0_27 = XString::operator char const*()
    XStringFromInt(arg3)
    StringReplace(x0_27, "[N]", XString::operator char const*())
    XString::operator=(&var_50)
    XString::~XString()
    XString::~XString()
    int32_t x8_3 = (arg4 + 0x180000) s% 0x3e5
    int32_t* x9_6 = *(&data_1838a20 + (sx.q(x8_3) << 3))
    DomCardDef* x0_35
    
    if (x9_6 != 0)
        while (*x9_6 != arg4 || x9_6[1] != 0x18)
            x9_6 = *(x9_6 + 0x10)
            
            if (x9_6 == 0)
                goto label_c00b2c
        
        x0_35 = *(x9_6 + 8)
    else
    label_c00b2c:
        int32_t var_58
        int64_t x0_33 = DomCardExp(zx.q(arg4), &var_58)
        int64_t var_48
        
        if (DomExpGet(x0_33, &var_48) != 0)
            int64_t x8_4 = var_48
            int32_t x11_3 = var_58
            
            while (true)
                int64_t x11_4 = sx.q(x11_3)
                
                if (*(x8_4 + muls.dp.d(x11_3, 0x780) + 4) s<= 0x18
                        && *(x8_4 + x11_4 * 0x780 + 8) s> 0x17)
                    break
                
                int32_t x12_7 = *(x8_4 + x11_4 * 0x780 + 0xc)
                
                if (x12_7 == 0)
                    *(x8_4 + x11_4 * 0x780 + 0xc0)
                    XTrace("can't find card %d cardcur %d version %d")
                    break
                
                x11_3 = x12_7 + neg.d(x0_33.d << 8)
                var_58 = x11_3
        
        int32_t* x0_36 = malloc(0x18)
        int64_t x8_6 = sx.q(x8_3) << 3
        int64_t x9_8 = *(&data_1838a20 + x8_6)
        *x0_36 = arg4
        x0_36[1] = 0x18
        *(&data_1838a20 + x8_6) = x0_36
        *(x0_36 + 0x10) = x9_8
        int64_t x0_38 = DomCardExp(zx.q(arg4), &var_58)
        int64_t x24_2 = sx.q(var_58)
        
        if (DomExpGet(x0_38, &var_48) == 0)
            x0_35 = *EXP_BASE_DEFS
        else
            int64_t x8_7 = var_48
            int32_t x11_5 = var_58
            
            while (true)
                int64_t x11_6 = sx.q(x11_5)
                
                if (*(x8_7 + muls.dp.d(x11_5, 0x780) + 4) s<= 0x18
                        && *(x8_7 + x11_6 * 0x780 + 8) s> 0x17)
                    x0_35 = x8_7 + x11_6 * 0x780
                    break
                
                int32_t x12_13 = *(x8_7 + x11_6 * 0x780 + 0xc)
                
                if (x12_13 == 0)
                    *(x8_7 + x11_6 * 0x780 + 0xc0)
                    XTrace("can't find card %d cardcur %d version %d")
                    x0_35 = var_48 + x24_2 * 0x780
                    break
                
                x11_5 = x12_13 + neg.d(x0_38.d << 8)
                var_58 = x11_5
        
        *(x0_36 + 8) = x0_35
    
    DomDefName(x0_35, zx.q(x21), nullptr, true)
    StringReplace(XString::operator char const*(), "[card]", XString::operator char const*())
    XString::operator=(&var_50)
    XString::~XString()
XString::~XString()
XString::XString(entry_x8)
return XString::~XString()
