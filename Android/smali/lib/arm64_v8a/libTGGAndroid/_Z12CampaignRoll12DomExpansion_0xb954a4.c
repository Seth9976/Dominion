// 函数: _Z12CampaignRoll12DomExpansion
// 地址: 0xb954a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
*(gCampaignDlg + 0x502c) = 0
CampaignClear(CampaignGetStatus())
int64_t result

if (x19 == 0)
    result = DomMapCreateCached()
    *(gCampaignDlg + 8) = result.d
    
    if (result.d != 0)
        memcpy(gCampaignDlg + 0xc, DomMapGetIncomplete(result), 0x5020)
    label_b95530:
        void* x0_8 = GetActiveProfile()
        ToCampaignString(gCampaignDlg + 0xc, x0_8 + 0x3530, x0_8 + 0x3538)
        return SaveProfiles()
else
    int32_t var_30 = 0
    int32_t var_2c_1 = x19
    int32_t var_28_1 = RandomInt(gRNG, 0x77359400)
    result = CampaignTryGenerate(&var_30, gCampaignDlg + 0xc)
    
    if ((result.d & 1) != 0)
        *(gCampaignDlg + 8) = DomMapCreateAsync(gCampaignDlg + 0xc)
        goto label_b95530

return result
