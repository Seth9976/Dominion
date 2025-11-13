// 函数: _Z16CalcReplacements8LanguagePKcS1_S1_b
// 地址: 0xba68cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_c4 = arg1
int32_t* entry_x8
*entry_x8 = 0
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
void* x21_2
int32_t x27_1

if (stristr(arg2, "_btn_") == 0)
    if (stristr(arg2, "_power_") != 0)
        x21_2 = &entry_x8[0x22]
        x27_1 = 1
    else if (stristr(arg2, "_ability_") == 0)
        int64_t x0_127 = stristr(arg2, "twist_")
        int64_t x0_129
        
        if (x0_127 != 0)
            x0_129 = stristr(arg2, "_desc")
        
        if (x0_127 != 0 && x0_129 != 0)
            x21_2 = &entry_x8[0x22]
            x27_1 = 1
        else if (stristr(arg2, "dom_rules_") == 0)
            if (stristr(arg2, "dom_smartplay_") == 0)
                if (stristr(arg2, "dom_card_achievement_") == 0)
                    int64_t x0_137 = stristr(arg2, "dom_taptip_")
                    int64_t x0_139
                    int64_t x0_145
                    
                    if (x0_137 == 0)
                        x0_139 = stristr(arg2, "stamp_")
                        
                        if (x0_139 == arg2)
                            x0_145 = stristr(arg2, "_desc")
                    
                    if (x0_137 != 0 || (x0_139 == arg2 && x0_145 != 0))
                        x21_2 = &entry_x8[0x22]
                        x27_1 = 2
                    else
                        x21_2 = &entry_x8[0x22]
                        
                        if (stristr(arg2, "dom_tut_") == 0)
                            x27_1 = 0
                        else if (stristr(arg2, "_header") != 0)
                            x27_1 = 4
                        else
                            x27_1 = 3
                else
                    x21_2 = &entry_x8[0x22]
                    x27_1 = 7
            else
                x21_2 = &entry_x8[0x22]
                x27_1 = 6
        else
            x21_2 = &entry_x8[0x22]
            x27_1 = 5
    else
        x21_2 = &entry_x8[0x22]
        x27_1 = 1
else
    x21_2 = &entry_x8[0x22]
    x27_1 = 8

*entry_x8 = x27_1
void* x28_1
uint64_t x8

if ((HasMod(arg4, "small", nullptr) & 1) == 0)
    x8 = zx.q(x27_1 - 1)
    x28_1 = &entry_x8[0x10]
    
    if (x8.d u<= 7)
        jump(&data_ba6aa0 + (zx.q(*(&data_7ef168 + (x8 << 1))) << 2))
else
    stristr(arg2, "_ability_")
    x8 = zx.q(x27_1 - 1)
    x28_1 = &entry_x8[0x10]
    
    if (x8.d u<= 7)
        jump(&data_ba6aa0 + (zx.q(*(&data_7ef168 + (x8 << 1))) << 2))
XString::operator=(&entry_x8[0x1a])
XString::operator=(&entry_x8[0x16])
XString::operator=(&entry_x8[0x1e])
XString::operator=(&entry_x8[2])
XString::operator=(&entry_x8[4])
XString::operator=(&entry_x8[6])
XString::operator=(&entry_x8[8])
XString::operator=(&entry_x8[0xa])
XString::operator=(&entry_x8[0xc])
XString::operator=(&entry_x8[0x12])
XString::operator=(&entry_x8[0x14])
XString::operator=(&entry_x8[0xe])
XString::operator=(x28_1)
XString::operator=(&entry_x8[0x24])
XString::operator=(&entry_x8[0x26])
XString::operator=(&entry_x8[0x28])

if ((var_c4 & 0xfffffffc) == 0x10)
    XString::operator=(&entry_x8[0xa])

char var_70
XString::XString(&var_70)

if (var_c4 - 0x10 u<= 3)
    (&data_1153ff0)[sx.q(var_c4 - 0x10)]
    XString::operator=(&var_70)

char* x0_49 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_49)
XString::operator=(&entry_x8[0x1c])
XString::~XString()
char* x0_53 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_53)
XString::operator=(&entry_x8[0x1a])
XString::~XString()
char* x0_57 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_57)
XString::operator=(&entry_x8[0x16])
XString::~XString()
char* x0_61 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_61)
XString::operator=(&entry_x8[0x18])
XString::~XString()
char* x0_65 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_65)
XString::operator=(&entry_x8[0x1e])
XString::~XString()
char* x0_69 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_69)
XString::operator=(&entry_x8[2])
XString::~XString()
char* x0_73 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_73)
XString::operator=(&entry_x8[4])
XString::~XString()
char* x0_77 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_77)
XString::operator=(&entry_x8[6])
XString::~XString()
char* x0_81 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_81)
XString::operator=(&entry_x8[8])
XString::~XString()
char* x0_85 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_85)
XString::operator=(&entry_x8[0xa])
XString::~XString()
char* x0_89 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_89)
XString::operator=(&entry_x8[0xc])
XString::~XString()
char* x0_93 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_93)
XString::operator=(&entry_x8[0x12])
XString::~XString()
char* x0_97 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_97)
XString::operator=(&entry_x8[0x14])
XString::~XString()
char* x0_101 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_101)
XString::operator=(&entry_x8[0xe])
XString::~XString()
char* x0_105 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_105)
XString::operator=(x28_1)
XString::~XString()
char* x0_109 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_109)
XString::operator=(&entry_x8[0x24])
XString::~XString()
char* x0_113 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_113)
XString::operator=(&entry_x8[0x26])
XString::~XString()
char* x0_117 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_117)
XString::operator=(x21_2)
XString::~XString()
char* x0_121 = XString::operator char const*()
StringReplace(XString::operator char const*(), "$LANG$", x0_121)
XString::operator=(&entry_x8[0x28])
XString::~XString()
return XString::~XString()
