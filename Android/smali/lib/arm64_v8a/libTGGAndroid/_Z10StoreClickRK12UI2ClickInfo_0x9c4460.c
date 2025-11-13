// 函数: _Z10StoreClickRK12UI2ClickInfo
// 地址: 0x9c4460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_88
XString::XString(&var_88)

if ((operator==(&var_88, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_9c44cc
else
    XString::~XString()
label_9c44cc:
    int32_t x8_1 = *(gStoreDlg + 8)
    *(gGameDlgManager + 0xc8) = *(gStoreDlg + 4)
    
    if (x8_1 != 0)
        *(gGameDlgManager + 0x118) = x8_1

XString::XString(&var_88)
int32_t x0_5 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    GameCenterDLCRestore()

XString::XString(&var_88)
int32_t x0_8 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    GetBundleInfo(GetCurrentBundleDef(), &var_88)
    int32_t x8_2 = var_88
    
    if (x8_2 == 6)
        *(gGameDlgManager + 0x118) = 0x20
        L("dom_ui_store_confirm_bundle_steam_title", nullptr)
        XString::operator=(gGameDlgManager + 0x1b8)
        L("dom_ui_store_confirm_bundle_steam_body", nullptr)
        XString::operator=(gGameDlgManager + 0x1c0)
        XString::operator=(gGameDlgManager + 0x1c8)
        XString::operator=(gGameDlgManager + 0x1d0)
        *(gGameDlgManager + 0x1d8) = sub_9cbf00
        *(gGameDlgManager + 0x1e0) = 0
    else if (x8_2 != 4)
        int64_t var_48 = 0x10000200000003
        StoreItemAction(&var_48)
    else
        *(gGameDlgManager + 0x118) = 0x20
        L("dom_ui_store_confirm_bundle_discount_unlikely_title", nullptr)
        XString::operator=(gGameDlgManager + 0x1b8)
        L("dom_ui_store_confirm_bundle_discount_unlikely_body", nullptr)
        XString::operator=(gGameDlgManager + 0x1c0)
        XString::operator=(gGameDlgManager + 0x1c8)
        XString::operator=(gGameDlgManager + 0x1d0)
        *(gGameDlgManager + 0x1d8) = sub_9cbedc
        *(gGameDlgManager + 0x1e0) = 0

XString::XString(&var_88)
int32_t x0_25 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_25 & 1) != 0)
    Cardset* x0_26 = *(gStoreItemDlg + 8)
    
    if (x0_26 == 0)
        x0_26 = CardsetAlloc()
        *(gStoreItemDlg + 8) = x0_26
    
    *(gStoreItemDlg + 0x10) = 0x10000200000003
    *gStoreItemDlg = 0
    *(gStoreItemDlg + 0x18) = 0x15
    CardsetClear(x0_26)
    *(gGameDlgManager + 0xc8) = 0x16

XString::XString(&var_88)
int32_t x0_29 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_29 & 1) != 0)
    *gStoreDlg = 1
    *(gStoreDlg + 0xc) = 0

XString::XString(&var_88)
int32_t x0_32 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_32 & 1) != 0)
    *gStoreDlg = 0
    *(gStoreDlg + 0xc) = 0

XString::XString(&var_88)
int32_t x0_35 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_35 & 1) != 0)
    *gStoreDlg = 2
    *(gStoreDlg + 0xc) = 0

XString::XString(&var_88)
int32_t x0_38 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_38 & 1) != 0)
    *(gStoreDlg + 0xc) -= 1

XString::XString(&var_88)
int32_t x0_41 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_41 & 1) != 0)
    *(gStoreDlg + 0xc) += 1

XString::XString(&var_88)
int32_t x0_44 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_44 & 1) != 0)
    int64_t x0_46 = StoreItemIndexToDlc(zx.q(*gStoreDlg), *(arg1 + 0x10), *(gStoreDlg + 0xc))
    uint32_t i = (x0_46 u>> 0x20).d
    
    if (*(GetDlcDef(zx.q(i)) + 4) == 1)
        void* x0_49 = GetActiveProfile()
        uint64_t x26_1 = zx.q(*(x0_49 + 0x7588)) & (zx.q(i) | zx.q(i s>> 4))
        int32_t* x8_10 = *(*(x0_49 + 0x7580) + (x26_1 << 3))
        
        if (x8_10 == 0)
        label_9c4868:
            uint32_t* x0_50 = XPooledMalloc(0x10)
            *x0_50 = i
            x0_50[1] = 1
            uint64_t x9_4 = x26_1 << 3
            *(x0_50 + 8) = *(*(x0_49 + 0x7580) + x9_4)
            *(*(x0_49 + 0x7580) + x9_4) = x0_50
            *(x0_49 + 0x758c) += 1
        else
            while (*x8_10 != i)
                x8_10 = *(x8_10 + 8)
                
                if (x8_10 == 0)
                    goto label_9c4868
            
            x8_10[1] = 1
        
        SaveProfiles()
    
    Cardset* x0_51 = *(gStoreItemDlg + 8)
    
    if (x0_51 == 0)
        x0_51 = CardsetAlloc()
        *(gStoreItemDlg + 8) = x0_51
    
    *(gStoreItemDlg + 0x10) = x0_46
    *gStoreItemDlg = 0
    *(gStoreItemDlg + 0x18) = 0x15
    CardsetClear(x0_51)
    *(gGameDlgManager + 0xc8) = 0x16

XString::XString(&var_88)
int32_t x0_54 = operator==(&var_88, *(arg1 + 8))
XString::~XString()

if ((x0_54 & 1) == 0)
label_9c4a5c:
    XString::XString(&var_88)
    int32_t x0_63 = operator==(&var_88, *(arg1 + 8))
    XString::~XString()
    int32_t var_84
    
    if ((x0_63 & 1) == 0)
    label_9c4ba4:
        XString::XString(&var_88)
        int32_t x0_72 = operator==(&var_88, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_72 & 1) == 0)
        label_9c4cf0:
            XString::XString(&var_88)
            int32_t x0_81 = operator==(&var_88, *(arg1 + 8))
            XString::~XString()
            
            if ((x0_81 & 1) != 0)
                var_88.q = StoreItemIndexToDlc(zx.q(*gStoreDlg), *(arg1 + 0x10), *(gStoreDlg + 0xc))
                StoreItemAction(&var_88)
                uint64_t x19_1 = zx.q(var_84)
                
                if (*(GetDlcDef(zx.q(x19_1.d)) + 4) == 1)
                    void* x0_87 = GetActiveProfile()
                    uint64_t x22_6 = zx.q(*(x0_87 + 0x7588)) & (zx.q(x19_1.d s>> 4) | x19_1)
                    int32_t* x8_54 = *(*(x0_87 + 0x7580) + (x22_6 << 3))
                    
                    if (x8_54 == 0)
                    label_9c4d88:
                        int32_t* x0_88 = XPooledMalloc(0x10)
                        *x0_88 = x19_1.d
                        x0_88[1] = 1
                        uint64_t x9_23 = x22_6 << 3
                        *(x0_88 + 8) = *(*(x0_87 + 0x7580) + x9_23)
                        *(*(x0_87 + 0x7580) + x9_23) = x0_88
                        *(x0_87 + 0x758c) += 1
                    else
                        while (*x8_54 != x19_1.d)
                            x8_54 = *(x8_54 + 8)
                            
                            if (x8_54 == 0)
                                goto label_9c4d88
                        
                        x8_54[1] = 1
                    
                    SaveProfiles()
            
            return 0
        
        int32_t x9_15 = *(gStoreDlg + 0xc)
        int32_t x8_41 = *(arg1 + 0x10) + (x9_15 << 3)
        int32_t x20_19
        
        if (x9_15 s> 0)
            x20_19 = x8_41 - 4
        else
            x20_19 = x8_41
        
        int32_t x0_73 = GameSpecific_GetDlcs(1, &var_88)
        
        if (x0_73 s>= 1)
            int32_t x8_42 = 0
            uint64_t x9_16 = zx.q(x0_73)
            int32_t* x10_14 = var_88.q + 4
            
            while (true)
                if ((*x10_14 | 4) != 7)
                    if (x8_42 == x20_19)
                        var_88.q = 1 | zx.q(x10_14[-1]) << 0x20
                        StoreItemAction(&var_88)
                        uint64_t x20_20 = zx.q(var_84)
                        
                        if (*(GetDlcDef(zx.q(x20_20.d)) + 4) == 1)
                            void* x0_77 = GetActiveProfile()
                            uint64_t x24_3 =
                                zx.q(*(x0_77 + 0x7588)) & (zx.q(x20_20.d s>> 4) | x20_20)
                            int32_t* x8_46 = *(*(x0_77 + 0x7580) + (x24_3 << 3))
                            
                            if (x8_46 == 0)
                            label_9c4ca4:
                                int32_t* x0_78 = XPooledMalloc(0x10)
                                *x0_78 = x20_20.d
                                x0_78[1] = 1
                                uint64_t x9_20 = x24_3 << 3
                                *(x0_78 + 8) = *(*(x0_77 + 0x7580) + x9_20)
                                *(*(x0_77 + 0x7580) + x9_20) = x0_78
                                *(x0_77 + 0x758c) += 1
                            else
                                while (*x8_46 != x20_20.d)
                                    x8_46 = *(x8_46 + 8)
                                    
                                    if (x8_46 == 0)
                                        goto label_9c4ca4
                                
                                x8_46[1] = 1
                            
                            SaveProfiles()
                        
                        break
                    
                    x8_42 += 1
                
                uint64_t temp2_1 = x9_16
                x9_16 -= 1
                x10_14 = &x10_14[0x20]
                
                if (temp2_1 == 1)
                    goto label_9c4df0
            
            goto label_9c4cf0
    else
        int32_t x9_10 = *(gStoreDlg + 0xc)
        int32_t x8_28 = *(arg1 + 0x10) + (x9_10 << 3)
        int32_t x20_16
        
        if (x9_10 s> 0)
            x20_16 = x8_28 - 4
        else
            x20_16 = x8_28
        
        int32_t x0_64 = GameSpecific_GetDlcs(0, &var_88)
        
        if (x0_64 s>= 1)
            int32_t x8_29 = 0
            uint64_t x9_11 = zx.q(x0_64)
            int32_t* x10_9 = var_88.q + 4
            
            while (true)
                if ((*x10_9 | 4) != 7)
                    if (x8_29 == x20_16)
                        var_88.q = zx.q(x10_9[-1]) << 0x20
                        StoreItemAction(&var_88)
                        uint64_t x20_17 = zx.q(var_84)
                        
                        if (*(GetDlcDef(zx.q(x20_17.d)) + 4) == 1)
                            void* x0_68 = GetActiveProfile()
                            uint64_t x24_2 =
                                zx.q(*(x0_68 + 0x7588)) & (zx.q(x20_17.d s>> 4) | x20_17)
                            int32_t* x8_34 = *(*(x0_68 + 0x7580) + (x24_2 << 3))
                            
                            if (x8_34 == 0)
                            label_9c4b58:
                                int32_t* x0_69 = XPooledMalloc(0x10)
                                *x0_69 = x20_17.d
                                x0_69[1] = 1
                                uint64_t x9_14 = x24_2 << 3
                                *(x0_69 + 8) = *(*(x0_68 + 0x7580) + x9_14)
                                *(*(x0_68 + 0x7580) + x9_14) = x0_69
                                *(x0_68 + 0x758c) += 1
                            else
                                while (*x8_34 != x20_17.d)
                                    x8_34 = *(x8_34 + 8)
                                    
                                    if (x8_34 == 0)
                                        goto label_9c4b58
                                
                                x8_34[1] = 1
                            
                            SaveProfiles()
                        
                        break
                    
                    x8_29 += 1
                
                uint64_t temp1_1 = x9_11
                x9_11 -= 1
                x10_9 = &x10_9[0x20]
                
                if (temp1_1 == 1)
                    goto label_9c4df0
            
            goto label_9c4ba4
else
    int32_t x9_5 = *(gStoreDlg + 0xc)
    int32_t x8_17 = *(arg1 + 0x10) + (x9_5 << 3)
    int32_t x20_13
    
    if (x9_5 s> 0)
        x20_13 = x8_17 - 4
    else
        x20_13 = x8_17
    
    int32_t x0_55 = GameSpecific_GetDlcs(1, &var_88)
    
    if (x0_55 s>= 1)
        int32_t x8_18 = 0
        uint64_t x9_6 = zx.q(x0_55)
        int32_t* x10_4 = var_88.q + 4
        
        while (true)
            if ((*x10_4 | 4) != 7)
                if (x8_18 == x20_13)
                    uint64_t x20_14 = zx.q(x10_4[-1])
                    Cardset* x0_56 = *(gStoreItemDlg + 8)
                    
                    if (x0_56 == 0)
                        x0_56 = CardsetAlloc()
                        *(gStoreItemDlg + 8) = x0_56
                    
                    *(gStoreItemDlg + 0x10) = 1 | (0xffffffff & x20_14) << 0x20
                    *gStoreItemDlg = 0
                    *(gStoreItemDlg + 0x18) = 0x15
                    CardsetClear(x0_56)
                    *(gGameDlgManager + 0xc8) = 0x16
                    
                    if (*(GetDlcDef(zx.q(x20_14.d)) + 4) == 1)
                        void* x0_59 = GetActiveProfile()
                        uint64_t x24_1 = zx.q(*(x0_59 + 0x7588)) & (zx.q(x20_14.d s>> 4) | x20_14)
                        int32_t* x8_21 = *(*(x0_59 + 0x7580) + (x24_1 << 3))
                        
                        if (x8_21 == 0)
                        label_9c4a10:
                            int32_t* x0_60 = XPooledMalloc(0x10)
                            *x0_60 = x20_14.d
                            x0_60[1] = 1
                            *(x0_60 + 8) = *(*(x0_59 + 0x7580) + (x24_1 << 3))
                            (*(x0_59 + 0x7580))[x24_1] = x0_60
                            *(x0_59 + 0x758c) += 1
                        else
                            while (*x8_21 != x20_14.d)
                                x8_21 = *(x8_21 + 8)
                                
                                if (x8_21 == 0)
                                    goto label_9c4a10
                            
                            x8_21[1] = 1
                        
                        SaveProfiles()
                    
                    break
                
                x8_18 += 1
            
            uint64_t temp0_1 = x9_6
            x9_6 -= 1
            x10_4 = &x10_4[0x20]
            
            if (temp0_1 == 1)
                goto label_9c4df0
        
        goto label_9c4a5c

label_9c4df0:
pthread_kill(pthread_self(), 6)
return GameHasStoreItem(XNoReturn()) __tailcall
