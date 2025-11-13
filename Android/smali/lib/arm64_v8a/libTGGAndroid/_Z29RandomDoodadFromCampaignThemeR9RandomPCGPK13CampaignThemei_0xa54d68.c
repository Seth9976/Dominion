// 函数: _Z29RandomDoodadFromCampaignThemeR9RandomPCGPK13CampaignThemei
// 地址: 0xa54d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s>= 1)
    int64_t i = 0
    int32_t j_10 = 0
    int32_t var_48[0x2]
    
    do
        int32_t x8_3 = *(arg2 + (i << 3))
        int32_t x8_1
        uint64_t j_9
        int32_t var_4c
        
        if (x8_3 == 0x866)
            if ((HasAssociatedDoodad(zx.q(*(arg2 + (i << 3) + 4)), &var_4c) & 1) != 0)
                x8_1 = var_4c
                
                if (j_10 s<= 0)
                label_a54dac:
                    j_9 = sx.q(j_10)
                    j_10 += 1
                    var_48[j_9] = x8_1
                else
                    j_9 = zx.q(j_10)
                    int32_t (* x10_6)[0x2] = &var_48
                    uint64_t j_6 = j_9
                    uint64_t j
                    
                    do
                        if (*x10_6 == x8_1)
                            goto label_a54db8
                        
                        j = j_6
                        j_6 -= 1
                        x10_6 = &(*x10_6)[1]
                    while (j != 1)
                    j_10 += 1
                    var_48[j_9] = x8_1
        else if (x8_3 == 0x898
                && (HasAssociatedDoodad(zx.q(*(arg2 + (i << 3) + 4)), &var_4c) & 1) != 0)
            x8_1 = var_4c
            
            if (j_10 s<= 0)
                goto label_a54dac
            
            j_9 = zx.q(j_10)
            int32_t (* x10_3)[0x2] = &var_48
            uint64_t j_5 = j_9
            uint64_t j_1
            
            do
                if (*x10_3 == x8_1)
                    goto label_a54db8
                
                j_1 = j_5
                j_5 -= 1
                x10_3 = &(*x10_3)[1]
            while (j_1 != 1)
            j_10 += 1
            var_48[j_9] = x8_1
        
        if (x8_3 == 0x3e8)
            int32_t x8_7 = *(arg2 + (i << 3) + 4)
            int32_t* x9_7 = *(*(gCampaignData + 0x60)
                + (((zx.q(x8_7) | zx.q(x8_7 s>> 4)) & zx.q(*(gCampaignData + 0x68))) << 3))
            
            if (x9_7 != 0)
                while (true)
                    if (*x9_7 == x8_7)
                        x8_1 = x9_7[1]
                        
                        if (j_10 s<= 0)
                            j_9 = sx.q(j_10)
                        else
                            j_9 = zx.q(j_10)
                            int32_t (* x10_8)[0x2] = &var_48
                            uint64_t j_8 = j_9
                            uint64_t j_2
                            
                            do
                                if (*x10_8 == x8_1)
                                    goto label_a54db8
                                
                                j_2 = j_8
                                j_8 -= 1
                                x10_8 = &(*x10_8)[1]
                            while (j_2 != 1)
                        
                        break
                    
                    x9_7 = *(x9_7 + 8)
                    
                    if (x9_7 == 0)
                        goto label_a54db8
                
                j_10 += 1
                var_48[j_9] = x8_1
        else if (x8_3 == 0x5dc)
            int32_t j_3 = *(arg2 + (i << 3) + 4)
            int32_t* x9_4 = *(*(gCampaignData + 0x60)
                + (((zx.q(j_3) | zx.q(j_3 s>> 4)) & zx.q(*(gCampaignData + 0x68))) << 3))
            
            if (x9_4 != 0)
                while (*x9_4 != j_3)
                    x9_4 = *(x9_4 + 8)
                    
                    if (x9_4 == 0)
                        goto label_a54db8
                
                x8_1 = x9_4[1]
                
                if (j_10 s<= 0)
                    goto label_a54dac
                
                j_9 = zx.q(j_10)
                int32_t (* x10_7)[0x2] = &var_48
                uint64_t j_7 = j_9
                uint64_t j_4
                
                do
                    if (*x10_7 == x8_1)
                        goto label_a54db8
                    
                    j_4 = j_7
                    j_7 -= 1
                    x10_7 = &(*x10_7)[1]
                while (j_4 != 1)
                j_10 += 1
                var_48[j_9] = x8_1
        
    label_a54db8:
        i += 1
    while (i != zx.q(arg3))
    
    if (j_10 != 0)
        return zx.q(var_48[sx.q(RandomInt(arg1, j_10))])

return 0
