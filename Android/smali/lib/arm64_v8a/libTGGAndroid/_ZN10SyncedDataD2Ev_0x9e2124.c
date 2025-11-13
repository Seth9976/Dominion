// 函数: _ZN10SyncedDataD2Ev
// 地址: 0x9e2124
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x8 = entry_x0[2]

if (x8 != 0)
    void* x0 = *x8
    uint64_t x20_1 = 0
    
    if (x0 == 0)
        goto label_9e2160
    
    int32_t x8_1
    
    while (true)
        void* x21_1 = *(x0 + 0x18)
        XPooledFree(x0, 0x20)
        x0 = x21_1
        
        if (x21_1 == 0)
            x8 = entry_x0[2]
        label_9e2160:
            *(x8 + (x20_1 << 3)) = 0
            x8_1 = entry_x0[3].d
            
            if (x20_1.d + 1 u> x8_1)
                break
            
            x0 = *(entry_x0[2] + (zx.q(x20_1.d + 1) << 3))
            x20_1 = zx.q(x20_1.d + 1)
            
            if (x0 == 0)
                break
    
    void* x0_1 = entry_x0[2]
    *(entry_x0 + 0x1c) = 0
    XPooledFree(x0_1, (x8_1 << 3) + 8)
    entry_x0[2] = 0

void* x8_3 = *entry_x0

if (x8_3 == 0)
    return 

void* x0_2 = *x8_3
uint64_t x20_2 = 0

if (x0_2 == 0)
    goto label_9e21d0

int32_t x8_4

while (true)
    void* x21_2 = *(x0_2 + 0x10)
    XPooledFree(x0_2, 0x18)
    x0_2 = x21_2
    
    if (x21_2 == 0)
        x8_3 = *entry_x0
    label_9e21d0:
        *(x8_3 + (x20_2 << 3)) = 0
        x8_4 = entry_x0[1].d
        
        if (x20_2.d + 1 u> x8_4)
            break
        
        x0_2 = *(*entry_x0 + (zx.q(x20_2.d + 1) << 3))
        x20_2 = zx.q(x20_2.d + 1)
        
        if (x0_2 == 0)
            break

void* x0_3 = *entry_x0
*(entry_x0 + 0xc) = 0
XPooledFree(x0_3, (x8_4 << 3) + 8)
*entry_x0 = 0
