// 函数: _Z9UIDisposev
// 地址: 0x10540ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*gUsingLegacyUI) == 0)
    return 

void* x20_1 = *gUISystem

if (x20_1 != 0)
    uint64_t x8_1 = zx.q(*(gUISystem + 8))
    void* x0_1
    
    if (x8_1.d == 0)
        x0_1 = x20_1
    else
        int64_t x8_2 = x20_1 + x8_1 * 0x220
        x0_1 = x20_1
        
        do
            x20_1 += 0x220
            
            while (zx.d(*(x20_1 - 6)) == 0)
                bool cond:0_1 = x20_1 u< x8_2
                x20_1 += 0x220
                
                if (not(cond:0_1))
                    goto label_1054190
            
            UITextBox::~UITextBox()
            XString::~XString()
            int32_t x9_2 = *(gUISystem + 0x10)
            *(gUISystem + 0x10) = zx.d(*(x20_1 - 8))
            *(x20_1 - 8) = x9_2
            x0_1 = *gUISystem
            uint64_t x9_3 = zx.q(*(gUISystem + 8))
            *(gUISystem + 0x14) -= 1
            x8_2 = x0_1 + x9_3 * 0x220
        while (x8_2 u> x20_1)
    
label_1054190:
    *(gUISystem + 8) = 0
    *(gUISystem + 0x10) = 0
    XFree(x0_1)
    *(gUISystem + 0x20) = 0
    *(gUISystem + 8) = 0
    *(gUISystem + 0x10) = 0
    *gUISystem = 0

void* x0 = *(gUISystem + 0x28)

if (x0 == 0)
    return 

uint64_t x8_5 = zx.q(*(gUISystem + 0x30))

if (x8_5.d != 0)
    int64_t x8_6 = x0 + x8_5 * 0x458
    void* x9_4 = x0
    
    while (true)
        int32_t x10_4 = *(x9_4 + 0x450)
        
        if (x10_4 u>> 0x10 != 0)
            *(x9_4 + 0x450) = *(gUISystem + 0x38)
            x9_4 += 0x458
            int32_t x10_3 = *(gUISystem + 0x3c) - 1
            *(gUISystem + 0x38) = x10_4 & 0xffff
            *(gUISystem + 0x3c) = x10_3
            
            if (x8_6 u<= x9_4)
                break
        else
            x9_4 += 0x458
            
            if (x9_4 u>= x8_6)
                break

*(gUISystem + 0x30) = 0
*(gUISystem + 0x38) = 0
XFree(x0)
*(gUISystem + 0x48) = 0
*(gUISystem + 0x30) = 0
*(gUISystem + 0x38) = 0
*(gUISystem + 0x28) = 0
