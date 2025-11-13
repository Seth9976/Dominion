// 函数: _Z13CampaignClearR14CampaignStatus
// 地址: 0xb3e1bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
__builtin_memset(arg1, 0, 0x80)

if (x0 + 0x358c == arg1)
    XString::operator=(x0 + 0x3530)
    XString::operator=(x0 + 0x3538)
    XString::operator=(x0 + 0x3540)
    XString::operator=(x0 + 0x3548)
    XString::operator=(x0 + 0x3550)
    XString::operator=(x0 + 0x3558)
    XString::operator=(x0 + 0x3560)
    XString::operator=(x0 + 0x3568)
    XString::operator=(x0 + 0x3570)
    XString::operator=(x0 + 0x3578)
    XString::operator=(x0 + 0x3580)
    SaveProfiles()

*(arg1 + 0xc) = 2
*arg1 = *(x0 + 0x3588)
int64_t result = DomMapDispose(zx.q(*(gCampaignDlg + 8)))
*(gCampaignDlg + 8) = 0
*(gCampaignDlg + 0x502c) = 0
return result
