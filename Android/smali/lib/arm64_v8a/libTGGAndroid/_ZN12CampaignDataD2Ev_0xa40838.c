// 函数: _ZN12CampaignDataD2Ev
// 地址: 0xa40838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x8 = entry_x0[0xc]

if (x8 != 0)
    void* x0 = *x8
    uint64_t x20_1 = 0
    
    if (x0 == 0)
        goto label_a40874
    
    int32_t x8_1
    
    while (true)
        void* x21_1 = *(x0 + 8)
        XPooledFree(x0, 0x10)
        x0 = x21_1
        
        if (x21_1 == 0)
            x8 = entry_x0[0xc]
        label_a40874:
            *(x8 + (x20_1 << 3)) = 0
            x8_1 = entry_x0[0xd].d
            
            if (x20_1.d + 1 u> x8_1)
                break
            
            x0 = *(entry_x0[0xc] + (zx.q(x20_1.d + 1) << 3))
            x20_1 = zx.q(x20_1.d + 1)
            
            if (x0 == 0)
                break
    
    void* x0_1 = entry_x0[0xc]
    *(entry_x0 + 0x6c) = 0
    XPooledFree(x0_1, (x8_1 << 3) + 8)
    entry_x0[0xc] = 0

XMap<DomCardEnum, XArray<DomCardCategory> >::Dispose()
int64_t result = XMap<DomCardCategory, XArray<DomCardEnum> >::Dispose()
void* x8_3 = entry_x0[6]

if (x8_3 != 0)
    void* x0_4 = *x8_3
    uint64_t x20_2 = 0
    
    if (x0_4 == 0)
        goto label_a408f4
    
    int32_t x8_4
    
    while (true)
        void* x21_2 = *(x0_4 + 0x10)
        XPooledFree(x0_4, 0x18)
        x0_4 = x21_2
        
        if (x21_2 == 0)
            x8_3 = entry_x0[6]
        label_a408f4:
            *(x8_3 + (x20_2 << 3)) = 0
            x8_4 = entry_x0[7].d
            
            if (x20_2.d + 1 u> x8_4)
                break
            
            x0_4 = *(entry_x0[6] + (zx.q(x20_2.d + 1) << 3))
            x20_2 = zx.q(x20_2.d + 1)
            
            if (x0_4 == 0)
                break
    
    void* x0_5 = entry_x0[6]
    *(entry_x0 + 0x3c) = 0
    result = XPooledFree(x0_5, (x8_4 << 3) + 8)
    entry_x0[6] = 0

void* x8_6 = entry_x0[4]

if (x8_6 != 0)
    void* x0_6 = *x8_6
    uint64_t x20_3 = 0
    
    if (x0_6 == 0)
        goto label_a40964
    
    int32_t x8_7
    
    while (true)
        void* x21_3 = *(x0_6 + 0x10)
        XPooledFree(x0_6, 0x18)
        x0_6 = x21_3
        
        if (x21_3 == 0)
            x8_6 = entry_x0[4]
        label_a40964:
            *(x8_6 + (x20_3 << 3)) = 0
            x8_7 = entry_x0[5].d
            
            if (x20_3.d + 1 u> x8_7)
                break
            
            x0_6 = *(entry_x0[4] + (zx.q(x20_3.d + 1) << 3))
            x20_3 = zx.q(x20_3.d + 1)
            
            if (x0_6 == 0)
                break
    
    void* x0_7 = entry_x0[4]
    *(entry_x0 + 0x2c) = 0
    result = XPooledFree(x0_7, (x8_7 << 3) + 8)
    entry_x0[4] = 0

void* x8_9 = entry_x0[2]

if (x8_9 != 0)
    void* x0_8 = *x8_9
    uint64_t x20_4 = 0
    
    if (x0_8 == 0)
        goto label_a409d4
    
    int32_t x8_10
    
    while (true)
        void* x21_4 = *(x0_8 + 0x10)
        XPooledFree(x0_8, 0x18)
        x0_8 = x21_4
        
        if (x21_4 == 0)
            x8_9 = entry_x0[2]
        label_a409d4:
            *(x8_9 + (x20_4 << 3)) = 0
            x8_10 = entry_x0[3].d
            
            if (x20_4.d + 1 u> x8_10)
                break
            
            x0_8 = *(entry_x0[2] + (zx.q(x20_4.d + 1) << 3))
            x20_4 = zx.q(x20_4.d + 1)
            
            if (x0_8 == 0)
                break
    
    void* x0_9 = entry_x0[2]
    *(entry_x0 + 0x1c) = 0
    result = XPooledFree(x0_9, (x8_10 << 3) + 8)
    entry_x0[2] = 0

void* x8_12 = *entry_x0

if (x8_12 != 0)
    void* x0_10 = *x8_12
    uint64_t x20_5 = 0
    
    if (x0_10 == 0)
        goto label_a40a44
    
    int32_t x8_13
    
    while (true)
        void* x21_5 = *(x0_10 + 0x10)
        XPooledFree(x0_10, 0x18)
        x0_10 = x21_5
        
        if (x21_5 == 0)
            x8_12 = *entry_x0
        label_a40a44:
            *(x8_12 + (x20_5 << 3)) = 0
            x8_13 = entry_x0[1].d
            
            if (x20_5.d + 1 u> x8_13)
                break
            
            x0_10 = *(*entry_x0 + (zx.q(x20_5.d + 1) << 3))
            x20_5 = zx.q(x20_5.d + 1)
            
            if (x0_10 == 0)
                break
    
    void* x0_11 = *entry_x0
    *(entry_x0 + 0xc) = 0
    result = XPooledFree(x0_11, (x8_13 << 3) + 8)
    *entry_x0 = 0

return result
