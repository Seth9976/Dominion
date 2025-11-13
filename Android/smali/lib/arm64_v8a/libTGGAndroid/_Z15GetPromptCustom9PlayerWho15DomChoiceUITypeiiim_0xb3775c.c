// 函数: _Z15GetPromptCustom9PlayerWho15DomChoiceUITypeiiim
// 地址: 0xb3775c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = zx.q((*gTestStyleOffset + arg2) s% 0x135)
char* x9_3 = *(mulu.dp.d(x27.d, 0x30) + &data_114a068)
XString* entry_x8

if (zx.d(*x9_3) == 0)
    return XString::XString(entry_x8) __tailcall

int32_t x21 = *(x27 * 0x30 + 0x114a078)
bool z

if (x21 == 4)
    z = arg5 == 0
else
    z = false

int32_t x22

x22 = z ? arg4 : arg5

char const* const x8_1

if (x22 == 0)
    x8_1 = "dom_prompt_way_consider"
else
    x8_1 = "dom_prompt_way_reconsider"

char* x24

x24 = x27.d == 0xbe ? x8_1 : x9_3

int32_t x0 = GetCurrentLanguage()
int32_t x0_1 = GetLocalControlScheme()
Translation* x23_1

if (x0_1 == 1)
    XFormatString("%s_drag")
    x23_1 = LookupTranslationSafe(XString::operator char const*(), zx.q(x0))
    XString::~XString()

if (x0_1 != 1 || x23_1 == 0)
    Translation* x0_5 = LookupTranslationSafe(x24, zx.q(x0))
    x23_1 = x0_5
    
    if (x0_5 == 0)
        return XString::XString(entry_x8)

void var_58
XString::XString(&var_58)

if (x21 == 4)
    XFormatString("N=%d")
    XString::XString()
    char* x0_7 = XString::operator char const*()
    void var_68
    
    if ((XString::IsEmpty() & 1) == 0
            && (HasMod(XString::operator char const*(), x0_7, &var_68) & 1) != 0)
        XString::operator=(&var_58)
    
    XString::~XString()
    XString::~XString()

int32_t x0_15 = TranslationGetParticleStyle(x23_1, 1)
char* x24_2 = *(x27 * 0x30 + 0x114a070)

if (x24_2 != 0)
    ComputeReplacement(zx.q(x21), x22, zx.q(x0_15))
    StringReplace(XString::operator char const*(), x24_2, XString::operator char const*())
    XString::operator=(&var_58)
    XString::~XString()
    XString::~XString()

char* x21_2 = *(x27 * 0x30 + 0x114a080)

if (x21_2 != 0)
    ComputeReplacement(zx.q(*(x27 * 0x30 + 0x114a088)), arg6, zx.q(x0_15))
    StringReplace(XString::operator char const*(), x21_2, XString::operator char const*())
    XString::operator=(&var_58)
    XString::~XString()
    XString::~XString()

XString::XString(entry_x8)
return XString::~XString()
