// 函数: _Z24CampaignDialogWeeklyOpenRK13CampaignSetupRK4Date6WeekID
// 地址: 0xb3e2e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gCampaignDlg + 0x502c) = 1
*(gCampaignDlg + 0x5030) = arg3
int64_t x10 = *arg2
*(gCampaignDlg + 0x503c) = *(arg2 + 8)
*(gCampaignDlg + 0x5034) = x10
memcpy(gCampaignDlg + 0xc, arg1, 0x5020)
*(gCampaignDlg + 8) = DomMapCreateAsync(arg1)
*gCampaignDlg = 0
void* x0_3 = CampaignGetStatus()
int32_t x8_1 = *(x0_3 + 0x78)

if (x8_1 != 1 && x8_1 != 0 && *gCampaignDlg == 0)
    *gCampaignDlg = 9

if (*(x0_3 + 0x74) == 0)
    void* x0_4 = CampaignGetStatus()
    int32_t x8_5 = *(x0_4 + 0x6c)
    
    if (x8_5 != 1 && x8_5 != 0 && *gCampaignDlg == 0)
        *gCampaignDlg = 8
    
    if (*(x0_4 + 0x68) == 0)
        void* x0_5 = CampaignGetStatus()
        int32_t x8_8 = *(x0_5 + 0x60)
        
        if (x8_8 != 1 && x8_8 != 0 && *gCampaignDlg == 0)
            *gCampaignDlg = 7
        
        if (*(x0_5 + 0x5c) == 0)
            void* x0_6 = CampaignGetStatus()
            int32_t x8_11 = *(x0_6 + 0x54)
            
            if (x8_11 != 1 && x8_11 != 0 && *gCampaignDlg == 0)
                *gCampaignDlg = 6
            
            if (*(x0_6 + 0x50) == 0)
                void* x0_7 = CampaignGetStatus()
                int32_t x8_14 = *(x0_7 + 0x48)
                
                if (x8_14 != 1 && x8_14 != 0 && *gCampaignDlg == 0)
                    *gCampaignDlg = 5
                
                if (*(x0_7 + 0x44) == 0)
                    void* x0_8 = CampaignGetStatus()
                    int32_t x8_17 = *(x0_8 + 0x3c)
                    
                    if (x8_17 != 1 && x8_17 != 0 && *gCampaignDlg == 0)
                        *gCampaignDlg = 4
                    
                    if (*(x0_8 + 0x38) == 0)
                        void* x0_9 = CampaignGetStatus()
                        int32_t x8_20 = *(x0_9 + 0x30)
                        
                        if (x8_20 != 1 && x8_20 != 0 && *gCampaignDlg == 0)
                            *gCampaignDlg = 3
                        
                        if (*(x0_9 + 0x2c) == 0)
                            void* x0_10 = CampaignGetStatus()
                            int32_t x8_23 = *(x0_10 + 0x24)
                            
                            if (x8_23 != 1 && x8_23 != 0 && *gCampaignDlg == 0)
                                *gCampaignDlg = 2
                            
                            if (*(x0_10 + 0x20) == 0)
                                void* x0_11 = CampaignGetStatus()
                                int32_t x8_26 = *(x0_11 + 0x18)
                                
                                if (x8_26 != 1 && x8_26 != 0 && *gCampaignDlg == 0)
                                    *gCampaignDlg = 1
                                
                                if (*(x0_11 + 0x14) == 0)
                                    void* x0_12 = CampaignGetStatus()
                                    int32_t x8_29 = *(x0_12 + 0xc)
                                    
                                    if (x8_29 != 1 && x8_29 != 0 && *gCampaignDlg == 0)
                                        *gCampaignDlg = 0
                                    
                                    if (*(x0_12 + 8) != 0)
                                        *gCampaignDlg = 0
                                else
                                    *gCampaignDlg = 1
                            else
                                *gCampaignDlg = 2
                        else
                            *gCampaignDlg = 3
                    else
                        *gCampaignDlg = 4
                else
                    *gCampaignDlg = 5
            else
                *gCampaignDlg = 6
        else
            *gCampaignDlg = 7
    else
        *gCampaignDlg = 8
else
    *gCampaignDlg = 9

return GameDlgManagerShow(0x7e3, 5) __tailcall
