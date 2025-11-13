// 函数: _Z23Stamp_Chameleonize_Testv
// 地址: 0xa3d12c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*(gCampaignSetup + 0x19ac))

if (x19.d != 0)
    if (x19.d == 0x305)
        return 0
    
    if ((zx.d(*(DomDefGet(zx.q(x19.d), 0x17) + 0xc8)) & 4) == 0)
        return 0
    
    int32_t* i_5 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
    
    if (i_5 == 0)
        return 0
    
    int32_t* i = i_5
    
    do
        if (*i == x19.d)
            uint64_t x9_4 = zx.q(i[4])
            
            if (x9_4.d s< 1)
                goto label_a3d1e4
            
            int32_t* x11_1 = *(i + 8)
            
            if (*x11_1 == 0x1b)
                goto label_a3d354
            
            int64_t x10_4 = 0
            int32_t j
            
            do
                if (x9_4 - 1 == x10_4)
                    goto label_a3d1e4
                
                j = x11_1[1 + x10_4]
                x10_4 += 1
            while (j != 0x1b)
            
            if (x10_4 u< x9_4)
                goto label_a3d354
            
            goto label_a3d1e4
        
        i = *(i + 0x18)
    while (i != 0)
    
label_a3d1e4:
    int32_t* i_1 = i_5
    
    do
        if (*i_1 == x19.d)
            uint64_t x9_6 = zx.q(i_1[4])
            
            if (x9_6.d s< 1)
                goto label_a3d248
            
            int32_t* x11_3 = *(i_1 + 8)
            
            if (*x11_3 == 0x1c)
                goto label_a3d354
            
            int64_t x10_6 = 0
            int32_t j_1
            
            do
                if (x9_6 - 1 == x10_6)
                    goto label_a3d248
                
                j_1 = x11_3[1 + x10_6]
                x10_6 += 1
            while (j_1 != 0x1c)
            
            if (x10_6 u< x9_6)
                goto label_a3d354
            
            goto label_a3d248
        
        i_1 = *(i_1 + 0x18)
    while (i_1 != 0)
    
label_a3d248:
    int32_t* i_2 = i_5
    
    do
        if (*i_2 == x19.d)
            uint64_t x9_8 = zx.q(i_2[4])
            
            if (x9_8.d s< 1)
                goto label_a3d2ac
            
            int32_t* x11_5 = *(i_2 + 8)
            
            if (*x11_5 == 0x51)
                goto label_a3d354
            
            int64_t x10_8 = 0
            int32_t j_2
            
            do
                if (x9_8 - 1 == x10_8)
                    goto label_a3d2ac
                
                j_2 = x11_5[1 + x10_8]
                x10_8 += 1
            while (j_2 != 0x51)
            
            if (x10_8 u< x9_8)
                goto label_a3d354
            
            goto label_a3d2ac
        
        i_2 = *(i_2 + 0x18)
    while (i_2 != 0)
    
label_a3d2ac:
    int32_t* i_3 = i_5
    
    do
        if (*i_3 == x19.d)
            uint64_t x9_10 = zx.q(i_3[4])
            
            if (x9_10.d s< 1)
                goto label_a3d318
            
            int32_t* x11_7 = *(i_3 + 8)
            
            if (*x11_7 == 0x52)
                goto label_a3d354
            
            int64_t x10_10 = 0
            int32_t j_3
            
            do
                if (x9_10 - 1 == x10_10)
                    goto label_a3d318
                
                j_3 = x11_7[1 + x10_10]
                x10_10 += 1
            while (j_3 != 0x52)
            
            if (x10_10 u< x9_10)
                goto label_a3d354
            
            goto label_a3d318
        
        i_3 = *(i_3 + 0x18)
    while (i_3 != 0)
    
label_a3d318:
    
    while (*i_5 != x19.d)
        i_5 = *(i_5 + 0x18)
        
        if (i_5 == 0)
            return 0
    
    uint64_t x9_12 = zx.q(i_5[4])
    
    if (x9_12.d s< 1)
        return 0
    
    int32_t* x10_11 = *(i_5 + 8)
    
    if (*x10_11 != 0x53)
        uint64_t x8_4 = 0
        int32_t i_4
        
        do
            if (x9_12 - 1 == x8_4)
                x8_4 = x9_12
                break
            
            i_4 = x10_11[1 + x8_4]
            x8_4 += 1
        while (i_4 != 0x53)
        return zx.q(x8_4 u< x9_12 ? 1 : 0)

label_a3d354:
return 1
