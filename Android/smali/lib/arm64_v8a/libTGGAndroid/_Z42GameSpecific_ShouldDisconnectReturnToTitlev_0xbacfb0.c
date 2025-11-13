// 函数: _Z42GameSpecific_ShouldDisconnectReturnToTitlev
// 地址: 0xbacfb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((GameDlgManagerDialogActive(0x7ea, 5) & 1) != 0)
    return 1

if ((GameDlgManagerDialogActive(0x7e3, 5) & 1) != 0
        && CampaignGetStatus() != GetActiveProfile() + 0x358c)
    return 1

return 0
