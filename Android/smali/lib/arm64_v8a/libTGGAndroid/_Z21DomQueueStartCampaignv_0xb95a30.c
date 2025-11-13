// 函数: _Z21DomQueueStartCampaignv
// 地址: 0xb95a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = HasActiveGame()

if ((result.d & 1) == 0)
    result = GetClient()
    
    if (*(result + 0x5044) == 0)
        int32_t* x0 = CampaignGetStatus()
        
        if (*(gCampaignDlg + 0x502c) != 1)
            return GameQueueStartCampaign(*gCampaignDlg) __tailcall
        
        GetActiveProfile()
        int32_t x23_1 = *(gCampaignDlg + 0x5030)
        int32_t x22_1 = *(x0 + sx.q(*gCampaignDlg) * 0xc + 8)
        int32_t x0_2
        int32_t x25_1
        
        if (x22_1 != 0 && (x0[1] & 4) == 0)
            x0_2 = GameIdxLookupByDBID(zx.q(x22_1))
            x25_1 = x0_2
        
        if (x22_1 == 0 || (x0[1] & 4) != 0 || x0_2 == 0)
            void* x0_3 = GetClient()
            uint64_t x21_1 = zx.q(*(x0_3 + 0x5090))
            int32_t x8_7
            int64_t x23_2
            
            if (x21_1.d != *(x0_3 + 0x5088))
                x23_2 = *(x0_3 + 0x5080)
                x8_7 = *(x23_2 + x21_1 * 0x1338 + 0x1330)
            else
                x8_7 = x21_1.d + 1
                *(x0_3 + 0x5088) = x8_7
                x23_2 = *(x0_3 + 0x5080)
            
            *(x0_3 + 0x5090) = x8_7
            int32_t* x25_2 = x23_2 + x21_1 * 0x1338
            memset(x25_2, 0, 0x1330)
            XString::XString()
            XString::XString()
            XString::XString()
            x25_2[0x4cc] = x21_1.d | *(x0_3 + 0x5098) << 0x10
            int32_t x8_12 = *(x0_3 + 0x5098)
            int32_t x8_13
            
            if (x8_12 == 0xffff)
                x8_13 = 1
            else
                x8_13 = x8_12 + 1
            
            *(x0_3 + 0x5094) += 1
            *(x0_3 + 0x5098) = x8_13
            int32_t x8_14 = x25_2[0x4cc]
            GameSetup var_1210
            memset(&var_1210, 0, 0x11b0)
            XString::XString()
            XString::XString()
            XString::XString()
            int32_t var_11b0_1 = 1
            int32_t var_11ac_1 = *(GetActiveProfile() + 0x42ac)
            int32_t var_11b4_1 = *(GetActiveProfile() + 0x10)
            GetActiveProfile()
            char var_11c4[0x10]
            AssignName(&var_11c4, XString::operator char const*())
            uint64_t x1_3 = zx.q(*x0)
            int32_t var_f84_1 = 3
            int32_t var_f80_1 = x1_3.d
            GameSetupSetAILevel(&var_1210, x1_3)
            int32_t fp_2 = *gCampaignDlg
            void var_f98
            int32_t x8_17
            int32_t var_11f8
            
            if (fp_2 == 9 || fp_2 == 4)
                void var_1440
                memcpy(&var_1440, &var_11c4, 0x22c)
                memcpy(&var_11c4, &var_f98, 0x22c)
                memcpy(&var_f98, &var_1440, 0x22c)
                x8_17 = var_11f8 | 0x42
            else
                x8_17 = var_11f8 | 2
            int32_t var_11fc_1 = ToWeeklyCampaign(zx.q(x23_1), fp_2)
            int32_t x0_21 = GameLatestVersion(4, false)
            CampaignGetMissionSetup(fp_2)
            void var_11d8
            XString::operator=(&var_11d8)
            int128_t v0_2
            int128_t v1_2
            v0_2, v1_2 = XString::~XString()
            int32_t var_64_1 = 2
            *x25_2 = x22_1
            void* x19_2 = x23_2 + x21_1 * 0x1338
            *(x19_2 + 0x30) = x0_21.q
            int128_t var_1208
            *(x19_2 + 0x10) = var_1208
            *(x19_2 + 0x20) = (x8_17 | 0x180).o
            XString::operator=(&x25_2[0xe])
            XString::operator=(&x25_2[0x10])
            XString::operator=(&x25_2[0x12])
            *(x19_2 + 0x11b4) = 0
            int32_t x19_3
            
            if (var_11b0_1 == 0)
                x19_3 = 0
                x25_1 = x8_14
                
                if (var_f84_1 != 0)
                label_b95d74:
                    *(x19_2 + 0x11b4) = x19_3 + 1
                    memcpy(x23_2 + x21_1 * 0x1338 + mulu.dp.d(x19_3, 0x22c) + 0x54, &var_f98, 0x22c)
                    x19_3 = *(x19_2 + 0x11b4)
            else
                x19_3 = 1
                *(x19_2 + 0x11b4) = 1
                memcpy(x23_2 + x21_1 * 0x1338 + 0x54, &var_11c4, 0x22c)
                x25_1 = x8_14
                
                if (var_f84_1 != 0)
                    goto label_b95d74
            
            if (x19_3 s> 0)
                int64_t x8_26 = sx.q(x19_3)
                int64_t x9_4
                
                if (x19_3 != 1)
                    int64_t x10_3 = 0
                    x9_4 = x8_26 & 0xfffffffffffffffe
                    void* x11_2 = x23_2 + x21_1 * 0x1338
                    
                    do
                        int32_t x12_2 = x10_3.d + 1
                        *(x11_2 + 0x70) = x10_3.d
                        x10_3 += 2
                        *(x11_2 + 0x29c) = x12_2
                        x11_2 += 0x458
                    while (x9_4 != x10_3)
                    
                    if (x9_4 != x8_26)
                        goto label_b95e10
                else
                    x9_4 = 0
                label_b95e10:
                    int32_t* x10_5 = x23_2 + x21_1 * 0x1338 + x9_4 * 0x22c + 0x70
                    
                    do
                        *x10_5 = x9_4.d
                        x9_4 += 1
                        x10_5 = &x10_5[0x8b]
                    while (x9_4 s< x8_26)
            
            if (x22_1 == 0)
                GameClientCreateNewtorkBackedCampaignMission(x23_2 + x21_1 * 0x1338 + 8)
            
            XString::~XString()
            XString::~XString()
            XString::~XString()
        
        return GameResumeMultiplayer(zx.q(x25_1))

return result
