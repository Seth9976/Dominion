// 函数: _Z13RollThemeBellv
// 地址: 0xa42310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
int32_t* x24

if (x10.d == 2)
    x24 = x8 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x24 = x8 + (x10 << 3) + 0x5010

int64_t result

while (true)
label_a42388:
    int64_t* x8_7 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x8cc) << 3)
    int32_t* x9_5
    
    do
        x9_5 = *x8_7
        x8_7 = &x9_5[4]
    while (*x9_5 != 0x848)
    
    void* x8_9 = *(x9_5 + 8)
    int64_t x9_7
    
    if (*(x8_9 + 0x18) == 5)
        x9_7 = 0
    else if (*(x8_9 + 0x288) == 5)
        x9_7 = 1
    else if (*(x8_9 + 0x4f8) != 5)
        if (*(x8_9 + 0x768) != 5)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return Theme_StampA() __tailcall
        
        x9_7 = 3
    else
        x9_7 = 2
    
    void* x8_10 = x8_9 + x9_7 * 0x270
    result = RollTable(gCampaignSetup, x8_10 + 0x20, *(x8_10 + 0x280))
    *x24 = result.d
    
    if (result.d == 0x898)
        result = RollTwist()
        x24[1] = result.d
    else if (result.d == 0x866)
        result = RollStamp(0)
        x24[1] = result.d
    
    uint64_t i_1 = zx.q(*(gCampaignSetup + 0x19b4))
    
    if (i_1.d != 2)
        void* x8_14 = *(gCampaignSetup + 0x19a0)
        
        if (i_1.d s>= 1)
            int32_t* x12_1 = x8_14 + 0x5014
            uint64_t i
            
            do
                int32_t x13_1 = x12_1[-1]
                
                if (x13_1 == 0)
                    break
                
                if (x13_1 == *x24 && *x12_1 == x24[1])
                    goto label_a42388
                
                i = i_1
                i_1 -= 1
                x12_1 = &x12_1[2]
            while (i != 1)
        
        int64_t x9_12 = sx.q(*(gCampaignSetup + 0x19a8))
        int32_t x10_5 = *(x8_14 + (x9_12 << 0xb) + 0x540)
        
        if (x10_5 == 0)
            break
        
        if (x10_5 != *x24)
            break
        
        if (*(x8_14 + (x9_12 << 0xb) + 0x544) != x24[1])
            break
    else
        int32_t x10_2 = *x24
        int32_t x9_11 = x24[1]
        int32_t* x8_12 = *(gCampaignSetup + 0x19a0) + 0x5010
        
        if (*x8_12 == x10_2 && x8_12[1] == x9_11)
            continue
        
        if (x8_12[2] != x10_2)
            break
        
        if (x8_12[3] != x9_11)
            break

return result
