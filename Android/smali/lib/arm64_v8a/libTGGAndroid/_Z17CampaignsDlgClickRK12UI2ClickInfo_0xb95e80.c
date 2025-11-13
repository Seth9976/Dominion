// 函数: _Z17CampaignsDlgClickRK12UI2ClickInfo
// 地址: 0xb95e80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_50c0
XString::XString(&var_50c0)

if ((operator==(x20, &var_50c0) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerShow(3, 5)
else
    XString::~XString()
    GameDlgManagerShow(3, 5)

char* x20_2 = *(arg1 + 8)
XString::XString(&var_50c0)
int32_t x0_5 = operator==(x20_2, &var_50c0)
XString::~XString()
char var_48

if ((x0_5 & 1) != 0)
    void* x0_6 = GetActiveProfile()
    XString::XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3530)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3538)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3540)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3548)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3550)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3558)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3560)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3568)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3570)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3578)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XString::XString(&var_48)
    XString::operator+(x0_6 + 0x3580)
    XString::operator char const*()
    XString::operator+=(&var_50c0)
    XString::~XString()
    XString::~XString()
    XClipboardCopyText(XString::operator char const*())
    XString::~XString()

char* x20_6 = *(arg1 + 8)
XString::XString(&var_50c0)
int32_t x0_54 = operator==(x20_6, &var_50c0)
XString::~XString()

if ((x0_54 & 1) != 0)
    XGetSaveGameFolder(true)
    XFormatString("%sdominion.png")
    TwitterExportCampaign(CampaignGetStatus(), XString::operator char const*())
    XString::~XString()

char* x20_9 = *(arg1 + 8)
XString::XString(&var_50c0)
int32_t x0_61 = operator==(x20_9, &var_50c0)
XString::~XString()

if ((x0_61 & 1) == 0)
label_b96978:
    char* x20_13 = *(arg1 + 8)
    XString::XString(&var_50c0)
    int32_t x0_119 = operator==(x20_13, &var_50c0)
    XString::~XString()
    
    if ((x0_119 & 1) != 0)
        void* x0_120 = GetActiveProfile()
        FromCampaignString(&var_50c0, x0_120 + 0x3530, x0_120 + 0x3538)
        int32_t var_50bc
        CampaignOfficial(zx.q(var_50bc))
    
    char* x20_15 = *(arg1 + 8)
    XString::XString(&var_50c0)
    int32_t x0_125 = operator==(x20_15, &var_50c0)
    XString::~XString()
    
    if ((x0_125 & 1) != 0)
        CampaignReroll()
    
    char* x20_17 = *(arg1 + 8)
    XString::XString(&var_50c0)
    int32_t x0_128 = operator==(x20_17, &var_50c0)
    XString::~XString()
    
    if ((x0_128 & 1) != 0)
        GameMsgBoxTranslated("dom_ui_resign_campaign_header", "dom_ui_resign_campaign_body", 0x20, 
            nullptr, nullptr, sub_bad130, nullptr)
    
    char* x20_19 = *(arg1 + 8)
    XString::XString(&var_50c0)
    int32_t x0_131 = operator==(x20_19, &var_50c0)
    XString::~XString()
    
    if ((x0_131 & 1) != 0)
        CampaignGetStatus()
        
        if (*(gCampaignDlg + 0x502c) == 1)
            GetActiveProfile()
            ClientSubmitWeeklyResult(zx.q(*(gCampaignDlg + 0x5030)), 0xffffffff, 3, 0xffffffff)
        
        *gCampaignDlg = 0
        CampaignClear(CampaignGetStatus())
        GameDlgManagerShow(0x7e1, 5)
    
    char* x20_21 = *(arg1 + 8)
    XString::XString(&var_50c0)
    int32_t x0_136 = operator==(x20_21, &var_50c0)
    XString::~XString()
    
    if ((x0_136 & 1) != 0)
        *(gCampaignDlg + 4) ^= 1
    
    char* x20_23 = *(arg1 + 8)
    XString::XString(&var_50c0)
    int32_t x0_139 = operator==(x20_23, &var_50c0)
    XString::~XString()
    
    if ((x0_139 & 1) != 0)
        *(gCampaignDlg + 0x5068) ^= 1
    
    char* x20_25 = *(arg1 + 8)
    XString::XString(&var_50c0)
    int32_t x0_142 = operator==(x20_25, &var_50c0)
    XString::~XString()
    
    if ((x0_142 & 1) != 0)
        int32_t x20_27 = *gCampaignDlg
        int32_t x0_144 = UI2GetRoot(zx.q(*arg1))
        
        if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5040))) != x0_144)
            if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5044))) != x0_144)
                if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5048))) != x0_144)
                    if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x504c))) != x0_144)
                        if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5050))) != x0_144)
                            if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5054))) != x0_144)
                                if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5058))) != x0_144)
                                    if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x505c))) != x0_144)
                                        if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5060))) != x0_144)
                                            if (UI2GetRoot(zx.q(*(gCampaignDlg + 0x5064)))
                                                    == x0_144)
                                                *gCampaignDlg = 9
                                        else
                                            *gCampaignDlg = 8
                                    else
                                        *gCampaignDlg = 7
                                else
                                    *gCampaignDlg = 6
                            else
                                *gCampaignDlg = 5
                        else
                            *gCampaignDlg = 4
                    else
                        *gCampaignDlg = 3
                else
                    *gCampaignDlg = 2
            else
                *gCampaignDlg = 1
        else
            *gCampaignDlg = 0
        
        if (zx.d(*(gCampaignDlg + 4)) == 0 || *gCampaignDlg == x20_27)
            DomQueueStartCampaign()
            GameDlgManagerDismiss(5, false)
else
    void* x0_62 = GetActiveProfile()
    XString::XString()
    XClipboardPasteText(&var_48)
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
    XString var_a0
    int32_t x20_12
    
    if (SplitString(&var_48, 0xa, &var_a0, XString::XString()) != 0xb)
        if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x63)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else if (zx.d(*(XString::operator char const*() + 1)) != 0x6b)
            x20_12 = 0
        else if (zx.d(*XString::operator char const*()) != 0x2d)
            x20_12 = 0
        else
            if (zx.d(*(XString::operator char const*() + 1)) == 0x6b)
                goto label_b964b8
            
            x20_12 = 0
    else
    label_b964b8:
        
        if (zx.d(*(gCampaignDlg + 4)) == 0)
            *gCampaignDlg = 0
        
        CampaignClear(GetActiveProfile() + 0x358c)
        Trim(&var_a0)
        XString::operator=(x0_62 + 0x3530)
        XString::~XString()
        void var_98
        Trim(&var_98)
        XString::operator=(x0_62 + 0x3538)
        XString::~XString()
        void var_90
        Trim(&var_90)
        XString::operator=(x0_62 + 0x3540)
        XString::~XString()
        void var_88
        Trim(&var_88)
        XString::operator=(x0_62 + 0x3548)
        XString::~XString()
        void var_80
        Trim(&var_80)
        XString::operator=(x0_62 + 0x3550)
        XString::~XString()
        void var_78
        Trim(&var_78)
        XString::operator=(x0_62 + 0x3558)
        XString::~XString()
        void var_70
        Trim(&var_70)
        XString::operator=(x0_62 + 0x3560)
        XString::~XString()
        void var_68
        Trim(&var_68)
        XString::operator=(x0_62 + 0x3568)
        XString::~XString()
        void var_60
        Trim(&var_60)
        XString::operator=(x0_62 + 0x3570)
        XString::~XString()
        void var_58
        Trim(&var_58)
        XString::operator=(x0_62 + 0x3578)
        XString::~XString()
        void var_50
        Trim(&var_50)
        XString::operator=(x0_62 + 0x3580)
        XString::~XString()
        FromCampaignString(&var_50c0, x0_62 + 0x3530, x0_62 + 0x3538)
        *(gCampaignDlg + 8) = DomMapCreateAsync(&var_50c0)
        SaveProfiles()
        x20_12 = 1
    
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    
    if (x20_12 != 0)
        goto label_b96978

return 0
