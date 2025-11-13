// 函数: _Z13SyncedDataSetR11GameProfile13SyncedDataKeyy
// 地址: 0x9b6b88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg2
int32_t* x8_1

if (arg2 - 0x3e8 u>= 0xf3e58)
    if (i - 0xf4240 u>= 0xf4240)
        if (i s> 0x1e847f)
            goto label_9b6ca8
        
        pthread_kill(pthread_self(), 6)
        x8_1 = XNoReturn()
    label_9b6c98:
        *(x8_1 + 8) = arg3
        goto label_9b6ca8
    
    uint64_t i_3 = zx.q(i)
    int32_t* x8_10 = *(*(arg1 + 0x4308) + ((zx.q(*(arg1 + 0x4310)) & (i_3 | i_3 u>> 4)) << 3))
    
    if (x8_10 == 0)
        goto label_9b6ca8
    
    while (*x8_10 != i)
        x8_10 = *(x8_10 + 0x18)
        
        if (x8_10 == 0)
            goto label_9b6ca8
    
    if (*(x8_10 + 0x10) u< arg3)
        goto label_9b6ca8
else
    uint64_t i_2 = zx.q(i)
    uint64_t x24_1 = zx.q(*(arg1 + 0x4300)) & (i_2 | i_2 u>> 4)
    x8_1 = *(*(arg1 + 0x42f8) + (x24_1 << 3))
    
    if (x8_1 != 0)
        while (*x8_1 != i)
            x8_1 = *(x8_1 + 0x10)
            
            if (x8_1 == 0)
                goto label_9b6bf8
        
        goto label_9b6c98
    
label_9b6bf8:
    int32_t* x0 = XPooledMalloc(0x18)
    *x0 = i
    *(x0 + 8) = arg3
    uint64_t x9_3 = x24_1 << 3
    *(x0 + 0x10) = *(*(arg1 + 0x42f8) + x9_3)
    *(*(arg1 + 0x42f8) + x9_3) = x0
    *(arg1 + 0x4304) += 1
label_9b6ca8:
    uint64_t x25_1 = zx.q(*(arg1 + 0x4310)) & (zx.q(i) | zx.q(i s>> 4))
    int32_t* x8_12 = *(*(arg1 + 0x4308) + (x25_1 << 3))
    
    if (x8_12 == 0)
    label_9b6cd4:
        int32_t* x0_2 = XPooledMalloc(0x20)
        *x0_2 = i
        *(x0_2 + 8) = 0
        *(x0_2 + 0x10) = arg3
        uint64_t x9_8 = x25_1 << 3
        *(x0_2 + 0x18) = *(*(arg1 + 0x4308) + x9_8)
        *(*(arg1 + 0x4308) + x9_8) = x0_2
        *(arg1 + 0x4314) += 1
    else
        while (*x8_12 != i)
            x8_12 = *(x8_12 + 0x18)
            
            if (x8_12 == 0)
                goto label_9b6cd4
        
        *(x8_12 + 8) = 0
        *(x8_12 + 0x10) = arg3
    
    SaveProfiles()
    
    if (arg1 + 0x42f8 == *gSyncedData)
        int32_t i_1 = i
        uint64_t var_48_1 = arg3
        arg1 = GetClient()
        
        if (*(arg1 + 0x18) == 3)
            NetworkSendMessage(zx.q(*(arg1 + 0x14)), 0xf42d1, 0x10, &i_1)
