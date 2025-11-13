// 函数: _Z20CampaignDialogReopenb
// 地址: 0xb95308
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gCampaignDlg + 8) == 0)
    *(gCampaignDlg + 8) = DomMapCreateAsync(gCampaignDlg + 0xc)

int32_t x21 = *gCampaignDlg
*gCampaignDlg = 0
int32_t x8_11

if (*(CampaignGetStatus() + 0x78) u>= 2)
    x8_11 = 9
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x6c) u>= 2)
    x8_11 = 8
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x60) u> 1)
    x8_11 = 7
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x54) u> 1)
    x8_11 = 6
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x48) u> 1)
    x8_11 = 5
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x3c) u> 1)
    x8_11 = 4
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x30) u> 1)
    x8_11 = 3
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x24) u> 1)
    x8_11 = 2
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0x18) u> 1)
    x8_11 = 1
    *gCampaignDlg = x8_11
else if (*(CampaignGetStatus() + 0xc) u> 1)
    x8_11 = 0
    *gCampaignDlg = x8_11
else
    x8_11 = *gCampaignDlg

if (x21 != x8_11 && (arg1.d & 1) == 0)
    XAsset* x0_12 = *SOUND_SOUND_LOAD_ALWAYS_FX_CAMPAIGN_DOT_APPEAR
    *(gCampaignDlg + 0x506c) = 1
    AssetPreload(x0_12)

return GameDlgManagerShow(0x7e3, 5) __tailcall
