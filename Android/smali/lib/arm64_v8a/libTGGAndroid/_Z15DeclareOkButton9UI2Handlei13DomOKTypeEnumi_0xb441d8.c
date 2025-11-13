// 函数: _Z15DeclareOkButton9UI2Handlei13DomOKTypeEnumi
// 地址: 0xb441d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(arg3)
char* x23 = *((x25 << 5) + 0x114dad8)

if (x23 == 0 || zx.d(*x23) == 0)
    return 

int32_t x22_1 = arg3
int64_t x0_2 = LookupTranslationSafe(x23, zx.q(GetCurrentLanguage()))

if (x0_2 != 0)
    XString::XString()
    
    if (x0_2 == 0)
        goto label_b44288
    
    goto label_b4424c

int64_t x24_1 = LookupTranslationSafe(x23, 1)
XString::XString()
XString var_48

if (x24_1 != 0)
label_b4424c:
    XString::operator=(&var_48)
    
    if (x22_1 == 0x32)
    label_b442b8:
        char const* const x0_8
        char* x22_3
        char* x23_1
        
        if (arg4 s> 0xa)
            char* x0_9 = XString::operator char const*()
            x22_3 = *((x25 << 5) + 0x114dae0)
            x23_1 = x0_9
            x0_8 = "%d{coin_N_ok}"
        else
            char* x0_7 = XString::operator char const*()
            x22_3 = *((x25 << 5) + 0x114dae0)
            x23_1 = x0_7
            x0_8 = "{coin_%d_ok}"
        
        XFormatString(x0_8)
        StringReplace(x23_1, x22_3, XString::operator char const*())
        XString::operator=(&var_48)
        XString::~XString()
        XString::~XString()
else
label_b44288:
    XFormatString("missing{br}%s")
    XString::operator=(&var_48)
    XString::~XString()
    
    if (x22_1 == 0x32)
        goto label_b442b8

UI2SetText(zx.q(arg1.d), &data_1831788, &var_48, arg2)
XString::~XString()
