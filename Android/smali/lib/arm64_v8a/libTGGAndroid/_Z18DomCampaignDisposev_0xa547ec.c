// 函数: _Z18DomCampaignDisposev
// 地址: 0xa547ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *gCampaignData

if (x8 != 0)
    void* x0_1 = *x8
    uint64_t x20_1 = 0
    
    if (x0_1 == 0)
        goto label_a5482c
    
    int32_t x8_1
    
    while (true)
        void* x21_1 = *(x0_1 + 0x10)
        XPooledFree(x0_1, 0x18)
        x0_1 = x21_1
        
        if (x21_1 == 0)
            x8 = *gCampaignData
        label_a5482c:
            *(x8 + (x20_1 << 3)) = 0
            x8_1 = *(gCampaignData + 8)
            
            if (x20_1.d + 1 u> x8_1)
                break
            
            x0_1 = *(*gCampaignData + (zx.q(x20_1.d + 1) << 3))
            x20_1 = zx.q(x20_1.d + 1)
            
            if (x0_1 == 0)
                break
    
    void* x0_2 = *gCampaignData
    *(gCampaignData + 0xc) = 0
    XPooledFree(x0_2, (x8_1 << 3) + 8)
    *gCampaignData = 0

void* x8_3 = *(gCampaignData + 0x10)

if (x8_3 != 0)
    void* x0_3 = *x8_3
    uint64_t x20_2 = 0
    
    if (x0_3 == 0)
        goto label_a5489c
    
    int32_t x8_4
    
    while (true)
        void* x21_2 = *(x0_3 + 0x10)
        XPooledFree(x0_3, 0x18)
        x0_3 = x21_2
        
        if (x21_2 == 0)
            x8_3 = *(gCampaignData + 0x10)
        label_a5489c:
            *(x8_3 + (x20_2 << 3)) = 0
            x8_4 = *(gCampaignData + 0x18)
            
            if (x20_2.d + 1 u> x8_4)
                break
            
            x0_3 = *(*(gCampaignData + 0x10) + (zx.q(x20_2.d + 1) << 3))
            x20_2 = zx.q(x20_2.d + 1)
            
            if (x0_3 == 0)
                break
    
    void* x0_4 = *(gCampaignData + 0x10)
    *(gCampaignData + 0x1c) = 0
    XPooledFree(x0_4, (x8_4 << 3) + 8)
    *(gCampaignData + 0x10) = 0

XMap<DomCardCategory, XArray<DomCardEnum> >::Dispose()
int64_t result = XMap<DomCardEnum, XArray<DomCardCategory> >::Dispose()
void* x8_6 = *(gCampaignData + 0x60)

if (x8_6 != 0)
    void* x0_7 = *x8_6
    uint64_t x20_3 = 0
    
    if (x0_7 == 0)
        goto label_a5491c
    
    int32_t x8_7
    
    while (true)
        void* x21_3 = *(x0_7 + 8)
        XPooledFree(x0_7, 0x10)
        x0_7 = x21_3
        
        if (x21_3 == 0)
            x8_6 = *(gCampaignData + 0x60)
        label_a5491c:
            *(x8_6 + (x20_3 << 3)) = 0
            x8_7 = *(gCampaignData + 0x68)
            
            if (x20_3.d + 1 u> x8_7)
                break
            
            x0_7 = *(*(gCampaignData + 0x60) + (zx.q(x20_3.d + 1) << 3))
            x20_3 = zx.q(x20_3.d + 1)
            
            if (x0_7 == 0)
                break
    
    void* x0_8 = *(gCampaignData + 0x60)
    *(gCampaignData + 0x6c) = 0
    result = XPooledFree(x0_8, (x8_7 << 3) + 8)
    *(gCampaignData + 0x60) = 0

void* x8_9 = *(gCampaignData + 0x20)

if (x8_9 != 0)
    void* x0_9 = *x8_9
    uint64_t x20_4 = 0
    
    if (x0_9 == 0)
        goto label_a5498c
    
    int32_t x8_10
    
    while (true)
        void* x21_4 = *(x0_9 + 0x10)
        XPooledFree(x0_9, 0x18)
        x0_9 = x21_4
        
        if (x21_4 == 0)
            x8_9 = *(gCampaignData + 0x20)
        label_a5498c:
            *(x8_9 + (x20_4 << 3)) = 0
            x8_10 = *(gCampaignData + 0x28)
            
            if (x20_4.d + 1 u> x8_10)
                break
            
            x0_9 = *(*(gCampaignData + 0x20) + (zx.q(x20_4.d + 1) << 3))
            x20_4 = zx.q(x20_4.d + 1)
            
            if (x0_9 == 0)
                break
    
    void* x0_10 = *(gCampaignData + 0x20)
    *(gCampaignData + 0x2c) = 0
    result = XPooledFree(x0_10, (x8_10 << 3) + 8)
    *(gCampaignData + 0x20) = 0

void* x8_12 = *(gCampaignData + 0x30)

if (x8_12 != 0)
    void* x0_11 = *x8_12
    uint64_t x20_5 = 0
    
    if (x0_11 == 0)
        goto label_a549fc
    
    int32_t x8_13
    
    while (true)
        void* x21_5 = *(x0_11 + 0x10)
        XPooledFree(x0_11, 0x18)
        x0_11 = x21_5
        
        if (x21_5 == 0)
            x8_12 = *(gCampaignData + 0x30)
        label_a549fc:
            *(x8_12 + (x20_5 << 3)) = 0
            x8_13 = *(gCampaignData + 0x38)
            
            if (x20_5.d + 1 u> x8_13)
                break
            
            x0_11 = *(*(gCampaignData + 0x30) + (zx.q(x20_5.d + 1) << 3))
            x20_5 = zx.q(x20_5.d + 1)
            
            if (x0_11 == 0)
                break
    
    void* x0_12 = *(gCampaignData + 0x30)
    *(gCampaignData + 0x3c) = 0
    result = XPooledFree(x0_12, (x8_13 << 3) + 8)
    *(gCampaignData + 0x30) = 0

return result
