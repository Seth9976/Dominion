// 函数: _Z17IsCampaignMission6GameIDRi
// 地址: 0x9bf718
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t x21 = 0

if (*CampaignMissionStatus(0) != x20)
    x21 = 1
    
    if (*CampaignMissionStatus(1) != x20)
        x21 = 2
        
        if (*CampaignMissionStatus(2) != x20)
            x21 = 3
            
            if (*CampaignMissionStatus(3) != x20)
                x21 = 4
                
                if (*CampaignMissionStatus(4) != x20)
                    x21 = 5
                    
                    if (*CampaignMissionStatus(5) != x20)
                        x21 = 6
                        
                        if (*CampaignMissionStatus(6) != x20)
                            x21 = 7
                            
                            if (*CampaignMissionStatus(7) != x20)
                                x21 = 8
                                
                                if (*CampaignMissionStatus(8) != x20)
                                    x21 = 9
                                    
                                    if (*CampaignMissionStatus(9) != x20)
                                        return 0

*arg2 = x21
return 1
