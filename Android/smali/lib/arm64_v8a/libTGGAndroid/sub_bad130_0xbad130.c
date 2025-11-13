// 函数: sub_bad130
// 地址: 0xbad130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CampaignGetStatus()
int32_t x19

if (*(gCampaignDlg + 0x502c) != 1)
    x19 = 0x7e1
else
    GetActiveProfile()
    ClientSubmitWeeklyResult(zx.q(*(gCampaignDlg + 0x5030)), 0xffffffff, 3, 0xffffffff)
    x19 = 0x7ea

*gCampaignDlg = 0
CampaignClear(CampaignGetStatus())
return GameDlgManagerShow(zx.q(x19), 5) __tailcall
