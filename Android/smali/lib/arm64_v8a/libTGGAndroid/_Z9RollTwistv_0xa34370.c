// 函数: _Z9RollTwistv
// 地址: 0xa34370
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int32_t x10_1

do
    int64_t* x8_3 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x1777) << 3)
    int32_t* x9_2
    
    do
        x9_2 = *x8_3
        x8_3 = &x9_2[4]
    while (*x9_2 != 0x1770)
    
    void* x8_5 = *(x9_2 + 8)
    int64_t x9_4
    
    if (*(x8_5 + 0x18) == 5)
        x9_4 = 0
    else if (*(x8_5 + 0x288) == 5)
        x9_4 = 1
    else if (*(x8_5 + 0x4f8) != 5)
        if (*(x8_5 + 0x768) != 5)
            pthread_kill(pthread_self(), 6)
            return RollStamp(XNoReturn()) __tailcall
        
        x9_4 = 3
    else
        x9_4 = 2
    
    void* x8_6 = x8_5 + x9_4 * 0x270
    result = RollTable(gCampaignSetup, x8_6 + 0x20, *(x8_6 + 0x280))
    
    if (result.d s> 0x1774)
        uint64_t x8_8 = zx.q(result.d - 0x1775)
        
        if (x8_8.d u> 0x6e)
            if (result.d - 0x1b5c u> 0xd)
                break
            
            if ((1 << (result.d - 0x1b5c) & 0x2217) == 0)
                break
        else
            switch (x8_8)
                case 1, 2, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 
                        0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                        0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
                        0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                        0x5c, 0x5d, 0x5e, 0x5f, 0x65, 0x6b
                    break
    else if (result.d - 0x14b5 u>= 2 && result.d != 0x141e && result.d != 0x1420)
        break
    
    int64_t x9_9 = 0
    int32_t* x8_13 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x590
    x10_1 = 1
    
    while (x8_13[-1] != result.d || *x8_13 != 0)
        bool cond:0_1 = x9_9 u< 0x1f
        x9_9 += 1
        x10_1 = cond:0_1 ? 1 : 0
        x8_13 = &x8_13[5]
        
        if (x9_9 == 0x20)
            break
while ((x10_1 & 1) != 0)
return result
