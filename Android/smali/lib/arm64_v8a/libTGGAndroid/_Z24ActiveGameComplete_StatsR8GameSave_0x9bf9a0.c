// 函数: _Z24ActiveGameComplete_StatsR8GameSave
// 地址: 0x9bf9a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_5094_1
int32_t var_5090
int32_t var_6c
int32_t var_68
int32_t var_64

if (*(GetClient() + 0x5068) != 1 || *(arg1 + 0x2c) == 2)
    var_5094_1 = 0
label_9bff04:
    
    if (*(GetClient() + 0x5068) == 2 && *(arg1 + 0x2c) != 2)
        uint64_t x0_67 = zx.q(*arg1)
        *(arg1 + 0x2c) = 2
        
        if ((IsCampaignMission(x0_67, &var_64) & 1) == 0)
            int128_t var_508c_1
            __builtin_memset(&var_508c_1, 0, 0x40)
            var_5090 = *arg1
            
            if (*(arg1 + 0x11b4) s>= 1)
                int64_t i = 0
                void* __offset(GameSave, 0x70) x22_5 = arg1 + 0x70
                int128_t var_506c
                int128_t* x24_3 = &var_506c
                
                do
                    int32_t x20_2
                    
                    if (*(x22_5 - 8) != 1)
                        x20_2 = 0
                    else
                        x20_2 = *(x22_5 - 4)
                    
                    x24_3[-2].d = x20_2
                    *x24_3 = GameSpecific_GetRank(arg1, zx.q(*x22_5), false, &var_68, &var_6c)
                    
                    if (x20_2 == *(GetActiveProfile() + 0x42ac) && *x24_3 == 1
                            && (zx.d(*(GetActiveProfile() + 0x4344)) & 1) == 0)
                        void* x0_86 = GetActiveProfile()
                        *(x0_86 + 0x4344) |= 1
                        SaveProfiles()
                    
                    i += 1
                    x22_5 += 0x22c
                    x24_3 += 4
                while (i s< sx.q(*(arg1 + 0x11b4)))
            
            NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42b8, 0x44, &var_5090)
        else
            CampaignStatus* x0_69 = CampaignGetStatus()
            int32_t x21_2 = var_64
            void* x0_71 = CampaignMissionStatus(x21_2)
            int32_t x8_39 = *(arg1 + 0x11b4)
            
            if (x8_39 s>= 1)
                int64_t i_1 = 0
                void* __offset(GameSave, 0x70) x28_1 = arg1 + 0x70
                
                do
                    if (*(x28_1 - 8) == 1)
                        int32_t x0_73 = IsWinner(arg1, zx.q(*x28_1), &var_5090, &var_68)
                        int32_t x0_75 = GameSetupAILevelFlag(arg1 + 8)
                        
                        if ((x0_73 & 1) != 0 && (zx.d(*(arg1 + 0x20)) & 1) == 0)
                            int32_t x8_41 = *(x0_71 + 4)
                            
                            if (x8_41 != 5)
                                int32_t x0_77
                                
                                if (x8_41 == 4)
                                    x0_77 = AILevelLessThan(zx.q(*(x0_71 + 8)), zx.q(x0_75))
                                
                                if (x8_41 != 4 || (x0_77 & 1) != 0)
                                    *(x0_71 + 8) = x0_75
                            
                            *CampaignGetStatus() = x0_75
                            int32_t x8_43
                            
                            if (*(x0_71 + 4) == 2)
                                x8_43 = 5
                            else
                                x8_43 = 4
                            
                            *(x0_71 + 4) = x8_43
                        else if (*(x0_71 + 4) == 2)
                            *(x0_71 + 4) = 3
                        
                        if ((IsWeeklyCampaign(x0_69, &var_6c) & 1) != 0)
                            ClientSubmitWeeklyResult(zx.q(var_6c), x21_2, zx.q(*(x0_71 + 4)), 
                                zx.q(*(x0_71 + 8)))
                        
                        x8_39 = *(arg1 + 0x11b4)
                    
                    i_1 += 1
                    x28_1 += 0x22c
                while (i_1 s< sx.q(x8_39))
    
    if (*(arg1 + 0x14) != 2 || *(arg1 + 0x11b4) s< 1)
        return zx.q(var_5094_1)
    
    int64_t x25_14 = 0
    void* __offset(GameSave, 0x70) x27_11 = arg1 + 0x70
    
    while (true)
        int32_t x0_90 = IsWinner(arg1, zx.q(*x27_11), &var_5090, &var_64)
        int32_t x20_3 = *(arg1 + 0x20)
        int32_t x0_92 = GameSetupAILevelFlag(arg1 + 8)
        int32_t x8_57 = *(x27_11 - 8)
        GameProfile* x0_94
        
        if (x8_57 s<= 1)
            if (x8_57 != 0)
                if (x8_57 != 1)
                    break
                
                if (*(x27_11 - 4) == *(GetActiveProfile() + 0x42ac))
                    x0_94 = GetActiveProfile()
                    goto label_9c0220
        else if (x8_57 - 2 u>= 2)
            if (x8_57 == 0x3e8)
                x0_94 = GetProfileByIndex(zx.q(*(x27_11 - 4)))
            label_9c0220:
                int32_t x0_97 = SyncedDataKeyFromRecommendedSet(*(arg1 + 0x18))
                
                if (x0_92 + 1 u>= 5)
                    break
                
                int32_t x8_61 = *(&data_7a7a90 + (sx.q(x0_92 + 1) << 2))
                uint64_t x2_9
                
                if ((x0_90 & ((x20_3 & 1) == 0 ? 1 : 0)) != 0)
                    x2_9 = zx.q(x8_61 + 0x186a0)
                else
                    x2_9 = zx.q(x8_61)
                
                SyncedDataSet(x0_94, zx.q(x0_97), x2_9)
                SaveProfiles()
            else if (x8_57 != 0x3e9)
                break
        x25_14 += 1
        x27_11 += 0x22c
        
        if (x25_14 s>= sx.q(*(arg1 + 0x11b4)))
            return zx.q(var_5094_1)
else
    *(arg1 + 0x2c) = 2
    LocalGameSave(arg1, *(GetClient() + 0x506c))
    int32_t x8_2 = *(arg1 + 0x11b4)
    int32_t x20_1 = x8_2 - 2
    
    if (x20_1 u< 5)
        int64_t fp_1 = 0
        int32_t var_5094_2 = 0
        
        while (true)
            if (*(arg1 + fp_1 * 0x22c + 0x68) == 0x3e8)
                void* x22_1 = arg1 + fp_1 * 0x22c
                int32_t x0_5 = IsWinner(arg1, zx.q(*(x22_1 + 0x70)), &var_64, &var_68)
                StatsSubmitLocal(zx.q(*(x22_1 + 0x6c)), zx.q(x20_1), zx.q(not.d(x0_5)) & 1)
                
                if ((IsCampaignMission(zx.q(*arg1), &var_6c) & 1) != 0)
                    CampaignStatus* x0_9 = CampaignGetStatus()
                    int32_t x22_2 = var_6c
                    void* x0_11 = CampaignMissionStatus(x22_2)
                    int32_t x0_13 = GameSetupAILevelFlag(arg1 + 8)
                    
                    if ((x0_5 & 1) != 0 && (zx.d(*(arg1 + 0x20)) & 1) == 0)
                        int32_t x8_5 = *(x0_11 + 4)
                        
                        if (x8_5 != 5)
                            int32_t x0_15
                            
                            if (x8_5 == 4)
                                x0_15 = AILevelLessThan(zx.q(*(x0_11 + 8)), zx.q(x0_13))
                            
                            if (x8_5 != 4 || (x0_15 & 1) != 0)
                                *(x0_11 + 8) = x0_13
                        
                        *CampaignGetStatus() = x0_13
                        int32_t x8_7
                        
                        if (*(x0_11 + 4) == 2)
                            x8_7 = 5
                        else
                            x8_7 = 4
                        
                        *(x0_11 + 4) = x8_7
                        goto label_9bfbe0
                    
                    int32_t x8_11 = *(x0_11 + 4)
                    
                    if (x8_11 != 2)
                        if (x8_11 == 3)
                            goto label_9bfe58
                        
                    label_9bfbe0:
                        
                        if (x22_2 != 9)
                            *(CampaignMissionStatus(x22_2 + 1) + 4) = 2
                        label_9bfe58:
                            
                            if ((IsWeeklyCampaign(x0_9, &var_5090) & 1) != 0)
                                ClientSubmitWeeklyResult(zx.q(var_5090), x22_2, zx.q(*(x0_11 + 4)), 
                                    zx.q(*(x0_11 + 8)))
                            else
                                SaveProfiles()
                        else
                            int32_t x25_2 = *(x0_11 + 8)
                            void* x0_25 = CampaignMissionStatus(0)
                            int32_t x27_1 = *(x0_25 + 4)
                            int32_t x25_3
                            
                            if ((AILevelLessThan(zx.q(*(x0_25 + 8)), zx.q(x25_2)) & 1) != 0)
                                x25_3 = *(x0_25 + 8)
                            else
                                x25_3 = x25_2
                            
                            void* x0_28 = CampaignMissionStatus(1)
                            int32_t x8_13 = *(x0_28 + 4)
                            int32_t x9_5
                            
                            x9_5 = x8_13 == 5 ? 2 : 1
                            
                            int32_t x27_2
                            
                            if (x27_1 != 5)
                                x27_2 = x8_13 == 5 ? 1 : 0
                            else
                                x27_2 = x9_5
                            
                            int32_t x25_4
                            
                            if ((AILevelLessThan(zx.q(*(x0_28 + 8)), zx.q(x25_3)) & 1) != 0)
                                x25_4 = *(x0_28 + 8)
                            else
                                x25_4 = x25_3
                            
                            void* x0_31 = CampaignMissionStatus(2)
                            int32_t x27_3
                            
                            if (*(x0_31 + 4) == 5)
                                x27_3 = x27_2 + 1
                            else
                                x27_3 = x27_2
                            
                            int32_t x25_5
                            
                            if ((AILevelLessThan(zx.q(*(x0_31 + 8)), zx.q(x25_4)) & 1) != 0)
                                x25_5 = *(x0_31 + 8)
                            else
                                x25_5 = x25_4
                            
                            void* x0_34 = CampaignMissionStatus(3)
                            int32_t x27_4
                            
                            if (*(x0_34 + 4) == 5)
                                x27_4 = x27_3 + 1
                            else
                                x27_4 = x27_3
                            
                            int32_t x25_6
                            
                            if ((AILevelLessThan(zx.q(*(x0_34 + 8)), zx.q(x25_5)) & 1) != 0)
                                x25_6 = *(x0_34 + 8)
                            else
                                x25_6 = x25_5
                            
                            void* x0_37 = CampaignMissionStatus(4)
                            int32_t x27_5
                            
                            if (*(x0_37 + 4) == 5)
                                x27_5 = x27_4 + 1
                            else
                                x27_5 = x27_4
                            
                            int32_t x25_7
                            
                            if ((AILevelLessThan(zx.q(*(x0_37 + 8)), zx.q(x25_6)) & 1) != 0)
                                x25_7 = *(x0_37 + 8)
                            else
                                x25_7 = x25_6
                            
                            void* x0_40 = CampaignMissionStatus(5)
                            int32_t x27_6
                            
                            if (*(x0_40 + 4) == 5)
                                x27_6 = x27_5 + 1
                            else
                                x27_6 = x27_5
                            
                            int32_t x25_8
                            
                            if ((AILevelLessThan(zx.q(*(x0_40 + 8)), zx.q(x25_7)) & 1) != 0)
                                x25_8 = *(x0_40 + 8)
                            else
                                x25_8 = x25_7
                            
                            void* x0_43 = CampaignMissionStatus(6)
                            int32_t x27_7
                            
                            if (*(x0_43 + 4) == 5)
                                x27_7 = x27_6 + 1
                            else
                                x27_7 = x27_6
                            
                            int32_t x25_9
                            
                            if ((AILevelLessThan(zx.q(*(x0_43 + 8)), zx.q(x25_8)) & 1) != 0)
                                x25_9 = *(x0_43 + 8)
                            else
                                x25_9 = x25_8
                            
                            void* x0_46 = CampaignMissionStatus(7)
                            int32_t x27_8
                            
                            if (*(x0_46 + 4) == 5)
                                x27_8 = x27_7 + 1
                            else
                                x27_8 = x27_7
                            
                            int32_t x25_10
                            
                            if ((AILevelLessThan(zx.q(*(x0_46 + 8)), zx.q(x25_9)) & 1) != 0)
                                x25_10 = *(x0_46 + 8)
                            else
                                x25_10 = x25_9
                            
                            void* x0_49 = CampaignMissionStatus(8)
                            int32_t x27_9
                            
                            if (*(x0_49 + 4) == 5)
                                x27_9 = x27_8 + 1
                            else
                                x27_9 = x27_8
                            
                            int32_t x25_11
                            
                            if ((AILevelLessThan(zx.q(*(x0_49 + 8)), zx.q(x25_10)) & 1) != 0)
                                x25_11 = *(x0_49 + 8)
                            else
                                x25_11 = x25_10
                            
                            void* x0_52 = CampaignMissionStatus(9)
                            int32_t x27_10
                            
                            if (*(x0_52 + 4) == 5)
                                x27_10 = x27_9 + 1
                            else
                                x27_10 = x27_9
                            
                            int32_t x25_12
                            
                            if ((AILevelLessThan(zx.q(*(x0_52 + 8)), zx.q(x25_11)) & 1) != 0)
                                x25_12 = *(x0_52 + 8)
                            else
                                x25_12 = x25_11
                            
                            void var_70
                            
                            if ((IsWeeklyCampaign(x0_9, &var_70) & 1) == 0)
                                void* x0_57 = GetActiveProfile()
                                FromCampaignString(&var_5090, x0_57 + 0x3530, x0_57 + 0x3538)
                                int32_t x26_12
                                int32_t var_508c
                                
                                x26_12 = var_5090 == 0 ? var_508c : 0
                                void* x0_59 = GetActiveProfile()
                                int64_t x8_33 = 0
                                
                                while (true)
                                    void* x11_1 = x0_59 + 0x361c + x8_33
                                    int32_t x10_2 = *(x11_1 - 8)
                                    void* x8_34
                                    int32_t x9_8
                                    int32_t x10_3
                                    
                                    if (x10_2 == 0)
                                        x8_34 = x0_59 + x8_33
                                        x9_8 = *(x8_34 + 0x361c)
                                        x10_3 = 1
                                        *(x8_34 + 0x3610) = x25_12
                                        *(x8_34 + 0x360c) = x26_12
                                    else if (*(x11_1 - 0xc) != x25_12
                                            || *(x0_59 + 0x361c + x8_33 - 0x10) != x26_12)
                                        x8_33 += 0x14
                                        
                                        if (x8_33 == 0xc80)
                                            break
                                        
                                        continue
                                    else
                                        x8_34 = x0_59 + x8_33
                                        x9_8 = *(x8_34 + 0x361c)
                                        x10_3 = x10_2 + 1
                                    
                                    int32_t x9_9
                                    
                                    x9_9 = x9_8 s> x27_10 ? x9_8 : x27_10
                                    
                                    *(x8_34 + 0x3614) = x10_3
                                    *(x8_34 + 0x361c) = x9_9
                                    
                                    if (x27_10 == 0xa)
                                        *(x8_34 + 0x3618) += 1
                                    
                                    break
                                
                                SaveProfiles()
                            
                            if ((IsWeeklyCampaign(x0_9, &var_5090) & 1) != 0)
                                ClientSubmitWeeklyResult(zx.q(var_5090), x22_2, zx.q(*(x0_11 + 4)), 
                                    zx.q(*(x0_11 + 8)))
                            else
                                SaveProfiles()
                    else
                        *(x0_11 + 4) = 3
                        
                        if ((IsWeeklyCampaign(x0_9, &var_5090) & 1) != 0)
                            ClientSubmitWeeklyResult(zx.q(var_5090), x22_2, zx.q(*(x0_11 + 4)), 
                                zx.q(*(x0_11 + 8)))
                        else
                            SaveProfiles()
                else if ((zx.d(*(arg1 + 0x20)) & 4) != 0)
                    GetActiveGameDate(&var_5090)
                    int32_t x0_19 = GetDayIdForDate(&var_5090)
                    uint64_t x0_22
                    int64_t x1_7
                    int32_t x2_4
                    int32_t x3_3
                    
                    if ((x0_5 & 1) == 0 || (zx.d(*(arg1 + 0x20)) & 1) != 0)
                        x1_7 = 1
                        x0_22 = zx.q(x0_19)
                        x2_4 = 0
                        x3_3 = 0
                    else
                        int32_t x0_21 = GameSetupAILevelFlag(arg1 + 8)
                        
                        if (x0_21 u> 3)
                            goto label_9c028c
                        
                        switch (x0_21)
                            case 0
                                x2_4 = var_68
                                x3_3 = var_64
                                x1_7 = 4
                                x0_22 = zx.q(x0_19)
                            case 1
                                x2_4 = var_68
                                x3_3 = var_64
                                x1_7 = 7
                                x0_22 = zx.q(x0_19)
                            case 2
                                x2_4 = var_68
                                x3_3 = var_64
                                x1_7 = 0xa
                                x0_22 = zx.q(x0_19)
                            case 3
                                x2_4 = var_68
                                x3_3 = var_64
                                x1_7 = 2
                                x0_22 = zx.q(x0_19)
                    
                    ClientSubmitDailySeedResult(x0_22, x1_7, x2_4, x3_3)
                    var_5094_2 = 1
                
                x8_2 = *(arg1 + 0x11b4)
            
            fp_1 += 1
            
            if (fp_1 s>= sx.q(x8_2))
                var_5094_1 = var_5094_2 & 1
                break
        
        goto label_9bff04
label_9c028c:
pthread_kill(pthread_self(), 6)
XNoReturn()
return ResignActiveGame() __tailcall
