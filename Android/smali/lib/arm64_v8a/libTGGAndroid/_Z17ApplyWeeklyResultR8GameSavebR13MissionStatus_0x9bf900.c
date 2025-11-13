// 函数: _Z17ApplyWeeklyResultR8GameSavebR13MissionStatus
// 地址: 0x9bf900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = GameSetupAILevelFlag(arg1 + 8)

if ((arg2.d & 1) != 0 && (zx.d(*(arg1 + 0x20)) & 1) == 0)
    int32_t x8_2 = *(arg3 + 4)
    int32_t x20_1 = result.d
    
    if (x8_2 != 5)
        int32_t x0_2
        
        if (x8_2 == 4)
            x0_2 = AILevelLessThan(zx.q(*(arg3 + 8)), zx.q(x20_1))
        
        if (x8_2 != 4 || (x0_2 & 1) != 0)
            *(arg3 + 8) = x20_1
    
    result = CampaignGetStatus()
    *result = x20_1
    int32_t x8_4
    
    if (*(arg3 + 4) != 2)
        x8_4 = 4
    else
        x8_4 = 5
    
    *(arg3 + 4) = x8_4
else if (*(arg3 + 4) == 2)
    *(arg3 + 4) = 3

return result
