// 函数: _Z17GameClientDisposev
// 地址: 0x9b47ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
void* x8 = *(x0 + 0x7590)

if (x8 != 0)
    void* x0_1 = *x8
    uint64_t x20_1 = 0
    
    if (x0_1 == 0)
        goto label_9b47f8
    
    int32_t x8_1
    
    while (true)
        void* x21_1 = *(x0_1 + 0x18)
        XPooledFree(x0_1, 0x20)
        x0_1 = x21_1
        
        if (x21_1 == 0)
            x8 = *(x0 + 0x7590)
        label_9b47f8:
            *(x8 + (x20_1 << 3)) = 0
            x8_1 = *(x0 + 0x7598)
            
            if (x20_1.d + 1 u> x8_1)
                break
            
            x0_1 = *(*(x0 + 0x7590) + (zx.q(x20_1.d + 1) << 3))
            x20_1 = zx.q(x20_1.d + 1)
            
            if (x0_1 == 0)
                break
    
    *(x0 + 0x759c) = 0
    XPooledFree(*(x0 + 0x7590), (x8_1 << 3) + 8)
    *(x0 + 0x7590) = 0

void* x8_3 = *(x0 + 0x75d8)

if (x8_3 != 0)
    void* x20_2 = *x8_3
    uint64_t x21_2 = 0
    
    if (x20_2 == 0)
        goto label_9b4874
    
    int32_t x8_4
    
    while (true)
        void* x23_1 = *(x20_2 + 0x28)
        XString::~XString()
        XPooledFree(x20_2, 0x30)
        x20_2 = x23_1
        
        if (x23_1 == 0)
            x8_3 = *(x0 + 0x75d8)
        label_9b4874:
            *(x8_3 + (x21_2 << 3)) = 0
            x8_4 = *(x0 + 0x75e0)
            
            if (x21_2.d + 1 u> x8_4)
                break
            
            x20_2 = *(*(x0 + 0x75d8) + (zx.q(x21_2.d + 1) << 3))
            x21_2 = zx.q(x21_2.d + 1)
            
            if (x20_2 == 0)
                break
    
    *(x0 + 0x75e4) = 0
    XPooledFree(*(x0 + 0x75d8), (x8_4 << 3) + 8)
    *(x0 + 0x75d8) = 0

void* x8_6 = *(x0 + 0x75e8)

if (x8_6 != 0)
    void* x20_3 = *x8_6
    uint64_t x21_3 = 0
    
    if (x20_3 == 0)
        goto label_9b48f0
    
    int32_t x8_7
    
    while (true)
        void* x23_2 = *(x20_3 + 0x28)
        XString::~XString()
        XPooledFree(x20_3, 0x30)
        x20_3 = x23_2
        
        if (x23_2 == 0)
            x8_6 = *(x0 + 0x75e8)
        label_9b48f0:
            *(x8_6 + (x21_3 << 3)) = 0
            x8_7 = *(x0 + 0x75f0)
            
            if (x21_3.d + 1 u> x8_7)
                break
            
            x20_3 = *(*(x0 + 0x75e8) + (zx.q(x21_3.d + 1) << 3))
            x21_3 = zx.q(x21_3.d + 1)
            
            if (x20_3 == 0)
                break
    
    *(x0 + 0x75f4) = 0
    XPooledFree(*(x0 + 0x75e8), (x8_7 << 3) + 8)
    *(x0 + 0x75e8) = 0

void* x21_4 = *(x0 + 0x5080)

if (x21_4 != 0)
    uint64_t x8_9 = zx.q(*(x0 + 0x5088))
    void* x0_9
    
    if (x8_9.d == 0)
        x0_9 = x21_4
    else
        int64_t x8_10 = x21_4 + x8_9 * 0x1338
        x0_9 = x21_4
        
        while (true)
            if (zx.d(*(x21_4 + 0x1332)) != 0)
                XString::~XString()
                XString::~XString()
                XString::~XString()
                int32_t x9_5 = *(x0 + 0x5090)
                *(x0 + 0x5090) = zx.d(*(x21_4 + 0x1330))
                *(x21_4 + 0x1330) = x9_5
                x21_4 += 0x1338
                *(x0 + 0x5094) -= 1
                x0_9 = *(x0 + 0x5080)
                x8_10 = x0_9 + zx.q(*(x0 + 0x5088)) * 0x1338
                
                if (x8_10 u<= x21_4)
                    break
            else
                x21_4 += 0x1338
                
                if (x21_4 u>= x8_10)
                    break
    
    *(x0 + 0x5088) = 0
    *(x0 + 0x5090) = 0
    XFree(x0_9)
    *(x0 + 0x50a0) = 0
    __builtin_memset(x0 + 0x5080, 0, 0x18)

void* x8_15 = *(x0 + 0x78f0)

if (x8_15 != 0)
    uint64_t x10_1 = zx.q(*(x0 + 0x78f8))
    void* x0_13
    
    if (x10_1.d == 0)
        x0_13 = x8_15
    else
        int64_t x10_2 = x8_15 + x10_1 * 0xc
        x0_13 = x8_15
        
        do
            x8_15 += 0xc
            int32_t x11_1
            
            while (true)
                x11_1 = *(x8_15 - 4)
                
                if (x11_1 u>> 0x10 != 0)
                    break
                
                bool cond:0_1 = x8_15 u< x10_2
                x8_15 += 0xc
                
                if (not(cond:0_1))
                    goto label_9b4a5c
            
            int32_t x10_3 = *(x0 + 0x7900)
            *(x0 + 0x7900) = x11_1 & 0xffff
            *(x8_15 - 4) = x10_3
            *(x0 + 0x7904) -= 1
            x0_13 = *(x0 + 0x78f0)
            x10_2 = x0_13 + zx.q(*(x0 + 0x78f8)) * 0xc
        while (x10_2 u> x8_15)
    
label_9b4a5c:
    *(x0 + 0x78f8) = 0
    *(x0 + 0x7900) = 0
    XFree(x0_13)
    *(x0 + 0x7910) = 0
    __builtin_memset(x0 + 0x78f0, 0, 0x18)

ClientNetworkClose(false, true)
LocalizationDispose()
GameCenterDisconnect()
GameDlgManagerDispose()

if (*(x0 + 0x5028) s>= 1)
    int64_t i = 0
    void* x20_6 = x0 + 0x30
    
    do
        XString::operator=(x20_6)
        i += 1
        x20_6 += 0x20
    while (i s< sx.q(*(x0 + 0x5028)))

XString::operator=(x0 + 0x20)

if (*(x0 + 0x5068) != 0)
    LocalGameDispose(x0 + 0x50a8)

GameSpecific_Dispose()
return CardsetsDispose() __tailcall
