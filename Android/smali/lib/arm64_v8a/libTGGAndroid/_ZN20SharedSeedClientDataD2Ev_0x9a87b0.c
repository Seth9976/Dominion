// 函数: _ZN20SharedSeedClientDataD2Ev
// 地址: 0x9a87b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = ClientLeaderboard::~ClientLeaderboard()
int64_t* entry_x0
void* x8 = entry_x0[2]

if (x8 != 0)
    void* x20_1 = *x8
    uint64_t x21_1 = 0
    
    if (x20_1 == 0)
        goto label_9a8804
    
    int32_t x8_1
    
    while (true)
        void* x22_1 = *(x20_1 + 0x28)
        XString::~XString()
        XPooledFree(x20_1, 0x30)
        x20_1 = x22_1
        
        if (x22_1 == 0)
            x8 = entry_x0[2]
        label_9a8804:
            *(x8 + (x21_1 << 3)) = 0
            x8_1 = entry_x0[3].d
            
            if (x21_1.d + 1 u> x8_1)
                break
            
            x20_1 = *(entry_x0[2] + (zx.q(x21_1.d + 1) << 3))
            x21_1 = zx.q(x21_1.d + 1)
            
            if (x20_1 == 0)
                break
    
    void* x0_3 = entry_x0[2]
    *(entry_x0 + 0x1c) = 0
    result = XPooledFree(x0_3, (x8_1 << 3) + 8)
    entry_x0[2] = 0

void* x8_3 = *entry_x0

if (x8_3 != 0)
    void* x20_2 = *x8_3
    uint64_t x21_2 = 0
    
    if (x20_2 == 0)
        goto label_9a8880
    
    int32_t x8_4
    
    while (true)
        void* x22_2 = *(x20_2 + 0x28)
        XString::~XString()
        XPooledFree(x20_2, 0x30)
        x20_2 = x22_2
        
        if (x22_2 == 0)
            x8_3 = *entry_x0
        label_9a8880:
            *(x8_3 + (x21_2 << 3)) = 0
            x8_4 = entry_x0[1].d
            
            if (x21_2.d + 1 u> x8_4)
                break
            
            x20_2 = *(*entry_x0 + (zx.q(x21_2.d + 1) << 3))
            x21_2 = zx.q(x21_2.d + 1)
            
            if (x20_2 == 0)
                break
    
    void* x0_6 = *entry_x0
    *(entry_x0 + 0xc) = 0
    result = XPooledFree(x0_6, (x8_4 << 3) + 8)
    *entry_x0 = 0

return result
