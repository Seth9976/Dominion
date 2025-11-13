// 函数: _Z15DomCampaignInitv
// 地址: 0xa5414c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = XPooledCalloc(0x2000)
int32_t x8 = 0x3ff
int32_t* x20 = &data_151a718
*gCampaignData = x0
*(gCampaignData + 8) = 0x3ff

while (true)
    int32_t i = *x20
    uint64_t x22_1 = (zx.q(i) | zx.q(i s>> 4)) & zx.q(x8)
    int32_t* x8_6 = *(x0 + (x22_1 << 3))
    
    if (x8_6 == 0)
    label_a54194:
        int32_t* x0_1 = XPooledMalloc(0x18)
        int32_t x8_1 = *x20
        *(x0_1 + 8) = x20
        *x0_1 = x8_1
        void** x8_2 = *gCampaignData
        *(x0_1 + 0x10) = x8_2[x22_1]
        x8_2[x22_1] = x0_1
        *(gCampaignData + 0xc) += 1
        x20 = &x20[0x278]
        
        if (x20 == &data_15ec498)
            break
    else
        while (i != *x8_6)
            x8_6 = *(x8_6 + 0x10)
            
            if (x8_6 == 0)
                goto label_a54194
        
        *(x8_6 + 8) = x20
        x20 = &x20[0x278]
        
        if (x20 == &data_15ec498)
            break
    
    x8 = *(gCampaignData + 8)
    x0 = *gCampaignData

int64_t x0_2 = XPooledCalloc(0x2000)
int32_t x8_7 = 0x3ff
void* const x20_1 = &data_7b07d8
*(gCampaignData + 0x20) = x0_2
*(gCampaignData + 0x28) = 0x3ff

while (true)
    int32_t i_1 = *x20_1
    uint64_t x22_2 = (zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(x8_7)
    int32_t* x8_15 = *(x0_2 + (x22_2 << 3))
    
    if (x8_15 == 0)
    label_a54244:
        int32_t* x0_3 = XPooledMalloc(0x18)
        int32_t x8_8 = *x20_1
        *(x0_3 + 8) = x20_1
        *x0_3 = x8_8
        *(x0_3 + 0x10) = *(*(gCampaignData + 0x20) + (x22_2 << 3))
        (*(gCampaignData + 0x20))[x22_2] = x0_3
        *(gCampaignData + 0x2c) += 1
        x20_1 += 0xcc
        
        if (x20_1 == &data_7d0374)
            break
    else
        while (i_1 != *x8_15)
            x8_15 = *(x8_15 + 0x10)
            
            if (x8_15 == 0)
                goto label_a54244
        
        *(x8_15 + 8) = x20_1
        x20_1 += 0xcc
        
        if (x20_1 == &data_7d0374)
            break
    
    x8_7 = *(gCampaignData + 0x28)
    x0_2 = *(gCampaignData + 0x20)

int64_t x0_4 = XPooledCalloc(0x2000)
int32_t x8_16 = 0x3ff
void* const x20_2 = &data_7d0374
*(gCampaignData + 0x30) = x0_4
*(gCampaignData + 0x38) = 0x3ff

while (true)
    int32_t i_2 = *x20_2
    uint64_t x22_3 = (zx.q(i_2) | zx.q(i_2 s>> 4)) & zx.q(x8_16)
    int32_t* x8_24 = *(x0_4 + (x22_3 << 3))
    
    if (x8_24 == 0)
    label_a542f8:
        int32_t* x0_5 = XPooledMalloc(0x18)
        int32_t x8_17 = *x20_2
        *(x0_5 + 8) = x20_2
        *x0_5 = x8_17
        *(x0_5 + 0x10) = *(*(gCampaignData + 0x30) + (x22_3 << 3))
        (*(gCampaignData + 0x30))[x22_3] = x0_5
        *(gCampaignData + 0x3c) += 1
        x20_2 += 0xcc
        
        if (x20_2 == &EXP_CAMPAIGNCARDS_COUNT)
            break
    else
        while (i_2 != *x8_24)
            x8_24 = *(x8_24 + 0x10)
            
            if (x8_24 == 0)
                goto label_a542f8
        
        *(x8_24 + 8) = x20_2
        x20_2 += 0xcc
        
        if (x20_2 == &EXP_CAMPAIGNCARDS_COUNT)
            break
    
    x8_16 = *(gCampaignData + 0x38)
    x0_4 = *(gCampaignData + 0x30)

void* const i_3 = &data_1136008
*(gCampaignData + 0x60) = XPooledCalloc(0x1000)
*(gCampaignData + 0x68) = 0x1ff

do
    int64_t x22_4 = 0
    
    while (true)
        uint64_t x8_32 = zx.q(*(i_3 + (x22_4 << 2) + 0x18))
        
        if (x8_32.d == 0)
            break
        
        uint64_t x24_1 = zx.q(*(gCampaignData + 0x68)) & (zx.q(x8_32.d s>> 4) | x8_32)
        int32_t* x9_6 = *(*(gCampaignData + 0x60) + (x24_1 << 3))
        
        if (x9_6 == 0)
        label_a543c0:
            int32_t* x0_7 = XPooledMalloc(0x10)
            uint64_t x9_4 = x24_1 << 3
            *x0_7 = *(i_3 + (x22_4 << 2) + 0x18)
            x0_7[1] = *i_3
            *(x0_7 + 8) = *(*(gCampaignData + 0x60) + x9_4)
            *(*(gCampaignData + 0x60) + x9_4) = x0_7
            *(gCampaignData + 0x6c) += 1
            x22_4 += 1
            
            if (x22_4 == 0x10)
                break
        else
            while (x8_32.d != *x9_6)
                x9_6 = *(x9_6 + 8)
                
                if (x9_6 == 0)
                    goto label_a543c0
            
            x9_6[1] = *i_3
            x22_4 += 1
            
            if (x22_4 == 0x10)
                break
    
    i_3 += 0x58
while (i_3 != &data_1138318)

*(gCampaignData + 0x50) = XPooledCalloc(0x2000)
*(gCampaignData + 0x58) = 0x3ff
int64_t x0_9 = XPooledCalloc(0x2000)
*(gCampaignData + 0x48) = 0x3ff
void* const i_4 = &data_7d5258
*(gCampaignData + 0x40) = x0_9

do
    int32_t j = *i_4
    uint64_t x22_5 = (zx.q(j) | zx.q(j s>> 4)) & zx.q(*(gCampaignData + 0x58))
    int32_t* x9_8 = *(*(gCampaignData + 0x50) + (x22_5 << 3))
    void* x22_6
    
    if (x9_8 == 0)
    label_a544fc:
        int32_t* x0_10 = XPooledMalloc(0x20)
        int32_t x8_34 = *i_4
        *(x0_10 + 8) = 0
        *(x0_10 + 0x10) = 0
        uint64_t x9_9 = x22_5 << 3
        *x0_10 = x8_34
        *(x0_10 + 0x18) = *(*(gCampaignData + 0x50) + x9_9)
        *(*(gCampaignData + 0x50) + x9_9) = x0_10
        *(gCampaignData + 0x5c) += 1
    else
        int32_t* x10_11 = x9_8
        
        while (true)
            if (j == *x10_11)
                x22_6 = &x10_11[2]
                
                if (*(x22_6 + 0xc) != 0)
                    goto label_a54598
                
                goto label_a54590
            
            x10_11 = *(x10_11 + 0x18)
            
            if (x10_11 == 0)
                while (j != *x9_8)
                    x9_8 = *(x9_8 + 0x18)
                    
                    if (x9_8 == 0)
                        goto label_a544fc
                
                *(x9_8 + 8) = 0
                *(x9_8 + 0x10) = 0
                break
    
    XPooledShutdown()
    int32_t j_1 = *i_4
    int32_t* x9_12 = *(*(gCampaignData + 0x50)
        + (((zx.q(j_1) | zx.q(j_1 s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3))
    
    if (x9_12 == 0)
    label_a5457c:
        x22_6 = nullptr
        
        if (*0xc == 0)
        label_a54590:
            *x22_6 = XPooledCalloc(0x40)
            *(x22_6 + 8) = 0x1000000000
    else
        while (j_1 != *x9_12)
            x9_12 = *(x9_12 + 0x18)
            
            if (x9_12 == 0)
                goto label_a5457c
        
        x22_6 = &x9_12[2]
        
        if (*(x22_6 + 0xc) == 0)
            goto label_a54590
    
label_a54598:
    
    for (int64_t j_2 = 0; j_2 != 0x10; )
        int32_t x8_46 = *(i_4 + (j_2 << 2) + 4)
        
        if (x8_46 == 0)
            break
        
        *(*x22_6 + (sx.q(*(x22_6 + 8)) << 2)) = x8_46
        *(x22_6 + 8) += 1
        int32_t k = *(i_4 + (j_2 << 2) + 4)
        uint64_t x25_1 = (zx.q(k) | zx.q(k s>> 4)) & zx.q(*(gCampaignData + 0x48))
        int32_t* x9_16 = *(*(gCampaignData + 0x40) + (x25_1 << 3))
        void* x24_2
        
        if (x9_16 == 0)
        label_a54644:
            int32_t* x0_13 = XPooledMalloc(0x20)
            int32_t x8_49 = *(i_4 + (j_2 << 2) + 4)
            *(x0_13 + 8) = 0
            *(x0_13 + 0x10) = 0
            uint64_t x9_17 = x25_1 << 3
            *x0_13 = x8_49
            *(x0_13 + 0x18) = *(*(gCampaignData + 0x40) + x9_17)
            *(*(gCampaignData + 0x40) + x9_17) = x0_13
            *(gCampaignData + 0x4c) += 1
        else
            int32_t* x10_17 = x9_16
            
            while (true)
                if (k == *x10_17)
                    x24_2 = &x10_17[2]
                    
                    if (*(x24_2 + 0xc) != 0)
                        goto label_a545ac
                    
                    goto label_a546d8
                
                x10_17 = *(x10_17 + 0x18)
                
                if (x10_17 == 0)
                    while (k != *x9_16)
                        x9_16 = *(x9_16 + 0x18)
                        
                        if (x9_16 == 0)
                            goto label_a54644
                    
                    *(x9_16 + 8) = 0
                    *(x9_16 + 0x10) = 0
                    break
        
        XPooledShutdown()
        int32_t k_1 = *(i_4 + (j_2 << 2) + 4)
        int32_t* x9_20 = *(*(gCampaignData + 0x40)
            + (((zx.q(k_1) | zx.q(k_1 s>> 4)) & zx.q(*(gCampaignData + 0x48))) << 3))
        
        if (x9_20 != 0)
            while (k_1 != *x9_20)
                x9_20 = *(x9_20 + 0x18)
                
                if (x9_20 == 0)
                    goto label_a545a0
            
            x24_2 = &x9_20[2]
            
            if (*(x24_2 + 0xc) != 0)
                goto label_a545ac
            
            goto label_a546d8
        
    label_a545a0:
        x24_2 = nullptr
        int64_t x0_12
        int32_t x8_43
        
        if (*0xc == 0)
        label_a546d8:
            x0_12 = XPooledCalloc(0x400)
            x8_43 = 0
            *x24_2 = x0_12
            *(x24_2 + 8) = 0x10000000000
        else
        label_a545ac:
            x8_43 = *(x24_2 + 8)
            x0_12 = *x24_2
        
        j_2 += 1
        *(x0_12 + (sx.q(x8_43) << 2)) = *i_4
        *(x24_2 + 8) += 1
    
    i_4 += 0x44
while (i_4 != "NSt6__ndk110__function6__funcIZ16CampaignForceAdd11DomCardTypeE3$_0NS_9allocatorIS3_EEFb11DomCardEnumEEE")

int32_t* result = XPooledCalloc(0x2000)
*(gCampaignData + 0x10) = result
*(gCampaignData + 0x18) = 0x3ff
uint32_t x8_58 = *NUM_CATEGORY_DEFS

if (x8_58 s>= 1)
    int64_t x21_1 = 0
    int32_t x9_21 = 0x3ff
    
    while (true)
        int32_t* x24_5 = *CATEGORY_DEFS + x21_1 * 0x28
        int32_t i_5 = *x24_5
        uint64_t x25_2 = (zx.q(i_5) | zx.q(i_5 s>> 4)) & zx.q(x9_21)
        int32_t* x9_26 = *(result + (x25_2 << 3))
        
        if (x9_26 == 0)
        label_a54740:
            result = XPooledMalloc(0x18)
            int32_t x8_59 = *x24_5
            *(result + 8) = x24_5
            uint64_t x9_22 = x25_2 << 3
            *result = x8_59
            *(result + 0x10) = *(*(gCampaignData + 0x10) + x9_22)
            *(*(gCampaignData + 0x10) + x9_22) = result
            x8_58 = *NUM_CATEGORY_DEFS
            *(gCampaignData + 0x1c) += 1
            x21_1 += 1
            
            if (x21_1 s>= sx.q(x8_58))
                break
        else
            while (i_5 != *x9_26)
                x9_26 = *(x9_26 + 0x10)
                
                if (x9_26 == 0)
                    goto label_a54740
            
            *(x9_26 + 8) = x24_5
            x21_1 += 1
            
            if (x21_1 s>= sx.q(x8_58))
                break
        
        x9_21 = *(gCampaignData + 0x18)
        result = *(gCampaignData + 0x10)

return result
