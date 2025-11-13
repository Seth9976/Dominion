// 函数: _Z33AILevelFromSyncedAchievementLevel20SyncedAchiementLevelRbR18DbGamePlayerTypeAI
// 地址: 0x9bf594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int32_t x8_1
    
    if (arg1 s>= 0x186a0)
        *arg2 = true
        x8_1 = arg1 - 0x186a0
        
        if (x8_1 s<= 0xf9f)
            goto label_9bf5f0
        
        goto label_9bf5c4
    
    x8_1 = arg1
    *arg2 = false
    int32_t x8_2
    
    if (x8_1 s> 0xf9f)
    label_9bf5c4:
        
        if (x8_1 == 0xfa0)
            x8_2 = 1
        else if (x8_1 != 0x1388)
            x8_2 = -1
        else
            x8_2 = 2
    else
    label_9bf5f0:
        
        if (x8_1 == 0x7d0)
            x8_2 = 3
        else if (x8_1 != 0xbb8)
            x8_2 = -1
        else
            x8_2 = 0
    
    *arg3 = x8_2

return zx.q(arg1 != 0 ? 1 : 0)
