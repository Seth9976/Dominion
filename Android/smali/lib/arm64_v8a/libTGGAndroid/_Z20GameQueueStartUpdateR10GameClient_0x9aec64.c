// 函数: _Z20GameQueueStartUpdateR10GameClient
// 地址: 0x9aec64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x5044)
void* __offset(GameClient, 0x5040) x21 = arg1 + 0x5040

if (x8 == 0)
    *(x21 + 4) = 0
    return 

GameClient& x19_1 = arg1
arg1 = zx.q(*x21)

if (arg1.d != 0)
    RemoveMultiplayerGame(arg1)
    x8 = *(x21 + 4)
    *x21 = 0

*(x21 + 4) = 0

if (x8 u> 0xb)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return GameDlgTitleTutorial() __tailcall

switch (x8)
    case 1
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        GameStart(0xffffffff, 0, 0)
        return AnalyticsSendView("single-player-start") __tailcall
    case 2
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        GameStartTutorial()
        return AnalyticsSendView("single-player-tutorial") __tailcall
    case 3
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        GameStartDailySeed(x19_1 + 0x5048, zx.q(*(GetActiveProfile() + 0x75a0)), 0)
        return AnalyticsSendView("single-player-start-daily") __tailcall
    case 4
        void* x0_5 = GetClient()
        int32_t x23 = *(x0_5 + 0x5068)
        GameSpecific_End()
        
        if (x23 != 2)
            LocalGameDispose(x0_5 + 0x50a8)
        
        *(x0_5 + 0x5068) = 0
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        GameStartDailySeed(x19_1 + 0x5048, zx.q(*(x21 + 0x14)), 4)
        return AnalyticsSendView("single-player-restart-daily") __tailcall
    case 5
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        
        if (*(x21 + 0x28) != 0)
            void* x0_9 = GetClient()
            int32_t x22_2 = *(x0_9 + 0x5068)
            GameSpecific_End()
            
            if (x22_2 != 2)
                LocalGameDispose(x0_9 + 0x50a8)
            
            *(x0_9 + 0x5068) = 0
        
        if ((GameResumeLocal(zx.q(*(x21 + 0x18))) & 1) == 0)
            return GameResumeHandleError(1, zx.q(*(x21 + 0x18))) __tailcall
        
        return AnalyticsSendView("single-player-resume") __tailcall
    case 6
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        
        if (*(x21 + 0x28) != 0)
            void* x0_14 = GetClient()
            int32_t x22_3 = *(x0_14 + 0x5068)
            GameSpecific_End()
            
            if (x22_3 != 2)
                LocalGameDispose(x0_14 + 0x50a8)
            
            *(x0_14 + 0x5068) = 0
        
        if ((GameResumeMultiplayerComplete(zx.q(*(x21 + 0x34))) & 1) == 0)
            return GameResumeHandleError(2, zx.q(*(x21 + 0x34))) __tailcall
        
        return AnalyticsSendView("multi-player-resume") __tailcall
    case 7
        int32_t x8_10 = *(GetClient() + 0x5068)
        int32_t x8_11
        
        if (x8_10 == 1)
            x8_11 = *(GetClient() + 0x506c)
        
        if (x8_10 != 1 || x8_11 != 0x7fffffff)
            if (*(GetClient() + 0x5068) != 2)
                GameDlgManagerShow(2, 0)
                GameDlgManagerDismiss(1, false)
                GameDlgManagerShow(3, 5)
            else
                int32_t x20_7 = *(x21 + 0x24)
                GameDlgManagerShow(2, 0)
                GameDlgManagerDismiss(1, false)
                int64_t x0_35
                
                if ((x20_7 & 2) != 0)
                    x0_35 = 4
                else
                    x0_35 = 3
                
                MultiplayerDlgOpen(x0_35)
                
                if ((zx.d(*(x21 + 0x24)) & 4) != 0)
                    void* x19_8 = *(x19_1 + 0x5080) + zx.q(*(x21 + 0x18)) * 0x1338
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    int32_t x9_11 = *(x21 + 0x50)
                    *(x21 + 0x50) = zx.d(*(x19_8 + 0x1330))
                    *(x19_8 + 0x1330) = x9_11
                    *(x21 + 0x54) -= 1
        else
            GameDlgManagerShow(2, 0)
            GameDlgManagerDismiss(3, false)
            GameDlgManagerDismiss(1, false)
            GameDlgManagerShow(0x23, 5)
        
        void* x0_41 = GetClient()
        int32_t x22_6 = *(x0_41 + 0x5068)
        GameSpecific_End()
        
        if (x22_6 != 2)
            LocalGameDispose(x0_41 + 0x50a8)
        
        *(x0_41 + 0x5068) = 0
        return GameSpecific_PostExitGame(zx.q(*(x21 + 0x20))) __tailcall
    case 8
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(3, 5)
        void* x0_22 = GetClient()
        int32_t x21_1 = *(x0_22 + 0x5068)
        GameSpecific_End()
        
        if (x21_1 != 2)
            LocalGameDispose(x0_22 + 0x50a8)
        
        *(x0_22 + 0x5068) = 0
    case 9
        void* x0_25 = GetClient()
        int32_t x22_4 = *(x0_25 + 0x5068)
        GameSpecific_End()
        
        if (x22_4 != 2)
            LocalGameDispose(x0_25 + 0x50a8)
        
        *(x0_25 + 0x5068) = 0
        GameStart(0xffffffff, *(x21 + 0x2594), 4)
        return AnalyticsSendView("single-player-rematch") __tailcall
    case 0xa
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        GameStartCampaign(*(x21 + 0x18), 0)
        return AnalyticsSendView("single-player-campaign") __tailcall
    case 0xb
        void* x0_30 = GetClient()
        int32_t x22_5 = *(x0_30 + 0x5068)
        GameSpecific_End()
        
        if (x22_5 != 2)
            LocalGameDispose(x0_30 + 0x50a8)
        
        *(x0_30 + 0x5068) = 0
        GameDlgManagerShow(2, 0)
        GameDlgManagerDismiss(1, false)
        GameDlgManagerShow(0x27, 1)
        GameDlgManagerDismiss(5, false)
        GameStartCampaign(*(x21 + 0x18), 4)
        return AnalyticsSendView("single-player-campaign-restart") __tailcall
