// 函数: _Z22GameNotificationUpdate6GameID
// 地址: 0x9af3bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GameDlgMangerGetUI(0x1d, 0xa, true)

if (result.d != 0)
    int32_t x19_1 = result.d
    result = UI2IsStateEffectActive(result, "notification")
    
    if ((result.d & 1) == 0)
        Notification::Notification()
        void var_c8
        
        if ((NotificationsAvailable(&var_c8) & 1) != 0)
            XString::XString()
            XString var_28
            int32_t x21_1
            
            if ((NotificationLookupData(&var_c8, "tgg.gameDBID", &var_28) & 1) == 0)
                x21_1 = 0
            label_9af454:
                XString::GetString()
                XTrace("show! %s")
                UI2SetStateEffect(zx.q(x19_1), "notification", 1, false)
                XString var_c0
                GameDlgSetNotificationMessage(&var_c0, zx.q(x21_1))
                SoundPlayIgnoreFocusLoss(*SOUND_SOUND_LOAD_ALWAYS_APP_NOTIFICATION)
            else
                int32_t x0_5 = atoi(XString::operator char const*())
                
                if (arg1 == 0)
                    x21_1 = x0_5
                    goto label_9af454
            XString::~XString()
        
        return Notification::~Notification()

return result
