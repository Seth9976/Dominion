// 函数: _Z18AnnouncePanelClickRK12UI2ClickInfo
// 地址: 0xba0fb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)

if ((operator==(&var_18, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_ba1000
else
    XString::~XString()
label_ba1000:
    GameClientAckServerNotifications()
    GameClientFreeServerNotifications()
    GameDlgTitle()

XString::XString(&var_18)
int32_t x0_5 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    uint64_t x0_6 = zx.q(*gAnnouncementDlg)
    int32_t x19_3
    
    if (x0_6.d == 0)
        GameDlgCreateGameShow(x0_6, 0, 0)
        x19_3 = 7
    label_ba10a0:
        *(gCreateDlg + 4) = 1
        *(gCreateDlg + 0x70) = 1
        UI2ClearFocus(true)
        *gCardGallery = data_71c4a0
        GameDlgManagerShow(0x7e6, 7)
        *(gCardGallery + 8) = x19_3
    else
        int32_t x19_2 = *(GameClientGetServerNotification(x0_6.d) + 4)
        GameDlgCreateGameShow(0, 0, 0)
        
        if (x19_2 - 2 u<= 2)
            x19_3 = x19_2 == 3 ? 0xa : 7
            
            goto label_ba10a0
    GameClientAckServerNotifications()
    GameClientFreeServerNotifications()

return 0
