// 函数: _Z18CampaignDialogOpenv
// 地址: 0xb402e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gCampaignDlg + 0x502c) = 0
void* x0 = GetActiveProfile()

if ((XString::IsEmpty() & 1) == 0
        && (FromCampaignString(gCampaignDlg + 0xc, x0 + 0x3530, x0 + 0x3538) & 1) != 0)
    return CampaignDialogReopen(true) __tailcall

XString::operator=(x0 + 0x3530)
return GameDlgManagerShow(0x7e1, 5) __tailcall
