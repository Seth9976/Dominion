// 函数: _Z14TryReplayDailyRK4Date18DbGamePlayerTypeAIb
// 地址: 0xb3e554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg3.d
int32_t* result = DailySeedDataByDate(arg1)

if (result != 0)
    int32_t x23_1 = result[4]
    int32_t var_19d8
    
    if (x23_1 == 0)
        DomSetupConfigFromString(XString::operator char const*(), 0x18)
        int32_t x0_3 = DomSetupConfigToExpansionBitset(&var_19d8, &result[5])
        x23_1 = x0_3
        result[4] = x0_3
    
    int32_t x24_1 = result[5]
    int32_t var_44
    
    if ((x23_1 & not.d(DomExpansionsBitsetFromExpansions(&var_19d8, 
            GetOwnedExpansionSetups(&var_19d8), &var_44))) != 0 || (var_44 & x24_1) != x24_1)
        *gMissingContent = *(result + 0x10)
        *(gMissingContent + 8) = not.d(x22) & 1
        return GameDlgManagerShow(0x7f5, 5)
    
    if ((x22 & 1) != 0)
        return GameQueueRestartDaily(arg1, zx.q(arg2))
    
    int32_t x0_10 = GetDailyGameIndex(zx.q(*result))
    int32_t x0_12
    
    if (x0_10 != 0)
        var_19d8 = 1
        int32_t var_19d4_1 = x0_10
        x0_12 = LocalGameExists(&var_19d8)
    
    if (x0_10 == 0 || (x0_12 & 1) == 0)
        return GameQueueStartDaily(arg1)
    
    int32_t x0_14 = GetDailyGameIndex(zx.q(*result))
    
    if (x0_14 != 0)
        var_19d8 = 1
        int32_t var_19d4_2 = x0_14
        LocalGameExists(&var_19d8)
    
    GameQueueResume(GetDailyGameIndex(zx.q(*result)))
    result = GetClient()
    int64_t x9_1 = *arg1
    result[0x1414] = *(arg1 + 8)
    *(result + 0x5048) = x9_1

return result
