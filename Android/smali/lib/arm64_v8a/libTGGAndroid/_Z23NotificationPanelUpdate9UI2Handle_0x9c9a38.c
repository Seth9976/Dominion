// 函数: _Z23NotificationPanelUpdate9UI2Handle
// 地址: 0x9c9a38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, NotificationPanelClick)
int64_t result = UI2SetText(zx.q(x19), &data_11d0250, gNotificationDlg, 0xffffffff)

if (*(gNotificationDlg + 8) == 0)
    return UI2SetState(zx.q(x19), &data_11d0268, 0xffffffff, 0) __tailcall

return result
