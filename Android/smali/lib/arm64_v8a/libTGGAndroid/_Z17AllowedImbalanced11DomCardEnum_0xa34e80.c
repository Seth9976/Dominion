// 函数: _Z17AllowedImbalanced11DomCardEnum
// 地址: 0xa34e80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* i_7 = *(*(gCampaignData + 0x50)
    + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3))

if (i_7 != 0)
    int32_t* i_8 = i_7
    
    while (true)
        if (*i_8 != arg1)
            i_8 = *(i_8 + 0x18)
            
            if (i_8 != 0)
                continue
            
            goto label_a34f04
        
        uint64_t x9_3 = zx.q(i_8[4])
        
        if (x9_3.d s< 1)
        label_a34f04:
            int32_t* i = i_7
            
            do
                if (*i == arg1)
                    uint64_t x9_5 = zx.q(i[4])
                    
                    if (x9_5.d s< 1)
                        goto label_a34f68
                    
                    int32_t* x11_3 = *(i + 8)
                    
                    if (*x11_3 == 0x2c)
                        goto label_a35130
                    
                    int64_t x10_4 = 0
                    int32_t j
                    
                    do
                        if (x9_5 - 1 == x10_4)
                            goto label_a34f68
                        
                        j = x11_3[1 + x10_4]
                        x10_4 += 1
                    while (j != 0x2c)
                    
                    if (x10_4 u< x9_5)
                        goto label_a35130
                    
                    goto label_a34f68
                
                i = *(i + 0x18)
            while (i != 0)
            
        label_a34f68:
            int32_t* i_1 = i_7
            
            do
                if (*i_1 == arg1)
                    uint64_t x9_7 = zx.q(i_1[4])
                    
                    if (x9_7.d s< 1)
                        goto label_a34fcc
                    
                    int32_t* x11_5 = *(i_1 + 8)
                    
                    if (*x11_5 == 5)
                        goto label_a35130
                    
                    int64_t x10_6 = 0
                    int32_t j_1
                    
                    do
                        if (x9_7 - 1 == x10_6)
                            goto label_a34fcc
                        
                        j_1 = x11_5[1 + x10_6]
                        x10_6 += 1
                    while (j_1 != 5)
                    
                    if (x10_6 u< x9_7)
                        goto label_a35130
                    
                    goto label_a34fcc
                
                i_1 = *(i_1 + 0x18)
            while (i_1 != 0)
            
        label_a34fcc:
            int32_t* i_2 = i_7
            
            do
                if (*i_2 == arg1)
                    uint64_t x9_9 = zx.q(i_2[4])
                    
                    if (x9_9.d s< 1)
                        goto label_a35030
                    
                    int32_t* x11_7 = *(i_2 + 8)
                    
                    if (*x11_7 == 0x11)
                        goto label_a35130
                    
                    int64_t x10_8 = 0
                    int32_t j_2
                    
                    do
                        if (x9_9 - 1 == x10_8)
                            goto label_a35030
                        
                        j_2 = x11_7[1 + x10_8]
                        x10_8 += 1
                    while (j_2 != 0x11)
                    
                    if (x10_8 u< x9_9)
                        goto label_a35130
                    
                    goto label_a35030
                
                i_2 = *(i_2 + 0x18)
            while (i_2 != 0)
            
        label_a35030:
            int32_t* i_3 = i_7
            
            do
                if (*i_3 == arg1)
                    uint64_t x9_11 = zx.q(i_3[4])
                    
                    if (x9_11.d s< 1)
                        goto label_a35094
                    
                    int32_t* x11_9 = *(i_3 + 8)
                    
                    if (*x11_9 == 0x12)
                        goto label_a35130
                    
                    int64_t x10_10 = 0
                    int32_t j_3
                    
                    do
                        if (x9_11 - 1 == x10_10)
                            goto label_a35094
                        
                        j_3 = x11_9[1 + x10_10]
                        x10_10 += 1
                    while (j_3 != 0x12)
                    
                    if (x10_10 u< x9_11)
                        goto label_a35130
                    
                    goto label_a35094
                
                i_3 = *(i_3 + 0x18)
            while (i_3 != 0)
            
        label_a35094:
            int32_t* i_4 = i_7
            
            do
                if (*i_4 == arg1)
                    uint64_t x9_13 = zx.q(i_4[4])
                    
                    if (x9_13.d s< 1)
                        goto label_a35100
                    
                    int32_t* x11_11 = *(i_4 + 8)
                    
                    if (*x11_11 == 0x38)
                        goto label_a35130
                    
                    int64_t x10_12 = 0
                    int32_t j_4
                    
                    do
                        if (x9_13 - 1 == x10_12)
                            goto label_a35100
                        
                        j_4 = x11_11[1 + x10_12]
                        x10_12 += 1
                    while (j_4 != 0x38)
                    
                    if (x10_12 u< x9_13)
                        goto label_a35130
                    
                    goto label_a35100
                
                i_4 = *(i_4 + 0x18)
            while (i_4 != 0)
            
        label_a35100:
            
            while (*i_7 != arg1)
                i_7 = *(i_7 + 0x18)
                
                if (i_7 == 0)
                    return 1
            
            uint64_t x9_15 = zx.q(i_7[4])
            
            if (x9_15.d s< 1)
                break
            
            int32_t* x10_13 = *(i_7 + 8)
            
            if (*x10_13 != 0x3a)
                int64_t x8_2 = 0
                int32_t i_5
                
                do
                    if (x9_15 - 1 == x8_2)
                        return 1
                    
                    i_5 = x10_13[1 + x8_2]
                    x8_2 += 1
                while (i_5 != 0x3a)
                
                if (x8_2 u>= x9_15)
                    break
        else
            int32_t* x11_1 = *(i_8 + 8)
            
            if (*x11_1 != 0x2b)
                int64_t x10_2 = 0
                int32_t i_6
                
                do
                    if (x9_3 - 1 == x10_2)
                        goto label_a34f04
                    
                    i_6 = x11_1[1 + x10_2]
                    x10_2 += 1
                while (i_6 != 0x2b)
                
                if (x10_2 u>= x9_3)
                    goto label_a34f04
        
    label_a35130:
        return 0

return 1
