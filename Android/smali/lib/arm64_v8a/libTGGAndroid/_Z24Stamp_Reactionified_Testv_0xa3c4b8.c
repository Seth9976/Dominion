// 函数: _Z24Stamp_Reactionified_Testv
// 地址: 0xa3c4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*(gCampaignSetup + 0x19ac))

if (x19.d != 0)
    uint32_t x8_1 = zx.d(*(DomDefGet(zx.q(x19.d), 0x17) + 0xc8))
    uint32_t x8_2
    
    if ((x8_1 & 4) == 0)
        x8_2 = zx.d(*(DomDefGet(zx.q(x19.d), 0x17) + 0xc8))
    
    if ((x8_1 & 4) == 0 && (x8_2 & 2) == 0)
        if ((zx.d(*(DomDefGet(zx.q(x19.d), 0x17) + 0xca)) & 4) == 0 || x19.d == 0x301)
            return 0
        
        if (x19.d s> 0xb03)
            goto label_a3c580
        
        if (x19.d s<= 0x81f)
            if (x19.d == 0x219 || x19.d == 0x30e || x19.d == 0x709)
                return 0
        else if ((x19.d - 0x905 u<= 0x1c && (1 << (x19.d - 0x905) & 0x12001101) != 0)
                || x19.d == 0x820)
            return 0
    else if (x19.d s> 0xb03)
    label_a3c580:
        
        if (x19.d s<= 0xe02)
            if ((x19.d - 0xd04 u<= 0xe && (1 << (x19.d - 0xd04) & 0x4005) != 0) || x19.d == 0xb04)
                return 0
        else
            if (x19.d == 0xe03 || x19.d == 0xe06)
                return 0
            
            if (x19.d == 0xf1d || x19.d == 0x110a || x19.d == 0x1207)
                return 0
    else if (x19.d s> 0x708)
        if ((x19.d - 0x905 u<= 0x1c && (1 << (x19.d - 0x905) & 0x12001101) != 0) || x19.d == 0x709
                || x19.d == 0x820)
            return 0
    else if (x19.d == 0x219 || x19.d == 0x301 || x19.d == 0x30e)
        return 0
    
    int32_t* i_4 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
    
    if (i_4 != 0)
        int32_t* i_5 = i_4
        
        while (true)
            if (*i_5 != x19.d)
                i_5 = *(i_5 + 0x18)
                
                if (i_5 != 0)
                    continue
                
                goto label_a3c6d0
            
            uint64_t x9_4 = zx.q(i_5[4])
            
            if (x9_4.d s< 1)
            label_a3c6d0:
                int32_t* i = i_4
                int32_t* i_1
                
                do
                    if (*i == x19.d)
                        uint64_t x9_6 = zx.q(i[4])
                        i_1 = i_4
                        
                        if (x9_6.d s< 1)
                            goto label_a3c750
                        
                        int32_t* x11_3 = *(i + 8)
                        
                        if (*x11_3 == 0x1f)
                            goto label_a3c808
                        
                        int64_t x10_6 = 0
                        int32_t j
                        
                        do
                            if (x9_6 - 1 == x10_6)
                                goto label_a3c6e8
                            
                            j = x11_3[1 + x10_6]
                            x10_6 += 1
                        while (j != 0x1f)
                        i_1 = i_4
                        
                        if (x10_6 u< x9_6)
                            goto label_a3c808
                        
                        goto label_a3c750
                    
                    i = *(i + 0x18)
                while (i != 0)
                
            label_a3c6e8:
                i_1 = i_4
            label_a3c750:
                
                do
                    if (*i_1 == x19.d)
                        uint64_t x9_8 = zx.q(i_1[4])
                        
                        if (x9_8.d s< 1)
                            goto label_a3c7a8
                        
                        int32_t* x11_5 = *(i_1 + 8)
                        
                        if (*x11_5 == 6)
                            goto label_a3c808
                        
                        int64_t x10_8 = 0
                        int32_t j_1
                        
                        do
                            if (x9_8 - 1 == x10_8)
                                goto label_a3c7a8
                            
                            j_1 = x11_5[1 + x10_8]
                            x10_8 += 1
                        while (j_1 != 6)
                        
                        if (x10_8 u< x9_8)
                            goto label_a3c808
                        
                        goto label_a3c7a8
                    
                    i_1 = *(i_1 + 0x18)
                while (i_1 != 0)
                
            label_a3c7a8:
                
                while (*i_4 != x19.d)
                    i_4 = *(i_4 + 0x18)
                    
                    if (i_4 == 0)
                        return 1
                
                uint64_t x9_10 = zx.q(i_4[4])
                
                if (x9_10.d s< 1)
                    break
                
                int32_t* x10_9 = *(i_4 + 8)
                
                if (*x10_9 != 7)
                    int64_t x8_12 = 0
                    int32_t i_2
                    
                    do
                        if (x9_10 - 1 == x8_12)
                            return 1
                        
                        i_2 = x10_9[1 + x8_12]
                        x8_12 += 1
                    while (i_2 != 7)
                    
                    if (x8_12 u>= x9_10)
                        break
            else
                int32_t* x11_1 = *(i_5 + 8)
                
                if (*x11_1 != 0x5c)
                    int64_t x10_4 = 0
                    int32_t i_3
                    
                    do
                        if (x9_4 - 1 == x10_4)
                            goto label_a3c6d0
                        
                        i_3 = x11_1[1 + x10_4]
                        x10_4 += 1
                    while (i_3 != 0x5c)
                    
                    if (x10_4 u>= x9_4)
                        goto label_a3c6d0
            
        label_a3c808:
            return 0

return 1
