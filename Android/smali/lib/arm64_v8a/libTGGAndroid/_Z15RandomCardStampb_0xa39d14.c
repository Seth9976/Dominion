// 函数: _Z15RandomCardStampb
// 地址: 0xa39d14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCampaignData + 8))
int64_t x9 = *gCampaignData
int64_t* x12_1 = x9 + ((x8 & 0x1bfd) << 3)
int32_t* x14_1

do
    x14_1 = *x12_1
    x12_1 = &x14_1[4]
while (*x14_1 != 0x1b58)

void* x12_3 = *(x14_1 + 8)
int64_t x13_1

if (*(x12_3 + 0x18) == 5)
    x13_1 = 0
else if (*(x12_3 + 0x288) == 5)
    x13_1 = 1
else if (*(x12_3 + 0x4f8) != 5)
    if (*(x12_3 + 0x768) != 5)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return Surprise_Stamps() __tailcall
    
    x13_1 = 3
else
    x13_1 = 2

void* x12_4 = x12_3 + x13_1 * 0x270
uint64_t x22 = zx.q(*(x12_4 + 0x280))
int64_t var_260[0x40]
int32_t x19

if (x22.d s< 1)
    x19 = 0
else if ((arg1.d & 1) == 0)
    int64_t x20_4 = 0
    x19 = 0
    
    while (true)
        int32_t i = *(x12_4 + 0x20 + (x20_4 << 3) + 4)
        int64_t* x8_31 = x9 + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(x8.d)) << 3)
        int32_t* x9_8
        
        do
            x9_8 = *x8_31
            x8_31 = &x9_8[4]
        while (*x9_8 != i)
        
        void* x8_33 = *(x9_8 + 8)
        int64_t x8_35
        
        if (*(x8_33 + 0x18) == 2)
            x8_35 = *(x8_33 + 0x20)
            
            if (x8_35 != 0)
            label_a3a11c:
                
                if ((x8_35() & 1) != 0)
                    var_260[sx.q(x19)] = x12_4 + 0x20 + (x20_4 << 3)
                    x19 += 1
            else
                var_260[sx.q(x19)] = x12_4 + 0x20 + (x20_4 << 3)
                x19 += 1
        else if (*(x8_33 + 0x288) == 2)
            x8_35 = *(x8_33 + 0x290)
            
            if (x8_35 != 0)
                goto label_a3a11c
            
            var_260[sx.q(x19)] = x12_4 + 0x20 + (x20_4 << 3)
            x19 += 1
        else if (*(x8_33 + 0x4f8) == 2)
            x8_35 = *(x8_33 + 0x500)
            
            if (x8_35 != 0)
                goto label_a3a11c
            
            var_260[sx.q(x19)] = x12_4 + 0x20 + (x20_4 << 3)
            x19 += 1
        else if (*(x8_33 + 0x768) != 2)
            var_260[sx.q(x19)] = x12_4 + 0x20 + (x20_4 << 3)
            x19 += 1
        else
            x8_35 = *(x8_33 + 0x770)
            
            if (x8_35 != 0)
                goto label_a3a11c
            
            var_260[sx.q(x19)] = x12_4 + 0x20 + (x20_4 << 3)
            x19 += 1
        x20_4 += 1
        
        if (x20_4 == x22)
            break
        
        x8 = zx.q(*(gCampaignData + 8))
        x9 = *gCampaignData
else
    void* x10_1 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)
    int64_t x24_1 = 0
    x19 = 0
    
    while (true)
        int32_t i_1 = *(x12_4 + 0x20 + (x24_1 << 3) + 4)
        int64_t* x8_3 = x9 + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(x8.d)) << 3)
        int32_t* x9_1
        
        do
            x9_1 = *x8_3
            x8_3 = &x9_1[4]
        while (*x9_1 != i_1)
        
        void* x8_5 = *(x9_1 + 8)
        int64_t x8_7
        
        if (*(x8_5 + 0x18) != 2)
            if (*(x8_5 + 0x288) == 2)
                x8_7 = *(x8_5 + 0x290)
                
                if (x8_7 != 0)
                    goto label_a39ed4
                
                goto label_a39edc
            
            if (*(x8_5 + 0x4f8) == 2)
                x8_7 = *(x8_5 + 0x500)
                
                if (x8_7 != 0)
                    goto label_a39ed4
                
                goto label_a39edc
            
            if (*(x8_5 + 0x768) != 2)
                goto label_a39edc
            
            x8_7 = *(x8_5 + 0x770)
            
            if (x8_7 == 0)
                goto label_a39edc
            
            goto label_a39ed4
        
        x8_7 = *(x8_5 + 0x20)
        
        if (x8_7 != 0)
        label_a39ed4:
            
            if ((x8_7() & 1) != 0)
                goto label_a39edc
        else
        label_a39edc:
            uint64_t x1_1 = zx.q(*(x10_1 + 0xc))
            
            if (x1_1.d != 0)
                int32_t x0_2 = CanDoCardStamp(zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_1)
                uint64_t x1_2 = zx.q(*(x10_1 + 0x10))
                
                if (x1_2.d != 0)
                    int32_t x0_4 = CanDoCardStamp(zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_2)
                    uint64_t x1_3 = zx.q(*(x10_1 + 0x14))
                    
                    if (x1_3.d != 0)
                        int32_t x0_6 =
                            CanDoCardStamp(zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_3)
                        uint64_t x1_4 = zx.q(*(x10_1 + 0x18))
                        int32_t x20_3 = (x0_2 & 1) + (x0_4 & 1) + (x0_6 & 1)
                        
                        if (x1_4.d != 0)
                            int32_t x0_8 =
                                CanDoCardStamp(zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_4)
                            uint64_t x1_5 = zx.q(*(x10_1 + 0x1c))
                            x20_3 += x0_8 & 1
                            
                            if (x1_5.d != 0)
                                int32_t x0_10 =
                                    CanDoCardStamp(zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_5)
                                uint64_t x1_6 = zx.q(*(x10_1 + 0x20))
                                x20_3 += x0_10 & 1
                                
                                if (x1_6.d != 0)
                                    int32_t x0_12 = CanDoCardStamp(
                                        zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_6)
                                    uint64_t x1_7 = zx.q(*(x10_1 + 0x24))
                                    x20_3 += x0_12 & 1
                                    
                                    if (x1_7.d != 0)
                                        int32_t x0_14 = CanDoCardStamp(
                                            zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_7)
                                        uint64_t x1_8 = zx.q(*(x10_1 + 0x28))
                                        x20_3 += x0_14 & 1
                                        
                                        if (x1_8.d != 0)
                                            int32_t x0_16 = CanDoCardStamp(
                                                zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_8)
                                            uint64_t x1_9 = zx.q(*(x10_1 + 0x2c))
                                            x20_3 += x0_16 & 1
                                            
                                            if (x1_9.d != 0)
                                                int32_t x0_18 = CanDoCardStamp(
                                                    zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), x1_9)
                                                uint64_t x1_10 = zx.q(*(x10_1 + 0x30))
                                                x20_3 += x0_18 & 1
                                                
                                                if (x1_10.d != 0)
                                                    x20_3 += CanDoCardStamp(
                                                        zx.q(*(x12_4 + 0x20 + (x24_1 << 3) + 4)), 
                                                        x1_10) & 1
                        
                        if (x20_3 u>= 3)
                            var_260[sx.q(x19)] = x12_4 + 0x20 + (x24_1 << 3)
                            x19 += 1
        
        x24_1 += 1
        
        if (x24_1 == x22)
            break
        
        x8 = zx.q(*(gCampaignData + 8))
        x9 = *gCampaignData

return zx.q(*(var_260[sx.q(RandomInt(gCampaignSetup, x19))] + 4))
