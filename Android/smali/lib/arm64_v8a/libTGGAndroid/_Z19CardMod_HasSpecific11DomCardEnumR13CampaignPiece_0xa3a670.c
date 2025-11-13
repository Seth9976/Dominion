// 函数: _Z19CardMod_HasSpecific11DomCardEnumR13CampaignPiece
// 地址: 0xa3a670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCampaignData + 8))
int64_t x9 = *gCampaignData
int64_t* x10_1 = x9 + ((x8 & 0x119d) << 3)
int32_t* x12_1

do
    x12_1 = *x10_1
    x10_1 = &x12_1[4]
while (*x12_1 != 0x1194)

void* x10_3 = *(x12_1 + 8)
int32_t x22
int64_t x11_1

if (*(x10_3 + 0x18) != 3)
    if (*(x10_3 + 0x288) == 3)
        x11_1 = 1
        goto label_a3a714
    
    if (*(x10_3 + 0x4f8) == 3)
        x11_1 = 2
        goto label_a3a714
    
    if (*(x10_3 + 0x768) == 3)
        x11_1 = 3
        goto label_a3a714
    
    x22 = 0
else
    x11_1 = 0
label_a3a714:
    void* x10_4 = x10_3 + x11_1 * 0x270
    uint64_t x23_1 = zx.q(*(x10_4 + 0x280))
    
    if (x23_1.d s< 1)
        x22 = 0
    else
        int64_t x24_1 = 0
        x22 = 1
        
        while (true)
            int32_t i = *(x10_4 + 0x20 + (x24_1 << 2))
            int64_t* x8_3 = x9 + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(x8.d)) << 3)
            int32_t* x9_1
            
            do
                x9_1 = *x8_3
                x8_3 = &x9_1[4]
            while (*x9_1 != i)
            
            void* x27_1 = *(x9_1 + 8)
            int32_t x8_5 = *(x27_1 + 0x18)
            int64_t x9_3
            
            if (x8_5 == 2)
                x9_3 = *(x27_1 + 0x20)
                
                if (x9_3 == 0)
                    goto label_a3a7e8
                
            label_a3a7dc:
                
                if ((x9_3() & 1) == 0)
                label_a3a8ac:
                    x24_1 += 1
                    x22 = x24_1 u< x23_1 ? 1 : 0
                    
                    if (x24_1 == x23_1)
                        break
                    
                    x8 = zx.q(*(gCampaignData + 8))
                    x9 = *gCampaignData
                    continue
                else
                    x8_5 = *(x27_1 + 0x18)
            else if (*(x27_1 + 0x288) == 2)
                x9_3 = *(x27_1 + 0x290)
                
                if (x9_3 != 0)
                    goto label_a3a7dc
            else if (*(x27_1 + 0x4f8) == 2)
                x9_3 = *(x27_1 + 0x500)
                
                if (x9_3 != 0)
                    goto label_a3a7dc
            else if (*(x27_1 + 0x768) == 2)
                x9_3 = *(x27_1 + 0x770)
                
                if (x9_3 != 0)
                    goto label_a3a7dc
        label_a3a7e8:
            uint64_t x8_13
            void* x9_10
            
            if (x8_5 == 6 && *(x27_1 + 0x284) == 0)
                x9_10 = x27_1
                x8_13 = zx.q(*(x9_10 + 0x280))
                
                if (x8_13.d s>= 1)
                label_a3a890:
                    int32_t* x9_11 = *(x9_10 + 0x20)
                    
                    while (*x9_11 != arg1)
                        uint64_t temp0_1 = x8_13
                        x8_13 -= 1
                        x9_11 = &x9_11[1]
                        
                        if (temp0_1 == 1)
                            goto label_a3a8ac
                    
                    *arg2 = *(x10_4 + 0x20 + (zx.q(x24_1.d) << 2))
                    break
                
                goto label_a3a8ac
            
            if (*(x27_1 + 0x288) == 6 && *(x27_1 + 0x4f4) == 0)
                x9_10 = x27_1 + 0x270
                x8_13 = zx.q(*(x9_10 + 0x280))
                
                if (x8_13.d s>= 1)
                    goto label_a3a890
                
                goto label_a3a8ac
            
            if (*(x27_1 + 0x4f8) == 6 && *(x27_1 + 0x764) == 0)
                x9_10 = x27_1 + 0x4e0
                x8_13 = zx.q(*(x9_10 + 0x280))
                
                if (x8_13.d s< 1)
                    goto label_a3a8ac
                
                goto label_a3a890
            
            if (*(x27_1 + 0x768) != 6 || *(x27_1 + 0x9d4) != 0)
                goto label_a3a8ac
            
            x9_10 = x27_1 + 0x750
            x8_13 = zx.q(*(x9_10 + 0x280))
            
            if (x8_13.d s>= 1)
                goto label_a3a890
            
            goto label_a3a8ac
return zx.q(x22) & 1
