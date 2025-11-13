// 函数: _Z18CampaignsDlgUpdate9UI2Handle
// 地址: 0xb97af4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
CampaignMap* x0_1 = DomMapTryGet(zx.q(*(gCampaignDlg + 8)))

if (x0_1 != 0)
    UI2SetImage(zx.q(x19), &data_18323a0, *(x0_1 + 0x5078), 0xffffffff)
    CampaignsMissionUpdate(zx.q(x19), x0_1, 0)

UI2SetHandler(zx.q(x19), CampaignsDlgClick)

if (zx.d(*(gCampaignDlg + 0x5068)) != 0)
    UI2SetState(zx.q(x19), &data_18323b8, 0xffffffff, 0)

if ((*(CampaignGetStatus() + 0x78) & 0xfffffffe) == 4)
    UI2SetState(zx.q(x19), &data_18323e8, 0xffffffff, 0)

if ((HasOfficialCamapign(gCampaignDlg + 0xc) & 1) != 0)
    UI2SetState(zx.q(x19), &data_1832388, 0xffffffff, 0)

CampaignName(gCampaignDlg + 0xc)
void var_28
UI2SetText(zx.q(x19), &data_1832370, &var_28, 0xffffffff)
DumpCampaignDesc(gCampaignDlg + 0xc)
void var_38

if (x0_1 != 0)
    DumpFlavorDesc(x0_1 + 0x5020, *gCampaignDlg)
    char var_58
    XString::XString(&var_58)
    XString::operator+(&var_38)
    void var_50
    XString::operator+(&var_50)
    XString::operator=(&var_38)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()

UI2SetText(zx.q(x19), &data_18322f8, &var_38, 0xffffffff)
DumpMissionCards(gCampaignDlg + 0xc, *gCampaignDlg)
void var_40
UI2SetText(zx.q(x19), &data_1832310, &var_40, 0xffffffff)
XString::~XString()
XString::~XString()
return XString::~XString()
