// 函数: _Z28GameSpecific_NewGameOverridev
// 地址: 0xbacd4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GameClientPeekMaxServerNotification()

if (x0 != 0)
    GetClient()
    uint32_t x20_1 = *(x0 + 8)
    GameDlgManagerShow(0x7f6, 5)
    *gAnnouncementDlg = x20_1

return zx.q(x0 != 0 ? 1 : 0)
