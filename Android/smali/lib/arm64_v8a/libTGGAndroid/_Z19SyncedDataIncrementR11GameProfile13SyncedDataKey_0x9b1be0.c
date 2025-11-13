// 函数: _Z19SyncedDataIncrementR11GameProfile13SyncedDataKey
// 地址: 0x9b1be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t j = arg2

if (arg2 s<= 0x1e847f && j - 0x3e8 u>= 0xf3e58 && j - 0xf4240 u>= 0xf4240)
    pthread_kill(pthread_self(), 6)
    return StatMessageHandle(XNoReturn()) __tailcall

uint64_t j_2 = zx.q(j)
uint64_t x24 = j_2 | j_2 u>> 4

for (int32_t* i = *(*(arg1 + 0x4308) + ((zx.q(*(arg1 + 0x4310)) & x24) << 3)); i != 0; 
        i = *(i + 0x18))
    if (*i == j)
        int64_t x9_4 = *(i + 0x10) + 1
        *(i + 8) = 0
        *(i + 0x10) = x9_4
        uint64_t x25 = zx.q(*(arg1 + 0x4300)) & zx.q(x24.d)
        int32_t* x8_7 = *(*(arg1 + 0x42f8) + (zx.q(x25.d) << 3))
        void* x26_2
        
        if (x8_7 == 0)
        label_9b1d04:
            int32_t* x0_2 = XPooledMalloc(0x18)
            *x0_2 = j
            *(x0_2 + 8) = 1
            uint64_t x9_8 = x25 << 3
            *(x0_2 + 0x10) = *(*(arg1 + 0x42f8) + x9_8)
            *(*(arg1 + 0x42f8) + x9_8) = x0_2
            *(arg1 + 0x4304) += 1
        else
            int32_t* x26_1 = x8_7
            
            while (true)
                if (*x26_1 == j)
                    x26_2 = &x26_1[2]
                    *x26_2 += 1
                    goto label_9b1d80
                
                x26_1 = *(x26_1 + 0x10)
                
                if (x26_1 == 0)
                    while (*x8_7 != j)
                        x8_7 = *(x8_7 + 0x10)
                        
                        if (x8_7 == 0)
                            goto label_9b1d04
                    
                    *(x8_7 + 8) = 1
                    break
        
        int32_t* x8_15 = *(*(arg1 + 0x42f8) + ((zx.q(*(arg1 + 0x4300)) & zx.q(x24.d)) << 3))
        
        if (x8_15 == 0)
        label_9b1d64:
            x26_2 = nullptr
        else
            while (*x8_15 != j)
                x8_15 = *(x8_15 + 0x10)
                
                if (x8_15 == 0)
                    goto label_9b1d64
            
            x26_2 = &x8_15[2]
        
    label_9b1d80:
        void* result = SaveProfiles()
        
        if (arg1 + 0x42f8 == *gSyncedData)
            int32_t j_1 = j
            int64_t var_58_1 = *x26_2
            result = GetClient()
            
            if (*(result + 0x18) == 3)
                return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42d1, 0x10, &j_1)
        
        return result

return SyncedDataSet(arg1, zx.q(j), 1) __tailcall
