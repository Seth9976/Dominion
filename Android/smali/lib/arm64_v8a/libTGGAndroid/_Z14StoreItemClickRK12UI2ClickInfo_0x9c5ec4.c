// 函数: _Z14StoreItemClickRK12UI2ClickInfo
// 地址: 0x9c5ec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_60
XString::XString(&var_60)

if ((operator==(&var_60, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_9c5f20
else
    XString::~XString()
label_9c5f20:
    int32_t x8_1 = *(gStoreItemDlg + 0x1c)
    *(gGameDlgManager + 0xc8) = *(gStoreItemDlg + 0x18)
    
    if (x8_1 != 0)
        *(gGameDlgManager + 0x118) = x8_1

XString::XString(&var_60)
int32_t x0_5 = operator==(&var_60, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    if (*(gStoreItemDlg + 0x10) != 3)
        StoreItemAction(gStoreItemDlg + 0x10)
    else
        GetBundleInfo(GetCurrentBundleDef(), &var_60)
        int32_t x8_3 = var_60
        
        if (x8_3 == 6)
            *(gGameDlgManager + 0x118) = 0x20
            L("dom_ui_store_confirm_bundle_steam_title", nullptr)
            XString::operator=(gGameDlgManager + 0x1b8)
            L("dom_ui_store_confirm_bundle_steam_body", nullptr)
            XString::operator=(gGameDlgManager + 0x1c0)
            XString::operator=(gGameDlgManager + 0x1c8)
            XString::operator=(gGameDlgManager + 0x1d0)
            *(gGameDlgManager + 0x1d8) = sub_9cbf34
            *(gGameDlgManager + 0x1e0) = 0
        else if (x8_3 != 4)
            StoreItemAction(gStoreItemDlg + 0x10)
        else
            *(gGameDlgManager + 0x118) = 0x20
            L("dom_ui_store_confirm_bundle_discount_unlikely_title", nullptr)
            XString::operator=(gGameDlgManager + 0x1b8)
            L("dom_ui_store_confirm_bundle_discount_unlikely_body", nullptr)
            XString::operator=(gGameDlgManager + 0x1c0)
            XString::operator=(gGameDlgManager + 0x1c8)
            XString::operator=(gGameDlgManager + 0x1d0)
            *(gGameDlgManager + 0x1d8) = sub_9cbf24
            *(gGameDlgManager + 0x1e0) = 0

XString::XString(&var_60)
int32_t x0_22 = operator==(&var_60, *(arg1 + 8))
XString::~XString()

if ((x0_22 & 1) != 0)
    DLC* x0_24 = GameSepcific_TryGetDlcDef(gStoreItemDlg + 0x10)
    
    if (x0_24 == 0)
    label_9c63dc:
        pthread_kill(pthread_self(), 6)
        int32_t x0_51
        int32_t x1_28
        x0_51, x1_28 = XNoReturn()
        return CalcOwnedBundleItemString(x0_51, x1_28) __tailcall
    
    int32_t x0_26
    
    if (*(gStoreItemDlg + 0x10) != 1)
        x0_26 = GameCenterHasDLC(x0_24)
    
    if ((*(gStoreItemDlg + 0x10) == 1 || (x0_26 & 1) == 0) && *(x0_24 + 4) u> 1)
        goto label_9c63dc
    
    *gStoreItemDlg ^= 1

XString::XString(&var_60)
int32_t x0_29 = operator==(&var_60, *(arg1 + 8))
XString::~XString()

if ((x0_29 & 1) != 0)
    CardsetZoom(*(gStoreItemDlg + 8), 0xffffffff)

XString::XString(&var_60)
int32_t x0_33 = operator==(&var_60, *(arg1 + 8))
XString::~XString()

if ((x0_33 & 1) != 0)
    CardsetSwipe(*(gStoreItemDlg + 8), 2)

XString::XString(&var_60)
int32_t x0_37 = operator==(&var_60, *(arg1 + 8))
XString::~XString()

if ((x0_37 & 1) == 0)
    XString::XString(&var_60)
    int32_t x0_41 = operator==(&var_60, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_41 & 1) == 0)
        XString::XString(&var_60)
        int32_t x0_46 = operator==(&var_60, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_46 & 1) != 0)
            uint64_t x0_47 = zx.q(*(gStoreItemDlg + 0x10))
            int32_t x8_13
            int32_t x20_9
            
            if (x0_47.d != 3)
                int32_t x0_48 = GameSpecific_GetDlcs(x0_47, &var_60)
                int32_t* x8_14
                int64_t x9_9
                void* x10_5
                int64_t x11_3
                
                if (x0_48 s>= 1)
                    x8_14 = var_60.q
                    x11_3 = 0
                    x9_9 = -0x100000000
                    x10_5 = x8_14 - 0x7c
                    
                    while (*(x10_5 + 0x7c) != *(gStoreItemDlg + 0x14))
                        x11_3 += 1
                        x9_9 += 0x100000000
                        x10_5 += 0x80
                        
                        if (zx.q(x0_48) == x11_3)
                            goto label_9c6394
                
                if (x0_48 s< 1 || x11_3.d s< 1)
                label_9c6394:
                    x20_9 = 3
                    int32_t* var_28
                    GameSpecific_GetDlcs(3, &var_28)
                    x8_13 = *var_28
                else
                    int64_t x11_4 = x11_3 + 1
                    
                    while ((*x10_5 | 4) == 7)
                        x11_4 -= 1
                        x9_9 += -0x100000000
                        x10_5 -= 0x80
                        
                        if (x11_4 s<= 1)
                            goto label_9c6394
                    
                    x20_9 = *(gStoreItemDlg + 0x10)
                    x8_13 = *(x8_14 + (x9_9 s>> 0x19))
            else
                x8_13 = *(gStoreItemDlg + 0x14)
                x20_9 = 3
            
            *(gStoreItemDlg + 0x10) = zx.q(x20_9) | zx.q(x8_13) << 0x20
    else
        int32_t x8_9 = *(gStoreItemDlg + 0x10)
        int32_t x19_1
        
        x19_1 = x8_9 == 3 ? 0 : x8_9
        
        int32_t x0_43 = GameSpecific_GetDlcs(zx.q(x19_1), &var_60)
        int32_t x8_10 = *(gStoreItemDlg + 0x10)
        int64_t x9_1 = 0xffffffff
        
        if (x0_43 s>= 1 && x8_10 != 3)
            int32_t* x10_2 = var_60.q
            x9_1 = 0
            
            while (*x10_2 != *(gStoreItemDlg + 0x14))
                x9_1 += 1
                x10_2 = &x10_2[0x20]
                
                if (zx.q(x0_43) == x9_1)
                    x9_1 = 0xffffffff
                    break
        
        int64_t x10_3 = var_60.q
        int32_t x11_2 = x9_1.d + 1
        
        if (x11_2 s>= x0_43)
        label_9c6290:
            x11_2 = -1
        else
            int32_t* x9_4 = x10_3 + (sx.q(x9_1.d) << 7) + 0x84
            
            while ((*x9_4 | 4) == 7)
                x11_2 += 1
                x9_4 = &x9_4[0x20]
                
                if (x0_43 == x11_2)
                    goto label_9c6290
        
        int64_t (* x9_7)()
        
        if (x11_2 == 0xffffffff)
            x9_7 = gStoreItemDlg + 0x14
        else
            x9_7 = x10_3 + (sx.q(x11_2) << 7)
        
        int32_t x8_11
        
        x8_11 = x11_2 == 0xffffffff ? x8_10 : x19_1
        
        *(gStoreItemDlg + 0x10) = zx.q(x8_11) | zx.q(*x9_7) << 0x20
else
    CardsetSwipe(*(gStoreItemDlg + 8), 4)

return 0
