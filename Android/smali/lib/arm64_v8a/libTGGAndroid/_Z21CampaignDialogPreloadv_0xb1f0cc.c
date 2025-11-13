// 函数: _Z21CampaignDialogPreloadv
// 地址: 0xb1f0cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
int64_t result = XString::IsEmpty()

if ((result.d & 1) == 0)
    void var_5040
    
    if ((FromCampaignString(&var_5040, x0 + 0x3530, x0 + 0x3538) & 1) == 0)
        XString::GetString()
        XTraceAndLog("invalid campaign string %s")
        CampaignClear(x0 + 0x358c)
        return SaveProfiles()
    
    result = DomMapCreateAsync(&var_5040)
    *(gCampaignDlg + 8) = result.d

return result
