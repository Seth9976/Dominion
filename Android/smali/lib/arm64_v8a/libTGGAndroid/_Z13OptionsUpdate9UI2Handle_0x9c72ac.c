// 函数: _Z13OptionsUpdate9UI2Handle
// 地址: 0x9c72ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, OptionsClick)
SymbolMapLookupName(0x1122a30, *(GetLocalSettings() + 0xc))
char var_68
XString::XString(&var_68)
UI2SetText(zx.q(x19), &data_11cfcb0, &var_68, 0xffffffff)
XString::~XString()
UI2SetState(zx.q(x19), &data_11cfe00, 0xffffffff, 0)
UI2SetState(zx.q(x19), &data_11cff50, 0xffffffff, 0)
int32_t x8 = *(gOptionsDlg + 0x10)
int64_t* x1_3

if (x8 == 0)
    x1_3 = &data_11cfed8
label_9c7378:
    UI2SetState(zx.q(x19), x1_3, 0xffffffff, 0)
    int32_t x8_1 = *(GetLocalSettings() + 0x28)
    
    if (x8_1 == 0)
        goto label_9c73c4
    
    int64_t (* const x1_4)()
    
    if (x8_1 == 1)
        x1_4 = UIS_TEXT_LARGE
    label_9c73b8:
        UI2SetState(zx.q(x19), x1_4, 0xffffffff, 0)
    label_9c73c4:
        
        if (zx.d(*(GetActiveProfile() + 0x4290)) != 0)
            UI2SetState(zx.q(x19), &data_11cff08, 0xffffffff, 0)
        
        if ((zx.d(*(GetActiveProfile() + 0x432c)) & 1) == 0)
            if ((zx.d(*(GetActiveProfile() + 0x432c)) & 2) != 0)
                goto label_9c7460
            
            goto label_9c7404
        
        UI2SetState(zx.q(x19), &data_11cff20, 0xffffffff, 0)
        int32_t x0_13
        
        if ((zx.d(*(GetActiveProfile() + 0x432c)) & 2) != 0)
        label_9c7460:
            UI2SetState(zx.q(x19), &data_11cff38, 0xffffffff, 0)
            x0_13 = GetLocalControlScheme()
            
            if (x0_13 != 1)
                goto label_9c7410
            
            goto label_9c7474
        
    label_9c7404:
        x0_13 = GetLocalControlScheme()
        int64_t* x1_5
        
        if (x0_13 == 1)
        label_9c7474:
            x1_5 = &data_11cfd40
        label_9c7484:
            UI2SetState(zx.q(x19), x1_5, 0xffffffff, 0)
            *(GetLocalSettings() + 0x30)
            XString::XString(&var_68)
            UI2SetText(zx.q(x19), &data_11cfcf8, &var_68, 0xffffffff)
            XString::~XString()
            *(GetLocalSettings() + 0x31)
            XString::XString(&var_68)
            UI2SetText(zx.q(x19), &data_11cfd10, &var_68, 0xffffffff)
            XString::~XString()
            
            if (*(GetClient() + 0x5068) == 2)
                UI2SetState(zx.q(x19), &data_11ce6d8, 0xffffffff, 0)
            
            XString::XString(&var_68)
            int32_t* var_70
            int32_t x0_28 = LocalizationGetSupportedTranslations(&var_70)
            
            if (x0_28 s>= 1)
                int64_t i = 0
                int32_t x20_1 = 0
                
                do
                    LocalizationGetLanaugageCode(zx.q(*(var_70 + i)))
                    XFormatString("dom_ui_options_language_%s")
                    StringReplace(XString::operator char const*(), "-", "_")
                    void var_78
                    XString::operator=(&var_78)
                    XString::~XString()
                    LookupTranslation(XString::operator char const*(), &data_793a18, 
                        zx.q(*(var_70 + i))) != 0 && XString::operator char const*() != 0
                    void var_80
                    XString::XString(&var_80)
                    UI2SetText(zx.q(x19), &data_11cff68, &var_80, x20_1)
                    UI2StateDecl* x1_11 = &data_11cfec0
                    int32_t x8_14 = *(var_70 + i) - 0x10
                    
                    if (x8_14 u<= 3)
                        x1_11 = (&data_1123180)[sx.q(x8_14)]
                    
                    UI2SetState(zx.q(x19), x1_11, x20_1, 0)
                    
                    if (*(var_70 + i) == GetCurrentLanguage())
                        XString::operator=(&var_68)
                    
                    XString::~XString()
                    XString::~XString()
                    i += 0x10
                    x20_1 += 1
                while (zx.q(x0_28) << 4 != i)
            
            UI2SetText(zx.q(x19), &data_11cff80, &var_68, 0xffffffff)
            XString::~XString()
            int32_t x0_43
            
            if (data_11ce568 == "sliderMusic" && data_11ce4f8 == x19 && zx.d(data_11ce478) != 0)
                x0_43 = UI2Exists(zx.q(data_11ce500))
            
            if (data_11ce568 != "sliderMusic" || data_11ce4f8 != x19 || zx.d(data_11ce478) == 0
                    || (x0_43 & 1) == 0)
                int32_t x0_45 = UI2GetHandle(zx.q(x19), "sliderMusic")
                data_11ce500 = x0_45
                
                if (x0_45 != 0)
                    data_11ce568 = "sliderMusic"
                    data_11ce4f8 = x19
                    data_11ce478 = 1
                    SliderUpdate(zx.q(x0_45), gOptionsDlg, *GetLocalSettings())
            else
                int32_t x20_2 = data_11ce500
                
                if (x20_2 != 0)
                    SliderUpdate(zx.q(x20_2), gOptionsDlg, *GetLocalSettings())
            
            int32_t x0_49
            
            if (data_11ce570 == "sliderEffects" && data_11ce508 == x19 && zx.d(data_11ce480) != 0)
                x0_49 = UI2Exists(zx.q(data_11ce510))
            
            if (data_11ce570 != "sliderEffects" || data_11ce508 != x19 || zx.d(data_11ce480) == 0
                    || (x0_49 & 1) == 0)
                int32_t x0_51 = UI2GetHandle(zx.q(x19), "sliderEffects")
                data_11ce510 = x0_51
                
                if (x0_51 != 0)
                    data_11ce570 = "sliderEffects"
                    data_11ce508 = x19
                    data_11ce480 = 1
                    SliderUpdate(zx.q(x0_51), gOptionsDlg + 8, *(GetLocalSettings() + 4))
            else
                int32_t x20_3 = data_11ce510
                
                if (x20_3 != 0)
                    SliderUpdate(zx.q(x20_3), gOptionsDlg + 8, *(GetLocalSettings() + 4))
            
            int32_t x0_55
            
            if (data_11ce578 == "btnWidescreen" && data_11ce518 == x19 && zx.d(data_11ce488) != 0)
                x0_55 = UI2Exists(zx.q(data_11ce520))
            
            int32_t x20_4
            
            if (data_11ce578 != "btnWidescreen" || data_11ce518 != x19 || zx.d(data_11ce488) == 0
                    || (x0_55 & 1) == 0)
                int32_t x0_57 = UI2GetHandle(zx.q(x19), "btnWidescreen")
                data_11ce520 = x0_57
                
                if (x0_57 != 0)
                    x20_4 = x0_57
                    data_11ce578 = "btnWidescreen"
                    data_11ce518 = x19
                    data_11ce488 = 1
                label_9c7888:
                    UI2StateDecl* x1_14
                    
                    if (*(GetLocalSettings() + 0x14) == 0)
                        x1_14 = &data_11cfda0
                    else
                        x1_14 = &data_11cfd88
                    
                    UI2SetState(zx.q(x20_4), x1_14, 0xffffffff, 0)
                    
                    if (zx.d(*(GetLocalSettings() + 0x18)) != 0)
                        UI2SetState(zx.q(x20_4), &data_11cfdb8, 0xffffffff, 0)
            else
                x20_4 = data_11ce520
                
                if (x20_4 != 0)
                    goto label_9c7888
            int64_t result
            
            if (data_11ce580 == "btnFullscreen" && data_11ce528 == x19 && zx.d(data_11ce490) != 0)
                result = UI2Exists(zx.q(data_11ce530))
            
            int32_t x20_5
            
            if (data_11ce580 != "btnFullscreen" || data_11ce528 != x19 || zx.d(data_11ce490) == 0
                    || (result.d & 1) == 0)
                result = UI2GetHandle(zx.q(x19), "btnFullscreen")
                data_11ce530 = result.d
                
                if (result.d == 0)
                    return result
                
                x20_5 = result.d
                data_11ce580 = "btnFullscreen"
                data_11ce528 = x19
                data_11ce490 = 1
            else
                x20_5 = data_11ce530
                
                if (x20_5 == 0)
                    return result
            
            UI2StateDecl* x1_15
            
            if (zx.d(*(GetLocalSettings() + 0x18)) == 0)
                x1_15 = &data_11cfda0
            else
                x1_15 = &data_11cfd88
            
            return UI2SetState(zx.q(x20_5), x1_15, 0xffffffff, 0)
        
    label_9c7410:
        
        if (x0_13 == 2)
            x1_5 = &data_11cfd58
            goto label_9c7484
    else if (x8_1 == 2)
        x1_4 = UIS_TEXT_JUMBO
        goto label_9c73b8
else if (x8 == 1)
    x1_3 = &data_11cfef0
    goto label_9c7378
pthread_kill(pthread_self(), 6)
XNoReturn()
return LoadingScreen::~LoadingScreen() __tailcall
