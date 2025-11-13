// 函数: _Z23DisconnectReturnToTitleb
// 地址: 0x9aaddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
*(GetClient() + 0x7778) = 0
GameDlgManagerDismiss(9, false)
void* x0_1 = GetClient()
int64_t result

if (*(x0_1 + 0x5068) != 2)
    if ((GameSpecific_ShouldDisconnectReturnToTitle() & 1) != 0)
    label_9aaed4:
        GameDlgManagerDismiss(7, false)
        GameDlgManagerDismiss(5, false)
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(3, 5)
        result = AndroidDisplayKeyboard(false)
        
        if ((x19 & 1) != 0)
            return GameMsgBoxTranslated("dom_msg_disconnected_header", "dom_msg_disconnected_body", 
                0x20, nullptr, nullptr, nullptr, nullptr) __tailcall
    else
        if ((GameDlgManagerDialogActive(9, 5) & 1) != 0)
            goto label_9aaed4
        
        if ((GameDlgManagerDialogActive(7, 5) & 1) != 0)
            goto label_9aaed4
        
        if ((GameDlgManagerDialogActive(0x13, 5) & 1) != 0)
            goto label_9aaed4
        
        if ((GameDlgManagerDialogActive(0x1c, 5) & 1) != 0)
            goto label_9aaed4
        
        result = GameDlgManagerDialogActive(0x10, 5)
        
        if ((result.d & 1) != 0)
            result = CreateGameIsMultiplayer()
            
            if ((result.d & 1) != 0)
                goto label_9aaed4
else
    GameDlgManagerDismiss(7, false)
    result = GameDlgManagerDismiss(5, false)
    
    if ((x19 & 1) != 0)
        result = GameMsgBoxTranslated("dom_msg_disconnected_header", "dom_msg_disconnected_body", 
            0x20, nullptr, nullptr, nullptr, nullptr)
    
    *(x0_1 + 0x5044) = 8

return result
