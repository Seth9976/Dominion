// 函数: _Z25ActiveGameComplete_Retirev
// 地址: 0x9bf154
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(GetClient() + 0x5068)
int32_t x19 = *(GetClient() + 0x506c)
int32_t* result

if (x20 != 2)
    int32_t x8_2 = *(GetActiveProfile() + 0x4334)
    int32_t x19_1 = x19 == x8_2 ? 1 : 0
    
    if (x19 == x8_2)
        *(GetActiveProfile() + 0x4334) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x4330))
        x19_1 = 1
        *(GetActiveProfile() + 0x4330) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x3594))
        x19_1 = 1
        *(GetActiveProfile() + 0x3594) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35a0))
        x19_1 = 1
        *(GetActiveProfile() + 0x35a0) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35ac))
        x19_1 = 1
        *(GetActiveProfile() + 0x35ac) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35b8))
        x19_1 = 1
        *(GetActiveProfile() + 0x35b8) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35c4))
        x19_1 = 1
        *(GetActiveProfile() + 0x35c4) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35d0))
        x19_1 = 1
        *(GetActiveProfile() + 0x35d0) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35dc))
        x19_1 = 1
        *(GetActiveProfile() + 0x35dc) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35e8))
        x19_1 = 1
        *(GetActiveProfile() + 0x35e8) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x35f4))
        x19_1 = 1
        *(GetActiveProfile() + 0x35f4) = 0
    
    if (*(GetClient() + 0x506c) == *(GetActiveProfile() + 0x3600))
        x19_1 = 1
        *(GetActiveProfile() + 0x3600) = 0
    
    result = GetActiveProfile()
    int32_t x10_1 = 0
    int32_t* i
    
    while (true)
        i = *(*(result + 0x7590) + (zx.q(x10_1) << 3))
        
        if (i != 0)
            break
        
        x10_1 += 1
        
        if (x10_1 u> result[0x1d66])
            i = nullptr
            break
    
    while (true)
        if (i == 0)
        label_9bf4b8:
            
            if ((x19_1 & 1) == 0)
                break
        else
            int32_t* i_2 = i
            void* x0_39 = GetActiveProfile()
            i = *(i + 8)
            
            if (i == 0)
                int32_t x10_2 = *i_2
                int32_t x8_18 = *(x0_39 + 0x7598)
                int32_t x10_5 = ((x10_2 | x10_2 s>> 4) & x8_18) + 1
                
                do
                    if (x10_5 u> x8_18)
                        i = nullptr
                        break
                    
                    i = *(*(x0_39 + 0x7590) + (zx.q(x10_5) << 3))
                    x10_5 += 1
                while (i == 0)
            
            int32_t x23_1 = i_2[1]
            result = GetClient()
            int32_t x24_1 = result[0x141b]
            
            if (x23_1 != x24_1)
            label_9bf400:
                
                if (x23_1 == x24_1)
                    goto label_9bf4b8
                
                continue
            else
                void* x0_40 = GetActiveProfile()
                int32_t i_1 = *i_2
                void* x9_2 = *(x0_40 + 0x7590)
                    + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(x0_40 + 0x7598))) << 3)
                result = *x9_2
                
                if (result != 0)
                    if (i_1 != *result)
                        int32_t* result_1
                        
                        do
                            result_1 = result
                            result = *(result + 8)
                            
                            if (result == 0)
                                goto label_9bf3fc
                        while (i_1 != *result)
                        
                        x9_2 = &result_1[2]
                    
                    *x9_2 = *(result + 8)
                    result = XPooledFree(result, 0x10)
                    *(x0_40 + 0x759c) -= 1
                label_9bf3fc:
                    x19_1 = 1
                    goto label_9bf400
        
        return SaveProfiles() __tailcall
else
    GameClientDismissNetworkGame(zx.q(x19), 5)
    int32_t* x8 = GetClient() + 0x5068
    
    if (*x8 != 2 || x8[1] != x19)
        void* x19_3 = *(GetClient() + 0x5080) + zx.q(x19.w) * 0x1338
        *(x19_3 + 0x1308) = 1
        result = Now()
        *(x19_3 + 0x1310) = result
    else
        result = GetClient()
        result[0x1410] = x19

return result
