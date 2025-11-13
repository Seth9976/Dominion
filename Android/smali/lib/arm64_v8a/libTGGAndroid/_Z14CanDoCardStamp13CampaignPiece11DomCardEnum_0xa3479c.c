// 函数: _Z14CanDoCardStamp13CampaignPiece11DomCardEnum
// 地址: 0xa3479c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t i = arg1
int64_t* x8_1 =
    *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != i)

void* x8_3 = *(x9_2 + 8)
int64_t x0

if (*(x8_3 + 0x18) == 2)
    x0 = *(x8_3 + 0x20)
    
    if (x0 == 0)
        return 1
else if (*(x8_3 + 0x288) == 2)
    x0 = *(x8_3 + 0x290)
    
    if (x0 == 0)
        return 1
else if (*(x8_3 + 0x4f8) != 2)
    if (*(x8_3 + 0x768) != 2)
        return 1
    
    x0 = *(x8_3 + 0x770)
    
    if (x0 == 0)
        return 1
else
    x0 = *(x8_3 + 0x500)
    
    if (x0 == 0)
        return 1

if (x19 == 0)
    jump(x0)

if ((IsLandscape(zx.q(x19)) & 1) == 0)
    if (i s> 0x1774)
        uint64_t x8_9 = zx.q(i - 0x1775)
        
        if (x8_9.d u> 0x6e)
            if (i - 0x1b5c u> 0xd || (1 << (i - 0x1b5c) & 0x2217) == 0)
                goto label_a34998
            
            goto label_a3493c
        
        switch (x8_9)
            case 0, 3, 0x60, 0x61, 0x62, 0x63, 0x64, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6c, 0x6d, 0x6e
                goto label_a3493c
            case 1, 2, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                    0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 
                    0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
                    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 
                    0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
                    0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 
                    0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x65, 0x6b
                goto label_a34998
    else
        if (i - 0x14b5 u>= 2 && i != 0x141e && i != 0x1420)
        label_a34998:
            int32_t x8_15 = *(gCampaignSetup + 0x19ac)
            *(gCampaignSetup + 0x19ac) = x19
            *(gCampaignSetup + 0x19b0) = x8_15
            int32_t x0_6 = x0()
            int32_t x8_16 = *(gCampaignSetup + 0x19b0)
            *(gCampaignSetup + 0x19b0) = 0
            *(gCampaignSetup + 0x19ac) = x8_16
            return zx.q(x0_6) & 1
        
    label_a3493c:
        int64_t x9_7 = 0
        int32_t* x8_14 =
            *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x590
        int32_t x10_4 = 1
        
        while (x8_14[-1] != i || *x8_14 != x19)
            bool cond:0_1 = x9_7 u< 0x1f
            x9_7 += 1
            x10_4 = cond:0_1 ? 1 : 0
            x8_14 = &x8_14[5]
            
            if (x9_7 == 0x20)
                break
        
        if ((x10_4 & 1) == 0)
            goto label_a34998

return 0
