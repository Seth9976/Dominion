// 函数: _Z17CardLookupDisposev
// 地址: 0x9e6ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *gCardLookup

if (x8 != 0)
    void* x0_1 = *x8
    uint64_t x19_1 = 0
    
    if (x0_1 == 0)
        goto label_9e6b28
    
    int32_t x8_1
    
    while (true)
        void* x21_1 = *(x0_1 + 0x18)
        XPooledFree(x0_1, 0x20)
        x0_1 = x21_1
        
        if (x21_1 == 0)
            x8 = *gCardLookup
        label_9e6b28:
            *(x8 + (x19_1 << 3)) = 0
            x8_1 = *(gCardLookup + 8)
            
            if (x19_1.d + 1 u> x8_1)
                break
            
            x0_1 = *(*gCardLookup + (zx.q(x19_1.d + 1) << 3))
            x19_1 = zx.q(x19_1.d + 1)
            
            if (x0_1 == 0)
                break
    
    void* x0_2 = *gCardLookup
    *(gCardLookup + 0xc) = 0
    XPooledFree(x0_2, (x8_1 << 3) + 8)
    *gCardLookup = 0

void* x8_3 = *(gCardLookup + 0x10)

if (x8_3 == 0)
    return 

void* x19_2 = *x8_3
uint64_t x21_2 = 0

if (x19_2 == 0)
    goto label_9e6ba4

int32_t x8_4

while (true)
    void* x22_1 = *(x19_2 + 0x10)
    XString::~XString()
    XPooledFree(x19_2, 0x18)
    x19_2 = x22_1
    
    if (x22_1 == 0)
        x8_3 = *(gCardLookup + 0x10)
    label_9e6ba4:
        *(x8_3 + (x21_2 << 3)) = 0
        x8_4 = *(gCardLookup + 0x18)
        
        if (x21_2.d + 1 u> x8_4)
            break
        
        x19_2 = *(*(gCardLookup + 0x10) + (zx.q(x21_2.d + 1) << 3))
        x21_2 = zx.q(x21_2.d + 1)
        
        if (x19_2 == 0)
            break

void* x0_5 = *(gCardLookup + 0x10)
*(gCardLookup + 0x1c) = 0
XPooledFree(x0_5, (x8_4 << 3) + 8)
*(gCardLookup + 0x10) = 0
