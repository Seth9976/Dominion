// 函数: _Z15StoreItemUpdate9UI2Handle
// 地址: 0x9c6668
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, StoreItemClick)
GameSpecific_UpdateStoreItem(zx.q(x19), gStoreItemDlg + 0x10)
DLC* x0_2 = GameSepcific_GetDlcDef(gStoreItemDlg + 0x10)
int32_t x0_3 = ProfileDLCState(x0_2)
int32_t x8 = *(gStoreItemDlg + 0x10)
int32_t var_88
int32_t var_50
XString var_48
int32_t* var_38
int64_t* x1_5

if (x0_3 == 1 && x8 == 3)
    GetBundleInfo(GetCurrentBundleDef(), &var_88)
    int32_t var_7c
    
    if (var_7c == 1)
        uint64_t x8_2 = zx.q(var_88)
        
        if (x8_2.d u> 6)
            goto label_9c6f54
        
        int64_t* x1_3 = &data_11cf908
        int32_t var_84
        int32_t var_80
        char var_78
        int64_t var_68
        int64_t var_60
        char var_58
        
        switch (x8_2)
            case 2
                UI2SetState(zx.q(x19), &data_11cf9e0, 0xffffffff, 0)
                
                if (var_84 != 0)
                    UI2SetState(zx.q(x19), &data_11cfc20, 0xffffffff, 0)
                    XStringFromInt(var_84)
                    XStringFromInt(var_80)
                    DoTranslateWithReplacements("dom_ui_store_bundle_owned_expansions", "[N]", 
                        &var_38, "[M]", &var_48)
                    XString::~XString()
                    XString::~XString()
                    UI2SetText(zx.q(x19), &data_11cfc38, &var_50, 0xffffffff)
                    XString::~XString()
                
                if (zx.d(var_78) == 0)
                    x1_3 = &data_11cfc80
                else
                    UI2SetState(zx.q(x19), &data_11cfbd8, 0xffffffff, 0)
                    FormatCurrency(&var_58, var_60 - var_68, zx.q(GetCurrentLanguage()))
                    UI2SetText(zx.q(x19), &data_11cfbf0, &var_38, 0xffffffff)
                    XString::~XString()
                    x1_3 = &data_11cfc80
            case 3
                UI2SetState(zx.q(x19), &data_11cf9e0, 0xffffffff, 0)
                UI2SetState(zx.q(x19), &data_11cfc20, 0xffffffff, 0)
                XStringFromInt(var_84)
                XStringFromInt(var_80)
                DoTranslateWithReplacements("dom_ui_store_bundle_owned_expansions", "[N]", &var_38, 
                    "[M]", &var_48)
                XString::~XString()
                XString::~XString()
                UI2SetText(zx.q(x19), &data_11cfc38, &var_50, 0xffffffff)
                XString::~XString()
                
                if (zx.d(var_78) == 0)
                    x1_3 = &data_11cfc98
                else
                    UI2SetState(zx.q(x19), &data_11cfbd8, 0xffffffff, 0)
                    FormatCurrency(&var_58, var_60 - var_68, zx.q(GetCurrentLanguage()))
                    UI2SetText(zx.q(x19), &data_11cfbf0, &var_38, 0xffffffff)
                    XString::~XString()
                    x1_3 = &data_11cfc98
            case 4
                UI2SetState(zx.q(x19), &data_11cfc20, 0xffffffff, 0)
                XStringFromInt(var_84)
                XStringFromInt(var_80)
                DoTranslateWithReplacements("dom_ui_store_bundle_owned_expansions", "[N]", &var_38, 
                    "[M]", &var_48)
                XString::~XString()
                XString::~XString()
                UI2SetText(zx.q(x19), &data_11cfc38, &var_50, 0xffffffff)
                XString::~XString()
                x1_3 = &data_11cfc50
            case 5
                UI2SetState(zx.q(x19), &data_11cf9e0, 0xffffffff, 0)
                UI2SetState(zx.q(x19), &data_11cfc20, 0xffffffff, 0)
                XStringFromInt(var_84)
                XStringFromInt(var_80)
                DoTranslateWithReplacements("dom_ui_store_bundle_owned_expansions", "[N]", &var_38, 
                    "[M]", &var_48)
                XString::~XString()
                XString::~XString()
                UI2SetText(zx.q(x19), &data_11cfc38, &var_50, 0xffffffff)
                XString::~XString()
                x1_3 = &data_11cfc80
            case 6
                UI2SetState(zx.q(x19), &data_11cfc20, 0xffffffff, 0)
                XStringFromInt(var_84)
                XStringFromInt(var_80)
                DoTranslateWithReplacements("dom_ui_store_bundle_owned_expansions", "[N]", &var_38, 
                    "[M]", &var_48)
                XString::~XString()
                XString::~XString()
                UI2SetText(zx.q(x19), &data_11cfc38, &var_50, 0xffffffff)
                XString::~XString()
                x1_3 = &data_11cfc68
        
        UI2SetState(zx.q(x19), x1_3, 0xffffffff, 0)
    
    x8 = *(gStoreItemDlg + 0x10)
label_9c6b8c:
    
    if (x8 == 0 && *x0_2 == 2)
        UI2SetState(zx.q(x19), &data_11cf9e0, 0xffffffff, 0)
    
    if ((DLCMissingRequirements(zx.q(*x0_2)) & 1) != 0)
        x1_5 = &data_11cf950
        goto label_9c6bc8
    
    UI2SetState(zx.q(x19), &data_11cf920, 0xffffffff, 0)
    XString::XString()
    
    if ((GameCenterGetPrice(x0_2, &var_88) & 1) != 0)
        UI2SetState(zx.q(x19), &data_11cf9b0, 0xffffffff, 0)
        UI2SetText(zx.q(x19), &data_11cf9c8, &var_88, 0xffffffff)
    
    XString::~XString()
    goto label_9c6c48

if (x0_3 u> 6)
label_9c6f54:
    pthread_kill(pthread_self(), 6)
    int64_t x0_63
    Vec2* x1_15
    x0_63, x1_15 = XNoReturn()
    return OffToLeft(x0_63, x1_15) __tailcall

switch (x0_3)
    case 0
        x1_5 = &data_11cf908
        goto label_9c6bc8
    case 1
        goto label_9c6b8c
    case 2, 5
        x1_5 = &data_11cf8d8
    label_9c6bc8:
        UI2SetState(zx.q(x19), x1_5, 0xffffffff, 0)
    label_9c6c48:
        UI2SetState(zx.q(x19), *(x0_2 + 0x38), 0xffffffff, 0)
        char x20_2 = 1
        GameSpecific_Translation(0, *(x0_2 + 0x40), 1, 0)
        UI2SetText(zx.q(x19), &data_11cfbc0, &var_48, 0xffffffff)
        
        if (zx.d(*gStoreItemDlg) == 0)
            UI2SetState(zx.q(x19), &data_11cfba8, 0xffffffff, 0)
            x20_2 = (zx.d(*gStoreItemDlg) != 0 ? 1 : 0).b
        
        int128_t v0
        v0.d = *gSecondsPerUpdate
        char var_90 = x20_2
        CardsetUpdate(*(gStoreItemDlg + 8), zx.q(x19), "tblCards", 0, 0x32c8, zx.q(x19), 
            "tbl_zoom", 0x36ba, v0)
        
        if ((CardsetIsZoomed(*(gStoreItemDlg + 8), &var_50) & 1) != 0)
            UI2SetState(zx.q(x19), &data_11cfb60, 0xffffffff, 0)
            int32_t x8_10 = var_50
            
            if ((x8_10 & 2) != 0)
                UI2SetState(zx.q(x19), &data_11cfb78, 0xffffffff, 0)
                x8_10 = var_50
            
            if ((x8_10 & 4) != 0)
                UI2SetState(zx.q(x19), &data_11cfb90, 0xffffffff, 0)
        
        uint64_t x0_55 = zx.q(*(gStoreItemDlg + 0x10))
        
        if (x0_55.d == 3)
            UI2SetState(zx.q(x19), &data_11cf0f8, 0xffffffff, 0)
        else
            int32_t x0_56 = GameSpecific_GetDlcs(x0_55, &var_88)
            int32_t i
            int32_t* x9_4
            int64_t x10_2
            void* x11_3
            int64_t x12_2
            
            if (x0_56 s>= 1)
                x9_4 = var_88.q
                i = *(gStoreItemDlg + 0x14)
                x12_2 = 0
                x10_2 = -0x100000000
                x11_3 = x9_4 - 0x7c
                
                while (*(x11_3 + 0x7c) != i)
                    x12_2 += 1
                    x10_2 += 0x100000000
                    x11_3 += 0x80
                    
                    if (zx.q(x0_56) == x12_2)
                        goto label_9c6de8
            
            if (x0_56 s< 1 || x12_2.d s< 1)
            label_9c6de8:
                GameSpecific_GetDlcs(3, &var_38)
                
                if (*(gStoreItemDlg + 0x14) == *var_38)
                    UI2SetState(zx.q(x19), &data_11cf0f8, 0xffffffff, 0)
            else
                int64_t x12_3 = x12_2 + 1
                
                while ((*x11_3 | 4) == 7)
                    x12_3 -= 1
                    x10_2 += -0x100000000
                    x11_3 -= 0x80
                    
                    if (x12_3 s<= 1)
                        goto label_9c6de8
                
                if (i == *(x9_4 + (x10_2 s>> 0x19)))
                    UI2SetState(zx.q(x19), &data_11cf0f8, 0xffffffff, 0)
        
        int32_t x8_13 = *(gStoreItemDlg + 0x10)
        uint64_t x0_58
        
        if (x8_13 == 3)
            x0_58 = 0
        else
            x0_58 = zx.q(x8_13)
        
        int32_t x0_59 = GameSpecific_GetDlcs(x0_58, &var_88)
        int64_t x8_14 = 0xffffffff
        
        if (x0_59 s>= 1 && *(gStoreItemDlg + 0x10) != 3)
            int32_t* x9_7 = var_88.q
            x8_14 = 0
            
            while (*x9_7 != *(gStoreItemDlg + 0x14))
                x8_14 += 1
                x9_7 = &x9_7[0x20]
                
                if (zx.q(x0_59) == x8_14)
                    x8_14 = 0xffffffff
                    break
        
        int32_t x8_15
        int64_t x9_9
        int64_t x10_5
        
        if (x8_14.d + 1 s< x0_59)
            x9_9 = var_88.q
            int64_t x13_2 = sx.q(x8_14.d)
            x10_5 = 0x100000000 + (x13_2 << 0x20)
            x8_15 = not.d(x8_14.d)
            int32_t* x13_4 = x9_9 + (x13_2 << 7) + 0x84
            
            while ((*x13_4 | 4) == 7)
                x8_15 -= 1
                x10_5 += 0x100000000
                x13_4 = &x13_4[0x20]
                
                if (neg.d(x0_59) == x8_15)
                    goto label_9c6ee0
        
        if (x8_14.d + 1 s>= x0_59 || x8_15 == 1)
        label_9c6ee0:
            
            if (*(gStoreItemDlg + 0x14) == *(gStoreItemDlg + 0x14))
                UI2SetState(zx.q(x19), &data_11cf110, 0xffffffff, 0)
        else if (*(gStoreItemDlg + 0x14) == *(x9_9 + (x10_5 s>> 0x19)))
            UI2SetState(zx.q(x19), &data_11cf110, 0xffffffff, 0)
        
        return XString::~XString()
    case 3
        goto label_9c6f54
    case 4
        x1_5 = &data_11cf938
        goto label_9c6bc8
    case 6
        x1_5 = &data_11cf8f0
        goto label_9c6bc8
