// 函数: _Z25GameSpecific_PostExitGame14QueueExitStyle
// 地址: 0xba5214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 2)
    return CampaignDialogReopen(false) __tailcall

if (arg1.d != 1)
    return 

int64_t lr
int64_t var_10 = lr
*gDailyDlg = 1
int64_t x8 = *(GetClient() + 0x75f8)
*(gDailyDlg + 4) = 0
*(gDailyDlg + 8) = x8
return GameDlgManagerShow(0x7ea, 5) __tailcall
