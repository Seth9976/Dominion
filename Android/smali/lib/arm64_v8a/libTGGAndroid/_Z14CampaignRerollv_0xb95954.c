// 函数: _Z14CampaignRerollv
// 地址: 0xb95954
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(gCampaignDlg + 4)) == 0)
    *gCampaignDlg = 0

int32_t var_5040
FromCampaignString(&var_5040, GetActiveProfile() + 0x3530, GetActiveProfile() + 0x3538)
int32_t x8_1 = var_5040
int32_t var_503c

if (x8_1 == 0)
    return CampaignRoll(zx.q(var_503c))

if (x8_1 != 1)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return DomQueueStartCampaign() __tailcall

*(gCampaignDlg + 0x502c) = 0
CampaignClear(CampaignGetStatus())
int64_t result = DomMapCreateCached()
*(gCampaignDlg + 8) = result.d

if (result.d == 0)
    return result

memcpy(gCampaignDlg + 0xc, DomMapGetIncomplete(result), 0x5020)
void* x0_6 = GetActiveProfile()
ToCampaignString(gCampaignDlg + 0xc, x0_6 + 0x3530, x0_6 + 0x3538)
return SaveProfiles()
