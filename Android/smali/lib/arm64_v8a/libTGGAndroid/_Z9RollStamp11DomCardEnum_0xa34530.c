// 函数: _Z9RollStamp11DomCardEnum
// 地址: 0xa34530
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x21_1
int32_t x10_1

do
    if (x19 != 0)
        int32_t x0_2
        
        do
            int64_t* x8_9 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x1bfd) << 3)
            int32_t* x9_7
            
            do
                x9_7 = *x8_9
                x8_9 = &x9_7[4]
            while (*x9_7 != 0x1b58)
            
            void* x8_11 = *(x9_7 + 8)
            int64_t x9_5
            
            if (*(x8_11 + 0x18) == 5)
                x9_5 = 0
            else if (*(x8_11 + 0x288) == 5)
                x9_5 = 1
            else if (*(x8_11 + 0x4f8) != 5)
                if (*(x8_11 + 0x768) != 5)
                    goto label_a34794
                
                x9_5 = 3
            else
                x9_5 = 2
            
            void* x8_6 = x8_11 + x9_5 * 0x270
            int64_t x0_1 = RollTable(gCampaignSetup, x8_6 + 0x20, *(x8_6 + 0x280))
            x21_1 = x0_1.d
            x0_2 = CanDoCardStamp(x0_1, zx.q(x19))
        while ((x0_2 & 1) == 0)
    else
        int64_t* x8_3 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x1bfd) << 3)
        int32_t* x9_2
        
        do
            x9_2 = *x8_3
            x8_3 = &x9_2[4]
        while (*x9_2 != 0x1b58)
        
        void* x8_5 = *(x9_2 + 8)
        int64_t x9_4
        
        if (*(x8_5 + 0x18) == 5)
            x9_4 = 0
        else if (*(x8_5 + 0x288) == 5)
            x9_4 = 1
        else if (*(x8_5 + 0x4f8) != 5)
            if (*(x8_5 + 0x768) != 5)
            label_a34794:
                pthread_kill(pthread_self(), 6)
                uint64_t x0_7
                int64_t x1_4
                x0_7, x1_4 = XNoReturn()
                return CanDoCardStamp(x0_7, x1_4) __tailcall
            
            x9_4 = 3
        else
            x9_4 = 2
        
        void* x8_12 = x8_5 + x9_4 * 0x270
        x21_1 = RollTable(gCampaignSetup, x8_12 + 0x20, *(x8_12 + 0x280))
    
    if (x21_1 s> 0x1774)
        uint64_t x8_14 = zx.q(x21_1 - 0x1775)
        
        if (x8_14.d u> 0x6e)
            if (x21_1 - 0x1b5c u> 0xd)
                break
            
            if ((1 << (x21_1 - 0x1b5c) & 0x2217) == 0)
                break
        else
            switch (x8_14)
                case 1, 2, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 
                        0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                        0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
                        0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                        0x5c, 0x5d, 0x5e, 0x5f, 0x65, 0x6b
                    break
    else if (x21_1 - 0x14b5 u>= 2 && x21_1 != 0x141e && x21_1 != 0x1420)
        break
    
    int64_t x9_16 = 0
    int32_t* x8_19 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x590
    x10_1 = 1
    
    while (x8_19[-1] != x21_1 || *x8_19 != x19)
        bool cond:0_1 = x9_16 u< 0x1f
        x9_16 += 1
        x10_1 = cond:0_1 ? 1 : 0
        x8_19 = &x8_19[5]
        
        if (x9_16 == 0x20)
            break
while ((x10_1 & 1) != 0)
return zx.q(x21_1)
