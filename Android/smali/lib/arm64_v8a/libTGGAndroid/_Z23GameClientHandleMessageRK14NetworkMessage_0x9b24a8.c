// 函数: _Z23GameClientHandleMessageRK14NetworkMessage
// 地址: 0x9b24a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = GetClient()

if ((NetIdExists(zx.q(*arg1)) & 1) != 0)
    int32_t x0_4 = NetIdGetProtocol(zx.q(*arg1))
    int32_t x1_1 = *(arg1 + 4)
    int64_t result
    
    if ((x0_4 & 0xfffffffe) != 2)
        result = 0
        
        if (x1_1 s> 0xf4241)
            uint64_t x8_2 = zx.q(x1_1 - 0xf4242)
            
            if (x8_2.d u> 0x2a)
                return result
            
            int32_t var_90
            int32_t var_88
            int32_t var_70
            
            switch (x8_2)
                case 0
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapConnectionResponse, *(arg1 + 8))
                            & 1) != 0)
                        *(arg1 + 0x14)
                        XString::operator=(&x0[4])
                        x0[0xeb8] = *x0
                        uint64_t x8_9 = zx.q(*(arg1 + 0xc))
                        
                        if (x8_9.d u<= 5)
                            switch (x8_9)
                                case 0
                                    *(x0 + 0x1c) = 6
                                case 1
                                    *(x0 + 0x1c) = 4
                                case 2
                                    *(x0 + 0x1c) = 5
                                case 3
                                    *(x0 + 0x1c) = 1
                                case 5
                                    *(x0 + 0x1c) = 8
                case 1
                    *(GetClient() + 0x7778) = 0
                    GameDlgManagerDismiss(9, false)
                    int32_t x8_10 = *(arg1 + 0xc)
                    
                    if (x8_10 == 2)
                        *(x0 + 0x1c) = 7
                    else if (x8_10 == 1)
                        *(x0 + 0x1c) = 3
                    else if (x8_10 != 0)
                        *(x0 + 0x1c) = 7
                    else
                        void* x0_21 = GetActiveProfile()
                        *(x0_21 + 0x42a8) = *(arg1 + 0x10)
                        *(x0_21 + 0x42ac) = *(arg1 + 0x14)
                        XString::operator=(x0_21 + 0x42b0)
                        XString::operator=(x0_21 + 0x42b8)
                        *(x0_21 + 0x42c0) = *(arg1 + 0x64)
                        
                        if ((XString::operator==(x0_21 + 0x42b8) & 1) != 0)
                            XString::operator=(x0_21 + 8)
                        
                        SaveProfiles()
                        SyncedDataOnConnect()
                        SubmitPendingDailyResults()
                case 2
                    int32_t x8_14 = *(arg1 + 0xc)
                    
                    if (x8_14 != 0)
                        if (x8_14 == 1)
                            void* x0_101 = GetActiveProfile()
                            XString::operator=(x0_101 + 0x42b8)
                            XString::operator=(x0_101 + 8)
                            SaveProfiles()
                        else
                            if (x8_14 != 2)
                                goto label_9b3be0
                            
                            void* x0_27 = GetActiveProfile()
                            XString::operator=(x0_27 + 0x42b8)
                            XString::operator=(x0_27 + 8)
                            *(x0_27 + 0x42c0) &= 0xfffffffe
                            SaveProfiles()
                case 3
                    GameProfileHandleEmailCodeResponse(arg1 + 0xc)
                case 4
                    GameDialogAddFriendResponse(arg1 + 0xc)
                case 5
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapFriendMessage, *(arg1 + 8)) & 1)
                            != 0)
                        int32_t x21_2 = *(arg1 + 0x20)
                        
                        if (x21_2 == 0)
                            int32_t x21_10 = *(arg1 + 0x10)
                            void* x0_118 = GetClient()
                            void* x0_119 = GetClient()
                            uint64_t x10_11 = zx.q(*(x0_119 + 0x5028))
                            
                            if (x10_11.d s>= 1)
                                int64_t i = 0
                                int64_t x8_106 = 0
                                void* x11_8 = x0_119 + 0x2c
                                
                                do
                                    if (*x11_8 == x21_10)
                                        if (i.d != 1)
                                            int64_t* x21_13 = x0_118 + 0x28 + (x8_106 s>> 0x1b)
                                            int64_t x9_64 = sx.q(*(x0_118 + 0x5028)) - 1
                                            *(x0_118 + 0x5028) = x9_64.d
                                            void* x19_15 = x0_118 + 0x28 + (x9_64 << 5)
                                            *x21_13 = *x19_15
                                            XString::operator=(&x21_13[1])
                                            *(x21_13 + 0x10) = *(x19_15 + 0x10)
                                            *(x0_118 + 0x502c) = 0
                                        
                                        break
                                    
                                    i -= 1
                                    x8_106 += 0x100000000
                                    x11_8 += 0x20
                                while (neg.q(x10_11) != i)
                        else if (*(arg1 + 0xc) == 0xffffffff)
                            int32_t x22_11 = *(arg1 + 0x10)
                            int64_t x20_25 = *(arg1 + 0x24)
                            void* x0_128 = GetClient()
                            void* x0_129 = GetClient()
                            uint64_t x10_14 = zx.q(*(x0_129 + 0x5028))
                            
                            if (x10_14.d s>= 1)
                                int64_t i_1 = 0
                                int64_t x8_108 = 0
                                void* x11_11 = x0_129 + 0x2c
                                
                                do
                                    if (*x11_11 == x22_11)
                                        if (i_1.d != 1)
                                            void* x8_138 = x0_128 + (x8_108 s>> 0x1b)
                                            *(x8_138 + 0x3c) = x21_2
                                            *(x8_138 + 0x40) = x20_25
                                            *(x0_128 + 0x502c) = 0
                                        
                                        break
                                    
                                    i_1 -= 1
                                    x8_108 += 0x100000000
                                    x11_11 += 0x20
                                while (neg.q(x10_14) != i_1)
                        else
                            SetOrAddFriendDesc(arg1 + 0xc)
                case 6, 0x19, 0x29
                    return result
                case 7
                    SetPresence(zx.q(*(arg1 + 0xc)), arg1 + 0x14)
                case 8
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapGameMessage, *(arg1 + 8)) & 1)
                            != 0)
                        AddGameDesc(arg1 + 0xc)
                case 9
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapGameLogMessage, *(arg1 + 8))
                            & 1) != 0)
                        int32_t x21_3 = *(arg1 + 0xc)
                        void* x0_41 = GetClient()
                        uint64_t x9_4 = zx.q(*(x0_41 + 0x5088))
                        
                        if (x9_4.d != 0)
                            void* i_12 = *(x0_41 + 0x5080)
                            int64_t x9_5 = i_12 + x9_4 * 0x1338
                            void* i_2 = i_12
                            
                            do
                                if (zx.d(*(i_2 + 0x1332)) != 0)
                                    while (i_2 != 0xffffffff)
                                        if (*i_2 == x21_3)
                                            int32_t x21_14 = *(i_2 + 0x1330)
                                            
                                            if (x21_14 != 0)
                                                AddGameLogNetwork_Old(arg1 + 0xc, zx.q(x21_14))
                                                
                                                if (*(arg1 + 0x1c) s>= 2)
                                                    *(GetClient() + 0x5044) = 6
                                                    *(GetClient() + 0x5070) = 2
                                                    *(GetClient() + 0x5074) = x21_14
                                            
                                            break
                                        
                                        if (i_2 == 0)
                                            i_2 = i_12
                                        else
                                            i_2 += 0x1338
                                        
                                        if (i_2 u>= x9_5)
                                            break
                                        
                                        while (zx.d(*(i_2 + 0x1332)) == 0)
                                            i_2 += 0x1338
                                            
                                            if (i_2 u>= x9_5)
                                                return 1
                                    
                                    break
                                
                                i_2 += 0x1338
                            while (i_2 u< x9_5)
                case 0xa
                    RematchResponse(arg1 + 0xc)
                case 0xb
                    x0[2].d = *(arg1 + 0xc)
                case 0xc
                    int32_t x20_5 = *(arg1 + 0xc)
                    void* x0_43 = GetClient()
                    uint64_t x9_6 = zx.q(*(x0_43 + 0x5088))
                    void* i_13
                    int64_t x9_7
                    void* i_3
                    
                    if (x9_6.d != 0)
                        i_13 = *(x0_43 + 0x5080)
                        x9_7 = i_13 + x9_6 * 0x1338
                        i_3 = i_13
                        
                        while (zx.d(*(i_3 + 0x1332)) == 0)
                            i_3 += 0x1338
                            
                            if (i_3 u>= x9_7)
                                goto label_9b31c8
                    
                    int32_t x13_4
                    
                    if (x9_6.d == 0 || i_3 == 0xffffffff)
                    label_9b31c8:
                        x13_4 = 0
                    else
                        do
                            if (*i_3 == x20_5)
                                x13_4 = *(i_3 + 0x1330)
                                
                                if (x0[0xa0d].d != 2)
                                    goto label_9b25f8
                                
                                goto label_9b31dc
                            
                            if (i_3 == 0)
                                i_3 = i_13
                            else
                                i_3 += 0x1338
                            
                            if (i_3 u>= x9_7)
                                goto label_9b31c8
                            
                            while (zx.d(*(i_3 + 0x1332)) == 0)
                                i_3 += 0x1338
                                
                                if (i_3 u>= x9_7)
                                    goto label_9b31c8
                            
                            x13_4 = 0
                        while (i_3 != 0xffffffff)
                    
                    if (x0[0xa0d].d == 2)
                    label_9b31dc:
                        
                        if (*(x0 + 0x506c) == x13_4)
                            int32_t x23_6 = *(GetActiveProfile() + 0x42ac)
                            int32_t x24_3 = *(arg1 + 0x10)
                            void* x0_105 = GetClient()
                            int32_t x9_43 = *(x0_105 + 0x5068)
                            void* x8_83
                            
                            if (x9_43 - 3 u< 2 || x9_43 == 1)
                                x8_83 = x0_105 + 0x50a8
                            else
                                if (x9_43 != 2)
                                    goto label_9b3be0
                                
                                x8_83 = *(GetClient() + 0x5080) + zx.q(*(x0_105 + 0x506c)) * 0x1338
                            
                            uint64_t x9_52 = zx.q(*(x8_83 + 0x11b4))
                            
                            if (x9_52.d s< 1)
                                goto label_9b3be0
                            
                            PlayerConfig_V1* x20_24 = x8_83 + 0x54
                            
                            while (*(x20_24 + 0x14) != 1 || *(x20_24 + 0x18) != *(arg1 + 0x10))
                                uint64_t temp0_1 = x9_52
                                x9_52 -= 1
                                x20_24 += 0x22c
                                
                                if (temp0_1 == 1)
                                    goto label_9b3be0
                            
                            PlayerAvatarType var_54
                            PlayerGetNameAvatar(x8_83 + 8, x20_24, &var_54)
                            XString::XString()
                            XString::XString()
                            XString var_98
                            GameDismissDlgStrings(zx.q(*(arg1 + 0x14)), (x23_6 == x24_3 ? 1 : 0).b, 
                                XString::operator char const*(), &var_70, &var_98)
                            int64_t x0_123
                            
                            if (*(arg1 + 0x14) == 1)
                                x0_123 = 6
                            else
                                x0_123 = 5
                            
                            GameSepcific_NotifyGameEnd(x0_123, zx.q(*(x20_24 + 0x1c)))
                            char var_a0
                            char* x0_124 = &var_a0
                            char var_a8
                            void (* x5_1)()
                            
                            if (x23_6 != x24_3)
                                XString::XString(x0_124)
                                XString::XString(&var_a8)
                                x5_1 = j_ToggleScore
                            else
                                XString::XString(x0_124)
                                XString::XString(&var_a8)
                                x5_1 = j_ToggleScore
                            
                            GameMsgBox(&var_70, &var_98, 0x20, &var_a0, &var_a8, x5_1, nullptr)
                            XString::~XString()
                            XString::~XString()
                            XString::~XString()
                            XString::~XString()
                            XString::~XString()
                case 0xd
                    if (*(arg1 + 0xc) != 0)
                    label_9b3be0:
                        pthread_kill(pthread_self(), 6)
                        return GetNetworkGame(XNoReturn()) __tailcall
                    
                    *(GetActiveProfile() + 0x4324) = 2
                    SaveProfiles()
                    ClientNetworkClose(true, true)
                case 0x10
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapEntitlementMessage, *(arg1 + 8))
                            & 1) != 0)
                        GameProfile* x0_47 = GetActiveProfile()
                        
                        if (*(arg1 + 0x30) != 4)
                            ProfileAddEntitlement(x0_47, arg1 + 0xc)
                            SaveProfiles()
                        else
                            ProfileRemoveEntitlement(x0_47, zx.q(*(arg1 + 0x24)))
                            SaveProfiles()
                case 0x11
                    int32_t x20_7 = *(arg1 + 0x10)
                    void* x0_48 = GetClient()
                    uint64_t x9_8 = zx.q(*(x0_48 + 0x5088))
                    void* i_14
                    int64_t x9_9
                    void* i_4
                    
                    if (x9_8.d != 0)
                        i_14 = *(x0_48 + 0x5080)
                        x9_9 = i_14 + x9_8 * 0x1338
                        i_4 = i_14
                        
                        while (zx.d(*(i_4 + 0x1332)) == 0)
                            i_4 += 0x1338
                            
                            if (i_4 u>= x9_9)
                                goto label_9b3294
                    
                    uint64_t x1_35
                    
                    if (x9_8.d == 0 || i_4 == 0xffffffff)
                    label_9b3294:
                        x1_35 = 0
                    else
                        do
                            if (*i_4 == x20_7)
                                x1_35 = zx.q(*(i_4 + 0x1330))
                                break
                            
                            if (i_4 == 0)
                                i_4 = i_14
                            else
                                i_4 += 0x1338
                            
                            if (i_4 u>= x9_9)
                                goto label_9b3294
                            
                            while (zx.d(*(i_4 + 0x1332)) == 0)
                                i_4 += 0x1338
                                
                                if (i_4 u>= x9_9)
                                    goto label_9b3294
                            
                            x1_35 = 0
                        while (i_4 != 0xffffffff)
                    
                    GameUndoHandleRequest(arg1 + 0xc, x1_35)
                case 0x12
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapGameLogPlayerMessage, 
                            *(arg1 + 8)) & 1) != 0)
                        int32_t x20_8 = *(arg1 + 0xc)
                        void* x0_51 = GetClient()
                        uint64_t x9_10 = zx.q(*(x0_51 + 0x5088))
                        
                        if (x9_10.d != 0)
                            void* i_15 = *(x0_51 + 0x5080)
                            int64_t x9_11 = i_15 + x9_10 * 0x1338
                            void* i_5 = i_15
                            
                            do
                                if (zx.d(*(i_5 + 0x1332)) != 0)
                                    while (i_5 != 0xffffffff)
                                        if (*i_5 == x20_8)
                                            uint64_t x1_48 = zx.q(*(i_5 + 0x1330))
                                            
                                            if (x1_48.d != 0)
                                                AddGameLogNetwork(arg1 + 0xc, x1_48)
                                            
                                            break
                                        
                                        if (i_5 == 0)
                                            i_5 = i_15
                                        else
                                            i_5 += 0x1338
                                        
                                        if (i_5 u>= x9_11)
                                            break
                                        
                                        while (zx.d(*(i_5 + 0x1332)) == 0)
                                            i_5 += 0x1338
                                            
                                            if (i_5 u>= x9_11)
                                                goto label_9b25f8
                                    
                                    break
                                
                                i_5 += 0x1338
                            while (i_5 u< x9_11)
                case 0x13
                    int32_t x19_7 = *(arg1 + 0xc)
                    void* x0_52 = GetClient()
                    uint64_t x9_12 = zx.q(*(x0_52 + 0x5088))
                    void* i_16
                    int64_t x9_13
                    void* i_6
                    
                    if (x9_12.d != 0)
                        i_16 = *(x0_52 + 0x5080)
                        x9_13 = i_16 + x9_12 * 0x1338
                        i_6 = i_16
                        
                        while (zx.d(*(i_6 + 0x1332)) == 0)
                            i_6 += 0x1338
                            
                            if (i_6 u>= x9_13)
                                goto label_9b3300
                    
                    int32_t x20_21
                    
                    if (x9_12.d == 0 || i_6 == 0xffffffff)
                    label_9b3300:
                        x20_21 = 0
                    else
                        do
                            if (*i_6 == x19_7)
                                x20_21 = *(i_6 + 0x1330)
                                break
                            
                            if (i_6 == 0)
                                i_6 = i_16
                            else
                                i_6 += 0x1338
                            
                            if (i_6 u>= x9_13)
                                goto label_9b3300
                            
                            while (zx.d(*(i_6 + 0x1332)) == 0)
                                i_6 += 0x1338
                                
                                if (i_6 u>= x9_13)
                                    goto label_9b3300
                            
                            x20_21 = 0
                        while (i_6 != 0xffffffff)
                    
                    *(GetClient() + 0x5044) = 6
                    *(GetClient() + 0x5070) = 2
                    *(GetClient() + 0x5074) = x20_21
                case 0x14
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapSharedSeedSetupMsg, *(arg1 + 8))
                            & 1) != 0)
                        int32_t x8_19 = *(arg1 + 0xc)
                        
                        if (x8_19 == 2)
                            void* x0_111 = GetClient()
                            
                            if (*(arg1 + 0x1c) s>= 1)
                                int64_t i_7 = 0
                                
                                do
                                    int64_t x22_8 = i_7 << 5
                                    void* x8_95 = *(arg1 + 0x14) + x22_8
                                    var_70 = *(x8_95 + 0xc)
                                    char x9_47 = (*(x8_95 + 8)).b
                                    int32_t x8_96 = *(x8_95 + 4)
                                    var_90 = 0
                                    XString::XString()
                                    int32_t var_80_1 = 0
                                    int32_t* x8_98 = *(arg1 + 0x14) + x22_8
                                    var_90 = *x8_98
                                    *(x8_98 + 0x10)
                                    XString::operator=(&var_88)
                                    int32_t x8_101 = *(*(arg1 + 0x14) + x22_8 + 0x18)
                                    uint64_t x25_3 = ((0xffff00ff & zx.q(var_70 << 0x10))
                                        | zx.q(zx.d(x9_47) << 8) | zx.q(x8_96.b))
                                        & zx.q(*(x0_111 + 0x75f0))
                                    Date* x22_9 = *(*(x0_111 + 0x75e8) + (x25_3 << 3))
                                    
                                    if (x22_9 == 0)
                                    label_9b3380:
                                        int64_t* x0_112 = XPooledMalloc(0x30)
                                        *x0_112 = var_70.q
                                        x0_112[1].d = x8_96
                                        x0_112[2].d = var_90
                                        XString::XString(&x0_112[3])
                                        uint64_t x9_45 = x25_3 << 3
                                        x0_112[4].d = x8_101
                                        x0_112[5] = *(*(x0_111 + 0x75e8) + x9_45)
                                        *(*(x0_111 + 0x75e8) + x9_45) = x0_112
                                        *(x0_111 + 0x75f4) += 1
                                    else
                                        while (true)
                                            if ((operator==(&var_70, x22_9) & 1) != 0)
                                                *(x22_9 + 0x10) = var_90
                                                XString::operator=(x22_9 + 0x18)
                                                *(x22_9 + 0x20) = x8_101
                                                break
                                            
                                            x22_9 = *(x22_9 + 0x28)
                                            
                                            if (x22_9 == 0)
                                                goto label_9b3380
                                    
                                    XString::~XString()
                                    i_7 += 1
                                while (i_7 s< sx.q(*(arg1 + 0x1c)))
                        else
                            if (x8_19 != 1)
                                goto label_9b3be0
                            
                            void* x0_55 = GetClient()
                            
                            if (*(arg1 + 0x1c) s>= 1)
                                int64_t i_8 = 0
                                
                                do
                                    int64_t x23_1 = i_8 << 5
                                    void* x8_23 = *(arg1 + 0x14) + x23_1
                                    var_70 = *(x8_23 + 0xc)
                                    char x9_15 = (*(x8_23 + 8)).b
                                    int32_t x8_24 = *(x8_23 + 4)
                                    var_90 = 0
                                    XString::XString()
                                    int32_t var_80
                                    var_80.q = 0
                                    int32_t* x8_26 = *(arg1 + 0x14) + x23_1
                                    var_90 = *x8_26
                                    *(x8_26 + 0x10)
                                    XString::operator=(&var_88)
                                    uint64_t x26_1 = ((0xffff00ff & zx.q(var_70 << 0x10))
                                        | zx.q(zx.d(x9_15) << 8) | zx.q(x8_24.b))
                                        & zx.q(*(x0_55 + 0x75e0))
                                    Date* x23_2 = *(*(x0_55 + 0x75d8) + (x26_1 << 3))
                                    
                                    if (x23_2 == 0)
                                    label_9b2be8:
                                        int64_t* x0_59 = XPooledMalloc(0x30)
                                        *x0_59 = var_70.q
                                        x0_59[1].d = x8_24
                                        x0_59[2].d = var_90
                                        XString::XString(&x0_59[3])
                                        uint64_t x9_19 = x26_1 << 3
                                        x0_59[4] = var_80.q
                                        x0_59[5] = *(*(x0_55 + 0x75d8) + x9_19)
                                        *(*(x0_55 + 0x75d8) + x9_19) = x0_59
                                        *(x0_55 + 0x75e4) += 1
                                    else
                                        while (true)
                                            if ((operator==(&var_70, x23_2) & 1) != 0)
                                                *(x23_2 + 0x10) = var_90
                                                XString::operator=(x23_2 + 0x18)
                                                *(x23_2 + 0x20) = var_80.q
                                                break
                                            
                                            x23_2 = *(x23_2 + 0x28)
                                            
                                            if (x23_2 == 0)
                                                goto label_9b2be8
                                    
                                    if ((operator>(&var_70, x0_55 + 0x75f8) & 1) != 0)
                                        int64_t x9_20 = var_70.q
                                        *(x0_55 + 0x7600) = x8_24
                                        *(x0_55 + 0x75f8) = x9_20
                                    
                                    XString::~XString()
                                    i_8 += 1
                                while (i_8 s< sx.q(*(arg1 + 0x1c)))
                case 0x15
                    void* x0_9
                    int128_t v0_1
                    x0_9, v0_1 = GetActiveProfile()
                    int32_t x8_6 = *(arg1 + 0x1c)
                    *(x0_9 + 0x771c) = *(arg1 + 0xc)
                    *(x0_9 + 0x772c) = x8_6
                case 0x16
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapDailySeedPlayerStatusMsg, 
                            *(arg1 + 8)) & 1) != 0)
                        void* x0_66
                        int128_t v0_2
                        x0_66, v0_2 = GetActiveProfile()
                        int32_t x8_42 = *(arg1 + 0xc)
                        
                        if (x8_42 != 0)
                            int32_t x9_21 = *(arg1 + 0x10)
                            var_88 = 1
                            var_90 = x8_42
                            int32_t var_8c_1 = x9_21
                            uint64_t x24_1 = (zx.q(((x9_21 & 0xff) << 8).w)
                                | zx.q((0xffff & x8_42) << 0x10) | 1) & zx.q(*(x0_66 + 0x7738))
                            Date* x21_5 = *(*(x0_66 + 0x7730) + (x24_1 << 3))
                            
                            if (x21_5 == 0)
                            label_9b2d08:
                                int64_t* x0_69
                                x0_69, v0_2 = XPooledMalloc(0x18)
                                int32_t x9_24 = var_88
                                *x0_69 = var_90.q
                                x0_69[1].d = x9_24
                                *(x0_69 + 0xc) = 1
                                uint64_t x9_25 = x24_1 << 3
                                x0_69[2] = *(*(x0_66 + 0x7730) + x9_25)
                                *(*(x0_66 + 0x7730) + x9_25) = x0_69
                                *(x0_66 + 0x773c) += 1
                            else
                                while (true)
                                    int32_t x0_68
                                    x0_68, v0_2 = operator==(&var_90, x21_5)
                                    
                                    if ((x0_68 & 1) != 0)
                                        *(x21_5 + 0xc) = 1
                                        break
                                    
                                    x21_5 = *(x21_5 + 0x10)
                                    
                                    if (x21_5 == 0)
                                        goto label_9b2d08
                        
                        if (*(arg1 + 0x1c) s>= 1)
                            int64_t x21_12 = 0
                            
                            while (true)
                                int32_t* x25_4 = *(arg1 + 0x14) + x21_12 * 0x14
                                int32_t x8_119 = x25_4[4]
                                var_90.o = *x25_4
                                int32_t i_9 = *x25_4
                                uint64_t x26_2 =
                                    (zx.q(i_9) | zx.q(i_9 s>> 4)) & zx.q(*(x0_66 + 0x7748))
                                int32_t* x9_55 = *(*(x0_66 + 0x7740) + (x26_2 << 3))
                                
                                if (x9_55 == 0)
                                label_9b37e4:
                                    int32_t* x0_130
                                    x0_130, v0_2 = XPooledMalloc(0x28)
                                    uint64_t x9_53 = x26_2 << 3
                                    *x0_130 = *x25_4
                                    *(x0_130 + 4) = var_90.o
                                    x0_130[5] = x8_119
                                    x0_130[6] = 1
                                    *(x0_130 + 0x20) = *(*(x0_66 + 0x7740) + x9_53)
                                    *(*(x0_66 + 0x7740) + x9_53) = x0_130
                                    *(x0_66 + 0x774c) += 1
                                    x21_12 += 1
                                    
                                    if (x21_12 s>= sx.q(*(arg1 + 0x1c)))
                                        break
                                else
                                    while (i_9 != *x9_55)
                                        x9_55 = *(x9_55 + 0x20)
                                        
                                        if (x9_55 == 0)
                                            goto label_9b37e4
                                    
                                    *(x9_55 + 4) = var_90.o
                                    x9_55[5] = x8_119
                                    x9_55[6] = 1
                                    x21_12 += 1
                                    
                                    if (x21_12 s>= sx.q(*(arg1 + 0x1c)))
                                        break
                case 0x17, 0x18, 0x24
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapLeaderboard, *(arg1 + 8)) & 1)
                            != 0)
                        int32_t x8_3 = *(arg1 + 4)
                        void* x0_8
                        int64_t x8_4
                        
                        if (x8_3 == 0xf4259)
                            x0_8 = GetClient()
                            x8_4 = 0x7608
                        else if (x8_3 == 0xf425a)
                            x0_8 = GetActiveProfile()
                            x8_4 = 0x75a8
                        else
                            if (x8_3 != 0xf4266)
                                goto label_9b3be0
                            
                            x0_8 = GetClient()
                            x8_4 = 0x7780
                        
                        void* x20_19 = x0_8 + x8_4
                        *(x20_19 + 0x168) = 0
                        
                        if (*(arg1 + 0x14) s>= 1)
                            int64_t x21_9 = 0
                            int32_t x8_72 = 0
                            int64_t x22_6 = 1
                            
                            while (true)
                                *(x20_19 + 0x168) = x8_72 + 1
                                void* x24_2 = x20_19 + muls.dp.d(x8_72, 0x18)
                                *x24_2 = *(*(arg1 + 0xc) + x21_9)
                                *(*(arg1 + 0xc) + x21_9 + 8)
                                XString::operator=(x24_2 + 8)
                                *(x24_2 + 0x10) = *(*(arg1 + 0xc) + x21_9 + 0x10)
                                
                                if (x22_6 s>= sx.q(*(arg1 + 0x14)))
                                    break
                                
                                x8_72 = *(x20_19 + 0x168)
                                x21_9 += 0x18
                                x22_6 += 1
                case 0x1a
                    *(GetClient() + 0x7778) = 1
                    GameDlgManagerShow(0x26, 9)
                case 0x1b
                    int32_t x19_8 = *(arg1 + 0xc)
                    int32_t* x8_50 = GetClient() + 0x7778
                    *x8_50 = 2
                    x8_50[1] = x19_8
                    GameDlgManagerShow(0x26, 9)
                    SoundPlayIgnoreFocusLoss(
                        *SOUND_SOUND_LOAD_ALWAYS_FX_MATCHMAKE_JOIN_BECAME_AVAILABLE)
                case 0x1c
                    if (*(GetActiveProfile() + 0x42ac) == *(arg1 + 0xc))
                        *(GetActiveProfile() + 0x7ca4) = 1
                        void* x0_75 = GetActiveProfile()
                        int64_t x9_27 = *(arg1 + 0x10)
                        *(x0_75 + 0x7cb0) = *(arg1 + 0x18)
                        *(x0_75 + 0x7ca8) = x9_27
                case 0x1d
                    GameClient_HandlePlayerSyncedData(arg1 + 0xc)
                case 0x1e
                    XString::operator=(GetActiveProfile())
                    *(GetActiveProfile() + 0x42c8) = *(arg1 + 0xc)
                    SaveProfiles()
                case 0x1f
                    *(GetActiveProfile() + 0x10) = *(arg1 + 0x14)
                    *(GetActiveProfile() + 0x42d0) = *(arg1 + 0xc)
                    SaveProfiles()
                case 0x20
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapSetBans, *(arg1 + 8)) & 1) != 0)
                        memcpy(GetActiveProfile() + 0x5964, *(arg1 + 0x14), 
                            sx.q(*(arg1 + 0x1c)) << 2)
                        *(GetActiveProfile() + 0x6454) = *(arg1 + 0x1c)
                        *(GetActiveProfile() + 0x42e0) = *(arg1 + 0xc)
                        SaveProfiles()
                case 0x21
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapSetSmartplays, *(arg1 + 8)) & 1)
                            != 0)
                        memcpy(GetActiveProfile() + 0x5760, *(arg1 + 0x14), 
                            sx.q(*(arg1 + 0x1c)) << 3)
                        *(GetActiveProfile() + 0x5960) = *(arg1 + 0x1c)
                        *(GetActiveProfile() + 0x42c8) = *(arg1 + 0xc)
                        SaveProfiles()
                case 0x22
                    void* x0_86 = GetActiveProfile()
                    int32_t x9_28 = *(arg1 + 0x1c)
                    *(x0_86 + 0x7574) = *(arg1 + 0x14)
                    *(x0_86 + 0x757c) = x9_28
                    *(GetActiveProfile() + 0x42f0) = *(arg1 + 0xc)
                    SaveProfiles()
                case 0x23
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapGameSmartplays, *(arg1 + 8))
                            & 1) != 0)
                        int32_t x20_16 = *(arg1 + 0xc)
                        void* x0_90 = GetClient()
                        uint64_t x9_29 = zx.q(*(x0_90 + 0x5088))
                        
                        if (x9_29.d != 0)
                            void* x8_55 = *(x0_90 + 0x5080)
                            int64_t x9_30 = x8_55 + x9_29 * 0x1338
                            void* x10_5 = x8_55
                            
                            while (zx.d(*(x10_5 + 0x1332)) == 0)
                                x10_5 += 0x1338
                                
                                if (x10_5 u>= x9_30)
                                    goto label_9b25f8
                            
                            if (x10_5 != 0xffffffff)
                                while (true)
                                    if (*x10_5 == x20_16)
                                        int32_t x20_26 = *(x10_5 + 0x1330)
                                        
                                        if (x20_26 == 0)
                                            goto label_9b25f8
                                        
                                        int64_t x10_23 = *(GetClient() + 0x5080)
                                        uint64_t x11_16 = zx.q(x20_26.w)
                                        uint64_t x8_142 = zx.q(*(x10_23 + x11_16 * 0x1338 + 0x11b4))
                                        
                                        if (x8_142.d s< 1)
                                            break
                                        
                                        void* x20_27 = x10_23 + x11_16 * 0x1338
                                        
                                        while (*(x20_27 + 0x68) != 1
                                                || *(x20_27 + 0x6c) != *(arg1 + 0x10))
                                            uint64_t temp1_1 = x8_142
                                            x8_142 -= 1
                                            x20_27 += 0x22c
                                            
                                            if (temp1_1 == 1)
                                                goto label_9b3be0
                                        
                                        memcpy(x20_27 + 0x7c, *(arg1 + 0x14), 
                                            sx.q(*(arg1 + 0x1c)) << 3)
                                        *(x20_27 + 0x27c) = *(arg1 + 0x1c)
                                        goto label_9b25f8
                                    
                                    if (x10_5 == 0)
                                        x10_5 = x8_55
                                    else
                                        x10_5 += 0x1338
                                    
                                    if (x10_5 u>= x9_30)
                                        goto label_9b25f8
                                    
                                    while (zx.d(*(x10_5 + 0x1332)) == 0)
                                        x10_5 += 0x1338
                                        
                                        if (x10_5 u>= x9_30)
                                            goto label_9b25f8
                                    
                                    if (x10_5 == 0xffffffff)
                                        goto label_9b25f8
                                
                                goto label_9b3be0
                case 0x25
                    GameCreateDlgHandleJoinByCodeResponse(arg1 + 0xc)
                case 0x26
                    ClientHandleServerNotification(arg1 + 0xc)
                case 0x27
                    uint64_t x8_56 = *gSyncedData
                    
                    if (x8_56 != 0)
                        *(x8_56 + 0x20) = *(arg1 + 0xc)
                        SaveProfiles()
                case 0x28
                    uint64_t x20_17 = *gSyncedData
                    
                    if (x20_17 != 0)
                        int32_t i_10 = *(arg1 + 0x14)
                        int64_t x23_4 = *(arg1 + 0xc)
                        uint64_t x21_6 = (zx.q(i_10) | zx.q(i_10 s>> 4)) & zx.q(*(x20_17 + 0x18))
                        int32_t* x9_33 = *(*(x20_17 + 0x10) + (x21_6 << 3))
                        int64_t x22_5 = *(arg1 + 0x1c)
                        
                        if (x9_33 == 0)
                        label_9b2f80:
                            int32_t* x0_92 = XPooledMalloc(0x20)
                            int32_t x8_57 = *(arg1 + 0x14)
                            *(x0_92 + 8) = x23_4
                            *(x0_92 + 0x10) = x22_5
                            uint64_t x9_34 = x21_6 << 3
                            *x0_92 = x8_57
                            *(x0_92 + 0x18) = *(*(x20_17 + 0x10) + x9_34)
                            *(*(x20_17 + 0x10) + x9_34) = x0_92
                            *(x20_17 + 0x1c) += 1
                        else
                            while (i_10 != *x9_33)
                                x9_33 = *(x9_33 + 0x18)
                                
                                if (x9_33 == 0)
                                    goto label_9b2f80
                            
                            *(x9_33 + 8) = x23_4
                            *(x9_33 + 0x10) = x22_5
                case 0x2a
                    if ((DefBinFixupBlockInPlace(arg1 + 0xc, *defMapWeeklyPlayerStatusMsg, 
                            *(arg1 + 8)) & 1) != 0)
                        void* x0_95
                        int128_t v0_3
                        int128_t v1_1
                        int128_t v2_1
                        int128_t v3_1
                        x0_95, v0_3, v1_1, v2_1, v3_1 = GetActiveProfile()
                        int32_t x8_63 = *(arg1 + 0xc)
                        
                        if (x8_63 != 0)
                            int32_t x9_35 = *(arg1 + 0x10)
                            var_88 = 1
                            var_90 = x8_63
                            int32_t var_8c_2 = x9_35
                            uint64_t x25_2 = (zx.q(((x9_35 & 0xff) << 8).w)
                                | zx.q((0xffff & x8_63) << 0x10) | 1) & zx.q(*(x0_95 + 0x7738))
                            Date* x21_8 = *(*(x0_95 + 0x7730) + (x25_2 << 3))
                            
                            if (x21_8 == 0)
                            label_9b303c:
                                int64_t* x0_98
                                x0_98, v0_3, v1_1, v2_1, v3_1 = XPooledMalloc(0x18)
                                int32_t x9_38 = var_88
                                *x0_98 = var_90.q
                                x0_98[1].d = x9_38
                                *(x0_98 + 0xc) = 1
                                uint64_t x9_39 = x25_2 << 3
                                x0_98[2] = *(*(x0_95 + 0x7730) + x9_39)
                                *(*(x0_95 + 0x7730) + x9_39) = x0_98
                                *(x0_95 + 0x773c) += 1
                            else
                                while (true)
                                    int32_t x0_97
                                    x0_97, v0_3, v1_1, v2_1, v3_1 = operator==(&var_90, x21_8)
                                    
                                    if ((x0_97 & 1) != 0)
                                        *(x21_8 + 0xc) = 1
                                        break
                                    
                                    x21_8 = *(x21_8 + 0x10)
                                    
                                    if (x21_8 == 0)
                                        goto label_9b303c
                        
                        if (*(arg1 + 0x1c) s>= 1)
                            int64_t i_11 = 0
                            
                            do
                                int32_t* x27_1 = *(arg1 + 0x14) + i_11 * 0x94
                                int32_t j = *x27_1
                                uint64_t x28_1 = (zx.q(j) | zx.q(j s>> 4)) & zx.q(*(x0_95 + 0x7758))
                                int32_t* x8_126 = *(*(x0_95 + 0x7750) + (x28_1 << 3))
                                
                                if (x8_126 == 0)
                                label_9b3928:
                                    int32_t* x0_132
                                    x0_132, v0_3, v1_1, v2_1, v3_1 = XPooledMalloc(0xa0)
                                    uint64_t x9_56 = x28_1 << 3
                                    *x0_132 = *x27_1
                                    v1_1 = *(x27_1 + 0x70)
                                    v0_3 = *(x27_1 + 0x80)
                                    v2_1 = *(x27_1 + 0x60)
                                    x0_132[0x25] = x27_1[0x24]
                                    *(x0_132 + 0x84) = v0_3
                                    *(x0_132 + 0x74) = v1_1
                                    *(x0_132 + 0x64) = v2_1
                                    v1_1 = *(x27_1 + 0x40)
                                    v3_1 = *(x27_1 + 0x20)
                                    v2_1 = *(x27_1 + 0x30)
                                    *(x0_132 + 0x54) = *(x27_1 + 0x50)
                                    *(x0_132 + 0x44) = v1_1
                                    *(x0_132 + 0x34) = v2_1
                                    *(x0_132 + 0x24) = v3_1
                                    v1_1 = *x27_1
                                    *(x0_132 + 0x14) = *(x27_1 + 0x10)
                                    *(x0_132 + 4) = v1_1
                                    *(x0_132 + 0x98) = *(*(x0_95 + 0x7750) + x9_56)
                                    *(*(x0_95 + 0x7750) + x9_56) = x0_132
                                    *(x0_95 + 0x775c) += 1
                                    
                                    if (x0[0xa0e].d == 2)
                                    label_9b3a04:
                                        int32_t* x8_137 =
                                            *(GetClient() + 0x5080) + zx.q(*(x0 + 0x5074)) * 0x1338
                                        
                                        if (*x8_137 == 0)
                                            int32_t* x9_59 = *(arg1 + 0x14)
                                            uint64_t x10_20 = zx.q(x8_137[7])
                                            
                                            if (x9_59[i_11 * 0x25] == x10_20.d s>> 4)
                                                *x8_137 = *(x9_59 + i_11 * 0x94
                                                    + (x10_20 & 0xf) * 0xc + 0x1c)
                                        
                                        v0_3, v1_1, v2_1, v3_1 =
                                            GameResumeMultiplayer(zx.q(*(x0 + 0x5074)))
                                else
                                    while (j != *x8_126)
                                        x8_126 = *(x8_126 + 0x98)
                                        
                                        if (x8_126 == 0)
                                            goto label_9b3928
                                    
                                    v1_1 = *x27_1
                                    *(x8_126 + 0x14) = *(x27_1 + 0x10)
                                    *(x8_126 + 4) = v1_1
                                    v1_1 = *(x27_1 + 0x40)
                                    v3_1 = *(x27_1 + 0x20)
                                    v2_1 = *(x27_1 + 0x30)
                                    *(x8_126 + 0x54) = *(x27_1 + 0x50)
                                    *(x8_126 + 0x44) = v1_1
                                    *(x8_126 + 0x34) = v2_1
                                    *(x8_126 + 0x24) = v3_1
                                    v1_1 = *(x27_1 + 0x70)
                                    v0_3 = *(x27_1 + 0x80)
                                    v2_1 = *(x27_1 + 0x60)
                                    x8_126[0x25] = x27_1[0x24]
                                    *(x8_126 + 0x84) = v0_3
                                    *(x8_126 + 0x74) = v1_1
                                    *(x8_126 + 0x64) = v2_1
                                    
                                    if (x0[0xa0e].d == 2)
                                        goto label_9b3a04
                                
                                i_11 += 1
                            while (i_11 s< sx.q(*(arg1 + 0x1c)))
        else if (x1_1 == 0x3ea)
            x0[3].d = 3
            *(GetClient() + 0x75d0) = 1
        else if (x1_1 == 0x3eb)
            x0[3].d = 0
        else
            if (x1_1 != 0x3ec)
                return result
            
            x0[3].d = 0
            ClientNetworkClose(true, true)
            
            if (*(x0 + 0x1c) == 6)
                *(x0 + 0x1c) = 0
    else
        result = 1
        
        if (x1_1 s<= 0xf9f)
            if (x1_1 == 0x3ea)
                return result
            
            if (x1_1 != 0x3eb)
                XTrace("Analytics unknown message type %d")
            else
                XTrace("analytics connect failed")
        else
            if (x1_1 == 0xfa2)
                return result
            
            if (x1_1 == 0xfa1)
                XTrace("analytics connect failed")
            else if (x1_1 != 0xfa0)
                XTrace("Analytics unknown message type %d")
            else
                NetworkCloseConnection(zx.q(*arg1))

label_9b25f8:
return 1
