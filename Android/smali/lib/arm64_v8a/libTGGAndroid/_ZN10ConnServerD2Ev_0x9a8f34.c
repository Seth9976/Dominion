// 函数: _ZN10ConnServerD2Ev
// 地址: 0x9a8f34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = DailySeedServerData::~DailySeedServerData()
void* entry_x0
void* x8 = *(entry_x0 + 0x50)

if (x8 != 0)
    void* x0_1 = *x8
    uint64_t x20_1 = 0
    
    if (x0_1 == 0)
        goto label_9a8f78
    
    int32_t x8_1
    
    while (true)
        void* x21_1 = *(x0_1 + 8)
        XPooledFree(x0_1, 0x10)
        x0_1 = x21_1
        
        if (x21_1 == 0)
            x8 = *(entry_x0 + 0x50)
        label_9a8f78:
            *(x8 + (x20_1 << 3)) = 0
            x8_1 = *(entry_x0 + 0x58)
            
            if (x20_1.d + 1 u> x8_1)
                break
            
            x0_1 = *(*(entry_x0 + 0x50) + (zx.q(x20_1.d + 1) << 3))
            x20_1 = zx.q(x20_1.d + 1)
            
            if (x0_1 == 0)
                break
    
    void* x0_2 = *(entry_x0 + 0x50)
    *(entry_x0 + 0x5c) = 0
    result = XPooledFree(x0_2, (x8_1 << 3) + 8)
    *(entry_x0 + 0x50) = 0

void* x8_3 = *(entry_x0 + 0x40)

if (x8_3 != 0)
    void* x0_3 = *x8_3
    uint64_t x20_2 = 0
    
    if (x0_3 == 0)
        goto label_9a8fe8
    
    int32_t x8_4
    
    while (true)
        void* x21_2 = *(x0_3 + 8)
        XPooledFree(x0_3, 0x10)
        x0_3 = x21_2
        
        if (x21_2 == 0)
            x8_3 = *(entry_x0 + 0x40)
        label_9a8fe8:
            *(x8_3 + (x20_2 << 3)) = 0
            x8_4 = *(entry_x0 + 0x48)
            
            if (x20_2.d + 1 u> x8_4)
                break
            
            x0_3 = *(*(entry_x0 + 0x40) + (zx.q(x20_2.d + 1) << 3))
            x20_2 = zx.q(x20_2.d + 1)
            
            if (x0_3 == 0)
                break
    
    void* x0_4 = *(entry_x0 + 0x40)
    *(entry_x0 + 0x4c) = 0
    result = XPooledFree(x0_4, (x8_4 << 3) + 8)
    *(entry_x0 + 0x40) = 0

return result
