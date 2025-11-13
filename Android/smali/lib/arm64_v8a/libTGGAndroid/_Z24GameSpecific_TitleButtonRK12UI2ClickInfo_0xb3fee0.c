// 函数: _Z24GameSpecific_TitleButtonRK12UI2ClickInfo
// 地址: 0xb3fee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_40
XString::XString(&var_40)
int32_t x0_2 = operator==(&var_40, *(arg1 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    *(gCampaignDlg + 0x502c) = 0
    void* x0_3 = GetActiveProfile()
    int32_t x0_5 = XString::IsEmpty()
    int32_t x0_7
    
    if ((x0_5 & 1) == 0)
        x0_7 = FromCampaignString(gCampaignDlg + 0xc, x0_3 + 0x3530, x0_3 + 0x3538)
    
    if ((x0_5 & 1) != 0 || (x0_7 & 1) == 0)
        XString::operator=(x0_3 + 0x3530)
        GameDlgManagerShow(0x7e1, 5)
    else
        CampaignDialogReopen(true)

XString::XString(&var_40)
int32_t x0_11 = operator==(&var_40, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    UI2ClearFocus(true)
    *gCardGallery = data_71b160
    GameDlgManagerShow(0x7e6, 5)

XString::XString(&var_40)
int32_t x0_14 = operator==(&var_40, *(arg1 + 8))
XString::~XString()

if ((x0_14 & 1) != 0)
    *gDailyDlg = 1
    int64_t x8_1 = *(GetClient() + 0x75f8)
    *(gDailyDlg + 4) = 0
    *(gDailyDlg + 8) = x8_1
    GameDlgManagerShow(0x7ea, 5)

XString::XString(&var_40)
int32_t x0_18 = operator==(&var_40, *(arg1 + 8))
XString::~XString()

if ((x0_18 & 1) != 0)
    void* x0_19 = GetActiveProfile()
    *(x0_19 + 0x4344) |= 1
    SaveProfiles()
    *(gCampaignDlg + 0x502c) = 0
    void* x0_20 = GetActiveProfile()
    int32_t x0_22 = XString::IsEmpty()
    int32_t x0_24
    
    if ((x0_22 & 1) == 0)
        x0_24 = FromCampaignString(gCampaignDlg + 0xc, x0_20 + 0x3530, x0_20 + 0x3538)
    
    if ((x0_22 & 1) != 0 || (x0_24 & 1) == 0)
        XString::operator=(x0_20 + 0x3530)
        GameDlgManagerShow(0x7e1, 5)
    else
        CampaignDialogReopen(true)

XString::XString(&var_40)
int32_t x0_28 = operator==(&var_40, *(arg1 + 8))
void* result = XString::~XString()

if ((x0_28 & 1) != 0)
    void* x0_29 = GetClient()
    int64_t x8_2 = *(x0_29 + 0x75f8)
    int32_t x9_3 = *(x0_29 + 0x7600)
    var_40 = x8_2
    int64_t var_50 = x8_2
    int32_t var_48_1 = 1
    int64_t x0_31
    int32_t x1_14
    x0_31, x1_14 = DateAdd_Day(&var_50, 0xffffffff)
    var_50 = x0_31
    int32_t var_48_2 = x1_14
    int64_t var_60 = x0_31
    int32_t var_58_1 = 1
    int64_t x0_33
    char x1_15
    x0_33, x1_15 = DateAdd_Day(&var_60, 0xffffffff)
    var_60 = x0_33
    void* x0_34 = GetClient()
    void* x0_35 = GetActiveProfile()
    Date* x20_6 = *(*(x0_35 + 0x7730) + ((((0xffff00ff & zx.q(var_60.d << 0x10))
        | zx.q(zx.d((var_60:4.d).b) << 8) | zx.q(x1_15)) & zx.q(*(x0_35 + 0x7738))) << 3))
    int32_t x8_8
    
    if (x20_6 == 0)
    label_b401b0:
        x8_8 = 8
    else
        while (true)
            if ((operator!=(&var_60, x20_6) & 1) == 0)
                x8_8 = 0
                break
            
            x20_6 = *(x20_6 + 0x10)
            
            if (x20_6 == 0)
                goto label_b401b0
    
    uint64_t x0_38
    
    if (*(x0_34 + 0x7770) == 0)
        x0_38 = zx.q(x8_8) | 3
    else
        x0_38 = zx.q(x8_8)
    
    ClientQueryDailyStatus(x0_38, &var_60, &var_60)
    
    if (GetDailyImage(&var_40) != 1)
        *gDailyDlg = 1
        int64_t x8_16 = *(GetClient() + 0x75f8)
        *(gDailyDlg + 4) = 0
        *(gDailyDlg + 8) = x8_16
        return GameDlgManagerShow(0x7ea, 5)
    
    int32_t x0_42 = GetDailySeedTitleResumeState(&var_40)
    
    if (x0_42 == 1)
        return GameQueueStartDaily(&var_40)
    
    if (x0_42 != 2)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return CampaignDialogOpen() __tailcall
    
    int64_t x0_49
    
    if (var_40.d == 0)
    label_b40254:
        x0_49 = 0
    else
        void* x0_43 = GetClient()
        Date* x19_3 = *(*(x0_43 + 0x75d8) + ((((0xffff00ff & zx.q(var_40.d << 0x10))
            | zx.q(zx.d((var_40:4.d).b) << 8) | zx.q(x9_3.b)) & zx.q(*(x0_43 + 0x75e0))) << 3))
        
        if (x19_3 == 0)
        label_b40254_1:
            x0_49 = 0
        else
            while (true)
                if ((operator!=(&var_40, x19_3) & 1) == 0)
                    x0_49 = GetDailyGameIndex(zx.q(*(x19_3 + 0x10)))
                    break
                
                x19_3 = *(x19_3 + 0x28)
                
                if (x19_3 == 0)
                    goto label_b40254_1
    
    GameQueueResume(x0_49)
    result = GetClient()
    int64_t x9_7 = var_40
    *(result + 0x5050) = x9_3
    *(result + 0x5048) = x9_7

return result
