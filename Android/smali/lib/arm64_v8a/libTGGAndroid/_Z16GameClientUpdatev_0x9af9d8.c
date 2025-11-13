// 函数: _Z16GameClientUpdatev
// 地址: 0x9af9d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = GetClient()
int32_t x8 = x0[3].d
float v0 = *gSecondsPerUpdate * float.s(0x447a0000)
float v1

if (v0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

*x0 += sx.q(vcvts_s32_f32(v0 + v1))

if (x8 - 1 u< 2)
    goto label_9afa64

if (x8 == 3 || x8 == 0)
    ClientKeepConnected()
label_9afa64:
    GameQueueStartUpdate(x0)
    GameNotificationUpdate(GetActiveGameID())
    ControllersUpdate<HitResult>(ClientHitTest, ClientMouseoverAction, ClientHitAction, 
        *gSecondsPerUpdate)
    GameDlgManagerUpdate(*gSecondsPerUpdate)
    GameSpecific_Update(*gSecondsPerUpdate)
    int32_t x8_1 = x0[0xeba].d
    *(x0 + 0x75cc) = 0
    uint64_t var_470
    
    if (x8_1 == 1)
        XString::XString()
        
        if ((NotificationsGetClientToken(&var_470) & 1) != 0)
            GameClientLogin(&var_470)
            x0[0xeba].d = 0
        
        XString::~XString()
    
    int64_t var_468
    int32_t var_68
    
    if ((GameCenterHasNewUserAuth(&var_470, &var_468, &var_68) & 1) != 0)
        void* x0_9 = GetClient()
        
        if (*(x0_9 + 0x18) == 3)
            NetworkSendMessage(zx.q(*(x0_9 + 0x14)), 0xf42ba, 0x410, &var_470)
    
    DLCOwnedLock::DLCOwnedLock()
    int32_t* var_480
    DLCOwnedLock var_478
    int32_t x0_12 = GameCenterGetDLCOwned(&var_480, &var_478)
    
    if (x0_12 s>= 1)
        int64_t x23_1 = 0
        
        while (true)
            if (*(var_480 + x23_1 + 0x544) != 2)
                void* x0_14 = GetActiveProfile()
                int32_t* x22_1 = var_480 + x23_1
                int64_t x0_16 = SkuGetDLC(&x22_1[1], zx.q(*x22_1))
                int32_t x22_3
                
                if (x0_16.d == 0)
                    XTraceAndLog("Unknown DLC for sku %s")
                    x22_3 = 0
                else
                    x22_3 = DomDLCGrantsEntitlement(x0_16)
                
                void* x8_12 = var_480 + x23_1
                
                if (*(x8_12 + 0x544) != 1)
                    *(x0_14 + 0x78a0) = 0
                    *(x8_12 + 0x544) = 1
                
                if (x0[3].d == 3)
                    void* x8_15 = var_480 + x23_1
                    
                    if (zx.d(*(x8_15 + 0x44)) != 0 || zx.d(*(x8_15 + 0x144)) != 0)
                        var_470 = *(x0_14 + 0x42a8)
                        int64_t x0_19 = XString::GetString()
                        int32_t* x8_17 = var_480
                        var_468 = x0_19
                        int32_t var_460_1 = x22_3
                        int32_t x9_2 = *(x8_17 + x23_1)
                        
                        if (x9_2 == 1)
                            x9_2 = 5
                        else if (x9_2 != 4 && x9_2 != 3)
                            break
                        
                        void* x8_3 = x8_17 + x23_1
                        int32_t var_45c_1 = x9_2
                        void* var_458_1 = x8_3 + 0x44
                        void* var_450_1 = x8_3 + 0x144
                        NetworkSendDef(zx.q(*(x0 + 0x14)), 0xf42b9, *defMapPurchaseMessage, 
                            &var_470)
                        *(var_480 + x23_1 + 0x544) = 2
            
            x23_1 += 0x548
            
            if (mulu.dp.d(x0_12, 0x548) == x23_1)
                return DLCOwnedLock::~DLCOwnedLock()
        
        pthread_kill(pthread_self(), 6)
        XNoReturn()
else
    pthread_kill(pthread_self(), 6)
    XNoReturn()

return DLCOwnedLock::~DLCOwnedLock()
