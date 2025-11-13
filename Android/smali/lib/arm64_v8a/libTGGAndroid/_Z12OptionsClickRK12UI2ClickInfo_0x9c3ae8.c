// 函数: _Z12OptionsClickRK12UI2ClickInfo
// 地址: 0x9c3ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8
int64_t var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_9c3b44
else
    XString::~XString()
label_9c3b44:
    
    if (*(gGameDlgManager + 0x2c) != 0x27)
        if (*(gGameDlgManager + 0x3c) != 0x27 || *(gGameDlgManager + 0x40) == 0)
            *(gGameDlgManager + 0xc8) = 4
        else
            GameDlgManagerDismiss(5, false)
    else if (*(gGameDlgManager + 0x30) != 0)
        GameDlgManagerDismiss(5, false)
    else
        *(gGameDlgManager + 0xc8) = 4

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    void* x0_6 = GetActiveProfile()
    *(x0_6 + 0x432c) ^= 2
    SaveProfiles()

XString::XString(&var_28)
int32_t x0_9 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_9 & 1) != 0)
    void* x0_10 = GetActiveProfile()
    *(x0_10 + 0x432c) ^= 1
    SaveProfiles()

XString::XString(&var_28)
int32_t x0_13 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_13 & 1) != 0)
    *(GetActiveProfile() + 0x4290) ^= 1
    SaveProfiles()

XString::XString(&var_28)
int32_t x0_18 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_18 & 1) != 0)
    *(GetActiveProfile() + 0x432c) = 0
    SaveProfiles()

XString::XString(&var_28)
int32_t x0_22 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_22 & 1) != 0)
    *(gOptionsDlg + 0x10) = 0

XString::XString(&var_28)
int32_t x0_25 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_25 & 1) != 0)
    *(gOptionsDlg + 0x10) = 1

XString::XString(&var_28)
int32_t x0_28 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_28 & 1) != 0)
    uint64_t x20_9 = zx.q(*(arg1 + 0x10))
    
    if ((x20_9.d & 0x80000000) == 0 && x20_9.d s< LocalizationGetSupportedTranslations(&var_28))
        *(GetLocalSettings() + 0x10) = *(var_28 + (x20_9 << 4))
        SetLanguage(zx.q(*(GetLocalSettings() + 0x10)))
        SaveLocalSettings()
        GameSpecific_NotifyLanguageToggle()
    
    ClearTaptip()

XString::XString(&var_28)
int32_t x0_36 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_36 & 1) != 0)
    void* x0_37 = GetLocalSettings()
    *(x0_37 + 0xc) = *(x0_37 + 0xc) != 1 ? 1 : 0
    SaveLocalSettings()

XString::XString(&var_28)
int32_t x0_40 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_40 & 1) != 0)
    void* x0_41 = GetLocalSettings()
    int32_t x8_5 = *(x0_41 + 8)
    int32_t x8_6
    
    if (x8_5 s> 0)
        x8_6 = 0
    else
        x8_6 = x8_5 + 1
    
    *(x0_41 + 8) = x8_6
    SaveLocalSettings()

XString::XString(&var_28)
int32_t x0_44 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_44 & 1) != 0)
    void* x0_45 = GetLocalSettings()
    int32_t x8_7 = *(x0_45 + 0x34)
    int32_t x8_8
    
    if (x8_7 s> 0)
        x8_8 = 0
    else
        x8_8 = x8_7 + 1
    
    *(x0_45 + 0x34) = x8_8
    SaveLocalSettings()

XString::XString(&var_28)
int32_t x0_48 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_48 & 1) != 0)
    void* x0_49 = GetLocalSettings()
    *(x0_49 + 0x28) = (*(x0_49 + 0x28) + 1) s% 3
    SaveLocalSettings()
    GameSpecific_NotifyTextToggle()

XString::XString(&var_28)
int32_t x0_52 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_52 & 1) != 0)
    ShowTaptip(zx.q(*arg1))

XString::XString(&var_28)
int32_t x0_56 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_56 & 1) != 0)
    void* x0_57 = GetLocalSettings()
    int32_t x8_12
    
    if (GetLocalControlScheme() != 2)
        x8_12 = 2
    else
        x8_12 = 1
    
    *(x0_57 + 0x24) = x8_12
    SaveLocalSettings()

XString::XString(&var_28)
int32_t x0_61 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_61 & 1) != 0)
    ToggleWidescreen()

XString::XString(&var_28)
int32_t x0_64 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_64 & 1) != 0)
    ToggleFullscreen()

XString::XString(&var_28)
int32_t x0_67 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_67 & 1) != 0)
    void* x0_68 = GetLocalSettings()
    *(x0_68 + 0x30) ^= 1
    SaveLocalSettings()

XString::XString(&var_28)
int32_t x0_71 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_71 & 1) != 0)
    void* x0_72 = GetLocalSettings()
    *(x0_72 + 0x31) ^= 1
    SaveLocalSettings()

XString::XString(&var_28)
int32_t x0_75 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_75 & 1) != 0)
    char* x0_78 = UI2GetName(UI2GetParent(zx.q(*arg1)))
    XString::XString(&var_28)
    int32_t x0_81 = operator==(x0_78, &var_28)
    XString::~XString()
    int32_t x21_2 = *(arg1 + 0x10)
    int32_t* x0_82 = GetLocalSettings()
    int32_t* x20_25
    void* x21_4
    float v1_1
    
    if ((x0_81 & 1) == 0)
        float temp0_3 = vrndp_f32(x0_82[1] f* fconvert.s(8f))
        
        if (temp0_3 < 0f)
            v1_1 = fconvert.s(-0.5f)
        else
            v1_1 = fconvert.s(0.5f)
        
        uint32_t temp0_4
        
        if (x21_2 == 0)
            temp0_4 = vcvts_s32_f32(temp0_3 + v1_1)
        
        if (x21_2 != 0 || temp0_4 s< 1)
            v8.d = float.s(x21_2 + 1) * fconvert.s(0.125f)
            *(gOptionsDlg + 8) = 1
        else
            v8.d = 0f
            *(gOptionsDlg + 8) = 0x100000001
        
        int32_t* x0_84 = GetLocalSettings()
        x20_25 = x0_84
        x21_4 = &x0_84[1]
        *x21_4 = v8.d
    else
        float temp0_1 = vrndp_f32(*x0_82 * fconvert.s(8f))
        
        if (temp0_1 < 0f)
            v1_1 = fconvert.s(-0.5f)
        else
            v1_1 = fconvert.s(0.5f)
        
        uint32_t temp0_2
        
        if (x21_2 == 0)
            temp0_2 = vcvts_s32_f32(temp0_1 + v1_1)
        
        if (x21_2 != 0 || temp0_2 s< 1)
            v8.d = float.s(x21_2 + 1) * fconvert.s(0.125f)
            *gOptionsDlg = 1
        else
            v8.d = 0f
            *gOptionsDlg = 0x100000001
        
        int32_t* x0_83 = GetLocalSettings()
        int32_t* x21_3 = x0_83
        x20_25 = x0_83
        *x21_3 = v8.d
        x21_4 = &x21_3[1]
    SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_BTN_SLIDER)
    SoundSetGlobalVolume(*x21_4, *x20_25)
    SaveLocalSettings()

GameSpecific_OptionsClick(arg1)
return 0
